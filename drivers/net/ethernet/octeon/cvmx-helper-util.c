/***********************license start***************
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2003-2014 Cavium Inc.
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

/**
 * @file
 *
 * Small helper utilities.
 *
 */
#include <linux/export.h>

#include <asm/octeon/cvmx.h>
#include <asm/octeon/cvmx-gmxx-defs.h>
#include <asm/octeon/cvmx-sli-defs.h>
#include <asm/octeon/cvmx-pexp-defs.h>

#include "cvmx-helper-cfg.h"
#include "cvmx-helper.h"
#include "cvmx-pip.h"
#include "cvmx-ipd.h"
#include "cvmx-pko-defs.h"
#include "cvmx-hwpko.h"

/**
 * @INTERNAL
 * These are the interface types needed to convert interface numbers to ipd
 * ports.
 *
 * @GMII:
 *	This type is used for sgmii, rgmii, xaui and rxaui interfaces.
 * @ILK:
 *	This type is used for ilk interfaces.
 * @NPI:
 *	This type is used for npi interfaces.
 * @LB:
 *	This type is used for loopback interfaces.
 * @INVALID_IF_TYPE:
 *	This type indicates the interface hasn't been configured.
 */
enum port_map_if_type {
	INVALID_IF_TYPE = 0,
	GMII,
	ILK,
	NPI,
	LB
};

/**
 * @INTERNAL
 * This structure is used to map interface numbers to ipd ports.
 *
 * @type:
 *	Interface type
 * @first_ipd_port:
 *	First IPD port number assigned to this interface.
 * @last_ipd_port:
 *	Last IPD port number assigned to this interface.
 * @ipd_port_adj:
 *	Different octeon chips require different ipd ports for the
 *	same interface port/mode configuration. This value is used
 *	to account for that difference.
 */
struct ipd_port_map {
	enum port_map_if_type type;
	int first_ipd_port;
	int last_ipd_port;
	int ipd_port_adj;
};

/**
 * @INTERNAL
 * Interface number to ipd port map for the octeon 68xx.
 */
static const struct ipd_port_map ipd_port_map_68xx[CVMX_HELPER_MAX_IFACE] = {
	{GMII, 0x800, 0x8ff, 0x40},	/* Interface 0 */
	{GMII, 0x900, 0x9ff, 0x40},	/* Interface 1 */
	{GMII, 0xa00, 0xaff, 0x40},	/* Interface 2 */
	{GMII, 0xb00, 0xbff, 0x40},	/* Interface 3 */
	{GMII, 0xc00, 0xcff, 0x40},	/* Interface 4 */
	{ILK, 0x400, 0x4ff, 0x00},	/* Interface 5 */
	{ILK, 0x500, 0x5ff, 0x00},	/* Interface 6 */
	{NPI, 0x100, 0x120, 0x00},	/* Interface 7 */
	{LB, 0x000, 0x008, 0x00},	/* Interface 8 */
};

/**
 * @INTERNAL
 * Interface number to ipd port map for the octeon 78xx.
 *
 * This mapping corresponds to WQE(CHAN) enumeration in
 * HRM Sections 11.15, PKI_CHAN_E, Section 11.6
 *
 */
static const struct ipd_port_map ipd_port_map_78xx[CVMX_HELPER_MAX_IFACE] = {
	{GMII, 0x800, 0x83f, 0x00},	/* Interface 0 - BGX0 */
	{GMII, 0x900, 0x93f, 0x00},	/* Interface 1  -BGX1 */
	{GMII, 0xa00, 0xa3f, 0x00},	/* Interface 2  -BGX2 */
	{GMII, 0xb00, 0xb3f, 0x00},	/* Interface 3 - BGX3 */
	{GMII, 0xc00, 0xc3f, 0x00},	/* Interface 4 - BGX4 */
	{GMII, 0xd00, 0xd3f, 0x00},	/* Interface 5 - BGX5 */
	{ILK, 0x400, 0x4ff, 0x00},	/* Interface 6 - ILK0 */
	{ILK, 0x500, 0x5ff, 0x00},	/* Interface 7 - ILK1 */
	{NPI, 0x100, 0x13f, 0x00},	/* Interface 8 - DPI */
	{LB, 0x000, 0x03f, 0x00},	/* Interface 9 - LOOPBACK */
};

/**
 * @INTERNAL
 * Interface number to ipd port map for the octeon 73xx.
 */
static const struct ipd_port_map ipd_port_map_73xx[CVMX_HELPER_MAX_IFACE] = {
	{GMII, 0x800, 0x81f, 0x00},	/* Interface 0 - BGX(0,0-1) */
	{GMII, 0x820, 0x83f, 0x00},	/* Interface 1 - BGX(0,2-3) */
	{GMII, 0x900, 0x91f, 0x00},	/* Interface 2  -BGX(1,0-1) */
	{GMII, 0x920, 0x93f, 0x00},	/* Interface 3  -BGX(1,2-3) */
	{GMII, 0xa00, 0xa1f, 0x00},	/* Interface 4  -BGX(2,0-1) */
	{GMII, 0xa20, 0xa3f, 0x00},	/* Interface 5  -BGX(2,2-3) */
	{NPI, 0x100, 0x13f, 0x00},	/* Interface 6 - DPI */
	{LB, 0x000, 0x03f, 0x00},	/* Interface 7 - LOOPBACK */
};

/**
 * @INTERNAL
 * Interface number to ipd port map for the octeon 75xx.
 */
static const struct ipd_port_map ipd_port_map_75xx[CVMX_HELPER_MAX_IFACE] = {
	{GMII, 0x800, 0x81f, 0x00},	/* Interface 0 - BGX0,0-1 */
	{GMII, 0x820, 0x83f, 0x00},	/* Interface 1 - BGX0,2-3 */
	{NPI, 0x100, 0x13f, 0x00},	/* Interface 2 - DPI */
	{LB, 0x000, 0x03f, 0x00},	/* Interface 3 - LOOPBACK */
};

/**
 * Convert a interface mode into a human readable string
 *
 * @mode:   Mode to convert
 *
 * Returns String
 */
const char *cvmx_helper_interface_mode_to_string(cvmx_helper_interface_mode_t
						 mode)
{
	switch (mode) {
	case CVMX_HELPER_INTERFACE_MODE_DISABLED:
		return "DISABLED";
	case CVMX_HELPER_INTERFACE_MODE_RGMII:
		return "RGMII";
	case CVMX_HELPER_INTERFACE_MODE_GMII:
		return "GMII";
	case CVMX_HELPER_INTERFACE_MODE_SPI:
		return "SPI";
	case CVMX_HELPER_INTERFACE_MODE_PCIE:
		return "PCIE";
	case CVMX_HELPER_INTERFACE_MODE_XAUI:
		return "XAUI";
	case CVMX_HELPER_INTERFACE_MODE_RXAUI:
		return "RXAUI";
	case CVMX_HELPER_INTERFACE_MODE_SGMII:
		return "SGMII";
	case CVMX_HELPER_INTERFACE_MODE_QSGMII:
		return "QSGMII";
	case CVMX_HELPER_INTERFACE_MODE_PICMG:
		return "PICMG";
	case CVMX_HELPER_INTERFACE_MODE_NPI:
		return "NPI";
	case CVMX_HELPER_INTERFACE_MODE_LOOP:
		return "LOOP";
// 	case CVMX_HELPER_INTERFACE_MODE_SRIO:
// 		return "SRIO";
	case CVMX_HELPER_INTERFACE_MODE_ILK:
		return "ILK";
	case CVMX_HELPER_INTERFACE_MODE_AGL:
		return "AGL";
// 	case CVMX_HELPER_INTERFACE_MODE_XLAUI:
// 		return "XLAUI";
// 	case CVMX_HELPER_INTERFACE_MODE_XFI:
// 		return "XFI";
// 	case CVMX_HELPER_INTERFACE_MODE_40G_KR4:
// 		return "40G_KR4";
// 	case CVMX_HELPER_INTERFACE_MODE_10G_KR:
// 		return "10G_KR";
	}
	return "UNKNOWN";
}

/**
 * Free the packet buffers contained in a work queue entry.
 * The work queue entry is not freed.
 * Note that this function will not free the work queue entry
 * even if it contains a non-redundant data packet, and hence
 * it is not really comparable to how the PKO would free a packet
 * buffers if requested.
 *
 * @work:   Work queue entry with packet to free
 */
void cvmx_helper_free_packet_data(cvmx_wqe_t * work)
{
	uint64_t number_buffers;
	uint64_t start_of_buffer;
	uint64_t next_buffer_ptr;
	unsigned ncl;
	cvmx_buf_ptr_t buffer_ptr;
	// cvmx_buf_ptr_pki_t bptr;
	// cvmx_wqe_78xx_t *wqe = (void *)work;

	number_buffers = cvmx_wqe_get_bufs(work);

	buffer_ptr.u64 = work->packet_ptr.u64;

	/* Zero-out WQE WORD3 so that the WQE is freed by cvmx_wqe_free() */
	work->packet_ptr.u64 = 0;

	if (number_buffers == 0)
		return;

	/* Interpret PKI-style bufptr unless it has been translated */
// 	if (octeon_has_feature(OCTEON_FEATURE_CN78XX_WQE) &&
// 	    !wqe->pki_wqe_translated) {
// 		cvmx_wqe_pki_errata_20776(work);
// 		bptr.u64 = buffer_ptr.u64;
// 		next_buffer_ptr = *(uint64_t *)
// 		    cvmx_phys_to_ptr(bptr.addr - 8);
// 	} else {
		start_of_buffer =
		    ((buffer_ptr.s.addr >> 7) - buffer_ptr.s.back) << 7;
		next_buffer_ptr = *(uint64_t *)
		    cvmx_phys_to_ptr(buffer_ptr.s.addr - 8);
		/* Since the number of buffers is not zero, we know this is not a dynamic
		   short packet. We need to check if it is a packet received with
		   IPD_CTL_STATUS[NO_WPTR]. If this is true, we need to free all buffers
		   except for the first one. The caller doesn't expect their WQE pointer
		   to be freed */
		if (cvmx_ptr_to_phys(work) == start_of_buffer) {
			buffer_ptr.u64 = next_buffer_ptr;
			number_buffers--;
		}
//	}
	while (number_buffers--) {
// 		if (octeon_has_feature(OCTEON_FEATURE_CN78XX_WQE) &&
// 		    !wqe->pki_wqe_translated) {
// 			cvmx_fpa3_gaura_t aura =
// 			    __cvmx_fpa3_gaura(wqe->word0.aura >> 10,
// 					      wqe->word0.aura * 0x3ff);
// 
// 			bptr.u64 = buffer_ptr.u64;
// 
// 			ncl = (bptr.size + CVMX_CACHE_LINE_SIZE - 1) /
// 			    CVMX_CACHE_LINE_SIZE;
// 
// 			/* XXX- assumes the buffer is cache-line aligned */
// 			start_of_buffer = (bptr.addr >> 7) << 7;
// 
// 			/* Read pointer to next buffer before we free the current buffer. */
// 			next_buffer_ptr = *(uint64_t *)
// 			    cvmx_phys_to_ptr(bptr.addr - 8);
// 			/* FPA AURA comes from WQE, includes node */
// 			cvmx_fpa3_free(cvmx_phys_to_ptr(start_of_buffer), aura,
// 				       ncl);
// 		} else {
			ncl = (buffer_ptr.s.size + CVMX_CACHE_LINE_SIZE - 1) /
			    CVMX_CACHE_LINE_SIZE + buffer_ptr.s.back;
			/* Calculate buffer start using "back" offset,
			   Remember the back pointer is in cache lines,
			   not 64bit words */
			start_of_buffer =
			    ((buffer_ptr.s.addr >> 7) - buffer_ptr.s.back)
			    << 7;
			/* Read pointer to next buffer before we free
			   the current buffer. */
			next_buffer_ptr = *(uint64_t *)
			    cvmx_phys_to_ptr(buffer_ptr.s.addr - 8);
			/* FPA pool comes from buf_ptr itself */
//			if (octeon_has_feature(OCTEON_FEATURE_CN78XX_WQE)) {
//				cvmx_fpa3_gaura_t aura =
//				    cvmx_fpa1_pool_to_fpa3_aura(buffer_ptr.s.
//								pool);
//				cvmx_fpa3_free(cvmx_phys_to_ptr
//					       (start_of_buffer), aura, ncl);
//			} else
				cvmx_fpa1_free(cvmx_phys_to_ptr
					       (start_of_buffer),
					       buffer_ptr.s.pool, ncl);
//		}
		buffer_ptr.u64 = next_buffer_ptr;
	}

}

#if 0
void cvmx_helper_setup_legacy_red(int pass_thresh, int drop_thresh)
{
	unsigned int node = cvmx_get_node_num();
	int aura, bpid;
	int buf_cnt;
	bool ena_red = 0, ena_drop = 0, ena_bp = 0;

#define FPA_RED_AVG_DLY	1
#define FPA_RED_LVL_DLY	 3
#define FPA_QOS_AVRG 0
	/* Trying to make it backward compatible with older chips */

	/* Setting up avg_dly and prb_dly, enable bits */
	if (octeon_has_feature(OCTEON_FEATURE_FPA3))
		cvmx_fpa3_config_red_params(node, FPA_QOS_AVRG, FPA_RED_LVL_DLY,
					    FPA_RED_AVG_DLY);

	/* Disable backpressure on queued buffers which is aura in 78xx */
	/* Assumption is that all packets from all interface and ports goes in same poolx/aurax
	   for backward compatibility */
	aura = cvmx_fpa_get_packet_pool();
	buf_cnt = cvmx_fpa_get_packet_pool_buffer_count();
	pass_thresh = buf_cnt - pass_thresh;
	drop_thresh = buf_cnt - drop_thresh;
	/* Map aura to bpid 0 */
	bpid = 0;
	cvmx_pki_write_aura_bpid(node, aura, bpid);
	/* Don't enable back pressure */
	ena_bp = 0;
	/* enable RED */
	ena_red = 1;
	/* This will enable RED on all interfaces since
	   they all have packet buffer coming from  same aura */
	cvmx_helper_setup_aura_qos(node, aura, ena_red, ena_drop, pass_thresh,
				   drop_thresh, ena_bp, 0);
}
#endif

/**
 * Setup Random Early Drop to automatically begin dropping packets.
 *
 * @pass_thresh:
 *               Packets will begin slowly dropping when there are less than
 *               this many packet buffers free in FPA 0.
 * @drop_thresh:
 *               All incomming packets will be dropped when there are less
 *               than this many free packet buffers in FPA 0.
 * Returns Zero on success. Negative on failure
 */
int cvmx_helper_setup_red(int pass_thresh, int drop_thresh)
{
//	if (octeon_has_feature(OCTEON_FEATURE_PKI))
//		cvmx_helper_setup_legacy_red(pass_thresh, drop_thresh);
//	else
		cvmx_ipd_setup_red(pass_thresh, drop_thresh);
	return 0;
}

EXPORT_SYMBOL(cvmx_helper_setup_red);

/**
 * @INTERNAL
 * Setup the common GMX settings that determine the number of
 * ports. These setting apply to almost all configurations of all
 * chips.
 *
 * @xiface: Interface to configure
 * @num_ports: Number of ports on the interface
 *
 * Returns Zero on success, negative on failure
 */
int __cvmx_helper_setup_gmx(int xiface, int num_ports)
{
	union cvmx_gmxx_tx_prts gmx_tx_prts;
	union cvmx_gmxx_rx_prts gmx_rx_prts;
	union cvmx_pko_reg_gmx_port_mode pko_mode;
	union cvmx_gmxx_txx_thresh gmx_tx_thresh;
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	int index;

	/* The common BGX settings are already done in the appropriate
	   enable functions, nothing to do here. */
//	if (octeon_has_feature(OCTEON_FEATURE_BGX))
//		return 0;

	/* Tell GMX the number of TX ports on this interface */
	gmx_tx_prts.u64 = cvmx_read_csr(CVMX_GMXX_TX_PRTS(xi.interface));
	gmx_tx_prts.s.prts = num_ports;
	cvmx_write_csr(CVMX_GMXX_TX_PRTS(xi.interface), gmx_tx_prts.u64);

	/*
	 * Tell GMX the number of RX ports on this interface.  This only applies
	 * to *GMII and XAUI ports.
	 */
	switch (cvmx_helper_interface_get_mode(xiface)) {
	case CVMX_HELPER_INTERFACE_MODE_RGMII:
	case CVMX_HELPER_INTERFACE_MODE_SGMII:
	case CVMX_HELPER_INTERFACE_MODE_QSGMII:
	case CVMX_HELPER_INTERFACE_MODE_GMII:
	case CVMX_HELPER_INTERFACE_MODE_XAUI:
	case CVMX_HELPER_INTERFACE_MODE_RXAUI:
		if (num_ports > 4) {
			cvmx_dprintf
			    ("__cvmx_helper_setup_gmx: Illegal num_ports\n");
			return -1;
		}

		gmx_rx_prts.u64 =
		    cvmx_read_csr(CVMX_GMXX_RX_PRTS(xi.interface));
		gmx_rx_prts.s.prts = num_ports;
		cvmx_write_csr(CVMX_GMXX_RX_PRTS(xi.interface),
			       gmx_rx_prts.u64);
		break;

	default:
		break;
	}

	/*
	 * Skip setting CVMX_PKO_REG_GMX_PORT_MODE on 30XX, 31XX, 50XX,
	 * and 68XX.
	 */
	if (!OCTEON_IS_MODEL(OCTEON_CN30XX) &&
	    !OCTEON_IS_MODEL(OCTEON_CN31XX) &&
	    !OCTEON_IS_MODEL(OCTEON_CN50XX) &&
	    !OCTEON_IS_MODEL(OCTEON_CN68XX)) {
		/* Tell PKO the number of ports on this interface */
		pko_mode.u64 = cvmx_read_csr(CVMX_PKO_REG_GMX_PORT_MODE);
		if (xi.interface == 0) {
			if (num_ports == 1)
				pko_mode.s.mode0 = 4;
			else if (num_ports == 2)
				pko_mode.s.mode0 = 3;
			else if (num_ports <= 4)
				pko_mode.s.mode0 = 2;
			else if (num_ports <= 8)
				pko_mode.s.mode0 = 1;
			else
				pko_mode.s.mode0 = 0;
		} else {
			if (num_ports == 1)
				pko_mode.s.mode1 = 4;
			else if (num_ports == 2)
				pko_mode.s.mode1 = 3;
			else if (num_ports <= 4)
				pko_mode.s.mode1 = 2;
			else if (num_ports <= 8)
				pko_mode.s.mode1 = 1;
			else
				pko_mode.s.mode1 = 0;
		}
		cvmx_write_csr(CVMX_PKO_REG_GMX_PORT_MODE, pko_mode.u64);
	}

	/*
	 * Set GMX to buffer as much data as possible before starting
	 * transmit. This reduces the chances that we have a TX under run
	 * due to memory contention. Any packet that fits entirely in the
	 * GMX FIFO can never have an under run regardless of memory load.
	 */
	gmx_tx_thresh.u64 =
	    cvmx_read_csr(CVMX_GMXX_TXX_THRESH(0, xi.interface));
	if (OCTEON_IS_MODEL(OCTEON_CN30XX) || OCTEON_IS_MODEL(OCTEON_CN31XX)
	    || OCTEON_IS_MODEL(OCTEON_CN50XX)) {
		/* These chips have a fixed max threshold of 0x40 */
		gmx_tx_thresh.s.cnt = 0x40;
	} else {
		/* ccn - common cnt numberator */
		int ccn = 0x100;

		/* Choose the max value for the number of ports */
		if (num_ports <= 1)
			gmx_tx_thresh.s.cnt = ccn / 1;
		else if (num_ports == 2)
			gmx_tx_thresh.s.cnt = ccn / 2;
		else
			gmx_tx_thresh.s.cnt = ccn / 4;
	}

	/*
	 * SPI and XAUI can have lots of ports but the GMX hardware
	 * only ever has a max of 4
	 */
	if (num_ports > 4)
		num_ports = 4;
	for (index = 0; index < num_ports; index++)
		cvmx_write_csr(CVMX_GMXX_TXX_THRESH(index, xi.interface),
			       gmx_tx_thresh.u64);

	/*
	 * For o68, we need to setup the pipes
	 */
	if (OCTEON_IS_MODEL(OCTEON_CN68XX)
	    && xi.interface < CVMX_HELPER_MAX_GMX) {
		union cvmx_gmxx_txx_pipe config;

		for (index = 0; index < num_ports; index++) {
			config.u64 = 0;

			if (__cvmx_helper_cfg_pko_port_base(xiface, index) >= 0) {
				config.u64 =
				    cvmx_read_csr(CVMX_GMXX_TXX_PIPE
						  (index, xi.interface));
				config.s.nump =
				    __cvmx_helper_cfg_pko_port_num(xiface,
								   index);
				config.s.base =
				    __cvmx_helper_cfg_pko_port_base(xiface,
								    index);
				cvmx_write_csr(CVMX_GMXX_TXX_PIPE
					       (index, xi.interface),
					       config.u64);
			}
		}
	}

	return 0;
}

int cvmx_helper_get_pko_port(int interface, int port)
{
	return cvmx_pko_get_base_pko_port(interface, port);
}

EXPORT_SYMBOL(cvmx_helper_get_pko_port);

int cvmx_helper_get_ipd_port(int xiface, int index)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	if (octeon_has_feature(OCTEON_FEATURE_PKND)) {
		const struct ipd_port_map *port_map;
		int ipd_port;

		if (OCTEON_IS_MODEL(OCTEON_CN68XX)) {
			port_map = ipd_port_map_68xx;
			ipd_port = 0;
		} else if (OCTEON_IS_MODEL(OCTEON_CN78XX)) {
			port_map = ipd_port_map_78xx;
			ipd_port = cvmx_helper_node_to_ipd_port(xi.node, 0);
		} else if (OCTEON_IS_MODEL(OCTEON_CN73XX)) {
			port_map = ipd_port_map_73xx;
			ipd_port = 0;
		} else if (OCTEON_IS_MODEL(OCTEON_CN75XX)) {
			port_map = ipd_port_map_75xx;
			ipd_port = 0;
		} else
			return -1;

		ipd_port += port_map[xi.interface].first_ipd_port;
		if (port_map[xi.interface].type == GMII) {
			cvmx_helper_interface_mode_t mode;
			mode = cvmx_helper_interface_get_mode(xiface);
			if (mode == CVMX_HELPER_INTERFACE_MODE_XAUI
			    || (mode == CVMX_HELPER_INTERFACE_MODE_RXAUI
				&& OCTEON_IS_MODEL(OCTEON_CN68XX))) {
				ipd_port += port_map[xi.interface].ipd_port_adj;
				return ipd_port;
			} else
				return ipd_port + (index * 16);
		} else if (port_map[xi.interface].type == ILK)
			return ipd_port + index;
		else if (port_map[xi.interface].type == NPI)
			return ipd_port + index;
		else if (port_map[xi.interface].type == LB)
			return ipd_port + index;
		else {
			cvmx_dprintf("ERROR: %s: interface %u:%u bad mode\n",
				     __func__, xi.node, xi.interface);
			return -1;
		}

	} else if (cvmx_helper_interface_get_mode(xiface) ==
		   CVMX_HELPER_INTERFACE_MODE_AGL) {
		return 24;
	}

	switch (xi.interface) {
	case 0:
		return index;
	case 1:
		return index + 16;
	case 2:
		return index + 32;
	case 3:
		return index + 36;
	case 4:
		return index + 40;
	case 5:
		return index + 42;
	case 6:
		return index + 44;
	case 7:
		return index + 46;
	}
	return -1;
}

EXPORT_SYMBOL(cvmx_helper_get_ipd_port);

int cvmx_helper_get_pknd(int xiface, int index)
{
	if (octeon_has_feature(OCTEON_FEATURE_PKND))
		return __cvmx_helper_cfg_pknd(xiface, index);

	return CVMX_INVALID_PKND;
}

EXPORT_SYMBOL(cvmx_helper_get_pknd);

int cvmx_helper_get_bpid(int interface, int port)
{
	if (octeon_has_feature(OCTEON_FEATURE_PKND))
		return __cvmx_helper_cfg_bpid(interface, port);

	return CVMX_INVALID_BPID;
}

EXPORT_SYMBOL(cvmx_helper_get_bpid);

/**
 * Display interface statistics.
 *
 * @port: IPD/PKO port number
 *
 * Returns none
 */
void cvmx_helper_show_stats(int port)
{
//	cvmx_pip_port_status_t status;
	cvmx_pko_port_status_t pko_status;

	/* ILK stats */
//	if (octeon_has_feature(OCTEON_FEATURE_ILK))
//		__cvmx_helper_ilk_show_stats();

	/* PIP stats */
//	cvmx_pip_get_port_stats(port, 0, &status);
//	cvmx_dprintf("port %d: the number of packets - ipd: %d\n",
//		     port, (int)status.packets);

	/* PKO stats */
	cvmx_pko_get_port_status(port, 0, &pko_status);
	cvmx_dprintf("port %d: the number of packets - pko: %d\n",
		     port, (int)pko_status.packets);

	/* TODO: other stats */
}

/**
 * Returns the interface number for an IPD/PKO port number.
 *
 * @ipd_port: IPD/PKO port number
 *
 * Returns Interface number
 */
int cvmx_helper_get_interface_num(int ipd_port)
{
	if (OCTEON_IS_MODEL(OCTEON_CN68XX)) {
		const struct ipd_port_map *port_map;
		int i;
		struct cvmx_xport xp = cvmx_helper_ipd_port_to_xport(ipd_port);
		port_map = ipd_port_map_68xx;
		for (i = 0; i < CVMX_HELPER_MAX_IFACE; i++) {
			if (xp.port >= port_map[i].first_ipd_port &&
			    xp.port <= port_map[i].last_ipd_port)
				return i;
		}
		return -1;
	} else if (OCTEON_IS_MODEL(OCTEON_CN78XX)) {
		const struct ipd_port_map *port_map;
		int i;
		struct cvmx_xport xp = cvmx_helper_ipd_port_to_xport(ipd_port);
		port_map = ipd_port_map_78xx;
		for (i = 0; i < CVMX_HELPER_MAX_IFACE; i++) {
			if (xp.port >= port_map[i].first_ipd_port &&
			    xp.port <= port_map[i].last_ipd_port)
				return cvmx_helper_node_interface_to_xiface(xp.
									    node,
									    i);
		}
		return -1;
	} else if (OCTEON_IS_MODEL(OCTEON_CN73XX)) {
		const struct ipd_port_map *port_map;
		int i;
		struct cvmx_xport xp = cvmx_helper_ipd_port_to_xport(ipd_port);
		port_map = ipd_port_map_73xx;
		for (i = 0; i < CVMX_HELPER_MAX_IFACE; i++) {
			if (xp.port >= port_map[i].first_ipd_port &&
			    xp.port <= port_map[i].last_ipd_port)
				return cvmx_helper_node_interface_to_xiface(xp.
									    node,
									    i);
		}
		return -1;
	} else if (OCTEON_IS_MODEL(OCTEON_CN75XX)) {
		const struct ipd_port_map *port_map;
		int i;
		struct cvmx_xport xp = cvmx_helper_ipd_port_to_xport(ipd_port);
		port_map = ipd_port_map_75xx;
		for (i = 0; i < CVMX_HELPER_MAX_IFACE; i++) {
			if (xp.port >= port_map[i].first_ipd_port &&
			    xp.port <= port_map[i].last_ipd_port)
				return cvmx_helper_node_interface_to_xiface(xp.
									    node,
									    i);
		}
		return -1;
	} else if (OCTEON_IS_MODEL(OCTEON_CN70XX) && ipd_port == 24) {
		return 4;
	} else {
		if (ipd_port < 16)
			return 0;
		else if (ipd_port < 32)
			return 1;
		else if (ipd_port < 36)
			return 2;
		else if (ipd_port < 40)
			return 3;
		else if (ipd_port < 42)
			return 4;
		else if (ipd_port < 44)
			return 5;
		else if (ipd_port < 46)
			return 6;
		else if (ipd_port < 48)
			return 7;
	}
	cvmx_dprintf
	    ("cvmx_helper_get_interface_num: Illegal IPD port number %d\n",
	     ipd_port);
	return -1;
}

EXPORT_SYMBOL(cvmx_helper_get_interface_num);

/**
 * Returns the interface index number for an IPD/PKO port
 * number.
 *
 * @ipd_port: IPD/PKO port number
 *
 * Returns Interface index number
 */
int cvmx_helper_get_interface_index_num(int ipd_port)
{
	if (octeon_has_feature(OCTEON_FEATURE_PKND)) {
		const struct ipd_port_map *port_map;
		int port;
		enum port_map_if_type type = INVALID_IF_TYPE;
		int i;
		int num_interfaces;

		if (OCTEON_IS_MODEL(OCTEON_CN68XX))
			port_map = ipd_port_map_68xx;
		else if (OCTEON_IS_MODEL(OCTEON_CN78XX)) {
			struct cvmx_xport xp =
			    cvmx_helper_ipd_port_to_xport(ipd_port);
			port_map = ipd_port_map_78xx;
			ipd_port = xp.port;
		} else if (OCTEON_IS_MODEL(OCTEON_CN73XX)) {
			struct cvmx_xport xp =
			    cvmx_helper_ipd_port_to_xport(ipd_port);
			port_map = ipd_port_map_73xx;
			ipd_port = xp.port;
		} else if (OCTEON_IS_MODEL(OCTEON_CN75XX)) {
			struct cvmx_xport xp =
			    cvmx_helper_ipd_port_to_xport(ipd_port);
			port_map = ipd_port_map_75xx;
			ipd_port = xp.port;
		} else
			return -1;

		num_interfaces = cvmx_helper_get_number_of_interfaces();

		/* Get the interface type of the ipd port */
		for (i = 0; i < num_interfaces; i++) {
			if (ipd_port >= port_map[i].first_ipd_port &&
			    ipd_port <= port_map[i].last_ipd_port) {
				type = port_map[i].type;
				break;
			}
		}

		/* Convert the ipd port to the interface port */
		switch (type) {
			/* Ethernet interfaces have a channel in lower 4 bits
			 * that is does not discriminate traffic, and is ignored.
			 */
		case GMII:
			port = ipd_port - port_map[i].first_ipd_port;

			/* CN68XX adds 0x40 to IPD_PORT when in XAUI/RXAUI
			 * mode of operation, adjust for that case
			 */
			if (port >= port_map[i].ipd_port_adj)
				port -= port_map[i].ipd_port_adj;

			port >>= 4;
//      cvmx_dprintf("%s: ipd_port=%#x port=%d\n", __func__, ipd_port, port);
			return port;

			/*
			 * These interfaces do not have physical ports,
			 * but have logical channels instead that separate
			 * traffic into logical streams
			 */
		case ILK:
		case NPI:
		case LB:
			port = ipd_port - port_map[i].first_ipd_port;
//      cvmx_dprintf("%s: ipd_port=%#x port=%d\n", __func__, ipd_port, port);
			return port;

		default:
			cvmx_printf("ERROR: %s: Illegal IPD port number %#x\n",
				    __func__, ipd_port);
			return -1;
		}
	}
	if (OCTEON_IS_MODEL(OCTEON_CN70XX))
		return ipd_port & 3;
	if (ipd_port < 32)
		return ipd_port & 15;
	else if (ipd_port < 40)
		return ipd_port & 3;
	else if (ipd_port < 48)
		return ipd_port & 1;
	else
		cvmx_dprintf
		    ("cvmx_helper_get_interface_index_num: Illegal IPD port number\n");

	return -1;
}

EXPORT_SYMBOL(cvmx_helper_get_interface_index_num);
