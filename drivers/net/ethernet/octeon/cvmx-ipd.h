/***********************license start***************
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2003-2010 Cavium Inc.
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
 * Interface to the hardware Input Packet Data unit.
 *
 */

#ifndef __CVMX_IPD_H__
#define __CVMX_IPD_H__

#include <asm/octeon/cvmx.h>
#include <asm/octeon/cvmx-csr-enums.h>

#include "cvmx-ipd-defs.h"
#include "cvmx-fpa.h"

/* CSR typedefs have been moved to cvmx-ipd-defs.h */

typedef cvmx_ipd_1st_mbuff_skip_t cvmx_ipd_mbuff_not_first_skip_t;
typedef cvmx_ipd_1st_next_ptr_back_t cvmx_ipd_second_next_ptr_back_t;

typedef struct cvmx_ipd_tag_fields {
	uint64_t ipv6_src_ip:1;
	uint64_t ipv6_dst_ip:1;
	uint64_t ipv6_src_port:1;
	uint64_t ipv6_dst_port:1;
	uint64_t ipv6_next_header:1;
	uint64_t ipv4_src_ip:1;
	uint64_t ipv4_dst_ip:1;
	uint64_t ipv4_src_port:1;
	uint64_t ipv4_dst_port:1;
	uint64_t ipv4_protocol:1;
	uint64_t input_port:1;
} cvmx_ipd_tag_fields_t;

typedef struct cvmx_pip_port_config {
	uint64_t parse_mode;
	uint64_t tag_type;
	uint64_t tag_mode;
	cvmx_ipd_tag_fields_t tag_fields;
} cvmx_pip_port_config_t;

typedef struct cvmx_ipd_config_struct {
	uint64_t first_mbuf_skip;
	uint64_t not_first_mbuf_skip;
	uint64_t ipd_enable;
	uint64_t enable_len_M8_fix;
	uint64_t cache_mode;
	struct cvmx_fpa_pool_config packet_pool;
	struct cvmx_fpa_pool_config wqe_pool;
	cvmx_pip_port_config_t port_config;
} cvmx_ipd_config_t;

extern CVMX_SHARED cvmx_ipd_config_t cvmx_ipd_cfg;
/**
 * Gets the fpa pool number of packet pool
 */
static inline int64_t cvmx_fpa_get_packet_pool(void)
{
//	if (octeon_has_feature(OCTEON_FEATURE_PKI)) {
//		int node = cvmx_get_node_num();
//		return pki_dflt_aura[node].aura_num;
//	}
	return (cvmx_ipd_cfg.packet_pool.pool_num);
}

/**
 * Gets the buffer size of packet pool buffer
 */
static inline uint64_t cvmx_fpa_get_packet_pool_block_size(void)
{
//	if (octeon_has_feature(OCTEON_FEATURE_PKI)) {
//		int node = cvmx_get_node_num();
//		return pki_dflt_pool[node].buffer_size;
//	}
	return (cvmx_ipd_cfg.packet_pool.buffer_size);
}

/**
 * Gets the buffer count of packet pool
 */
static inline uint64_t cvmx_fpa_get_packet_pool_buffer_count(void)
{
//	if (octeon_has_feature(OCTEON_FEATURE_PKI)) {
//		int node = cvmx_get_node_num();
//		return pki_dflt_pool[node].buffer_count;
//	}
	return (cvmx_ipd_cfg.packet_pool.buffer_count);
}

/**
 * Gets the fpa pool number of wqe pool
 */
static inline int64_t cvmx_fpa_get_wqe_pool(void)
{
//	if (octeon_has_feature(OCTEON_FEATURE_PKI)) {
//		int node = cvmx_get_node_num();
//		return pki_dflt_aura[node].aura_num;
//	}
	return (cvmx_ipd_cfg.wqe_pool.pool_num);
}

/**
 * Gets the buffer size of wqe pool buffer
 */
static inline uint64_t cvmx_fpa_get_wqe_pool_block_size(void)
{
//	if (octeon_has_feature(OCTEON_FEATURE_PKI)) {
//		int node = cvmx_get_node_num();
//		return pki_dflt_pool[node].buffer_size;
//	}
	return (cvmx_ipd_cfg.wqe_pool.buffer_size);
}

/**
 * Gets the buffer count of wqe pool
 */
static inline uint64_t cvmx_fpa_get_wqe_pool_buffer_count(void)
{
//	if (octeon_has_feature(OCTEON_FEATURE_PKI)) {
//		int node = cvmx_get_node_num();
//		return pki_dflt_pool[node].buffer_count;
//	}
	return (cvmx_ipd_cfg.wqe_pool.buffer_count);
}

/**
 * Sets the ipd related configuration in internal structure which is then used
 * for seting IPD hardware block
 */
int cvmx_ipd_set_config(cvmx_ipd_config_t ipd_config);

/**
 * Gets the ipd related configuration from internal structure.
 */
void cvmx_ipd_get_config(cvmx_ipd_config_t * ipd_config);

/**
 * Sets the internal FPA pool data structure for packet buffer pool.
 * @pool:	fpa pool number yo use
 * @buffer_size:	buffer size of pool
 * @buffer_count:	number of buufers to allocate to pool
 */
void cvmx_ipd_set_packet_pool_config(int64_t pool, uint64_t buffer_size,
				     uint64_t buffer_count);

/**
 * Sets the internal FPA pool data structure for wqe pool.
 * @pool:	fpa pool number yo use
 * @buffer_size:	buffer size of pool
 * @buffer_count:	number of buufers to allocate to pool
 */
void cvmx_ipd_set_wqe_pool_config(int64_t pool, uint64_t buffer_size,
				  uint64_t buffer_count);

/**
 * Configure IPD
 *
 * @mbuff_size: Packets buffer size in 8 byte words
 * @first_mbuff_skip:
 *                   Number of 8 byte words to skip in the first buffer
 * @not_first_mbuff_skip:
 *                   Number of 8 byte words to skip in each following buffer
 * @first_back: Must be same as first_mbuff_skip / 128
 * @second_back:
 *                   Must be same as not_first_mbuff_skip / 128
 * @wqe_fpa_pool:
 *                   FPA pool to get work entries from
 * @cache_mode:
 * @back_pres_enable_flag:
 *                   Enable or disable port back pressure at a global level.
 *                   This should always be 1 as more accurate control can be
 *                   found in IPD_PORTX_BP_PAGE_CNT[BP_ENB].
 */
void cvmx_ipd_config(uint64_t mbuff_size, uint64_t first_mbuff_skip,
		     uint64_t not_first_mbuff_skip, uint64_t first_back,
		     uint64_t second_back, uint64_t wqe_fpa_pool,
		     cvmx_ipd_mode_t cache_mode,
		     uint64_t back_pres_enable_flag);
/**
 * Enable IPD
 */
void cvmx_ipd_enable(void);

/**
 * Disable IPD
 */
void cvmx_ipd_disable(void);

void __cvmx_ipd_free_ptr(void);

void cvmx_ipd_set_packet_pool_buffer_count(uint64_t buffer_count);
void cvmx_ipd_set_wqe_pool_buffer_count(uint64_t buffer_count);

/**
 * Setup Random Early Drop on a specific input queue
 *
 * @queue:  Input queue to setup RED on (0-7)
 * @pass_thresh:
 *               Packets will begin slowly dropping when there are less than
 *               this many packet buffers free in FPA 0.
 * @drop_thresh:
 *               All incomming packets will be dropped when there are less
 *               than this many free packet buffers in FPA 0.
 * Returns Zero on success. Negative on failure
 */
extern int cvmx_ipd_setup_red_queue(int queue, int pass_thresh,
				    int drop_thresh);

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
extern int cvmx_ipd_setup_red(int pass_thresh, int drop_thresh);

#endif /*  __CVMX_IPD_H__ */
