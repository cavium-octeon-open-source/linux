/***********************license start***************
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2003-2012 Cavium Inc.
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
#include "cvmx.h"

#ifndef __CVMX_RANGE_H__
#define __CVMX_RANGE_H__

extern int cvmx_range_init(uint64_t range_addr, int size);
extern int cvmx_range_alloc(uint64_t range_addr, uint64_t owner, uint64_t cnt,
			    int align);
extern int cvmx_range_alloc_ordered(uint64_t range_addr, uint64_t owner,
				    uint64_t cnt, int align, int reverse);
extern int cvmx_range_alloc_non_contiguos(uint64_t range_addr, uint64_t owner,
					  uint64_t cnt, int elements[]);
extern int cvmx_range_reserve(uint64_t range_addr, uint64_t owner,
			      uint64_t base, uint64_t cnt);
extern int cvmx_range_free_with_base(uint64_t range_addr, int base, int cnt);
extern int cvmx_range_free_with_owner(uint64_t range_addr, uint64_t owner);
extern uint64_t cvmx_range_get_owner(uint64_t range_addr, uint64_t base);
extern void cvmx_range_show(uint64_t range_addr);
extern int cvmx_range_memory_size(int nelements);
extern int cvmx_range_free_mutiple(uint64_t range_addr, int bases[], int count);

#endif // __CVMX_RANGE_H__
