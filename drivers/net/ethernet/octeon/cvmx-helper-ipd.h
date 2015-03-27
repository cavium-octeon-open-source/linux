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
 * Helper functions for IPD
 */

#ifndef __CVMX_HELPER_IPD_H__
#define __CVMX_HELPER_IPD_H__

#include <asm/octeon/cvmx.h>

#include "cvmx-ipd.h"

void cvmx_helper_ipd_set_wqe_no_ptr_mode(bool mode);
void cvmx_helper_ipd_pkt_wqe_le_mode(bool mode);
int __cvmx_helper_ipd_global_setup(void);
int __cvmx_helper_ipd_setup_interface(int interface);
#endif /* __CVMX_HELPER_PKI_H__ */
