/***********************license start***************
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2003-2015 Cavium Inc.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, Version 2, as
 * published by the Free Software Foundation.
 *
 * This file is distributed in the hope that it will be useful, but
 * AS-IS and WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE, TITLE, or
 * NONINFRINGEMENT.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 * or visit http://www.gnu.org/licenses/.
 *
 * This file may also be available under a different license from Cavium.
 * Contact Cavium Inc. for more information
 ***********************license end**************************************/

#include <linux/module.h>
#include <asm/octeon/cvmx.h>

#include "cvmx-helper-cfg.h"
#include "cvmx-pip-defs.h"
#include "cvmx-ipd-defs.h"
#include "cvmx-ipd.h"

struct cvmx_fpa_pool_config _cvmx_ipd_packet_pool = {
	.pool_num = 0,
	.buffer_size = 2048,
	.buffer_count = 0,
};

struct cvmx_fpa_pool_config _cvmx_ipd_wqe_pool = {
	.pool_num = 1,
	.buffer_size = 128,
	.buffer_count = 0,
};

#define IPD_RED_AVG_DLY	1000
#define IPD_RED_PRB_DLY	1000

void cvmx_ipd_set_packet_pool_config(int64_t pool, uint64_t buffer_size,
				     uint64_t buffer_count)
{
	_cvmx_ipd_packet_pool.pool_num = pool;
	_cvmx_ipd_packet_pool.buffer_size = buffer_size;
	_cvmx_ipd_packet_pool.buffer_count = buffer_count;
}

EXPORT_SYMBOL(cvmx_ipd_set_packet_pool_config);

void cvmx_ipd_set_wqe_pool_config(int64_t pool, uint64_t buffer_size,
				  uint64_t buffer_count)
{
	_cvmx_ipd_wqe_pool.pool_num = pool;
	_cvmx_ipd_wqe_pool.buffer_size = buffer_size;
	_cvmx_ipd_wqe_pool.buffer_count = buffer_count;
}

EXPORT_SYMBOL(cvmx_ipd_set_wqe_pool_config);

static void cvmx_ipd_free_ptr_no_pknd(void)
{
	unsigned wqe_pool = cvmx_fpa_get_wqe_pool();
	int i;
	union cvmx_ipd_ptr_count ptr_count;
	union cvmx_ipd_prc_port_ptr_fifo_ctl prc_port_fifo;
	int packet_pool = (int)cvmx_fpa_get_packet_pool();

	/* Only CN38XXp{1,2} cannot read pointer out of the IPD */
	if (OCTEON_IS_MODEL(OCTEON_CN38XX_PASS2))
		return;

	ptr_count.u64 = cvmx_read_csr(CVMX_IPD_PTR_COUNT);

	/* Handle Work Queue Entry in cn56xx and cn52xx */
	if (octeon_has_feature(OCTEON_FEATURE_NO_WPTR)) {
		union cvmx_ipd_ctl_status ctl_status;
		ctl_status.u64 = cvmx_read_csr(CVMX_IPD_CTL_STATUS);
		if (ctl_status.s.no_wptr)
			wqe_pool = packet_pool;
	}

	/* Free the prefetched WQE */
	if (ptr_count.s.wqev_cnt) {
		union cvmx_ipd_wqe_ptr_valid wqe_ptr_valid;
		wqe_ptr_valid.u64 = cvmx_read_csr(CVMX_IPD_WQE_PTR_VALID);
		cvmx_fpa1_free(cvmx_phys_to_ptr
			       ((uint64_t) wqe_ptr_valid.s.ptr << 7), wqe_pool,
			       0);
	}

	/* Free all WQE in the fifo */
	if (ptr_count.s.wqe_pcnt) {
		int i;
		union cvmx_ipd_pwp_ptr_fifo_ctl pwp_fifo;
		pwp_fifo.u64 = cvmx_read_csr(CVMX_IPD_PWP_PTR_FIFO_CTL);
		for (i = 0; i < ptr_count.s.wqe_pcnt; i++) {
			pwp_fifo.s.cena = 0;
			pwp_fifo.s.raddr =
			    pwp_fifo.s.max_cnts + (pwp_fifo.s.wraddr +
						   i) % pwp_fifo.s.max_cnts;
			cvmx_write_csr(CVMX_IPD_PWP_PTR_FIFO_CTL, pwp_fifo.u64);
			pwp_fifo.u64 = cvmx_read_csr(CVMX_IPD_PWP_PTR_FIFO_CTL);
			cvmx_fpa1_free(cvmx_phys_to_ptr
				       ((uint64_t) pwp_fifo.s.ptr << 7),
				       wqe_pool, 0);
		}
		pwp_fifo.s.cena = 1;
		cvmx_write_csr(CVMX_IPD_PWP_PTR_FIFO_CTL, pwp_fifo.u64);
	}

	/* Free the prefetched packet */
	if (ptr_count.s.pktv_cnt) {
		union cvmx_ipd_pkt_ptr_valid pkt_ptr_valid;
		pkt_ptr_valid.u64 = cvmx_read_csr(CVMX_IPD_PKT_PTR_VALID);
		cvmx_fpa1_free(cvmx_phys_to_ptr
			       ((uint64_t) pkt_ptr_valid.s.ptr << 7),
			       packet_pool, 0);
	}

	/* Free the per port prefetched packets */
	prc_port_fifo.u64 = cvmx_read_csr(CVMX_IPD_PRC_PORT_PTR_FIFO_CTL);

	for (i = 0; i < prc_port_fifo.s.max_pkt; i++) {
		prc_port_fifo.s.cena = 0;
		prc_port_fifo.s.raddr = i % prc_port_fifo.s.max_pkt;
		cvmx_write_csr(CVMX_IPD_PRC_PORT_PTR_FIFO_CTL,
			       prc_port_fifo.u64);
		prc_port_fifo.u64 =
		    cvmx_read_csr(CVMX_IPD_PRC_PORT_PTR_FIFO_CTL);
		cvmx_fpa1_free(cvmx_phys_to_ptr
			       ((uint64_t) prc_port_fifo.s.ptr << 7),
			       packet_pool, 0);
	}
	prc_port_fifo.s.cena = 1;
	cvmx_write_csr(CVMX_IPD_PRC_PORT_PTR_FIFO_CTL, prc_port_fifo.u64);

	/* Free all packets in the holding fifo */
	if (ptr_count.s.pfif_cnt) {
		int i;
		union cvmx_ipd_prc_hold_ptr_fifo_ctl prc_hold_fifo;

		prc_hold_fifo.u64 =
		    cvmx_read_csr(CVMX_IPD_PRC_HOLD_PTR_FIFO_CTL);

		for (i = 0; i < ptr_count.s.pfif_cnt; i++) {
			prc_hold_fifo.s.cena = 0;
			prc_hold_fifo.s.raddr =
			    (prc_hold_fifo.s.praddr +
			     i) % prc_hold_fifo.s.max_pkt;
			cvmx_write_csr(CVMX_IPD_PRC_HOLD_PTR_FIFO_CTL,
				       prc_hold_fifo.u64);
			prc_hold_fifo.u64 =
			    cvmx_read_csr(CVMX_IPD_PRC_HOLD_PTR_FIFO_CTL);
			cvmx_fpa1_free(cvmx_phys_to_ptr
				       ((uint64_t) prc_hold_fifo.s.ptr << 7),
				       packet_pool, 0);
		}
		prc_hold_fifo.s.cena = 1;
		cvmx_write_csr(CVMX_IPD_PRC_HOLD_PTR_FIFO_CTL,
			       prc_hold_fifo.u64);
	}

	/* Free all packets in the fifo */
	if (ptr_count.s.pkt_pcnt) {
		int i;
		union cvmx_ipd_pwp_ptr_fifo_ctl pwp_fifo;
		pwp_fifo.u64 = cvmx_read_csr(CVMX_IPD_PWP_PTR_FIFO_CTL);

		for (i = 0; i < ptr_count.s.pkt_pcnt; i++) {
			pwp_fifo.s.cena = 0;
			pwp_fifo.s.raddr =
			    (pwp_fifo.s.praddr + i) % pwp_fifo.s.max_cnts;
			cvmx_write_csr(CVMX_IPD_PWP_PTR_FIFO_CTL, pwp_fifo.u64);
			pwp_fifo.u64 = cvmx_read_csr(CVMX_IPD_PWP_PTR_FIFO_CTL);
			cvmx_fpa1_free(cvmx_phys_to_ptr
				       ((uint64_t) pwp_fifo.s.ptr << 7),
				       packet_pool, 0);
		}
		pwp_fifo.s.cena = 1;
		cvmx_write_csr(CVMX_IPD_PWP_PTR_FIFO_CTL, pwp_fifo.u64);
	}
}

static void cvmx_ipd_free_ptr_pknd(void)
{
	int no_wptr = 0;
	int i;
	union cvmx_ipd_port_ptr_fifo_ctl port_ptr_fifo;
	union cvmx_ipd_ptr_count ptr_count;
	int packet_pool = (int)cvmx_fpa_get_packet_pool();
	int wqe_pool = (int)cvmx_fpa_get_wqe_pool();
	ptr_count.u64 = cvmx_read_csr(CVMX_IPD_PTR_COUNT);

	/* Handle Work Queue Entry in cn68xx */
	if (octeon_has_feature(OCTEON_FEATURE_NO_WPTR)) {
		union cvmx_ipd_ctl_status ctl_status;
		ctl_status.u64 = cvmx_read_csr(CVMX_IPD_CTL_STATUS);
		if (ctl_status.s.no_wptr)
			no_wptr = 1;
	}

	/* Free the prefetched WQE */
	if (ptr_count.s.wqev_cnt) {
		union cvmx_ipd_next_wqe_ptr next_wqe_ptr;
		next_wqe_ptr.u64 = cvmx_read_csr(CVMX_IPD_NEXT_WQE_PTR);
		if (no_wptr)
			cvmx_fpa1_free(cvmx_phys_to_ptr
				       ((uint64_t) next_wqe_ptr.s.ptr << 7),
				       packet_pool, 0);
		else
			cvmx_fpa1_free(cvmx_phys_to_ptr
				       ((uint64_t) next_wqe_ptr.s.ptr << 7),
				       wqe_pool, 0);
	}

	/* Free all WQE in the fifo */
	if (ptr_count.s.wqe_pcnt) {
		union cvmx_ipd_free_ptr_fifo_ctl free_fifo;
		union cvmx_ipd_free_ptr_value free_ptr_value;
		free_fifo.u64 = cvmx_read_csr(CVMX_IPD_FREE_PTR_FIFO_CTL);
		for (i = 0; i < ptr_count.s.wqe_pcnt; i++) {
			free_fifo.s.cena = 0;
			free_fifo.s.raddr =
			    free_fifo.s.max_cnts + (free_fifo.s.wraddr +
						    i) % free_fifo.s.max_cnts;
			cvmx_write_csr(CVMX_IPD_FREE_PTR_FIFO_CTL,
				       free_fifo.u64);
			free_fifo.u64 =
			    cvmx_read_csr(CVMX_IPD_FREE_PTR_FIFO_CTL);
			free_ptr_value.u64 =
			    cvmx_read_csr(CVMX_IPD_FREE_PTR_VALUE);
			if (no_wptr)
				cvmx_fpa1_free(cvmx_phys_to_ptr
					       ((uint64_t) free_ptr_value.s.
						ptr << 7), packet_pool, 0);
			else
				cvmx_fpa1_free(cvmx_phys_to_ptr
					       ((uint64_t) free_ptr_value.s.
						ptr << 7), wqe_pool, 0);
		}
		free_fifo.s.cena = 1;
		cvmx_write_csr(CVMX_IPD_FREE_PTR_FIFO_CTL, free_fifo.u64);
	}

	/* Free the prefetched packet */
	if (ptr_count.s.pktv_cnt) {
		union cvmx_ipd_next_pkt_ptr next_pkt_ptr;
		next_pkt_ptr.u64 = cvmx_read_csr(CVMX_IPD_NEXT_PKT_PTR);
		cvmx_fpa1_free(cvmx_phys_to_ptr
			       ((uint64_t) next_pkt_ptr.s.ptr << 7),
			       packet_pool, 0);
	}

	/* Free the per port prefetched packets */
	port_ptr_fifo.u64 = cvmx_read_csr(CVMX_IPD_PORT_PTR_FIFO_CTL);

	for (i = 0; i < port_ptr_fifo.s.max_pkt; i++) {
		port_ptr_fifo.s.cena = 0;
		port_ptr_fifo.s.raddr = i % port_ptr_fifo.s.max_pkt;
		cvmx_write_csr(CVMX_IPD_PORT_PTR_FIFO_CTL, port_ptr_fifo.u64);
		port_ptr_fifo.u64 = cvmx_read_csr(CVMX_IPD_PORT_PTR_FIFO_CTL);
		cvmx_fpa1_free(cvmx_phys_to_ptr
			       ((uint64_t) port_ptr_fifo.s.ptr << 7),
			       packet_pool, 0);
	}
	port_ptr_fifo.s.cena = 1;
	cvmx_write_csr(CVMX_IPD_PORT_PTR_FIFO_CTL, port_ptr_fifo.u64);

	/* Free all packets in the holding fifo */
	if (ptr_count.s.pfif_cnt) {
		union cvmx_ipd_hold_ptr_fifo_ctl hold_ptr_fifo;

		hold_ptr_fifo.u64 = cvmx_read_csr(CVMX_IPD_HOLD_PTR_FIFO_CTL);

		for (i = 0; i < ptr_count.s.pfif_cnt; i++) {
			hold_ptr_fifo.s.cena = 0;
			hold_ptr_fifo.s.raddr =
			    (hold_ptr_fifo.s.praddr +
			     i) % hold_ptr_fifo.s.max_pkt;
			cvmx_write_csr(CVMX_IPD_HOLD_PTR_FIFO_CTL,
				       hold_ptr_fifo.u64);
			hold_ptr_fifo.u64 =
			    cvmx_read_csr(CVMX_IPD_HOLD_PTR_FIFO_CTL);
			cvmx_fpa1_free(cvmx_phys_to_ptr
				       ((uint64_t) hold_ptr_fifo.s.ptr << 7),
				       packet_pool, 0);
		}
		hold_ptr_fifo.s.cena = 1;
		cvmx_write_csr(CVMX_IPD_HOLD_PTR_FIFO_CTL, hold_ptr_fifo.u64);
	}

	/* Free all packets in the fifo */
	if (ptr_count.s.pkt_pcnt) {
		union cvmx_ipd_free_ptr_fifo_ctl free_fifo;
		union cvmx_ipd_free_ptr_value free_ptr_value;
		free_fifo.u64 = cvmx_read_csr(CVMX_IPD_FREE_PTR_FIFO_CTL);

		for (i = 0; i < ptr_count.s.pkt_pcnt; i++) {
			free_fifo.s.cena = 0;
			free_fifo.s.raddr =
			    (free_fifo.s.praddr + i) % free_fifo.s.max_cnts;
			cvmx_write_csr(CVMX_IPD_FREE_PTR_FIFO_CTL,
				       free_fifo.u64);
			free_fifo.u64 =
			    cvmx_read_csr(CVMX_IPD_FREE_PTR_FIFO_CTL);
			free_ptr_value.u64 =
			    cvmx_read_csr(CVMX_IPD_FREE_PTR_VALUE);
			cvmx_fpa1_free(cvmx_phys_to_ptr
				       ((uint64_t) free_ptr_value.s.ptr << 7),
				       packet_pool, 0);
		}
		free_fifo.s.cena = 1;
		cvmx_write_csr(CVMX_IPD_FREE_PTR_FIFO_CTL, free_fifo.u64);
	}
}

/*
 * cvmx_ipd_free_ptr() - extract FPA buffers out of the IPD and PIP
 *
 * This function is called by cvmx_helper_shutdown() to extract
 * all FPA buffers out of the IPD and PIP. After this function
 * completes, all FPA buffers that were prefetched by IPD and PIP
 * wil be in the apropriate FPA pool. This functions does not reset
 * PIP or IPD as FPA pool zero must be empty before the reset can
 * be performed. WARNING: It is very important that IPD and PIP be
 * reset soon after a call to this function.
 */
void cvmx_ipd_free_ptr(void)
{
	if (octeon_has_feature(OCTEON_FEATURE_PKND))
		cvmx_ipd_free_ptr_pknd();
	else
		cvmx_ipd_free_ptr_no_pknd();
}

/*
 * cvmx_ipd_init() - Setup IPD
 *
 * Setup global setting for IPD/PIP not related to a specific
 * interface or port. This must be called before IPD is enabled.
 */
void cvmx_ipd_init(void)
{
	cvmx_ipd_1st_mbuff_skip_t skip;
	cvmx_ipd_packet_mbuff_size_t size;
	cvmx_ipd_1st_next_ptr_back_t back_struct;
	cvmx_ipd_wqe_fpa_queue_t wqe_pool;
	cvmx_ipd_ctl_status_t ipd_ctl_reg;

	/* Enforce 1st skip minimum if WQE shares the buffer with packet */
	uint64_t first_mbuff_skip = CVMX_IPD_FIRST_MBUF_SKIP / 8;

	if (octeon_has_feature(OCTEON_FEATURE_NO_WPTR)) {
		union cvmx_ipd_ctl_status ctl_status;
		ctl_status.u64 = cvmx_read_csr(CVMX_IPD_CTL_STATUS);
		if (ctl_status.s.no_wptr != 0 && first_mbuff_skip < 16)
			first_mbuff_skip = 16;
	}

	skip.u64 = 0;
	skip.s.skip_sz = first_mbuff_skip;
	cvmx_write_csr(CVMX_IPD_1ST_MBUFF_SKIP, skip.u64);

	skip.u64 = 0;
	skip.s.skip_sz = CVMX_IPD_NOT_FIRST_MBUF_SKIP / 8;
	cvmx_write_csr(CVMX_IPD_NOT_1ST_MBUFF_SKIP, skip.u64);

	size.u64 = 0;
	size.s.mb_size = _cvmx_ipd_packet_pool.buffer_size / 8;
	cvmx_write_csr(CVMX_IPD_PACKET_MBUFF_SIZE, size.u64);

	/* The +8 is to account for the next ptr */
	back_struct.u64 = 0;
	back_struct.s.back = (CVMX_IPD_FIRST_MBUF_SKIP + 8) / 128;
	cvmx_write_csr(CVMX_IPD_1st_NEXT_PTR_BACK, back_struct.u64);

	/* The +8 is to account for the next ptr */
	back_struct.u64 = 0;
	back_struct.s.back = (CVMX_IPD_NOT_FIRST_MBUF_SKIP + 8) / 128;
	cvmx_write_csr(CVMX_IPD_2nd_NEXT_PTR_BACK, back_struct.u64);

	wqe_pool.u64 = 0;
	wqe_pool.s.wqe_pool = _cvmx_ipd_wqe_pool.pool_num;
	cvmx_write_csr(CVMX_IPD_WQE_FPA_QUEUE, wqe_pool.u64);

	ipd_ctl_reg.u64 = cvmx_read_csr(CVMX_IPD_CTL_STATUS);
	ipd_ctl_reg.s.opc_mode = CVMX_IPD_OPC_MODE_STT;
	ipd_ctl_reg.s.pbp_en = 1;
	cvmx_write_csr(CVMX_IPD_CTL_STATUS, ipd_ctl_reg.u64);
}

/*
 * cvmx_ipd_setup_red_queue() - Setup Random Early Drop on an input queue
 * @queue:		Input queue to setup RED on (0-7)
 * @pass_thresh:	Packets will begin slowly dropping when there are less
 *			than this many packet buffers free in FPA 0.
 * @drop_thresh:	All incoming packets will be dropped when there are
 *			less than this many free packet buffers in FPA 0.
 */
static void cvmx_ipd_setup_red_queue(
	int queue, int pass_thresh, int drop_thresh)
{
	union cvmx_ipd_qosx_red_marks red_marks;
	union cvmx_ipd_red_quex_param red_param;

	/* Set RED to begin dropping packets when there are
	 * pass_thresh buffers left. It will linearly drop more
	 * packets until reaching drop_thresh buffers. */
	red_marks.u64 = 0;
	red_marks.s.drop = drop_thresh;
	red_marks.s.pass = pass_thresh;
	cvmx_write_csr(CVMX_IPD_QOSX_RED_MARKS(queue), red_marks.u64);

	/* Use the actual queue 0 counter, not the average */
	red_param.u64 = 0;
	red_param.s.prb_con =
	    (255ul << 24) / (red_marks.s.pass - red_marks.s.drop);
	red_param.s.avg_con = 1;
	red_param.s.new_con = 255;
	red_param.s.use_pcnt = 1;
	cvmx_write_csr(CVMX_IPD_RED_QUEX_PARAM(queue), red_param.u64);
}

static void cvmx_ipd_setup_red_no_pknd(int pass_thresh, int drop_thresh)
{
	int queue;
	int interface;
	int port;
	union cvmx_ipd_portx_bp_page_cnt page_cnt;
	union cvmx_ipd_red_port_enable red_port_enable;

	/* Disable backpressure based on queued buffers. It needs SW support */
	page_cnt.u64 = 0;
	page_cnt.s.bp_enb = 0;
	page_cnt.s.page_cnt = 100;
	for (interface = 0; interface < CVMX_HELPER_MAX_GMX; interface++) {
		for (
			port = cvmx_helper_get_first_ipd_port(interface);
			port < cvmx_helper_get_last_ipd_port(interface);
			port++
		)
			cvmx_write_csr(CVMX_IPD_PORTX_BP_PAGE_CNT(port),
				       page_cnt.u64);
	}

	for (queue = 0; queue < 8; queue++)
		cvmx_ipd_setup_red_queue(queue, pass_thresh, drop_thresh);

	/* Shutoff the dropping based on the per port page count. SW isn't
	 * decrementing it right now */
	cvmx_write_csr(CVMX_IPD_BP_PRT_RED_END, 0);

	/* Setting up avg_dly and prb_dly, enable bits */
	red_port_enable.u64 = 0;
	red_port_enable.s.prt_enb = 0xfffffffffull;
	red_port_enable.s.avg_dly = IPD_RED_AVG_DLY;
	red_port_enable.s.prb_dly = IPD_RED_PRB_DLY;
	cvmx_write_csr(CVMX_IPD_RED_PORT_ENABLE, red_port_enable.u64);

	/* Shutoff the dropping of packets based on RED for SRIO ports */
	if (octeon_has_feature(OCTEON_FEATURE_SRIO)) {
		union cvmx_ipd_red_port_enable2 red_port_enable2;

		red_port_enable2.u64 = 0;
		red_port_enable2.s.prt_enb = 0xf0;
		cvmx_write_csr(CVMX_IPD_RED_PORT_ENABLE2, red_port_enable2.u64);
	}
}

static void cvmx_ipd_setup_red_pknd(int pass_thresh, int drop_thresh)
{
	int queue;
	int interface;
	int num_ports;
	int port;
	int bpid;
	union cvmx_ipd_red_delay red_delay;
	union cvmx_ipd_red_bpid_enablex red_bpid_enable;

	/* Disable backpressure based on queued buffers. It needs SW support */
	for (interface = 0; interface < CVMX_HELPER_MAX_GMX; interface++) {
		num_ports = cvmx_helper_ports_on_interface(interface);
		for (port = 0; port < num_ports; port++) {
			bpid = cvmx_helper_get_bpid(interface, port);
			if (bpid == CVMX_INVALID_BPID)
				pr_debug("setup_red: cvmx_helper_get_bpid(%d, %d) = %d\n",
					 interface, port,
					 cvmx_helper_get_bpid(interface, port));
			else
				cvmx_write_csr(CVMX_IPD_BPIDX_MBUF_TH(bpid), 0);
		}
	}

	for (queue = 0; queue < 8; queue++)
		cvmx_ipd_setup_red_queue(queue, pass_thresh, drop_thresh);

	/* Shutoff the dropping based on the per port page count. SW isn't
	 * decrementing it right now */
	cvmx_write_csr(CVMX_IPD_ON_BP_DROP_PKTX(0), 0);

	/* Setting up avg_dly and prb_dly, enable bits */
	red_delay.u64 = 0;
	red_delay.s.avg_dly = IPD_RED_AVG_DLY;
	red_delay.s.prb_dly = IPD_RED_PRB_DLY;
	cvmx_write_csr(CVMX_IPD_RED_DELAY, red_delay.u64);

	/* Only enable the gmx ports */
	red_bpid_enable.u64 = 0;
	for (interface = 0; interface < CVMX_HELPER_MAX_GMX; interface++) {
		int num_ports = cvmx_helper_ports_on_interface(interface);

		for (port = 0; port < num_ports; port++)
			red_bpid_enable.u64 |=
		     ((uint64_t)1 << cvmx_helper_get_bpid(interface, port));
	}

	cvmx_write_csr(CVMX_IPD_RED_BPID_ENABLEX(0), red_bpid_enable.u64);
}

/*
 * cvmx_ipd_setup_red() - Setup Random Early Drop
 * @pass_thresh: Packets will begin slowly dropping when there are less than
 *               this many packet buffers free in FPA 0.
 * @drop_thresh: All incoming packets will be dropped when there are less
 *               than this many free packet buffers in FPA 0.
 *
 * Setup Random Early Drop to automatically begin dropping packets.
 */
void cvmx_ipd_setup_red(int pass_thresh, int drop_thresh)
{
	if (octeon_has_feature(OCTEON_FEATURE_PKND)) {
		cvmx_ipd_setup_red_pknd(pass_thresh, drop_thresh);
	} else {
		cvmx_ipd_setup_red_no_pknd(pass_thresh, drop_thresh);
	}
}

EXPORT_SYMBOL(cvmx_ipd_setup_red);

/*
 * cvmx_ipd_enable() - Enable IPD
 */
void cvmx_ipd_enable(void)
{
	cvmx_ipd_ctl_status_t ipd_reg;

	ipd_reg.u64 = cvmx_read_csr(CVMX_IPD_CTL_STATUS);

	/* busy-waiting for rst_done in o68 */
	if (OCTEON_IS_MODEL(OCTEON_CN68XX))
		while (ipd_reg.s.rst_done != 0)
			ipd_reg.u64 = cvmx_read_csr(CVMX_IPD_CTL_STATUS);

	if (ipd_reg.s.ipd_en)
		pr_warn("Warning: Enabling IPD when IPD already enabled.\n");

	ipd_reg.s.ipd_en = 1;

	cvmx_write_csr(CVMX_IPD_CTL_STATUS, ipd_reg.u64);
}

EXPORT_SYMBOL(cvmx_ipd_enable);

/*
 * cvmx_ipd_disable() - Disable IPD
 */
void cvmx_ipd_disable(void)
{
	cvmx_ipd_ctl_status_t ipd_reg;
	ipd_reg.u64 = cvmx_read_csr(CVMX_IPD_CTL_STATUS);
	ipd_reg.s.ipd_en = 0;
	cvmx_write_csr(CVMX_IPD_CTL_STATUS, ipd_reg.u64);
}

EXPORT_SYMBOL(cvmx_ipd_disable);

/*
 * cvmx_ipd_port_setup() - Configure port
 * @ipd_port: Port/Port kind to configure.
 *	      This follows the IPD numbering, not the per interface numbering
 *
 * Configure the IPD/PIP tagging and QoS options for a specific
 * port. This function determines the POW work queue entry
 * contents for a port. The setup performed here is controlled by
 * the defines in executive-config.h.
 */
static void cvmx_ipd_port_setup(int ipd_port)
{
	union cvmx_pip_prt_cfgx port_config;
	union cvmx_pip_prt_tagx tag_config;

	tag_config.u64 = 0;

	if (octeon_has_feature(OCTEON_FEATURE_PKND)) {
		int interface, index, pknd;
		union cvmx_pip_prt_cfgbx prt_cfgbx;

		interface = cvmx_helper_get_interface_num(ipd_port);
		index = cvmx_helper_get_interface_index_num(ipd_port);
		pknd = cvmx_helper_get_pknd(interface, index);

		port_config.u64 = cvmx_read_csr(CVMX_PIP_PRT_CFGX(pknd));
		tag_config.u64 = cvmx_read_csr(CVMX_PIP_PRT_TAGX(pknd));

		port_config.s.qos = pknd & 0x7;

		/* Default BPID to use for packets on this port-kind */
		prt_cfgbx.u64 = cvmx_read_csr(CVMX_PIP_PRT_CFGBX(pknd));
		prt_cfgbx.s.bpid = pknd;
		cvmx_write_csr(CVMX_PIP_PRT_CFGBX(pknd), prt_cfgbx.u64);
	} else {
		port_config.u64 = cvmx_read_csr(CVMX_PIP_PRT_CFGX(ipd_port));
		tag_config.u64 = cvmx_read_csr(CVMX_PIP_PRT_TAGX(ipd_port));

		/* Have each port go to a different POW queue */
		port_config.s.qos = ipd_port & 0x7;
	}

	/* Process the headers and place the IP header in the work queue */
	port_config.s.mode = CVMX_PIP_PORT_CFG_MODE_SKIPL2;

	tag_config.s.inc_prt_flag = 1;
	tag_config.s.tcp6_tag_type = CVMX_POW_TAG_TYPE_ORDERED;
	tag_config.s.tcp4_tag_type = CVMX_POW_TAG_TYPE_ORDERED;
	tag_config.s.ip6_tag_type = CVMX_POW_TAG_TYPE_ORDERED;
	tag_config.s.ip4_tag_type = CVMX_POW_TAG_TYPE_ORDERED;
	tag_config.s.non_tag_type = CVMX_POW_TAG_TYPE_ORDERED;
	/* Put all packets in group 0. Other groups can be used by the app */
	tag_config.s.grp = 0;

	if (octeon_has_feature(OCTEON_FEATURE_PKND)) {
		int interface, index, pknd;

		interface = cvmx_helper_get_interface_num(ipd_port);
		index = cvmx_helper_get_interface_index_num(ipd_port);
		pknd = cvmx_helper_get_pknd(interface, index);

		/* overload port_num with pknd */
		ipd_port = pknd;
	}
	cvmx_write_csr(CVMX_PIP_PRT_CFGX(ipd_port), port_config.u64);
	cvmx_write_csr(CVMX_PIP_PRT_TAGX(ipd_port), tag_config.u64);
}

/*
 * cvmx_fcs_op() - Enable or disable FCS stripping.
 * @interface: interface
 * @nports: number of ports
 * @has_fcs: 0 for disable and !0 for enable
 *
 * Enable or disable FCS stripping for all the ports on an interface.
 */
static void cvmx_fcs_op(int interface, int nports, int has_fcs)
{
	uint64_t port_bit;
	int index;
	int pknd;
	union cvmx_pip_sub_pkind_fcsx pkind_fcsx;
	union cvmx_pip_prt_cfgx port_cfg;

	port_bit = 0;
	for (index = 0; index < nports; index++)
		port_bit |=
		    ((uint64_t)1 << cvmx_helper_get_pknd(interface, index));

	pkind_fcsx.u64 = cvmx_read_csr(CVMX_PIP_SUB_PKIND_FCSX(0));
	if (has_fcs)
		pkind_fcsx.s.port_bit |= port_bit;
	else
		pkind_fcsx.s.port_bit &= ~port_bit;
	cvmx_write_csr(CVMX_PIP_SUB_PKIND_FCSX(0), pkind_fcsx.u64);

	for (pknd = 0; pknd < 64; pknd++) {
		if ((1ull << pknd) & port_bit) {
			port_cfg.u64 = cvmx_read_csr(CVMX_PIP_PRT_CFGX(pknd));
			port_cfg.s.crc_en = (has_fcs) ? 1 : 0;
			cvmx_write_csr(CVMX_PIP_PRT_CFGX(pknd), port_cfg.u64);
		}
	}
}

/*
 * cvmx_ipd_setup_interface() - Setup the IPD/PIP for the ports on an interface
 * @interface: Interface to setup IPD/PIP for
 *
 * Setup the IPD/PIP for the ports on an interface. Packet
 * classification and tagging are set for every port on the
 * interface. The number of ports on the interface must already
 * have been probed.
 */
void cvmx_ipd_setup_interface(int xiface)
{
	cvmx_helper_interface_mode_t mode;
	int num_ports = cvmx_helper_ports_on_interface(xiface);
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	int ipd_port = cvmx_helper_get_ipd_port(xiface, 0);
	int delta;

	if (num_ports == CVMX_HELPER_CFG_INVALID_VALUE)
		return;

	delta = 1;
	if (octeon_has_feature(OCTEON_FEATURE_PKND)) {
		if (xi.interface < CVMX_HELPER_MAX_GMX)
			delta = 16;
	}

	while (num_ports--) {
		if (!cvmx_helper_is_port_valid(xiface, num_ports))
			continue;
		cvmx_ipd_port_setup(ipd_port);
		ipd_port += delta;
	}

	/* FCS settings */
	if (octeon_has_feature(OCTEON_FEATURE_PKND)) {
		cvmx_fcs_op(xiface,
			    cvmx_helper_ports_on_interface(xiface),
				 __cvmx_helper_get_has_fcs(xiface));
	}

	mode = cvmx_helper_interface_get_mode(xiface);

	if (mode == CVMX_HELPER_INTERFACE_MODE_LOOP)
		__cvmx_helper_loop_enable(xiface);
}
