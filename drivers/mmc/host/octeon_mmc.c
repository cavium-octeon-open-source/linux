/*
 * Driver for MMC and SSD cards for Cavium OCTEON SOCs.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2012-2015 Cavium Inc.
 */

#include <linux/platform_device.h>
#include <linux/of_platform.h>
#include <linux/scatterlist.h>
#include <linux/interrupt.h>
#include <linux/blkdev.h>
#include <linux/device.h>
#include <linux/module.h>
#include <linux/delay.h>
#include <linux/init.h>
#include <linux/clk.h>
#include <linux/err.h>
#include <linux/io.h>
#include <linux/of.h>

#include <linux/mmc/card.h>
#include <linux/mmc/host.h>
#include <linux/mmc/mmc.h>
#include <linux/mmc/sd.h>

#include <linux/gpio/consumer.h>
#include <linux/regulator/consumer.h>

#include <asm/byteorder.h>
#include <asm/octeon/octeon.h>
#include <asm/octeon/cvmx-mio-defs.h>

#define DRV_NAME	"octeon_mmc"

#define OCTEON_MAX_MMC			4

#define OCT_MIO_NDF_DMA_CFG		0x00
#define OCT_MIO_EMM_DMA_ADR		0x08

#define OCT_MIO_EMM_CFG			0x00
#define OCT_MIO_EMM_SWITCH		0x48
#define OCT_MIO_EMM_DMA			0x50
#define OCT_MIO_EMM_CMD			0x58
#define OCT_MIO_EMM_RSP_STS		0x60
#define OCT_MIO_EMM_RSP_LO		0x68
#define OCT_MIO_EMM_RSP_HI		0x70
#define OCT_MIO_EMM_INT			0x78
#define OCT_MIO_EMM_INT_EN		0x80
#define OCT_MIO_EMM_WDOG		0x88
#define OCT_MIO_EMM_SAMPLE		0x90
#define OCT_MIO_EMM_STS_MASK		0x98
#define OCT_MIO_EMM_RCA			0xa0
#define OCT_MIO_EMM_BUF_IDX		0xe0
#define OCT_MIO_EMM_BUF_DAT		0xe8

#define CVMX_MIO_BOOT_CTL CVMX_ADD_IO_SEG(0x00011800000000D0ull)

struct octeon_mmc_unit {
	void __iomem *base;
	void __iomem *ndf_base;
	u64	emm_cfg;
	u64	n_minus_one;  /* OCTEON II workaround location */
	int	last_host;

	struct semaphore mmc_serializer;
	struct mmc_request	*current_req;
	unsigned int		linear_buf_size;
	void			*linear_buf;
	struct sg_mapping_iter smi;
	int sg_idx;
	bool dma_active;

	struct platform_device	*pdev;
	struct regulator *global_power;
	bool dma_err_pending;
	bool need_bootbus_lock;
	bool big_dma_addr;
	bool need_irq_handler_lock;
	spinlock_t irq_handler_lock;

	struct octeon_mmc_host	*host[OCTEON_MAX_MMC];
};

struct octeon_mmc_host {
	struct mmc_host         *mmc;	/* mmc core object */
	struct octeon_mmc_unit	*unit;	/* common hw for all 4 slots */

	unsigned int		clock;
	unsigned int		sclock;

	u64			cached_switch;
	u64			cached_rca;

	unsigned int		cmd_cnt; /* sample delay */
	unsigned int		dat_cnt; /* sample delay */

	int			bus_width;
	int			bus_id;

	struct gpio_desc	*ro_gpiod;
	struct gpio_desc	*cd_gpiod;
	struct gpio_desc	*pwr_gpiod;
};

static int bb_size = 1 << 18;
module_param(bb_size, int, S_IRUGO);
MODULE_PARM_DESC(bb_size,
		 "Size of DMA linearizing buffer (max transfer size).");

static int ddr = 2;
module_param(ddr, int, S_IRUGO);
MODULE_PARM_DESC(ddr,
		 "enable DoubleDataRate clocking: 0=no, 1=always, 2=at spi-max-frequency/2");

#if 0
#define octeon_mmc_dbg trace_printk
#else
static inline void octeon_mmc_dbg(const char *s, ...) { }
#endif

static void octeon_mmc_acquire_bus(struct octeon_mmc_unit *unit)
{
	if (unit->need_bootbus_lock) {
		down(&octeon_bootbus_sem);
		/* On cn70XX switch the mmc unit onto the bus. */
		if (OCTEON_IS_MODEL(OCTEON_CN70XX))
			cvmx_write_csr(CVMX_MIO_BOOT_CTL, 0);
	} else {
		down(&unit->mmc_serializer);
	}
}

static void octeon_mmc_release_bus(struct octeon_mmc_unit *unit)
{
	if (unit->need_bootbus_lock)
		up(&octeon_bootbus_sem);
	else
		up(&unit->mmc_serializer);
}

struct octeon_mmc_cr_type {
	u8 ctype;
	u8 rtype;
};

/*
 * The OCTEON MMC host hardware assumes that all commands have fixed
 * command and response types.  These are correct if MMC devices are
 * being used.  However, non-MMC devices like SD use command and
 * response types that are unexpected by the host hardware.
 *
 * The command and response types can be overridden by supplying an
 * XOR value that is applied to the type.  We calculate the XOR value
 * from the values in this table and the flags passed from the MMC
 * core.
 */
static struct octeon_mmc_cr_type octeon_mmc_cr_types[] = {
	{0, 0},		/* CMD0 */
	{0, 3},		/* CMD1 */
	{0, 2},		/* CMD2 */
	{0, 1},		/* CMD3 */
	{0, 0},		/* CMD4 */
	{0, 1},		/* CMD5 */
	{0, 1},		/* CMD6 */
	{0, 1},		/* CMD7 */
	{1, 1},		/* CMD8 */
	{0, 2},		/* CMD9 */
	{0, 2},		/* CMD10 */
	{1, 1},		/* CMD11 */
	{0, 1},		/* CMD12 */
	{0, 1},		/* CMD13 */
	{1, 1},		/* CMD14 */
	{0, 0},		/* CMD15 */
	{0, 1},		/* CMD16 */
	{1, 1},		/* CMD17 */
	{1, 1},		/* CMD18 */
	{3, 1},		/* CMD19 */
	{2, 1},		/* CMD20 */
	{0, 0},		/* CMD21 */
	{0, 0},		/* CMD22 */
	{0, 1},		/* CMD23 */
	{2, 1},		/* CMD24 */
	{2, 1},		/* CMD25 */
	{2, 1},		/* CMD26 */
	{2, 1},		/* CMD27 */
	{0, 1},		/* CMD28 */
	{0, 1},		/* CMD29 */
	{1, 1},		/* CMD30 */
	{1, 1},		/* CMD31 */
	{0, 0},		/* CMD32 */
	{0, 0},		/* CMD33 */
	{0, 0},		/* CMD34 */
	{0, 1},		/* CMD35 */
	{0, 1},		/* CMD36 */
	{0, 0},		/* CMD37 */
	{0, 1},		/* CMD38 */
	{0, 4},		/* CMD39 */
	{0, 5},		/* CMD40 */
	{0, 0},		/* CMD41 */
	{2, 1},		/* CMD42 */
	{0, 0},		/* CMD43 */
	{0, 0},		/* CMD44 */
	{0, 0},		/* CMD45 */
	{0, 0},		/* CMD46 */
	{0, 0},		/* CMD47 */
	{0, 0},		/* CMD48 */
	{0, 0},		/* CMD49 */
	{0, 0},		/* CMD50 */
	{0, 0},		/* CMD51 */
	{0, 0},		/* CMD52 */
	{0, 0},		/* CMD53 */
	{0, 0},		/* CMD54 */
	{0, 1},		/* CMD55 */
	{0xff, 0xff},	/* CMD56 */
	{0, 0},		/* CMD57 */
	{0, 0},		/* CMD58 */
	{0, 0},		/* CMD59 */
	{0, 0},		/* CMD60 */
	{0, 0},		/* CMD61 */
	{0, 0},		/* CMD62 */
	{0, 0}		/* CMD63 */
};

struct octeon_mmc_cr_mods {
	u8 ctype_xor;
	u8 rtype_xor;
};

/*
 * The functions below are used for the EMMC-17978 workaround.
 *
 * Due to an imperfection in the design of the MMC bus hardware,
 * the 2nd to last cache block of a DMA read must be locked into the L2 Cache.
 * Otherwise, data corruption may occur.
 */

static inline void *phys_to_ptr(u64 address)
{
	return (void *)(address | (1ull<<63)); /* XKPHYS */
}

/**
 * Lock a single line into L2. The line is zeroed before locking
 * to make sure no dram accesses are made.
 *
 * @addr   Physical address to lock
 */
static void l2c_lock_line(u64 addr)
{
	char *addr_ptr = phys_to_ptr(addr);

	asm volatile (
		"cache 31, %[line]"	/* Unlock the line */
		:: [line] "m" (*addr_ptr));
}

/**
 * Locks a memory region in the L2 cache
 *
 * @start - start address to begin locking
 * @len - length in bytes to lock
 */
static void l2c_lock_mem_region(u64 start, u64 len)
{
	u64 end;

	/* Round start/end to cache line boundaries */
	end = ALIGN(start + len - 1, CVMX_CACHE_LINE_SIZE);
	start = ALIGN(start, CVMX_CACHE_LINE_SIZE);

	while (start <= end) {
		l2c_lock_line(start);
		start += CVMX_CACHE_LINE_SIZE;
	}
	asm volatile("sync");
}

/**
 * Unlock a single line in the L2 cache.
 *
 * @addr	Physical address to unlock
 *
 * Return Zero on success
 */
static void l2c_unlock_line(u64 addr)
{
	char *addr_ptr = phys_to_ptr(addr);

	asm volatile (
		"cache 23, %[line]"	/* Unlock the line */
		:: [line] "m" (*addr_ptr));
}

/**
 * Unlock a memory region in the L2 cache
 *
 * @start - start address to unlock
 * @len - length to unlock in bytes
 */
static void l2c_unlock_mem_region(u64 start, u64 len)
{
	u64 end;

	/* Round start/end to cache line boundaries */
	end = ALIGN(start + len - 1, CVMX_CACHE_LINE_SIZE);
	start = ALIGN(start, CVMX_CACHE_LINE_SIZE);

	while (start <= end) {
		l2c_unlock_line(start);
		start += CVMX_CACHE_LINE_SIZE;
	}
}

static struct octeon_mmc_cr_mods octeon_mmc_get_cr_mods(struct mmc_command *cmd)
{
	struct octeon_mmc_cr_type *cr;
	u8 desired_ctype, hardware_ctype;
	u8 desired_rtype, hardware_rtype;
	struct octeon_mmc_cr_mods r;

	desired_ctype = desired_rtype = 0;

	cr = octeon_mmc_cr_types + (cmd->opcode & 0x3f);
	hardware_ctype = cr->ctype;
	hardware_rtype = cr->rtype;
	if (cmd->opcode == 56) { /* CMD56 GEN_CMD */
		hardware_ctype = (cmd->arg & 1) ? 1 : 2;
	}

	switch (mmc_cmd_type(cmd)) {
	case MMC_CMD_ADTC:
		desired_ctype = (cmd->data->flags & MMC_DATA_WRITE) ? 2 : 1;
		break;
	case MMC_CMD_AC:
	case MMC_CMD_BC:
	case MMC_CMD_BCR:
		desired_ctype = 0;
		break;
	}

	switch (mmc_resp_type(cmd)) {
	case MMC_RSP_NONE:
		desired_rtype = 0;
		break;
	case MMC_RSP_R1:/* MMC_RSP_R5, MMC_RSP_R6, MMC_RSP_R7 */
	case MMC_RSP_R1B:
		desired_rtype = 1;
		break;
	case MMC_RSP_R2:
		desired_rtype = 2;
		break;
	case MMC_RSP_R3: /* MMC_RSP_R4 */
		desired_rtype = 3;
		break;
	}
	r.ctype_xor = desired_ctype ^ hardware_ctype;
	r.rtype_xor = desired_rtype ^ hardware_rtype;
	return r;
}

static bool octeon_mmc_switch_val_changed(struct octeon_mmc_host *host,
					  u64 new_val)
{
	/* Match BUS_ID, HS_TIMING, BUS_WIDTH, POWER_CLASS, CLK_HI, CLK_LO */
	u64 m = 0x3001070fffffffffull;

	return (host->cached_switch & m) != (new_val & m);
}

static unsigned int octeon_mmc_timeout_to_wdog(struct octeon_mmc_host *host,
					       unsigned int ns)
{
	u64 bt = (u64)host->clock * (u64)ns;

	return (unsigned int)(bt / 1000000000);
}

static irqreturn_t octeon_mmc_interrupt(int irq, void *dev_id)
{
	struct octeon_mmc_unit *unit = dev_id;
	union cvmx_mio_emm_int emm_int;
	struct mmc_request	*req;
	bool unit_done;
	union cvmx_mio_emm_rsp_sts rsp_sts;
	unsigned long flags = 0;

	if (unit->need_irq_handler_lock)
		spin_lock_irqsave(&unit->irq_handler_lock, flags);
	else
		__acquire(&unit->irq_handler_lock);
	emm_int.u64 = readq(unit->base + OCT_MIO_EMM_INT);
	req = unit->current_req;
	writeq(emm_int.u64, unit->base + OCT_MIO_EMM_INT);

	octeon_mmc_dbg("Got interrupt: EMM_INT = 0x%llx\n", emm_int.u64);

	if (!req)
		goto out;

	rsp_sts.u64 = readq(unit->base + OCT_MIO_EMM_RSP_STS);
	octeon_mmc_dbg("octeon_mmc_interrupt  MIO_EMM_RSP_STS 0x%llx\n",
		rsp_sts.u64);

	if (unit->dma_err_pending) {
		unit->current_req = NULL;
		unit->dma_err_pending = false;
		req->done(req);
		unit_done = true;
		goto no_req_done;
	}

	if (!unit->dma_active && emm_int.s.buf_done && req->data) {
		unsigned int type = (rsp_sts.u64 >> 7) & 3;

		if (type == 1) {
			/* Read */
			int dbuf = rsp_sts.s.dbuf;
			struct sg_mapping_iter *smi = &unit->smi;
			unsigned int data_len =
				req->data->blksz * req->data->blocks;
			unsigned int bytes_xfered;
			u64 dat = 0;
			int shift = -1;

			/* Auto inc from offset zero */
			writeq((u64)(0x10000 | (dbuf << 6)),
				unit->base + OCT_MIO_EMM_BUF_IDX);

			for (bytes_xfered = 0; bytes_xfered < data_len;) {
				if (smi->consumed >= smi->length) {
					if (!sg_miter_next(smi))
						break;
					smi->consumed = 0;
				}
				if (shift < 0) {
					dat = readq(unit->base +
						OCT_MIO_EMM_BUF_DAT);
					shift = 56;
				}

				while (smi->consumed < smi->length &&
					shift >= 0) {
					((u8 *)(smi->addr))[smi->consumed] =
						(dat >> shift) & 0xff;
					bytes_xfered++;
					smi->consumed++;
					shift -= 8;
				}
			}
			sg_miter_stop(smi);
			req->data->bytes_xfered = bytes_xfered;
			req->data->error = 0;
		} else if (type == 2) {
			/* write */
			req->data->bytes_xfered = req->data->blksz *
				req->data->blocks;
			req->data->error = 0;
		}
	}
	unit_done = emm_int.s.cmd_done || emm_int.s.dma_done ||
		emm_int.s.cmd_err || emm_int.s.dma_err;
	if (unit_done && req->done) {
		if (rsp_sts.s.rsp_bad_sts ||
		    rsp_sts.s.rsp_crc_err ||
		    rsp_sts.s.rsp_timeout ||
		    rsp_sts.s.blk_crc_err ||
		    rsp_sts.s.blk_timeout ||
		    rsp_sts.s.dbuf_err) {
			req->cmd->error = -EILSEQ;
		} else {
			req->cmd->error = 0;
		}

		if (unit->dma_active && req->data) {
			req->data->error = 0;
			req->data->bytes_xfered = req->data->blocks *
				req->data->blksz;
			if (!(req->data->flags & MMC_DATA_WRITE) &&
				req->data->sg_len > 1) {
				size_t r = sg_copy_from_buffer(req->data->sg,
					req->data->sg_len, unit->linear_buf,
					req->data->bytes_xfered);
				WARN_ON(r != req->data->bytes_xfered);
			}
		}
		if (rsp_sts.s.rsp_val) {
			u64 rsp_hi;
			u64 rsp_lo = readq(unit->base + OCT_MIO_EMM_RSP_LO);

			switch (rsp_sts.s.rsp_type) {
			case 1:
			case 3:
				req->cmd->resp[0] = (rsp_lo >> 8) & 0xffffffff;
				req->cmd->resp[1] = 0;
				req->cmd->resp[2] = 0;
				req->cmd->resp[3] = 0;
				break;
			case 2:
				req->cmd->resp[3] = rsp_lo & 0xffffffff;
				req->cmd->resp[2] = (rsp_lo >> 32) & 0xffffffff;
				rsp_hi = readq(unit->base + OCT_MIO_EMM_RSP_HI);
				req->cmd->resp[1] = rsp_hi & 0xffffffff;
				req->cmd->resp[0] = (rsp_hi >> 32) & 0xffffffff;
				break;
			default:
				octeon_mmc_dbg("octeon_mmc_interrupt unhandled rsp_val %d\n",
					       rsp_sts.s.rsp_type);
				break;
			}
			octeon_mmc_dbg("octeon_mmc_interrupt  resp %08x %08x %08x %08x\n",
				       req->cmd->resp[0], req->cmd->resp[1],
				       req->cmd->resp[2], req->cmd->resp[3]);
		}
		if (emm_int.s.dma_err && rsp_sts.s.dma_pend) {
			/* Try to clean up failed DMA */
			union cvmx_mio_emm_dma emm_dma;

			emm_dma.u64 = readq(unit->base + OCT_MIO_EMM_DMA);
			emm_dma.s.dma_val = 1;
			emm_dma.s.dat_null = 1;
			emm_dma.s.bus_id = rsp_sts.s.bus_id;
			writeq(emm_dma.u64, unit->base + OCT_MIO_EMM_DMA);
			unit->dma_err_pending = true;
			unit_done = false;
			goto no_req_done;
		}

		unit->current_req = NULL;
		req->done(req);
	}
no_req_done:
	if (unit->n_minus_one) {
		l2c_unlock_mem_region(unit->n_minus_one, 512);
		unit->n_minus_one = 0;
	}
	if (unit_done)
		octeon_mmc_release_bus(unit);
out:
	if (unit->need_irq_handler_lock)
		spin_unlock_irqrestore(&unit->irq_handler_lock, flags);
	else
		__release(&unit->irq_handler_lock);
	return IRQ_RETVAL(emm_int.u64 != 0);
}

static void octeon_mmc_switch_to(struct octeon_mmc_host	*host)
{
	struct octeon_mmc_unit	*unit = host->unit;
	struct octeon_mmc_host	*old_slot;
	union cvmx_mio_emm_switch sw;
	union cvmx_mio_emm_sample samp;

	if (host->bus_id == unit->last_host)
		goto out;

	if (unit->last_host >= 0 && unit->host[unit->last_host]) {
		old_slot = unit->host[unit->last_host];
		old_slot->cached_switch =
			readq(unit->base + OCT_MIO_EMM_SWITCH);
		old_slot->cached_rca =
			readq(unit->base + OCT_MIO_EMM_RCA);
	}
	writeq(host->cached_rca, unit->base + OCT_MIO_EMM_RCA);
	sw.u64 = host->cached_switch;
	sw.s.bus_id = 0;
	writeq(sw.u64, unit->base + OCT_MIO_EMM_SWITCH);
	sw.s.bus_id = host->bus_id;
	writeq(sw.u64, unit->base + OCT_MIO_EMM_SWITCH);

	samp.u64 = 0;
	samp.s.cmd_cnt = host->cmd_cnt;
	samp.s.dat_cnt = host->dat_cnt;
	writeq(samp.u64, unit->base + OCT_MIO_EMM_SAMPLE);
out:
	unit->last_host = host->bus_id;
}

static void octeon_mmc_dma_request(struct mmc_host *mmc,
				   struct mmc_request *mrq)
{
	struct octeon_mmc_host	*host;
	struct octeon_mmc_unit	*unit;
	struct mmc_command *cmd;
	struct mmc_data *data;
	union cvmx_mio_emm_int emm_int;
	union cvmx_mio_emm_dma emm_dma;
	union cvmx_mio_ndf_dma_cfg dma_cfg;

	cmd = mrq->cmd;
	if (mrq->data == NULL || mrq->data->sg == NULL || !mrq->data->sg_len ||
	    mrq->stop == NULL || mrq->stop->opcode != MMC_STOP_TRANSMISSION) {
		dev_err(&mmc->card->dev,
			"Error: octeon_mmc_dma_request no data\n");
		cmd->error = -EINVAL;
		if (mrq->done)
			mrq->done(mrq);
		return;
	}

	host = mmc_priv(mmc);
	unit = host->unit;

	/* Only a single user of the bootbus at a time. */
	octeon_mmc_acquire_bus(unit);

	octeon_mmc_switch_to(host);

	data = mrq->data;

	if (data->timeout_ns) {
		writeq(octeon_mmc_timeout_to_wdog(host, data->timeout_ns),
			unit->base + OCT_MIO_EMM_WDOG);
		octeon_mmc_dbg("OCT_MIO_EMM_WDOG %llu\n",
			readq(unit->base + OCT_MIO_EMM_WDOG));
	}

	WARN_ON(unit->current_req);
	unit->current_req = mrq;

	unit->sg_idx = 0;

	WARN_ON(data->blksz * data->blocks > unit->linear_buf_size);

	if ((data->flags & MMC_DATA_WRITE) && data->sg_len > 1) {
		size_t r = sg_copy_to_buffer(data->sg, data->sg_len,
			 unit->linear_buf, data->blksz * data->blocks);
		WARN_ON(data->blksz * data->blocks != r);
	}

	dma_cfg.u64 = 0;
	dma_cfg.s.en = 1;
	dma_cfg.s.rw = (data->flags & MMC_DATA_WRITE) ? 1 : 0;
#ifdef __LITTLE_ENDIAN
	dma_cfg.s.endian = 1;
#endif
	dma_cfg.s.size = ((data->blksz * data->blocks) / 8) - 1;
	if (!unit->big_dma_addr) {
		if (data->sg_len > 1)
			dma_cfg.s.adr = virt_to_phys(unit->linear_buf);
		else
			dma_cfg.s.adr = sg_phys(data->sg);
	}
	writeq(dma_cfg.u64, unit->ndf_base + OCT_MIO_NDF_DMA_CFG);
	octeon_mmc_dbg("MIO_NDF_DMA_CFG: %016llx\n",
		(unsigned long long)dma_cfg.u64);
	if (unit->big_dma_addr) {
		u64 addr;

		if (data->sg_len > 1)
			addr = virt_to_phys(unit->linear_buf);
		else
			addr = sg_phys(data->sg);
		writeq(addr, unit->ndf_base + OCT_MIO_EMM_DMA_ADR);
		octeon_mmc_dbg("MIO_EMM_DMA_ADR: %016llx\n",
			(unsigned long long)addr);
	}

	emm_dma.u64 = 0;
	emm_dma.s.bus_id = host->bus_id;
	emm_dma.s.dma_val = 1;
	emm_dma.s.sector = mmc_card_blockaddr(mmc->card) ? 1 : 0;
	emm_dma.s.rw = (data->flags & MMC_DATA_WRITE) ? 1 : 0;
	if (mmc_card_mmc(mmc->card) ||
	    (mmc_card_sd(mmc->card) &&
		(mmc->card->scr.cmds & SD_SCR_CMD23_SUPPORT)))
		emm_dma.s.multi = 1;
	emm_dma.s.block_cnt = data->blocks;
	emm_dma.s.card_addr = cmd->arg;

	emm_int.u64 = 0;
	emm_int.s.dma_done = 1;
	emm_int.s.cmd_err = 1;
	emm_int.s.dma_err = 1;
	/* Clear the bit. */
	writeq(emm_int.u64, unit->base + OCT_MIO_EMM_INT);
	writeq(emm_int.u64, unit->base + OCT_MIO_EMM_INT_EN);
	unit->dma_active = true;

	if ((OCTEON_IS_MODEL(OCTEON_CN6XXX) ||
		OCTEON_IS_MODEL(OCTEON_CNF7XXX)) &&
	    cmd->opcode == MMC_WRITE_MULTIPLE_BLOCK &&
	    (data->blksz * data->blocks) > 1024) {
		unit->n_minus_one = dma_cfg.s.adr +
			(data->blksz * data->blocks) - 1024;
		l2c_lock_mem_region(unit->n_minus_one, 512);
	}

	if (mmc->card && mmc_card_sd(mmc->card))
		writeq(0x00b00000ull, unit->base + OCT_MIO_EMM_STS_MASK);
	else
		writeq(0xe4f90080ull, unit->base + OCT_MIO_EMM_STS_MASK);
	writeq(emm_dma.u64, unit->base + OCT_MIO_EMM_DMA);
	octeon_mmc_dbg("MIO_EMM_DMA: %llx\n", emm_dma.u64);
}

static void octeon_mmc_request(struct mmc_host *mmc, struct mmc_request *mrq)
{
	struct octeon_mmc_host	*host;
	struct octeon_mmc_unit	*unit;
	struct mmc_command *cmd;
	union cvmx_mio_emm_int emm_int;
	union cvmx_mio_emm_cmd emm_cmd;
	struct octeon_mmc_cr_mods mods;

	cmd = mrq->cmd;

	if (cmd->opcode == MMC_READ_MULTIPLE_BLOCK ||
		cmd->opcode == MMC_WRITE_MULTIPLE_BLOCK) {
		octeon_mmc_dma_request(mmc, mrq);
		return;
	}

	mods = octeon_mmc_get_cr_mods(cmd);

	host = mmc_priv(mmc);
	unit = host->unit;

	/* Only a single user of the bootbus at a time. */
	octeon_mmc_acquire_bus(unit);

	octeon_mmc_switch_to(host);

	WARN_ON(unit->current_req);
	unit->current_req = mrq;

	emm_int.u64 = 0;
	emm_int.s.cmd_done = 1;
	emm_int.s.cmd_err = 1;
	if (cmd->data) {
		octeon_mmc_dbg("command has data\n");
		if (cmd->data->flags & MMC_DATA_READ) {
			sg_miter_start(&unit->smi, mrq->data->sg,
				       mrq->data->sg_len,
				       SG_MITER_ATOMIC | SG_MITER_TO_SG);
		} else {
			struct sg_mapping_iter *smi = &unit->smi;
			unsigned int data_len =
				mrq->data->blksz * mrq->data->blocks;
			unsigned int bytes_xfered;
			u64 dat = 0;
			int shift = 56;
			/*
			 * Copy data to the xmit buffer before
			 * issuing the command
			 */
			sg_miter_start(smi, mrq->data->sg,
				       mrq->data->sg_len, SG_MITER_FROM_SG);
			/* Auto inc from offset zero, dbuf zero */
			writeq(0x10000ull, unit->base + OCT_MIO_EMM_BUF_IDX);

			for (bytes_xfered = 0; bytes_xfered < data_len;) {
				if (smi->consumed >= smi->length) {
					if (!sg_miter_next(smi))
						break;
					smi->consumed = 0;
				}

				while (smi->consumed < smi->length &&
					shift >= 0) {

					dat |= (u64)(((u8 *)(smi->addr))
						[smi->consumed]) << shift;
					bytes_xfered++;
					smi->consumed++;
					shift -= 8;
				}
				if (shift < 0) {
					writeq(dat,
					      unit->base + OCT_MIO_EMM_BUF_DAT);
					shift = 56;
					dat = 0;
				}
			}
			sg_miter_stop(smi);
		}
		if (cmd->data->timeout_ns) {
			writeq(octeon_mmc_timeout_to_wdog(host,
				cmd->data->timeout_ns),
				unit->base + OCT_MIO_EMM_WDOG);
			octeon_mmc_dbg("OCT_MIO_EMM_WDOG %llu\n",
				       readq(unit->base + OCT_MIO_EMM_WDOG));
		}
	} else {
		writeq(((u64)host->clock * 850ull) / 1000ull,
			unit->base + OCT_MIO_EMM_WDOG);
		octeon_mmc_dbg("OCT_MIO_EMM_WDOG %llu\n",
			       readq(unit->base + OCT_MIO_EMM_WDOG));
	}
	/* Clear the bit. */
	writeq(emm_int.u64, unit->base + OCT_MIO_EMM_INT);
	writeq(emm_int.u64, unit->base + OCT_MIO_EMM_INT_EN);
	unit->dma_active = false;

	emm_cmd.u64 = 0;
	emm_cmd.s.cmd_val = 1;
	emm_cmd.s.ctype_xor = mods.ctype_xor;
	emm_cmd.s.rtype_xor = mods.rtype_xor;
	if (mmc_cmd_type(cmd) == MMC_CMD_ADTC)
		emm_cmd.s.offset = 64 -
			((cmd->data->blksz * cmd->data->blocks) / 8);
	emm_cmd.s.bus_id = host->bus_id;
	emm_cmd.s.cmd_idx = cmd->opcode;
	emm_cmd.s.arg = cmd->arg;
	writeq(0, unit->base + OCT_MIO_EMM_STS_MASK);
	writeq(emm_cmd.u64, unit->base + OCT_MIO_EMM_CMD);
	octeon_mmc_dbg("MIO_EMM_CMD: %llx\n", emm_cmd.u64);
}

static void octeon_mmc_reset_bus(struct octeon_mmc_host *host)
{
	union cvmx_mio_emm_cfg emm_cfg;
	union cvmx_mio_emm_switch emm_switch;
	u64 wdog = 0;

	emm_cfg.u64 = readq(host->unit->base + OCT_MIO_EMM_CFG);
	emm_switch.u64 = readq(host->unit->base + OCT_MIO_EMM_SWITCH);
	wdog = readq(host->unit->base + OCT_MIO_EMM_WDOG);

	emm_switch.s.switch_exe = 0;
	emm_switch.s.switch_err0 = 0;
	emm_switch.s.switch_err1 = 0;
	emm_switch.s.switch_err2 = 0;
	emm_switch.s.bus_id = 0;
	writeq(emm_switch.u64, host->unit->base + OCT_MIO_EMM_SWITCH);
	emm_switch.s.bus_id = host->bus_id;
	writeq(emm_switch.u64, host->unit->base + OCT_MIO_EMM_SWITCH);

	host->cached_switch = emm_switch.u64;

	msleep(20);

	writeq(wdog, host->unit->base + OCT_MIO_EMM_WDOG);
}

static void octeon_mmc_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
{
	struct octeon_mmc_host	*host;
	struct octeon_mmc_unit	*unit;
	int bus_width;
	int clock;
	bool ddr_clock;
	int hs_timing;
	int power_class = 10;
	int clk_period;
	int timeout = 2000;
	union cvmx_mio_emm_switch emm_switch;
	union cvmx_mio_emm_rsp_sts emm_sts;

	host = mmc_priv(mmc);
	unit = host->unit;

	/* Only a single user of the bootbus at a time. */
	octeon_mmc_acquire_bus(unit);

	octeon_mmc_switch_to(host);

	octeon_mmc_dbg("Calling set_ios: host: clk = 0x%x, bus_width = %d\n",
		       host->clock, host->bus_width);
	octeon_mmc_dbg("Calling set_ios: ios: clk = 0x%x, vdd = %u, bus_width = %u, power_mode = %u, timing = %u\n",
		       ios->clock, ios->vdd, ios->bus_width, ios->power_mode,
		       ios->timing);
	octeon_mmc_dbg("Calling set_ios: mmc: caps = 0x%x, bus_width = %d\n",
		       mmc->caps, mmc->ios.bus_width);

	/*
	 * Reset the chip on each power off
	 */
	if (ios->power_mode == MMC_POWER_OFF) {
		octeon_mmc_reset_bus(host);
		gpiod_set_value_cansleep(host->pwr_gpiod, 0);
	} else {
		gpiod_set_value_cansleep(host->pwr_gpiod, 1);
	}

	switch (ios->bus_width) {
	case MMC_BUS_WIDTH_8:
		bus_width = 2;
		break;
	case MMC_BUS_WIDTH_4:
		bus_width = 1;
		break;
	case MMC_BUS_WIDTH_1:
		bus_width = 0;
		break;
	default:
		octeon_mmc_dbg("unknown bus width %d\n", ios->bus_width);
		bus_width = 0;
		break;
	}

	hs_timing = (ios->timing == MMC_TIMING_MMC_HS);
	ddr_clock = (bus_width && ios->timing >= MMC_TIMING_UHS_DDR50);

	if (ddr_clock)
		bus_width |= 4;

	if (ios->clock) {
		host->clock = ios->clock;
		host->bus_width = bus_width;

		clock = host->clock;

		if (clock > 52000000)
			clock = 52000000;

		clk_period = (octeon_get_io_clock_rate() + clock - 1) /
			(2 * clock);

		/* until clock-renengotiate-on-CRC is in */
		if (ddr_clock && ddr > 1)
			clk_period *= 2;

		emm_switch.u64 = 0;
		emm_switch.s.hs_timing = hs_timing;
		emm_switch.s.bus_width = bus_width;
		emm_switch.s.power_class = power_class;
		emm_switch.s.clk_hi = clk_period;
		emm_switch.s.clk_lo = clk_period;

		if (!octeon_mmc_switch_val_changed(host, emm_switch.u64)) {
			octeon_mmc_dbg("No change from 0x%llx mio_emm_switch, returning.\n",
				       emm_switch.u64);
			goto out;
		}

		octeon_mmc_dbg("Writing 0x%llx to mio_emm_wdog\n",
			       ((u64)clock * 850ull) / 1000ull);
		writeq(((u64)clock * 850ull) / 1000ull,
			unit->base + OCT_MIO_EMM_WDOG);
		octeon_mmc_dbg("Writing 0x%llx to mio_emm_switch\n",
				emm_switch.u64);

		writeq(emm_switch.u64, unit->base + OCT_MIO_EMM_SWITCH);
		emm_switch.s.bus_id = host->bus_id;
		writeq(emm_switch.u64, unit->base + OCT_MIO_EMM_SWITCH);
		host->cached_switch = emm_switch.u64;

		do {
			emm_sts.u64 =
				readq(unit->base + OCT_MIO_EMM_RSP_STS);
			if (!emm_sts.s.switch_val)
				break;
			udelay(100);
		} while (timeout-- > 0);

		if (timeout <= 0) {
			octeon_mmc_dbg("switch command timed out, status=0x%llx\n",
				       emm_sts.u64);
			goto out;
		}
	}
out:
	octeon_mmc_release_bus(unit);
}

static int octeon_mmc_get_ro(struct mmc_host *mmc)
{
	struct octeon_mmc_host	*host = mmc_priv(mmc);

	if (!host->ro_gpiod)
		return -ENOSYS;

	return gpiod_get_value_cansleep(host->ro_gpiod);
}

static int octeon_mmc_get_cd(struct mmc_host *mmc)
{
	struct octeon_mmc_host	*host = mmc_priv(mmc);

	if (!host->cd_gpiod >= 0)
		return -ENOSYS;

	return gpiod_get_value_cansleep(host->cd_gpiod);
}

static const struct mmc_host_ops octeon_mmc_ops = {
	.request        = octeon_mmc_request,
	.set_ios        = octeon_mmc_set_ios,
	.get_ro		= octeon_mmc_get_ro,
	.get_cd		= octeon_mmc_get_cd,
};

static void octeon_mmc_set_clock(struct octeon_mmc_host *host,
				 unsigned int clock)
{
	struct mmc_host *mmc = host->mmc;

	clock = min(clock, mmc->f_max);
	clock = max(clock, mmc->f_min);
	host->clock = clock;
}

static int octeon_mmc_initlowlevel(struct octeon_mmc_host *host,
				   int bus_width)
{
	union cvmx_mio_emm_switch emm_switch;
	struct octeon_mmc_unit *unit = host->unit;

	unit->emm_cfg |= 1ull << host->bus_id;
	writeq(unit->emm_cfg, host->unit->base + OCT_MIO_EMM_CFG);
	octeon_mmc_set_clock(host, 400000);

	/* Program initial clock speed and power */
	emm_switch.u64 = 0;
	emm_switch.s.power_class = 10;
	emm_switch.s.clk_hi = (host->sclock / host->clock) / 2;
	emm_switch.s.clk_lo = (host->sclock / host->clock) / 2;

	writeq(emm_switch.u64, unit->base + OCT_MIO_EMM_SWITCH);
	emm_switch.s.bus_id = host->bus_id;
	writeq(emm_switch.u64, unit->base + OCT_MIO_EMM_SWITCH);
	host->cached_switch = emm_switch.u64;

	writeq(((u64)host->clock * 850ull) / 1000ull,
		unit->base + OCT_MIO_EMM_WDOG);
	writeq(0xe4f90080ull, unit->base + OCT_MIO_EMM_STS_MASK);
	writeq(1, unit->base + OCT_MIO_EMM_RCA);
	return 0;
}

static int octeon_mmc_probe(struct platform_device *pdev)
{
	struct mmc_host *mmc;
	struct octeon_mmc_unit *unit;
	struct octeon_mmc_host *host;
	struct device *dev = &pdev->dev;
	struct device_node *node = pdev->dev.of_node;
	struct platform_device *ppdev = to_platform_device(pdev->dev.parent);
	u32 id, bus_width, max_freq, cmd_skew, dat_skew;
	u64 clock_period;
	int ret;

	WARN_ON(!pdev->dev.parent);

	unit = platform_get_drvdata(ppdev);

	ret = of_property_read_u32(node, "reg", &id);
	if (ret) {
		dev_err(dev, "Missing or invalid reg property on %s\n",
			of_node_full_name(node));
		return ret;
	}

	if (id >= OCTEON_MAX_MMC || unit->host[id]) {
		dev_err(dev, "Invalid reg property on %s\n",
			of_node_full_name(node));
		return -EINVAL;
	}

	mmc = mmc_alloc_host(sizeof(struct octeon_mmc_host), dev);
	if (!mmc) {
		dev_err(dev, "alloc unit failed\n");
		return -ENOMEM;
	}

	host = mmc_priv(mmc);
	host->mmc = mmc;
	host->unit = unit;

	ret = of_property_read_u32(node, "cavium,bus-max-width", &bus_width);
	if (ret) {
		bus_width = 8;
		dev_info(dev, "Bus width not found for host %u, defaulting to %u\n",
			id, bus_width);
	} else {
		switch (bus_width) {
		case 1:
		case 4:
		case 8:
			break;
		default:
			dev_err(dev, "Invalid bus width for host %u\n", id);
			ret = -EINVAL;
			goto err;
		}
	}

	ret = of_property_read_u32(node, "cavium,cmd-clk-skew", &cmd_skew);
	if (ret)
		cmd_skew = 0;

	ret = of_property_read_u32(node, "cavium,dat-clk-skew", &dat_skew);
	if (ret)
		dat_skew = 0;

	ret = of_property_read_u32(node, "spi-max-frequency", &max_freq);
	if (ret) {
		max_freq = 52000000;
		dev_info(dev, "No spi-max-frequency for host %u, defaulting to %u\n",
			id, max_freq);
	}

	host->ro_gpiod  = devm_gpiod_get_optional(dev, "wp", GPIOD_IN);
	if (IS_ERR(host->ro_gpiod)) {
		dev_err(dev, "Invalid WP GPIO\n");
		ret = PTR_ERR(host->ro_gpiod);
		goto err;
	}

	host->cd_gpiod  = devm_gpiod_get_optional(dev, "cd", GPIOD_IN);
	if (IS_ERR(host->cd_gpiod)) {
		dev_err(dev, "Invalid CD GPIO\n");
		ret = PTR_ERR(host->cd_gpiod);
		goto err;
	}

	host->pwr_gpiod = devm_gpiod_get_optional(dev, "power", GPIOD_OUT_LOW);
	if (IS_ERR(host->pwr_gpiod)) {
		dev_err(dev, "Invalid POWER GPIO\n");
		ret = PTR_ERR(host->pwr_gpiod);
		goto err;
	}

	/*
	 * Set up host parameters.
	 */
	mmc->ops = &octeon_mmc_ops;
	mmc->f_min = 400000;
	mmc->f_max = max_freq;
	mmc->caps = MMC_CAP_MMC_HIGHSPEED | MMC_CAP_SD_HIGHSPEED |
		    MMC_CAP_8_BIT_DATA | MMC_CAP_4_BIT_DATA |
		    MMC_CAP_ERASE;
	mmc->ocr_avail = MMC_VDD_27_28 | MMC_VDD_28_29 | MMC_VDD_29_30 |
			 MMC_VDD_30_31 | MMC_VDD_31_32 | MMC_VDD_32_33 |
			 MMC_VDD_33_34 | MMC_VDD_34_35 | MMC_VDD_35_36;

	/* post-sdk23 caps */
	mmc->caps |=
		((mmc->f_max >= 12000000) * MMC_CAP_UHS_SDR12) |
		((mmc->f_max >= 25000000) * MMC_CAP_UHS_SDR25) |
		((mmc->f_max >= 50000000) * MMC_CAP_UHS_SDR50) |
		MMC_CAP_CMD23;

	if (host->pwr_gpiod)
		mmc->caps |= MMC_CAP_POWER_OFF_CARD;

	/* "1.8v" capability is actually 1.8-or-3.3v */
	if (ddr)
		mmc->caps |= MMC_CAP_UHS_DDR50 | MMC_CAP_1_8V_DDR;

	mmc->max_segs = 64;
	mmc->max_seg_size = unit->linear_buf_size;
	mmc->max_req_size = unit->linear_buf_size;
	mmc->max_blk_size = 512;
	mmc->max_blk_count = mmc->max_req_size / 512;

	host->clock = mmc->f_min;
	host->sclock = octeon_get_io_clock_rate();

	clock_period = 1000000000000ull / host->sclock; /* period in pS */
	host->cmd_cnt = (cmd_skew + clock_period / 2) / clock_period;
	host->dat_cnt = (dat_skew + clock_period / 2) / clock_period;

	host->bus_width = bus_width;
	host->bus_id = id;
	host->cached_rca = 1;

	platform_set_drvdata(pdev, host);

	/* Only a single user of the bootbus at a time. */
	octeon_mmc_acquire_bus(unit);
	unit->host[id] = host;

	octeon_mmc_switch_to(host);
	/* Initialize MMC Block. */
	octeon_mmc_initlowlevel(host, bus_width);

	octeon_mmc_release_bus(unit);

	ret = mmc_add_host(mmc);
	if (ret) {
		dev_err(dev, "mmc_add_host() returned %d\n", ret);
		goto err;
	}

	return 0;

err:
	host->unit->host[id] = NULL;

	gpiod_set_value_cansleep(host->pwr_gpiod, 0);

	mmc_free_host(host->mmc);
	return ret;
}

static int octeon_mmc_remove(struct platform_device *pdev)
{
	struct octeon_mmc_host *host = platform_get_drvdata(pdev);

	mmc_remove_host(host->mmc);

	host->unit->host[host->bus_id] = NULL;

	gpiod_set_value_cansleep(host->pwr_gpiod, 0);

	mmc_free_host(host->mmc);

	return 0;
}

static const struct of_device_id octeon_mmc_match[] = {
	{ .compatible = "cavium,octeon-6130-mmc", },
	{},
};
MODULE_DEVICE_TABLE(of, octeon_mmc_match);

static struct platform_driver octeon_mmc_driver = {
	.probe		= octeon_mmc_probe,
	.remove		= octeon_mmc_remove,
	.driver		= {
		.name	= "octeon_mmc",
		.of_match_table = octeon_mmc_match,
	},
};

static int octeon_mmc_unit_probe(struct platform_device *pdev)
{
	struct octeon_mmc_unit *unit;
	struct resource	*res;
	void __iomem *base;
	int mmc_irq[9];
	int i;
	int ret = 0;
	struct device_node *node = pdev->dev.of_node;
	bool cn78xx_style;
	u64 t;

	unit = devm_kzalloc(&pdev->dev, sizeof(*unit), GFP_KERNEL);
	if (!unit)
		return -ENOMEM;

	spin_lock_init(&unit->irq_handler_lock);
	sema_init(&unit->mmc_serializer, 1);

	cn78xx_style = of_device_is_compatible(node,
		"cavium,octeon-7890-mmc-unit");
	if (cn78xx_style) {
		unit->need_bootbus_lock = false;
		unit->big_dma_addr = true;
		unit->need_irq_handler_lock = true;
		/*
		 * First seven are the EMM_INT bits 0..6, then two for
		 * the EMM_DMA_INT bits
		 */
		for (i = 0; i < 9; i++) {
			mmc_irq[i] = platform_get_irq(pdev, i);
			if (mmc_irq[i] < 0)
				return mmc_irq[i];
		}
	} else {
		unit->need_bootbus_lock = true;
		unit->big_dma_addr = false;
		unit->need_irq_handler_lock = false;
		/* First one is EMM second NDF_DMA */
		for (i = 0; i < 2; i++) {
			mmc_irq[i] = platform_get_irq(pdev, i);
			if (mmc_irq[i] < 0)
				return mmc_irq[i];
		}
	}
	unit->last_host = -1;

	if (bb_size < 512 || bb_size >= (1 << 24))
		bb_size = 1 << 18;
	unit->linear_buf_size = bb_size;
	unit->linear_buf = devm_kzalloc(&pdev->dev, unit->linear_buf_size,
					GFP_KERNEL);

	if (!unit->linear_buf) {
		dev_err(&pdev->dev, "devm_kzalloc failed\n");
		return -ENOMEM;
	}

	unit->pdev = pdev;

	res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
	if (!res) {
		dev_err(&pdev->dev, "Platform resource[0] is missing\n");
		return -ENXIO;
	}
	base = devm_ioremap_resource(&pdev->dev, res);
	if (IS_ERR(base))
		return PTR_ERR(base);
	unit->base = base;

	res = platform_get_resource(pdev, IORESOURCE_MEM, 1);
	if (!res) {
		dev_err(&pdev->dev, "Platform resource[1] is missing\n");
		return -EINVAL;
	}
	base = devm_ioremap_resource(&pdev->dev, res);
	if (IS_ERR(base))
		return PTR_ERR(base);
	unit->ndf_base = base;
	/*
	 * Clear out any pending interrupts that may be left over from
	 * bootloader.
	 */
	t = readq(unit->base + OCT_MIO_EMM_INT);
	writeq(t, unit->base + OCT_MIO_EMM_INT);
	if (cn78xx_style) {
		/* Only CMD_DONE, DMA_DONE, CMD_ERR, DMA_ERR */
		for (i = 1; i <= 4; i++) {
			ret = devm_request_irq(&pdev->dev, mmc_irq[i],
					       octeon_mmc_interrupt,
					       0, DRV_NAME, unit);
			if (ret < 0) {
				dev_err(&pdev->dev, "Error: devm_request_irq %d\n",
					mmc_irq[i]);
				return ret;
			}
		}
	} else {
		ret = devm_request_irq(&pdev->dev, mmc_irq[0],
				       octeon_mmc_interrupt, 0, DRV_NAME, unit);
		if (ret < 0) {
			dev_err(&pdev->dev, "Error: devm_request_irq %d\n",
				mmc_irq[0]);
			return ret;
		}
	}

	unit->global_power = devm_regulator_get_optional(&pdev->dev,
							 "vmmc-global");
	if (PTR_ERR(unit->global_power) == -EPROBE_DEFER) {
		return -EPROBE_DEFER;
	} else if (IS_ERR(unit->global_power)) {
		dev_err(&unit->pdev->dev, "Invalid global power supply\n");
		return PTR_ERR(unit->global_power);
	} else if (unit->global_power) {
		ret = regulator_enable(unit->global_power);
		if (ret) {
			dev_err(&unit->pdev->dev, "Invalid global power supply\n");
			return ret;
		}
	}

	platform_set_drvdata(pdev, unit);

	ret = of_platform_populate(node, NULL, NULL, &pdev->dev);
	if (ret) {
		dev_err(&unit->pdev->dev, "Error populating slots\n");
		return ret;
	}

	return 0;
}

static int octeon_mmc_unit_remove(struct platform_device *pdev)
{
	union cvmx_mio_ndf_dma_cfg ndf_dma_cfg;
	struct octeon_mmc_unit *unit = platform_get_drvdata(pdev);

	ndf_dma_cfg.u64 = readq(unit->ndf_base + OCT_MIO_NDF_DMA_CFG);
	ndf_dma_cfg.s.en = 0;
	writeq(ndf_dma_cfg.u64, unit->ndf_base + OCT_MIO_NDF_DMA_CFG);

	if (unit->global_power)
		regulator_disable(unit->global_power);

	return 0;
}

static const struct of_device_id octeon_mmc_unit_match[] = {
	{
		.compatible = "cavium,octeon-6130-mmc-unit",
	},
	{
		.compatible = "cavium,octeon-7890-mmc-unit",
	},
	{},
};
MODULE_DEVICE_TABLE(of, octeon_mmc_unit_match);

static struct platform_driver octeon_mmc_unit_driver = {
	.probe		= octeon_mmc_unit_probe,
	.remove		= octeon_mmc_unit_remove,
	.driver		= {
		.name	= DRV_NAME,
		.of_match_table = octeon_mmc_unit_match,
	},
};

static int __init octeon_mmc_init(void)
{
	int ret;

	ret = platform_driver_register(&octeon_mmc_unit_driver);
	if (ret)
		return ret;

	ret = platform_driver_register(&octeon_mmc_driver);
	if (ret) {
		platform_driver_unregister(&octeon_mmc_unit_driver);
		return ret;
	}

	return 0;
}

static void __exit octeon_mmc_cleanup(void)
{
	platform_driver_unregister(&octeon_mmc_driver);
	platform_driver_unregister(&octeon_mmc_unit_driver);
}

module_init(octeon_mmc_init);
module_exit(octeon_mmc_cleanup);

MODULE_AUTHOR("Cavium Inc. <support@cavium.com>");
MODULE_DESCRIPTION("low-level driver for Cavium OCTEON MMC/SSD card");
MODULE_LICENSE("GPL");
