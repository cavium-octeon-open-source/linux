/***********************license start***************
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2013 Cavium Inc.
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
 * Functions for AGL (RGMII) commong initialization, configuration.
 *
 */

#ifndef __CVMX_AGL_H__
#define __CVMX_AGL_H__

#include <asm/octeon/cvmx.h>

#include "cvmx-helper.h"

/*
 * @port: port to enable
 *
 * Returns Zero on success, negative on failure
 */
extern int cvmx_agl_enable(int port);

extern cvmx_helper_link_info_t cvmx_agl_link_get(int port);

/*
 * Set MII/RGMII link based on mode.
 *
 * @port:   interface port to set the link.
 * @link_info:  Link status
 *
 * Returns       0 on success and 1 on failure
 */
extern int cvmx_agl_link_set(int port, cvmx_helper_link_info_t link_info);

/**
 * Disables the sending of flow control (pause) frames on the specified
 * AGL (RGMII) port(s).
 *
 * @interface: Which interface (0 or 1)
 * @port_mask: Mask (4bits) of which ports on the interface to disable
 *                  backpressure on.
 *                  1 => disable backpressure
 *                  0 => enable backpressure
 *
 * Returns 0 on success
 *         -1 on error
 */
extern int cvmx_agl_set_backpressure_override(uint32_t interface,
					      uint32_t port_mask);

#endif /* __CVMX_AGL_H__ */
