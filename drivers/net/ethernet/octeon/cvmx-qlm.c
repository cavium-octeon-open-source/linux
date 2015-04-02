/***********************license start***************
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2011-2015 Cavium Inc.
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

#include <asm/octeon/cvmx-qlm.h>
#include <asm/octeon/cvmx-clock.h>
#include <asm/octeon/cvmx-gserx-defs.h>
#include <asm/octeon/cvmx-gmxx-defs.h>
#include <asm/octeon/cvmx-pemx-defs.h>
#include <asm/octeon/cvmx-helper-jtag.h>
#include <asm/octeon/cvmx-sriox-defs.h>

#include "cvmx-helper-util.h"

#if 0

/**
 * @file
 *
 * Helper utilities for qlm.
 *
 */
#include <asm/octeon/cvmx.h>
#include <asm/octeon/cvmx-bootmem.h>
#include <asm/octeon/cvmx-helper-jtag.h>
#include <asm/octeon/cvmx-helper-util.h>
#include <asm/octeon/cvmx-qlm.h>
#include <asm/octeon/cvmx-clock.h>
#include <asm/octeon/cvmx-bgxx-defs.h>
#include <asm/octeon/cvmx-gmxx-defs.h>
#include <asm/octeon/cvmx-gserx-defs.h>
#include <asm/octeon/cvmx-sriox-defs.h>
#include <asm/octeon/cvmx-sriomaintx-defs.h>
#include <asm/octeon/cvmx-pciercx-defs.h>
#include <asm/octeon/cvmx-pemx-defs.h>

/* Their is a copy of this in bootloader qlm configuration, make sure
   to update both the places till i figure out */
#define R_25G_REFCLK100             0x0
#define R_5G_REFCLK100              0x1
#define R_8G_REFCLK100              0x2
#define R_125G_REFCLK15625_KX       0x3
#define R_3125G_REFCLK15625_XAUI    0x4
#define R_103125G_REFCLK15625_KR    0x5
#define R_125G_REFCLK15625_SGMII    0x6
#define R_5G_REFCLK15625_QSGMII     0x7
#define R_625G_REFCLK15625_RXAUI    0x8
#define R_25G_REFCLK125             0x9
#define R_5G_REFCLK125              0xa
#define R_8G_REFCLK125              0xb

static const int REF_100MHZ = 100000000;
static const int REF_125MHZ = 125000000;
static const int REF_156MHZ = 156250000;

/**
 * The JTAG chain for CN52XX and CN56XX is 4 * 268 bits long, or 1072.
 * CN5XXX full chain shift is:
 *     new data => lane 3 => lane 2 => lane 1 => lane 0 => data out
 * The JTAG chain for CN63XX is 4 * 300 bits long, or 1200.
 * The JTAG chain for CN68XX is 4 * 304 bits long, or 1216.
 * The JTAG chain for CN66XX/CN61XX/CNF71XX is 4 * 304 bits long, or 1216.
 * CN6XXX full chain shift is:
 *     new data => lane 0 => lane 1 => lane 2 => lane 3 => data out
 * Shift LSB first, get LSB out
 */
#ifndef _MIPS_ARCH_OCTEON2
extern const __cvmx_qlm_jtag_field_t __cvmx_qlm_jtag_field_cn52xx[];
extern const __cvmx_qlm_jtag_field_t __cvmx_qlm_jtag_field_cn56xx[];
#endif
extern const __cvmx_qlm_jtag_field_t __cvmx_qlm_jtag_field_cn63xx[];
extern const __cvmx_qlm_jtag_field_t __cvmx_qlm_jtag_field_cn66xx[];
extern const __cvmx_qlm_jtag_field_t __cvmx_qlm_jtag_field_cn68xx[];

#define CVMX_QLM_JTAG_UINT32 40
typedef uint32_t qlm_jtag_uint32_t[CVMX_QLM_JTAG_UINT32 * 8];
CVMX_SHARED qlm_jtag_uint32_t *__cvmx_qlm_jtag_xor_ref;

/**
 * Return the number of QLMs supported by the chip
 *
 * Returns  Number of QLMs
 */
int cvmx_qlm_get_num(void)
{
	if (OCTEON_IS_MODEL(OCTEON_CN68XX))
		return 5;
	else if (OCTEON_IS_MODEL(OCTEON_CN66XX))
		return 3;
	else if (OCTEON_IS_MODEL(OCTEON_CN63XX))
		return 3;
	else if (OCTEON_IS_MODEL(OCTEON_CN61XX))
		return 3;
#ifndef _MIPS_ARCH_OCTEON2
	else if (OCTEON_IS_MODEL(OCTEON_CN56XX))
		return 4;
	else if (OCTEON_IS_MODEL(OCTEON_CN52XX))
		return 2;
#endif
	else if (OCTEON_IS_MODEL(OCTEON_CNF71XX))
		return 2;
	else if (OCTEON_IS_MODEL(OCTEON_CN78XX))
		return 8;
	else if (OCTEON_IS_MODEL(OCTEON_CN73XX))
		return 7;
	//cvmx_dprintf("Warning: cvmx_qlm_get_num: This chip does not have QLMs\n");
	return 0;
}

#endif

/**
 * Return the qlm number based on the interface
 *
 * @xiface:  interface to look up
 *
 * Returns 0 on success other on failure
 */
int cvmx_qlm_interface(int xiface)
{
	struct cvmx_xiface xi = cvmx_helper_xiface_to_node_interface(xiface);
	if (OCTEON_IS_MODEL(OCTEON_CN61XX)) {
		return (xi.interface == 0) ? 2 : 0;
	} else if (OCTEON_IS_MODEL(OCTEON_CN63XX)
		   || OCTEON_IS_MODEL(OCTEON_CN66XX)) {
		return 2 - xi.interface;
	} else if (OCTEON_IS_MODEL(OCTEON_CNF71XX)) {
		if (xi.interface == 0)
			return 0;
		else
			cvmx_dprintf
			    ("Warning: cvmx_qlm_interface: Invalid interface %d\n",
			     xi.interface);
#if 0
	} else if (OCTEON_IS_MODEL(OCTEON_CN78XX)) {
		cvmx_bgxx_cmr_global_config_t gconfig;
		cvmx_gserx_phy_ctl_t phy_ctl;
		cvmx_gserx_cfg_t gserx_cfg;
		int qlm;

		if (xi.interface < 6) {
			if (xi.interface < 2) {
				gconfig.u64 =
				    cvmx_read_csr_node(xi.node,
						       CVMX_BGXX_CMR_GLOBAL_CONFIG
						       (xi.interface));
				if (gconfig.s.pmux_sds_sel)
					qlm = xi.interface + 2;	/* QLM 2 or 3 */
				else
					qlm = xi.interface;	/* QLM 0 or 1 */
			} else
				qlm = xi.interface + 2;	/* QLM 4-7 */

			/* make sure the QLM is powered up and out of reset */
			phy_ctl.u64 =
			    cvmx_read_csr_node(xi.node,
					       CVMX_GSERX_PHY_CTL(qlm));
			if (phy_ctl.s.phy_pd || phy_ctl.s.phy_reset)
				return -1;
			gserx_cfg.u64 =
			    cvmx_read_csr_node(xi.node, CVMX_GSERX_CFG(qlm));
			if (gserx_cfg.s.bgx)
				return qlm;
			else
				return -1;
		} else if (xi.interface <= 7) {	/* ILK */
			int qlm;
			for (qlm = 4; qlm < 8; qlm++) {
				/* Make sure the QLM is powered and out of reset */
				phy_ctl.u64 =
				    cvmx_read_csr_node(xi.node,
						       CVMX_GSERX_PHY_CTL(qlm));
				if (phy_ctl.s.phy_pd || phy_ctl.s.phy_reset)
					continue;
				/* Make sure the QLM is in ILK mode */
				gserx_cfg.u64 =
				    cvmx_read_csr_node(xi.node,
						       CVMX_GSERX_CFG(qlm));
				if (gserx_cfg.s.ila)
					return qlm;
			}
		}
		return -1;
#endif
	} else if (OCTEON_IS_MODEL(OCTEON_CN73XX)) {
		cvmx_gserx_phy_ctl_t phy_ctl;
		cvmx_gserx_cfg_t gserx_cfg;
		int qlm;

		/* QLM2, QLM3, QLM5/QLM6 */
		if (xi.interface < 4) {
			if (xi.interface < 2)
				qlm = xi.interface + 2;
			else
				qlm = xi.interface + 3;

			phy_ctl.u64 = cvmx_read_csr(CVMX_GSERX_PHY_CTL(qlm));
			if (phy_ctl.s.phy_pd || phy_ctl.s.phy_reset) {
				return -1;
			}
			gserx_cfg.u64 = cvmx_read_csr(CVMX_GSERX_CFG(qlm));
			if (gserx_cfg.s.bgx)
				return qlm;
			else
				return -1;
		}
	} else {
		/* Must be cn68XX */
		switch (xi.interface) {
		case 1:
			return 0;
		default:
			return xi.interface;
		}
	}
	return -1;
}


#if 0
/**
 * Return number of lanes for a given qlm
 *
 * @qlm:    QLM to examine
 *
 * Returns  Number of lanes
 */
int cvmx_qlm_get_lanes(int qlm)
{
	if (OCTEON_IS_MODEL(OCTEON_CN61XX) && qlm == 1)
		return 2;
	else if (OCTEON_IS_MODEL(OCTEON_CNF71XX))
		return 2;

	return 4;
}

/**
 * Get the QLM JTAG fields based on Octeon model on the supported chips.
 *
 * Returns  qlm_jtag_field_t structure
 */
const __cvmx_qlm_jtag_field_t *cvmx_qlm_jtag_get_field(void)
{
	/* Figure out which JTAG chain description we're using */
	if (OCTEON_IS_MODEL(OCTEON_CN68XX))
		return __cvmx_qlm_jtag_field_cn68xx;
	else if (OCTEON_IS_MODEL(OCTEON_CN66XX)
		 || OCTEON_IS_MODEL(OCTEON_CN61XX)
		 || OCTEON_IS_MODEL(OCTEON_CNF71XX))
		return __cvmx_qlm_jtag_field_cn66xx;
	else if (OCTEON_IS_MODEL(OCTEON_CN63XX))
		return __cvmx_qlm_jtag_field_cn63xx;
#ifndef _MIPS_ARCH_OCTEON2
	else if (OCTEON_IS_MODEL(OCTEON_CN56XX))
		return __cvmx_qlm_jtag_field_cn56xx;
	else if (OCTEON_IS_MODEL(OCTEON_CN52XX))
		return __cvmx_qlm_jtag_field_cn52xx;
#endif
	else {
		//cvmx_dprintf("cvmx_qlm_jtag_get_field: Needs update for this chip\n");
		return NULL;
	}
}

/**
 * Get the QLM JTAG length by going through qlm_jtag_field for each
 * Octeon model that is supported
 *
 * Returns return the length.
 */
int cvmx_qlm_jtag_get_length(void)
{
	const __cvmx_qlm_jtag_field_t *qlm_ptr = cvmx_qlm_jtag_get_field();
	int length = 0;

	/* Figure out how many bits are in the JTAG chain */
	while (qlm_ptr != NULL && qlm_ptr->name) {
		if (qlm_ptr->stop_bit > length)
			length = qlm_ptr->stop_bit + 1;
		qlm_ptr++;
	}
	return length;
}

/**
 * Initialize the QLM layer
 */
void cvmx_qlm_init(void)
{
	int qlm;
	int qlm_jtag_length;
	char *qlm_jtag_name = "cvmx_qlm_jtag";
	int qlm_jtag_size = CVMX_QLM_JTAG_UINT32 * 8 * sizeof(uint32_t) * 5;
	static uint64_t qlm_base = 0;
	const cvmx_bootmem_named_block_desc_t *desc;

	if (OCTEON_IS_OCTEON3())
		return;

	/* Skip actual JTAG accesses on simulator */
	if (cvmx_sysinfo_get()->board_type == CVMX_BOARD_TYPE_SIM)
		return;

	qlm_jtag_length = cvmx_qlm_jtag_get_length();

	if (sizeof(uint32_t) * qlm_jtag_length >
	    (int)sizeof(__cvmx_qlm_jtag_xor_ref[0]) * 8) {
		cvmx_dprintf
		    ("ERROR: cvmx_qlm_init: JTAG chain larger than XOR ref size\n");
		return;
	}

	/* No need to initialize the initial JTAG state if cvmx_qlm_jtag
	   named block is already created. */
	if ((desc = cvmx_bootmem_find_named_block(qlm_jtag_name)) != NULL) {
		__cvmx_qlm_jtag_xor_ref = cvmx_phys_to_ptr(desc->base_addr);
		/* Initialize the internal JTAG */
		cvmx_helper_qlm_jtag_init();
		return;
	}

	/* Create named block to store the initial JTAG state. */
	qlm_base = cvmx_bootmem_phy_named_block_alloc(qlm_jtag_size, 0, 1ull << 29, 128,	/* KSEG0 addresable */
						      qlm_jtag_name,
						      CVMX_BOOTMEM_FLAG_END_ALLOC);

	if (qlm_base == -1ull) {
		cvmx_dprintf
		    ("ERROR: cvmx_qlm_init: Error in creating %s named block\n",
		     qlm_jtag_name);
		return;
	}
	__cvmx_qlm_jtag_xor_ref = cvmx_phys_to_ptr(qlm_base);
	memset(__cvmx_qlm_jtag_xor_ref, 0, qlm_jtag_size);

	/* Initialize the internal JTAG */
	cvmx_helper_qlm_jtag_init();

	/* Read the XOR defaults for the JTAG chain */
	for (qlm = 0; qlm < cvmx_qlm_get_num(); qlm++) {
		int i;
		int num_lanes = cvmx_qlm_get_lanes(qlm);
		/* Shift all zeros in the chain to make sure all fields are at
		   reset defaults */
		cvmx_helper_qlm_jtag_shift_zeros(qlm,
						 qlm_jtag_length * num_lanes);
		cvmx_helper_qlm_jtag_update(qlm);

		/* Capture the reset defaults */
		cvmx_helper_qlm_jtag_capture(qlm);
		/* Save the reset defaults. This will shift out too much data, but
		   the extra zeros don't hurt anything */
		for (i = 0; i < CVMX_QLM_JTAG_UINT32; i++)
			__cvmx_qlm_jtag_xor_ref[qlm][i] =
			    cvmx_helper_qlm_jtag_shift(qlm, 32, 0);
	}

	/* Apply all QLM errata workarounds. */
	__cvmx_qlm_speed_tweak();
	__cvmx_qlm_pcie_idle_dac_tweak();
}

/**
 * Lookup the bit information for a JTAG field name
 *
 * @name:   Name to lookup
 *
 * Returns Field info, or NULL on failure
 */
static const __cvmx_qlm_jtag_field_t *__cvmx_qlm_lookup_field(const char *name)
{
	const __cvmx_qlm_jtag_field_t *ptr = cvmx_qlm_jtag_get_field();
	while (ptr->name) {
		if (strcmp(name, ptr->name) == 0)
			return ptr;
		ptr++;
	}
	cvmx_dprintf("__cvmx_qlm_lookup_field: Illegal field name %s\n", name);
	return NULL;
}

/**
 * Get a field in a QLM JTAG chain
 *
 * @qlm:    QLM to get
 * @lane:   Lane in QLM to get
 * @name:   String name of field
 *
 * Returns JTAG field value
 */
uint64_t cvmx_qlm_jtag_get(int qlm, int lane, const char *name)
{
	const __cvmx_qlm_jtag_field_t *field = __cvmx_qlm_lookup_field(name);
	int qlm_jtag_length = cvmx_qlm_jtag_get_length();
	int num_lanes = cvmx_qlm_get_lanes(qlm);

	if (!field)
		return 0;

	/* Capture the current settings */
	cvmx_helper_qlm_jtag_capture(qlm);
	/* Shift past lanes we don't care about. CN6XXX/7XXX shifts lane 0 first, CN3XXX/5XXX shifts lane 3 first */
	if (OCTEON_IS_MODEL(OCTEON_CN5XXX))
		cvmx_helper_qlm_jtag_shift_zeros(qlm, qlm_jtag_length * (lane));	/* Shift to the start of the field */
	else
		cvmx_helper_qlm_jtag_shift_zeros(qlm, qlm_jtag_length * (num_lanes - 1 - lane));	/* Shift to the start of the field */
	cvmx_helper_qlm_jtag_shift_zeros(qlm, field->start_bit);
	/* Shift out the value and return it */
	return cvmx_helper_qlm_jtag_shift(qlm,
					  field->stop_bit - field->start_bit +
					  1, 0);
}

/**
 * Set a field in a QLM JTAG chain
 *
 * @qlm:    QLM to set
 * @lane:   Lane in QLM to set, or -1 for all lanes
 * @name:   String name of field
 * @value:  Value of the field
 */
void cvmx_qlm_jtag_set(int qlm, int lane, const char *name, uint64_t value)
{
	int i, l;
	uint32_t shift_values[CVMX_QLM_JTAG_UINT32];
	int num_lanes = cvmx_qlm_get_lanes(qlm);
	const __cvmx_qlm_jtag_field_t *field = __cvmx_qlm_lookup_field(name);
	int qlm_jtag_length = cvmx_qlm_jtag_get_length();
	int total_length = qlm_jtag_length * num_lanes;
	int bits = 0;

	if (!field)
		return;

	/* Get the current state */
	cvmx_helper_qlm_jtag_capture(qlm);
	for (i = 0; i < CVMX_QLM_JTAG_UINT32; i++)
		shift_values[i] = cvmx_helper_qlm_jtag_shift(qlm, 32, 0);

	/* Put new data in our local array */
	for (l = 0; l < num_lanes; l++) {
		uint64_t new_value = value;
		int bits;
		int adj_lanes;

		if ((l != lane) && (lane != -1))
			continue;

		if (OCTEON_IS_MODEL(OCTEON_CN5XXX))
			adj_lanes = l * qlm_jtag_length;
		else
			adj_lanes = (num_lanes - 1 - l) * qlm_jtag_length;

		for (bits = field->start_bit + adj_lanes;
		     bits <= field->stop_bit + adj_lanes; bits++) {
			if (new_value & 1)
				shift_values[bits / 32] |= 1 << (bits & 31);
			else
				shift_values[bits / 32] &= ~(1 << (bits & 31));
			new_value >>= 1;
		}
	}

	/* Shift out data and xor with reference */
	while (bits < total_length) {
		uint32_t shift =
		    shift_values[bits /
				 32] ^ __cvmx_qlm_jtag_xor_ref[qlm][bits / 32];
		int width = total_length - bits;
		if (width > 32)
			width = 32;
		cvmx_helper_qlm_jtag_shift(qlm, width, shift);
		bits += 32;
	}

	/* Update the new data */
	cvmx_helper_qlm_jtag_update(qlm);
	/* Always give the QLM 1ms to settle after every update. This may not
	   always be needed, but some of the options make significant
	   electrical changes */
	cvmx_wait_usec(1000);
}

/**
 * Errata G-16094: QLM Gen2 Equalizer Default Setting Change.
 * CN68XX pass 1.x and CN66XX pass 1.x QLM tweak. This function tweaks the
 * JTAG setting for a QLMs to run better at 5 and 6.25Ghz.
 */
void __cvmx_qlm_speed_tweak(void)
{
	cvmx_mio_qlmx_cfg_t qlm_cfg;
	int num_qlms = cvmx_qlm_get_num();
	int qlm;

	/* Workaround for Errata (G-16467) */
	if (OCTEON_IS_MODEL(OCTEON_CN68XX_PASS2_X)) {
		for (qlm = 0; qlm < num_qlms; qlm++) {
			int ir50dac;
			/* This workaround only applies to QLMs running at 6.25Ghz */
			if (cvmx_qlm_get_gbaud_mhz(qlm) == 6250) {
#ifdef CVMX_QLM_DUMP_STATE
				cvmx_dprintf
				    ("%s:%d: QLM%d: Applying workaround for Errata G-16467\n",
				     __func__, __LINE__, qlm);
				cvmx_qlm_display_registers(qlm);
				cvmx_dprintf("\n");
#endif
				cvmx_qlm_jtag_set(qlm, -1, "cfg_cdr_trunc", 0);
				/* Hold the QLM in reset */
				cvmx_qlm_jtag_set(qlm, -1, "cfg_rst_n_set", 0);
				cvmx_qlm_jtag_set(qlm, -1, "cfg_rst_n_clr", 1);
				/* Forcfe TX to be idle */
				cvmx_qlm_jtag_set(qlm, -1, "cfg_tx_idle_clr",
						  0);
				cvmx_qlm_jtag_set(qlm, -1, "cfg_tx_idle_set",
						  1);
				if (OCTEON_IS_MODEL(OCTEON_CN68XX_PASS2_0)) {
					ir50dac =
					    cvmx_qlm_jtag_get(qlm, 0,
							      "ir50dac");
					while (++ir50dac <= 31)
						cvmx_qlm_jtag_set(qlm, -1,
								  "ir50dac",
								  ir50dac);
				}
				cvmx_qlm_jtag_set(qlm, -1, "div4_byp", 0);
				cvmx_qlm_jtag_set(qlm, -1, "clkf_byp", 16);
				cvmx_qlm_jtag_set(qlm, -1, "serdes_pll_byp", 1);
				cvmx_qlm_jtag_set(qlm, -1, "spdsel_byp", 1);
#ifdef CVMX_QLM_DUMP_STATE
				cvmx_dprintf
				    ("%s:%d: QLM%d: Done applying workaround for Errata G-16467\n",
				     __func__, __LINE__, qlm);
				cvmx_qlm_display_registers(qlm);
				cvmx_dprintf("\n\n");
#endif
				/* The QLM will be taken out of reset later when ILK/XAUI are initialized. */
			}
		}

		/* These QLM tuning parameters are specific to EBB6800
		   eval boards using Cavium QLM cables. These should be
		   removed or tunned based on customer boards. */
		if (cvmx_sysinfo_get()->board_type == CVMX_BOARD_TYPE_EBB6800) {
			for (qlm = 0; qlm < num_qlms; qlm++) {
#ifdef CVMX_QLM_DUMP_STATE
				cvmx_dprintf
				    ("Setting tunning parameters for QLM%d\n",
				     qlm);
#endif
				cvmx_qlm_jtag_set(qlm, -1, "biasdrv_hs_ls_byp",
						  12);
				cvmx_qlm_jtag_set(qlm, -1, "biasdrv_hf_byp",
						  12);
				cvmx_qlm_jtag_set(qlm, -1, "biasdrv_lf_ls_byp",
						  12);
				cvmx_qlm_jtag_set(qlm, -1, "biasdrv_lf_byp",
						  12);
				cvmx_qlm_jtag_set(qlm, -1, "tcoeff_hf_byp", 15);
				cvmx_qlm_jtag_set(qlm, -1, "tcoeff_hf_ls_byp",
						  15);
				cvmx_qlm_jtag_set(qlm, -1, "tcoeff_lf_ls_byp",
						  15);
				cvmx_qlm_jtag_set(qlm, -1, "tcoeff_lf_byp", 15);
				cvmx_qlm_jtag_set(qlm, -1, "rx_cap_gen2", 0);
				cvmx_qlm_jtag_set(qlm, -1, "rx_eq_gen2", 11);
				cvmx_qlm_jtag_set(qlm, -1, "serdes_tx_byp", 1);
			}
		} else if (cvmx_sysinfo_get()->board_type ==
			   CVMX_BOARD_TYPE_NIC68_4) {
			for (qlm = 0; qlm < num_qlms; qlm++) {
#ifdef CVMX_QLM_DUMP_STATE
				cvmx_dprintf
				    ("Setting tunning parameters for QLM%d\n",
				     qlm);
#endif
				cvmx_qlm_jtag_set(qlm, -1, "biasdrv_hs_ls_byp",
						  30);
				cvmx_qlm_jtag_set(qlm, -1, "biasdrv_hf_byp",
						  30);
				cvmx_qlm_jtag_set(qlm, -1, "biasdrv_lf_ls_byp",
						  30);
				cvmx_qlm_jtag_set(qlm, -1, "biasdrv_lf_byp",
						  30);
				cvmx_qlm_jtag_set(qlm, -1, "tcoeff_hf_byp", 0);
				cvmx_qlm_jtag_set(qlm, -1, "tcoeff_hf_ls_byp",
						  0);
				cvmx_qlm_jtag_set(qlm, -1, "tcoeff_lf_ls_byp",
						  0);
				cvmx_qlm_jtag_set(qlm, -1, "tcoeff_lf_byp", 0);
				cvmx_qlm_jtag_set(qlm, -1, "rx_cap_gen2", 1);
				cvmx_qlm_jtag_set(qlm, -1, "rx_eq_gen2", 8);
				cvmx_qlm_jtag_set(qlm, -1, "serdes_tx_byp", 1);
			}
		}
	}

	/* G-16094 QLM Gen2 Equalizer Default Setting Change */
	else if (OCTEON_IS_MODEL(OCTEON_CN68XX_PASS1_X)
		 || OCTEON_IS_MODEL(OCTEON_CN66XX_PASS1_X)) {
		/* Loop through the QLMs */
		for (qlm = 0; qlm < num_qlms; qlm++) {
			/* Read the QLM speed */
			qlm_cfg.u64 = cvmx_read_csr(CVMX_MIO_QLMX_CFG(qlm));

			/* If the QLM is at 6.25Ghz or 5Ghz then program JTAG */
			if ((qlm_cfg.s.qlm_spd == 5)
			    || (qlm_cfg.s.qlm_spd == 12)
			    || (qlm_cfg.s.qlm_spd == 0)
			    || (qlm_cfg.s.qlm_spd == 6)
			    || (qlm_cfg.s.qlm_spd == 11)) {
				cvmx_qlm_jtag_set(qlm, -1, "rx_cap_gen2", 0x1);
				cvmx_qlm_jtag_set(qlm, -1, "rx_eq_gen2", 0x8);
			}
		}
	}
}

/**
 * Errata G-16174: QLM Gen2 PCIe IDLE DAC change.
 * CN68XX pass 1.x, CN66XX pass 1.x and CN63XX pass 1.0-2.2 QLM tweak.
 * This function tweaks the JTAG setting for a QLMs for PCIe to run better.
 */
void __cvmx_qlm_pcie_idle_dac_tweak(void)
{
	int num_qlms = 0;
	int qlm;

	if (OCTEON_IS_MODEL(OCTEON_CN68XX_PASS1_X))
		num_qlms = 5;
	else if (OCTEON_IS_MODEL(OCTEON_CN66XX_PASS1_X))
		num_qlms = 3;
	else if (OCTEON_IS_MODEL(OCTEON_CN63XX))
		num_qlms = 3;
	else
		return;

	/* Loop through the QLMs */
	for (qlm = 0; qlm < num_qlms; qlm++)
		cvmx_qlm_jtag_set(qlm, -1, "idle_dac", 0x2);
}

void __cvmx_qlm_pcie_cfg_rxd_set_tweak(int qlm, int lane)
{
	if (OCTEON_IS_MODEL(OCTEON_CN6XXX) || OCTEON_IS_MODEL(OCTEON_CNF71XX)) {
		cvmx_qlm_jtag_set(qlm, lane, "cfg_rxd_set", 0x1);
	}
}

/**
 * Get the speed (Gbaud) of the QLM in Mhz for a given node.
 *
 * @node:   node of the QLM
 * @qlm:    QLM to examine
 *
 * Returns Speed in Mhz
 */
int cvmx_qlm_get_gbaud_mhz_node(int node, int qlm)
{
	cvmx_gserx_lane_mode_t lane_mode;
	cvmx_gserx_cfg_t cfg;

	if (!octeon_has_feature(OCTEON_FEATURE_MULTINODE))
		return 0;

	if (qlm >= 8)
		return -1;	/* FIXME for OCI */
	/* Check if QLM is configured */
	cfg.u64 = cvmx_read_csr_node(node, CVMX_GSERX_CFG(qlm));
	if (cfg.u64 == 0)
		return -1;
	if (cfg.s.pcie) {
		int pem = 0;
		cvmx_pemx_cfg_t pemx_cfg;
		switch (qlm) {
		case 0:	/* Either PEM0 x4 of PEM0 x8 */
			pem = 0;
			break;
		case 1:	/* Either PEM0 x4 of PEM1 x4 */
			pemx_cfg.u64 =
			    cvmx_read_csr_node(node, CVMX_PEMX_CFG(0));
			if (pemx_cfg.cn78xx.lanes8)
				pem = 0;
			else
				pem = 1;
			break;
		case 2:	/* Either PEM2 x4 of PEM2 x8 */
			pem = 2;
			break;
		case 3:	/* Either PEM2 x8 of PEM3 x4 or x8 */
			/* Can be last 4 lanes of PEM2 */
			pemx_cfg.u64 =
			    cvmx_read_csr_node(node, CVMX_PEMX_CFG(2));
			if (pemx_cfg.cn78xx.lanes8)
				pem = 2;
			else {
				pemx_cfg.u64 =
				    cvmx_read_csr_node(node, CVMX_PEMX_CFG(3));
				if (pemx_cfg.cn78xx.lanes8)
					pem = 3;
				else
					pem = 2;
			}
			break;
		case 4:	/* Either PEM3 x8 of PEM3 x4 */
			pem = 3;
			break;
		default:
			cvmx_dprintf("QLM%d: Should be in PCIe mode\n", qlm);
			break;
		}
		pemx_cfg.u64 = cvmx_read_csr_node(node, CVMX_PEMX_CFG(pem));
		switch (pemx_cfg.s.md) {
		case 0:	/* Gen1 */
			return 2500;
		case 1:	/* Gen2 */
			return 5000;
		case 2:	/* Gen3 */
			return 8000;
		default:
			return 0;
		}
	} else {
		lane_mode.u64 =
		    cvmx_read_csr_node(node, CVMX_GSERX_LANE_MODE(qlm));
		switch (lane_mode.s.lmode) {
		case R_25G_REFCLK100:
			return 2500;
		case R_5G_REFCLK100:
			return 5000;
		case R_8G_REFCLK100:
			return 8000;
		case R_125G_REFCLK15625_KX:
			return 1250;
		case R_3125G_REFCLK15625_XAUI:
			return 3125;
		case R_103125G_REFCLK15625_KR:
			return 10312;
		case R_125G_REFCLK15625_SGMII:
			return 1250;
		case R_5G_REFCLK15625_QSGMII:
			return 5000;
		case R_625G_REFCLK15625_RXAUI:
			return 6250;
		case R_25G_REFCLK125:
			return 2500;
		case R_5G_REFCLK125:
			return 5000;
		case R_8G_REFCLK125:
			return 8000;
		default:
			return 0;
		}
	}
}
#endif


/**
 * Get the speed (Gbaud) of the QLM in Mhz.
 *
 * @qlm:    QLM to examine
 *
 * Returns Speed in Mhz
 */
int cvmx_qlm_get_gbaud_mhz(int qlm)
{
	if (OCTEON_IS_MODEL(OCTEON_CN63XX)) {
		if (qlm == 2) {
			cvmx_gmxx_inf_mode_t inf_mode;
			inf_mode.u64 = cvmx_read_csr(CVMX_GMXX_INF_MODE(0));
			switch (inf_mode.s.speed) {
			case 0:
				return 5000;	/* 5     Gbaud */
			case 1:
				return 2500;	/* 2.5   Gbaud */
			case 2:
				return 2500;	/* 2.5   Gbaud */
			case 3:
				return 1250;	/* 1.25  Gbaud */
			case 4:
				return 1250;	/* 1.25  Gbaud */
			case 5:
				return 6250;	/* 6.25  Gbaud */
			case 6:
				return 5000;	/* 5     Gbaud */
			case 7:
				return 2500;	/* 2.5   Gbaud */
			case 8:
				return 3125;	/* 3.125 Gbaud */
			case 9:
				return 2500;	/* 2.5   Gbaud */
			case 10:
				return 1250;	/* 1.25  Gbaud */
			case 11:
				return 5000;	/* 5     Gbaud */
			case 12:
				return 6250;	/* 6.25  Gbaud */
			case 13:
				return 3750;	/* 3.75  Gbaud */
			case 14:
				return 3125;	/* 3.125 Gbaud */
			default:
				return 0;	/* Disabled */
			}
		} else {
			return 0;
#if 0
			union cvmx_sriox_status_reg status_reg;
			status_reg.u64 =
			    cvmx_read_csr(CVMX_SRIOX_STATUS_REG(qlm));
			if (status_reg.s.srio) {
				cvmx_sriomaintx_port_0_ctl2_t
				    sriomaintx_port_0_ctl2;
				sriomaintx_port_0_ctl2.u32 =
				    cvmx_read_csr(CVMX_SRIOMAINTX_PORT_0_CTL2
						  (qlm));
				switch (sriomaintx_port_0_ctl2.s.sel_baud) {
				case 1:
					return 1250;	/* 1.25  Gbaud */
				case 2:
					return 2500;	/* 2.5   Gbaud */
				case 3:
					return 3125;	/* 3.125 Gbaud */
				case 4:
					return 5000;	/* 5     Gbaud */
				case 5:
					return 6250;	/* 6.250 Gbaud */
				default:
					return 0;	/* Disabled */
				}
			} else {
				cvmx_pciercx_cfg032_t pciercx_cfg032;
				pciercx_cfg032.u32 =
				    cvmx_read_csr(CVMX_PCIERCX_CFG032(qlm));
				switch (pciercx_cfg032.s.ls) {
				case 1:
					return 2500;
				case 2:
					return 5000;
				case 4:
					return 8000;
				default:
					{
						cvmx_mio_rst_boot_t
						    mio_rst_boot;
						mio_rst_boot.u64 =
						    cvmx_read_csr
						    (CVMX_MIO_RST_BOOT);
						if ((qlm == 0)
						    && mio_rst_boot.s.
						    qlm0_spd == 0xf)
							return 0;
						if ((qlm == 1)
						    && mio_rst_boot.s.
						    qlm1_spd == 0xf)
							return 0;
						return 5000;	/* Best guess I can make */
					}
				}
			}
#endif
		}
	} else if (OCTEON_IS_OCTEON2()) {
		union cvmx_mio_qlmx_cfg qlm_cfg;

		qlm_cfg.u64 = cvmx_read_csr(CVMX_MIO_QLMX_CFG(qlm));
		switch (qlm_cfg.s.qlm_spd) {
		case 0:
			return 5000;	/* 5     Gbaud */
		case 1:
			return 2500;	/* 2.5   Gbaud */
		case 2:
			return 2500;	/* 2.5   Gbaud */
		case 3:
			return 1250;	/* 1.25  Gbaud */
		case 4:
			return 1250;	/* 1.25  Gbaud */
		case 5:
			return 6250;	/* 6.25  Gbaud */
		case 6:
			return 5000;	/* 5     Gbaud */
		case 7:
			return 2500;	/* 2.5   Gbaud */
		case 8:
			return 3125;	/* 3.125 Gbaud */
		case 9:
			return 2500;	/* 2.5   Gbaud */
		case 10:
			return 1250;	/* 1.25  Gbaud */
		case 11:
			return 5000;	/* 5     Gbaud */
		case 12:
			return 6250;	/* 6.25  Gbaud */
		case 13:
			return 3750;	/* 3.75  Gbaud */
		case 14:
			return 3125;	/* 3.125 Gbaud */
		default:
			return 0;	/* Disabled */
		}
	} else if (OCTEON_IS_MODEL(OCTEON_CN70XX)) {
		cvmx_gserx_dlmx_mpll_multiplier_t mpll_multiplier;
		uint64_t meas_refclock;
		uint64_t freq;

		/* Measure the reference clock */
		meas_refclock = cvmx_qlm_measure_clock(qlm);
		/* Multiply to get the final frequency */
		mpll_multiplier.u64 =
		    cvmx_read_csr(CVMX_GSERX_DLMX_MPLL_MULTIPLIER(qlm, 0));
		freq = meas_refclock * mpll_multiplier.s.mpll_multiplier;
		freq = (freq + 500000) / 1000000;

		return freq;
#if 0
	} else if (OCTEON_IS_MODEL(OCTEON_CN78XX)) {
		return cvmx_qlm_get_gbaud_mhz_node(cvmx_get_node_num(), qlm);
	} else if (OCTEON_IS_MODEL(OCTEON_CN73XX)) {
		cvmx_gserx_lane_mode_t lane_mode;
		lane_mode.u64 = cvmx_read_csr(CVMX_GSERX_LANE_MODE(qlm));
		switch (lane_mode.s.lmode) {
		case R_25G_REFCLK100:
			return 2500;
		case R_5G_REFCLK100:
			return 5000;
		case R_8G_REFCLK100:
			return 8000;
		case R_125G_REFCLK15625_KX:
			return 1250;
		case R_3125G_REFCLK15625_XAUI:
			return 3125;
		case R_103125G_REFCLK15625_KR:
			return 10312;
		case R_125G_REFCLK15625_SGMII:
			return 1250;
		case R_5G_REFCLK15625_QSGMII:
			return 5000;
		case R_625G_REFCLK15625_RXAUI:
			return 6250;
		case R_25G_REFCLK125:
			return 2500;
		case R_5G_REFCLK125:
			return 5000;
		case R_8G_REFCLK125:
			return 8000;
		default:
			return 0;
		}
#endif
	}
	return 0;
}

static enum cvmx_qlm_mode __cvmx_qlm_get_mode_cn70xx(int qlm)
{
	if (cvmx_sysinfo_get()->board_type != CVMX_BOARD_TYPE_SIM) {
		union cvmx_gserx_dlmx_phy_reset phy_reset;

		phy_reset.u64 =
		    cvmx_read_csr(CVMX_GSERX_DLMX_PHY_RESET(qlm, 0));
		if (phy_reset.s.phy_reset)
			return CVMX_QLM_MODE_DISABLED;

	}

	switch (qlm) {
	case 0:		/* DLM0/DLM1 - SGMII/QSGMII/RXAUI */
		{
			union cvmx_gmxx_inf_mode inf_mode0, inf_mode1;

			inf_mode0.u64 = cvmx_read_csr(CVMX_GMXX_INF_MODE(0));
			inf_mode1.u64 = cvmx_read_csr(CVMX_GMXX_INF_MODE(1));

			/* SGMII0 SGMII1 */
			switch (inf_mode0.s.mode) {
			case CVMX_GMX_INF_MODE_SGMII:
				switch (inf_mode1.s.mode) {
				case CVMX_GMX_INF_MODE_SGMII:
					return CVMX_QLM_MODE_SGMII_SGMII;
				case CVMX_GMX_INF_MODE_QSGMII:
					return CVMX_QLM_MODE_SGMII_QSGMII;
				default:
					return CVMX_QLM_MODE_SGMII_DISABLED;
				}
			case CVMX_GMX_INF_MODE_QSGMII:
				switch (inf_mode1.s.mode) {
				case CVMX_GMX_INF_MODE_SGMII:
					return CVMX_QLM_MODE_QSGMII_SGMII;
				case CVMX_GMX_INF_MODE_QSGMII:
					return CVMX_QLM_MODE_QSGMII_QSGMII;
				default:
					return CVMX_QLM_MODE_QSGMII_DISABLED;
				}
			case CVMX_GMX_INF_MODE_RXAUI:
				return CVMX_QLM_MODE_RXAUI_1X2;
			default:
				switch (inf_mode1.s.mode) {
				case CVMX_GMX_INF_MODE_SGMII:
					return CVMX_QLM_MODE_DISABLED_SGMII;
				case CVMX_GMX_INF_MODE_QSGMII:
					return CVMX_QLM_MODE_DISABLED_QSGMII;
				default:
					return CVMX_QLM_MODE_DISABLED;
				}
			}
		}
	case 1:		/* Sata / pem0 */
		{
			union cvmx_gserx_sata_cfg sata_cfg;
			union cvmx_pemx_cfg pem0_cfg;

			sata_cfg.u64 = cvmx_read_csr(CVMX_GSERX_SATA_CFG(0));
			pem0_cfg.u64 = cvmx_read_csr(CVMX_PEMX_CFG(0));

			switch (pem0_cfg.cn70xx.md) {
			case CVMX_PEM_MD_GEN2_2LANE:
			case CVMX_PEM_MD_GEN1_2LANE:
				return CVMX_QLM_MODE_PCIE_1X2;
			case CVMX_PEM_MD_GEN2_1LANE:
			case CVMX_PEM_MD_GEN1_1LANE:
				if (sata_cfg.s.sata_en)
					/* Both PEM0 and PEM1 */
					return CVMX_QLM_MODE_PCIE_2X1;
				else
					/* Only PEM0 */
					return CVMX_QLM_MODE_PCIE_1X1;
			case CVMX_PEM_MD_GEN2_4LANE:
			case CVMX_PEM_MD_GEN1_4LANE:
				return CVMX_QLM_MODE_PCIE;
			default:
				return CVMX_QLM_MODE_DISABLED;
			}
		}
	case 2:
		{
			union cvmx_gserx_sata_cfg sata_cfg;
			union cvmx_pemx_cfg pem0_cfg, pem1_cfg, pem2_cfg;

			sata_cfg.u64 = cvmx_read_csr(CVMX_GSERX_SATA_CFG(0));
			pem0_cfg.u64 = cvmx_read_csr(CVMX_PEMX_CFG(0));
			pem1_cfg.u64 = cvmx_read_csr(CVMX_PEMX_CFG(1));
			pem2_cfg.u64 = cvmx_read_csr(CVMX_PEMX_CFG(2));

			if (sata_cfg.s.sata_en)
				return CVMX_QLM_MODE_SATA_2X1;
			if (pem0_cfg.cn70xx.md == CVMX_PEM_MD_GEN2_4LANE
			    || pem0_cfg.cn70xx.md == CVMX_PEM_MD_GEN1_4LANE)
				return CVMX_QLM_MODE_PCIE;
			if (pem1_cfg.cn70xx.md == CVMX_PEM_MD_GEN2_2LANE
			    || pem1_cfg.cn70xx.md == CVMX_PEM_MD_GEN1_2LANE) {
				return CVMX_QLM_MODE_PCIE_1X2;
			}
			if (pem1_cfg.cn70xx.md == CVMX_PEM_MD_GEN2_1LANE
			    || pem1_cfg.cn70xx.md == CVMX_PEM_MD_GEN1_1LANE) {
				if (pem2_cfg.cn70xx.md == CVMX_PEM_MD_GEN2_1LANE
				    || pem2_cfg.cn70xx.md ==
				    CVMX_PEM_MD_GEN1_1LANE) {
					return CVMX_QLM_MODE_PCIE_2X1;
				} else
					return CVMX_QLM_MODE_PCIE_1X1;
			}
			if (pem2_cfg.cn70xx.md == CVMX_PEM_MD_GEN2_1LANE
			    || pem2_cfg.cn70xx.md == CVMX_PEM_MD_GEN1_1LANE)
				return CVMX_QLM_MODE_PCIE_2X1;
			return CVMX_QLM_MODE_DISABLED;
		}
	default:
		return CVMX_QLM_MODE_DISABLED;
	}

	return CVMX_QLM_MODE_DISABLED;
}

/*
 * Get the DLM mode for the interface based on the interface type.
 *
 * @interface_type:   0 - SGMII/QSGMII/RXAUI interface
 *                         1 - PCIe
 *                         2 - SATA
 * @interface:        interface to use
 * Returns  the qlm mode the interface is
 */
enum cvmx_qlm_mode cvmx_qlm_get_dlm_mode(int interface_type, int interface)
{
	switch (interface_type) {
	case 0:		/* SGMII/QSGMII/RXAUI */
		{
			enum cvmx_qlm_mode qlm_mode =
			    __cvmx_qlm_get_mode_cn70xx(0);
			switch (interface) {
			case 0:
				switch (qlm_mode) {
				case CVMX_QLM_MODE_SGMII_SGMII:
				case CVMX_QLM_MODE_SGMII_DISABLED:
				case CVMX_QLM_MODE_SGMII_QSGMII:
					return CVMX_QLM_MODE_SGMII;
				case CVMX_QLM_MODE_QSGMII_QSGMII:
				case CVMX_QLM_MODE_QSGMII_DISABLED:
				case CVMX_QLM_MODE_QSGMII_SGMII:
					return CVMX_QLM_MODE_QSGMII;
				case CVMX_QLM_MODE_RXAUI_1X2:
					return CVMX_QLM_MODE_RXAUI;
				default:
					return CVMX_QLM_MODE_DISABLED;
				}
			case 1:
				switch (qlm_mode) {
				case CVMX_QLM_MODE_SGMII_SGMII:
				case CVMX_QLM_MODE_DISABLED_SGMII:
				case CVMX_QLM_MODE_QSGMII_SGMII:
					return CVMX_QLM_MODE_SGMII;
				case CVMX_QLM_MODE_QSGMII_QSGMII:
				case CVMX_QLM_MODE_DISABLED_QSGMII:
				case CVMX_QLM_MODE_SGMII_QSGMII:
					return CVMX_QLM_MODE_QSGMII;
				default:
					return CVMX_QLM_MODE_DISABLED;
				}
			default:
				return qlm_mode;
			}
		}
	case 1:		/* PCIe */
		{
			enum cvmx_qlm_mode qlm_mode1 =
			    __cvmx_qlm_get_mode_cn70xx(1);
			enum cvmx_qlm_mode qlm_mode2 =
			    __cvmx_qlm_get_mode_cn70xx(2);

			switch (interface) {
			case 0:	/* PCIe0 can be DLM1 with 1, 2 or 4 lanes */
				return qlm_mode1;
			case 1:	/* PCIe1 can be in DLM1 1 lane(1), DLM2 1 lane(0) or 2 lanes(0-1) */
				if (qlm_mode1 == CVMX_QLM_MODE_PCIE_2X1)
					return CVMX_QLM_MODE_PCIE_2X1;
				else if (qlm_mode2 == CVMX_QLM_MODE_PCIE_1X2 ||
					 qlm_mode2 == CVMX_QLM_MODE_PCIE_2X1)
					return qlm_mode2;
				else
					return CVMX_QLM_MODE_DISABLED;
			case 2:	/* PCIe2 can be DLM2 1 lanes(1) */
				if (qlm_mode2 == CVMX_QLM_MODE_PCIE_2X1)
					return qlm_mode2;
				else
					return CVMX_QLM_MODE_DISABLED;
			default:
				return CVMX_QLM_MODE_DISABLED;
			}
		}
	case 2:		/* SATA */
		{
			enum cvmx_qlm_mode qlm_mode =
			    __cvmx_qlm_get_mode_cn70xx(2);

			if (qlm_mode == CVMX_QLM_MODE_SATA_2X1)
				return CVMX_QLM_MODE_SATA_2X1;
			else
				return CVMX_QLM_MODE_DISABLED;
		}
	default:
		return CVMX_QLM_MODE_DISABLED;
	}
}

static enum cvmx_qlm_mode __cvmx_qlm_get_mode_cn6xxx(int qlm)
{
	union cvmx_mio_qlmx_cfg qlmx_cfg;

	if (OCTEON_IS_MODEL(OCTEON_CN68XX)) {
		qlmx_cfg.u64 = cvmx_read_csr(CVMX_MIO_QLMX_CFG(qlm));
		/* QLM is disabled when QLM SPD is 15. */
		if (qlmx_cfg.s.qlm_spd == 15)
			return CVMX_QLM_MODE_DISABLED;

		switch (qlmx_cfg.s.qlm_cfg) {
		case 0:	/* PCIE */
			return CVMX_QLM_MODE_PCIE;
		case 1:	/* ILK */
			return CVMX_QLM_MODE_ILK;
		case 2:	/* SGMII */
			return CVMX_QLM_MODE_SGMII;
		case 3:	/* XAUI */
			return CVMX_QLM_MODE_XAUI;
		case 7:	/* RXAUI */
			return CVMX_QLM_MODE_RXAUI;
		default:
			return CVMX_QLM_MODE_DISABLED;
		}
	} else if (OCTEON_IS_MODEL(OCTEON_CN66XX)) {
		qlmx_cfg.u64 = cvmx_read_csr(CVMX_MIO_QLMX_CFG(qlm));
		/* QLM is disabled when QLM SPD is 15. */
		if (qlmx_cfg.s.qlm_spd == 15)
			return CVMX_QLM_MODE_DISABLED;

		switch (qlmx_cfg.s.qlm_cfg) {
		case 0x9:	/* SGMII */
			return CVMX_QLM_MODE_SGMII;
		case 0xb:	/* XAUI */
			return CVMX_QLM_MODE_XAUI;
		case 0x0:	/* PCIE gen2 */
		case 0x8:	/* PCIE gen2 (alias) */
		case 0x2:	/* PCIE gen1 */
		case 0xa:	/* PCIE gen1 (alias) */
			return CVMX_QLM_MODE_PCIE;
		case 0x1:	/* SRIO 1x4 short */
		case 0x3:	/* SRIO 1x4 long */
			return CVMX_QLM_MODE_SRIO_1X4;
		case 0x4:	/* SRIO 2x2 short */
		case 0x6:	/* SRIO 2x2 long */
			return CVMX_QLM_MODE_SRIO_2X2;
		case 0x5:	/* SRIO 4x1 short */
		case 0x7:	/* SRIO 4x1 long */
			if (!OCTEON_IS_MODEL(OCTEON_CN66XX_PASS1_0))
				return CVMX_QLM_MODE_SRIO_4X1;
			/* fallthrough */
		default:
			return CVMX_QLM_MODE_DISABLED;
		}
	} else if (OCTEON_IS_MODEL(OCTEON_CN63XX)) {
		union cvmx_sriox_status_reg status_reg;
		/* For now skip qlm2 */
		if (qlm == 2) {
			cvmx_gmxx_inf_mode_t inf_mode;
			inf_mode.u64 = cvmx_read_csr(CVMX_GMXX_INF_MODE(0));
			if (inf_mode.s.speed == 15)
				return CVMX_QLM_MODE_DISABLED;
			else if (inf_mode.s.mode == 0)
				return CVMX_QLM_MODE_SGMII;
			else
				return CVMX_QLM_MODE_XAUI;
		}
		status_reg.u64 = cvmx_read_csr(CVMX_SRIOX_STATUS_REG(qlm));
		if (status_reg.s.srio)
			return CVMX_QLM_MODE_SRIO_1X4;
		else
			return CVMX_QLM_MODE_PCIE;
	} else if (OCTEON_IS_MODEL(OCTEON_CN61XX)) {
		qlmx_cfg.u64 = cvmx_read_csr(CVMX_MIO_QLMX_CFG(qlm));
		/* QLM is disabled when QLM SPD is 15. */
		if (qlmx_cfg.s.qlm_spd == 15)
			return CVMX_QLM_MODE_DISABLED;

		switch (qlm) {
		case 0:
			switch (qlmx_cfg.s.qlm_cfg) {
			case 0:	/* PCIe 1x4 gen2 / gen1 */
				return CVMX_QLM_MODE_PCIE;
			case 2:	/* SGMII */
				return CVMX_QLM_MODE_SGMII;
			case 3:	/* XAUI */
				return CVMX_QLM_MODE_XAUI;
			default:
				return CVMX_QLM_MODE_DISABLED;
			}
			break;
		case 1:
			switch (qlmx_cfg.s.qlm_cfg) {
			case 0:	/* PCIe 1x2 gen2 / gen1 */
				return CVMX_QLM_MODE_PCIE_1X2;
			case 1:	/* PCIe 2x1 gen2 / gen1 */
				return CVMX_QLM_MODE_PCIE_2X1;
			default:
				return CVMX_QLM_MODE_DISABLED;
			}
			break;
		case 2:
			switch (qlmx_cfg.s.qlm_cfg) {
			case 2:	/* SGMII */
				return CVMX_QLM_MODE_SGMII;
			case 3:	/* XAUI */
				return CVMX_QLM_MODE_XAUI;
			default:
				return CVMX_QLM_MODE_DISABLED;
			}
			break;
		}
	} else if (OCTEON_IS_MODEL(OCTEON_CNF71XX)) {
		qlmx_cfg.u64 = cvmx_read_csr(CVMX_MIO_QLMX_CFG(qlm));
		/* QLM is disabled when QLM SPD is 15. */
		if (qlmx_cfg.s.qlm_spd == 15)
			return CVMX_QLM_MODE_DISABLED;

		switch (qlm) {
		case 0:
			if (qlmx_cfg.s.qlm_cfg == 2)	/* SGMII */
				return CVMX_QLM_MODE_SGMII;
			break;
		case 1:
			switch (qlmx_cfg.s.qlm_cfg) {
			case 0:	/* PCIe 1x2 gen2 / gen1 */
				return CVMX_QLM_MODE_PCIE_1X2;
			case 1:	/* PCIe 2x1 gen2 / gen1 */
				return CVMX_QLM_MODE_PCIE_2X1;
			default:
				return CVMX_QLM_MODE_DISABLED;
			}
			break;
		}
	}
	return CVMX_QLM_MODE_DISABLED;
}
#if 0

/**
 * @INTERNAL
 * Decrement the MPLL Multiplier for the DLM as per Errata G-20669
 *
 * @qlm:            DLM to configure
 * @baud_mhz:       Speed of the DLM configured at
 * @old_multiplier: MPLL_MULTIPLIER value to decrement
 */
void __cvmx_qlm_set_mult(int qlm, int baud_mhz, int old_multiplier)
{
	cvmx_gserx_dlmx_mpll_multiplier_t mpll_multiplier;
	uint64_t meas_refclock, mult;

	if (!OCTEON_IS_MODEL(OCTEON_CN70XX))
		return;

	if (qlm == -1)
		return;

	meas_refclock = cvmx_qlm_measure_clock(qlm);
	if (meas_refclock == 0) {
		cvmx_warn("DLM%d: Reference clock not running\n", qlm);
		return;
	}

	mult = (uint64_t) baud_mhz *1000000 + (meas_refclock / 2);
	mult /= meas_refclock;

	/* 6. Decrease MPLL_MULTIPLIER by one continually until it reaches
	   the desired long-term setting, ensuring that each MPLL_MULTIPLIER
	   value is constant for at least 1 msec before changing to the next
	   value. The desired long-term setting is as indicated in HRM tables
	   21-1, 21-2, and 21-3. This is not required with the HRM
	   sequence. */
	do {
		mpll_multiplier.u64 =
		    cvmx_read_csr(CVMX_GSERX_DLMX_MPLL_MULTIPLIER(qlm, 0));
		mpll_multiplier.s.mpll_multiplier = --old_multiplier;
		cvmx_write_csr(CVMX_GSERX_DLMX_MPLL_MULTIPLIER(qlm, 0),
			       mpll_multiplier.u64);
		/* Wait for 1 ms */
		cvmx_wait_usec(1000);
	} while (old_multiplier > (int)mult);
}

enum cvmx_qlm_mode cvmx_qlm_get_mode_cn78xx(int node, int qlm)
{
	cvmx_gserx_cfg_t gserx_cfg;
	static int qlm_mode[2][9] = {
		{-1, -1, -1, -1, -1, -1, -1, -1},
		{-1, -1, -1, -1, -1, -1, -1, -1}
	};

	if (qlm >= 8)
		return CVMX_QLM_MODE_OCI;

	if (qlm_mode[node][qlm] != -1)
		return qlm_mode[node][qlm];

	gserx_cfg.u64 = cvmx_read_csr_node(node, CVMX_GSERX_CFG(qlm));
	if (gserx_cfg.s.pcie) {
		switch (qlm) {
		case 0:	/* Either PEM0 x4 or PEM0 x8 */
		case 1:	/* Either PEM0 x8 or PEM1 x4 */
			{
				cvmx_pemx_cfg_t pemx_cfg;
				pemx_cfg.u64 =
				    cvmx_read_csr_node(node, CVMX_PEMX_CFG(0));
				if (pemx_cfg.cn78xx.lanes8)
					qlm_mode[node][qlm] = CVMX_QLM_MODE_PCIE_1X8;	/* PEM0 x8 */
				else
					qlm_mode[node][qlm] = CVMX_QLM_MODE_PCIE;	/* PEM0 x4 */
				break;
			}
		case 2:	/* Either PEM2 x4 or PEM2 x8 */
			{
				cvmx_pemx_cfg_t pemx_cfg;
				pemx_cfg.u64 =
				    cvmx_read_csr_node(node, CVMX_PEMX_CFG(2));
				if (pemx_cfg.cn78xx.lanes8)
					qlm_mode[node][qlm] = CVMX_QLM_MODE_PCIE_1X8;	/* PEM2 x8 */
				else
					qlm_mode[node][qlm] = CVMX_QLM_MODE_PCIE;	/* PEM2 x4 */
				break;
			}
		case 3:	/* Either PEM2 x8 or PEM3 x4 or PEM3 x8 */
			{
				cvmx_pemx_cfg_t pemx_cfg;
				pemx_cfg.u64 =
				    cvmx_read_csr_node(node, CVMX_PEMX_CFG(2));
				if (pemx_cfg.cn78xx.lanes8)
					qlm_mode[node][qlm] = CVMX_QLM_MODE_PCIE_1X8;	/* PEM2 x8 */

				/* Can be first 4 lanes of PEM3 */
				pemx_cfg.u64 =
				    cvmx_read_csr_node(node, CVMX_PEMX_CFG(3));
				if (pemx_cfg.cn78xx.lanes8)
					qlm_mode[node][qlm] = CVMX_QLM_MODE_PCIE_1X8;	/* PEM3 x8 */
				else
					qlm_mode[node][qlm] = CVMX_QLM_MODE_PCIE;	/* PEM2 x4 */
				break;
			}
		case 4:	/* Either PEM3 x8 or PEM3 x4 */
			{
				cvmx_pemx_cfg_t pemx_cfg;
				pemx_cfg.u64 =
				    cvmx_read_csr_node(node, CVMX_PEMX_CFG(3));
				if (pemx_cfg.cn78xx.lanes8)
					qlm_mode[node][qlm] = CVMX_QLM_MODE_PCIE_1X8;	/* PEM3 x8 */
				else
					qlm_mode[node][qlm] = CVMX_QLM_MODE_PCIE;	/* PEM3 x4 */
				break;
			}
		default:
			qlm_mode[node][qlm] = CVMX_QLM_MODE_DISABLED;
			break;
		}
	} else if (gserx_cfg.s.ila) {
		qlm_mode[node][qlm] = CVMX_QLM_MODE_ILK;
	} else if (gserx_cfg.s.bgx) {
		cvmx_bgxx_cmrx_config_t cmr_config;
		cvmx_bgxx_spux_br_pmd_control_t pmd_control;
		int bgx = (qlm < 2) ? qlm : qlm - 2;

		cmr_config.u64 =
		    cvmx_read_csr_node(node, CVMX_BGXX_CMRX_CONFIG(0, bgx));
		pmd_control.u64 =
		    cvmx_read_csr_node(node,
				       CVMX_BGXX_SPUX_BR_PMD_CONTROL(0, bgx));

		switch (cmr_config.s.lmac_type) {
		case 0:
			qlm_mode[node][qlm] = CVMX_QLM_MODE_SGMII;
			break;
		case 1:
			qlm_mode[node][qlm] = CVMX_QLM_MODE_XAUI;
			break;
		case 2:
			qlm_mode[node][qlm] = CVMX_QLM_MODE_RXAUI;
			break;
		case 3:
			/* Use training to determine if we're in 10GBASE-KR or XFI */
			if (pmd_control.s.train_en)
				qlm_mode[node][qlm] = CVMX_QLM_MODE_10G_KR;
			else
				qlm_mode[node][qlm] = CVMX_QLM_MODE_XFI;
			pmd_control.s.train_en = 0;
			cvmx_write_csr_node(node,
					    CVMX_BGXX_SPUX_BR_PMD_CONTROL(0,
									  bgx),
					    pmd_control.u64);
			break;
		case 4:
			/* Use training to determine if we're in 10GBASE-KR or XFI */
			if (pmd_control.s.train_en)
				qlm_mode[node][qlm] = CVMX_QLM_MODE_40G_KR4;
			else
				qlm_mode[node][qlm] = CVMX_QLM_MODE_XLAUI;
			pmd_control.s.train_en = 0;
			cvmx_write_csr_node(node,
					    CVMX_BGXX_SPUX_BR_PMD_CONTROL(0,
									  bgx),
					    pmd_control.u64);
			break;
		default:
			qlm_mode[node][qlm] = CVMX_QLM_MODE_DISABLED;
			break;
		}
	} else
		qlm_mode[node][qlm] = CVMX_QLM_MODE_DISABLED;

	return qlm_mode[node][qlm];
}

enum cvmx_qlm_mode __cvmx_qlm_get_mode_cn73xx(int qlm)
{
	cvmx_gserx_cfg_t gserx_cfg;

	if (qlm > 6)
		return CVMX_QLM_MODE_DISABLED;

	gserx_cfg.u64 = cvmx_read_csr(CVMX_GSERX_CFG(qlm));
	if (gserx_cfg.s.pcie) {
		cvmx_pemx_cfg_t pemx_cfg;
		switch (qlm) {
		case 0:	/* Either PEM0 x4 or PEM0 x8 */
		case 1:	/* Either PEM0 x8 or PEM1 x4 */
			{
				pemx_cfg.u64 = cvmx_read_csr(CVMX_PEMX_CFG(0));
				if (pemx_cfg.cn78xx.lanes8)
					return CVMX_QLM_MODE_PCIE_1X8;	/* PEM0 x8 */
				else
					return CVMX_QLM_MODE_PCIE;	/* PEM0/PEM1 x4 */
			}
		case 2:	/* Either PEM2 x4 or PEM2 x8 */
			{
				pemx_cfg.u64 = cvmx_read_csr(CVMX_PEMX_CFG(2));
				if (pemx_cfg.cn78xx.lanes8)
					return CVMX_QLM_MODE_PCIE_1X8;	/* PEM2 x8 */
				else
					return CVMX_QLM_MODE_PCIE;	/* PEM2 x4 */
			}
		case 5:
		case 6:	/* PEM3 x2 */
			return CVMX_QLM_MODE_PCIE_1X2;	/* PEM3 x2 */
		case 3:	/* Either PEM2 x8 or PEM3 x4 */
			{
				pemx_cfg.u64 = cvmx_read_csr(CVMX_PEMX_CFG(2));
				if (pemx_cfg.cn78xx.lanes8)
					return CVMX_QLM_MODE_PCIE_1X8;	/* PEM2 x8 */
				else
					return CVMX_QLM_MODE_PCIE;	/* PEM3 x4 */
			}
		default:
			return CVMX_QLM_MODE_DISABLED;
		}
	} else if (gserx_cfg.s.bgx) {
		cvmx_bgxx_cmrx_config_t cmr_config;
		cvmx_bgxx_spux_br_pmd_control_t pmd_control;
		int bgx = 0;
		int index;
		int lane_mask = 0, train_mask = 0;
		if (qlm < 4)
			bgx = qlm - 2;
		else if (qlm == 5 || qlm == 6)
			bgx = 2;

		for (index = 0; index < 4; index++) {
			cmr_config.u64 =
			    cvmx_read_csr(CVMX_BGXX_CMRX_CONFIG(index, bgx));
			pmd_control.u64 =
			    cvmx_read_csr(CVMX_BGXX_SPUX_BR_PMD_CONTROL
					  (index, bgx));
			lane_mask |= (cmr_config.s.lmac_type << (index * 4));
			train_mask |= (pmd_control.s.train_en << (index * 4));
		}

		switch (lane_mask) {
		case 0:
			return CVMX_QLM_MODE_SGMII;
		case 0x1:
			return CVMX_QLM_MODE_XAUI;
		case 0x22:
			return CVMX_QLM_MODE_RXAUI;
		case 0x3333:
			/* Use training to determine if we're in 10GBASE-KR or XFI */
			if (train_mask)
				return CVMX_QLM_MODE_10G_KR;
			else
				return CVMX_QLM_MODE_XFI;
		case 0x4:
			/* Use training to determine if we're in 10GBASE-KR or XFI */
			if (train_mask)
				return CVMX_QLM_MODE_40G_KR4;
			else
				return CVMX_QLM_MODE_XLAUI;
		case 0x0005:
			return CVMX_QLM_MODE_RGMII_SGMII;
		case 0x3335:
			if (train_mask)
				return CVMX_QLM_MODE_RGMII_10G_KR;
			else
				return CVMX_QLM_MODE_RGMII_XFI;
		case 0x45:
			if (train_mask)
				return CVMX_QLM_MODE_RGMII_40G_KR4;
			else
				return CVMX_QLM_MODE_RGMII_XLAUI;
		case 0x225:
			return CVMX_QLM_MODE_RGMII_RXAUI;
		case 0x15:
			return CVMX_QLM_MODE_RGMII_XAUI;
		case 0x3300:
			if (qlm == 5)
				return CVMX_QLM_MODE_SGMII;
			if (train_mask)
				return CVMX_QLM_MODE_10G_KR;
			else
				return CVMX_QLM_MODE_XFI;
		case 0x200:
			if (qlm == 5)
				return CVMX_QLM_MODE_SGMII;
			return CVMX_QLM_MODE_RXAUI;
		case 0x233:
			if (qlm == 6)
				return CVMX_QLM_MODE_RXAUI;
			if (train_mask)
				return CVMX_QLM_MODE_10G_KR;
			else
				return CVMX_QLM_MODE_XFI;
		case 0x3305:
			if (qlm == 5)
				return CVMX_QLM_MODE_RGMII_SGMII;
			if (train_mask)
				return CVMX_QLM_MODE_10G_KR;
			else
				return CVMX_QLM_MODE_XFI;
		case 0x205:
			if (qlm == 5)
				return CVMX_QLM_MODE_RGMII_SGMII;
			else
				return CVMX_QLM_MODE_RXAUI;
		case 0x0035:
			if (qlm == 6)
				return CVMX_QLM_MODE_SGMII;
			if (train_mask)
				return CVMX_QLM_MODE_RGMII_10G_KR;
			else
				return CVMX_QLM_MODE_RGMII_XFI;
		case 0x235:
			if (qlm == 6)
				return CVMX_QLM_MODE_RXAUI;
			if (train_mask)
				return CVMX_QLM_MODE_RGMII_10G_KR;
			else
				return CVMX_QLM_MODE_RGMII_XFI;
		default:
			return CVMX_QLM_MODE_DISABLED;
		}
	}
	return CVMX_QLM_MODE_DISABLED;
}
#endif

/*
 * Read QLM and return mode.
 */
enum cvmx_qlm_mode cvmx_qlm_get_mode(int qlm)
{
	if (OCTEON_IS_OCTEON2())
		return __cvmx_qlm_get_mode_cn6xxx(qlm);
	else if (OCTEON_IS_MODEL(OCTEON_CN70XX))
		return __cvmx_qlm_get_mode_cn70xx(qlm);
//	else if (OCTEON_IS_MODEL(OCTEON_CN78XX))
//		return cvmx_qlm_get_mode_cn78xx(cvmx_get_node_num(), qlm);
//	else if (OCTEON_IS_MODEL(OCTEON_CN73XX))
//		return __cvmx_qlm_get_mode_cn73xx(qlm);

	return CVMX_QLM_MODE_DISABLED;
}

#if 0
int cvmx_qlm_measure_clock_cn78xx(int node, int qlm)
{
	cvmx_gserx_cfg_t cfg;
	cvmx_gserx_refclk_sel_t refclk_sel;
	cvmx_gserx_lane_mode_t lane_mode;

	if (qlm >= 8)
		return -1;	/* FIXME for OCI */

	cfg.u64 = cvmx_read_csr_node(node, CVMX_GSERX_CFG(qlm));

	if (cfg.s.pcie) {
		refclk_sel.u64 =
		    cvmx_read_csr_node(node, CVMX_GSERX_REFCLK_SEL(qlm));
		if (refclk_sel.s.pcie_refclk125)
			return REF_125MHZ;	/* Ref 125 Mhz */
		else
			return REF_100MHZ;	/* Ref 100Mhz */
	}

	lane_mode.u64 = cvmx_read_csr_node(node, CVMX_GSERX_LANE_MODE(qlm));
	switch (lane_mode.s.lmode) {
	case R_25G_REFCLK100:
		return REF_100MHZ;
	case R_5G_REFCLK100:
		return REF_100MHZ;
	case R_8G_REFCLK100:
		return REF_100MHZ;
	case R_125G_REFCLK15625_KX:
		return REF_156MHZ;
	case R_3125G_REFCLK15625_XAUI:
		return REF_156MHZ;
	case R_103125G_REFCLK15625_KR:
		return REF_156MHZ;
	case R_125G_REFCLK15625_SGMII:
		return REF_156MHZ;
	case R_5G_REFCLK15625_QSGMII:
		return REF_156MHZ;
	case R_625G_REFCLK15625_RXAUI:
		return REF_156MHZ;
	case R_25G_REFCLK125:
		return REF_125MHZ;
	case R_5G_REFCLK125:
		return REF_125MHZ;
	case R_8G_REFCLK125:
		return REF_125MHZ;
	default:
		return 0;
	}
}
#endif

/**
 * Measure the reference clock of a QLM
 *
 * @qlm:    QLM to measure
 *
 * Returns Clock rate in Hz
 *       */
int cvmx_qlm_measure_clock(int qlm)
{
	union cvmx_mio_ptp_clock_cfg ptp_clock;
	uint64_t count;
	uint64_t start_cycle, stop_cycle;
	int evcnt_offset = 0x10;
	static int ref_clock[16] = { 0 };

	if (ref_clock[qlm])
		return ref_clock[qlm];

	if (OCTEON_IS_MODEL(OCTEON_CN3XXX) || OCTEON_IS_MODEL(OCTEON_CN5XXX))
		return -1;

//	if (OCTEON_IS_MODEL(OCTEON_CN78XX))
//		return cvmx_qlm_measure_clock_cn78xx(cvmx_get_node_num(), qlm);

	/* Force the reference to 156.25Mhz when running in simulation.
	   This supports the most speeds */
	if (cvmx_sysinfo_get()->board_type == CVMX_BOARD_TYPE_SIM)
		return 156250000;
	/* Fix reference clock for OCI QLMs */

	/* Disable the PTP event counter while we configure it */
	ptp_clock.u64 = cvmx_read_csr(CVMX_MIO_PTP_CLOCK_CFG);	/* For CN63XXp1 errata */
	ptp_clock.s.evcnt_en = 0;
	cvmx_write_csr(CVMX_MIO_PTP_CLOCK_CFG, ptp_clock.u64);
	/* Count on rising edge, Choose which QLM to count */
	ptp_clock.u64 = cvmx_read_csr(CVMX_MIO_PTP_CLOCK_CFG);	/* For CN63XXp1 errata */
	ptp_clock.s.evcnt_edge = 0;
	ptp_clock.s.evcnt_in = evcnt_offset + qlm;
	cvmx_write_csr(CVMX_MIO_PTP_CLOCK_CFG, ptp_clock.u64);
	/* Clear MIO_PTP_EVT_CNT */
	cvmx_read_csr(CVMX_MIO_PTP_EVT_CNT);	/* For CN63XXp1 errata */
	count = cvmx_read_csr(CVMX_MIO_PTP_EVT_CNT);
	cvmx_write_csr(CVMX_MIO_PTP_EVT_CNT, -count);
	/* Set MIO_PTP_EVT_CNT to 1 billion */
	cvmx_write_csr(CVMX_MIO_PTP_EVT_CNT, 1000000000);
	/* Enable the PTP event counter */
	ptp_clock.u64 = cvmx_read_csr(CVMX_MIO_PTP_CLOCK_CFG);	/* For CN63XXp1 errata */
	ptp_clock.s.evcnt_en = 1;
	cvmx_write_csr(CVMX_MIO_PTP_CLOCK_CFG, ptp_clock.u64);
	start_cycle = cvmx_clock_get_core_count();
	/* Wait for 50ms */
	cvmx_wait_usec(50000);
	/* Read the counter */
	cvmx_read_csr(CVMX_MIO_PTP_EVT_CNT);	/* For CN63XXp1 errata */
	count = cvmx_read_csr(CVMX_MIO_PTP_EVT_CNT);
	stop_cycle = cvmx_clock_get_core_count();
	/* Disable the PTP event counter */
	ptp_clock.u64 = cvmx_read_csr(CVMX_MIO_PTP_CLOCK_CFG);	/* For CN63XXp1 errata */
	ptp_clock.s.evcnt_en = 0;
	cvmx_write_csr(CVMX_MIO_PTP_CLOCK_CFG, ptp_clock.u64);
	/* Clock counted down, so reverse it */
	count = 1000000000 - count;
	if (OCTEON_IS_MODEL(OCTEON_CN70XX)) {
		cvmx_gserx_dlmx_ref_clkdiv2_t ref_clkdiv2;

		ref_clkdiv2.u64 =
		    cvmx_read_csr(CVMX_GSERX_DLMX_REF_CLKDIV2(qlm, 0));
		if (ref_clkdiv2.s.ref_clkdiv2)
			count *= 2;
	}
	/* Return the rate */
	ref_clock[qlm] =
	    count * cvmx_clock_get_rate(CVMX_CLOCK_CORE) / (stop_cycle -
							    start_cycle);
	return ref_clock[qlm];
}

#if 0
void cvmx_qlm_display_registers(int qlm)
{
	int num_lanes = cvmx_qlm_get_lanes(qlm);
	int lane;
	const __cvmx_qlm_jtag_field_t *ptr = cvmx_qlm_jtag_get_field();

	cvmx_dprintf("%29s", "Field[<stop bit>:<start bit>]");
	for (lane = 0; lane < num_lanes; lane++)
		cvmx_dprintf("\t      Lane %d", lane);
	cvmx_dprintf("\n");

	while (ptr != NULL && ptr->name) {
		cvmx_dprintf("%20s[%3d:%3d]", ptr->name, ptr->stop_bit,
			     ptr->start_bit);
		for (lane = 0; lane < num_lanes; lane++) {
			uint64_t val;
			int tx_byp = 0;
			/* Make sure serdes_tx_byp is set for displaying
			   TX amplitude and TX demphasis field values. */
			if (strncmp(ptr->name, "biasdrv_", 8) == 0 ||
			    strncmp(ptr->name, "tcoeff_", 7) == 0) {
				tx_byp =
				    cvmx_qlm_jtag_get(qlm, lane,
						      "serdes_tx_byp");
				if (tx_byp == 0) {
					cvmx_dprintf("\t \t");
					continue;
				}
			}
			val = cvmx_qlm_jtag_get(qlm, lane, ptr->name);
			cvmx_dprintf("\t%4llu (0x%04llx)",
				     (unsigned long long)val,
				     (unsigned long long)val);
		}
		cvmx_dprintf("\n");
		ptr++;
	}
}

#endif
/**
 * Due to errata G-720, the 2nd order CDR circuit on CN52XX pass
 * 1 doesn't work properly. The following code disables 2nd order
 * CDR for the specified QLM.
 *
 * @qlm:    QLM to disable 2nd order CDR for.
 */
void __cvmx_helper_errata_qlm_disable_2nd_order_cdr(int qlm)
{
	int lane;
	/* Apply the workaround only once. */
	union cvmx_ciu_qlm_jtgd qlm_jtgd;
	qlm_jtgd.u64 = cvmx_read_csr(CVMX_CIU_QLM_JTGD);
	if (qlm_jtgd.s.select != 0)
		return;

	cvmx_helper_qlm_jtag_init();
	/* We need to load all four lanes of the QLM, a total of 1072 bits */
	for (lane = 0; lane < 4; lane++) {
		/*
		 * Each lane has 268 bits. We need to set
		 * cfg_cdr_incx<67:64> = 3 and
		 * cfg_cdr_secord<77> = 1.
		 * All other bits are zero. Bits go in LSB first,
		 * so start off with the zeros for bits <63:0>.
		 */
		cvmx_helper_qlm_jtag_shift_zeros(qlm, 63 - 0 + 1);
		/* cfg_cdr_incx<67:64>=3 */
		cvmx_helper_qlm_jtag_shift(qlm, 67 - 64 + 1, 3);
		/* Zeros for bits <76:68> */
		cvmx_helper_qlm_jtag_shift_zeros(qlm, 76 - 68 + 1);
		/* cfg_cdr_secord<77>=1 */
		cvmx_helper_qlm_jtag_shift(qlm, 77 - 77 + 1, 1);
		/* Zeros for bits <267:78> */
		cvmx_helper_qlm_jtag_shift_zeros(qlm, 267 - 78 + 1);
	}
	cvmx_helper_qlm_jtag_update(qlm);
}

