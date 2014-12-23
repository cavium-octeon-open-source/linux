/*
 * SATA glue for Cavium Octeon III SOCs.
 *
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2010-2015 Cavium Networks
 *
 */

#include <linux/module.h>
#include <linux/dma-mapping.h>
#include <linux/platform_device.h>
#include <linux/of_platform.h>

#include <asm/octeon/octeon.h>
#include <asm/bitfield.h>

/**
 * cvmx_sata_uctl_shim_cfg
 * from cvmx-sata-defs.h
 *
 * Accessible by: only when A_CLKDIV_EN
 * Reset by: IOI reset (srst_n) or SATA_UCTL_CTL[SATA_UCTL_RST]
 * This register allows configuration of various shim (UCTL) features.
 * Fields XS_NCB_OOB_* are captured when there are no outstanding OOB errors
 * indicated in INTSTAT and a new OOB error arrives.
 * Fields XS_BAD_DMA_* are captured when there are no outstanding DMA errors
 * indicated in INTSTAT and a new DMA error arrives.
 */
union cvmx_sata_uctl_shim_cfg {
	uint64_t u64;
	struct cvmx_sata_uctl_shim_cfg_s {
	/*
	 * Read/write error log for out-of-bound UAHC register access.
	 * 0 = read, 1 = write.
	 */
	__BITFIELD_FIELD(uint64_t xs_ncb_oob_wrn               : 1,
	__BITFIELD_FIELD(uint64_t reserved_57_62               : 6,
	/*
	 * SRCID error log for out-of-bound UAHC register access.
	 * The IOI outbound SRCID for the OOB error.
	 */
	__BITFIELD_FIELD(uint64_t xs_ncb_oob_osrc              : 9,
	/*
	 * Read/write error log for bad DMA access from UAHC.
	 * 0 = read error log, 1 = write error log.
	 */
	__BITFIELD_FIELD(uint64_t xm_bad_dma_wrn               : 1,
	__BITFIELD_FIELD(uint64_t reserved_44_46               : 3,
	/*
	 * ErrType error log for bad DMA access from UAHC. Encodes the type of
	 * error encountered (error largest encoded value has priority).
	 * See SATA_UCTL_XM_BAD_DMA_TYPE_E.
	 */
	__BITFIELD_FIELD(uint64_t xm_bad_dma_type              : 4,
	__BITFIELD_FIELD(uint64_t reserved_13_39               : 27,
	/*
	 * Selects the IOI read command used by DMA accesses.
	 * See SATA_UCTL_DMA_READ_CMD_E.
	 */
	__BITFIELD_FIELD(uint64_t dma_read_cmd                 : 1,
	__BITFIELD_FIELD(uint64_t reserved_10_11               : 2,
	/*
	 * Selects the endian format for DMA accesses to the L2C.
	 * See SATA_UCTL_ENDIAN_MODE_E.
	 */
	__BITFIELD_FIELD(uint64_t dma_endian_mode              : 2,
	__BITFIELD_FIELD(uint64_t reserved_2_7                 : 6,
	/*
	 * Selects the endian format for IOI CSR accesses to the UAHC.
	 * Note that when UAHC CSRs are accessed via RSL, they are returned
	 * as big-endian. See SATA_UCTL_ENDIAN_MODE_E.
	 */
	__BITFIELD_FIELD(uint64_t csr_endian_mode              : 2,
		;))))))))))))
	} s;
};

#define CVMX_SATA_UCTL_SHIM_CFG 0xE8

static int ahci_octeon_probe(struct platform_device *pdev)
{
	union cvmx_sata_uctl_shim_cfg shim_cfg;
	struct device *dev = &pdev->dev;
	struct device_node *node = dev->of_node;
	struct resource *res;
	void __iomem *base;
	int ret;

	res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
	if (!res) {
		dev_err(&pdev->dev, "Platform resource[0] is missing\n");
		return -ENODEV;
	}

	base = devm_ioremap_resource(&pdev->dev, res);
	if (IS_ERR(base))
		return PTR_ERR(base);

	/* set-up endian mode */
	shim_cfg.u64 = cvmx_read_csr(
		(__force uint64_t)base + CVMX_SATA_UCTL_SHIM_CFG);
#ifdef __BIG_ENDIAN
	shim_cfg.s.dma_endian_mode = 1;
	shim_cfg.s.csr_endian_mode = 1;
#else
	shim_cfg.s.dma_endian_mode = 0;
	shim_cfg.s.csr_endian_mode = 0;
#endif
	shim_cfg.s.dma_read_cmd = 1; /* No allocate L2C */
	cvmx_write_csr(
		(__force uint64_t)base + CVMX_SATA_UCTL_SHIM_CFG, shim_cfg.u64);

	if (!node) {
		dev_err(dev, "no device node, failed to add octeon sata\n");
		return -ENODEV;
	}

	ret = of_platform_populate(node, NULL, NULL, dev);
	if (ret) {
		dev_err(dev, "failed to add ahci-platform core\n");
		return ret;
	}

	return 0;
}

static int ahci_octeon_remove(struct platform_device *pdev)
{
	return 0;
}

static const struct of_device_id octeon_ahci_match[] = {
	{ .compatible = "cavium,octeon-7130-sata-uctl", },
	{},
};
MODULE_DEVICE_TABLE(of, octeon_ahci_match);

static struct platform_driver ahci_octeon_driver = {
	.probe          = ahci_octeon_probe,
	.remove         = ahci_octeon_remove,
	.driver         = {
		.name   = "octeon-ahci",
		.of_match_table = octeon_ahci_match,
	},
};

module_platform_driver(ahci_octeon_driver);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Cavium, Inc. <support@cavium.com>");
MODULE_DESCRIPTION("Cavium Inc. sata config.");
