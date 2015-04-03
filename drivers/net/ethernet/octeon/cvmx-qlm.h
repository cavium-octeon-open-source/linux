/***********************license start***************
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2011-2014 Cavium Inc.
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
 * Helper utilities for qlm.
 *
 */

#ifndef __CVMX_QLM_H__
#define __CVMX_QLM_H__

#include <asm/octeon/cvmx.h>

/*
 * Interface 0 on the 78xx can be connected to qlm 0 or qlm 2. When interface
 * 0 is connected to qlm 0, this macro must be set to 0. When interface 0 is
 * connected to qlm 2, this macro must be set to 1.
 */
#define MUX_78XX_IFACE0		0

/*
 * Interface 1 on the 78xx can be connected to qlm 1 or qlm 3. When interface
 * 1 is connected to qlm 1, this macro must be set to 0. When interface 1 is
 * connected to qlm 3, this macro must be set to 1.
 */
#define MUX_78XX_IFACE1		0

/* Uncomment this line to print QLM JTAG state */
/* #define CVMX_QLM_DUMP_STATE 1 */

typedef struct {
	const char *name;
	int stop_bit;
	int start_bit;
} __cvmx_qlm_jtag_field_t;

/**
 * Return the number of QLMs supported by the chip
 *
 * Returns  Number of QLMs
 */
extern int cvmx_qlm_get_num(void);

/**
 * Return the qlm number based on the interface
 *
 * @xiface:  Interface to look up
 */
extern int cvmx_qlm_interface(int xiface);

/**
 * Return number of lanes for a given qlm
 *
 * @qlm: QLM block to query
 *
 * Returns  Number of lanes
 */
extern int cvmx_qlm_get_lanes(int qlm);

/**
 * Get the QLM JTAG fields based on Octeon model on the supported chips.
 *
 * Returns  qlm_jtag_field_t structure
 */
extern const __cvmx_qlm_jtag_field_t *cvmx_qlm_jtag_get_field(void);

/**
 * Get the QLM JTAG length by going through qlm_jtag_field for each
 * Octeon model that is supported
 *
 * Returns return the length.
 */
extern int cvmx_qlm_jtag_get_length(void);

/**
 * Initialize the QLM layer
 */
extern void cvmx_qlm_init(void);

/**
 * Get a field in a QLM JTAG chain
 *
 * @qlm:    QLM to get
 * @lane:   Lane in QLM to get
 * @name:   String name of field
 *
 * Returns JTAG field value
 */
extern uint64_t cvmx_qlm_jtag_get(int qlm, int lane, const char *name);

/**
 * Set a field in a QLM JTAG chain
 *
 * @qlm:    QLM to set
 * @lane:   Lane in QLM to set, or -1 for all lanes
 * @name:   String name of field
 * @value:  Value of the field
 */
extern void cvmx_qlm_jtag_set(int qlm, int lane, const char *name,
			      uint64_t value);

/**
 * Errata G-16094: QLM Gen2 Equalizer Default Setting Change.
 * CN68XX pass 1.x and CN66XX pass 1.x QLM tweak. This function tweaks the
 * JTAG setting for a QLMs to run better at 5 and 6.25Ghz.
 */
extern void __cvmx_qlm_speed_tweak(void);

/**
 * Errata G-16174: QLM Gen2 PCIe IDLE DAC change.
 * CN68XX pass 1.x, CN66XX pass 1.x and CN63XX pass 1.0-2.2 QLM tweak.
 * This function tweaks the JTAG setting for a QLMs for PCIe to run better.
 */
extern void __cvmx_qlm_pcie_idle_dac_tweak(void);

extern void __cvmx_qlm_pcie_cfg_rxd_set_tweak(int qlm, int lane);

/**
 * Get the speed (Gbaud) of the QLM in Mhz.
 *
 * @qlm:    QLM to examine
 *
 * Returns Speed in Mhz
 */
extern int cvmx_qlm_get_gbaud_mhz(int qlm);
/**
 * Get the speed (Gbaud) of the QLM in Mhz on specific node.
 *
 * @node:   Target QLM node
 * @qlm:    QLM to examine
 *
 * Returns Speed in Mhz
 */
extern int cvmx_qlm_get_gbaud_mhz_node(int node, int qlm);

enum cvmx_qlm_mode {
	CVMX_QLM_MODE_DISABLED = -1,
	CVMX_QLM_MODE_SGMII = 1,
	CVMX_QLM_MODE_XAUI,
	CVMX_QLM_MODE_RXAUI,
	CVMX_QLM_MODE_PCIE,	/* gen3 / gen2 / gen1 */
	CVMX_QLM_MODE_PCIE_1X2,	/* 1x2 gen2 / gen1 */
	CVMX_QLM_MODE_PCIE_2X1,	/* 2x1 gen2 / gen1 */
	CVMX_QLM_MODE_PCIE_1X1,	/* 1x1 gen2 / gen1 */
	CVMX_QLM_MODE_SRIO_1X4,	/* 1x4 short / long */
	CVMX_QLM_MODE_SRIO_2X2,	/* 2x2 short / long */
	CVMX_QLM_MODE_SRIO_4X1,	/* 4x1 short / long */
	CVMX_QLM_MODE_ILK,
	CVMX_QLM_MODE_QSGMII,
	CVMX_QLM_MODE_SGMII_SGMII,
	CVMX_QLM_MODE_SGMII_DISABLED,
	CVMX_QLM_MODE_DISABLED_SGMII,
	CVMX_QLM_MODE_SGMII_QSGMII,
	CVMX_QLM_MODE_QSGMII_QSGMII,
	CVMX_QLM_MODE_QSGMII_DISABLED,
	CVMX_QLM_MODE_DISABLED_QSGMII,
	CVMX_QLM_MODE_QSGMII_SGMII,
	CVMX_QLM_MODE_RXAUI_1X2,
	CVMX_QLM_MODE_SATA_2X1,
	CVMX_QLM_MODE_XLAUI,
	CVMX_QLM_MODE_XFI,
	CVMX_QLM_MODE_10G_KR,
	CVMX_QLM_MODE_40G_KR4,
	CVMX_QLM_MODE_PCIE_1X8,	/* 1x8 gen3 / gen2 / gen1 */
	CVMX_QLM_MODE_RGMII_SGMII,
	CVMX_QLM_MODE_RGMII_XFI,
	CVMX_QLM_MODE_RGMII_10G_KR,
	CVMX_QLM_MODE_RGMII_RXAUI,
	CVMX_QLM_MODE_RGMII_XAUI,
	CVMX_QLM_MODE_RGMII_XLAUI,
	CVMX_QLM_MODE_RGMII_40G_KR4,
	CVMX_QLM_MODE_SGMII_XFI,
	CVMX_QLM_MODE_SGMII_10G_KR,
	CVMX_QLM_MODE_SGMII_RXAUI,
	CVMX_QLM_MODE_XLAUI_RXAUI,
	CVMX_QLM_MODE_40G_KR4_RXAUI,
	CVMX_QLM_MODE_RGMII_SGMII_XFI,
	CVMX_QLM_MODE_RGMII_SGMII_10G_KR,
	CVMX_QLM_MODE_RGMII_SGMII_RXAUI,
	CVMX_QLM_MODE_RGMII_XFI_SGMII,
	CVMX_QLM_MODE_RGMII_10G_KR_SGMII,
	CVMX_QLM_MODE_RGMII_XFI_RXAUI,
	CVMX_QLM_MODE_RGMII_10G_KR_RXAUI,
	CVMX_QLM_MODE_OCI
};

enum cvmx_gmx_inf_mode {
	CVMX_GMX_INF_MODE_DISABLED = 0,
	CVMX_GMX_INF_MODE_SGMII = 1,	/* Other interface can be SGMII or QSGMII */
	CVMX_GMX_INF_MODE_QSGMII = 2,	/* Other interface can be SGMII or QSGMII */
	CVMX_GMX_INF_MODE_RXAUI = 3,	/* Only interface 0, interface 1 must be DISABLED */
};

/**
 * These apply to DLM1 and DLM2 if its not in SATA mode
 * Manual refers to lanes as follows:
 *  DML 0 lane 0 == GSER0 lane 0
 *  DML 0 lane 1 == GSER0 lane 1
 *  DML 1 lane 2 == GSER1 lane 0
 *  DML 1 lane 3 == GSER1 lane 1
 *  DML 2 lane 4 == GSER2 lane 0
 *  DML 2 lane 5 == GSER2 lane 1
 */
enum cvmx_pemx_cfg_mode {
	CVMX_PEM_MD_GEN2_2LANE = 0,	/* Valid for PEM0(DLM1), PEM1(DLM2) */
	CVMX_PEM_MD_GEN2_1LANE = 1,	/* Valid for PEM0(DLM1.0), PEM1(DLM1.1,DLM2.0), PEM2(DLM2.1) */
	CVMX_PEM_MD_GEN2_4LANE = 2,	/* Valid for PEM0(DLM1-2) */
	/* Reserved */
	CVMX_PEM_MD_GEN1_2LANE = 4,	/* Valid for PEM0(DLM1), PEM1(DLM2) */
	CVMX_PEM_MD_GEN1_1LANE = 5,	/* Valid for PEM0(DLM1.0), PEM1(DLM1.1,DLM2.0), PEM2(DLM2.1) */
	CVMX_PEM_MD_GEN1_4LANE = 6,	/* Valid for PEM0(DLM1-2) */
	/* Reserved */
};

/*
 * Read QLM and return mode.
 */
extern enum cvmx_qlm_mode cvmx_qlm_get_mode(int qlm);
extern enum cvmx_qlm_mode cvmx_qlm_get_mode_cn78xx(int node, int qlm);
extern enum cvmx_qlm_mode cvmx_qlm_get_dlm_mode(int dlm_mode, int interface);
extern void __cvmx_qlm_set_mult(int qlm, int baud_mhz, int old_multiplier);

extern void cvmx_qlm_display_registers(int qlm);

extern int cvmx_qlm_measure_clock(int qlm);

#endif /* __CVMX_QLM_H__ */
