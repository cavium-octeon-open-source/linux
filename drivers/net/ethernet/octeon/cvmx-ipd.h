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

/*
 * Interface to the hardware Input Packet Data unit.
 */

#ifndef __CVMX_IPD_H__
#define __CVMX_IPD_H__

#include "cvmx-fpa.h"

/*
 * We have to export this in the header for cvmx-helper-errata.c
 */
#define CVMX_IPD_FIRST_MBUF_SKIP 184
#define CVMX_IPD_NOT_FIRST_MBUF_SKIP 0

/**
 * Gets the fpa pool number of packet pool
 */
static inline int64_t cvmx_fpa_get_packet_pool(void)
{
	extern struct cvmx_fpa_pool_config _cvmx_ipd_packet_pool;

	return _cvmx_ipd_packet_pool.pool_num;
}

/**
 * Gets the buffer size of packet pool buffer
 */
static inline uint64_t cvmx_fpa_get_packet_pool_block_size(void)
{
	extern struct cvmx_fpa_pool_config _cvmx_ipd_packet_pool;

	return _cvmx_ipd_packet_pool.buffer_size;
}

/**
 * Gets the buffer count of packet pool
 */
static inline uint64_t cvmx_fpa_get_packet_pool_buffer_count(void)
{
	extern struct cvmx_fpa_pool_config _cvmx_ipd_packet_pool;

	return _cvmx_ipd_packet_pool.buffer_count;
}

/**
 * Gets the fpa pool number of wqe pool
 */
static inline int64_t cvmx_fpa_get_wqe_pool(void)
{
	extern struct cvmx_fpa_pool_config _cvmx_ipd_wqe_pool;

	return _cvmx_ipd_wqe_pool.pool_num;
}

/**
 * Gets the buffer size of wqe pool buffer
 */
static inline uint64_t cvmx_fpa_get_wqe_pool_block_size(void)
{
	extern struct cvmx_fpa_pool_config _cvmx_ipd_wqe_pool;

	return _cvmx_ipd_wqe_pool.buffer_size;
}

/**
 * Gets the buffer count of wqe pool
 */
static inline uint64_t cvmx_fpa_get_wqe_pool_buffer_count(void)
{
	extern struct cvmx_fpa_pool_config _cvmx_ipd_wqe_pool;

	return _cvmx_ipd_wqe_pool.buffer_count;
}

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

void cvmx_ipd_init(void);
void cvmx_ipd_enable(void);
void cvmx_ipd_disable(void);
void cvmx_ipd_setup_interface(int interface);
void cvmx_ipd_free_ptr(void);
void cvmx_ipd_setup_red(int pass_thresh, int drop_thresh);


#endif /*  __CVMX_IPD_H__ */
