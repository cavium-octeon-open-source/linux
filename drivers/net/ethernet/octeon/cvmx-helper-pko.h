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
 * PKO helper, configuration API
 */

#ifndef __CVMX_HELPER_PKO_H__
#define __CVMX_HELPER_PKO_H__

/* CSR typedefs have been moved to cvmx-pko-defs.h */

/**
 * Gets the fpa pool number of pko pool
 */
int64_t cvmx_fpa_get_pko_pool(void);

/**
 * Gets the buffer size of pko pool
 */
uint64_t cvmx_fpa_get_pko_pool_block_size(void);

/**
 * Gets the buffer size  of pko pool
 */
uint64_t cvmx_fpa_get_pko_pool_buffer_count(void);

int cvmx_helper_pko_init(void);

/*
 * This function is a no-op
 * included here for backwards compatibility only.
 */
static inline int cvmx_pko_initialize_local(void)
{
	return 0;
}

extern int __cvmx_helper_pko_drain(void);

extern int __cvmx_helper_interface_setup_pko(int interface);

#endif /* __CVMX_HELPER_PKO_H__ */
