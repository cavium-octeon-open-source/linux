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

#ifndef __CVMX_GSERX_DEFS_H__
#define __CVMX_GSERX_DEFS_H__

#define CVMX_GSERX_ANA_ATEST(offset) (CVMX_ADD_IO_SEG(0x0001180090000800ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_ANA_SEL(offset) (CVMX_ADD_IO_SEG(0x0001180090000808ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_BR_RXX_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000400ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#define CVMX_GSERX_BR_RXX_EER(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000418ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#define CVMX_GSERX_BR_TXX_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000420ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#define CVMX_GSERX_BR_TXX_CUR(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000438ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#define CVMX_GSERX_BR_TXX_TAP(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000440ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#define CVMX_GSERX_CFG(offset) (CVMX_ADD_IO_SEG(0x0001180090000080ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_DBG(offset) (CVMX_ADD_IO_SEG(0x0001180090000098ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_DLMX_LOOPBK_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001008ull))
#define CVMX_GSERX_DLMX_LOS_BIAS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001010ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_DLMX_LOS_LEVEL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001018ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_DLMX_MISC_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000000ull))
#define CVMX_GSERX_DLMX_MPLL_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001020ull))
#define CVMX_GSERX_DLMX_MPLL_HALF_RATE(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001028ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_DLMX_MPLL_MULTIPLIER(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001030ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_DLMX_MPLL_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_DLMX_PHY_RESET(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001038ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_DLMX_REFCLK_SEL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000008ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_DLMX_REF_CLKDIV2(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001040ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_DLMX_REF_SSP_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001048ull))
#define CVMX_GSERX_DLMX_REF_USE_PAD(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001050ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_DLMX_RX_DATA_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002008ull))
#define CVMX_GSERX_DLMX_RX_EQ(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002010ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_DLMX_RX_LOS_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002018ull))
#define CVMX_GSERX_DLMX_RX_PLL_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002020ull))
#define CVMX_GSERX_DLMX_RX_RATE(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002028ull))
#define CVMX_GSERX_DLMX_RX_RESET(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002030ull))
#define CVMX_GSERX_DLMX_RX_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_DLMX_RX_TERM_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002038ull))
#define CVMX_GSERX_DLMX_TEST_BYPASS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001058ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_DLMX_TEST_POWERDOWN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001060ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_DLMX_TX_AMPLITUDE(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003008ull))
#define CVMX_GSERX_DLMX_TX_CM_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003010ull))
#define CVMX_GSERX_DLMX_TX_DATA_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003018ull))
#define CVMX_GSERX_DLMX_TX_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003020ull))
#define CVMX_GSERX_DLMX_TX_PREEMPH(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003028ull))
#define CVMX_GSERX_DLMX_TX_RATE(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003030ull))
#define CVMX_GSERX_DLMX_TX_RESET(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003038ull))
#define CVMX_GSERX_DLMX_TX_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_DLMX_TX_TERM_OFFSET(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003040ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_EQ_WAIT_TIME(offset) (CVMX_ADD_IO_SEG(0x00011800904E0000ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_GLBL_PLL_MONITOR(offset) (CVMX_ADD_IO_SEG(0x0001180090460100ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_GLBL_TAD(offset) (CVMX_ADD_IO_SEG(0x0001180090460400ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_GLBL_TM_ADMON(offset) (CVMX_ADD_IO_SEG(0x0001180090460408ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_IDDQ_MODE(offset) (CVMX_ADD_IO_SEG(0x0001180090000018ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_LANEX_LBERT_CFG(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0020ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_LBERT_ECNT(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0028ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_LBERT_PAT_CFG(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0018ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_MISC_CFG_0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0000ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_MISC_CFG_1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0008ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_PCS_CTLIFC_0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0060ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_PCS_CTLIFC_1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0068ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_PCS_CTLIFC_2(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904C0070ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_PMA_LOOPBACK_CTRL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904400D0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_PWR_CTRL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904400D8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_AEQ_OUT_0(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440280ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_AEQ_OUT_1(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440288ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_AEQ_OUT_2(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440290ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_CDR_CTRL_1(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440038ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_CDR_CTRL_2(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440040ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_CDR_MISC_CTRL_0(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440208ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_CDR_STATUS_1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904402D0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_CDR_STATUS_2(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904402D8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_CFG_0(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440000ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_CFG_1(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440008ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_CFG_2(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440010ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_CFG_3(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440018ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_CFG_4(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440020ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_CFG_5(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440028ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_CTLE_CTRL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440058ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_LOOP_CTRL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440048ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_MISC_OVRRD(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440258ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_PRECORR_CTRL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440060ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_PRECORR_VAL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440078ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_VALBBD_CTRL_0(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440240ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_VALBBD_CTRL_1(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440248ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_VALBBD_CTRL_2(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440250ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_VMA_CTRL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440200ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_VMA_STATUS_0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904402B8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_RX_VMA_STATUS_1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904402C0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_SDS_PIN_MON_0(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440130ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_SDS_PIN_MON_1(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440138ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_SDS_PIN_MON_2(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090440140ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_TX_CFG_0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904400A8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_TX_CFG_1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904400B0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_TX_CFG_2(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904400B8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_TX_CFG_3(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904400C0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANEX_TX_PRE_EMPHASIS(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904400C8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#define CVMX_GSERX_LANE_LPBKEN(offset) (CVMX_ADD_IO_SEG(0x0001180090000110ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_LANE_MODE(offset) (CVMX_ADD_IO_SEG(0x0001180090000118ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_LANE_POFF(offset) (CVMX_ADD_IO_SEG(0x0001180090000108ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_LANE_PX_MODE_0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904E0040ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32)
#define CVMX_GSERX_LANE_PX_MODE_1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904E0048ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32)
#define CVMX_GSERX_LANE_SRST(offset) (CVMX_ADD_IO_SEG(0x0001180090000100ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_LANE_VMA_COARSE_CTRL_0(offset) (CVMX_ADD_IO_SEG(0x00011800904E01B0ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_LANE_VMA_COARSE_CTRL_1(offset) (CVMX_ADD_IO_SEG(0x00011800904E01B8ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_LANE_VMA_COARSE_CTRL_2(offset) (CVMX_ADD_IO_SEG(0x00011800904E01C0ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_LANE_VMA_FINE_CTRL_0(offset) (CVMX_ADD_IO_SEG(0x00011800904E01C8ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_LANE_VMA_FINE_CTRL_1(offset) (CVMX_ADD_IO_SEG(0x00011800904E01D0ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_LANE_VMA_FINE_CTRL_2(offset) (CVMX_ADD_IO_SEG(0x00011800904E01D8ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_PCIE_PCS_CLK_REQ(offset) (CVMX_ADD_IO_SEG(0x0001180090080478ull))
#define CVMX_GSERX_PCIE_PIPEX_TXDEEMPH(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090080480ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8)
#define CVMX_GSERX_PCIE_PIPE_COM_CLK(offset) (CVMX_ADD_IO_SEG(0x0001180090080470ull))
#define CVMX_GSERX_PCIE_PIPE_CRST(offset) (CVMX_ADD_IO_SEG(0x0001180090080458ull))
#define CVMX_GSERX_PCIE_PIPE_PORT_LOOPBK(offset) (CVMX_ADD_IO_SEG(0x0001180090080468ull))
#define CVMX_GSERX_PCIE_PIPE_PORT_SEL(offset) (CVMX_ADD_IO_SEG(0x0001180090080460ull))
#define CVMX_GSERX_PCIE_PIPE_RST(offset) (CVMX_ADD_IO_SEG(0x0001180090080448ull))
#define CVMX_GSERX_PCIE_PIPE_RST_STS(offset) (CVMX_ADD_IO_SEG(0x0001180090080450ull))
#define CVMX_GSERX_PCIE_PIPE_STATUS(offset) (CVMX_ADD_IO_SEG(0x0001180090080400ull))
#define CVMX_GSERX_PCIE_TX_DEEMPH_GEN1(offset) (CVMX_ADD_IO_SEG(0x0001180090080408ull))
#define CVMX_GSERX_PCIE_TX_DEEMPH_GEN2_3P5DB(offset) (CVMX_ADD_IO_SEG(0x0001180090080410ull))
#define CVMX_GSERX_PCIE_TX_DEEMPH_GEN2_6DB(offset) (CVMX_ADD_IO_SEG(0x0001180090080418ull))
#define CVMX_GSERX_PCIE_TX_SWING_FULL(offset) (CVMX_ADD_IO_SEG(0x0001180090080420ull))
#define CVMX_GSERX_PCIE_TX_SWING_LOW(offset) (CVMX_ADD_IO_SEG(0x0001180090080428ull))
#define CVMX_GSERX_PCIE_TX_VBOOST_LVL(offset) (CVMX_ADD_IO_SEG(0x0001180090080440ull))
#define CVMX_GSERX_PHYX_IDCODE_HI(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090400008ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_IDCODE_LO(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090400000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE0_LOOPBACK(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408170ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE0_RX_LBERT_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904080B0ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE0_RX_LBERT_ERR(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904080B8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE0_RX_OVRD_IN_LO(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408028ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE0_TXDEBUG(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408080ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE0_TX_LBERT_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904080A8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE0_TX_OVRD_IN_HI(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408008ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE0_TX_OVRD_IN_LO(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE1_LOOPBACK(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408970ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE1_RX_LBERT_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904088B0ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE1_RX_LBERT_ERR(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904088B8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE1_RX_OVRD_IN_LO(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408828ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE1_TXDEBUG(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408880ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE1_TX_LBERT_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904088A8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE1_TX_OVRD_IN_HI(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408808ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_LANE1_TX_OVRD_IN_LO(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408800ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHYX_OVRD_IN_LO(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090400088ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#define CVMX_GSERX_PHY_CTL(offset) (CVMX_ADD_IO_SEG(0x0001180090000000ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_PIPE_LPBK(offset) (CVMX_ADD_IO_SEG(0x0001180090000200ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_PLL_PX_MODE_0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904E0030ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32)
#define CVMX_GSERX_PLL_PX_MODE_1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904E0038ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32)
#define CVMX_GSERX_PLL_STAT(offset) (CVMX_ADD_IO_SEG(0x0001180090000010ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_QLM_STAT(offset) (CVMX_ADD_IO_SEG(0x00011800900000A0ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_RDET_TIME(offset) (CVMX_ADD_IO_SEG(0x00011800904E0008ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_REFCLK_EVT_CNTR(offset) (CVMX_ADD_IO_SEG(0x0001180090000178ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_REFCLK_EVT_CTRL(offset) (CVMX_ADD_IO_SEG(0x0001180090000170ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_REFCLK_SEL(offset) (CVMX_ADD_IO_SEG(0x0001180090000008ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_RX_COAST(offset) (CVMX_ADD_IO_SEG(0x0001180090000138ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_RX_EIE_DETEN(offset) (CVMX_ADD_IO_SEG(0x0001180090000148ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_RX_EIE_DETSTS(offset) (CVMX_ADD_IO_SEG(0x0001180090000150ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_RX_EIE_FILTER(offset) (CVMX_ADD_IO_SEG(0x0001180090000158ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_RX_POLARITY(offset) (CVMX_ADD_IO_SEG(0x0001180090000160ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_RX_PWR_CTRL_P1(offset) (CVMX_ADD_IO_SEG(0x00011800904600B0ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_RX_PWR_CTRL_P2(offset) (CVMX_ADD_IO_SEG(0x00011800904600B8ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_SATA_CFG(offset) (CVMX_ADD_IO_SEG(0x0001180090100208ull))
#define CVMX_GSERX_SATA_LANEX_TX_AMPX(a, b, c) (CVMX_ADD_IO_SEG(0x0001180090000B00ull) + ((a) << 24) + ((b) << 5) + ((c) << 3))
#define CVMX_GSERX_SATA_LANEX_TX_PREEMPHX(a, b, c) (CVMX_ADD_IO_SEG(0x0001180090000A00ull) + ((a) << 24) + ((b) << 5) + ((c) << 3))
static inline uint64_t CVMX_GSERX_SATA_LANE_RST(unsigned long offset)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN70XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x0001180090100210ull) + (offset) * 0x1000000ull;
	case OCTEON_CN73XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN75XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x0001180090000908ull) + (offset) * 0x1000000ull;
	}
	return CVMX_ADD_IO_SEG(0x0001180090000908ull) + (offset) * 0x1000000ull;
}

#define CVMX_GSERX_SATA_P0_TX_AMP_GENX(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090100480ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8)
#define CVMX_GSERX_SATA_P0_TX_PREEMPH_GENX(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090100400ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8)
#define CVMX_GSERX_SATA_P1_TX_AMP_GENX(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800901004A0ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8)
#define CVMX_GSERX_SATA_P1_TX_PREEMPH_GENX(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090100420ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8)
#define CVMX_GSERX_SATA_REF_SSP_EN(offset) (CVMX_ADD_IO_SEG(0x0001180090100600ull))
#define CVMX_GSERX_SATA_RX_INVERT(offset) (CVMX_ADD_IO_SEG(0x0001180090100218ull))
#define CVMX_GSERX_SATA_SSC_CLK_SEL(offset) (CVMX_ADD_IO_SEG(0x0001180090100238ull))
#define CVMX_GSERX_SATA_SSC_EN(offset) (CVMX_ADD_IO_SEG(0x0001180090100228ull))
#define CVMX_GSERX_SATA_SSC_RANGE(offset) (CVMX_ADD_IO_SEG(0x0001180090100230ull))
static inline uint64_t CVMX_GSERX_SATA_STATUS(unsigned long offset)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN70XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x0001180090100200ull) + (offset) * 0x1000000ull;
	case OCTEON_CN73XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN75XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x0001180090100900ull) + (offset) * 0x1000000ull;
	}
	return CVMX_ADD_IO_SEG(0x0001180090100900ull) + (offset) * 0x1000000ull;
}

static inline uint64_t CVMX_GSERX_SATA_TX_INVERT(unsigned long offset)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN70XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x0001180090100220ull) + (offset) * 0x1000000ull;
	case OCTEON_CN73XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN75XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x0001180090000910ull) + (offset) * 0x1000000ull;
	}
	return CVMX_ADD_IO_SEG(0x0001180090000910ull) + (offset) * 0x1000000ull;
}

#define CVMX_GSERX_SCRATCH(offset) (CVMX_ADD_IO_SEG(0x0001180090000020ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_SLICEX_RX_SDLL_CTRL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090460220ull) + (((offset) & 1) + ((block_id) & 15) * 0x8ull) * 2097152)
#define CVMX_GSERX_SLICE_CFG(offset) (CVMX_ADD_IO_SEG(0x0001180090460060ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_SPD(offset) (CVMX_ADD_IO_SEG(0x0001180090000088ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_SRST(offset) (CVMX_ADD_IO_SEG(0x0001180090000090ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_TXCLK_EVT_CNTR(offset) (CVMX_ADD_IO_SEG(0x0001180090000188ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_TXCLK_EVT_CTRL(offset) (CVMX_ADD_IO_SEG(0x0001180090000180ull) + ((offset) & 15) * 0x1000000ull)
#define CVMX_GSERX_TX_VBOOST(offset) (CVMX_ADD_IO_SEG(0x0001180090000130ull) + ((offset) & 15) * 0x1000000ull)

union cvmx_gserx_ana_atest {
	uint64_t u64;
	struct cvmx_gserx_ana_atest_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t ana_dac_b:7;
		uint64_t ana_dac_a:5;
#else
		uint64_t ana_dac_a:5;
		uint64_t ana_dac_b:7;
		uint64_t reserved_12_63:52;
#endif
	} s;
	struct cvmx_gserx_ana_atest_s cn73xx;
	struct cvmx_gserx_ana_atest_s cn75xx;
	struct cvmx_gserx_ana_atest_s cn78xx;
	struct cvmx_gserx_ana_atest_s cn78xxp2;
};
typedef union cvmx_gserx_ana_atest cvmx_gserx_ana_atest_t;

union cvmx_gserx_ana_sel {
	uint64_t u64;
	struct cvmx_gserx_ana_sel_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t ana_sel:9;
#else
		uint64_t ana_sel:9;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_ana_sel_s cn73xx;
	struct cvmx_gserx_ana_sel_s cn75xx;
	struct cvmx_gserx_ana_sel_s cn78xx;
	struct cvmx_gserx_ana_sel_s cn78xxp2;
};
typedef union cvmx_gserx_ana_sel cvmx_gserx_ana_sel_t;

union cvmx_gserx_br_rxx_ctl {
	uint64_t u64;
	struct cvmx_gserx_br_rxx_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t rxt_adtmout_disable:1;
		uint64_t rxt_swm:1;
		uint64_t rxt_preset:1;
		uint64_t rxt_initialize:1;
#else
		uint64_t rxt_initialize:1;
		uint64_t rxt_preset:1;
		uint64_t rxt_swm:1;
		uint64_t rxt_adtmout_disable:1;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_gserx_br_rxx_ctl_s cn73xx;
	struct cvmx_gserx_br_rxx_ctl_s cn75xx;
	struct cvmx_gserx_br_rxx_ctl_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_3_63:61;
		uint64_t rxt_swm:1;
		uint64_t rxt_preset:1;
		uint64_t rxt_initialize:1;
#else
		uint64_t rxt_initialize:1;
		uint64_t rxt_preset:1;
		uint64_t rxt_swm:1;
		uint64_t reserved_3_63:61;
#endif
	} cn78xx;
	struct cvmx_gserx_br_rxx_ctl_cn78xx cn78xxp2;
};
typedef union cvmx_gserx_br_rxx_ctl cvmx_gserx_br_rxx_ctl_t;

union cvmx_gserx_br_rxx_eer {
	uint64_t u64;
	struct cvmx_gserx_br_rxx_eer_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t rxt_eer:1;
		uint64_t rxt_esv:1;
		uint64_t rxt_esm:14;
#else
		uint64_t rxt_esm:14;
		uint64_t rxt_esv:1;
		uint64_t rxt_eer:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_br_rxx_eer_s cn73xx;
	struct cvmx_gserx_br_rxx_eer_s cn75xx;
	struct cvmx_gserx_br_rxx_eer_s cn78xx;
	struct cvmx_gserx_br_rxx_eer_s cn78xxp2;
};
typedef union cvmx_gserx_br_rxx_eer cvmx_gserx_br_rxx_eer_t;

union cvmx_gserx_br_txx_ctl {
	uint64_t u64;
	struct cvmx_gserx_br_txx_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t txt_swm:1;
#else
		uint64_t txt_swm:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_br_txx_ctl_s cn73xx;
	struct cvmx_gserx_br_txx_ctl_s cn75xx;
	struct cvmx_gserx_br_txx_ctl_s cn78xx;
	struct cvmx_gserx_br_txx_ctl_s cn78xxp2;
};
typedef union cvmx_gserx_br_txx_ctl cvmx_gserx_br_txx_ctl_t;

union cvmx_gserx_br_txx_cur {
	uint64_t u64;
	struct cvmx_gserx_br_txx_cur_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t txt_cur:14;
#else
		uint64_t txt_cur:14;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_gserx_br_txx_cur_s cn73xx;
	struct cvmx_gserx_br_txx_cur_s cn75xx;
	struct cvmx_gserx_br_txx_cur_s cn78xx;
	struct cvmx_gserx_br_txx_cur_s cn78xxp2;
};
typedef union cvmx_gserx_br_txx_cur cvmx_gserx_br_txx_cur_t;

union cvmx_gserx_br_txx_tap {
	uint64_t u64;
	struct cvmx_gserx_br_txx_tap_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t txt_pre:4;
		uint64_t txt_swing:5;
		uint64_t txt_post:5;
#else
		uint64_t txt_post:5;
		uint64_t txt_swing:5;
		uint64_t txt_pre:4;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_gserx_br_txx_tap_s cn73xx;
	struct cvmx_gserx_br_txx_tap_s cn75xx;
	struct cvmx_gserx_br_txx_tap_s cn78xxp2;
};
typedef union cvmx_gserx_br_txx_tap cvmx_gserx_br_txx_tap_t;

union cvmx_gserx_cfg {
	uint64_t u64;
	struct cvmx_gserx_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_6_63:58;
		uint64_t sata:1;
		uint64_t bgx_quad:1;
		uint64_t bgx_dual:1;
		uint64_t bgx:1;
		uint64_t ila:1;
		uint64_t pcie:1;
#else
		uint64_t pcie:1;
		uint64_t ila:1;
		uint64_t bgx:1;
		uint64_t bgx_dual:1;
		uint64_t bgx_quad:1;
		uint64_t sata:1;
		uint64_t reserved_6_63:58;
#endif
	} s;
	struct cvmx_gserx_cfg_s cn73xx;
	struct cvmx_gserx_cfg_s cn75xx;
	struct cvmx_gserx_cfg_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_5_63:59;
		uint64_t bgx_quad:1;
		uint64_t bgx_dual:1;
		uint64_t bgx:1;
		uint64_t ila:1;
		uint64_t pcie:1;
#else
		uint64_t pcie:1;
		uint64_t ila:1;
		uint64_t bgx:1;
		uint64_t bgx_dual:1;
		uint64_t bgx_quad:1;
		uint64_t reserved_5_63:59;
#endif
	} cn78xx;
	struct cvmx_gserx_cfg_cn78xx cn78xxp2;
};
typedef union cvmx_gserx_cfg cvmx_gserx_cfg_t;

union cvmx_gserx_dbg {
	uint64_t u64;
	struct cvmx_gserx_dbg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t rxqtm_on:1;
#else
		uint64_t rxqtm_on:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_dbg_s cn73xx;
	struct cvmx_gserx_dbg_s cn75xx;
	struct cvmx_gserx_dbg_s cn78xx;
	struct cvmx_gserx_dbg_s cn78xxp2;
};
typedef union cvmx_gserx_dbg cvmx_gserx_dbg_t;

union cvmx_gserx_dlmx_loopbk_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_loopbk_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t lane1_loopbk_en:1;
		uint64_t reserved_1_7:7;
		uint64_t lane0_loopbk_en:1;
#else
		uint64_t lane0_loopbk_en:1;
		uint64_t reserved_1_7:7;
		uint64_t lane1_loopbk_en:1;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_dlmx_loopbk_en_s cn70xx;
	struct cvmx_gserx_dlmx_loopbk_en_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_loopbk_en cvmx_gserx_dlmx_loopbk_en_t;

union cvmx_gserx_dlmx_los_bias {
	uint64_t u64;
	struct cvmx_gserx_dlmx_los_bias_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_3_63:61;
		uint64_t los_bias:3;
#else
		uint64_t los_bias:3;
		uint64_t reserved_3_63:61;
#endif
	} s;
	struct cvmx_gserx_dlmx_los_bias_s cn70xx;
	struct cvmx_gserx_dlmx_los_bias_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_los_bias cvmx_gserx_dlmx_los_bias_t;

union cvmx_gserx_dlmx_los_level {
	uint64_t u64;
	struct cvmx_gserx_dlmx_los_level_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_5_63:59;
		uint64_t los_level:5;
#else
		uint64_t los_level:5;
		uint64_t reserved_5_63:59;
#endif
	} s;
	struct cvmx_gserx_dlmx_los_level_s cn70xx;
	struct cvmx_gserx_dlmx_los_level_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_los_level cvmx_gserx_dlmx_los_level_t;

union cvmx_gserx_dlmx_misc_status {
	uint64_t u64;
	struct cvmx_gserx_dlmx_misc_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t tx1_uflow:1;
		uint64_t reserved_1_7:7;
		uint64_t tx0_uflow:1;
#else
		uint64_t tx0_uflow:1;
		uint64_t reserved_1_7:7;
		uint64_t tx1_uflow:1;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_dlmx_misc_status_s cn70xx;
	struct cvmx_gserx_dlmx_misc_status_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_misc_status cvmx_gserx_dlmx_misc_status_t;

union cvmx_gserx_dlmx_mpll_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_mpll_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t mpll_en:1;
#else
		uint64_t mpll_en:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_dlmx_mpll_en_s cn70xx;
	struct cvmx_gserx_dlmx_mpll_en_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_mpll_en cvmx_gserx_dlmx_mpll_en_t;

union cvmx_gserx_dlmx_mpll_half_rate {
	uint64_t u64;
	struct cvmx_gserx_dlmx_mpll_half_rate_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t mpll_half_rate:1;
#else
		uint64_t mpll_half_rate:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_dlmx_mpll_half_rate_s cn70xx;
	struct cvmx_gserx_dlmx_mpll_half_rate_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_mpll_half_rate cvmx_gserx_dlmx_mpll_half_rate_t;

union cvmx_gserx_dlmx_mpll_multiplier {
	uint64_t u64;
	struct cvmx_gserx_dlmx_mpll_multiplier_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t mpll_multiplier:7;
#else
		uint64_t mpll_multiplier:7;
		uint64_t reserved_7_63:57;
#endif
	} s;
	struct cvmx_gserx_dlmx_mpll_multiplier_s cn70xx;
	struct cvmx_gserx_dlmx_mpll_multiplier_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_mpll_multiplier cvmx_gserx_dlmx_mpll_multiplier_t;

union cvmx_gserx_dlmx_mpll_status {
	uint64_t u64;
	struct cvmx_gserx_dlmx_mpll_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t mpll_status:1;
#else
		uint64_t mpll_status:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_dlmx_mpll_status_s cn70xx;
	struct cvmx_gserx_dlmx_mpll_status_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_mpll_status cvmx_gserx_dlmx_mpll_status_t;

union cvmx_gserx_dlmx_phy_reset {
	uint64_t u64;
	struct cvmx_gserx_dlmx_phy_reset_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t phy_reset:1;
#else
		uint64_t phy_reset:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_dlmx_phy_reset_s cn70xx;
	struct cvmx_gserx_dlmx_phy_reset_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_phy_reset cvmx_gserx_dlmx_phy_reset_t;

union cvmx_gserx_dlmx_ref_clkdiv2 {
	uint64_t u64;
	struct cvmx_gserx_dlmx_ref_clkdiv2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t ref_clkdiv2:1;
#else
		uint64_t ref_clkdiv2:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_dlmx_ref_clkdiv2_s cn70xx;
	struct cvmx_gserx_dlmx_ref_clkdiv2_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_ref_clkdiv2 cvmx_gserx_dlmx_ref_clkdiv2_t;

union cvmx_gserx_dlmx_ref_ssp_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_ref_ssp_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t ref_ssp_en:1;
#else
		uint64_t ref_ssp_en:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_dlmx_ref_ssp_en_s cn70xx;
	struct cvmx_gserx_dlmx_ref_ssp_en_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_ref_ssp_en cvmx_gserx_dlmx_ref_ssp_en_t;

union cvmx_gserx_dlmx_ref_use_pad {
	uint64_t u64;
	struct cvmx_gserx_dlmx_ref_use_pad_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t ref_use_pad:1;
#else
		uint64_t ref_use_pad:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_dlmx_ref_use_pad_s cn70xx;
	struct cvmx_gserx_dlmx_ref_use_pad_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_ref_use_pad cvmx_gserx_dlmx_ref_use_pad_t;

union cvmx_gserx_dlmx_refclk_sel {
	uint64_t u64;
	struct cvmx_gserx_dlmx_refclk_sel_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t refclk_sel:1;
#else
		uint64_t refclk_sel:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_dlmx_refclk_sel_s cn70xx;
	struct cvmx_gserx_dlmx_refclk_sel_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_refclk_sel cvmx_gserx_dlmx_refclk_sel_t;

union cvmx_gserx_dlmx_rx_data_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_data_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t rx1_data_en:1;
		uint64_t reserved_1_7:7;
		uint64_t rx0_data_en:1;
#else
		uint64_t rx0_data_en:1;
		uint64_t reserved_1_7:7;
		uint64_t rx1_data_en:1;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_data_en_s cn70xx;
	struct cvmx_gserx_dlmx_rx_data_en_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_data_en cvmx_gserx_dlmx_rx_data_en_t;

union cvmx_gserx_dlmx_rx_eq {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_eq_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_11_63:53;
		uint64_t rx1_eq:3;
		uint64_t reserved_3_7:5;
		uint64_t rx0_eq:3;
#else
		uint64_t rx0_eq:3;
		uint64_t reserved_3_7:5;
		uint64_t rx1_eq:3;
		uint64_t reserved_11_63:53;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_eq_s cn70xx;
	struct cvmx_gserx_dlmx_rx_eq_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_eq cvmx_gserx_dlmx_rx_eq_t;

union cvmx_gserx_dlmx_rx_los_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_los_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t rx1_los_en:1;
		uint64_t reserved_1_7:7;
		uint64_t rx0_los_en:1;
#else
		uint64_t rx0_los_en:1;
		uint64_t reserved_1_7:7;
		uint64_t rx1_los_en:1;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_los_en_s cn70xx;
	struct cvmx_gserx_dlmx_rx_los_en_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_los_en cvmx_gserx_dlmx_rx_los_en_t;

union cvmx_gserx_dlmx_rx_pll_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_pll_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t rx1_pll_en:1;
		uint64_t reserved_1_7:7;
		uint64_t rx0_pll_en:1;
#else
		uint64_t rx0_pll_en:1;
		uint64_t reserved_1_7:7;
		uint64_t rx1_pll_en:1;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_pll_en_s cn70xx;
	struct cvmx_gserx_dlmx_rx_pll_en_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_pll_en cvmx_gserx_dlmx_rx_pll_en_t;

union cvmx_gserx_dlmx_rx_rate {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_rate_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t rx1_rate:2;
		uint64_t reserved_2_7:6;
		uint64_t rx0_rate:2;
#else
		uint64_t rx0_rate:2;
		uint64_t reserved_2_7:6;
		uint64_t rx1_rate:2;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_rate_s cn70xx;
	struct cvmx_gserx_dlmx_rx_rate_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_rate cvmx_gserx_dlmx_rx_rate_t;

union cvmx_gserx_dlmx_rx_reset {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_reset_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t rx1_reset:1;
		uint64_t reserved_1_7:7;
		uint64_t rx0_reset:1;
#else
		uint64_t rx0_reset:1;
		uint64_t reserved_1_7:7;
		uint64_t rx1_reset:1;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_reset_s cn70xx;
	struct cvmx_gserx_dlmx_rx_reset_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_reset cvmx_gserx_dlmx_rx_reset_t;

union cvmx_gserx_dlmx_rx_status {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t rx1_status:1;
		uint64_t reserved_1_7:7;
		uint64_t rx0_status:1;
#else
		uint64_t rx0_status:1;
		uint64_t reserved_1_7:7;
		uint64_t rx1_status:1;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_status_s cn70xx;
	struct cvmx_gserx_dlmx_rx_status_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_status cvmx_gserx_dlmx_rx_status_t;

union cvmx_gserx_dlmx_rx_term_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_term_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t rx1_term_en:1;
		uint64_t reserved_1_7:7;
		uint64_t rx0_term_en:1;
#else
		uint64_t rx0_term_en:1;
		uint64_t reserved_1_7:7;
		uint64_t rx1_term_en:1;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_term_en_s cn70xx;
	struct cvmx_gserx_dlmx_rx_term_en_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_rx_term_en cvmx_gserx_dlmx_rx_term_en_t;

union cvmx_gserx_dlmx_test_bypass {
	uint64_t u64;
	struct cvmx_gserx_dlmx_test_bypass_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t test_bypass:1;
#else
		uint64_t test_bypass:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_dlmx_test_bypass_s cn70xx;
	struct cvmx_gserx_dlmx_test_bypass_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_test_bypass cvmx_gserx_dlmx_test_bypass_t;

union cvmx_gserx_dlmx_test_powerdown {
	uint64_t u64;
	struct cvmx_gserx_dlmx_test_powerdown_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t test_powerdown:1;
#else
		uint64_t test_powerdown:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_dlmx_test_powerdown_s cn70xx;
	struct cvmx_gserx_dlmx_test_powerdown_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_test_powerdown cvmx_gserx_dlmx_test_powerdown_t;

union cvmx_gserx_dlmx_tx_amplitude {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_amplitude_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t tx1_amplitude:7;
		uint64_t reserved_7_7:1;
		uint64_t tx0_amplitude:7;
#else
		uint64_t tx0_amplitude:7;
		uint64_t reserved_7_7:1;
		uint64_t tx1_amplitude:7;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_amplitude_s cn70xx;
	struct cvmx_gserx_dlmx_tx_amplitude_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_amplitude cvmx_gserx_dlmx_tx_amplitude_t;

union cvmx_gserx_dlmx_tx_cm_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_cm_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t tx1_cm_en:1;
		uint64_t reserved_1_7:7;
		uint64_t tx0_cm_en:1;
#else
		uint64_t tx0_cm_en:1;
		uint64_t reserved_1_7:7;
		uint64_t tx1_cm_en:1;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_cm_en_s cn70xx;
	struct cvmx_gserx_dlmx_tx_cm_en_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_cm_en cvmx_gserx_dlmx_tx_cm_en_t;

union cvmx_gserx_dlmx_tx_data_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_data_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t tx1_data_en:1;
		uint64_t reserved_1_7:7;
		uint64_t tx0_data_en:1;
#else
		uint64_t tx0_data_en:1;
		uint64_t reserved_1_7:7;
		uint64_t tx1_data_en:1;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_data_en_s cn70xx;
	struct cvmx_gserx_dlmx_tx_data_en_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_data_en cvmx_gserx_dlmx_tx_data_en_t;

union cvmx_gserx_dlmx_tx_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t tx1_en:1;
		uint64_t reserved_1_7:7;
		uint64_t tx0_en:1;
#else
		uint64_t tx0_en:1;
		uint64_t reserved_1_7:7;
		uint64_t tx1_en:1;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_en_s cn70xx;
	struct cvmx_gserx_dlmx_tx_en_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_en cvmx_gserx_dlmx_tx_en_t;

union cvmx_gserx_dlmx_tx_preemph {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_preemph_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t tx1_preemph:7;
		uint64_t reserved_7_7:1;
		uint64_t tx0_preemph:7;
#else
		uint64_t tx0_preemph:7;
		uint64_t reserved_7_7:1;
		uint64_t tx1_preemph:7;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_preemph_s cn70xx;
	struct cvmx_gserx_dlmx_tx_preemph_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_preemph cvmx_gserx_dlmx_tx_preemph_t;

union cvmx_gserx_dlmx_tx_rate {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_rate_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t tx1_rate:2;
		uint64_t reserved_2_7:6;
		uint64_t tx0_rate:2;
#else
		uint64_t tx0_rate:2;
		uint64_t reserved_2_7:6;
		uint64_t tx1_rate:2;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_rate_s cn70xx;
	struct cvmx_gserx_dlmx_tx_rate_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_rate cvmx_gserx_dlmx_tx_rate_t;

union cvmx_gserx_dlmx_tx_reset {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_reset_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t tx1_reset:1;
		uint64_t reserved_1_7:7;
		uint64_t tx0_reset:1;
#else
		uint64_t tx0_reset:1;
		uint64_t reserved_1_7:7;
		uint64_t tx1_reset:1;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_reset_s cn70xx;
	struct cvmx_gserx_dlmx_tx_reset_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_reset cvmx_gserx_dlmx_tx_reset_t;

union cvmx_gserx_dlmx_tx_status {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t tx1_cm_status:1;
		uint64_t tx1_status:1;
		uint64_t reserved_2_7:6;
		uint64_t tx0_cm_status:1;
		uint64_t tx0_status:1;
#else
		uint64_t tx0_status:1;
		uint64_t tx0_cm_status:1;
		uint64_t reserved_2_7:6;
		uint64_t tx1_status:1;
		uint64_t tx1_cm_status:1;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_status_s cn70xx;
	struct cvmx_gserx_dlmx_tx_status_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_status cvmx_gserx_dlmx_tx_status_t;

union cvmx_gserx_dlmx_tx_term_offset {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_term_offset_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_13_63:51;
		uint64_t tx1_term_offset:5;
		uint64_t reserved_5_7:3;
		uint64_t tx0_term_offset:5;
#else
		uint64_t tx0_term_offset:5;
		uint64_t reserved_5_7:3;
		uint64_t tx1_term_offset:5;
		uint64_t reserved_13_63:51;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_term_offset_s cn70xx;
	struct cvmx_gserx_dlmx_tx_term_offset_s cn70xxp1;
};
typedef union cvmx_gserx_dlmx_tx_term_offset cvmx_gserx_dlmx_tx_term_offset_t;

union cvmx_gserx_eq_wait_time {
	uint64_t u64;
	struct cvmx_gserx_eq_wait_time_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t rxeq_wait_cnt:4;
		uint64_t txeq_wait_cnt:4;
#else
		uint64_t txeq_wait_cnt:4;
		uint64_t rxeq_wait_cnt:4;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_gserx_eq_wait_time_s cn73xx;
	struct cvmx_gserx_eq_wait_time_s cn75xx;
	struct cvmx_gserx_eq_wait_time_s cn78xx;
	struct cvmx_gserx_eq_wait_time_s cn78xxp2;
};
typedef union cvmx_gserx_eq_wait_time cvmx_gserx_eq_wait_time_t;

union cvmx_gserx_glbl_pll_monitor {
	uint64_t u64;
	struct cvmx_gserx_glbl_pll_monitor_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t sds_pcs_glbl_status:6;
		uint64_t sds_pcs_pll_lock:1;
		uint64_t sds_pcs_clock_ready:1;
		uint64_t sds_pcs_pll_calstates:5;
		uint64_t sds_pcs_pll_caldone:1;
#else
		uint64_t sds_pcs_pll_caldone:1;
		uint64_t sds_pcs_pll_calstates:5;
		uint64_t sds_pcs_clock_ready:1;
		uint64_t sds_pcs_pll_lock:1;
		uint64_t sds_pcs_glbl_status:6;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_gserx_glbl_pll_monitor_s cn73xx;
	struct cvmx_gserx_glbl_pll_monitor_s cn75xx;
	struct cvmx_gserx_glbl_pll_monitor_s cn78xx;
	struct cvmx_gserx_glbl_pll_monitor_s cn78xxp2;
};
typedef union cvmx_gserx_glbl_pll_monitor cvmx_gserx_glbl_pll_monitor_t;

union cvmx_gserx_glbl_tad {
	uint64_t u64;
	struct cvmx_gserx_glbl_tad_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t pcs_sds_tad_8_5:4;
		uint64_t pcs_sds_tad_4_0:5;
#else
		uint64_t pcs_sds_tad_4_0:5;
		uint64_t pcs_sds_tad_8_5:4;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_glbl_tad_s cn73xx;
	struct cvmx_gserx_glbl_tad_s cn75xx;
	struct cvmx_gserx_glbl_tad_s cn78xx;
	struct cvmx_gserx_glbl_tad_s cn78xxp2;
};
typedef union cvmx_gserx_glbl_tad cvmx_gserx_glbl_tad_t;

union cvmx_gserx_glbl_tm_admon {
	uint64_t u64;
	struct cvmx_gserx_glbl_tm_admon_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t amon_on:1;
		uint64_t dmon_on:1;
		uint64_t reserved_3_5:3;
		uint64_t lsel:3;
#else
		uint64_t lsel:3;
		uint64_t reserved_3_5:3;
		uint64_t dmon_on:1;
		uint64_t amon_on:1;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_gserx_glbl_tm_admon_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t amon_on:1;
		uint64_t dmon_on:1;
		uint64_t reserved_5_3:3;
		uint64_t lsel:3;
#else
		uint64_t lsel:3;
		uint64_t reserved_5_3:3;
		uint64_t dmon_on:1;
		uint64_t amon_on:1;
		uint64_t reserved_8_63:56;
#endif
	} cn73xx;
	struct cvmx_gserx_glbl_tm_admon_cn73xx cn75xx;
	struct cvmx_gserx_glbl_tm_admon_s cn78xx;
	struct cvmx_gserx_glbl_tm_admon_s cn78xxp2;
};
typedef union cvmx_gserx_glbl_tm_admon cvmx_gserx_glbl_tm_admon_t;

union cvmx_gserx_iddq_mode {
	uint64_t u64;
	struct cvmx_gserx_iddq_mode_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t phy_iddq_mode:1;
#else
		uint64_t phy_iddq_mode:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_iddq_mode_s cn73xx;
	struct cvmx_gserx_iddq_mode_s cn75xx;
	struct cvmx_gserx_iddq_mode_s cn78xx;
	struct cvmx_gserx_iddq_mode_s cn78xxp2;
};
typedef union cvmx_gserx_iddq_mode cvmx_gserx_iddq_mode_t;

union cvmx_gserx_lanex_lbert_cfg {
	uint64_t u64;
	struct cvmx_gserx_lanex_lbert_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t lbert_pg_err_insert:1;
		uint64_t lbert_pm_sync_start:1;
		uint64_t lbert_pg_en:1;
		uint64_t lbert_pg_width:2;
		uint64_t lbert_pg_mode:4;
		uint64_t lbert_pm_en:1;
		uint64_t lbert_pm_width:2;
		uint64_t lbert_pm_mode:4;
#else
		uint64_t lbert_pm_mode:4;
		uint64_t lbert_pm_width:2;
		uint64_t lbert_pm_en:1;
		uint64_t lbert_pg_mode:4;
		uint64_t lbert_pg_width:2;
		uint64_t lbert_pg_en:1;
		uint64_t lbert_pm_sync_start:1;
		uint64_t lbert_pg_err_insert:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_lbert_cfg_s cn73xx;
	struct cvmx_gserx_lanex_lbert_cfg_s cn75xx;
	struct cvmx_gserx_lanex_lbert_cfg_s cn78xx;
	struct cvmx_gserx_lanex_lbert_cfg_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_lbert_cfg cvmx_gserx_lanex_lbert_cfg_t;

union cvmx_gserx_lanex_lbert_ecnt {
	uint64_t u64;
	struct cvmx_gserx_lanex_lbert_ecnt_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t lbert_err_ovbit14:1;
		uint64_t lbert_err_cnt:15;
#else
		uint64_t lbert_err_cnt:15;
		uint64_t lbert_err_ovbit14:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_lbert_ecnt_s cn73xx;
	struct cvmx_gserx_lanex_lbert_ecnt_s cn75xx;
	struct cvmx_gserx_lanex_lbert_ecnt_s cn78xx;
	struct cvmx_gserx_lanex_lbert_ecnt_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_lbert_ecnt cvmx_gserx_lanex_lbert_ecnt_t;

union cvmx_gserx_lanex_lbert_pat_cfg {
	uint64_t u64;
	struct cvmx_gserx_lanex_lbert_pat_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t lbert_pg_pat:10;
#else
		uint64_t lbert_pg_pat:10;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_gserx_lanex_lbert_pat_cfg_s cn73xx;
	struct cvmx_gserx_lanex_lbert_pat_cfg_s cn75xx;
	struct cvmx_gserx_lanex_lbert_pat_cfg_s cn78xx;
	struct cvmx_gserx_lanex_lbert_pat_cfg_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_lbert_pat_cfg cvmx_gserx_lanex_lbert_pat_cfg_t;

union cvmx_gserx_lanex_misc_cfg_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_misc_cfg_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t use_pma_polarity:1;
		uint64_t cfg_pcs_loopback:1;
		uint64_t pcs_tx_mode_ovrrd_en:1;
		uint64_t pcs_rx_mode_ovrrd_en:1;
		uint64_t cfg_eie_det_cnt:4;
		uint64_t eie_det_stl_on_time:3;
		uint64_t eie_det_stl_off_time:3;
		uint64_t tx_bit_order:1;
		uint64_t rx_bit_order:1;
#else
		uint64_t rx_bit_order:1;
		uint64_t tx_bit_order:1;
		uint64_t eie_det_stl_off_time:3;
		uint64_t eie_det_stl_on_time:3;
		uint64_t cfg_eie_det_cnt:4;
		uint64_t pcs_rx_mode_ovrrd_en:1;
		uint64_t pcs_tx_mode_ovrrd_en:1;
		uint64_t cfg_pcs_loopback:1;
		uint64_t use_pma_polarity:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_misc_cfg_0_s cn73xx;
	struct cvmx_gserx_lanex_misc_cfg_0_s cn75xx;
	struct cvmx_gserx_lanex_misc_cfg_0_s cn78xx;
	struct cvmx_gserx_lanex_misc_cfg_0_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_misc_cfg_0 cvmx_gserx_lanex_misc_cfg_0_t;

union cvmx_gserx_lanex_misc_cfg_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_misc_cfg_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_13_63:51;
		uint64_t par_tx_init:1;
		uint64_t tx_polarity:1;
		uint64_t rx_polarity_ovrrd_en:1;
		uint64_t rx_polarity_ovrrd_val:1;
		uint64_t reserved_2_8:7;
		uint64_t mac_tx_fifo_rd_ptr_ival:2;
#else
		uint64_t mac_tx_fifo_rd_ptr_ival:2;
		uint64_t reserved_2_8:7;
		uint64_t rx_polarity_ovrrd_val:1;
		uint64_t rx_polarity_ovrrd_en:1;
		uint64_t tx_polarity:1;
		uint64_t par_tx_init:1;
		uint64_t reserved_13_63:51;
#endif
	} s;
	struct cvmx_gserx_lanex_misc_cfg_1_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_13_63:51;
		uint64_t par_tx_init:1;
		uint64_t tx_polarity:1;
		uint64_t rx_polarity_ovrrd_en:1;
		uint64_t rx_polarity_ovrrd_val:1;
		uint64_t reserved_8_2:7;
		uint64_t mac_tx_fifo_rd_ptr_ival:2;
#else
		uint64_t mac_tx_fifo_rd_ptr_ival:2;
		uint64_t reserved_8_2:7;
		uint64_t rx_polarity_ovrrd_val:1;
		uint64_t rx_polarity_ovrrd_en:1;
		uint64_t tx_polarity:1;
		uint64_t par_tx_init:1;
		uint64_t reserved_13_63:51;
#endif
	} cn73xx;
	struct cvmx_gserx_lanex_misc_cfg_1_cn73xx cn75xx;
	struct cvmx_gserx_lanex_misc_cfg_1_cn73xx cn78xx;
	struct cvmx_gserx_lanex_misc_cfg_1_cn73xx cn78xxp2;
};
typedef union cvmx_gserx_lanex_misc_cfg_1 cvmx_gserx_lanex_misc_cfg_1_t;

union cvmx_gserx_lanex_pcs_ctlifc_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_pcs_ctlifc_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t cfg_tx_vboost_en_ovrrd_val:1;

		uint64_t cfg_tx_coeff_req_ovrrd_val:1;

		uint64_t cfg_rx_cdr_coast_req_ovrrd_val:1;

		uint64_t cfg_tx_detrx_en_req_ovrrd_val:1;

		uint64_t cfg_soft_reset_req_ovrrd_val:1;

		uint64_t cfg_lane_pwr_off_ovrrd_val:1;

		uint64_t cfg_tx_mode_ovrrd_val:2;
		uint64_t cfg_tx_pstate_req_ovrrd_val:2;

		uint64_t cfg_lane_mode_req_ovrrd_val:4;

#else
		uint64_t cfg_lane_mode_req_ovrrd_val:4;
		uint64_t cfg_tx_pstate_req_ovrrd_val:2;
		uint64_t cfg_tx_mode_ovrrd_val:2;
		uint64_t cfg_lane_pwr_off_ovrrd_val:1;
		uint64_t cfg_soft_reset_req_ovrrd_val:1;
		uint64_t cfg_tx_detrx_en_req_ovrrd_val:1;
		uint64_t cfg_rx_cdr_coast_req_ovrrd_val:1;
		uint64_t cfg_tx_coeff_req_ovrrd_val:1;
		uint64_t cfg_tx_vboost_en_ovrrd_val:1;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_gserx_lanex_pcs_ctlifc_0_s cn73xx;
	struct cvmx_gserx_lanex_pcs_ctlifc_0_s cn75xx;
	struct cvmx_gserx_lanex_pcs_ctlifc_0_s cn78xx;
	struct cvmx_gserx_lanex_pcs_ctlifc_0_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_pcs_ctlifc_0 cvmx_gserx_lanex_pcs_ctlifc_0_t;

union cvmx_gserx_lanex_pcs_ctlifc_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_pcs_ctlifc_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t cfg_rx_pstate_req_ovrrd_val:2;

		uint64_t reserved_2_6:5;
		uint64_t cfg_rx_mode_ovrrd_val:2;
#else
		uint64_t cfg_rx_mode_ovrrd_val:2;
		uint64_t reserved_2_6:5;
		uint64_t cfg_rx_pstate_req_ovrrd_val:2;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_lanex_pcs_ctlifc_1_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t cfg_rx_pstate_req_ovrrd_val:2;

		uint64_t reserved_6_2:5;
		uint64_t cfg_rx_mode_ovrrd_val:2;
#else
		uint64_t cfg_rx_mode_ovrrd_val:2;
		uint64_t reserved_6_2:5;
		uint64_t cfg_rx_pstate_req_ovrrd_val:2;
		uint64_t reserved_9_63:55;
#endif
	} cn73xx;
	struct cvmx_gserx_lanex_pcs_ctlifc_1_cn73xx cn75xx;
	struct cvmx_gserx_lanex_pcs_ctlifc_1_s cn78xx;
	struct cvmx_gserx_lanex_pcs_ctlifc_1_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_pcs_ctlifc_1 cvmx_gserx_lanex_pcs_ctlifc_1_t;

union cvmx_gserx_lanex_pcs_ctlifc_2 {
	uint64_t u64;
	struct cvmx_gserx_lanex_pcs_ctlifc_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t ctlifc_ovrrd_req:1;
		uint64_t reserved_9_14:6;
		uint64_t cfg_tx_vboost_en_ovrrd_en:1;

		uint64_t cfg_tx_coeff_req_ovrrd_en:1;

		uint64_t cfg_rx_cdr_coast_req_ovrrd_en:1;

		uint64_t cfg_tx_detrx_en_req_ovrrd_en:1;

		uint64_t cfg_soft_reset_req_ovrrd_en:1;

		uint64_t cfg_lane_pwr_off_ovrrd_en:1;

		uint64_t cfg_tx_pstate_req_ovrrd_en:1;

		uint64_t cfg_rx_pstate_req_ovrrd_en:1;

		uint64_t cfg_lane_mode_req_ovrrd_en:1;

#else
		uint64_t cfg_lane_mode_req_ovrrd_en:1;
		uint64_t cfg_rx_pstate_req_ovrrd_en:1;
		uint64_t cfg_tx_pstate_req_ovrrd_en:1;
		uint64_t cfg_lane_pwr_off_ovrrd_en:1;
		uint64_t cfg_soft_reset_req_ovrrd_en:1;
		uint64_t cfg_tx_detrx_en_req_ovrrd_en:1;
		uint64_t cfg_rx_cdr_coast_req_ovrrd_en:1;
		uint64_t cfg_tx_coeff_req_ovrrd_en:1;
		uint64_t cfg_tx_vboost_en_ovrrd_en:1;
		uint64_t reserved_9_14:6;
		uint64_t ctlifc_ovrrd_req:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_pcs_ctlifc_2_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t ctlifc_ovrrd_req:1;
		uint64_t reserved_14_9:6;
		uint64_t cfg_tx_vboost_en_ovrrd_en:1;

		uint64_t cfg_tx_coeff_req_ovrrd_en:1;

		uint64_t cfg_rx_cdr_coast_req_ovrrd_en:1;

		uint64_t cfg_tx_detrx_en_req_ovrrd_en:1;

		uint64_t cfg_soft_reset_req_ovrrd_en:1;

		uint64_t cfg_lane_pwr_off_ovrrd_en:1;

		uint64_t cfg_tx_pstate_req_ovrrd_en:1;

		uint64_t cfg_rx_pstate_req_ovrrd_en:1;

		uint64_t cfg_lane_mode_req_ovrrd_en:1;

#else
		uint64_t cfg_lane_mode_req_ovrrd_en:1;
		uint64_t cfg_rx_pstate_req_ovrrd_en:1;
		uint64_t cfg_tx_pstate_req_ovrrd_en:1;
		uint64_t cfg_lane_pwr_off_ovrrd_en:1;
		uint64_t cfg_soft_reset_req_ovrrd_en:1;
		uint64_t cfg_tx_detrx_en_req_ovrrd_en:1;
		uint64_t cfg_rx_cdr_coast_req_ovrrd_en:1;
		uint64_t cfg_tx_coeff_req_ovrrd_en:1;
		uint64_t cfg_tx_vboost_en_ovrrd_en:1;
		uint64_t reserved_14_9:6;
		uint64_t ctlifc_ovrrd_req:1;
		uint64_t reserved_16_63:48;
#endif
	} cn73xx;
	struct cvmx_gserx_lanex_pcs_ctlifc_2_cn73xx cn75xx;
	struct cvmx_gserx_lanex_pcs_ctlifc_2_s cn78xx;
	struct cvmx_gserx_lanex_pcs_ctlifc_2_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_pcs_ctlifc_2 cvmx_gserx_lanex_pcs_ctlifc_2_t;

union cvmx_gserx_lanex_pma_loopback_ctrl {
	uint64_t u64;
	struct cvmx_gserx_lanex_pma_loopback_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t cfg_ln_lpbk_mode_ovrrd_en:1;

		uint64_t cfg_ln_lpbk_mode:1;
#else
		uint64_t cfg_ln_lpbk_mode:1;
		uint64_t cfg_ln_lpbk_mode_ovrrd_en:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_gserx_lanex_pma_loopback_ctrl_s cn73xx;
	struct cvmx_gserx_lanex_pma_loopback_ctrl_s cn75xx;
	struct cvmx_gserx_lanex_pma_loopback_ctrl_s cn78xx;
	struct cvmx_gserx_lanex_pma_loopback_ctrl_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_pma_loopback_ctrl cvmx_gserx_lanex_pma_loopback_ctrl_t;

union cvmx_gserx_lanex_pwr_ctrl {
	uint64_t u64;
	struct cvmx_gserx_lanex_pwr_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t tx_sds_fifo_reset_ovrrd_en:1;

		uint64_t tx_sds_fifo_reset_ovrrd_val:1;

		uint64_t tx_pcs_reset_ovrrd_val:1;
		uint64_t rx_pcs_reset_ovrrd_val:1;
		uint64_t reserved_9_10:2;
		uint64_t rx_resetn_ovrrd_en:1;
		uint64_t rx_resetn_ovrrd_val:1;
		uint64_t rx_lctrl_ovrrd_en:1;
		uint64_t rx_lctrl_ovrrd_val:1;
		uint64_t tx_tristate_en_ovrrd_en:1;
		uint64_t tx_pcs_reset_ovrrd_en:1;
		uint64_t tx_elec_idle_ovrrd_en:1;
		uint64_t tx_pd_ovrrd_en:1;
		uint64_t tx_p2s_resetn_ovrrd_en:1;
#else
		uint64_t tx_p2s_resetn_ovrrd_en:1;
		uint64_t tx_pd_ovrrd_en:1;
		uint64_t tx_elec_idle_ovrrd_en:1;
		uint64_t tx_pcs_reset_ovrrd_en:1;
		uint64_t tx_tristate_en_ovrrd_en:1;
		uint64_t rx_lctrl_ovrrd_val:1;
		uint64_t rx_lctrl_ovrrd_en:1;
		uint64_t rx_resetn_ovrrd_val:1;
		uint64_t rx_resetn_ovrrd_en:1;
		uint64_t reserved_9_10:2;
		uint64_t rx_pcs_reset_ovrrd_val:1;
		uint64_t tx_pcs_reset_ovrrd_val:1;
		uint64_t tx_sds_fifo_reset_ovrrd_val:1;
		uint64_t tx_sds_fifo_reset_ovrrd_en:1;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_gserx_lanex_pwr_ctrl_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t tx_sds_fifo_reset_ovrrd_en:1;

		uint64_t tx_sds_fifo_reset_ovrrd_val:1;

		uint64_t tx_pcs_reset_ovrrd_val:1;
		uint64_t rx_pcs_reset_ovrrd_val:1;
		uint64_t reserved_10_9:2;
		uint64_t rx_resetn_ovrrd_en:1;
		uint64_t rx_resetn_ovrrd_val:1;
		uint64_t rx_lctrl_ovrrd_en:1;
		uint64_t rx_lctrl_ovrrd_val:1;
		uint64_t tx_tristate_en_ovrrd_en:1;
		uint64_t tx_pcs_reset_ovrrd_en:1;
		uint64_t tx_elec_idle_ovrrd_en:1;
		uint64_t tx_pd_ovrrd_en:1;
		uint64_t tx_p2s_resetn_ovrrd_en:1;
#else
		uint64_t tx_p2s_resetn_ovrrd_en:1;
		uint64_t tx_pd_ovrrd_en:1;
		uint64_t tx_elec_idle_ovrrd_en:1;
		uint64_t tx_pcs_reset_ovrrd_en:1;
		uint64_t tx_tristate_en_ovrrd_en:1;
		uint64_t rx_lctrl_ovrrd_val:1;
		uint64_t rx_lctrl_ovrrd_en:1;
		uint64_t rx_resetn_ovrrd_val:1;
		uint64_t rx_resetn_ovrrd_en:1;
		uint64_t reserved_10_9:2;
		uint64_t rx_pcs_reset_ovrrd_val:1;
		uint64_t tx_pcs_reset_ovrrd_val:1;
		uint64_t tx_sds_fifo_reset_ovrrd_val:1;
		uint64_t tx_sds_fifo_reset_ovrrd_en:1;
		uint64_t reserved_15_63:49;
#endif
	} cn73xx;
	struct cvmx_gserx_lanex_pwr_ctrl_cn73xx cn75xx;
	struct cvmx_gserx_lanex_pwr_ctrl_s cn78xx;
	struct cvmx_gserx_lanex_pwr_ctrl_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_pwr_ctrl cvmx_gserx_lanex_pwr_ctrl_t;

union cvmx_gserx_lanex_rx_aeq_out_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_aeq_out_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t sds_pcs_rx_aeq_out:10;
#else
		uint64_t sds_pcs_rx_aeq_out:10;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_aeq_out_0_s cn73xx;
	struct cvmx_gserx_lanex_rx_aeq_out_0_s cn75xx;
	struct cvmx_gserx_lanex_rx_aeq_out_0_s cn78xx;
	struct cvmx_gserx_lanex_rx_aeq_out_0_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_aeq_out_0 cvmx_gserx_lanex_rx_aeq_out_0_t;

union cvmx_gserx_lanex_rx_aeq_out_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_aeq_out_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t sds_pcs_rx_aeq_out:15;
#else
		uint64_t sds_pcs_rx_aeq_out:15;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_aeq_out_1_s cn73xx;
	struct cvmx_gserx_lanex_rx_aeq_out_1_s cn75xx;
	struct cvmx_gserx_lanex_rx_aeq_out_1_s cn78xx;
	struct cvmx_gserx_lanex_rx_aeq_out_1_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_aeq_out_1 cvmx_gserx_lanex_rx_aeq_out_1_t;

union cvmx_gserx_lanex_rx_aeq_out_2 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_aeq_out_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t sds_pcs_rx_aeq_out:15;
#else
		uint64_t sds_pcs_rx_aeq_out:15;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_aeq_out_2_s cn73xx;
	struct cvmx_gserx_lanex_rx_aeq_out_2_s cn75xx;
	struct cvmx_gserx_lanex_rx_aeq_out_2_s cn78xx;
	struct cvmx_gserx_lanex_rx_aeq_out_2_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_aeq_out_2 cvmx_gserx_lanex_rx_aeq_out_2_t;

union cvmx_gserx_lanex_rx_cdr_ctrl_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cdr_ctrl_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t cfg_rx_cdr_ctrl_ovrrd_val:16;

#else
		uint64_t cfg_rx_cdr_ctrl_ovrrd_val:16;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cdr_ctrl_1_s cn73xx;
	struct cvmx_gserx_lanex_rx_cdr_ctrl_1_s cn75xx;
	struct cvmx_gserx_lanex_rx_cdr_ctrl_1_s cn78xx;
	struct cvmx_gserx_lanex_rx_cdr_ctrl_1_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_cdr_ctrl_1 cvmx_gserx_lanex_rx_cdr_ctrl_1_t;

union cvmx_gserx_lanex_rx_cdr_ctrl_2 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cdr_ctrl_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t cfg_rx_cdr_ctrl_ovrrd_val:16;

#else
		uint64_t cfg_rx_cdr_ctrl_ovrrd_val:16;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cdr_ctrl_2_s cn73xx;
	struct cvmx_gserx_lanex_rx_cdr_ctrl_2_s cn75xx;
	struct cvmx_gserx_lanex_rx_cdr_ctrl_2_s cn78xx;
	struct cvmx_gserx_lanex_rx_cdr_ctrl_2_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_cdr_ctrl_2 cvmx_gserx_lanex_rx_cdr_ctrl_2_t;

union cvmx_gserx_lanex_rx_cdr_misc_ctrl_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cdr_misc_ctrl_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t pcs_sds_rx_cdr_misc_ctrl:8;
#else
		uint64_t pcs_sds_rx_cdr_misc_ctrl:8;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cdr_misc_ctrl_0_s cn73xx;
	struct cvmx_gserx_lanex_rx_cdr_misc_ctrl_0_s cn75xx;
	struct cvmx_gserx_lanex_rx_cdr_misc_ctrl_0_s cn78xx;
	struct cvmx_gserx_lanex_rx_cdr_misc_ctrl_0_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_cdr_misc_ctrl_0 cvmx_gserx_lanex_rx_cdr_misc_ctrl_0_t;

union cvmx_gserx_lanex_rx_cdr_status_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cdr_status_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t sds_pcs_rx_cdr_status:15;
#else
		uint64_t sds_pcs_rx_cdr_status:15;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cdr_status_1_s cn73xx;
	struct cvmx_gserx_lanex_rx_cdr_status_1_s cn75xx;
	struct cvmx_gserx_lanex_rx_cdr_status_1_s cn78xx;
	struct cvmx_gserx_lanex_rx_cdr_status_1_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_cdr_status_1 cvmx_gserx_lanex_rx_cdr_status_1_t;

union cvmx_gserx_lanex_rx_cdr_status_2 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cdr_status_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t sds_pcs_rx_cdr_status:14;
#else
		uint64_t sds_pcs_rx_cdr_status:14;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cdr_status_2_s cn73xx;
	struct cvmx_gserx_lanex_rx_cdr_status_2_s cn75xx;
	struct cvmx_gserx_lanex_rx_cdr_status_2_s cn78xx;
	struct cvmx_gserx_lanex_rx_cdr_status_2_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_cdr_status_2 cvmx_gserx_lanex_rx_cdr_status_2_t;

union cvmx_gserx_lanex_rx_cfg_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cfg_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t rx_datarate_ovrrd_en:1;
		uint64_t reserved_14_14:1;
		uint64_t rx_resetn_ovvrd_val:1;
		uint64_t pcs_sds_rx_eyemon_en:1;
		uint64_t pcs_sds_rx_pcm_ctrl:4;
		uint64_t rx_datarate_ovrrd_val:2;
		uint64_t cfg_rx_pol_invert:1;
		uint64_t rx_subblk_pd_ovrrd_val:5;
#else
		uint64_t rx_subblk_pd_ovrrd_val:5;
		uint64_t cfg_rx_pol_invert:1;
		uint64_t rx_datarate_ovrrd_val:2;
		uint64_t pcs_sds_rx_pcm_ctrl:4;
		uint64_t pcs_sds_rx_eyemon_en:1;
		uint64_t rx_resetn_ovvrd_val:1;
		uint64_t reserved_14_14:1;
		uint64_t rx_datarate_ovrrd_en:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cfg_0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t rx_datarate_ovrrd_en:1;
		uint64_t pcs_rx_tristate_enable:1;
		uint64_t rx_resetn_ovvrd_val:1;
		uint64_t pcs_sds_rx_eyemon_en:1;
		uint64_t pcs_sds_rx_pcm_ctrl:4;
		uint64_t rx_datarate_ovrrd_val:2;
		uint64_t cfg_rx_pol_invert:1;
		uint64_t rx_subblk_pd_ovrrd_val:5;
#else
		uint64_t rx_subblk_pd_ovrrd_val:5;
		uint64_t cfg_rx_pol_invert:1;
		uint64_t rx_datarate_ovrrd_val:2;
		uint64_t pcs_sds_rx_pcm_ctrl:4;
		uint64_t pcs_sds_rx_eyemon_en:1;
		uint64_t rx_resetn_ovvrd_val:1;
		uint64_t pcs_rx_tristate_enable:1;
		uint64_t rx_datarate_ovrrd_en:1;
		uint64_t reserved_16_63:48;
#endif
	} cn73xx;
	struct cvmx_gserx_lanex_rx_cfg_0_cn73xx cn75xx;
	struct cvmx_gserx_lanex_rx_cfg_0_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t rx_datarate_ovrrd_en:1;
		uint64_t pcs_sds_rx_tristate_enable:1;

		uint64_t rx_resetn_ovvrd_val:1;
		uint64_t pcs_sds_rx_eyemon_en:1;
		uint64_t pcs_sds_rx_pcm_ctrl:4;
		uint64_t rx_datarate_ovrrd_val:2;
		uint64_t cfg_rx_pol_invert:1;
		uint64_t rx_subblk_pd_ovrrd_val:5;
#else
		uint64_t rx_subblk_pd_ovrrd_val:5;
		uint64_t cfg_rx_pol_invert:1;
		uint64_t rx_datarate_ovrrd_val:2;
		uint64_t pcs_sds_rx_pcm_ctrl:4;
		uint64_t pcs_sds_rx_eyemon_en:1;
		uint64_t rx_resetn_ovvrd_val:1;
		uint64_t pcs_sds_rx_tristate_enable:1;
		uint64_t rx_datarate_ovrrd_en:1;
		uint64_t reserved_16_63:48;
#endif
	} cn78xx;
	struct cvmx_gserx_lanex_rx_cfg_0_cn78xx cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_cfg_0 cvmx_gserx_lanex_rx_cfg_0_t;

union cvmx_gserx_lanex_rx_cfg_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cfg_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t rx_chpd_ovrrd_val:1;
		uint64_t pcs_sds_rx_os_men:1;
		uint64_t eie_en_ovvrd_en:1;
		uint64_t eie_en_ovvrd_val:1;
		uint64_t reserved_11_11:1;
		uint64_t rx_pcie_mode_ovvrd_en:1;
		uint64_t rx_pcie_mode_ovvrd_val:1;
		uint64_t cfg_rx_dll_locken:1;
		uint64_t pcs_sds_rx_cdr_ssc_mode:8;
#else
		uint64_t pcs_sds_rx_cdr_ssc_mode:8;
		uint64_t cfg_rx_dll_locken:1;
		uint64_t rx_pcie_mode_ovvrd_val:1;
		uint64_t rx_pcie_mode_ovvrd_en:1;
		uint64_t reserved_11_11:1;
		uint64_t eie_en_ovvrd_val:1;
		uint64_t eie_en_ovvrd_en:1;
		uint64_t pcs_sds_rx_os_men:1;
		uint64_t rx_chpd_ovrrd_val:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cfg_1_s cn73xx;
	struct cvmx_gserx_lanex_rx_cfg_1_s cn75xx;
	struct cvmx_gserx_lanex_rx_cfg_1_s cn78xx;
	struct cvmx_gserx_lanex_rx_cfg_1_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_cfg_1 cvmx_gserx_lanex_rx_cfg_1_t;

union cvmx_gserx_lanex_rx_cfg_2 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cfg_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t pcs_sds_rx_terminate_to_vdda:1;

		uint64_t pcs_sds_rx_sampler_boost:2;
		uint64_t pcs_sds_rx_sampler_boost_en:1;

		uint64_t reserved_10_10:1;
		uint64_t rx_sds_rx_agc_mval:10;
#else
		uint64_t rx_sds_rx_agc_mval:10;
		uint64_t reserved_10_10:1;
		uint64_t pcs_sds_rx_sampler_boost_en:1;
		uint64_t pcs_sds_rx_sampler_boost:2;
		uint64_t pcs_sds_rx_terminate_to_vdda:1;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cfg_2_s cn73xx;
	struct cvmx_gserx_lanex_rx_cfg_2_s cn75xx;
	struct cvmx_gserx_lanex_rx_cfg_2_s cn78xx;
	struct cvmx_gserx_lanex_rx_cfg_2_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_cfg_2 cvmx_gserx_lanex_rx_cfg_2_t;

union cvmx_gserx_lanex_rx_cfg_3 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cfg_3_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t cfg_rx_errdet_ctrl:16;
#else
		uint64_t cfg_rx_errdet_ctrl:16;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cfg_3_s cn73xx;
	struct cvmx_gserx_lanex_rx_cfg_3_s cn75xx;
	struct cvmx_gserx_lanex_rx_cfg_3_s cn78xx;
	struct cvmx_gserx_lanex_rx_cfg_3_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_cfg_3 cvmx_gserx_lanex_rx_cfg_3_t;

union cvmx_gserx_lanex_rx_cfg_4 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cfg_4_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t cfg_rx_errdet_ctrl:16;
#else
		uint64_t cfg_rx_errdet_ctrl:16;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cfg_4_s cn73xx;
	struct cvmx_gserx_lanex_rx_cfg_4_s cn75xx;
	struct cvmx_gserx_lanex_rx_cfg_4_s cn78xx;
	struct cvmx_gserx_lanex_rx_cfg_4_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_cfg_4 cvmx_gserx_lanex_rx_cfg_4_t;

union cvmx_gserx_lanex_rx_cfg_5 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_cfg_5_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_5_63:59;
		uint64_t rx_agc_men_ovvrd_en:1;
		uint64_t rx_agc_men_ovvrd_val:1;
		uint64_t rx_widthsel_ovvrd_en:1;
		uint64_t rx_widthsel_ovvrd_val:2;
#else
		uint64_t rx_widthsel_ovvrd_val:2;
		uint64_t rx_widthsel_ovvrd_en:1;
		uint64_t rx_agc_men_ovvrd_val:1;
		uint64_t rx_agc_men_ovvrd_en:1;
		uint64_t reserved_5_63:59;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_cfg_5_s cn73xx;
	struct cvmx_gserx_lanex_rx_cfg_5_s cn75xx;
	struct cvmx_gserx_lanex_rx_cfg_5_s cn78xx;
	struct cvmx_gserx_lanex_rx_cfg_5_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_cfg_5 cvmx_gserx_lanex_rx_cfg_5_t;

union cvmx_gserx_lanex_rx_ctle_ctrl {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_ctle_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t pcs_sds_rx_ctle_bias_ctrl:2;

		uint64_t pcs_sds_rx_ctle_zero:4;
		uint64_t rx_ctle_pole_ovrrd_en:1;
		uint64_t rx_ctle_pole_ovrrd_val:4;
		uint64_t pcs_sds_rx_ctle_pole_max:2;
		uint64_t pcs_sds_rx_ctle_pole_min:2;
		uint64_t pcs_sds_rx_ctle_pole_step:1;

#else
		uint64_t pcs_sds_rx_ctle_pole_step:1;
		uint64_t pcs_sds_rx_ctle_pole_min:2;
		uint64_t pcs_sds_rx_ctle_pole_max:2;
		uint64_t rx_ctle_pole_ovrrd_val:4;
		uint64_t rx_ctle_pole_ovrrd_en:1;
		uint64_t pcs_sds_rx_ctle_zero:4;
		uint64_t pcs_sds_rx_ctle_bias_ctrl:2;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_ctle_ctrl_s cn73xx;
	struct cvmx_gserx_lanex_rx_ctle_ctrl_s cn75xx;
	struct cvmx_gserx_lanex_rx_ctle_ctrl_s cn78xx;
	struct cvmx_gserx_lanex_rx_ctle_ctrl_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_ctle_ctrl cvmx_gserx_lanex_rx_ctle_ctrl_t;

union cvmx_gserx_lanex_rx_loop_ctrl {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_loop_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t fast_dll_lock:1;
		uint64_t fast_ofst_cncl:1;
		uint64_t cfg_rx_lctrl:10;
#else
		uint64_t cfg_rx_lctrl:10;
		uint64_t fast_ofst_cncl:1;
		uint64_t fast_dll_lock:1;
		uint64_t reserved_12_63:52;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_loop_ctrl_s cn73xx;
	struct cvmx_gserx_lanex_rx_loop_ctrl_s cn75xx;
	struct cvmx_gserx_lanex_rx_loop_ctrl_s cn78xx;
	struct cvmx_gserx_lanex_rx_loop_ctrl_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_loop_ctrl cvmx_gserx_lanex_rx_loop_ctrl_t;

union cvmx_gserx_lanex_rx_misc_ovrrd {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_misc_ovrrd_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t cfg_rx_oob_clk_en_ovrrd_val:1;

		uint64_t cfg_rx_oob_clk_en_ovrrd_en:1;

		uint64_t cfg_rx_eie_det_ovrrd_val:1;
		uint64_t cfg_rx_eie_det_ovrrd_en:1;
		uint64_t cfg_rx_cdr_ctrl_ovvrd_en:1;
		uint64_t cfg_rx_eq_eval_ovrrd_val:1;
		uint64_t cfg_rx_eq_eval_ovrrd_en:1;
		uint64_t reserved_6_6:1;
		uint64_t cfg_rx_dll_locken_ovvrd_en:1;

		uint64_t cfg_rx_errdet_ctrl_ovvrd_en:1;

		uint64_t reserved_1_3:3;
		uint64_t cfg_rxeq_eval_restore_en:1;
#else
		uint64_t cfg_rxeq_eval_restore_en:1;
		uint64_t reserved_1_3:3;
		uint64_t cfg_rx_errdet_ctrl_ovvrd_en:1;
		uint64_t cfg_rx_dll_locken_ovvrd_en:1;
		uint64_t reserved_6_6:1;
		uint64_t cfg_rx_eq_eval_ovrrd_en:1;
		uint64_t cfg_rx_eq_eval_ovrrd_val:1;
		uint64_t cfg_rx_cdr_ctrl_ovvrd_en:1;
		uint64_t cfg_rx_eie_det_ovrrd_en:1;
		uint64_t cfg_rx_eie_det_ovrrd_val:1;
		uint64_t cfg_rx_oob_clk_en_ovrrd_en:1;
		uint64_t cfg_rx_oob_clk_en_ovrrd_val:1;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_misc_ovrrd_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t cfg_rx_oob_clk_en_ovrrd_val:1;

		uint64_t cfg_rx_oob_clk_en_ovrrd_en:1;

		uint64_t cfg_rx_eie_det_ovrrd_val:1;
		uint64_t cfg_rx_eie_det_ovrrd_en:1;
		uint64_t cfg_rx_cdr_ctrl_ovvrd_en:1;
		uint64_t cfg_rx_eq_eval_ovrrd_val:1;
		uint64_t cfg_rx_eq_eval_ovrrd_en:1;
		uint64_t reserved_6_6:1;
		uint64_t cfg_rx_dll_locken_ovvrd_en:1;

		uint64_t cfg_rx_errdet_ctrl_ovvrd_en:1;

		uint64_t reserved_3_1:3;
		uint64_t cfg_rxeq_eval_restore_en:1;
#else
		uint64_t cfg_rxeq_eval_restore_en:1;
		uint64_t reserved_3_1:3;
		uint64_t cfg_rx_errdet_ctrl_ovvrd_en:1;
		uint64_t cfg_rx_dll_locken_ovvrd_en:1;
		uint64_t reserved_6_6:1;
		uint64_t cfg_rx_eq_eval_ovrrd_en:1;
		uint64_t cfg_rx_eq_eval_ovrrd_val:1;
		uint64_t cfg_rx_cdr_ctrl_ovvrd_en:1;
		uint64_t cfg_rx_eie_det_ovrrd_en:1;
		uint64_t cfg_rx_eie_det_ovrrd_val:1;
		uint64_t cfg_rx_oob_clk_en_ovrrd_en:1;
		uint64_t cfg_rx_oob_clk_en_ovrrd_val:1;
		uint64_t reserved_14_63:50;
#endif
	} cn73xx;
	struct cvmx_gserx_lanex_rx_misc_ovrrd_cn73xx cn75xx;
	struct cvmx_gserx_lanex_rx_misc_ovrrd_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t cfg_rx_oob_clk_en_ovrrd_val:1;

		uint64_t cfg_rx_oob_clk_en_ovrrd_en:1;

		uint64_t cfg_rx_eie_det_ovrrd_val:1;
		uint64_t cfg_rx_eie_det_ovrrd_en:1;
		uint64_t cfg_rx_cdr_ctrl_ovvrd_en:1;
		uint64_t cfg_rx_eq_eval_ovrrd_val:1;
		uint64_t cfg_rx_eq_eval_ovrrd_en:1;
		uint64_t reserved_6_6:1;
		uint64_t cfg_rx_dll_locken_ovvrd_en:1;

		uint64_t cfg_rx_errdet_ctrl_ovvrd_en:1;

		uint64_t reserved_0_3:4;
#else
		uint64_t reserved_0_3:4;
		uint64_t cfg_rx_errdet_ctrl_ovvrd_en:1;
		uint64_t cfg_rx_dll_locken_ovvrd_en:1;
		uint64_t reserved_6_6:1;
		uint64_t cfg_rx_eq_eval_ovrrd_en:1;
		uint64_t cfg_rx_eq_eval_ovrrd_val:1;
		uint64_t cfg_rx_cdr_ctrl_ovvrd_en:1;
		uint64_t cfg_rx_eie_det_ovrrd_en:1;
		uint64_t cfg_rx_eie_det_ovrrd_val:1;
		uint64_t cfg_rx_oob_clk_en_ovrrd_en:1;
		uint64_t cfg_rx_oob_clk_en_ovrrd_val:1;
		uint64_t reserved_14_63:50;
#endif
	} cn78xx;
	struct cvmx_gserx_lanex_rx_misc_ovrrd_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_misc_ovrrd cvmx_gserx_lanex_rx_misc_ovrrd_t;

union cvmx_gserx_lanex_rx_precorr_ctrl {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_precorr_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_5_63:59;
		uint64_t rx_precorr_disable:1;
		uint64_t rx_precorr_en_ovrrd_en:1;
		uint64_t rx_precorr_en_ovrrd_val:1;
		uint64_t pcs_sds_rx_precorr_scnt_ctrl:2;

#else
		uint64_t pcs_sds_rx_precorr_scnt_ctrl:2;
		uint64_t rx_precorr_en_ovrrd_val:1;
		uint64_t rx_precorr_en_ovrrd_en:1;
		uint64_t rx_precorr_disable:1;
		uint64_t reserved_5_63:59;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_precorr_ctrl_s cn73xx;
	struct cvmx_gserx_lanex_rx_precorr_ctrl_s cn75xx;
	struct cvmx_gserx_lanex_rx_precorr_ctrl_s cn78xx;
	struct cvmx_gserx_lanex_rx_precorr_ctrl_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_precorr_ctrl cvmx_gserx_lanex_rx_precorr_ctrl_t;

union cvmx_gserx_lanex_rx_precorr_val {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_precorr_val_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_13_63:51;
		uint64_t sds_pcs_rx_precorr_vld:1;
		uint64_t sds_pcs_rx_precorr_cnt:12;
#else
		uint64_t sds_pcs_rx_precorr_cnt:12;
		uint64_t sds_pcs_rx_precorr_vld:1;
		uint64_t reserved_13_63:51;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_precorr_val_s cn73xx;
	struct cvmx_gserx_lanex_rx_precorr_val_s cn75xx;
	struct cvmx_gserx_lanex_rx_precorr_val_s cn78xx;
	struct cvmx_gserx_lanex_rx_precorr_val_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_precorr_val cvmx_gserx_lanex_rx_precorr_val_t;

union cvmx_gserx_lanex_rx_valbbd_ctrl_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t agc_gain:2;
		uint64_t dfe_gain:2;
		uint64_t dfe_c5_mval:4;
		uint64_t dfe_c5_msgn:1;
		uint64_t dfe_c4_mval:4;
		uint64_t dfe_c4_msgn:1;
#else
		uint64_t dfe_c4_msgn:1;
		uint64_t dfe_c4_mval:4;
		uint64_t dfe_c5_msgn:1;
		uint64_t dfe_c5_mval:4;
		uint64_t dfe_gain:2;
		uint64_t agc_gain:2;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_0_s cn73xx;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_0_s cn75xx;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_0_s cn78xx;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_0_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_valbbd_ctrl_0 cvmx_gserx_lanex_rx_valbbd_ctrl_0_t;

union cvmx_gserx_lanex_rx_valbbd_ctrl_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t dfe_c3_mval:4;
		uint64_t dfe_c3_msgn:1;
		uint64_t dfe_c2_mval:4;
		uint64_t dfe_c2_msgn:1;
		uint64_t dfe_c1_mval:4;
		uint64_t dfe_c1_msgn:1;
#else
		uint64_t dfe_c1_msgn:1;
		uint64_t dfe_c1_mval:4;
		uint64_t dfe_c2_msgn:1;
		uint64_t dfe_c2_mval:4;
		uint64_t dfe_c3_msgn:1;
		uint64_t dfe_c3_mval:4;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_1_s cn73xx;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_1_s cn75xx;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_1_s cn78xx;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_1_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_valbbd_ctrl_1 cvmx_gserx_lanex_rx_valbbd_ctrl_1_t;

union cvmx_gserx_lanex_rx_valbbd_ctrl_2 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_6_63:58;
		uint64_t dfe_ovrd_en:1;
		uint64_t dfe_c5_ovrd_val:1;
		uint64_t dfe_c4_ovrd_val:1;
		uint64_t dfe_c3_ovrd_val:1;
		uint64_t dfe_c2_ovrd_val:1;
		uint64_t dfe_c1_ovrd_val:1;
#else
		uint64_t dfe_c1_ovrd_val:1;
		uint64_t dfe_c2_ovrd_val:1;
		uint64_t dfe_c3_ovrd_val:1;
		uint64_t dfe_c4_ovrd_val:1;
		uint64_t dfe_c5_ovrd_val:1;
		uint64_t dfe_ovrd_en:1;
		uint64_t reserved_6_63:58;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_2_s cn73xx;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_2_s cn75xx;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_2_s cn78xx;
	struct cvmx_gserx_lanex_rx_valbbd_ctrl_2_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_valbbd_ctrl_2 cvmx_gserx_lanex_rx_valbbd_ctrl_2_t;

union cvmx_gserx_lanex_rx_vma_ctrl {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_vma_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t vma_fine_cfg_sel_ovrrd_en:1;

		uint64_t vma_fine_cfg_sel_ovrrd_val:1;

		uint64_t rx_fom_div_delta:1;
		uint64_t rx_vna_ctrl_18_16:3;
		uint64_t rx_vna_ctrl_9_0:10;
#else
		uint64_t rx_vna_ctrl_9_0:10;
		uint64_t rx_vna_ctrl_18_16:3;
		uint64_t rx_fom_div_delta:1;
		uint64_t vma_fine_cfg_sel_ovrrd_val:1;
		uint64_t vma_fine_cfg_sel_ovrrd_en:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_vma_ctrl_s cn73xx;
	struct cvmx_gserx_lanex_rx_vma_ctrl_s cn75xx;
	struct cvmx_gserx_lanex_rx_vma_ctrl_s cn78xx;
	struct cvmx_gserx_lanex_rx_vma_ctrl_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_vma_ctrl cvmx_gserx_lanex_rx_vma_ctrl_t;

union cvmx_gserx_lanex_rx_vma_status_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_vma_status_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t sds_pcs_rx_vma_status:8;
#else
		uint64_t sds_pcs_rx_vma_status:8;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_vma_status_0_s cn73xx;
	struct cvmx_gserx_lanex_rx_vma_status_0_s cn75xx;
	struct cvmx_gserx_lanex_rx_vma_status_0_s cn78xx;
	struct cvmx_gserx_lanex_rx_vma_status_0_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_vma_status_0 cvmx_gserx_lanex_rx_vma_status_0_t;

union cvmx_gserx_lanex_rx_vma_status_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_rx_vma_status_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t sds_pcs_rx_vma_status:16;
#else
		uint64_t sds_pcs_rx_vma_status:16;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_rx_vma_status_1_s cn73xx;
	struct cvmx_gserx_lanex_rx_vma_status_1_s cn75xx;
	struct cvmx_gserx_lanex_rx_vma_status_1_s cn78xx;
	struct cvmx_gserx_lanex_rx_vma_status_1_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_rx_vma_status_1 cvmx_gserx_lanex_rx_vma_status_1_t;

union cvmx_gserx_lanex_sds_pin_mon_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_sds_pin_mon_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t pcs_sds_tx_widthsel:2;
		uint64_t pcs_sds_rx_pcie_mode:1;
		uint64_t reserved_5_6:2;
		uint64_t pcs_sds_rx_misc_ctrl_5:1;
		uint64_t tx_detrx_state:2;
		uint64_t pcs_sds_tx_rx_detect_dis:1;
		uint64_t pcs_sds_tx_detect_pulsen:1;
#else
		uint64_t pcs_sds_tx_detect_pulsen:1;
		uint64_t pcs_sds_tx_rx_detect_dis:1;
		uint64_t tx_detrx_state:2;
		uint64_t pcs_sds_rx_misc_ctrl_5:1;
		uint64_t reserved_5_6:2;
		uint64_t pcs_sds_rx_pcie_mode:1;
		uint64_t pcs_sds_tx_widthsel:2;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_gserx_lanex_sds_pin_mon_0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t pcs_sds_tx_widthsel:2;
		uint64_t pcs_sds_rx_pcie_mode:1;
		uint64_t reserved_6_5:2;
		uint64_t pcs_sds_rx_misc_ctrl_5:1;
		uint64_t tx_detrx_state:2;
		uint64_t pcs_sds_tx_rx_detect_dis:1;
		uint64_t pcs_sds_tx_detect_pulsen:1;
#else
		uint64_t pcs_sds_tx_detect_pulsen:1;
		uint64_t pcs_sds_tx_rx_detect_dis:1;
		uint64_t tx_detrx_state:2;
		uint64_t pcs_sds_rx_misc_ctrl_5:1;
		uint64_t reserved_6_5:2;
		uint64_t pcs_sds_rx_pcie_mode:1;
		uint64_t pcs_sds_tx_widthsel:2;
		uint64_t reserved_10_63:54;
#endif
	} cn73xx;
	struct cvmx_gserx_lanex_sds_pin_mon_0_cn73xx cn75xx;
	struct cvmx_gserx_lanex_sds_pin_mon_0_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_sds_pin_mon_0 cvmx_gserx_lanex_sds_pin_mon_0_t;

union cvmx_gserx_lanex_sds_pin_mon_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_sds_pin_mon_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t pcs_sds_rx_chpd:1;
		uint64_t pcs_sds_rx_eie_en:1;
		uint64_t reserved_13_13:1;
		uint64_t pcs_sds_ln_loopback_mode:1;
		uint64_t pcs_sds_tx_chpd:1;
		uint64_t pcs_sds_rx_widthsel:2;
		uint64_t reserved_8_8:1;
		uint64_t pcs_sds_tx_resetn:1;
		uint64_t pcs_sds_tx_tristate_en:1;
		uint64_t pcs_sds_tx_swing:5;
		uint64_t pcs_sds_tx_elec_idle:1;
#else
		uint64_t pcs_sds_tx_elec_idle:1;
		uint64_t pcs_sds_tx_swing:5;
		uint64_t pcs_sds_tx_tristate_en:1;
		uint64_t pcs_sds_tx_resetn:1;
		uint64_t reserved_8_8:1;
		uint64_t pcs_sds_rx_widthsel:2;
		uint64_t pcs_sds_tx_chpd:1;
		uint64_t pcs_sds_ln_loopback_mode:1;
		uint64_t reserved_13_13:1;
		uint64_t pcs_sds_rx_eie_en:1;
		uint64_t pcs_sds_rx_chpd:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_sds_pin_mon_1_s cn73xx;
	struct cvmx_gserx_lanex_sds_pin_mon_1_s cn75xx;
	struct cvmx_gserx_lanex_sds_pin_mon_1_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_sds_pin_mon_1 cvmx_gserx_lanex_sds_pin_mon_1_t;

union cvmx_gserx_lanex_sds_pin_mon_2 {
	uint64_t u64;
	struct cvmx_gserx_lanex_sds_pin_mon_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_11_63:53;
		uint64_t pcs_sds_tx_vboost_en:1;
		uint64_t pcs_sds_tx_turbos_en:1;
		uint64_t pcs_sds_premptap:9;
#else
		uint64_t pcs_sds_premptap:9;
		uint64_t pcs_sds_tx_turbos_en:1;
		uint64_t pcs_sds_tx_vboost_en:1;
		uint64_t reserved_11_63:53;
#endif
	} s;
	struct cvmx_gserx_lanex_sds_pin_mon_2_s cn73xx;
	struct cvmx_gserx_lanex_sds_pin_mon_2_s cn75xx;
	struct cvmx_gserx_lanex_sds_pin_mon_2_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_sds_pin_mon_2 cvmx_gserx_lanex_sds_pin_mon_2_t;

union cvmx_gserx_lanex_tx_cfg_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_tx_cfg_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t tx_tristate_en_ovrd_val:1;
		uint64_t tx_chpd_ovrd_val:1;
		uint64_t reserved_10_13:4;
		uint64_t tx_resetn_ovrd_val:1;
		uint64_t tx_cm_mode:1;
		uint64_t cfg_tx_swing:5;
		uint64_t fast_rdet_mode:1;
		uint64_t fast_tristate_mode:1;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t fast_tristate_mode:1;
		uint64_t fast_rdet_mode:1;
		uint64_t cfg_tx_swing:5;
		uint64_t tx_cm_mode:1;
		uint64_t tx_resetn_ovrd_val:1;
		uint64_t reserved_10_13:4;
		uint64_t tx_chpd_ovrd_val:1;
		uint64_t tx_tristate_en_ovrd_val:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_tx_cfg_0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t tx_tristate_en_ovrd_val:1;
		uint64_t tx_chpd_ovrd_val:1;
		uint64_t reserved_13_10:4;
		uint64_t tx_resetn_ovrd_val:1;
		uint64_t tx_cm_mode:1;
		uint64_t cfg_tx_swing:5;
		uint64_t fast_rdet_mode:1;
		uint64_t fast_tristate_mode:1;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t fast_tristate_mode:1;
		uint64_t fast_rdet_mode:1;
		uint64_t cfg_tx_swing:5;
		uint64_t tx_cm_mode:1;
		uint64_t tx_resetn_ovrd_val:1;
		uint64_t reserved_13_10:4;
		uint64_t tx_chpd_ovrd_val:1;
		uint64_t tx_tristate_en_ovrd_val:1;
		uint64_t reserved_16_63:48;
#endif
	} cn73xx;
	struct cvmx_gserx_lanex_tx_cfg_0_cn73xx cn75xx;
	struct cvmx_gserx_lanex_tx_cfg_0_s cn78xx;
	struct cvmx_gserx_lanex_tx_cfg_0_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_tx_cfg_0 cvmx_gserx_lanex_tx_cfg_0_t;

union cvmx_gserx_lanex_tx_cfg_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_tx_cfg_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t tx_widthsel_ovrd_en:1;
		uint64_t tx_widthsel_ovrd_val:2;
		uint64_t tx_vboost_en_ovrrd_en:1;
		uint64_t tx_turbo_en_ovrrd_en:1;
		uint64_t tx_swing_ovrd_en:1;
		uint64_t tx_premptap_ovrd_val:1;
		uint64_t tx_elec_idle_ovrrd_en:1;
		uint64_t smpl_rate_ovrd_en:1;
		uint64_t smpl_rate_ovrd_val:3;
		uint64_t tx_datarate_ovrd_en:1;
		uint64_t tx_datarate_ovrd_val:2;
#else
		uint64_t tx_datarate_ovrd_val:2;
		uint64_t tx_datarate_ovrd_en:1;
		uint64_t smpl_rate_ovrd_val:3;
		uint64_t smpl_rate_ovrd_en:1;
		uint64_t tx_elec_idle_ovrrd_en:1;
		uint64_t tx_premptap_ovrd_val:1;
		uint64_t tx_swing_ovrd_en:1;
		uint64_t tx_turbo_en_ovrrd_en:1;
		uint64_t tx_vboost_en_ovrrd_en:1;
		uint64_t tx_widthsel_ovrd_val:2;
		uint64_t tx_widthsel_ovrd_en:1;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_gserx_lanex_tx_cfg_1_s cn73xx;
	struct cvmx_gserx_lanex_tx_cfg_1_s cn75xx;
	struct cvmx_gserx_lanex_tx_cfg_1_s cn78xx;
	struct cvmx_gserx_lanex_tx_cfg_1_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_tx_cfg_1 cvmx_gserx_lanex_tx_cfg_1_t;

union cvmx_gserx_lanex_tx_cfg_2 {
	uint64_t u64;
	struct cvmx_gserx_lanex_tx_cfg_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t pcs_sds_tx_dcc_en:1;
		uint64_t reserved_3_14:12;
		uint64_t rcvr_test_ovrd_en:1;
		uint64_t rcvr_test_ovrd_val:1;
		uint64_t tx_rx_detect_dis_ovrd_val:1;

#else
		uint64_t tx_rx_detect_dis_ovrd_val:1;
		uint64_t rcvr_test_ovrd_val:1;
		uint64_t rcvr_test_ovrd_en:1;
		uint64_t reserved_3_14:12;
		uint64_t pcs_sds_tx_dcc_en:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lanex_tx_cfg_2_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t pcs_sds_tx_dcc_en:1;
		uint64_t reserved_14_3:12;
		uint64_t rcvr_test_ovrd_en:1;
		uint64_t rcvr_test_ovrd_val:1;
		uint64_t tx_rx_detect_dis_ovrd_val:1;

#else
		uint64_t tx_rx_detect_dis_ovrd_val:1;
		uint64_t rcvr_test_ovrd_val:1;
		uint64_t rcvr_test_ovrd_en:1;
		uint64_t reserved_14_3:12;
		uint64_t pcs_sds_tx_dcc_en:1;
		uint64_t reserved_16_63:48;
#endif
	} cn73xx;
	struct cvmx_gserx_lanex_tx_cfg_2_cn73xx cn75xx;
	struct cvmx_gserx_lanex_tx_cfg_2_s cn78xx;
	struct cvmx_gserx_lanex_tx_cfg_2_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_tx_cfg_2 cvmx_gserx_lanex_tx_cfg_2_t;

union cvmx_gserx_lanex_tx_cfg_3 {
	uint64_t u64;
	struct cvmx_gserx_lanex_tx_cfg_3_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t cfg_tx_vboost_en:1;
		uint64_t reserved_7_13:7;
		uint64_t pcs_sds_tx_gain:3;
		uint64_t pcs_sds_tx_srate_sel:3;
		uint64_t cfg_tx_turbo_en:1;
#else
		uint64_t cfg_tx_turbo_en:1;
		uint64_t pcs_sds_tx_srate_sel:3;
		uint64_t pcs_sds_tx_gain:3;
		uint64_t reserved_7_13:7;
		uint64_t cfg_tx_vboost_en:1;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_gserx_lanex_tx_cfg_3_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t cfg_tx_vboost_en:1;
		uint64_t reserved_13_7:7;
		uint64_t pcs_sds_tx_gain:3;
		uint64_t pcs_sds_tx_srate_sel:3;
		uint64_t cfg_tx_turbo_en:1;
#else
		uint64_t cfg_tx_turbo_en:1;
		uint64_t pcs_sds_tx_srate_sel:3;
		uint64_t pcs_sds_tx_gain:3;
		uint64_t reserved_13_7:7;
		uint64_t cfg_tx_vboost_en:1;
		uint64_t reserved_15_63:49;
#endif
	} cn73xx;
	struct cvmx_gserx_lanex_tx_cfg_3_cn73xx cn75xx;
	struct cvmx_gserx_lanex_tx_cfg_3_s cn78xx;
	struct cvmx_gserx_lanex_tx_cfg_3_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_tx_cfg_3 cvmx_gserx_lanex_tx_cfg_3_t;

union cvmx_gserx_lanex_tx_pre_emphasis {
	uint64_t u64;
	struct cvmx_gserx_lanex_tx_pre_emphasis_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t cfg_tx_premptap:9;
#else
		uint64_t cfg_tx_premptap:9;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_lanex_tx_pre_emphasis_s cn73xx;
	struct cvmx_gserx_lanex_tx_pre_emphasis_s cn75xx;
	struct cvmx_gserx_lanex_tx_pre_emphasis_s cn78xx;
	struct cvmx_gserx_lanex_tx_pre_emphasis_s cn78xxp2;
};
typedef union cvmx_gserx_lanex_tx_pre_emphasis cvmx_gserx_lanex_tx_pre_emphasis_t;

union cvmx_gserx_lane_lpbken {
	uint64_t u64;
	struct cvmx_gserx_lane_lpbken_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t lpbken:4;
#else
		uint64_t lpbken:4;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_gserx_lane_lpbken_s cn73xx;
	struct cvmx_gserx_lane_lpbken_s cn75xx;
	struct cvmx_gserx_lane_lpbken_s cn78xx;
	struct cvmx_gserx_lane_lpbken_s cn78xxp2;
};
typedef union cvmx_gserx_lane_lpbken cvmx_gserx_lane_lpbken_t;

union cvmx_gserx_lane_mode {
	uint64_t u64;
	struct cvmx_gserx_lane_mode_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t lmode:4;
#else
		uint64_t lmode:4;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_gserx_lane_mode_s cn73xx;
	struct cvmx_gserx_lane_mode_s cn75xx;
	struct cvmx_gserx_lane_mode_s cn78xx;
	struct cvmx_gserx_lane_mode_s cn78xxp2;
};
typedef union cvmx_gserx_lane_mode cvmx_gserx_lane_mode_t;

union cvmx_gserx_lane_px_mode_0 {
	uint64_t u64;
	struct cvmx_gserx_lane_px_mode_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t ctle:2;
		uint64_t pcie:1;
		uint64_t tx_ldiv:2;
		uint64_t rx_ldiv:2;
		uint64_t srate:3;
		uint64_t reserved_4_4:1;
		uint64_t tx_mode:2;
		uint64_t rx_mode:2;
#else
		uint64_t rx_mode:2;
		uint64_t tx_mode:2;
		uint64_t reserved_4_4:1;
		uint64_t srate:3;
		uint64_t rx_ldiv:2;
		uint64_t tx_ldiv:2;
		uint64_t pcie:1;
		uint64_t ctle:2;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_gserx_lane_px_mode_0_s cn73xx;
	struct cvmx_gserx_lane_px_mode_0_s cn75xx;
	struct cvmx_gserx_lane_px_mode_0_s cn78xx;
	struct cvmx_gserx_lane_px_mode_0_s cn78xxp2;
};
typedef union cvmx_gserx_lane_px_mode_0 cvmx_gserx_lane_px_mode_0_t;

union cvmx_gserx_lane_px_mode_1 {
	uint64_t u64;
	struct cvmx_gserx_lane_px_mode_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t vma_fine_cfg_sel:1;
		uint64_t vma_mm:1;
		uint64_t cdr_fgain:4;
		uint64_t ph_acc_adj:10;
#else
		uint64_t ph_acc_adj:10;
		uint64_t cdr_fgain:4;
		uint64_t vma_mm:1;
		uint64_t vma_fine_cfg_sel:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lane_px_mode_1_s cn73xx;
	struct cvmx_gserx_lane_px_mode_1_s cn75xx;
	struct cvmx_gserx_lane_px_mode_1_s cn78xx;
	struct cvmx_gserx_lane_px_mode_1_s cn78xxp2;
};
typedef union cvmx_gserx_lane_px_mode_1 cvmx_gserx_lane_px_mode_1_t;

union cvmx_gserx_lane_poff {
	uint64_t u64;
	struct cvmx_gserx_lane_poff_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t lpoff:4;
#else
		uint64_t lpoff:4;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_gserx_lane_poff_s cn73xx;
	struct cvmx_gserx_lane_poff_s cn75xx;
	struct cvmx_gserx_lane_poff_s cn78xx;
	struct cvmx_gserx_lane_poff_s cn78xxp2;
};
typedef union cvmx_gserx_lane_poff cvmx_gserx_lane_poff_t;

union cvmx_gserx_lane_srst {
	uint64_t u64;
	struct cvmx_gserx_lane_srst_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t lsrst:1;
#else
		uint64_t lsrst:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_lane_srst_s cn73xx;
	struct cvmx_gserx_lane_srst_s cn75xx;
	struct cvmx_gserx_lane_srst_s cn78xx;
	struct cvmx_gserx_lane_srst_s cn78xxp2;
};
typedef union cvmx_gserx_lane_srst cvmx_gserx_lane_srst_t;

union cvmx_gserx_lane_vma_coarse_ctrl_0 {
	uint64_t u64;
	struct cvmx_gserx_lane_vma_coarse_ctrl_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t iq_max:4;
		uint64_t iq_min:4;
		uint64_t iq_step:2;
		uint64_t window_wait:3;
		uint64_t lms_wait:3;
#else
		uint64_t lms_wait:3;
		uint64_t window_wait:3;
		uint64_t iq_step:2;
		uint64_t iq_min:4;
		uint64_t iq_max:4;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lane_vma_coarse_ctrl_0_s cn73xx;
	struct cvmx_gserx_lane_vma_coarse_ctrl_0_s cn75xx;
	struct cvmx_gserx_lane_vma_coarse_ctrl_0_s cn78xx;
	struct cvmx_gserx_lane_vma_coarse_ctrl_0_s cn78xxp2;
};
typedef union cvmx_gserx_lane_vma_coarse_ctrl_0 cvmx_gserx_lane_vma_coarse_ctrl_0_t;

union cvmx_gserx_lane_vma_coarse_ctrl_1 {
	uint64_t u64;
	struct cvmx_gserx_lane_vma_coarse_ctrl_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t ctle_pmax:4;
		uint64_t ctle_pmin:4;
		uint64_t ctle_pstep:2;
#else
		uint64_t ctle_pstep:2;
		uint64_t ctle_pmin:4;
		uint64_t ctle_pmax:4;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_gserx_lane_vma_coarse_ctrl_1_s cn73xx;
	struct cvmx_gserx_lane_vma_coarse_ctrl_1_s cn75xx;
	struct cvmx_gserx_lane_vma_coarse_ctrl_1_s cn78xx;
	struct cvmx_gserx_lane_vma_coarse_ctrl_1_s cn78xxp2;
};
typedef union cvmx_gserx_lane_vma_coarse_ctrl_1 cvmx_gserx_lane_vma_coarse_ctrl_1_t;

union cvmx_gserx_lane_vma_coarse_ctrl_2 {
	uint64_t u64;
	struct cvmx_gserx_lane_vma_coarse_ctrl_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t pctle_gmax:4;
		uint64_t pctle_gmin:4;
		uint64_t pctle_gstep:2;
#else
		uint64_t pctle_gstep:2;
		uint64_t pctle_gmin:4;
		uint64_t pctle_gmax:4;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_gserx_lane_vma_coarse_ctrl_2_s cn73xx;
	struct cvmx_gserx_lane_vma_coarse_ctrl_2_s cn75xx;
	struct cvmx_gserx_lane_vma_coarse_ctrl_2_s cn78xx;
	struct cvmx_gserx_lane_vma_coarse_ctrl_2_s cn78xxp2;
};
typedef union cvmx_gserx_lane_vma_coarse_ctrl_2 cvmx_gserx_lane_vma_coarse_ctrl_2_t;

union cvmx_gserx_lane_vma_fine_ctrl_0 {
	uint64_t u64;
	struct cvmx_gserx_lane_vma_fine_ctrl_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t rx_sdll_iq_max_fine:4;
		uint64_t rx_sdll_iq_min_fine:4;
		uint64_t rx_sdll_iq_step_fine:2;
		uint64_t vma_window_wait_fine:3;
		uint64_t lms_wait_time_fine:3;
#else
		uint64_t lms_wait_time_fine:3;
		uint64_t vma_window_wait_fine:3;
		uint64_t rx_sdll_iq_step_fine:2;
		uint64_t rx_sdll_iq_min_fine:4;
		uint64_t rx_sdll_iq_max_fine:4;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_lane_vma_fine_ctrl_0_s cn73xx;
	struct cvmx_gserx_lane_vma_fine_ctrl_0_s cn75xx;
	struct cvmx_gserx_lane_vma_fine_ctrl_0_s cn78xx;
	struct cvmx_gserx_lane_vma_fine_ctrl_0_s cn78xxp2;
};
typedef union cvmx_gserx_lane_vma_fine_ctrl_0 cvmx_gserx_lane_vma_fine_ctrl_0_t;

union cvmx_gserx_lane_vma_fine_ctrl_1 {
	uint64_t u64;
	struct cvmx_gserx_lane_vma_fine_ctrl_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t rx_ctle_peak_max_fine:4;
		uint64_t rx_ctle_peak_min_fine:4;
		uint64_t rx_ctle_peak_step_fine:2;
#else
		uint64_t rx_ctle_peak_step_fine:2;
		uint64_t rx_ctle_peak_min_fine:4;
		uint64_t rx_ctle_peak_max_fine:4;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_gserx_lane_vma_fine_ctrl_1_s cn73xx;
	struct cvmx_gserx_lane_vma_fine_ctrl_1_s cn75xx;
	struct cvmx_gserx_lane_vma_fine_ctrl_1_s cn78xx;
	struct cvmx_gserx_lane_vma_fine_ctrl_1_s cn78xxp2;
};
typedef union cvmx_gserx_lane_vma_fine_ctrl_1 cvmx_gserx_lane_vma_fine_ctrl_1_t;

union cvmx_gserx_lane_vma_fine_ctrl_2 {
	uint64_t u64;
	struct cvmx_gserx_lane_vma_fine_ctrl_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t rx_prectle_peak_max_fine:4;
		uint64_t rx_prectle_peak_min_fine:4;
		uint64_t rx_prectle_peak_step_fine:2;

#else
		uint64_t rx_prectle_peak_step_fine:2;
		uint64_t rx_prectle_peak_min_fine:4;
		uint64_t rx_prectle_peak_max_fine:4;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_gserx_lane_vma_fine_ctrl_2_s cn73xx;
	struct cvmx_gserx_lane_vma_fine_ctrl_2_s cn75xx;
	struct cvmx_gserx_lane_vma_fine_ctrl_2_s cn78xx;
	struct cvmx_gserx_lane_vma_fine_ctrl_2_s cn78xxp2;
};
typedef union cvmx_gserx_lane_vma_fine_ctrl_2 cvmx_gserx_lane_vma_fine_ctrl_2_t;

union cvmx_gserx_pcie_pcs_clk_req {
	uint64_t u64;
	struct cvmx_gserx_pcie_pcs_clk_req_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t clk_req:1;
#else
		uint64_t clk_req:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_pcie_pcs_clk_req_s cn70xx;
	struct cvmx_gserx_pcie_pcs_clk_req_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_pcs_clk_req cvmx_gserx_pcie_pcs_clk_req_t;

union cvmx_gserx_pcie_pipex_txdeemph {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipex_txdeemph_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t pipe_txdeemph:1;
#else
		uint64_t pipe_txdeemph:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_pcie_pipex_txdeemph_s cn70xx;
	struct cvmx_gserx_pcie_pipex_txdeemph_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipex_txdeemph cvmx_gserx_pcie_pipex_txdeemph_t;

union cvmx_gserx_pcie_pipe_com_clk {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_com_clk_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t com_clk:1;
#else
		uint64_t com_clk:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_com_clk_s cn70xx;
	struct cvmx_gserx_pcie_pipe_com_clk_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipe_com_clk cvmx_gserx_pcie_pipe_com_clk_t;

union cvmx_gserx_pcie_pipe_crst {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_crst_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t pipe_crst:1;
#else
		uint64_t pipe_crst:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_crst_s cn70xx;
	struct cvmx_gserx_pcie_pipe_crst_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipe_crst cvmx_gserx_pcie_pipe_crst_t;

union cvmx_gserx_pcie_pipe_port_loopbk {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_port_loopbk_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t pipe3_loopbk:1;
		uint64_t pipe2_loopbk:1;
		uint64_t pipe1_loopbk:1;
		uint64_t pipe0_loopbk:1;
#else
		uint64_t pipe0_loopbk:1;
		uint64_t pipe1_loopbk:1;
		uint64_t pipe2_loopbk:1;
		uint64_t pipe3_loopbk:1;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_port_loopbk_s cn70xx;
	struct cvmx_gserx_pcie_pipe_port_loopbk_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipe_port_loopbk cvmx_gserx_pcie_pipe_port_loopbk_t;

union cvmx_gserx_pcie_pipe_port_sel {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_port_sel_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_3_63:61;
		uint64_t cfg_pem1_dlm2:1;
		uint64_t pipe_port_sel:2;
#else
		uint64_t pipe_port_sel:2;
		uint64_t cfg_pem1_dlm2:1;
		uint64_t reserved_3_63:61;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_port_sel_s cn70xx;
	struct cvmx_gserx_pcie_pipe_port_sel_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipe_port_sel cvmx_gserx_pcie_pipe_port_sel_t;

union cvmx_gserx_pcie_pipe_rst {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_rst_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t pipe3_rst:1;
		uint64_t pipe2_rst:1;
		uint64_t pipe1_rst:1;
		uint64_t pipe0_rst:1;
#else
		uint64_t pipe0_rst:1;
		uint64_t pipe1_rst:1;
		uint64_t pipe2_rst:1;
		uint64_t pipe3_rst:1;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_rst_s cn70xx;
	struct cvmx_gserx_pcie_pipe_rst_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipe_rst cvmx_gserx_pcie_pipe_rst_t;

union cvmx_gserx_pcie_pipe_rst_sts {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_rst_sts_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t pipe3_rst:1;
		uint64_t pipe2_rst:1;
		uint64_t pipe1_rst:1;
		uint64_t pipe0_rst:1;
#else
		uint64_t pipe0_rst:1;
		uint64_t pipe1_rst:1;
		uint64_t pipe2_rst:1;
		uint64_t pipe3_rst:1;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_rst_sts_s cn70xx;
	struct cvmx_gserx_pcie_pipe_rst_sts_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipe_rst_sts cvmx_gserx_pcie_pipe_rst_sts_t;

union cvmx_gserx_pcie_pipe_status {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t pipe3_clkreqn:1;
		uint64_t pipe2_clkreqn:1;
		uint64_t pipe1_clkreqn:1;
		uint64_t pipe0_clkreqn:1;
#else
		uint64_t pipe0_clkreqn:1;
		uint64_t pipe1_clkreqn:1;
		uint64_t pipe2_clkreqn:1;
		uint64_t pipe3_clkreqn:1;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_status_s cn70xx;
	struct cvmx_gserx_pcie_pipe_status_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_pipe_status cvmx_gserx_pcie_pipe_status_t;

union cvmx_gserx_pcie_tx_deemph_gen1 {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_deemph_gen1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_6_63:58;
		uint64_t tx_deemph_gen1:6;
#else
		uint64_t tx_deemph_gen1:6;
		uint64_t reserved_6_63:58;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_deemph_gen1_s cn70xx;
	struct cvmx_gserx_pcie_tx_deemph_gen1_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_tx_deemph_gen1 cvmx_gserx_pcie_tx_deemph_gen1_t;

union cvmx_gserx_pcie_tx_deemph_gen2_3p5db {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_deemph_gen2_3p5db_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_6_63:58;
		uint64_t tx_deemph_gen2_3p5db:6;
#else
		uint64_t tx_deemph_gen2_3p5db:6;
		uint64_t reserved_6_63:58;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_deemph_gen2_3p5db_s cn70xx;
	struct cvmx_gserx_pcie_tx_deemph_gen2_3p5db_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_tx_deemph_gen2_3p5db cvmx_gserx_pcie_tx_deemph_gen2_3p5db_t;

union cvmx_gserx_pcie_tx_deemph_gen2_6db {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_deemph_gen2_6db_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_6_63:58;
		uint64_t tx_deemph_gen2_6db:6;
#else
		uint64_t tx_deemph_gen2_6db:6;
		uint64_t reserved_6_63:58;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_deemph_gen2_6db_s cn70xx;
	struct cvmx_gserx_pcie_tx_deemph_gen2_6db_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_tx_deemph_gen2_6db cvmx_gserx_pcie_tx_deemph_gen2_6db_t;

union cvmx_gserx_pcie_tx_swing_full {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_swing_full_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t tx_swing_hi:7;
#else
		uint64_t tx_swing_hi:7;
		uint64_t reserved_7_63:57;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_swing_full_s cn70xx;
	struct cvmx_gserx_pcie_tx_swing_full_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_tx_swing_full cvmx_gserx_pcie_tx_swing_full_t;

union cvmx_gserx_pcie_tx_swing_low {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_swing_low_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t tx_swing_lo:7;
#else
		uint64_t tx_swing_lo:7;
		uint64_t reserved_7_63:57;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_swing_low_s cn70xx;
	struct cvmx_gserx_pcie_tx_swing_low_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_tx_swing_low cvmx_gserx_pcie_tx_swing_low_t;

union cvmx_gserx_pcie_tx_vboost_lvl {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_vboost_lvl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_3_63:61;
		uint64_t tx_vboost_lvl:3;
#else
		uint64_t tx_vboost_lvl:3;
		uint64_t reserved_3_63:61;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_vboost_lvl_s cn70xx;
	struct cvmx_gserx_pcie_tx_vboost_lvl_s cn70xxp1;
};
typedef union cvmx_gserx_pcie_tx_vboost_lvl cvmx_gserx_pcie_tx_vboost_lvl_t;

union cvmx_gserx_phyx_idcode_hi {
	uint64_t u64;
	struct cvmx_gserx_phyx_idcode_hi_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t idcode_hi:16;
#else
		uint64_t idcode_hi:16;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_phyx_idcode_hi_s cn70xx;
	struct cvmx_gserx_phyx_idcode_hi_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_idcode_hi cvmx_gserx_phyx_idcode_hi_t;

union cvmx_gserx_phyx_idcode_lo {
	uint64_t u64;
	struct cvmx_gserx_phyx_idcode_lo_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t idcode_lo:16;
#else
		uint64_t idcode_lo:16;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_phyx_idcode_lo_s cn70xx;
	struct cvmx_gserx_phyx_idcode_lo_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_idcode_lo cvmx_gserx_phyx_idcode_lo_t;

union cvmx_gserx_phyx_lane0_loopback {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_loopback_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t ovrd_tx_lb:1;
		uint64_t tx_lb_en_reg:1;
		uint64_t atb_vptx:1;
		uint64_t atb_vreg_tx:1;
		uint64_t atb_vdccp:1;
		uint64_t atb_vdccm:1;
		uint64_t reserved_1_1:1;
		uint64_t sel_pmix_clk:1;
#else
		uint64_t sel_pmix_clk:1;
		uint64_t reserved_1_1:1;
		uint64_t atb_vdccm:1;
		uint64_t atb_vdccp:1;
		uint64_t atb_vreg_tx:1;
		uint64_t atb_vptx:1;
		uint64_t tx_lb_en_reg:1;
		uint64_t ovrd_tx_lb:1;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_loopback_s cn70xx;
	struct cvmx_gserx_phyx_lane0_loopback_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_loopback cvmx_gserx_phyx_lane0_loopback_t;

union cvmx_gserx_phyx_lane0_rx_lbert_ctl {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_rx_lbert_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_5_63:59;
		uint64_t sync:1;
		uint64_t mode:4;
#else
		uint64_t mode:4;
		uint64_t sync:1;
		uint64_t reserved_5_63:59;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_rx_lbert_ctl_s cn70xx;
	struct cvmx_gserx_phyx_lane0_rx_lbert_ctl_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_rx_lbert_ctl cvmx_gserx_phyx_lane0_rx_lbert_ctl_t;

union cvmx_gserx_phyx_lane0_rx_lbert_err {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_rx_lbert_err_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t ov14:1;
		uint64_t count:15;
#else
		uint64_t count:15;
		uint64_t ov14:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_rx_lbert_err_s cn70xx;
	struct cvmx_gserx_phyx_lane0_rx_lbert_err_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_rx_lbert_err cvmx_gserx_phyx_lane0_rx_lbert_err_t;

union cvmx_gserx_phyx_lane0_rx_ovrd_in_lo {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_rx_ovrd_in_lo_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t rx_los_en_ovrd:1;
		uint64_t rx_los_en:1;
		uint64_t rx_term_en_ovrd:1;
		uint64_t rx_term_en:1;
		uint64_t rx_bit_shift_ovrd:1;
		uint64_t rx_bit_shift_en:1;
		uint64_t rx_align_en_ovrd:1;
		uint64_t rx_align_en:1;
		uint64_t rx_data_en_ovrd:1;
		uint64_t rx_data_en:1;
		uint64_t rx_pll_en_ovrd:1;
		uint64_t rx_pll_en:1;
		uint64_t rx_invert_ovrd:1;
		uint64_t rx_invert:1;
#else
		uint64_t rx_invert:1;
		uint64_t rx_invert_ovrd:1;
		uint64_t rx_pll_en:1;
		uint64_t rx_pll_en_ovrd:1;
		uint64_t rx_data_en:1;
		uint64_t rx_data_en_ovrd:1;
		uint64_t rx_align_en:1;
		uint64_t rx_align_en_ovrd:1;
		uint64_t rx_bit_shift_en:1;
		uint64_t rx_bit_shift_ovrd:1;
		uint64_t rx_term_en:1;
		uint64_t rx_term_en_ovrd:1;
		uint64_t rx_los_en:1;
		uint64_t rx_los_en_ovrd:1;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_rx_ovrd_in_lo_s cn70xx;
	struct cvmx_gserx_phyx_lane0_rx_ovrd_in_lo_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_rx_ovrd_in_lo cvmx_gserx_phyx_lane0_rx_ovrd_in_lo_t;

union cvmx_gserx_phyx_lane0_tx_lbert_ctl {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_tx_lbert_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t pat0:10;
		uint64_t trig_err:1;
		uint64_t mode:4;
#else
		uint64_t mode:4;
		uint64_t trig_err:1;
		uint64_t pat0:10;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_tx_lbert_ctl_s cn70xx;
	struct cvmx_gserx_phyx_lane0_tx_lbert_ctl_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_tx_lbert_ctl cvmx_gserx_phyx_lane0_tx_lbert_ctl_t;

union cvmx_gserx_phyx_lane0_tx_ovrd_in_hi {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_tx_ovrd_in_hi_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t tx_vboost_en_ovrd:1;
		uint64_t tx_vboost_en:1;
		uint64_t tx_reset_ovrd:1;
		uint64_t tx_reset:1;
		uint64_t tx_nyquist_data:1;
		uint64_t tx_clk_out_en_ovrd:1;
		uint64_t tx_clk_out_en:1;
		uint64_t tx_rate_ovrd:1;
		uint64_t tx_rate:2;
#else
		uint64_t tx_rate:2;
		uint64_t tx_rate_ovrd:1;
		uint64_t tx_clk_out_en:1;
		uint64_t tx_clk_out_en_ovrd:1;
		uint64_t tx_nyquist_data:1;
		uint64_t tx_reset:1;
		uint64_t tx_reset_ovrd:1;
		uint64_t tx_vboost_en:1;
		uint64_t tx_vboost_en_ovrd:1;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_tx_ovrd_in_hi_s cn70xx;
	struct cvmx_gserx_phyx_lane0_tx_ovrd_in_hi_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_tx_ovrd_in_hi cvmx_gserx_phyx_lane0_tx_ovrd_in_hi_t;

union cvmx_gserx_phyx_lane0_tx_ovrd_in_lo {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_tx_ovrd_in_lo_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t tx_beacon_en_ovrd:1;
		uint64_t tx_beacon_en:1;
		uint64_t tx_cm_en_ovrd:1;
		uint64_t tx_cm_en:1;
		uint64_t tx_en_ovrd:1;
		uint64_t tx_en:1;
		uint64_t tx_data_en_ovrd:1;
		uint64_t tx_data_en:1;
		uint64_t tx_invert_ovrd:1;
		uint64_t tx_invert:1;
		uint64_t loopbk_en_ovrd:1;
		uint64_t loopbk_en:1;
#else
		uint64_t loopbk_en:1;
		uint64_t loopbk_en_ovrd:1;
		uint64_t tx_invert:1;
		uint64_t tx_invert_ovrd:1;
		uint64_t tx_data_en:1;
		uint64_t tx_data_en_ovrd:1;
		uint64_t tx_en:1;
		uint64_t tx_en_ovrd:1;
		uint64_t tx_cm_en:1;
		uint64_t tx_cm_en_ovrd:1;
		uint64_t tx_beacon_en:1;
		uint64_t tx_beacon_en_ovrd:1;
		uint64_t reserved_12_63:52;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_tx_ovrd_in_lo_s cn70xx;
	struct cvmx_gserx_phyx_lane0_tx_ovrd_in_lo_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_tx_ovrd_in_lo cvmx_gserx_phyx_lane0_tx_ovrd_in_lo_t;

union cvmx_gserx_phyx_lane0_txdebug {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_txdebug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t rxdet_meas_time:8;
		uint64_t detrx_always:1;
		uint64_t dtb_sel:3;
#else
		uint64_t dtb_sel:3;
		uint64_t detrx_always:1;
		uint64_t rxdet_meas_time:8;
		uint64_t reserved_12_63:52;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_txdebug_s cn70xx;
	struct cvmx_gserx_phyx_lane0_txdebug_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane0_txdebug cvmx_gserx_phyx_lane0_txdebug_t;

union cvmx_gserx_phyx_lane1_loopback {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_loopback_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t ovrd_tx_lb:1;
		uint64_t tx_lb_en_reg:1;
		uint64_t atb_vptx:1;
		uint64_t atb_vreg_tx:1;
		uint64_t atb_vdccp:1;
		uint64_t atb_vdccm:1;
		uint64_t reserved_1_1:1;
		uint64_t sel_pmix_clk:1;
#else
		uint64_t sel_pmix_clk:1;
		uint64_t reserved_1_1:1;
		uint64_t atb_vdccm:1;
		uint64_t atb_vdccp:1;
		uint64_t atb_vreg_tx:1;
		uint64_t atb_vptx:1;
		uint64_t tx_lb_en_reg:1;
		uint64_t ovrd_tx_lb:1;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_loopback_s cn70xx;
	struct cvmx_gserx_phyx_lane1_loopback_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_loopback cvmx_gserx_phyx_lane1_loopback_t;

union cvmx_gserx_phyx_lane1_rx_lbert_ctl {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_rx_lbert_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_5_63:59;
		uint64_t sync:1;
		uint64_t mode:4;
#else
		uint64_t mode:4;
		uint64_t sync:1;
		uint64_t reserved_5_63:59;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_rx_lbert_ctl_s cn70xx;
	struct cvmx_gserx_phyx_lane1_rx_lbert_ctl_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_rx_lbert_ctl cvmx_gserx_phyx_lane1_rx_lbert_ctl_t;

union cvmx_gserx_phyx_lane1_rx_lbert_err {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_rx_lbert_err_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t ov14:1;
		uint64_t count:15;
#else
		uint64_t count:15;
		uint64_t ov14:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_rx_lbert_err_s cn70xx;
	struct cvmx_gserx_phyx_lane1_rx_lbert_err_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_rx_lbert_err cvmx_gserx_phyx_lane1_rx_lbert_err_t;

union cvmx_gserx_phyx_lane1_rx_ovrd_in_lo {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_rx_ovrd_in_lo_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t rx_los_en_ovrd:1;
		uint64_t rx_los_en:1;
		uint64_t rx_term_en_ovrd:1;
		uint64_t rx_term_en:1;
		uint64_t rx_bit_shift_ovrd:1;
		uint64_t rx_bit_shift_en:1;
		uint64_t rx_align_en_ovrd:1;
		uint64_t rx_align_en:1;
		uint64_t rx_data_en_ovrd:1;
		uint64_t rx_data_en:1;
		uint64_t rx_pll_en_ovrd:1;
		uint64_t rx_pll_en:1;
		uint64_t rx_invert_ovrd:1;
		uint64_t rx_invert:1;
#else
		uint64_t rx_invert:1;
		uint64_t rx_invert_ovrd:1;
		uint64_t rx_pll_en:1;
		uint64_t rx_pll_en_ovrd:1;
		uint64_t rx_data_en:1;
		uint64_t rx_data_en_ovrd:1;
		uint64_t rx_align_en:1;
		uint64_t rx_align_en_ovrd:1;
		uint64_t rx_bit_shift_en:1;
		uint64_t rx_bit_shift_ovrd:1;
		uint64_t rx_term_en:1;
		uint64_t rx_term_en_ovrd:1;
		uint64_t rx_los_en:1;
		uint64_t rx_los_en_ovrd:1;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_rx_ovrd_in_lo_s cn70xx;
	struct cvmx_gserx_phyx_lane1_rx_ovrd_in_lo_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_rx_ovrd_in_lo cvmx_gserx_phyx_lane1_rx_ovrd_in_lo_t;

union cvmx_gserx_phyx_lane1_tx_lbert_ctl {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_tx_lbert_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t pat0:10;
		uint64_t trig_err:1;
		uint64_t mode:4;
#else
		uint64_t mode:4;
		uint64_t trig_err:1;
		uint64_t pat0:10;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_tx_lbert_ctl_s cn70xx;
	struct cvmx_gserx_phyx_lane1_tx_lbert_ctl_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_tx_lbert_ctl cvmx_gserx_phyx_lane1_tx_lbert_ctl_t;

union cvmx_gserx_phyx_lane1_tx_ovrd_in_hi {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_tx_ovrd_in_hi_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t tx_vboost_en_ovrd:1;
		uint64_t tx_vboost_en:1;
		uint64_t tx_reset_ovrd:1;
		uint64_t tx_reset:1;
		uint64_t tx_nyquist_data:1;
		uint64_t tx_clk_out_en_ovrd:1;
		uint64_t tx_clk_out_en:1;
		uint64_t tx_rate_ovrd:1;
		uint64_t tx_rate:2;
#else
		uint64_t tx_rate:2;
		uint64_t tx_rate_ovrd:1;
		uint64_t tx_clk_out_en:1;
		uint64_t tx_clk_out_en_ovrd:1;
		uint64_t tx_nyquist_data:1;
		uint64_t tx_reset:1;
		uint64_t tx_reset_ovrd:1;
		uint64_t tx_vboost_en:1;
		uint64_t tx_vboost_en_ovrd:1;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_tx_ovrd_in_hi_s cn70xx;
	struct cvmx_gserx_phyx_lane1_tx_ovrd_in_hi_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_tx_ovrd_in_hi cvmx_gserx_phyx_lane1_tx_ovrd_in_hi_t;

union cvmx_gserx_phyx_lane1_tx_ovrd_in_lo {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_tx_ovrd_in_lo_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t tx_beacon_en_ovrd:1;
		uint64_t tx_beacon_en:1;
		uint64_t tx_cm_en_ovrd:1;
		uint64_t tx_cm_en:1;
		uint64_t tx_en_ovrd:1;
		uint64_t tx_en:1;
		uint64_t tx_data_en_ovrd:1;
		uint64_t tx_data_en:1;
		uint64_t tx_invert_ovrd:1;
		uint64_t tx_invert:1;
		uint64_t loopbk_en_ovrd:1;
		uint64_t loopbk_en:1;
#else
		uint64_t loopbk_en:1;
		uint64_t loopbk_en_ovrd:1;
		uint64_t tx_invert:1;
		uint64_t tx_invert_ovrd:1;
		uint64_t tx_data_en:1;
		uint64_t tx_data_en_ovrd:1;
		uint64_t tx_en:1;
		uint64_t tx_en_ovrd:1;
		uint64_t tx_cm_en:1;
		uint64_t tx_cm_en_ovrd:1;
		uint64_t tx_beacon_en:1;
		uint64_t tx_beacon_en_ovrd:1;
		uint64_t reserved_12_63:52;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_tx_ovrd_in_lo_s cn70xx;
	struct cvmx_gserx_phyx_lane1_tx_ovrd_in_lo_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_tx_ovrd_in_lo cvmx_gserx_phyx_lane1_tx_ovrd_in_lo_t;

union cvmx_gserx_phyx_lane1_txdebug {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_txdebug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t rxdet_meas_time:8;
		uint64_t detrx_always:1;
		uint64_t dtb_sel:3;
#else
		uint64_t dtb_sel:3;
		uint64_t detrx_always:1;
		uint64_t rxdet_meas_time:8;
		uint64_t reserved_12_63:52;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_txdebug_s cn70xx;
	struct cvmx_gserx_phyx_lane1_txdebug_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_lane1_txdebug cvmx_gserx_phyx_lane1_txdebug_t;

union cvmx_gserx_phyx_ovrd_in_lo {
	uint64_t u64;
	struct cvmx_gserx_phyx_ovrd_in_lo_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t res_ack_in_ovrd:1;
		uint64_t res_ack_in:1;
		uint64_t res_req_in_ovrd:1;
		uint64_t res_req_in:1;
		uint64_t rtune_req_ovrd:1;
		uint64_t rtune_req:1;
		uint64_t mpll_multiplier_ovrd:1;
		uint64_t mpll_multiplier:7;
		uint64_t mpll_en_ovrd:1;
		uint64_t mpll_en:1;
#else
		uint64_t mpll_en:1;
		uint64_t mpll_en_ovrd:1;
		uint64_t mpll_multiplier:7;
		uint64_t mpll_multiplier_ovrd:1;
		uint64_t rtune_req:1;
		uint64_t rtune_req_ovrd:1;
		uint64_t res_req_in:1;
		uint64_t res_req_in_ovrd:1;
		uint64_t res_ack_in:1;
		uint64_t res_ack_in_ovrd:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_phyx_ovrd_in_lo_s cn70xx;
	struct cvmx_gserx_phyx_ovrd_in_lo_s cn70xxp1;
};
typedef union cvmx_gserx_phyx_ovrd_in_lo cvmx_gserx_phyx_ovrd_in_lo_t;

union cvmx_gserx_phy_ctl {
	uint64_t u64;
	struct cvmx_gserx_phy_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t phy_reset:1;
		uint64_t phy_pd:1;
#else
		uint64_t phy_pd:1;
		uint64_t phy_reset:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_gserx_phy_ctl_s cn73xx;
	struct cvmx_gserx_phy_ctl_s cn75xx;
	struct cvmx_gserx_phy_ctl_s cn78xx;
	struct cvmx_gserx_phy_ctl_s cn78xxp2;
};
typedef union cvmx_gserx_phy_ctl cvmx_gserx_phy_ctl_t;

union cvmx_gserx_pipe_lpbk {
	uint64_t u64;
	struct cvmx_gserx_pipe_lpbk_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t pcie_lpbk:1;
#else
		uint64_t pcie_lpbk:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_pipe_lpbk_s cn73xx;
	struct cvmx_gserx_pipe_lpbk_s cn75xx;
	struct cvmx_gserx_pipe_lpbk_s cn78xx;
	struct cvmx_gserx_pipe_lpbk_s cn78xxp2;
};
typedef union cvmx_gserx_pipe_lpbk cvmx_gserx_pipe_lpbk_t;

union cvmx_gserx_pll_px_mode_0 {
	uint64_t u64;
	struct cvmx_gserx_pll_px_mode_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t pll_icp:4;
		uint64_t pll_rloop:3;
		uint64_t pll_pcs_div:9;
#else
		uint64_t pll_pcs_div:9;
		uint64_t pll_rloop:3;
		uint64_t pll_icp:4;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_pll_px_mode_0_s cn73xx;
	struct cvmx_gserx_pll_px_mode_0_s cn75xx;
	struct cvmx_gserx_pll_px_mode_0_s cn78xx;
	struct cvmx_gserx_pll_px_mode_0_s cn78xxp2;
};
typedef union cvmx_gserx_pll_px_mode_0 cvmx_gserx_pll_px_mode_0_t;

union cvmx_gserx_pll_px_mode_1 {
	uint64_t u64;
	struct cvmx_gserx_pll_px_mode_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t pll_16p5en:1;
		uint64_t pll_cpadj:2;
		uint64_t pll_pcie3en:1;
		uint64_t pll_opr:1;
		uint64_t pll_div:9;
#else
		uint64_t pll_div:9;
		uint64_t pll_opr:1;
		uint64_t pll_pcie3en:1;
		uint64_t pll_cpadj:2;
		uint64_t pll_16p5en:1;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_gserx_pll_px_mode_1_s cn73xx;
	struct cvmx_gserx_pll_px_mode_1_s cn75xx;
	struct cvmx_gserx_pll_px_mode_1_s cn78xx;
	struct cvmx_gserx_pll_px_mode_1_s cn78xxp2;
};
typedef union cvmx_gserx_pll_px_mode_1 cvmx_gserx_pll_px_mode_1_t;

union cvmx_gserx_pll_stat {
	uint64_t u64;
	struct cvmx_gserx_pll_stat_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t pll_lock:1;
#else
		uint64_t pll_lock:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_pll_stat_s cn73xx;
	struct cvmx_gserx_pll_stat_s cn75xx;
	struct cvmx_gserx_pll_stat_s cn78xx;
	struct cvmx_gserx_pll_stat_s cn78xxp2;
};
typedef union cvmx_gserx_pll_stat cvmx_gserx_pll_stat_t;

union cvmx_gserx_qlm_stat {
	uint64_t u64;
	struct cvmx_gserx_qlm_stat_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t rst_rdy:1;
		uint64_t dcok:1;
#else
		uint64_t dcok:1;
		uint64_t rst_rdy:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_gserx_qlm_stat_s cn73xx;
	struct cvmx_gserx_qlm_stat_s cn75xx;
	struct cvmx_gserx_qlm_stat_s cn78xx;
	struct cvmx_gserx_qlm_stat_s cn78xxp2;
};
typedef union cvmx_gserx_qlm_stat cvmx_gserx_qlm_stat_t;

union cvmx_gserx_rdet_time {
	uint64_t u64;
	struct cvmx_gserx_rdet_time_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t rdet_time_3:4;
		uint64_t rdet_time_2:4;
		uint64_t rdet_time_1:8;
#else
		uint64_t rdet_time_1:8;
		uint64_t rdet_time_2:4;
		uint64_t rdet_time_3:4;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_rdet_time_s cn73xx;
	struct cvmx_gserx_rdet_time_s cn75xx;
	struct cvmx_gserx_rdet_time_s cn78xx;
	struct cvmx_gserx_rdet_time_s cn78xxp2;
};
typedef union cvmx_gserx_rdet_time cvmx_gserx_rdet_time_t;

union cvmx_gserx_refclk_evt_cntr {
	uint64_t u64;
	struct cvmx_gserx_refclk_evt_cntr_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t count:32;
#else
		uint64_t count:32;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_gserx_refclk_evt_cntr_s cn73xx;
	struct cvmx_gserx_refclk_evt_cntr_s cn75xx;
	struct cvmx_gserx_refclk_evt_cntr_s cn78xxp2;
};
typedef union cvmx_gserx_refclk_evt_cntr cvmx_gserx_refclk_evt_cntr_t;

union cvmx_gserx_refclk_evt_ctrl {
	uint64_t u64;
	struct cvmx_gserx_refclk_evt_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t clr:1;
		uint64_t enb:1;
#else
		uint64_t enb:1;
		uint64_t clr:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_gserx_refclk_evt_ctrl_s cn73xx;
	struct cvmx_gserx_refclk_evt_ctrl_s cn75xx;
	struct cvmx_gserx_refclk_evt_ctrl_s cn78xxp2;
};
typedef union cvmx_gserx_refclk_evt_ctrl cvmx_gserx_refclk_evt_ctrl_t;

union cvmx_gserx_refclk_sel {
	uint64_t u64;
	struct cvmx_gserx_refclk_sel_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_3_63:61;
		uint64_t pcie_refclk125:1;
		uint64_t com_clk_sel:1;
		uint64_t use_com1:1;
#else
		uint64_t use_com1:1;
		uint64_t com_clk_sel:1;
		uint64_t pcie_refclk125:1;
		uint64_t reserved_3_63:61;
#endif
	} s;
	struct cvmx_gserx_refclk_sel_s cn73xx;
	struct cvmx_gserx_refclk_sel_s cn75xx;
	struct cvmx_gserx_refclk_sel_s cn78xx;
	struct cvmx_gserx_refclk_sel_s cn78xxp2;
};
typedef union cvmx_gserx_refclk_sel cvmx_gserx_refclk_sel_t;

union cvmx_gserx_rx_coast {
	uint64_t u64;
	struct cvmx_gserx_rx_coast_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t coast:4;
#else
		uint64_t coast:4;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_gserx_rx_coast_s cn73xx;
	struct cvmx_gserx_rx_coast_s cn75xx;
	struct cvmx_gserx_rx_coast_s cn78xx;
	struct cvmx_gserx_rx_coast_s cn78xxp2;
};
typedef union cvmx_gserx_rx_coast cvmx_gserx_rx_coast_t;

union cvmx_gserx_rx_eie_deten {
	uint64_t u64;
	struct cvmx_gserx_rx_eie_deten_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t eiede:4;
#else
		uint64_t eiede:4;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_gserx_rx_eie_deten_s cn73xx;
	struct cvmx_gserx_rx_eie_deten_s cn75xx;
	struct cvmx_gserx_rx_eie_deten_s cn78xx;
	struct cvmx_gserx_rx_eie_deten_s cn78xxp2;
};
typedef union cvmx_gserx_rx_eie_deten cvmx_gserx_rx_eie_deten_t;

union cvmx_gserx_rx_eie_detsts {
	uint64_t u64;
	struct cvmx_gserx_rx_eie_detsts_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t cdrlock:4;
		uint64_t eiests:4;
		uint64_t eieltch:4;
#else
		uint64_t eieltch:4;
		uint64_t eiests:4;
		uint64_t cdrlock:4;
		uint64_t reserved_12_63:52;
#endif
	} s;
	struct cvmx_gserx_rx_eie_detsts_s cn73xx;
	struct cvmx_gserx_rx_eie_detsts_s cn75xx;
	struct cvmx_gserx_rx_eie_detsts_s cn78xx;
	struct cvmx_gserx_rx_eie_detsts_s cn78xxp2;
};
typedef union cvmx_gserx_rx_eie_detsts cvmx_gserx_rx_eie_detsts_t;

union cvmx_gserx_rx_eie_filter {
	uint64_t u64;
	struct cvmx_gserx_rx_eie_filter_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t eii_filt:16;
#else
		uint64_t eii_filt:16;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_rx_eie_filter_s cn73xx;
	struct cvmx_gserx_rx_eie_filter_s cn75xx;
	struct cvmx_gserx_rx_eie_filter_s cn78xx;
	struct cvmx_gserx_rx_eie_filter_s cn78xxp2;
};
typedef union cvmx_gserx_rx_eie_filter cvmx_gserx_rx_eie_filter_t;

union cvmx_gserx_rx_polarity {
	uint64_t u64;
	struct cvmx_gserx_rx_polarity_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t rx_inv:4;
#else
		uint64_t rx_inv:4;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_gserx_rx_polarity_s cn73xx;
	struct cvmx_gserx_rx_polarity_s cn75xx;
	struct cvmx_gserx_rx_polarity_s cn78xx;
	struct cvmx_gserx_rx_polarity_s cn78xxp2;
};
typedef union cvmx_gserx_rx_polarity cvmx_gserx_rx_polarity_t;

union cvmx_gserx_rx_pwr_ctrl_p1 {
	uint64_t u64;
	struct cvmx_gserx_rx_pwr_ctrl_p1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t p1_rx_resetn:1;
		uint64_t pq_rx_allow_pll_pd:1;
		uint64_t pq_rx_pcs_reset:1;
		uint64_t p1_rx_agc_en:1;
		uint64_t p1_rx_dfe_en:1;
		uint64_t p1_rx_cdr_en:1;
		uint64_t p1_rx_cdr_coast:1;
		uint64_t p1_rx_cdr_clr:1;
		uint64_t p1_rx_subblk_pd:5;
		uint64_t p1_rx_chpd:1;
#else
		uint64_t p1_rx_chpd:1;
		uint64_t p1_rx_subblk_pd:5;
		uint64_t p1_rx_cdr_clr:1;
		uint64_t p1_rx_cdr_coast:1;
		uint64_t p1_rx_cdr_en:1;
		uint64_t p1_rx_dfe_en:1;
		uint64_t p1_rx_agc_en:1;
		uint64_t pq_rx_pcs_reset:1;
		uint64_t pq_rx_allow_pll_pd:1;
		uint64_t p1_rx_resetn:1;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_gserx_rx_pwr_ctrl_p1_s cn73xx;
	struct cvmx_gserx_rx_pwr_ctrl_p1_s cn75xx;
	struct cvmx_gserx_rx_pwr_ctrl_p1_s cn78xx;
	struct cvmx_gserx_rx_pwr_ctrl_p1_s cn78xxp2;
};
typedef union cvmx_gserx_rx_pwr_ctrl_p1 cvmx_gserx_rx_pwr_ctrl_p1_t;

union cvmx_gserx_rx_pwr_ctrl_p2 {
	uint64_t u64;
	struct cvmx_gserx_rx_pwr_ctrl_p2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t p2_rx_resetn:1;
		uint64_t p2_rx_allow_pll_pd:1;
		uint64_t p2_rx_pcs_reset:1;
		uint64_t p2_rx_agc_en:1;
		uint64_t p2_rx_dfe_en:1;
		uint64_t p2_rx_cdr_en:1;
		uint64_t p2_rx_cdr_coast:1;
		uint64_t p2_rx_cdr_clr:1;
		uint64_t p2_rx_subblk_pd:5;
		uint64_t p2_rx_chpd:1;
#else
		uint64_t p2_rx_chpd:1;
		uint64_t p2_rx_subblk_pd:5;
		uint64_t p2_rx_cdr_clr:1;
		uint64_t p2_rx_cdr_coast:1;
		uint64_t p2_rx_cdr_en:1;
		uint64_t p2_rx_dfe_en:1;
		uint64_t p2_rx_agc_en:1;
		uint64_t p2_rx_pcs_reset:1;
		uint64_t p2_rx_allow_pll_pd:1;
		uint64_t p2_rx_resetn:1;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_gserx_rx_pwr_ctrl_p2_s cn73xx;
	struct cvmx_gserx_rx_pwr_ctrl_p2_s cn75xx;
	struct cvmx_gserx_rx_pwr_ctrl_p2_s cn78xx;
	struct cvmx_gserx_rx_pwr_ctrl_p2_s cn78xxp2;
};
typedef union cvmx_gserx_rx_pwr_ctrl_p2 cvmx_gserx_rx_pwr_ctrl_p2_t;

union cvmx_gserx_sata_cfg {
	uint64_t u64;
	struct cvmx_gserx_sata_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t sata_en:1;
#else
		uint64_t sata_en:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_sata_cfg_s cn70xx;
	struct cvmx_gserx_sata_cfg_s cn70xxp1;
};
typedef union cvmx_gserx_sata_cfg cvmx_gserx_sata_cfg_t;

union cvmx_gserx_sata_lanex_tx_ampx {
	uint64_t u64;
	struct cvmx_gserx_sata_lanex_tx_ampx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t tx_amp_gen:7;
#else
		uint64_t tx_amp_gen:7;
		uint64_t reserved_7_63:57;
#endif
	} s;
	struct cvmx_gserx_sata_lanex_tx_ampx_s cn73xx;
	struct cvmx_gserx_sata_lanex_tx_ampx_s cn75xx;
};
typedef union cvmx_gserx_sata_lanex_tx_ampx cvmx_gserx_sata_lanex_tx_ampx_t;

union cvmx_gserx_sata_lanex_tx_preemphx {
	uint64_t u64;
	struct cvmx_gserx_sata_lanex_tx_preemphx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t tx_preemph:7;
#else
		uint64_t tx_preemph:7;
		uint64_t reserved_7_63:57;
#endif
	} s;
	struct cvmx_gserx_sata_lanex_tx_preemphx_s cn73xx;
	struct cvmx_gserx_sata_lanex_tx_preemphx_s cn75xx;
};
typedef union cvmx_gserx_sata_lanex_tx_preemphx cvmx_gserx_sata_lanex_tx_preemphx_t;

union cvmx_gserx_sata_lane_rst {
	uint64_t u64;
	struct cvmx_gserx_sata_lane_rst_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t l1_rst:1;
		uint64_t l0_rst:1;
#else
		uint64_t l0_rst:1;
		uint64_t l1_rst:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_gserx_sata_lane_rst_s cn70xx;
	struct cvmx_gserx_sata_lane_rst_s cn70xxp1;
	struct cvmx_gserx_sata_lane_rst_s cn73xx;
	struct cvmx_gserx_sata_lane_rst_s cn75xx;
};
typedef union cvmx_gserx_sata_lane_rst cvmx_gserx_sata_lane_rst_t;

union cvmx_gserx_sata_p0_tx_amp_genx {
	uint64_t u64;
	struct cvmx_gserx_sata_p0_tx_amp_genx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t tx_amp_gen:7;
#else
		uint64_t tx_amp_gen:7;
		uint64_t reserved_7_63:57;
#endif
	} s;
	struct cvmx_gserx_sata_p0_tx_amp_genx_s cn70xx;
	struct cvmx_gserx_sata_p0_tx_amp_genx_s cn70xxp1;
};
typedef union cvmx_gserx_sata_p0_tx_amp_genx cvmx_gserx_sata_p0_tx_amp_genx_t;

union cvmx_gserx_sata_p0_tx_preemph_genx {
	uint64_t u64;
	struct cvmx_gserx_sata_p0_tx_preemph_genx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t tx_preemph:7;
#else
		uint64_t tx_preemph:7;
		uint64_t reserved_7_63:57;
#endif
	} s;
	struct cvmx_gserx_sata_p0_tx_preemph_genx_s cn70xx;
	struct cvmx_gserx_sata_p0_tx_preemph_genx_s cn70xxp1;
};
typedef union cvmx_gserx_sata_p0_tx_preemph_genx cvmx_gserx_sata_p0_tx_preemph_genx_t;

union cvmx_gserx_sata_p1_tx_amp_genx {
	uint64_t u64;
	struct cvmx_gserx_sata_p1_tx_amp_genx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t tx_amp_gen:7;
#else
		uint64_t tx_amp_gen:7;
		uint64_t reserved_7_63:57;
#endif
	} s;
	struct cvmx_gserx_sata_p1_tx_amp_genx_s cn70xx;
	struct cvmx_gserx_sata_p1_tx_amp_genx_s cn70xxp1;
};
typedef union cvmx_gserx_sata_p1_tx_amp_genx cvmx_gserx_sata_p1_tx_amp_genx_t;

union cvmx_gserx_sata_p1_tx_preemph_genx {
	uint64_t u64;
	struct cvmx_gserx_sata_p1_tx_preemph_genx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t tx_preemph:7;
#else
		uint64_t tx_preemph:7;
		uint64_t reserved_7_63:57;
#endif
	} s;
	struct cvmx_gserx_sata_p1_tx_preemph_genx_s cn70xx;
	struct cvmx_gserx_sata_p1_tx_preemph_genx_s cn70xxp1;
};
typedef union cvmx_gserx_sata_p1_tx_preemph_genx cvmx_gserx_sata_p1_tx_preemph_genx_t;

union cvmx_gserx_sata_ref_ssp_en {
	uint64_t u64;
	struct cvmx_gserx_sata_ref_ssp_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t ref_ssp_en:1;
#else
		uint64_t ref_ssp_en:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_sata_ref_ssp_en_s cn70xx;
	struct cvmx_gserx_sata_ref_ssp_en_s cn70xxp1;
};
typedef union cvmx_gserx_sata_ref_ssp_en cvmx_gserx_sata_ref_ssp_en_t;

union cvmx_gserx_sata_rx_invert {
	uint64_t u64;
	struct cvmx_gserx_sata_rx_invert_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t rx1_invert:1;
		uint64_t rx0_invert:1;
#else
		uint64_t rx0_invert:1;
		uint64_t rx1_invert:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_gserx_sata_rx_invert_s cn70xx;
	struct cvmx_gserx_sata_rx_invert_s cn70xxp1;
};
typedef union cvmx_gserx_sata_rx_invert cvmx_gserx_sata_rx_invert_t;

union cvmx_gserx_sata_ssc_clk_sel {
	uint64_t u64;
	struct cvmx_gserx_sata_ssc_clk_sel_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t ssc_clk_sel:9;
#else
		uint64_t ssc_clk_sel:9;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_gserx_sata_ssc_clk_sel_s cn70xx;
	struct cvmx_gserx_sata_ssc_clk_sel_s cn70xxp1;
};
typedef union cvmx_gserx_sata_ssc_clk_sel cvmx_gserx_sata_ssc_clk_sel_t;

union cvmx_gserx_sata_ssc_en {
	uint64_t u64;
	struct cvmx_gserx_sata_ssc_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t ssc_en:1;
#else
		uint64_t ssc_en:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_sata_ssc_en_s cn70xx;
	struct cvmx_gserx_sata_ssc_en_s cn70xxp1;
};
typedef union cvmx_gserx_sata_ssc_en cvmx_gserx_sata_ssc_en_t;

union cvmx_gserx_sata_ssc_range {
	uint64_t u64;
	struct cvmx_gserx_sata_ssc_range_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_3_63:61;
		uint64_t ssc_range:3;
#else
		uint64_t ssc_range:3;
		uint64_t reserved_3_63:61;
#endif
	} s;
	struct cvmx_gserx_sata_ssc_range_s cn70xx;
	struct cvmx_gserx_sata_ssc_range_s cn70xxp1;
};
typedef union cvmx_gserx_sata_ssc_range cvmx_gserx_sata_ssc_range_t;

union cvmx_gserx_sata_status {
	uint64_t u64;
	struct cvmx_gserx_sata_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t p1_rdy:1;
		uint64_t p0_rdy:1;
#else
		uint64_t p0_rdy:1;
		uint64_t p1_rdy:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_gserx_sata_status_s cn70xx;
	struct cvmx_gserx_sata_status_s cn70xxp1;
	struct cvmx_gserx_sata_status_s cn73xx;
	struct cvmx_gserx_sata_status_s cn75xx;
};
typedef union cvmx_gserx_sata_status cvmx_gserx_sata_status_t;

union cvmx_gserx_sata_tx_invert {
	uint64_t u64;
	struct cvmx_gserx_sata_tx_invert_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_0_63:64;
#else
		uint64_t reserved_0_63:64;
#endif
	} s;
	struct cvmx_gserx_sata_tx_invert_cn70xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t tx1_invert:1;
		uint64_t tx0_invert:1;
#else
		uint64_t tx0_invert:1;
		uint64_t tx1_invert:1;
		uint64_t reserved_2_63:62;
#endif
	} cn70xx;
	struct cvmx_gserx_sata_tx_invert_cn70xx cn70xxp1;
	struct cvmx_gserx_sata_tx_invert_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t l1_inv:1;
		uint64_t l0_inv:1;
#else
		uint64_t l0_inv:1;
		uint64_t l1_inv:1;
		uint64_t reserved_2_63:62;
#endif
	} cn73xx;
	struct cvmx_gserx_sata_tx_invert_cn73xx cn75xx;
};
typedef union cvmx_gserx_sata_tx_invert cvmx_gserx_sata_tx_invert_t;

union cvmx_gserx_scratch {
	uint64_t u64;
	struct cvmx_gserx_scratch_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t scratch:16;
#else
		uint64_t scratch:16;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_scratch_s cn73xx;
	struct cvmx_gserx_scratch_s cn75xx;
	struct cvmx_gserx_scratch_s cn78xx;
	struct cvmx_gserx_scratch_s cn78xxp2;
};
typedef union cvmx_gserx_scratch cvmx_gserx_scratch_t;

union cvmx_gserx_slicex_rx_sdll_ctrl {
	uint64_t u64;
	struct cvmx_gserx_slicex_rx_sdll_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t pcs_sds_oob_clk_ctrl:2;
		uint64_t reserved_7_13:7;
		uint64_t pcs_sds_rx_sdll_tune:3;
		uint64_t pcs_sds_rx_sdll_swsel:4;
#else
		uint64_t pcs_sds_rx_sdll_swsel:4;
		uint64_t pcs_sds_rx_sdll_tune:3;
		uint64_t reserved_7_13:7;
		uint64_t pcs_sds_oob_clk_ctrl:2;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_gserx_slicex_rx_sdll_ctrl_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t pcs_sds_oob_clk_ctrl:2;
		uint64_t reserved_13_7:7;
		uint64_t pcs_sds_rx_sdll_tune:3;
		uint64_t pcs_sds_rx_sdll_swsel:4;
#else
		uint64_t pcs_sds_rx_sdll_swsel:4;
		uint64_t pcs_sds_rx_sdll_tune:3;
		uint64_t reserved_13_7:7;
		uint64_t pcs_sds_oob_clk_ctrl:2;
		uint64_t reserved_16_63:48;
#endif
	} cn73xx;
	struct cvmx_gserx_slicex_rx_sdll_ctrl_cn73xx cn75xx;
	struct cvmx_gserx_slicex_rx_sdll_ctrl_s cn78xx;
	struct cvmx_gserx_slicex_rx_sdll_ctrl_s cn78xxp2;
};
typedef union cvmx_gserx_slicex_rx_sdll_ctrl cvmx_gserx_slicex_rx_sdll_ctrl_t;

union cvmx_gserx_slice_cfg {
	uint64_t u64;
	struct cvmx_gserx_slice_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t tx_rx_detect_lvl_enc:4;
		uint64_t reserved_6_7:2;
		uint64_t pcs_sds_rx_pcie_pterm:2;
		uint64_t pcs_sds_rx_pcie_nterm:2;
		uint64_t pcs_sds_tx_stress_eye:2;
#else
		uint64_t pcs_sds_tx_stress_eye:2;
		uint64_t pcs_sds_rx_pcie_nterm:2;
		uint64_t pcs_sds_rx_pcie_pterm:2;
		uint64_t reserved_6_7:2;
		uint64_t tx_rx_detect_lvl_enc:4;
		uint64_t reserved_12_63:52;
#endif
	} s;
	struct cvmx_gserx_slice_cfg_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t tx_rx_detect_lvl_enc:4;
		uint64_t reserved_7_6:2;
		uint64_t pcs_sds_rx_pcie_pterm:2;
		uint64_t pcs_sds_rx_pcie_nterm:2;
		uint64_t pcs_sds_tx_stress_eye:2;
#else
		uint64_t pcs_sds_tx_stress_eye:2;
		uint64_t pcs_sds_rx_pcie_nterm:2;
		uint64_t pcs_sds_rx_pcie_pterm:2;
		uint64_t reserved_7_6:2;
		uint64_t tx_rx_detect_lvl_enc:4;
		uint64_t reserved_12_63:52;
#endif
	} cn73xx;
	struct cvmx_gserx_slice_cfg_cn73xx cn75xx;
	struct cvmx_gserx_slice_cfg_s cn78xx;
	struct cvmx_gserx_slice_cfg_s cn78xxp2;
};
typedef union cvmx_gserx_slice_cfg cvmx_gserx_slice_cfg_t;

union cvmx_gserx_spd {
	uint64_t u64;
	struct cvmx_gserx_spd_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t spd:4;
#else
		uint64_t spd:4;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_gserx_spd_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_0_63:64;
#else
		uint64_t reserved_0_63:64;
#endif
	} cn73xx;
	struct cvmx_gserx_spd_cn73xx cn75xx;
	struct cvmx_gserx_spd_s cn78xx;
	struct cvmx_gserx_spd_s cn78xxp2;
};
typedef union cvmx_gserx_spd cvmx_gserx_spd_t;

union cvmx_gserx_srst {
	uint64_t u64;
	struct cvmx_gserx_srst_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t srst:1;
#else
		uint64_t srst:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_gserx_srst_s cn73xx;
	struct cvmx_gserx_srst_s cn75xx;
	struct cvmx_gserx_srst_s cn78xx;
	struct cvmx_gserx_srst_s cn78xxp2;
};
typedef union cvmx_gserx_srst cvmx_gserx_srst_t;

union cvmx_gserx_tx_vboost {
	uint64_t u64;
	struct cvmx_gserx_tx_vboost_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t vboost:4;
#else
		uint64_t vboost:4;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_gserx_tx_vboost_s cn73xx;
	struct cvmx_gserx_tx_vboost_s cn75xx;
	struct cvmx_gserx_tx_vboost_s cn78xx;
	struct cvmx_gserx_tx_vboost_s cn78xxp2;
};
typedef union cvmx_gserx_tx_vboost cvmx_gserx_tx_vboost_t;

union cvmx_gserx_txclk_evt_cntr {
	uint64_t u64;
	struct cvmx_gserx_txclk_evt_cntr_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t count:32;
#else
		uint64_t count:32;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_gserx_txclk_evt_cntr_s cn73xx;
	struct cvmx_gserx_txclk_evt_cntr_s cn75xx;
	struct cvmx_gserx_txclk_evt_cntr_s cn78xxp2;
};
typedef union cvmx_gserx_txclk_evt_cntr cvmx_gserx_txclk_evt_cntr_t;

union cvmx_gserx_txclk_evt_ctrl {
	uint64_t u64;
	struct cvmx_gserx_txclk_evt_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t clr:1;
		uint64_t enb:1;
#else
		uint64_t enb:1;
		uint64_t clr:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_gserx_txclk_evt_ctrl_s cn73xx;
	struct cvmx_gserx_txclk_evt_ctrl_s cn75xx;
	struct cvmx_gserx_txclk_evt_ctrl_s cn78xxp2;
};
typedef union cvmx_gserx_txclk_evt_ctrl cvmx_gserx_txclk_evt_ctrl_t;

#endif
