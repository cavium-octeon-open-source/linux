/***********************license start***************
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2012 Cavium Inc.
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

#ifndef __CVMX_INTERNAL_PORTS_RANGE__
#define __CVMX_INTERNAL_PORTS_RANGE__

#include "cvmx.h"

/*
 * Allocated a block of internal ports for the specified interface/port
 *
 * @param  interface  the interface for which the internal ports are requested
 * @param  port       the index of the port within in the interface for which the internal ports
 *                    are requested.
 * @param  count      the number of internal ports requested
 *
 * Returns  0 on success
 *         -1 on failure
 */
int cvmx_pko_internal_ports_alloc(int interface, int port, uint64_t count);

/*
 * Free the internal ports associated with the specified interface/port
 *
 * @param  interface  the interface for which the internal ports are requested
 * @param  port       the index of the port within in the interface for which the internal ports
 *                    are requested.
 *
 * Returns  0 on success
 *         -1 on failure
 */
int cvmx_pko_internal_ports_free(int interface, int port);

/*
 * Frees up all the allocated internal ports.
 */
void cvmx_pko_internal_ports_range_free_all(void);

void cvmx_pko_internal_ports_range_show(void);

extern int __cvmx_pko_internal_ports_range_init(void);

#endif
