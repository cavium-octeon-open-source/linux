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
 * Helper functions to abstract board specific data about
 * network ports from the rest of the cvmx-helper files.
 *
 */

#include <linux/module.h>
#include <asm/octeon/cvmx.h>
#include <asm/octeon/cvmx-smix-defs.h>
#include <asm/octeon/cvmx-asxx-defs.h>
#include <asm/octeon/cvmx-helper-board.h>
#include <asm/octeon/cvmx-helper-cfg.h>

/**
 * @INTERNAL
 * Gets the clock type used for the USB block based on board type.
 * Used by the USB code for auto configuration of clock type.
 *
 * Returns USB clock type enumeration
 */
enum cvmx_helper_board_usb_clock_types __cvmx_helper_board_usb_get_clock_type(void)
{
	switch (cvmx_sysinfo_get()->board_type) {
	case CVMX_BOARD_TYPE_BBGW_REF:
	case CVMX_BOARD_TYPE_LANAI2_A:
	case CVMX_BOARD_TYPE_LANAI2_U:
	case CVMX_BOARD_TYPE_LANAI2_G:
	case CVMX_BOARD_TYPE_NIC10E_66:
	case CVMX_BOARD_TYPE_UBNT_E100:
		return USB_CLOCK_TYPE_CRYSTAL_12;
	case CVMX_BOARD_TYPE_NIC10E:
		return USB_CLOCK_TYPE_REF_12;
	default:
		break;
	}
	/* Most boards except NIC10e use a 12MHz crystal */
	if (OCTEON_IS_OCTEON2())
		return USB_CLOCK_TYPE_CRYSTAL_12;
	return USB_CLOCK_TYPE_REF_48;
}

EXPORT_SYMBOL(__cvmx_helper_board_usb_get_clock_type);
/**
 * @INTERNAL
 * Adjusts the number of available USB ports on Octeon based on board
 * specifics.
 *
 * @supported_ports: expected number of ports based on chip type;
 *
 *
 * Returns number of available usb ports, based on board specifics.
 *         Return value is supported_ports if function does not
 *         override.
 */
int __cvmx_helper_board_usb_get_num_ports(int supported_ports)
{
	switch (cvmx_sysinfo_get()->board_type) {
	case CVMX_BOARD_TYPE_NIC_XLE_4G:
	case CVMX_BOARD_TYPE_NIC2E:
//	case CVMX_BOARD_TYPE_SNIC10E:
		return 0;
	case CVMX_BOARD_TYPE_NIC10E_66:
		if (cvmx_sysinfo_get()->board_rev_major >= 3)
			return 0;
	}

	return supported_ports;
}

EXPORT_SYMBOL(__cvmx_helper_board_usb_get_num_ports);
