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

#ifndef __CVMX_PKO_DEFS_H__
#define __CVMX_PKO_DEFS_H__

#define CVMX_PKO_CHANNEL_LEVEL (CVMX_ADD_IO_SEG(0x00015400000800F0ull))
#define CVMX_PKO_DPFI_ENA (CVMX_ADD_IO_SEG(0x0001540000C00018ull))
#define CVMX_PKO_DPFI_FLUSH (CVMX_ADD_IO_SEG(0x0001540000C00008ull))
#define CVMX_PKO_DPFI_FPA_AURA (CVMX_ADD_IO_SEG(0x0001540000C00010ull))
#define CVMX_PKO_DPFI_STATUS (CVMX_ADD_IO_SEG(0x0001540000C00000ull))
#define CVMX_PKO_DQX_BYTES(offset) (CVMX_ADD_IO_SEG(0x00015400000000D8ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_CIR(offset) (CVMX_ADD_IO_SEG(0x0001540000280018ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_DROPPED_BYTES(offset) (CVMX_ADD_IO_SEG(0x00015400000000C8ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_DROPPED_PACKETS(offset) (CVMX_ADD_IO_SEG(0x00015400000000C0ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_FIFO(offset) (CVMX_ADD_IO_SEG(0x0001540000300078ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_PACKETS(offset) (CVMX_ADD_IO_SEG(0x00015400000000D0ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_PICK(offset) (CVMX_ADD_IO_SEG(0x0001540000300070ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_PIR(offset) (CVMX_ADD_IO_SEG(0x0001540000280020ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_POINTERS(offset) (CVMX_ADD_IO_SEG(0x0001540000280078ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_SCHEDULE(offset) (CVMX_ADD_IO_SEG(0x0001540000280008ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_SCHED_STATE(offset) (CVMX_ADD_IO_SEG(0x0001540000280028ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_SHAPE(offset) (CVMX_ADD_IO_SEG(0x0001540000280010ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_SHAPE_STATE(offset) (CVMX_ADD_IO_SEG(0x0001540000280030ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_SW_XOFF(offset) (CVMX_ADD_IO_SEG(0x00015400002800E0ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_TOPOLOGY(offset) (CVMX_ADD_IO_SEG(0x0001540000300000ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_WM_BUF_CNT(offset) (CVMX_ADD_IO_SEG(0x00015400008000E8ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_WM_BUF_CTL(offset) (CVMX_ADD_IO_SEG(0x00015400008000F0ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_WM_BUF_CTL_W1C(offset) (CVMX_ADD_IO_SEG(0x00015400008000F8ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_WM_CNT(offset) (CVMX_ADD_IO_SEG(0x0001540000000050ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_WM_CTL(offset) (CVMX_ADD_IO_SEG(0x0001540000000040ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQX_WM_CTL_W1C(offset) (CVMX_ADD_IO_SEG(0x0001540000000048ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_DQ_CSR_BUS_DEBUG (CVMX_ADD_IO_SEG(0x00015400003001F8ull))
#define CVMX_PKO_DQ_DEBUG (CVMX_ADD_IO_SEG(0x0001540000300128ull))
#define CVMX_PKO_DRAIN_IRQ (CVMX_ADD_IO_SEG(0x0001540000000140ull))
#define CVMX_PKO_ENABLE (CVMX_ADD_IO_SEG(0x0001540000D00008ull))
#define CVMX_PKO_FORMATX_CTL(offset) (CVMX_ADD_IO_SEG(0x0001540000900800ull) + ((offset) & 127) * 8)
#define CVMX_PKO_L1_SQA_DEBUG (CVMX_ADD_IO_SEG(0x0001540000080128ull))
#define CVMX_PKO_L1_SQB_DEBUG (CVMX_ADD_IO_SEG(0x0001540000080130ull))
#define CVMX_PKO_L1_SQX_CIR(offset) (CVMX_ADD_IO_SEG(0x0001540000000018ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_DROPPED_BYTES(offset) (CVMX_ADD_IO_SEG(0x0001540000000088ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_DROPPED_PACKETS(offset) (CVMX_ADD_IO_SEG(0x0001540000000080ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_GREEN(offset) (CVMX_ADD_IO_SEG(0x0001540000080058ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_GREEN_BYTES(offset) (CVMX_ADD_IO_SEG(0x00015400000000B8ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_GREEN_PACKETS(offset) (CVMX_ADD_IO_SEG(0x00015400000000B0ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_LINK(offset) (CVMX_ADD_IO_SEG(0x0001540000000038ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_PICK(offset) (CVMX_ADD_IO_SEG(0x0001540000080070ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_RED(offset) (CVMX_ADD_IO_SEG(0x0001540000080068ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_RED_BYTES(offset) (CVMX_ADD_IO_SEG(0x0001540000000098ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_RED_PACKETS(offset) (CVMX_ADD_IO_SEG(0x0001540000000090ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_SCHEDULE(offset) (CVMX_ADD_IO_SEG(0x0001540000000008ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_SHAPE(offset) (CVMX_ADD_IO_SEG(0x0001540000000010ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_SHAPE_STATE(offset) (CVMX_ADD_IO_SEG(0x0001540000000030ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_SW_XOFF(offset) (CVMX_ADD_IO_SEG(0x00015400000000E0ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_TOPOLOGY(offset) (CVMX_ADD_IO_SEG(0x0001540000080000ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_YELLOW(offset) (CVMX_ADD_IO_SEG(0x0001540000080060ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_YELLOW_BYTES(offset) (CVMX_ADD_IO_SEG(0x00015400000000A8ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQX_YELLOW_PACKETS(offset) (CVMX_ADD_IO_SEG(0x00015400000000A0ull) + ((offset) & 31) * 512)
#define CVMX_PKO_L1_SQ_CSR_BUS_DEBUG (CVMX_ADD_IO_SEG(0x00015400000801F8ull))
#define CVMX_PKO_L2_SQA_DEBUG (CVMX_ADD_IO_SEG(0x0001540000100128ull))
#define CVMX_PKO_L2_SQB_DEBUG (CVMX_ADD_IO_SEG(0x0001540000100130ull))
#define CVMX_PKO_L2_SQX_CIR(offset) (CVMX_ADD_IO_SEG(0x0001540000080018ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L2_SQX_GREEN(offset) (CVMX_ADD_IO_SEG(0x0001540000100058ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L2_SQX_PICK(offset) (CVMX_ADD_IO_SEG(0x0001540000100070ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L2_SQX_PIR(offset) (CVMX_ADD_IO_SEG(0x0001540000080020ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L2_SQX_POINTERS(offset) (CVMX_ADD_IO_SEG(0x0001540000080078ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L2_SQX_RED(offset) (CVMX_ADD_IO_SEG(0x0001540000100068ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L2_SQX_SCHEDULE(offset) (CVMX_ADD_IO_SEG(0x0001540000080008ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L2_SQX_SCHED_STATE(offset) (CVMX_ADD_IO_SEG(0x0001540000080028ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L2_SQX_SHAPE(offset) (CVMX_ADD_IO_SEG(0x0001540000080010ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L2_SQX_SHAPE_STATE(offset) (CVMX_ADD_IO_SEG(0x0001540000080030ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L2_SQX_SW_XOFF(offset) (CVMX_ADD_IO_SEG(0x00015400000800E0ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L2_SQX_TOPOLOGY(offset) (CVMX_ADD_IO_SEG(0x0001540000100000ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L2_SQX_YELLOW(offset) (CVMX_ADD_IO_SEG(0x0001540000100060ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L2_SQ_CSR_BUS_DEBUG (CVMX_ADD_IO_SEG(0x00015400001001F8ull))
#define CVMX_PKO_L3_L2_SQX_CHANNEL(offset) (CVMX_ADD_IO_SEG(0x0001540000080038ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L3_SQA_DEBUG (CVMX_ADD_IO_SEG(0x0001540000180128ull))
#define CVMX_PKO_L3_SQB_DEBUG (CVMX_ADD_IO_SEG(0x0001540000180130ull))
#define CVMX_PKO_L3_SQX_CIR(offset) (CVMX_ADD_IO_SEG(0x0001540000100018ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L3_SQX_GREEN(offset) (CVMX_ADD_IO_SEG(0x0001540000180058ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L3_SQX_PICK(offset) (CVMX_ADD_IO_SEG(0x0001540000180070ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L3_SQX_PIR(offset) (CVMX_ADD_IO_SEG(0x0001540000100020ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L3_SQX_POINTERS(offset) (CVMX_ADD_IO_SEG(0x0001540000100078ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L3_SQX_RED(offset) (CVMX_ADD_IO_SEG(0x0001540000180068ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L3_SQX_SCHEDULE(offset) (CVMX_ADD_IO_SEG(0x0001540000100008ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L3_SQX_SCHED_STATE(offset) (CVMX_ADD_IO_SEG(0x0001540000100028ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L3_SQX_SHAPE(offset) (CVMX_ADD_IO_SEG(0x0001540000100010ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L3_SQX_SHAPE_STATE(offset) (CVMX_ADD_IO_SEG(0x0001540000100030ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L3_SQX_SW_XOFF(offset) (CVMX_ADD_IO_SEG(0x00015400001000E0ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L3_SQX_TOPOLOGY(offset) (CVMX_ADD_IO_SEG(0x0001540000180000ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L3_SQX_YELLOW(offset) (CVMX_ADD_IO_SEG(0x0001540000180060ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L3_SQ_CSR_BUS_DEBUG (CVMX_ADD_IO_SEG(0x00015400001801F8ull))
#define CVMX_PKO_L4_SQA_DEBUG (CVMX_ADD_IO_SEG(0x0001540000200128ull))
#define CVMX_PKO_L4_SQB_DEBUG (CVMX_ADD_IO_SEG(0x0001540000200130ull))
#define CVMX_PKO_L4_SQX_CIR(offset) (CVMX_ADD_IO_SEG(0x0001540000180018ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L4_SQX_GREEN(offset) (CVMX_ADD_IO_SEG(0x0001540000200058ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L4_SQX_PICK(offset) (CVMX_ADD_IO_SEG(0x0001540000200070ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L4_SQX_PIR(offset) (CVMX_ADD_IO_SEG(0x0001540000180020ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L4_SQX_POINTERS(offset) (CVMX_ADD_IO_SEG(0x0001540000180078ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L4_SQX_RED(offset) (CVMX_ADD_IO_SEG(0x0001540000200068ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L4_SQX_SCHEDULE(offset) (CVMX_ADD_IO_SEG(0x0001540000180008ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L4_SQX_SCHED_STATE(offset) (CVMX_ADD_IO_SEG(0x0001540000180028ull) + ((offset) & 511) * 512)
#define CVMX_PKO_L4_SQX_SHAPE(offset) (CVMX_ADD_IO_SEG(0x0001540000180010ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L4_SQX_SHAPE_STATE(offset) (CVMX_ADD_IO_SEG(0x0001540000180030ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L4_SQX_SW_XOFF(offset) (CVMX_ADD_IO_SEG(0x00015400001800E0ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L4_SQX_TOPOLOGY(offset) (CVMX_ADD_IO_SEG(0x0001540000200000ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L4_SQX_YELLOW(offset) (CVMX_ADD_IO_SEG(0x0001540000200060ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L4_SQ_CSR_BUS_DEBUG (CVMX_ADD_IO_SEG(0x00015400002001F8ull))
#define CVMX_PKO_L5_SQA_DEBUG (CVMX_ADD_IO_SEG(0x0001540000280128ull))
#define CVMX_PKO_L5_SQB_DEBUG (CVMX_ADD_IO_SEG(0x0001540000280130ull))
#define CVMX_PKO_L5_SQX_CIR(offset) (CVMX_ADD_IO_SEG(0x0001540000200018ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L5_SQX_GREEN(offset) (CVMX_ADD_IO_SEG(0x0001540000280058ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L5_SQX_PICK(offset) (CVMX_ADD_IO_SEG(0x0001540000280070ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L5_SQX_PIR(offset) (CVMX_ADD_IO_SEG(0x0001540000200020ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L5_SQX_POINTERS(offset) (CVMX_ADD_IO_SEG(0x0001540000200078ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L5_SQX_RED(offset) (CVMX_ADD_IO_SEG(0x0001540000280068ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L5_SQX_SCHEDULE(offset) (CVMX_ADD_IO_SEG(0x0001540000200008ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L5_SQX_SCHED_STATE(offset) (CVMX_ADD_IO_SEG(0x0001540000200028ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L5_SQX_SHAPE(offset) (CVMX_ADD_IO_SEG(0x0001540000200010ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L5_SQX_SHAPE_STATE(offset) (CVMX_ADD_IO_SEG(0x0001540000200030ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L5_SQX_SW_XOFF(offset) (CVMX_ADD_IO_SEG(0x00015400002000E0ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L5_SQX_TOPOLOGY(offset) (CVMX_ADD_IO_SEG(0x0001540000280000ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L5_SQX_YELLOW(offset) (CVMX_ADD_IO_SEG(0x0001540000280060ull) + ((offset) & 1023) * 512)
#define CVMX_PKO_L5_SQ_CSR_BUS_DEBUG (CVMX_ADD_IO_SEG(0x00015400002801F8ull))
#define CVMX_PKO_LUTX(offset) (CVMX_ADD_IO_SEG(0x0001540000B00000ull) + ((offset) & 1023) * 8)
#define CVMX_PKO_LUT_BIST_STATUS (CVMX_ADD_IO_SEG(0x0001540000B02018ull))
#define CVMX_PKO_LUT_ECC_CTL0 (CVMX_ADD_IO_SEG(0x0001540000BFFFD0ull))
#define CVMX_PKO_LUT_ECC_DBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000BFFFF0ull))
#define CVMX_PKO_LUT_ECC_DBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000BFFFD8ull))
#define CVMX_PKO_LUT_ECC_SBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000BFFFF8ull))
#define CVMX_PKO_LUT_ECC_SBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000BFFFE8ull))
#define CVMX_PKO_MACX_CFG(offset) (CVMX_ADD_IO_SEG(0x0001540000900000ull) + ((offset) & 31) * 8)
#define CVMX_PKO_MCI0_CRED_CNTX(offset) (CVMX_ADD_IO_SEG(0x0001540000A40000ull) + ((offset) & 31) * 8)
#define CVMX_PKO_MCI0_MAX_CREDX(offset) (CVMX_ADD_IO_SEG(0x0001540000A00000ull) + ((offset) & 31) * 8)
#define CVMX_PKO_MCI1_CRED_CNTX(offset) (CVMX_ADD_IO_SEG(0x0001540000A80100ull) + ((offset) & 31) * 8)
#define CVMX_PKO_MCI1_MAX_CREDX(offset) (CVMX_ADD_IO_SEG(0x0001540000A80000ull) + ((offset) & 31) * 8)
#define CVMX_PKO_MEM_COUNT0 (CVMX_ADD_IO_SEG(0x0001180050001080ull))
#define CVMX_PKO_MEM_COUNT1 (CVMX_ADD_IO_SEG(0x0001180050001088ull))
#define CVMX_PKO_MEM_DEBUG0 (CVMX_ADD_IO_SEG(0x0001180050001100ull))
#define CVMX_PKO_MEM_DEBUG1 (CVMX_ADD_IO_SEG(0x0001180050001108ull))
#define CVMX_PKO_MEM_DEBUG10 (CVMX_ADD_IO_SEG(0x0001180050001150ull))
#define CVMX_PKO_MEM_DEBUG11 (CVMX_ADD_IO_SEG(0x0001180050001158ull))
#define CVMX_PKO_MEM_DEBUG12 (CVMX_ADD_IO_SEG(0x0001180050001160ull))
#define CVMX_PKO_MEM_DEBUG13 (CVMX_ADD_IO_SEG(0x0001180050001168ull))
#define CVMX_PKO_MEM_DEBUG14 (CVMX_ADD_IO_SEG(0x0001180050001170ull))
#define CVMX_PKO_MEM_DEBUG2 (CVMX_ADD_IO_SEG(0x0001180050001110ull))
#define CVMX_PKO_MEM_DEBUG3 (CVMX_ADD_IO_SEG(0x0001180050001118ull))
#define CVMX_PKO_MEM_DEBUG4 (CVMX_ADD_IO_SEG(0x0001180050001120ull))
#define CVMX_PKO_MEM_DEBUG5 (CVMX_ADD_IO_SEG(0x0001180050001128ull))
#define CVMX_PKO_MEM_DEBUG6 (CVMX_ADD_IO_SEG(0x0001180050001130ull))
#define CVMX_PKO_MEM_DEBUG7 (CVMX_ADD_IO_SEG(0x0001180050001138ull))
#define CVMX_PKO_MEM_DEBUG8 (CVMX_ADD_IO_SEG(0x0001180050001140ull))
#define CVMX_PKO_MEM_DEBUG9 (CVMX_ADD_IO_SEG(0x0001180050001148ull))
#define CVMX_PKO_MEM_IPORT_PTRS (CVMX_ADD_IO_SEG(0x0001180050001030ull))
#define CVMX_PKO_MEM_IPORT_QOS (CVMX_ADD_IO_SEG(0x0001180050001038ull))
#define CVMX_PKO_MEM_IQUEUE_PTRS (CVMX_ADD_IO_SEG(0x0001180050001040ull))
#define CVMX_PKO_MEM_IQUEUE_QOS (CVMX_ADD_IO_SEG(0x0001180050001048ull))
#define CVMX_PKO_MEM_PORT_PTRS (CVMX_ADD_IO_SEG(0x0001180050001010ull))
#define CVMX_PKO_MEM_PORT_QOS (CVMX_ADD_IO_SEG(0x0001180050001018ull))
#define CVMX_PKO_MEM_PORT_RATE0 (CVMX_ADD_IO_SEG(0x0001180050001020ull))
#define CVMX_PKO_MEM_PORT_RATE1 (CVMX_ADD_IO_SEG(0x0001180050001028ull))
#define CVMX_PKO_MEM_QUEUE_PTRS (CVMX_ADD_IO_SEG(0x0001180050001000ull))
#define CVMX_PKO_MEM_QUEUE_QOS (CVMX_ADD_IO_SEG(0x0001180050001008ull))
#define CVMX_PKO_MEM_THROTTLE_INT (CVMX_ADD_IO_SEG(0x0001180050001058ull))
#define CVMX_PKO_MEM_THROTTLE_PIPE (CVMX_ADD_IO_SEG(0x0001180050001050ull))
#define CVMX_PKO_NCB_BIST_STATUS (CVMX_ADD_IO_SEG(0x0001540000EFFF00ull))
#define CVMX_PKO_NCB_ECC_CTL0 (CVMX_ADD_IO_SEG(0x0001540000EFFFD0ull))
#define CVMX_PKO_NCB_ECC_DBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000EFFFF0ull))
#define CVMX_PKO_NCB_ECC_DBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000EFFFD8ull))
#define CVMX_PKO_NCB_ECC_SBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000EFFFF8ull))
#define CVMX_PKO_NCB_ECC_SBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000EFFFE8ull))
#define CVMX_PKO_NCB_INT (CVMX_ADD_IO_SEG(0x0001540000E00010ull))
#define CVMX_PKO_NCB_TX_ERR_INFO (CVMX_ADD_IO_SEG(0x0001540000E00008ull))
#define CVMX_PKO_NCB_TX_ERR_WORD (CVMX_ADD_IO_SEG(0x0001540000E00000ull))
#define CVMX_PKO_PDM_BIST_STATUS (CVMX_ADD_IO_SEG(0x00015400008FFF00ull))
#define CVMX_PKO_PDM_CFG (CVMX_ADD_IO_SEG(0x0001540000800000ull))
#define CVMX_PKO_PDM_CFG_DBG (CVMX_ADD_IO_SEG(0x0001540000800FF8ull))
#define CVMX_PKO_PDM_CP_DBG (CVMX_ADD_IO_SEG(0x0001540000800190ull))
#define CVMX_PKO_PDM_DQX_MINPAD(offset) (CVMX_ADD_IO_SEG(0x00015400008F0000ull) + ((offset) & 1023) * 8)
#define CVMX_PKO_PDM_DRPBUF_DBG (CVMX_ADD_IO_SEG(0x00015400008000B0ull))
#define CVMX_PKO_PDM_DWPBUF_DBG (CVMX_ADD_IO_SEG(0x00015400008000A8ull))
#define CVMX_PKO_PDM_ECC_CTL0 (CVMX_ADD_IO_SEG(0x00015400008FFFD0ull))
#define CVMX_PKO_PDM_ECC_CTL1 (CVMX_ADD_IO_SEG(0x00015400008FFFD8ull))
#define CVMX_PKO_PDM_ECC_DBE_STS0 (CVMX_ADD_IO_SEG(0x00015400008FFFF0ull))
#define CVMX_PKO_PDM_ECC_DBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x00015400008FFFE0ull))
#define CVMX_PKO_PDM_ECC_SBE_STS0 (CVMX_ADD_IO_SEG(0x00015400008FFFF8ull))
#define CVMX_PKO_PDM_ECC_SBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x00015400008FFFE8ull))
#define CVMX_PKO_PDM_FILLB_DBG0 (CVMX_ADD_IO_SEG(0x00015400008002A0ull))
#define CVMX_PKO_PDM_FILLB_DBG1 (CVMX_ADD_IO_SEG(0x00015400008002A8ull))
#define CVMX_PKO_PDM_FILLB_DBG2 (CVMX_ADD_IO_SEG(0x00015400008002B0ull))
#define CVMX_PKO_PDM_FLSHB_DBG0 (CVMX_ADD_IO_SEG(0x00015400008002B8ull))
#define CVMX_PKO_PDM_FLSHB_DBG1 (CVMX_ADD_IO_SEG(0x00015400008002C0ull))
#define CVMX_PKO_PDM_INTF_DBG_RD (CVMX_ADD_IO_SEG(0x0001540000900F20ull))
#define CVMX_PKO_PDM_ISRD_DBG (CVMX_ADD_IO_SEG(0x0001540000800090ull))
#define CVMX_PKO_PDM_ISRD_DBG_DQ (CVMX_ADD_IO_SEG(0x0001540000800290ull))
#define CVMX_PKO_PDM_ISRM_DBG (CVMX_ADD_IO_SEG(0x0001540000800098ull))
#define CVMX_PKO_PDM_ISRM_DBG_DQ (CVMX_ADD_IO_SEG(0x0001540000800298ull))
#define CVMX_PKO_PDM_MEM_ADDR (CVMX_ADD_IO_SEG(0x0001540000800018ull))
#define CVMX_PKO_PDM_MEM_DATA (CVMX_ADD_IO_SEG(0x0001540000800010ull))
#define CVMX_PKO_PDM_MEM_RW_CTL (CVMX_ADD_IO_SEG(0x0001540000800020ull))
#define CVMX_PKO_PDM_MEM_RW_STS (CVMX_ADD_IO_SEG(0x0001540000800028ull))
#define CVMX_PKO_PDM_MWPBUF_DBG (CVMX_ADD_IO_SEG(0x00015400008000A0ull))
#define CVMX_PKO_PDM_STS (CVMX_ADD_IO_SEG(0x0001540000800008ull))
#define CVMX_PKO_PEB_BIST_STATUS (CVMX_ADD_IO_SEG(0x0001540000900D00ull))
#define CVMX_PKO_PEB_ECC_CTL0 (CVMX_ADD_IO_SEG(0x00015400009FFFD0ull))
#define CVMX_PKO_PEB_ECC_CTL1 (CVMX_ADD_IO_SEG(0x00015400009FFFA8ull))
#define CVMX_PKO_PEB_ECC_DBE_STS0 (CVMX_ADD_IO_SEG(0x00015400009FFFF0ull))
#define CVMX_PKO_PEB_ECC_DBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x00015400009FFFD8ull))
#define CVMX_PKO_PEB_ECC_SBE_STS0 (CVMX_ADD_IO_SEG(0x00015400009FFFF8ull))
#define CVMX_PKO_PEB_ECC_SBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x00015400009FFFE8ull))
#define CVMX_PKO_PEB_ECO (CVMX_ADD_IO_SEG(0x0001540000901000ull))
#define CVMX_PKO_PEB_ERR_INT (CVMX_ADD_IO_SEG(0x0001540000900C00ull))
#define CVMX_PKO_PEB_EXT_HDR_DEF_ERR_INFO (CVMX_ADD_IO_SEG(0x0001540000900C08ull))
#define CVMX_PKO_PEB_FCS_SOP_ERR_INFO (CVMX_ADD_IO_SEG(0x0001540000900C18ull))
#define CVMX_PKO_PEB_JUMP_DEF_ERR_INFO (CVMX_ADD_IO_SEG(0x0001540000900C10ull))
#define CVMX_PKO_PEB_MACX_CFG_WR_ERR_INFO (CVMX_ADD_IO_SEG(0x0001540000900C50ull))
#define CVMX_PKO_PEB_MAX_LINK_ERR_INFO (CVMX_ADD_IO_SEG(0x0001540000900C48ull))
#define CVMX_PKO_PEB_NCB_CFG (CVMX_ADD_IO_SEG(0x0001540000900308ull))
#define CVMX_PKO_PEB_PAD_ERR_INFO (CVMX_ADD_IO_SEG(0x0001540000900C28ull))
#define CVMX_PKO_PEB_PSE_FIFO_ERR_INFO (CVMX_ADD_IO_SEG(0x0001540000900C20ull))
#define CVMX_PKO_PEB_SUBD_ADDR_ERR_INFO (CVMX_ADD_IO_SEG(0x0001540000900C38ull))
#define CVMX_PKO_PEB_SUBD_SIZE_ERR_INFO (CVMX_ADD_IO_SEG(0x0001540000900C40ull))
#define CVMX_PKO_PEB_TRUNC_ERR_INFO (CVMX_ADD_IO_SEG(0x0001540000900C30ull))
#define CVMX_PKO_PEB_TSO_CFG (CVMX_ADD_IO_SEG(0x0001540000900310ull))
#define CVMX_PKO_PQA_DEBUG (CVMX_ADD_IO_SEG(0x0001540000000128ull))
#define CVMX_PKO_PQB_DEBUG (CVMX_ADD_IO_SEG(0x0001540000000130ull))
#define CVMX_PKO_PQ_CSR_BUS_DEBUG (CVMX_ADD_IO_SEG(0x00015400000001F8ull))
#define CVMX_PKO_PQ_DEBUG_GREEN (CVMX_ADD_IO_SEG(0x0001540000000058ull))
#define CVMX_PKO_PQ_DEBUG_LINKS (CVMX_ADD_IO_SEG(0x0001540000000068ull))
#define CVMX_PKO_PQ_DEBUG_YELLOW (CVMX_ADD_IO_SEG(0x0001540000000060ull))
#define CVMX_PKO_PSE_DQ_BIST_STATUS (CVMX_ADD_IO_SEG(0x0001540000300138ull))
#define CVMX_PKO_PSE_DQ_ECC_CTL0 (CVMX_ADD_IO_SEG(0x0001540000300100ull))
#define CVMX_PKO_PSE_DQ_ECC_DBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000300118ull))
#define CVMX_PKO_PSE_DQ_ECC_DBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000300120ull))
#define CVMX_PKO_PSE_DQ_ECC_SBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000300108ull))
#define CVMX_PKO_PSE_DQ_ECC_SBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000300110ull))
#define CVMX_PKO_PSE_PQ_BIST_STATUS (CVMX_ADD_IO_SEG(0x0001540000000138ull))
#define CVMX_PKO_PSE_PQ_ECC_CTL0 (CVMX_ADD_IO_SEG(0x0001540000000100ull))
#define CVMX_PKO_PSE_PQ_ECC_DBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000000118ull))
#define CVMX_PKO_PSE_PQ_ECC_DBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000000120ull))
#define CVMX_PKO_PSE_PQ_ECC_SBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000000108ull))
#define CVMX_PKO_PSE_PQ_ECC_SBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000000110ull))
#define CVMX_PKO_PSE_SQ1_BIST_STATUS (CVMX_ADD_IO_SEG(0x0001540000080138ull))
#define CVMX_PKO_PSE_SQ1_ECC_CTL0 (CVMX_ADD_IO_SEG(0x0001540000080100ull))
#define CVMX_PKO_PSE_SQ1_ECC_DBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000080118ull))
#define CVMX_PKO_PSE_SQ1_ECC_DBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000080120ull))
#define CVMX_PKO_PSE_SQ1_ECC_SBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000080108ull))
#define CVMX_PKO_PSE_SQ1_ECC_SBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000080110ull))
#define CVMX_PKO_PSE_SQ2_BIST_STATUS (CVMX_ADD_IO_SEG(0x0001540000100138ull))
#define CVMX_PKO_PSE_SQ2_ECC_CTL0 (CVMX_ADD_IO_SEG(0x0001540000100100ull))
#define CVMX_PKO_PSE_SQ2_ECC_DBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000100118ull))
#define CVMX_PKO_PSE_SQ2_ECC_DBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000100120ull))
#define CVMX_PKO_PSE_SQ2_ECC_SBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000100108ull))
#define CVMX_PKO_PSE_SQ2_ECC_SBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000100110ull))
#define CVMX_PKO_PSE_SQ3_BIST_STATUS (CVMX_ADD_IO_SEG(0x0001540000180138ull))
#define CVMX_PKO_PSE_SQ3_ECC_CTL0 (CVMX_ADD_IO_SEG(0x0001540000180100ull))
#define CVMX_PKO_PSE_SQ3_ECC_DBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000180118ull))
#define CVMX_PKO_PSE_SQ3_ECC_DBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000180120ull))
#define CVMX_PKO_PSE_SQ3_ECC_SBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000180108ull))
#define CVMX_PKO_PSE_SQ3_ECC_SBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000180110ull))
#define CVMX_PKO_PSE_SQ4_BIST_STATUS (CVMX_ADD_IO_SEG(0x0001540000200138ull))
#define CVMX_PKO_PSE_SQ4_ECC_CTL0 (CVMX_ADD_IO_SEG(0x0001540000200100ull))
#define CVMX_PKO_PSE_SQ4_ECC_DBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000200118ull))
#define CVMX_PKO_PSE_SQ4_ECC_DBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000200120ull))
#define CVMX_PKO_PSE_SQ4_ECC_SBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000200108ull))
#define CVMX_PKO_PSE_SQ4_ECC_SBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000200110ull))
#define CVMX_PKO_PSE_SQ5_BIST_STATUS (CVMX_ADD_IO_SEG(0x0001540000280138ull))
#define CVMX_PKO_PSE_SQ5_ECC_CTL0 (CVMX_ADD_IO_SEG(0x0001540000280100ull))
#define CVMX_PKO_PSE_SQ5_ECC_DBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000280118ull))
#define CVMX_PKO_PSE_SQ5_ECC_DBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000280120ull))
#define CVMX_PKO_PSE_SQ5_ECC_SBE_STS0 (CVMX_ADD_IO_SEG(0x0001540000280108ull))
#define CVMX_PKO_PSE_SQ5_ECC_SBE_STS_CMB0 (CVMX_ADD_IO_SEG(0x0001540000280110ull))
#define CVMX_PKO_PTFX_STATUS(offset) (CVMX_ADD_IO_SEG(0x0001540000900100ull) + ((offset) & 31) * 8)
#define CVMX_PKO_PTF_IOBP_CFG (CVMX_ADD_IO_SEG(0x0001540000900300ull))
#define CVMX_PKO_PTGFX_CFG(offset) (CVMX_ADD_IO_SEG(0x0001540000900200ull) + ((offset) & 7) * 8)
#define CVMX_PKO_REG_BIST_RESULT (CVMX_ADD_IO_SEG(0x0001180050000080ull))
#define CVMX_PKO_REG_CMD_BUF (CVMX_ADD_IO_SEG(0x0001180050000010ull))
#define CVMX_PKO_REG_CRC_CTLX(offset) (CVMX_ADD_IO_SEG(0x0001180050000028ull) + ((offset) & 1) * 8)
#define CVMX_PKO_REG_CRC_ENABLE (CVMX_ADD_IO_SEG(0x0001180050000020ull))
#define CVMX_PKO_REG_CRC_IVX(offset) (CVMX_ADD_IO_SEG(0x0001180050000038ull) + ((offset) & 1) * 8)
#define CVMX_PKO_REG_DEBUG0 (CVMX_ADD_IO_SEG(0x0001180050000098ull))
#define CVMX_PKO_REG_DEBUG1 (CVMX_ADD_IO_SEG(0x00011800500000A0ull))
#define CVMX_PKO_REG_DEBUG2 (CVMX_ADD_IO_SEG(0x00011800500000A8ull))
#define CVMX_PKO_REG_DEBUG3 (CVMX_ADD_IO_SEG(0x00011800500000B0ull))
#define CVMX_PKO_REG_DEBUG4 (CVMX_ADD_IO_SEG(0x00011800500000B8ull))
#define CVMX_PKO_REG_ENGINE_INFLIGHT (CVMX_ADD_IO_SEG(0x0001180050000050ull))
#define CVMX_PKO_REG_ENGINE_INFLIGHT1 (CVMX_ADD_IO_SEG(0x0001180050000318ull))
#define CVMX_PKO_REG_ENGINE_STORAGEX(offset) (CVMX_ADD_IO_SEG(0x0001180050000300ull) + ((offset) & 1) * 8)
#define CVMX_PKO_REG_ENGINE_THRESH (CVMX_ADD_IO_SEG(0x0001180050000058ull))
#define CVMX_PKO_REG_ERROR (CVMX_ADD_IO_SEG(0x0001180050000088ull))
#define CVMX_PKO_REG_FLAGS (CVMX_ADD_IO_SEG(0x0001180050000000ull))
#define CVMX_PKO_REG_GMX_PORT_MODE (CVMX_ADD_IO_SEG(0x0001180050000018ull))
#define CVMX_PKO_REG_INT_MASK (CVMX_ADD_IO_SEG(0x0001180050000090ull))
#define CVMX_PKO_REG_LOOPBACK_BPID (CVMX_ADD_IO_SEG(0x0001180050000118ull))
#define CVMX_PKO_REG_LOOPBACK_PKIND (CVMX_ADD_IO_SEG(0x0001180050000068ull))
#define CVMX_PKO_REG_MIN_PKT (CVMX_ADD_IO_SEG(0x0001180050000070ull))
#define CVMX_PKO_REG_PREEMPT (CVMX_ADD_IO_SEG(0x0001180050000110ull))
#define CVMX_PKO_REG_QUEUE_MODE (CVMX_ADD_IO_SEG(0x0001180050000048ull))
#define CVMX_PKO_REG_QUEUE_PREEMPT (CVMX_ADD_IO_SEG(0x0001180050000108ull))
#define CVMX_PKO_REG_QUEUE_PTRS1 (CVMX_ADD_IO_SEG(0x0001180050000100ull))
#define CVMX_PKO_REG_READ_IDX (CVMX_ADD_IO_SEG(0x0001180050000008ull))
#define CVMX_PKO_REG_THROTTLE (CVMX_ADD_IO_SEG(0x0001180050000078ull))
#define CVMX_PKO_REG_TIMESTAMP (CVMX_ADD_IO_SEG(0x0001180050000060ull))
#define CVMX_PKO_SHAPER_CFG (CVMX_ADD_IO_SEG(0x00015400000800F8ull))
#define CVMX_PKO_STATE_UID_IN_USEX_RD(offset) (CVMX_ADD_IO_SEG(0x0001540000900F00ull) + ((offset) & 3) * 8)
#define CVMX_PKO_STATUS (CVMX_ADD_IO_SEG(0x0001540000D00000ull))
#define CVMX_PKO_TXFX_PKT_CNT_RD(offset) (CVMX_ADD_IO_SEG(0x0001540000900E00ull) + ((offset) & 31) * 8)

union cvmx_pko_channel_level {
	uint64_t u64;
	struct cvmx_pko_channel_level_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t cc_level:1;
#else
		uint64_t cc_level:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_pko_channel_level_s cn73xx;
	struct cvmx_pko_channel_level_s cn75xx;
	struct cvmx_pko_channel_level_s cn78xx;
	struct cvmx_pko_channel_level_s cn78xxp2;
};
typedef union cvmx_pko_channel_level cvmx_pko_channel_level_t;

union cvmx_pko_dpfi_ena {
	uint64_t u64;
	struct cvmx_pko_dpfi_ena_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t enable:1;
#else
		uint64_t enable:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_pko_dpfi_ena_s cn73xx;
	struct cvmx_pko_dpfi_ena_s cn75xx;
	struct cvmx_pko_dpfi_ena_s cn78xx;
	struct cvmx_pko_dpfi_ena_s cn78xxp2;
};
typedef union cvmx_pko_dpfi_ena cvmx_pko_dpfi_ena_t;

union cvmx_pko_dpfi_flush {
	uint64_t u64;
	struct cvmx_pko_dpfi_flush_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t flush_en:1;
#else
		uint64_t flush_en:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_pko_dpfi_flush_s cn73xx;
	struct cvmx_pko_dpfi_flush_s cn75xx;
	struct cvmx_pko_dpfi_flush_s cn78xx;
	struct cvmx_pko_dpfi_flush_s cn78xxp2;
};
typedef union cvmx_pko_dpfi_flush cvmx_pko_dpfi_flush_t;

union cvmx_pko_dpfi_fpa_aura {
	uint64_t u64;
	struct cvmx_pko_dpfi_fpa_aura_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t node:2;
		uint64_t laura:10;
#else
		uint64_t laura:10;
		uint64_t node:2;
		uint64_t reserved_12_63:52;
#endif
	} s;
	struct cvmx_pko_dpfi_fpa_aura_s cn73xx;
	struct cvmx_pko_dpfi_fpa_aura_s cn75xx;
	struct cvmx_pko_dpfi_fpa_aura_s cn78xx;
	struct cvmx_pko_dpfi_fpa_aura_s cn78xxp2;
};
typedef union cvmx_pko_dpfi_fpa_aura cvmx_pko_dpfi_fpa_aura_t;

union cvmx_pko_dpfi_status {
	uint64_t u64;
	struct cvmx_pko_dpfi_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t ptr_cnt:32;
		uint64_t reserved_13_31:19;
		uint64_t isrd_ptr1_rtn_full:1;
		uint64_t isrd_ptr0_rtn_full:1;
		uint64_t isrm_ptr1_rtn_full:1;
		uint64_t isrm_ptr0_rtn_full:1;
		uint64_t isrd_ptr1_val:1;
		uint64_t isrd_ptr0_val:1;
		uint64_t isrm_ptr1_val:1;
		uint64_t isrm_ptr0_val:1;
		uint64_t ptr_req_pend:1;
		uint64_t ptr_rtn_pend:1;
		uint64_t fpa_empty:1;
		uint64_t dpfi_empty:1;
		uint64_t cache_flushed:1;
#else
		uint64_t cache_flushed:1;
		uint64_t dpfi_empty:1;
		uint64_t fpa_empty:1;
		uint64_t ptr_rtn_pend:1;
		uint64_t ptr_req_pend:1;
		uint64_t isrm_ptr0_val:1;
		uint64_t isrm_ptr1_val:1;
		uint64_t isrd_ptr0_val:1;
		uint64_t isrd_ptr1_val:1;
		uint64_t isrm_ptr0_rtn_full:1;
		uint64_t isrm_ptr1_rtn_full:1;
		uint64_t isrd_ptr0_rtn_full:1;
		uint64_t isrd_ptr1_rtn_full:1;
		uint64_t reserved_13_31:19;
		uint64_t ptr_cnt:32;
#endif
	} s;
	struct cvmx_pko_dpfi_status_s cn73xx;
	struct cvmx_pko_dpfi_status_s cn75xx;
	struct cvmx_pko_dpfi_status_s cn78xx;
	struct cvmx_pko_dpfi_status_s cn78xxp2;
};
typedef union cvmx_pko_dpfi_status cvmx_pko_dpfi_status_t;

union cvmx_pko_dqx_bytes {
	uint64_t u64;
	struct cvmx_pko_dqx_bytes_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t count:48;
#else
		uint64_t count:48;
		uint64_t reserved_48_63:16;
#endif
	} s;
	struct cvmx_pko_dqx_bytes_s cn73xx;
	struct cvmx_pko_dqx_bytes_s cn75xx;
	struct cvmx_pko_dqx_bytes_s cn78xx;
	struct cvmx_pko_dqx_bytes_s cn78xxp2;
};
typedef union cvmx_pko_dqx_bytes cvmx_pko_dqx_bytes_t;

union cvmx_pko_dqx_cir {
	uint64_t u64;
	struct cvmx_pko_dqx_cir_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t burst_exponent:4;
		uint64_t burst_mantissa:8;
		uint64_t reserved_17_28:12;
		uint64_t rate_divider_exponent:4;
		uint64_t rate_exponent:4;
		uint64_t rate_mantissa:8;
		uint64_t enable:1;
#else
		uint64_t enable:1;
		uint64_t rate_mantissa:8;
		uint64_t rate_exponent:4;
		uint64_t rate_divider_exponent:4;
		uint64_t reserved_17_28:12;
		uint64_t burst_mantissa:8;
		uint64_t burst_exponent:4;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_dqx_cir_s cn73xx;
	struct cvmx_pko_dqx_cir_s cn75xx;
	struct cvmx_pko_dqx_cir_s cn78xx;
	struct cvmx_pko_dqx_cir_s cn78xxp2;
};
typedef union cvmx_pko_dqx_cir cvmx_pko_dqx_cir_t;

union cvmx_pko_dqx_dropped_bytes {
	uint64_t u64;
	struct cvmx_pko_dqx_dropped_bytes_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t count:48;
#else
		uint64_t count:48;
		uint64_t reserved_48_63:16;
#endif
	} s;
	struct cvmx_pko_dqx_dropped_bytes_s cn73xx;
	struct cvmx_pko_dqx_dropped_bytes_s cn75xx;
	struct cvmx_pko_dqx_dropped_bytes_s cn78xx;
	struct cvmx_pko_dqx_dropped_bytes_s cn78xxp2;
};
typedef union cvmx_pko_dqx_dropped_bytes cvmx_pko_dqx_dropped_bytes_t;

union cvmx_pko_dqx_dropped_packets {
	uint64_t u64;
	struct cvmx_pko_dqx_dropped_packets_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_40_63:24;
		uint64_t count:40;
#else
		uint64_t count:40;
		uint64_t reserved_40_63:24;
#endif
	} s;
	struct cvmx_pko_dqx_dropped_packets_s cn73xx;
	struct cvmx_pko_dqx_dropped_packets_s cn75xx;
	struct cvmx_pko_dqx_dropped_packets_s cn78xx;
	struct cvmx_pko_dqx_dropped_packets_s cn78xxp2;
};
typedef union cvmx_pko_dqx_dropped_packets cvmx_pko_dqx_dropped_packets_t;

union cvmx_pko_dqx_fifo {
	uint64_t u64;
	struct cvmx_pko_dqx_fifo_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t p_con:1;
		uint64_t head:7;
		uint64_t tail:7;
#else
		uint64_t tail:7;
		uint64_t head:7;
		uint64_t p_con:1;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_pko_dqx_fifo_s cn73xx;
	struct cvmx_pko_dqx_fifo_s cn75xx;
	struct cvmx_pko_dqx_fifo_s cn78xx;
	struct cvmx_pko_dqx_fifo_s cn78xxp2;
};
typedef union cvmx_pko_dqx_fifo cvmx_pko_dqx_fifo_t;

union cvmx_pko_dqx_packets {
	uint64_t u64;
	struct cvmx_pko_dqx_packets_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_40_63:24;
		uint64_t count:40;
#else
		uint64_t count:40;
		uint64_t reserved_40_63:24;
#endif
	} s;
	struct cvmx_pko_dqx_packets_s cn73xx;
	struct cvmx_pko_dqx_packets_s cn75xx;
	struct cvmx_pko_dqx_packets_s cn78xx;
	struct cvmx_pko_dqx_packets_s cn78xxp2;
};
typedef union cvmx_pko_dqx_packets cvmx_pko_dqx_packets_t;

union cvmx_pko_dqx_pick {
	uint64_t u64;
	struct cvmx_pko_dqx_pick_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dq:10;
		uint64_t color:2;
		uint64_t child:10;
		uint64_t bubble:1;
		uint64_t p_con:1;
		uint64_t c_con:1;
		uint64_t uid:7;
		uint64_t jump:1;
		uint64_t fpd:1;
		uint64_t ds:1;
		uint64_t adjust:9;
		uint64_t pir_dis:1;
		uint64_t cir_dis:1;
		uint64_t red_algo_override:2;
		uint64_t length:16;
#else
		uint64_t length:16;
		uint64_t red_algo_override:2;
		uint64_t cir_dis:1;
		uint64_t pir_dis:1;
		uint64_t adjust:9;
		uint64_t ds:1;
		uint64_t fpd:1;
		uint64_t jump:1;
		uint64_t uid:7;
		uint64_t c_con:1;
		uint64_t p_con:1;
		uint64_t bubble:1;
		uint64_t child:10;
		uint64_t color:2;
		uint64_t dq:10;
#endif
	} s;
	struct cvmx_pko_dqx_pick_s cn73xx;
	struct cvmx_pko_dqx_pick_s cn75xx;
	struct cvmx_pko_dqx_pick_s cn78xx;
	struct cvmx_pko_dqx_pick_s cn78xxp2;
};
typedef union cvmx_pko_dqx_pick cvmx_pko_dqx_pick_t;

union cvmx_pko_dqx_pir {
	uint64_t u64;
	struct cvmx_pko_dqx_pir_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t burst_exponent:4;
		uint64_t burst_mantissa:8;
		uint64_t reserved_17_28:12;
		uint64_t rate_divider_exponent:4;
		uint64_t rate_exponent:4;
		uint64_t rate_mantissa:8;
		uint64_t enable:1;
#else
		uint64_t enable:1;
		uint64_t rate_mantissa:8;
		uint64_t rate_exponent:4;
		uint64_t rate_divider_exponent:4;
		uint64_t reserved_17_28:12;
		uint64_t burst_mantissa:8;
		uint64_t burst_exponent:4;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_dqx_pir_s cn73xx;
	struct cvmx_pko_dqx_pir_s cn75xx;
	struct cvmx_pko_dqx_pir_s cn78xx;
	struct cvmx_pko_dqx_pir_s cn78xxp2;
};
typedef union cvmx_pko_dqx_pir cvmx_pko_dqx_pir_t;

union cvmx_pko_dqx_pointers {
	uint64_t u64;
	struct cvmx_pko_dqx_pointers_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_26_63:38;
		uint64_t prev:10;
		uint64_t reserved_10_15:6;
		uint64_t next:10;
#else
		uint64_t next:10;
		uint64_t reserved_10_15:6;
		uint64_t prev:10;
		uint64_t reserved_26_63:38;
#endif
	} s;
	struct cvmx_pko_dqx_pointers_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_24_63:40;
		uint64_t prev:8;
		uint64_t reserved_8_15:8;
		uint64_t next:8;
#else
		uint64_t next:8;
		uint64_t reserved_8_15:8;
		uint64_t prev:8;
		uint64_t reserved_24_63:40;
#endif
	} cn73xx;
	struct cvmx_pko_dqx_pointers_cn73xx cn75xx;
	struct cvmx_pko_dqx_pointers_s cn78xx;
	struct cvmx_pko_dqx_pointers_s cn78xxp2;
};
typedef union cvmx_pko_dqx_pointers cvmx_pko_dqx_pointers_t;

union cvmx_pko_dqx_sched_state {
	uint64_t u64;
	struct cvmx_pko_dqx_sched_state_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_25_63:39;
		uint64_t rr_count:25;
#else
		uint64_t rr_count:25;
		uint64_t reserved_25_63:39;
#endif
	} s;
	struct cvmx_pko_dqx_sched_state_s cn73xx;
	struct cvmx_pko_dqx_sched_state_s cn75xx;
	struct cvmx_pko_dqx_sched_state_s cn78xx;
	struct cvmx_pko_dqx_sched_state_s cn78xxp2;
};
typedef union cvmx_pko_dqx_sched_state cvmx_pko_dqx_sched_state_t;

union cvmx_pko_dqx_schedule {
	uint64_t u64;
	struct cvmx_pko_dqx_schedule_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t prio:4;
		uint64_t rr_quantum:24;
#else
		uint64_t rr_quantum:24;
		uint64_t prio:4;
		uint64_t reserved_28_63:36;
#endif
	} s;
	struct cvmx_pko_dqx_schedule_s cn73xx;
	struct cvmx_pko_dqx_schedule_s cn75xx;
	struct cvmx_pko_dqx_schedule_s cn78xx;
	struct cvmx_pko_dqx_schedule_s cn78xxp2;
};
typedef union cvmx_pko_dqx_schedule cvmx_pko_dqx_schedule_t;

union cvmx_pko_dqx_shape {
	uint64_t u64;
	struct cvmx_pko_dqx_shape_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_27_63:37;
		uint64_t schedule_list:2;
		uint64_t length_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t yellow_disable:1;
		uint64_t red_disable:1;
		uint64_t red_algo:2;
		uint64_t adjust:9;
#else
		uint64_t adjust:9;
		uint64_t red_algo:2;
		uint64_t red_disable:1;
		uint64_t yellow_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t length_disable:1;
		uint64_t schedule_list:2;
		uint64_t reserved_27_63:37;
#endif
	} s;
	struct cvmx_pko_dqx_shape_s cn73xx;
	struct cvmx_pko_dqx_shape_s cn75xx;
	struct cvmx_pko_dqx_shape_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_25_63:39;
		uint64_t length_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t yellow_disable:1;
		uint64_t red_disable:1;
		uint64_t red_algo:2;
		uint64_t adjust:9;
#else
		uint64_t adjust:9;
		uint64_t red_algo:2;
		uint64_t red_disable:1;
		uint64_t yellow_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t length_disable:1;
		uint64_t reserved_25_63:39;
#endif
	} cn78xx;
	struct cvmx_pko_dqx_shape_cn78xx cn78xxp2;
};
typedef union cvmx_pko_dqx_shape cvmx_pko_dqx_shape_t;

union cvmx_pko_dqx_shape_state {
	uint64_t u64;
	struct cvmx_pko_dqx_shape_state_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_60_63:4;
		uint64_t tw_timestamp:6;
		uint64_t color:2;
		uint64_t pir_accum:26;
		uint64_t cir_accum:26;
#else
		uint64_t cir_accum:26;
		uint64_t pir_accum:26;
		uint64_t color:2;
		uint64_t tw_timestamp:6;
		uint64_t reserved_60_63:4;
#endif
	} s;
	struct cvmx_pko_dqx_shape_state_s cn73xx;
	struct cvmx_pko_dqx_shape_state_s cn75xx;
	struct cvmx_pko_dqx_shape_state_s cn78xx;
	struct cvmx_pko_dqx_shape_state_s cn78xxp2;
};
typedef union cvmx_pko_dqx_shape_state cvmx_pko_dqx_shape_state_t;

union cvmx_pko_dqx_sw_xoff {
	uint64_t u64;
	struct cvmx_pko_dqx_sw_xoff_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t drain_irq:1;
		uint64_t drain_null_link:1;
		uint64_t drain:1;
		uint64_t xoff:1;
#else
		uint64_t xoff:1;
		uint64_t drain:1;
		uint64_t drain_null_link:1;
		uint64_t drain_irq:1;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_pko_dqx_sw_xoff_s cn73xx;
	struct cvmx_pko_dqx_sw_xoff_s cn75xx;
	struct cvmx_pko_dqx_sw_xoff_s cn78xx;
	struct cvmx_pko_dqx_sw_xoff_s cn78xxp2;
};
typedef union cvmx_pko_dqx_sw_xoff cvmx_pko_dqx_sw_xoff_t;

union cvmx_pko_dqx_topology {
	uint64_t u64;
	struct cvmx_pko_dqx_topology_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_26_63:38;
		uint64_t parent:10;
		uint64_t reserved_0_15:16;
#else
		uint64_t reserved_0_15:16;
		uint64_t parent:10;
		uint64_t reserved_26_63:38;
#endif
	} s;
	struct cvmx_pko_dqx_topology_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_24_63:40;
		uint64_t parent:8;
		uint64_t reserved_0_15:16;
#else
		uint64_t reserved_0_15:16;
		uint64_t parent:8;
		uint64_t reserved_24_63:40;
#endif
	} cn73xx;
	struct cvmx_pko_dqx_topology_cn73xx cn75xx;
	struct cvmx_pko_dqx_topology_s cn78xx;
	struct cvmx_pko_dqx_topology_s cn78xxp2;
};
typedef union cvmx_pko_dqx_topology cvmx_pko_dqx_topology_t;

union cvmx_pko_dqx_wm_buf_cnt {
	uint64_t u64;
	struct cvmx_pko_dqx_wm_buf_cnt_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_36_63:28;
		uint64_t count:36;
#else
		uint64_t count:36;
		uint64_t reserved_36_63:28;
#endif
	} s;
	struct cvmx_pko_dqx_wm_buf_cnt_s cn73xx;
	struct cvmx_pko_dqx_wm_buf_cnt_s cn75xx;
	struct cvmx_pko_dqx_wm_buf_cnt_s cn78xx;
	struct cvmx_pko_dqx_wm_buf_cnt_s cn78xxp2;
};
typedef union cvmx_pko_dqx_wm_buf_cnt cvmx_pko_dqx_wm_buf_cnt_t;

union cvmx_pko_dqx_wm_buf_ctl {
	uint64_t u64;
	struct cvmx_pko_dqx_wm_buf_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_51_63:13;
		uint64_t enable:1;
		uint64_t reserved_49_49:1;
		uint64_t intr:1;
		uint64_t reserved_36_47:12;
		uint64_t threshold:36;
#else
		uint64_t threshold:36;
		uint64_t reserved_36_47:12;
		uint64_t intr:1;
		uint64_t reserved_49_49:1;
		uint64_t enable:1;
		uint64_t reserved_51_63:13;
#endif
	} s;
	struct cvmx_pko_dqx_wm_buf_ctl_s cn73xx;
	struct cvmx_pko_dqx_wm_buf_ctl_s cn75xx;
	struct cvmx_pko_dqx_wm_buf_ctl_s cn78xx;
	struct cvmx_pko_dqx_wm_buf_ctl_s cn78xxp2;
};
typedef union cvmx_pko_dqx_wm_buf_ctl cvmx_pko_dqx_wm_buf_ctl_t;

union cvmx_pko_dqx_wm_buf_ctl_w1c {
	uint64_t u64;
	struct cvmx_pko_dqx_wm_buf_ctl_w1c_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_49_63:15;
		uint64_t intr:1;
		uint64_t reserved_0_47:48;
#else
		uint64_t reserved_0_47:48;
		uint64_t intr:1;
		uint64_t reserved_49_63:15;
#endif
	} s;
	struct cvmx_pko_dqx_wm_buf_ctl_w1c_s cn73xx;
	struct cvmx_pko_dqx_wm_buf_ctl_w1c_s cn75xx;
	struct cvmx_pko_dqx_wm_buf_ctl_w1c_s cn78xx;
	struct cvmx_pko_dqx_wm_buf_ctl_w1c_s cn78xxp2;
};
typedef union cvmx_pko_dqx_wm_buf_ctl_w1c cvmx_pko_dqx_wm_buf_ctl_w1c_t;

union cvmx_pko_dqx_wm_cnt {
	uint64_t u64;
	struct cvmx_pko_dqx_wm_cnt_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t count:48;
#else
		uint64_t count:48;
		uint64_t reserved_48_63:16;
#endif
	} s;
	struct cvmx_pko_dqx_wm_cnt_s cn73xx;
	struct cvmx_pko_dqx_wm_cnt_s cn75xx;
	struct cvmx_pko_dqx_wm_cnt_s cn78xx;
	struct cvmx_pko_dqx_wm_cnt_s cn78xxp2;
};
typedef union cvmx_pko_dqx_wm_cnt cvmx_pko_dqx_wm_cnt_t;

union cvmx_pko_dqx_wm_ctl {
	uint64_t u64;
	struct cvmx_pko_dqx_wm_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_52_63:12;
		uint64_t ncb_query_rsp:1;
		uint64_t enable:1;
		uint64_t kind:1;
		uint64_t intr:1;
		uint64_t threshold:48;
#else
		uint64_t threshold:48;
		uint64_t intr:1;
		uint64_t kind:1;
		uint64_t enable:1;
		uint64_t ncb_query_rsp:1;
		uint64_t reserved_52_63:12;
#endif
	} s;
	struct cvmx_pko_dqx_wm_ctl_s cn73xx;
	struct cvmx_pko_dqx_wm_ctl_s cn75xx;
	struct cvmx_pko_dqx_wm_ctl_s cn78xx;
	struct cvmx_pko_dqx_wm_ctl_s cn78xxp2;
};
typedef union cvmx_pko_dqx_wm_ctl cvmx_pko_dqx_wm_ctl_t;

union cvmx_pko_dqx_wm_ctl_w1c {
	uint64_t u64;
	struct cvmx_pko_dqx_wm_ctl_w1c_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_49_63:15;
		uint64_t intr:1;
		uint64_t reserved_0_47:48;
#else
		uint64_t reserved_0_47:48;
		uint64_t intr:1;
		uint64_t reserved_49_63:15;
#endif
	} s;
	struct cvmx_pko_dqx_wm_ctl_w1c_s cn73xx;
	struct cvmx_pko_dqx_wm_ctl_w1c_s cn75xx;
	struct cvmx_pko_dqx_wm_ctl_w1c_s cn78xx;
	struct cvmx_pko_dqx_wm_ctl_w1c_s cn78xxp2;
};
typedef union cvmx_pko_dqx_wm_ctl_w1c cvmx_pko_dqx_wm_ctl_w1c_t;

union cvmx_pko_dq_csr_bus_debug {
	uint64_t u64;
	struct cvmx_pko_dq_csr_bus_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t csr_bus_debug:64;
#else
		uint64_t csr_bus_debug:64;
#endif
	} s;
	struct cvmx_pko_dq_csr_bus_debug_s cn73xx;
	struct cvmx_pko_dq_csr_bus_debug_s cn75xx;
	struct cvmx_pko_dq_csr_bus_debug_s cn78xx;
	struct cvmx_pko_dq_csr_bus_debug_s cn78xxp2;
};
typedef union cvmx_pko_dq_csr_bus_debug cvmx_pko_dq_csr_bus_debug_t;

union cvmx_pko_dq_debug {
	uint64_t u64;
	struct cvmx_pko_dq_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dbg_vec:64;
#else
		uint64_t dbg_vec:64;
#endif
	} s;
	struct cvmx_pko_dq_debug_s cn73xx;
	struct cvmx_pko_dq_debug_s cn75xx;
	struct cvmx_pko_dq_debug_s cn78xx;
	struct cvmx_pko_dq_debug_s cn78xxp2;
};
typedef union cvmx_pko_dq_debug cvmx_pko_dq_debug_t;

union cvmx_pko_drain_irq {
	uint64_t u64;
	struct cvmx_pko_drain_irq_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t intr:1;
#else
		uint64_t intr:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_pko_drain_irq_s cn73xx;
	struct cvmx_pko_drain_irq_s cn75xx;
	struct cvmx_pko_drain_irq_s cn78xx;
	struct cvmx_pko_drain_irq_s cn78xxp2;
};
typedef union cvmx_pko_drain_irq cvmx_pko_drain_irq_t;

union cvmx_pko_enable {
	uint64_t u64;
	struct cvmx_pko_enable_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t enable:1;
#else
		uint64_t enable:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_pko_enable_s cn73xx;
	struct cvmx_pko_enable_s cn75xx;
	struct cvmx_pko_enable_s cn78xx;
	struct cvmx_pko_enable_s cn78xxp2;
};
typedef union cvmx_pko_enable cvmx_pko_enable_t;

union cvmx_pko_formatx_ctl {
	uint64_t u64;
	struct cvmx_pko_formatx_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_27_63:37;
		uint64_t offset:11;
		uint64_t y_mask:4;
		uint64_t y_val:4;
		uint64_t r_mask:4;
		uint64_t r_val:4;
#else
		uint64_t r_val:4;
		uint64_t r_mask:4;
		uint64_t y_val:4;
		uint64_t y_mask:4;
		uint64_t offset:11;
		uint64_t reserved_27_63:37;
#endif
	} s;
	struct cvmx_pko_formatx_ctl_s cn73xx;
	struct cvmx_pko_formatx_ctl_s cn75xx;
	struct cvmx_pko_formatx_ctl_s cn78xx;
	struct cvmx_pko_formatx_ctl_s cn78xxp2;
};
typedef union cvmx_pko_formatx_ctl cvmx_pko_formatx_ctl_t;

union cvmx_pko_l1_sqx_cir {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_cir_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t burst_exponent:4;
		uint64_t burst_mantissa:8;
		uint64_t reserved_17_28:12;
		uint64_t rate_divider_exponent:4;
		uint64_t rate_exponent:4;
		uint64_t rate_mantissa:8;
		uint64_t enable:1;
#else
		uint64_t enable:1;
		uint64_t rate_mantissa:8;
		uint64_t rate_exponent:4;
		uint64_t rate_divider_exponent:4;
		uint64_t reserved_17_28:12;
		uint64_t burst_mantissa:8;
		uint64_t burst_exponent:4;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l1_sqx_cir_s cn73xx;
	struct cvmx_pko_l1_sqx_cir_s cn75xx;
	struct cvmx_pko_l1_sqx_cir_s cn78xx;
	struct cvmx_pko_l1_sqx_cir_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_cir cvmx_pko_l1_sqx_cir_t;

union cvmx_pko_l1_sqx_dropped_bytes {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_dropped_bytes_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t count:48;
#else
		uint64_t count:48;
		uint64_t reserved_48_63:16;
#endif
	} s;
	struct cvmx_pko_l1_sqx_dropped_bytes_s cn73xx;
	struct cvmx_pko_l1_sqx_dropped_bytes_s cn75xx;
	struct cvmx_pko_l1_sqx_dropped_bytes_s cn78xx;
	struct cvmx_pko_l1_sqx_dropped_bytes_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_dropped_bytes cvmx_pko_l1_sqx_dropped_bytes_t;

union cvmx_pko_l1_sqx_dropped_packets {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_dropped_packets_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_40_63:24;
		uint64_t count:40;
#else
		uint64_t count:40;
		uint64_t reserved_40_63:24;
#endif
	} s;
	struct cvmx_pko_l1_sqx_dropped_packets_s cn73xx;
	struct cvmx_pko_l1_sqx_dropped_packets_s cn75xx;
	struct cvmx_pko_l1_sqx_dropped_packets_s cn78xx;
	struct cvmx_pko_l1_sqx_dropped_packets_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_dropped_packets cvmx_pko_l1_sqx_dropped_packets_t;

union cvmx_pko_l1_sqx_green {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_green_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t rr_active:1;
		uint64_t active_vec:20;
		uint64_t reserved_19_19:1;
		uint64_t head:9;
		uint64_t reserved_9_9:1;
		uint64_t tail:9;
#else
		uint64_t tail:9;
		uint64_t reserved_9_9:1;
		uint64_t head:9;
		uint64_t reserved_19_19:1;
		uint64_t active_vec:20;
		uint64_t rr_active:1;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l1_sqx_green_s cn73xx;
	struct cvmx_pko_l1_sqx_green_s cn75xx;
	struct cvmx_pko_l1_sqx_green_s cn78xx;
	struct cvmx_pko_l1_sqx_green_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_green cvmx_pko_l1_sqx_green_t;

union cvmx_pko_l1_sqx_green_bytes {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_green_bytes_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t count:48;
#else
		uint64_t count:48;
		uint64_t reserved_48_63:16;
#endif
	} s;
	struct cvmx_pko_l1_sqx_green_bytes_s cn73xx;
	struct cvmx_pko_l1_sqx_green_bytes_s cn75xx;
	struct cvmx_pko_l1_sqx_green_bytes_s cn78xx;
	struct cvmx_pko_l1_sqx_green_bytes_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_green_bytes cvmx_pko_l1_sqx_green_bytes_t;

union cvmx_pko_l1_sqx_green_packets {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_green_packets_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_40_63:24;
		uint64_t count:40;
#else
		uint64_t count:40;
		uint64_t reserved_40_63:24;
#endif
	} s;
	struct cvmx_pko_l1_sqx_green_packets_s cn73xx;
	struct cvmx_pko_l1_sqx_green_packets_s cn75xx;
	struct cvmx_pko_l1_sqx_green_packets_s cn78xx;
	struct cvmx_pko_l1_sqx_green_packets_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_green_packets cvmx_pko_l1_sqx_green_packets_t;

union cvmx_pko_l1_sqx_link {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_link_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_49_63:15;
		uint64_t link:5;
		uint64_t reserved_32_43:12;
		uint64_t cc_word_cnt:20;
		uint64_t cc_packet_cnt:10;
		uint64_t cc_enable:1;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t cc_enable:1;
		uint64_t cc_packet_cnt:10;
		uint64_t cc_word_cnt:20;
		uint64_t reserved_32_43:12;
		uint64_t link:5;
		uint64_t reserved_49_63:15;
#endif
	} s;
	struct cvmx_pko_l1_sqx_link_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t link:4;
		uint64_t reserved_32_43:12;
		uint64_t cc_word_cnt:20;
		uint64_t cc_packet_cnt:10;
		uint64_t cc_enable:1;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t cc_enable:1;
		uint64_t cc_packet_cnt:10;
		uint64_t cc_word_cnt:20;
		uint64_t reserved_32_43:12;
		uint64_t link:4;
		uint64_t reserved_48_63:16;
#endif
	} cn73xx;
	struct cvmx_pko_l1_sqx_link_cn73xx cn75xx;
	struct cvmx_pko_l1_sqx_link_s cn78xx;
	struct cvmx_pko_l1_sqx_link_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_link cvmx_pko_l1_sqx_link_t;

union cvmx_pko_l1_sqx_pick {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_pick_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dq:10;
		uint64_t color:2;
		uint64_t child:10;
		uint64_t bubble:1;
		uint64_t p_con:1;
		uint64_t c_con:1;
		uint64_t uid:7;
		uint64_t jump:1;
		uint64_t fpd:1;
		uint64_t ds:1;
		uint64_t adjust:9;
		uint64_t pir_dis:1;
		uint64_t cir_dis:1;
		uint64_t red_algo_override:2;
		uint64_t length:16;
#else
		uint64_t length:16;
		uint64_t red_algo_override:2;
		uint64_t cir_dis:1;
		uint64_t pir_dis:1;
		uint64_t adjust:9;
		uint64_t ds:1;
		uint64_t fpd:1;
		uint64_t jump:1;
		uint64_t uid:7;
		uint64_t c_con:1;
		uint64_t p_con:1;
		uint64_t bubble:1;
		uint64_t child:10;
		uint64_t color:2;
		uint64_t dq:10;
#endif
	} s;
	struct cvmx_pko_l1_sqx_pick_s cn73xx;
	struct cvmx_pko_l1_sqx_pick_s cn75xx;
	struct cvmx_pko_l1_sqx_pick_s cn78xx;
	struct cvmx_pko_l1_sqx_pick_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_pick cvmx_pko_l1_sqx_pick_t;

union cvmx_pko_l1_sqx_red {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_red_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_19_63:45;
		uint64_t head:9;
		uint64_t reserved_9_9:1;
		uint64_t tail:9;
#else
		uint64_t tail:9;
		uint64_t reserved_9_9:1;
		uint64_t head:9;
		uint64_t reserved_19_63:45;
#endif
	} s;
	struct cvmx_pko_l1_sqx_red_s cn73xx;
	struct cvmx_pko_l1_sqx_red_s cn75xx;
	struct cvmx_pko_l1_sqx_red_s cn78xx;
	struct cvmx_pko_l1_sqx_red_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_red cvmx_pko_l1_sqx_red_t;

union cvmx_pko_l1_sqx_red_bytes {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_red_bytes_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t count:48;
#else
		uint64_t count:48;
		uint64_t reserved_48_63:16;
#endif
	} s;
	struct cvmx_pko_l1_sqx_red_bytes_s cn73xx;
	struct cvmx_pko_l1_sqx_red_bytes_s cn75xx;
	struct cvmx_pko_l1_sqx_red_bytes_s cn78xx;
	struct cvmx_pko_l1_sqx_red_bytes_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_red_bytes cvmx_pko_l1_sqx_red_bytes_t;

union cvmx_pko_l1_sqx_red_packets {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_red_packets_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_40_63:24;
		uint64_t count:40;
#else
		uint64_t count:40;
		uint64_t reserved_40_63:24;
#endif
	} s;
	struct cvmx_pko_l1_sqx_red_packets_s cn73xx;
	struct cvmx_pko_l1_sqx_red_packets_s cn75xx;
	struct cvmx_pko_l1_sqx_red_packets_s cn78xx;
	struct cvmx_pko_l1_sqx_red_packets_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_red_packets cvmx_pko_l1_sqx_red_packets_t;

union cvmx_pko_l1_sqx_schedule {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_schedule_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dummy:40;
		uint64_t rr_quantum:24;
#else
		uint64_t rr_quantum:24;
		uint64_t dummy:40;
#endif
	} s;
	struct cvmx_pko_l1_sqx_schedule_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_24_63:40;
		uint64_t rr_quantum:24;
#else
		uint64_t rr_quantum:24;
		uint64_t reserved_24_63:40;
#endif
	} cn73xx;
	struct cvmx_pko_l1_sqx_schedule_cn73xx cn75xx;
	struct cvmx_pko_l1_sqx_schedule_s cn78xx;
	struct cvmx_pko_l1_sqx_schedule_cn73xx cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_schedule cvmx_pko_l1_sqx_schedule_t;

union cvmx_pko_l1_sqx_shape {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_shape_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_25_63:39;
		uint64_t length_disable:1;
		uint64_t reserved_18_23:6;
		uint64_t link:5;
		uint64_t reserved_9_12:4;
		uint64_t adjust:9;
#else
		uint64_t adjust:9;
		uint64_t reserved_9_12:4;
		uint64_t link:5;
		uint64_t reserved_18_23:6;
		uint64_t length_disable:1;
		uint64_t reserved_25_63:39;
#endif
	} s;
	struct cvmx_pko_l1_sqx_shape_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_25_63:39;
		uint64_t length_disable:1;
		uint64_t reserved_17_23:7;
		uint64_t link:4;
		uint64_t reserved_9_12:4;
		uint64_t adjust:9;
#else
		uint64_t adjust:9;
		uint64_t reserved_9_12:4;
		uint64_t link:4;
		uint64_t reserved_17_23:7;
		uint64_t length_disable:1;
		uint64_t reserved_25_63:39;
#endif
	} cn73xx;
	struct cvmx_pko_l1_sqx_shape_cn73xx cn75xx;
	struct cvmx_pko_l1_sqx_shape_s cn78xx;
	struct cvmx_pko_l1_sqx_shape_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_shape cvmx_pko_l1_sqx_shape_t;

union cvmx_pko_l1_sqx_shape_state {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_shape_state_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_60_63:4;
		uint64_t tw_timestamp:6;
		uint64_t color2:1;
		uint64_t color:1;
		uint64_t reserved_26_51:26;
		uint64_t cir_accum:26;
#else
		uint64_t cir_accum:26;
		uint64_t reserved_26_51:26;
		uint64_t color:1;
		uint64_t color2:1;
		uint64_t tw_timestamp:6;
		uint64_t reserved_60_63:4;
#endif
	} s;
	struct cvmx_pko_l1_sqx_shape_state_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_60_63:4;
		uint64_t tw_timestamp:6;
		uint64_t reserved_53_53:1;
		uint64_t color:1;
		uint64_t reserved_26_51:26;
		uint64_t cir_accum:26;
#else
		uint64_t cir_accum:26;
		uint64_t reserved_26_51:26;
		uint64_t color:1;
		uint64_t reserved_53_53:1;
		uint64_t tw_timestamp:6;
		uint64_t reserved_60_63:4;
#endif
	} cn73xx;
	struct cvmx_pko_l1_sqx_shape_state_cn73xx cn75xx;
	struct cvmx_pko_l1_sqx_shape_state_s cn78xx;
	struct cvmx_pko_l1_sqx_shape_state_cn73xx cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_shape_state cvmx_pko_l1_sqx_shape_state_t;

union cvmx_pko_l1_sqx_sw_xoff {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_sw_xoff_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t drain_irq:1;
		uint64_t drain_null_link:1;
		uint64_t drain:1;
		uint64_t xoff:1;
#else
		uint64_t xoff:1;
		uint64_t drain:1;
		uint64_t drain_null_link:1;
		uint64_t drain_irq:1;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_pko_l1_sqx_sw_xoff_s cn73xx;
	struct cvmx_pko_l1_sqx_sw_xoff_s cn75xx;
	struct cvmx_pko_l1_sqx_sw_xoff_s cn78xx;
	struct cvmx_pko_l1_sqx_sw_xoff_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_sw_xoff cvmx_pko_l1_sqx_sw_xoff_t;

union cvmx_pko_l1_sqx_topology {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_topology_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t prio_anchor:9;
		uint64_t reserved_21_31:11;
		uint64_t link:5;
		uint64_t reserved_5_15:11;
		uint64_t rr_prio:4;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t rr_prio:4;
		uint64_t reserved_5_15:11;
		uint64_t link:5;
		uint64_t reserved_21_31:11;
		uint64_t prio_anchor:9;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l1_sqx_topology_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_40_63:24;
		uint64_t prio_anchor:8;
		uint64_t reserved_20_31:12;
		uint64_t link:4;
		uint64_t reserved_5_15:11;
		uint64_t rr_prio:4;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t rr_prio:4;
		uint64_t reserved_5_15:11;
		uint64_t link:4;
		uint64_t reserved_20_31:12;
		uint64_t prio_anchor:8;
		uint64_t reserved_40_63:24;
#endif
	} cn73xx;
	struct cvmx_pko_l1_sqx_topology_cn73xx cn75xx;
	struct cvmx_pko_l1_sqx_topology_s cn78xx;
	struct cvmx_pko_l1_sqx_topology_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_topology cvmx_pko_l1_sqx_topology_t;

union cvmx_pko_l1_sqx_yellow {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_yellow_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_19_63:45;
		uint64_t head:9;
		uint64_t reserved_9_9:1;
		uint64_t tail:9;
#else
		uint64_t tail:9;
		uint64_t reserved_9_9:1;
		uint64_t head:9;
		uint64_t reserved_19_63:45;
#endif
	} s;
	struct cvmx_pko_l1_sqx_yellow_s cn73xx;
	struct cvmx_pko_l1_sqx_yellow_s cn75xx;
	struct cvmx_pko_l1_sqx_yellow_s cn78xx;
	struct cvmx_pko_l1_sqx_yellow_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_yellow cvmx_pko_l1_sqx_yellow_t;

union cvmx_pko_l1_sqx_yellow_bytes {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_yellow_bytes_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t count:48;
#else
		uint64_t count:48;
		uint64_t reserved_48_63:16;
#endif
	} s;
	struct cvmx_pko_l1_sqx_yellow_bytes_s cn73xx;
	struct cvmx_pko_l1_sqx_yellow_bytes_s cn75xx;
	struct cvmx_pko_l1_sqx_yellow_bytes_s cn78xx;
	struct cvmx_pko_l1_sqx_yellow_bytes_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_yellow_bytes cvmx_pko_l1_sqx_yellow_bytes_t;

union cvmx_pko_l1_sqx_yellow_packets {
	uint64_t u64;
	struct cvmx_pko_l1_sqx_yellow_packets_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_40_63:24;
		uint64_t count:40;
#else
		uint64_t count:40;
		uint64_t reserved_40_63:24;
#endif
	} s;
	struct cvmx_pko_l1_sqx_yellow_packets_s cn73xx;
	struct cvmx_pko_l1_sqx_yellow_packets_s cn75xx;
	struct cvmx_pko_l1_sqx_yellow_packets_s cn78xx;
	struct cvmx_pko_l1_sqx_yellow_packets_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqx_yellow_packets cvmx_pko_l1_sqx_yellow_packets_t;

union cvmx_pko_l1_sq_csr_bus_debug {
	uint64_t u64;
	struct cvmx_pko_l1_sq_csr_bus_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t csr_bus_debug:64;
#else
		uint64_t csr_bus_debug:64;
#endif
	} s;
	struct cvmx_pko_l1_sq_csr_bus_debug_s cn73xx;
	struct cvmx_pko_l1_sq_csr_bus_debug_s cn75xx;
	struct cvmx_pko_l1_sq_csr_bus_debug_s cn78xx;
	struct cvmx_pko_l1_sq_csr_bus_debug_s cn78xxp2;
};
typedef union cvmx_pko_l1_sq_csr_bus_debug cvmx_pko_l1_sq_csr_bus_debug_t;

union cvmx_pko_l1_sqa_debug {
	uint64_t u64;
	struct cvmx_pko_l1_sqa_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dbg_vec:64;
#else
		uint64_t dbg_vec:64;
#endif
	} s;
	struct cvmx_pko_l1_sqa_debug_s cn73xx;
	struct cvmx_pko_l1_sqa_debug_s cn75xx;
	struct cvmx_pko_l1_sqa_debug_s cn78xx;
	struct cvmx_pko_l1_sqa_debug_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqa_debug cvmx_pko_l1_sqa_debug_t;

union cvmx_pko_l1_sqb_debug {
	uint64_t u64;
	struct cvmx_pko_l1_sqb_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dbg_vec:64;
#else
		uint64_t dbg_vec:64;
#endif
	} s;
	struct cvmx_pko_l1_sqb_debug_s cn73xx;
	struct cvmx_pko_l1_sqb_debug_s cn75xx;
	struct cvmx_pko_l1_sqb_debug_s cn78xx;
	struct cvmx_pko_l1_sqb_debug_s cn78xxp2;
};
typedef union cvmx_pko_l1_sqb_debug cvmx_pko_l1_sqb_debug_t;

union cvmx_pko_l2_sqx_cir {
	uint64_t u64;
	struct cvmx_pko_l2_sqx_cir_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t burst_exponent:4;
		uint64_t burst_mantissa:8;
		uint64_t reserved_17_28:12;
		uint64_t rate_divider_exponent:4;
		uint64_t rate_exponent:4;
		uint64_t rate_mantissa:8;
		uint64_t enable:1;
#else
		uint64_t enable:1;
		uint64_t rate_mantissa:8;
		uint64_t rate_exponent:4;
		uint64_t rate_divider_exponent:4;
		uint64_t reserved_17_28:12;
		uint64_t burst_mantissa:8;
		uint64_t burst_exponent:4;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l2_sqx_cir_s cn73xx;
	struct cvmx_pko_l2_sqx_cir_s cn75xx;
	struct cvmx_pko_l2_sqx_cir_s cn78xx;
	struct cvmx_pko_l2_sqx_cir_s cn78xxp2;
};
typedef union cvmx_pko_l2_sqx_cir cvmx_pko_l2_sqx_cir_t;

union cvmx_pko_l2_sqx_green {
	uint64_t u64;
	struct cvmx_pko_l2_sqx_green_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t rr_active:1;
		uint64_t active_vec:20;
		uint64_t reserved_19_19:1;
		uint64_t head:9;
		uint64_t reserved_9_9:1;
		uint64_t tail:9;
#else
		uint64_t tail:9;
		uint64_t reserved_9_9:1;
		uint64_t head:9;
		uint64_t reserved_19_19:1;
		uint64_t active_vec:20;
		uint64_t rr_active:1;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l2_sqx_green_s cn73xx;
	struct cvmx_pko_l2_sqx_green_s cn75xx;
	struct cvmx_pko_l2_sqx_green_s cn78xx;
	struct cvmx_pko_l2_sqx_green_s cn78xxp2;
};
typedef union cvmx_pko_l2_sqx_green cvmx_pko_l2_sqx_green_t;

union cvmx_pko_l2_sqx_pick {
	uint64_t u64;
	struct cvmx_pko_l2_sqx_pick_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dq:10;
		uint64_t color:2;
		uint64_t child:10;
		uint64_t bubble:1;
		uint64_t p_con:1;
		uint64_t c_con:1;
		uint64_t uid:7;
		uint64_t jump:1;
		uint64_t fpd:1;
		uint64_t ds:1;
		uint64_t adjust:9;
		uint64_t pir_dis:1;
		uint64_t cir_dis:1;
		uint64_t red_algo_override:2;
		uint64_t length:16;
#else
		uint64_t length:16;
		uint64_t red_algo_override:2;
		uint64_t cir_dis:1;
		uint64_t pir_dis:1;
		uint64_t adjust:9;
		uint64_t ds:1;
		uint64_t fpd:1;
		uint64_t jump:1;
		uint64_t uid:7;
		uint64_t c_con:1;
		uint64_t p_con:1;
		uint64_t bubble:1;
		uint64_t child:10;
		uint64_t color:2;
		uint64_t dq:10;
#endif
	} s;
	struct cvmx_pko_l2_sqx_pick_s cn73xx;
	struct cvmx_pko_l2_sqx_pick_s cn75xx;
	struct cvmx_pko_l2_sqx_pick_s cn78xx;
	struct cvmx_pko_l2_sqx_pick_s cn78xxp2;
};
typedef union cvmx_pko_l2_sqx_pick cvmx_pko_l2_sqx_pick_t;

union cvmx_pko_l2_sqx_pir {
	uint64_t u64;
	struct cvmx_pko_l2_sqx_pir_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t burst_exponent:4;
		uint64_t burst_mantissa:8;
		uint64_t reserved_17_28:12;
		uint64_t rate_divider_exponent:4;
		uint64_t rate_exponent:4;
		uint64_t rate_mantissa:8;
		uint64_t enable:1;
#else
		uint64_t enable:1;
		uint64_t rate_mantissa:8;
		uint64_t rate_exponent:4;
		uint64_t rate_divider_exponent:4;
		uint64_t reserved_17_28:12;
		uint64_t burst_mantissa:8;
		uint64_t burst_exponent:4;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l2_sqx_pir_s cn73xx;
	struct cvmx_pko_l2_sqx_pir_s cn75xx;
	struct cvmx_pko_l2_sqx_pir_s cn78xx;
	struct cvmx_pko_l2_sqx_pir_s cn78xxp2;
};
typedef union cvmx_pko_l2_sqx_pir cvmx_pko_l2_sqx_pir_t;

union cvmx_pko_l2_sqx_pointers {
	uint64_t u64;
	struct cvmx_pko_l2_sqx_pointers_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_25_63:39;
		uint64_t prev:9;
		uint64_t reserved_9_15:7;
		uint64_t next:9;
#else
		uint64_t next:9;
		uint64_t reserved_9_15:7;
		uint64_t prev:9;
		uint64_t reserved_25_63:39;
#endif
	} s;
	struct cvmx_pko_l2_sqx_pointers_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_24_63:40;
		uint64_t prev:8;
		uint64_t reserved_8_15:8;
		uint64_t next:8;
#else
		uint64_t next:8;
		uint64_t reserved_8_15:8;
		uint64_t prev:8;
		uint64_t reserved_24_63:40;
#endif
	} cn73xx;
	struct cvmx_pko_l2_sqx_pointers_cn73xx cn75xx;
	struct cvmx_pko_l2_sqx_pointers_s cn78xx;
	struct cvmx_pko_l2_sqx_pointers_s cn78xxp2;
};
typedef union cvmx_pko_l2_sqx_pointers cvmx_pko_l2_sqx_pointers_t;

union cvmx_pko_l2_sqx_red {
	uint64_t u64;
	struct cvmx_pko_l2_sqx_red_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_19_63:45;
		uint64_t head:9;
		uint64_t reserved_9_9:1;
		uint64_t tail:9;
#else
		uint64_t tail:9;
		uint64_t reserved_9_9:1;
		uint64_t head:9;
		uint64_t reserved_19_63:45;
#endif
	} s;
	struct cvmx_pko_l2_sqx_red_s cn73xx;
	struct cvmx_pko_l2_sqx_red_s cn75xx;
	struct cvmx_pko_l2_sqx_red_s cn78xx;
	struct cvmx_pko_l2_sqx_red_s cn78xxp2;
};
typedef union cvmx_pko_l2_sqx_red cvmx_pko_l2_sqx_red_t;

union cvmx_pko_l2_sqx_sched_state {
	uint64_t u64;
	struct cvmx_pko_l2_sqx_sched_state_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_25_63:39;
		uint64_t rr_count:25;
#else
		uint64_t rr_count:25;
		uint64_t reserved_25_63:39;
#endif
	} s;
	struct cvmx_pko_l2_sqx_sched_state_s cn73xx;
	struct cvmx_pko_l2_sqx_sched_state_s cn75xx;
	struct cvmx_pko_l2_sqx_sched_state_s cn78xx;
	struct cvmx_pko_l2_sqx_sched_state_s cn78xxp2;
};
typedef union cvmx_pko_l2_sqx_sched_state cvmx_pko_l2_sqx_sched_state_t;

union cvmx_pko_l2_sqx_schedule {
	uint64_t u64;
	struct cvmx_pko_l2_sqx_schedule_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t prio:4;
		uint64_t rr_quantum:24;
#else
		uint64_t rr_quantum:24;
		uint64_t prio:4;
		uint64_t reserved_28_63:36;
#endif
	} s;
	struct cvmx_pko_l2_sqx_schedule_s cn73xx;
	struct cvmx_pko_l2_sqx_schedule_s cn75xx;
	struct cvmx_pko_l2_sqx_schedule_s cn78xx;
	struct cvmx_pko_l2_sqx_schedule_s cn78xxp2;
};
typedef union cvmx_pko_l2_sqx_schedule cvmx_pko_l2_sqx_schedule_t;

union cvmx_pko_l2_sqx_shape {
	uint64_t u64;
	struct cvmx_pko_l2_sqx_shape_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_27_63:37;
		uint64_t schedule_list:2;
		uint64_t length_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t yellow_disable:1;
		uint64_t red_disable:1;
		uint64_t red_algo:2;
		uint64_t adjust:9;
#else
		uint64_t adjust:9;
		uint64_t red_algo:2;
		uint64_t red_disable:1;
		uint64_t yellow_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t length_disable:1;
		uint64_t schedule_list:2;
		uint64_t reserved_27_63:37;
#endif
	} s;
	struct cvmx_pko_l2_sqx_shape_s cn73xx;
	struct cvmx_pko_l2_sqx_shape_s cn75xx;
	struct cvmx_pko_l2_sqx_shape_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_25_63:39;
		uint64_t length_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t yellow_disable:1;
		uint64_t red_disable:1;
		uint64_t red_algo:2;
		uint64_t adjust:9;
#else
		uint64_t adjust:9;
		uint64_t red_algo:2;
		uint64_t red_disable:1;
		uint64_t yellow_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t length_disable:1;
		uint64_t reserved_25_63:39;
#endif
	} cn78xx;
	struct cvmx_pko_l2_sqx_shape_cn78xx cn78xxp2;
};
typedef union cvmx_pko_l2_sqx_shape cvmx_pko_l2_sqx_shape_t;

union cvmx_pko_l2_sqx_shape_state {
	uint64_t u64;
	struct cvmx_pko_l2_sqx_shape_state_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_60_63:4;
		uint64_t tw_timestamp:6;
		uint64_t color:2;
		uint64_t pir_accum:26;
		uint64_t cir_accum:26;
#else
		uint64_t cir_accum:26;
		uint64_t pir_accum:26;
		uint64_t color:2;
		uint64_t tw_timestamp:6;
		uint64_t reserved_60_63:4;
#endif
	} s;
	struct cvmx_pko_l2_sqx_shape_state_s cn73xx;
	struct cvmx_pko_l2_sqx_shape_state_s cn75xx;
	struct cvmx_pko_l2_sqx_shape_state_s cn78xx;
	struct cvmx_pko_l2_sqx_shape_state_s cn78xxp2;
};
typedef union cvmx_pko_l2_sqx_shape_state cvmx_pko_l2_sqx_shape_state_t;

union cvmx_pko_l2_sqx_sw_xoff {
	uint64_t u64;
	struct cvmx_pko_l2_sqx_sw_xoff_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t drain_irq:1;
		uint64_t drain_null_link:1;
		uint64_t drain:1;
		uint64_t xoff:1;
#else
		uint64_t xoff:1;
		uint64_t drain:1;
		uint64_t drain_null_link:1;
		uint64_t drain_irq:1;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_pko_l2_sqx_sw_xoff_s cn73xx;
	struct cvmx_pko_l2_sqx_sw_xoff_s cn75xx;
	struct cvmx_pko_l2_sqx_sw_xoff_s cn78xx;
	struct cvmx_pko_l2_sqx_sw_xoff_s cn78xxp2;
};
typedef union cvmx_pko_l2_sqx_sw_xoff cvmx_pko_l2_sqx_sw_xoff_t;

union cvmx_pko_l2_sqx_topology {
	uint64_t u64;
	struct cvmx_pko_l2_sqx_topology_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t prio_anchor:9;
		uint64_t reserved_21_31:11;
		uint64_t parent:5;
		uint64_t reserved_5_15:11;
		uint64_t rr_prio:4;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t rr_prio:4;
		uint64_t reserved_5_15:11;
		uint64_t parent:5;
		uint64_t reserved_21_31:11;
		uint64_t prio_anchor:9;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l2_sqx_topology_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_40_63:24;
		uint64_t prio_anchor:8;
		uint64_t reserved_20_31:12;
		uint64_t parent:4;
		uint64_t reserved_5_15:11;
		uint64_t rr_prio:4;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t rr_prio:4;
		uint64_t reserved_5_15:11;
		uint64_t parent:4;
		uint64_t reserved_20_31:12;
		uint64_t prio_anchor:8;
		uint64_t reserved_40_63:24;
#endif
	} cn73xx;
	struct cvmx_pko_l2_sqx_topology_cn73xx cn75xx;
	struct cvmx_pko_l2_sqx_topology_s cn78xx;
	struct cvmx_pko_l2_sqx_topology_s cn78xxp2;
};
typedef union cvmx_pko_l2_sqx_topology cvmx_pko_l2_sqx_topology_t;

union cvmx_pko_l2_sqx_yellow {
	uint64_t u64;
	struct cvmx_pko_l2_sqx_yellow_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_19_63:45;
		uint64_t head:9;
		uint64_t reserved_9_9:1;
		uint64_t tail:9;
#else
		uint64_t tail:9;
		uint64_t reserved_9_9:1;
		uint64_t head:9;
		uint64_t reserved_19_63:45;
#endif
	} s;
	struct cvmx_pko_l2_sqx_yellow_s cn73xx;
	struct cvmx_pko_l2_sqx_yellow_s cn75xx;
	struct cvmx_pko_l2_sqx_yellow_s cn78xx;
	struct cvmx_pko_l2_sqx_yellow_s cn78xxp2;
};
typedef union cvmx_pko_l2_sqx_yellow cvmx_pko_l2_sqx_yellow_t;

union cvmx_pko_l2_sq_csr_bus_debug {
	uint64_t u64;
	struct cvmx_pko_l2_sq_csr_bus_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t csr_bus_debug:64;
#else
		uint64_t csr_bus_debug:64;
#endif
	} s;
	struct cvmx_pko_l2_sq_csr_bus_debug_s cn73xx;
	struct cvmx_pko_l2_sq_csr_bus_debug_s cn75xx;
	struct cvmx_pko_l2_sq_csr_bus_debug_s cn78xx;
	struct cvmx_pko_l2_sq_csr_bus_debug_s cn78xxp2;
};
typedef union cvmx_pko_l2_sq_csr_bus_debug cvmx_pko_l2_sq_csr_bus_debug_t;

union cvmx_pko_l2_sqa_debug {
	uint64_t u64;
	struct cvmx_pko_l2_sqa_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dbg_vec:64;
#else
		uint64_t dbg_vec:64;
#endif
	} s;
	struct cvmx_pko_l2_sqa_debug_s cn73xx;
	struct cvmx_pko_l2_sqa_debug_s cn75xx;
	struct cvmx_pko_l2_sqa_debug_s cn78xx;
	struct cvmx_pko_l2_sqa_debug_s cn78xxp2;
};
typedef union cvmx_pko_l2_sqa_debug cvmx_pko_l2_sqa_debug_t;

union cvmx_pko_l2_sqb_debug {
	uint64_t u64;
	struct cvmx_pko_l2_sqb_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dbg_vec:64;
#else
		uint64_t dbg_vec:64;
#endif
	} s;
	struct cvmx_pko_l2_sqb_debug_s cn73xx;
	struct cvmx_pko_l2_sqb_debug_s cn75xx;
	struct cvmx_pko_l2_sqb_debug_s cn78xx;
	struct cvmx_pko_l2_sqb_debug_s cn78xxp2;
};
typedef union cvmx_pko_l2_sqb_debug cvmx_pko_l2_sqb_debug_t;

union cvmx_pko_l3_l2_sqx_channel {
	uint64_t u64;
	struct cvmx_pko_l3_l2_sqx_channel_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_44_63:20;
		uint64_t cc_channel:12;
		uint64_t cc_word_cnt:20;
		uint64_t cc_packet_cnt:10;
		uint64_t cc_enable:1;
		uint64_t hw_xoff:1;
#else
		uint64_t hw_xoff:1;
		uint64_t cc_enable:1;
		uint64_t cc_packet_cnt:10;
		uint64_t cc_word_cnt:20;
		uint64_t cc_channel:12;
		uint64_t reserved_44_63:20;
#endif
	} s;
	struct cvmx_pko_l3_l2_sqx_channel_s cn73xx;
	struct cvmx_pko_l3_l2_sqx_channel_s cn75xx;
	struct cvmx_pko_l3_l2_sqx_channel_s cn78xx;
	struct cvmx_pko_l3_l2_sqx_channel_s cn78xxp2;
};
typedef union cvmx_pko_l3_l2_sqx_channel cvmx_pko_l3_l2_sqx_channel_t;

union cvmx_pko_l3_sqx_cir {
	uint64_t u64;
	struct cvmx_pko_l3_sqx_cir_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t burst_exponent:4;
		uint64_t burst_mantissa:8;
		uint64_t reserved_17_28:12;
		uint64_t rate_divider_exponent:4;
		uint64_t rate_exponent:4;
		uint64_t rate_mantissa:8;
		uint64_t enable:1;
#else
		uint64_t enable:1;
		uint64_t rate_mantissa:8;
		uint64_t rate_exponent:4;
		uint64_t rate_divider_exponent:4;
		uint64_t reserved_17_28:12;
		uint64_t burst_mantissa:8;
		uint64_t burst_exponent:4;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l3_sqx_cir_s cn73xx;
	struct cvmx_pko_l3_sqx_cir_s cn75xx;
	struct cvmx_pko_l3_sqx_cir_s cn78xx;
	struct cvmx_pko_l3_sqx_cir_s cn78xxp2;
};
typedef union cvmx_pko_l3_sqx_cir cvmx_pko_l3_sqx_cir_t;

union cvmx_pko_l3_sqx_green {
	uint64_t u64;
	struct cvmx_pko_l3_sqx_green_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t rr_active:1;
		uint64_t active_vec:20;
		uint64_t head:10;
		uint64_t tail:10;
#else
		uint64_t tail:10;
		uint64_t head:10;
		uint64_t active_vec:20;
		uint64_t rr_active:1;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l3_sqx_green_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t rr_active:1;
		uint64_t active_vec:20;
		uint64_t reserved_18_19:2;
		uint64_t head:8;
		uint64_t reserved_8_9:2;
		uint64_t tail:8;
#else
		uint64_t tail:8;
		uint64_t reserved_8_9:2;
		uint64_t head:8;
		uint64_t reserved_18_19:2;
		uint64_t active_vec:20;
		uint64_t rr_active:1;
		uint64_t reserved_41_63:23;
#endif
	} cn73xx;
	struct cvmx_pko_l3_sqx_green_cn73xx cn75xx;
	struct cvmx_pko_l3_sqx_green_s cn78xx;
	struct cvmx_pko_l3_sqx_green_s cn78xxp2;
};
typedef union cvmx_pko_l3_sqx_green cvmx_pko_l3_sqx_green_t;

union cvmx_pko_l3_sqx_pick {
	uint64_t u64;
	struct cvmx_pko_l3_sqx_pick_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dq:10;
		uint64_t color:2;
		uint64_t child:10;
		uint64_t bubble:1;
		uint64_t p_con:1;
		uint64_t c_con:1;
		uint64_t uid:7;
		uint64_t jump:1;
		uint64_t fpd:1;
		uint64_t ds:1;
		uint64_t adjust:9;
		uint64_t pir_dis:1;
		uint64_t cir_dis:1;
		uint64_t red_algo_override:2;
		uint64_t length:16;
#else
		uint64_t length:16;
		uint64_t red_algo_override:2;
		uint64_t cir_dis:1;
		uint64_t pir_dis:1;
		uint64_t adjust:9;
		uint64_t ds:1;
		uint64_t fpd:1;
		uint64_t jump:1;
		uint64_t uid:7;
		uint64_t c_con:1;
		uint64_t p_con:1;
		uint64_t bubble:1;
		uint64_t child:10;
		uint64_t color:2;
		uint64_t dq:10;
#endif
	} s;
	struct cvmx_pko_l3_sqx_pick_s cn73xx;
	struct cvmx_pko_l3_sqx_pick_s cn75xx;
	struct cvmx_pko_l3_sqx_pick_s cn78xx;
	struct cvmx_pko_l3_sqx_pick_s cn78xxp2;
};
typedef union cvmx_pko_l3_sqx_pick cvmx_pko_l3_sqx_pick_t;

union cvmx_pko_l3_sqx_pir {
	uint64_t u64;
	struct cvmx_pko_l3_sqx_pir_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t burst_exponent:4;
		uint64_t burst_mantissa:8;
		uint64_t reserved_17_28:12;
		uint64_t rate_divider_exponent:4;
		uint64_t rate_exponent:4;
		uint64_t rate_mantissa:8;
		uint64_t enable:1;
#else
		uint64_t enable:1;
		uint64_t rate_mantissa:8;
		uint64_t rate_exponent:4;
		uint64_t rate_divider_exponent:4;
		uint64_t reserved_17_28:12;
		uint64_t burst_mantissa:8;
		uint64_t burst_exponent:4;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l3_sqx_pir_s cn73xx;
	struct cvmx_pko_l3_sqx_pir_s cn75xx;
	struct cvmx_pko_l3_sqx_pir_s cn78xx;
	struct cvmx_pko_l3_sqx_pir_s cn78xxp2;
};
typedef union cvmx_pko_l3_sqx_pir cvmx_pko_l3_sqx_pir_t;

union cvmx_pko_l3_sqx_pointers {
	uint64_t u64;
	struct cvmx_pko_l3_sqx_pointers_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_25_63:39;
		uint64_t prev:9;
		uint64_t reserved_9_15:7;
		uint64_t next:9;
#else
		uint64_t next:9;
		uint64_t reserved_9_15:7;
		uint64_t prev:9;
		uint64_t reserved_25_63:39;
#endif
	} s;
	struct cvmx_pko_l3_sqx_pointers_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_24_63:40;
		uint64_t prev:8;
		uint64_t reserved_8_15:8;
		uint64_t next:8;
#else
		uint64_t next:8;
		uint64_t reserved_8_15:8;
		uint64_t prev:8;
		uint64_t reserved_24_63:40;
#endif
	} cn73xx;
	struct cvmx_pko_l3_sqx_pointers_cn73xx cn75xx;
	struct cvmx_pko_l3_sqx_pointers_s cn78xx;
	struct cvmx_pko_l3_sqx_pointers_s cn78xxp2;
};
typedef union cvmx_pko_l3_sqx_pointers cvmx_pko_l3_sqx_pointers_t;

union cvmx_pko_l3_sqx_red {
	uint64_t u64;
	struct cvmx_pko_l3_sqx_red_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t head:10;
		uint64_t tail:10;
#else
		uint64_t tail:10;
		uint64_t head:10;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_l3_sqx_red_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_18_63:46;
		uint64_t head:8;
		uint64_t reserved_8_9:2;
		uint64_t tail:8;
#else
		uint64_t tail:8;
		uint64_t reserved_8_9:2;
		uint64_t head:8;
		uint64_t reserved_18_63:46;
#endif
	} cn73xx;
	struct cvmx_pko_l3_sqx_red_cn73xx cn75xx;
	struct cvmx_pko_l3_sqx_red_s cn78xx;
	struct cvmx_pko_l3_sqx_red_s cn78xxp2;
};
typedef union cvmx_pko_l3_sqx_red cvmx_pko_l3_sqx_red_t;

union cvmx_pko_l3_sqx_sched_state {
	uint64_t u64;
	struct cvmx_pko_l3_sqx_sched_state_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_25_63:39;
		uint64_t rr_count:25;
#else
		uint64_t rr_count:25;
		uint64_t reserved_25_63:39;
#endif
	} s;
	struct cvmx_pko_l3_sqx_sched_state_s cn73xx;
	struct cvmx_pko_l3_sqx_sched_state_s cn75xx;
	struct cvmx_pko_l3_sqx_sched_state_s cn78xx;
	struct cvmx_pko_l3_sqx_sched_state_s cn78xxp2;
};
typedef union cvmx_pko_l3_sqx_sched_state cvmx_pko_l3_sqx_sched_state_t;

union cvmx_pko_l3_sqx_schedule {
	uint64_t u64;
	struct cvmx_pko_l3_sqx_schedule_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t prio:4;
		uint64_t rr_quantum:24;
#else
		uint64_t rr_quantum:24;
		uint64_t prio:4;
		uint64_t reserved_28_63:36;
#endif
	} s;
	struct cvmx_pko_l3_sqx_schedule_s cn73xx;
	struct cvmx_pko_l3_sqx_schedule_s cn75xx;
	struct cvmx_pko_l3_sqx_schedule_s cn78xx;
	struct cvmx_pko_l3_sqx_schedule_s cn78xxp2;
};
typedef union cvmx_pko_l3_sqx_schedule cvmx_pko_l3_sqx_schedule_t;

union cvmx_pko_l3_sqx_shape {
	uint64_t u64;
	struct cvmx_pko_l3_sqx_shape_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_27_63:37;
		uint64_t schedule_list:2;
		uint64_t length_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t yellow_disable:1;
		uint64_t red_disable:1;
		uint64_t red_algo:2;
		uint64_t adjust:9;
#else
		uint64_t adjust:9;
		uint64_t red_algo:2;
		uint64_t red_disable:1;
		uint64_t yellow_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t length_disable:1;
		uint64_t schedule_list:2;
		uint64_t reserved_27_63:37;
#endif
	} s;
	struct cvmx_pko_l3_sqx_shape_s cn73xx;
	struct cvmx_pko_l3_sqx_shape_s cn75xx;
	struct cvmx_pko_l3_sqx_shape_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_25_63:39;
		uint64_t length_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t yellow_disable:1;
		uint64_t red_disable:1;
		uint64_t red_algo:2;
		uint64_t adjust:9;
#else
		uint64_t adjust:9;
		uint64_t red_algo:2;
		uint64_t red_disable:1;
		uint64_t yellow_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t length_disable:1;
		uint64_t reserved_25_63:39;
#endif
	} cn78xx;
	struct cvmx_pko_l3_sqx_shape_cn78xx cn78xxp2;
};
typedef union cvmx_pko_l3_sqx_shape cvmx_pko_l3_sqx_shape_t;

union cvmx_pko_l3_sqx_shape_state {
	uint64_t u64;
	struct cvmx_pko_l3_sqx_shape_state_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_60_63:4;
		uint64_t tw_timestamp:6;
		uint64_t color:2;
		uint64_t pir_accum:26;
		uint64_t cir_accum:26;
#else
		uint64_t cir_accum:26;
		uint64_t pir_accum:26;
		uint64_t color:2;
		uint64_t tw_timestamp:6;
		uint64_t reserved_60_63:4;
#endif
	} s;
	struct cvmx_pko_l3_sqx_shape_state_s cn73xx;
	struct cvmx_pko_l3_sqx_shape_state_s cn75xx;
	struct cvmx_pko_l3_sqx_shape_state_s cn78xx;
	struct cvmx_pko_l3_sqx_shape_state_s cn78xxp2;
};
typedef union cvmx_pko_l3_sqx_shape_state cvmx_pko_l3_sqx_shape_state_t;

union cvmx_pko_l3_sqx_sw_xoff {
	uint64_t u64;
	struct cvmx_pko_l3_sqx_sw_xoff_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t drain_irq:1;
		uint64_t drain_null_link:1;
		uint64_t drain:1;
		uint64_t xoff:1;
#else
		uint64_t xoff:1;
		uint64_t drain:1;
		uint64_t drain_null_link:1;
		uint64_t drain_irq:1;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_pko_l3_sqx_sw_xoff_s cn73xx;
	struct cvmx_pko_l3_sqx_sw_xoff_s cn75xx;
	struct cvmx_pko_l3_sqx_sw_xoff_s cn78xx;
	struct cvmx_pko_l3_sqx_sw_xoff_s cn78xxp2;
};
typedef union cvmx_pko_l3_sqx_sw_xoff cvmx_pko_l3_sqx_sw_xoff_t;

union cvmx_pko_l3_sqx_topology {
	uint64_t u64;
	struct cvmx_pko_l3_sqx_topology_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_42_63:22;
		uint64_t prio_anchor:10;
		uint64_t reserved_25_31:7;
		uint64_t parent:9;
		uint64_t reserved_5_15:11;
		uint64_t rr_prio:4;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t rr_prio:4;
		uint64_t reserved_5_15:11;
		uint64_t parent:9;
		uint64_t reserved_25_31:7;
		uint64_t prio_anchor:10;
		uint64_t reserved_42_63:22;
#endif
	} s;
	struct cvmx_pko_l3_sqx_topology_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_40_63:24;
		uint64_t prio_anchor:8;
		uint64_t reserved_24_31:8;
		uint64_t parent:8;
		uint64_t reserved_5_15:11;
		uint64_t rr_prio:4;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t rr_prio:4;
		uint64_t reserved_5_15:11;
		uint64_t parent:8;
		uint64_t reserved_24_31:8;
		uint64_t prio_anchor:8;
		uint64_t reserved_40_63:24;
#endif
	} cn73xx;
	struct cvmx_pko_l3_sqx_topology_cn73xx cn75xx;
	struct cvmx_pko_l3_sqx_topology_s cn78xx;
	struct cvmx_pko_l3_sqx_topology_s cn78xxp2;
};
typedef union cvmx_pko_l3_sqx_topology cvmx_pko_l3_sqx_topology_t;

union cvmx_pko_l3_sqx_yellow {
	uint64_t u64;
	struct cvmx_pko_l3_sqx_yellow_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t head:10;
		uint64_t tail:10;
#else
		uint64_t tail:10;
		uint64_t head:10;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_l3_sqx_yellow_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_18_63:46;
		uint64_t head:8;
		uint64_t reserved_8_9:2;
		uint64_t tail:8;
#else
		uint64_t tail:8;
		uint64_t reserved_8_9:2;
		uint64_t head:8;
		uint64_t reserved_18_63:46;
#endif
	} cn73xx;
	struct cvmx_pko_l3_sqx_yellow_cn73xx cn75xx;
	struct cvmx_pko_l3_sqx_yellow_s cn78xx;
	struct cvmx_pko_l3_sqx_yellow_s cn78xxp2;
};
typedef union cvmx_pko_l3_sqx_yellow cvmx_pko_l3_sqx_yellow_t;

union cvmx_pko_l3_sq_csr_bus_debug {
	uint64_t u64;
	struct cvmx_pko_l3_sq_csr_bus_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t csr_bus_debug:64;
#else
		uint64_t csr_bus_debug:64;
#endif
	} s;
	struct cvmx_pko_l3_sq_csr_bus_debug_s cn73xx;
	struct cvmx_pko_l3_sq_csr_bus_debug_s cn75xx;
	struct cvmx_pko_l3_sq_csr_bus_debug_s cn78xx;
	struct cvmx_pko_l3_sq_csr_bus_debug_s cn78xxp2;
};
typedef union cvmx_pko_l3_sq_csr_bus_debug cvmx_pko_l3_sq_csr_bus_debug_t;

union cvmx_pko_l3_sqa_debug {
	uint64_t u64;
	struct cvmx_pko_l3_sqa_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dbg_vec:64;
#else
		uint64_t dbg_vec:64;
#endif
	} s;
	struct cvmx_pko_l3_sqa_debug_s cn73xx;
	struct cvmx_pko_l3_sqa_debug_s cn75xx;
	struct cvmx_pko_l3_sqa_debug_s cn78xx;
	struct cvmx_pko_l3_sqa_debug_s cn78xxp2;
};
typedef union cvmx_pko_l3_sqa_debug cvmx_pko_l3_sqa_debug_t;

union cvmx_pko_l3_sqb_debug {
	uint64_t u64;
	struct cvmx_pko_l3_sqb_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dbg_vec:64;
#else
		uint64_t dbg_vec:64;
#endif
	} s;
	struct cvmx_pko_l3_sqb_debug_s cn73xx;
	struct cvmx_pko_l3_sqb_debug_s cn75xx;
	struct cvmx_pko_l3_sqb_debug_s cn78xx;
	struct cvmx_pko_l3_sqb_debug_s cn78xxp2;
};
typedef union cvmx_pko_l3_sqb_debug cvmx_pko_l3_sqb_debug_t;

union cvmx_pko_l4_sqx_cir {
	uint64_t u64;
	struct cvmx_pko_l4_sqx_cir_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t burst_exponent:4;
		uint64_t burst_mantissa:8;
		uint64_t reserved_17_28:12;
		uint64_t rate_divider_exponent:4;
		uint64_t rate_exponent:4;
		uint64_t rate_mantissa:8;
		uint64_t enable:1;
#else
		uint64_t enable:1;
		uint64_t rate_mantissa:8;
		uint64_t rate_exponent:4;
		uint64_t rate_divider_exponent:4;
		uint64_t reserved_17_28:12;
		uint64_t burst_mantissa:8;
		uint64_t burst_exponent:4;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l4_sqx_cir_s cn78xx;
	struct cvmx_pko_l4_sqx_cir_s cn78xxp2;
};
typedef union cvmx_pko_l4_sqx_cir cvmx_pko_l4_sqx_cir_t;

union cvmx_pko_l4_sqx_green {
	uint64_t u64;
	struct cvmx_pko_l4_sqx_green_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t rr_active:1;
		uint64_t active_vec:20;
		uint64_t head:10;
		uint64_t tail:10;
#else
		uint64_t tail:10;
		uint64_t head:10;
		uint64_t active_vec:20;
		uint64_t rr_active:1;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l4_sqx_green_s cn78xx;
	struct cvmx_pko_l4_sqx_green_s cn78xxp2;
};
typedef union cvmx_pko_l4_sqx_green cvmx_pko_l4_sqx_green_t;

union cvmx_pko_l4_sqx_pick {
	uint64_t u64;
	struct cvmx_pko_l4_sqx_pick_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dq:10;
		uint64_t color:2;
		uint64_t child:10;
		uint64_t bubble:1;
		uint64_t p_con:1;
		uint64_t c_con:1;
		uint64_t uid:7;
		uint64_t jump:1;
		uint64_t fpd:1;
		uint64_t ds:1;
		uint64_t adjust:9;
		uint64_t pir_dis:1;
		uint64_t cir_dis:1;
		uint64_t red_algo_override:2;
		uint64_t length:16;
#else
		uint64_t length:16;
		uint64_t red_algo_override:2;
		uint64_t cir_dis:1;
		uint64_t pir_dis:1;
		uint64_t adjust:9;
		uint64_t ds:1;
		uint64_t fpd:1;
		uint64_t jump:1;
		uint64_t uid:7;
		uint64_t c_con:1;
		uint64_t p_con:1;
		uint64_t bubble:1;
		uint64_t child:10;
		uint64_t color:2;
		uint64_t dq:10;
#endif
	} s;
	struct cvmx_pko_l4_sqx_pick_s cn78xx;
	struct cvmx_pko_l4_sqx_pick_s cn78xxp2;
};
typedef union cvmx_pko_l4_sqx_pick cvmx_pko_l4_sqx_pick_t;

union cvmx_pko_l4_sqx_pir {
	uint64_t u64;
	struct cvmx_pko_l4_sqx_pir_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t burst_exponent:4;
		uint64_t burst_mantissa:8;
		uint64_t reserved_17_28:12;
		uint64_t rate_divider_exponent:4;
		uint64_t rate_exponent:4;
		uint64_t rate_mantissa:8;
		uint64_t enable:1;
#else
		uint64_t enable:1;
		uint64_t rate_mantissa:8;
		uint64_t rate_exponent:4;
		uint64_t rate_divider_exponent:4;
		uint64_t reserved_17_28:12;
		uint64_t burst_mantissa:8;
		uint64_t burst_exponent:4;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l4_sqx_pir_s cn78xx;
	struct cvmx_pko_l4_sqx_pir_s cn78xxp2;
};
typedef union cvmx_pko_l4_sqx_pir cvmx_pko_l4_sqx_pir_t;

union cvmx_pko_l4_sqx_pointers {
	uint64_t u64;
	struct cvmx_pko_l4_sqx_pointers_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_26_63:38;
		uint64_t prev:10;
		uint64_t reserved_10_15:6;
		uint64_t next:10;
#else
		uint64_t next:10;
		uint64_t reserved_10_15:6;
		uint64_t prev:10;
		uint64_t reserved_26_63:38;
#endif
	} s;
	struct cvmx_pko_l4_sqx_pointers_s cn78xx;
	struct cvmx_pko_l4_sqx_pointers_s cn78xxp2;
};
typedef union cvmx_pko_l4_sqx_pointers cvmx_pko_l4_sqx_pointers_t;

union cvmx_pko_l4_sqx_red {
	uint64_t u64;
	struct cvmx_pko_l4_sqx_red_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t head:10;
		uint64_t tail:10;
#else
		uint64_t tail:10;
		uint64_t head:10;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_l4_sqx_red_s cn78xx;
	struct cvmx_pko_l4_sqx_red_s cn78xxp2;
};
typedef union cvmx_pko_l4_sqx_red cvmx_pko_l4_sqx_red_t;

union cvmx_pko_l4_sqx_sched_state {
	uint64_t u64;
	struct cvmx_pko_l4_sqx_sched_state_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_25_63:39;
		uint64_t rr_count:25;
#else
		uint64_t rr_count:25;
		uint64_t reserved_25_63:39;
#endif
	} s;
	struct cvmx_pko_l4_sqx_sched_state_s cn78xx;
	struct cvmx_pko_l4_sqx_sched_state_s cn78xxp2;
};
typedef union cvmx_pko_l4_sqx_sched_state cvmx_pko_l4_sqx_sched_state_t;

union cvmx_pko_l4_sqx_schedule {
	uint64_t u64;
	struct cvmx_pko_l4_sqx_schedule_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t prio:4;
		uint64_t rr_quantum:24;
#else
		uint64_t rr_quantum:24;
		uint64_t prio:4;
		uint64_t reserved_28_63:36;
#endif
	} s;
	struct cvmx_pko_l4_sqx_schedule_s cn78xx;
	struct cvmx_pko_l4_sqx_schedule_s cn78xxp2;
};
typedef union cvmx_pko_l4_sqx_schedule cvmx_pko_l4_sqx_schedule_t;

union cvmx_pko_l4_sqx_shape {
	uint64_t u64;
	struct cvmx_pko_l4_sqx_shape_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_25_63:39;
		uint64_t length_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t yellow_disable:1;
		uint64_t red_disable:1;
		uint64_t red_algo:2;
		uint64_t adjust:9;
#else
		uint64_t adjust:9;
		uint64_t red_algo:2;
		uint64_t red_disable:1;
		uint64_t yellow_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t length_disable:1;
		uint64_t reserved_25_63:39;
#endif
	} s;
	struct cvmx_pko_l4_sqx_shape_s cn78xx;
	struct cvmx_pko_l4_sqx_shape_s cn78xxp2;
};
typedef union cvmx_pko_l4_sqx_shape cvmx_pko_l4_sqx_shape_t;

union cvmx_pko_l4_sqx_shape_state {
	uint64_t u64;
	struct cvmx_pko_l4_sqx_shape_state_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_60_63:4;
		uint64_t tw_timestamp:6;
		uint64_t color:2;
		uint64_t pir_accum:26;
		uint64_t cir_accum:26;
#else
		uint64_t cir_accum:26;
		uint64_t pir_accum:26;
		uint64_t color:2;
		uint64_t tw_timestamp:6;
		uint64_t reserved_60_63:4;
#endif
	} s;
	struct cvmx_pko_l4_sqx_shape_state_s cn78xx;
	struct cvmx_pko_l4_sqx_shape_state_s cn78xxp2;
};
typedef union cvmx_pko_l4_sqx_shape_state cvmx_pko_l4_sqx_shape_state_t;

union cvmx_pko_l4_sqx_sw_xoff {
	uint64_t u64;
	struct cvmx_pko_l4_sqx_sw_xoff_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t drain_irq:1;
		uint64_t drain_null_link:1;
		uint64_t drain:1;
		uint64_t xoff:1;
#else
		uint64_t xoff:1;
		uint64_t drain:1;
		uint64_t drain_null_link:1;
		uint64_t drain_irq:1;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_pko_l4_sqx_sw_xoff_s cn78xx;
	struct cvmx_pko_l4_sqx_sw_xoff_s cn78xxp2;
};
typedef union cvmx_pko_l4_sqx_sw_xoff cvmx_pko_l4_sqx_sw_xoff_t;

union cvmx_pko_l4_sqx_topology {
	uint64_t u64;
	struct cvmx_pko_l4_sqx_topology_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_42_63:22;
		uint64_t prio_anchor:10;
		uint64_t reserved_25_31:7;
		uint64_t parent:9;
		uint64_t reserved_5_15:11;
		uint64_t rr_prio:4;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t rr_prio:4;
		uint64_t reserved_5_15:11;
		uint64_t parent:9;
		uint64_t reserved_25_31:7;
		uint64_t prio_anchor:10;
		uint64_t reserved_42_63:22;
#endif
	} s;
	struct cvmx_pko_l4_sqx_topology_s cn78xx;
	struct cvmx_pko_l4_sqx_topology_s cn78xxp2;
};
typedef union cvmx_pko_l4_sqx_topology cvmx_pko_l4_sqx_topology_t;

union cvmx_pko_l4_sqx_yellow {
	uint64_t u64;
	struct cvmx_pko_l4_sqx_yellow_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t head:10;
		uint64_t tail:10;
#else
		uint64_t tail:10;
		uint64_t head:10;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_l4_sqx_yellow_s cn78xx;
	struct cvmx_pko_l4_sqx_yellow_s cn78xxp2;
};
typedef union cvmx_pko_l4_sqx_yellow cvmx_pko_l4_sqx_yellow_t;

union cvmx_pko_l4_sq_csr_bus_debug {
	uint64_t u64;
	struct cvmx_pko_l4_sq_csr_bus_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t csr_bus_debug:64;
#else
		uint64_t csr_bus_debug:64;
#endif
	} s;
	struct cvmx_pko_l4_sq_csr_bus_debug_s cn78xx;
	struct cvmx_pko_l4_sq_csr_bus_debug_s cn78xxp2;
};
typedef union cvmx_pko_l4_sq_csr_bus_debug cvmx_pko_l4_sq_csr_bus_debug_t;

union cvmx_pko_l4_sqa_debug {
	uint64_t u64;
	struct cvmx_pko_l4_sqa_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dbg_vec:64;
#else
		uint64_t dbg_vec:64;
#endif
	} s;
	struct cvmx_pko_l4_sqa_debug_s cn78xx;
	struct cvmx_pko_l4_sqa_debug_s cn78xxp2;
};
typedef union cvmx_pko_l4_sqa_debug cvmx_pko_l4_sqa_debug_t;

union cvmx_pko_l4_sqb_debug {
	uint64_t u64;
	struct cvmx_pko_l4_sqb_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dbg_vec:64;
#else
		uint64_t dbg_vec:64;
#endif
	} s;
	struct cvmx_pko_l4_sqb_debug_s cn78xx;
	struct cvmx_pko_l4_sqb_debug_s cn78xxp2;
};
typedef union cvmx_pko_l4_sqb_debug cvmx_pko_l4_sqb_debug_t;

union cvmx_pko_l5_sqx_cir {
	uint64_t u64;
	struct cvmx_pko_l5_sqx_cir_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t burst_exponent:4;
		uint64_t burst_mantissa:8;
		uint64_t reserved_17_28:12;
		uint64_t rate_divider_exponent:4;
		uint64_t rate_exponent:4;
		uint64_t rate_mantissa:8;
		uint64_t enable:1;
#else
		uint64_t enable:1;
		uint64_t rate_mantissa:8;
		uint64_t rate_exponent:4;
		uint64_t rate_divider_exponent:4;
		uint64_t reserved_17_28:12;
		uint64_t burst_mantissa:8;
		uint64_t burst_exponent:4;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l5_sqx_cir_s cn78xx;
	struct cvmx_pko_l5_sqx_cir_s cn78xxp2;
};
typedef union cvmx_pko_l5_sqx_cir cvmx_pko_l5_sqx_cir_t;

union cvmx_pko_l5_sqx_green {
	uint64_t u64;
	struct cvmx_pko_l5_sqx_green_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t rr_active:1;
		uint64_t active_vec:20;
		uint64_t head:10;
		uint64_t tail:10;
#else
		uint64_t tail:10;
		uint64_t head:10;
		uint64_t active_vec:20;
		uint64_t rr_active:1;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l5_sqx_green_s cn78xx;
	struct cvmx_pko_l5_sqx_green_s cn78xxp2;
};
typedef union cvmx_pko_l5_sqx_green cvmx_pko_l5_sqx_green_t;

union cvmx_pko_l5_sqx_pick {
	uint64_t u64;
	struct cvmx_pko_l5_sqx_pick_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dq:10;
		uint64_t color:2;
		uint64_t child:10;
		uint64_t bubble:1;
		uint64_t p_con:1;
		uint64_t c_con:1;
		uint64_t uid:7;
		uint64_t jump:1;
		uint64_t fpd:1;
		uint64_t ds:1;
		uint64_t adjust:9;
		uint64_t pir_dis:1;
		uint64_t cir_dis:1;
		uint64_t red_algo_override:2;
		uint64_t length:16;
#else
		uint64_t length:16;
		uint64_t red_algo_override:2;
		uint64_t cir_dis:1;
		uint64_t pir_dis:1;
		uint64_t adjust:9;
		uint64_t ds:1;
		uint64_t fpd:1;
		uint64_t jump:1;
		uint64_t uid:7;
		uint64_t c_con:1;
		uint64_t p_con:1;
		uint64_t bubble:1;
		uint64_t child:10;
		uint64_t color:2;
		uint64_t dq:10;
#endif
	} s;
	struct cvmx_pko_l5_sqx_pick_s cn78xx;
	struct cvmx_pko_l5_sqx_pick_s cn78xxp2;
};
typedef union cvmx_pko_l5_sqx_pick cvmx_pko_l5_sqx_pick_t;

union cvmx_pko_l5_sqx_pir {
	uint64_t u64;
	struct cvmx_pko_l5_sqx_pir_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_41_63:23;
		uint64_t burst_exponent:4;
		uint64_t burst_mantissa:8;
		uint64_t reserved_17_28:12;
		uint64_t rate_divider_exponent:4;
		uint64_t rate_exponent:4;
		uint64_t rate_mantissa:8;
		uint64_t enable:1;
#else
		uint64_t enable:1;
		uint64_t rate_mantissa:8;
		uint64_t rate_exponent:4;
		uint64_t rate_divider_exponent:4;
		uint64_t reserved_17_28:12;
		uint64_t burst_mantissa:8;
		uint64_t burst_exponent:4;
		uint64_t reserved_41_63:23;
#endif
	} s;
	struct cvmx_pko_l5_sqx_pir_s cn78xx;
	struct cvmx_pko_l5_sqx_pir_s cn78xxp2;
};
typedef union cvmx_pko_l5_sqx_pir cvmx_pko_l5_sqx_pir_t;

union cvmx_pko_l5_sqx_pointers {
	uint64_t u64;
	struct cvmx_pko_l5_sqx_pointers_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_26_63:38;
		uint64_t prev:10;
		uint64_t reserved_10_15:6;
		uint64_t next:10;
#else
		uint64_t next:10;
		uint64_t reserved_10_15:6;
		uint64_t prev:10;
		uint64_t reserved_26_63:38;
#endif
	} s;
	struct cvmx_pko_l5_sqx_pointers_s cn78xx;
	struct cvmx_pko_l5_sqx_pointers_s cn78xxp2;
};
typedef union cvmx_pko_l5_sqx_pointers cvmx_pko_l5_sqx_pointers_t;

union cvmx_pko_l5_sqx_red {
	uint64_t u64;
	struct cvmx_pko_l5_sqx_red_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t head:10;
		uint64_t tail:10;
#else
		uint64_t tail:10;
		uint64_t head:10;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_l5_sqx_red_s cn78xx;
	struct cvmx_pko_l5_sqx_red_s cn78xxp2;
};
typedef union cvmx_pko_l5_sqx_red cvmx_pko_l5_sqx_red_t;

union cvmx_pko_l5_sqx_sched_state {
	uint64_t u64;
	struct cvmx_pko_l5_sqx_sched_state_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_25_63:39;
		uint64_t rr_count:25;
#else
		uint64_t rr_count:25;
		uint64_t reserved_25_63:39;
#endif
	} s;
	struct cvmx_pko_l5_sqx_sched_state_s cn78xx;
	struct cvmx_pko_l5_sqx_sched_state_s cn78xxp2;
};
typedef union cvmx_pko_l5_sqx_sched_state cvmx_pko_l5_sqx_sched_state_t;

union cvmx_pko_l5_sqx_schedule {
	uint64_t u64;
	struct cvmx_pko_l5_sqx_schedule_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t prio:4;
		uint64_t rr_quantum:24;
#else
		uint64_t rr_quantum:24;
		uint64_t prio:4;
		uint64_t reserved_28_63:36;
#endif
	} s;
	struct cvmx_pko_l5_sqx_schedule_s cn78xx;
	struct cvmx_pko_l5_sqx_schedule_s cn78xxp2;
};
typedef union cvmx_pko_l5_sqx_schedule cvmx_pko_l5_sqx_schedule_t;

union cvmx_pko_l5_sqx_shape {
	uint64_t u64;
	struct cvmx_pko_l5_sqx_shape_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_25_63:39;
		uint64_t length_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t yellow_disable:1;
		uint64_t red_disable:1;
		uint64_t red_algo:2;
		uint64_t adjust:9;
#else
		uint64_t adjust:9;
		uint64_t red_algo:2;
		uint64_t red_disable:1;
		uint64_t yellow_disable:1;
		uint64_t reserved_13_23:11;
		uint64_t length_disable:1;
		uint64_t reserved_25_63:39;
#endif
	} s;
	struct cvmx_pko_l5_sqx_shape_s cn78xx;
	struct cvmx_pko_l5_sqx_shape_s cn78xxp2;
};
typedef union cvmx_pko_l5_sqx_shape cvmx_pko_l5_sqx_shape_t;

union cvmx_pko_l5_sqx_shape_state {
	uint64_t u64;
	struct cvmx_pko_l5_sqx_shape_state_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_60_63:4;
		uint64_t tw_timestamp:6;
		uint64_t color:2;
		uint64_t pir_accum:26;
		uint64_t cir_accum:26;
#else
		uint64_t cir_accum:26;
		uint64_t pir_accum:26;
		uint64_t color:2;
		uint64_t tw_timestamp:6;
		uint64_t reserved_60_63:4;
#endif
	} s;
	struct cvmx_pko_l5_sqx_shape_state_s cn78xx;
	struct cvmx_pko_l5_sqx_shape_state_s cn78xxp2;
};
typedef union cvmx_pko_l5_sqx_shape_state cvmx_pko_l5_sqx_shape_state_t;

union cvmx_pko_l5_sqx_sw_xoff {
	uint64_t u64;
	struct cvmx_pko_l5_sqx_sw_xoff_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t drain_irq:1;
		uint64_t drain_null_link:1;
		uint64_t drain:1;
		uint64_t xoff:1;
#else
		uint64_t xoff:1;
		uint64_t drain:1;
		uint64_t drain_null_link:1;
		uint64_t drain_irq:1;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_pko_l5_sqx_sw_xoff_s cn78xx;
	struct cvmx_pko_l5_sqx_sw_xoff_s cn78xxp2;
};
typedef union cvmx_pko_l5_sqx_sw_xoff cvmx_pko_l5_sqx_sw_xoff_t;

union cvmx_pko_l5_sqx_topology {
	uint64_t u64;
	struct cvmx_pko_l5_sqx_topology_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_42_63:22;
		uint64_t prio_anchor:10;
		uint64_t reserved_26_31:6;
		uint64_t parent:10;
		uint64_t reserved_5_15:11;
		uint64_t rr_prio:4;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t rr_prio:4;
		uint64_t reserved_5_15:11;
		uint64_t parent:10;
		uint64_t reserved_26_31:6;
		uint64_t prio_anchor:10;
		uint64_t reserved_42_63:22;
#endif
	} s;
	struct cvmx_pko_l5_sqx_topology_s cn78xx;
	struct cvmx_pko_l5_sqx_topology_s cn78xxp2;
};
typedef union cvmx_pko_l5_sqx_topology cvmx_pko_l5_sqx_topology_t;

union cvmx_pko_l5_sqx_yellow {
	uint64_t u64;
	struct cvmx_pko_l5_sqx_yellow_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t head:10;
		uint64_t tail:10;
#else
		uint64_t tail:10;
		uint64_t head:10;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_l5_sqx_yellow_s cn78xx;
	struct cvmx_pko_l5_sqx_yellow_s cn78xxp2;
};
typedef union cvmx_pko_l5_sqx_yellow cvmx_pko_l5_sqx_yellow_t;

union cvmx_pko_l5_sq_csr_bus_debug {
	uint64_t u64;
	struct cvmx_pko_l5_sq_csr_bus_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t csr_bus_debug:64;
#else
		uint64_t csr_bus_debug:64;
#endif
	} s;
	struct cvmx_pko_l5_sq_csr_bus_debug_s cn78xx;
	struct cvmx_pko_l5_sq_csr_bus_debug_s cn78xxp2;
};
typedef union cvmx_pko_l5_sq_csr_bus_debug cvmx_pko_l5_sq_csr_bus_debug_t;

union cvmx_pko_l5_sqa_debug {
	uint64_t u64;
	struct cvmx_pko_l5_sqa_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dbg_vec:64;
#else
		uint64_t dbg_vec:64;
#endif
	} s;
	struct cvmx_pko_l5_sqa_debug_s cn78xx;
	struct cvmx_pko_l5_sqa_debug_s cn78xxp2;
};
typedef union cvmx_pko_l5_sqa_debug cvmx_pko_l5_sqa_debug_t;

union cvmx_pko_l5_sqb_debug {
	uint64_t u64;
	struct cvmx_pko_l5_sqb_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dbg_vec:64;
#else
		uint64_t dbg_vec:64;
#endif
	} s;
	struct cvmx_pko_l5_sqb_debug_s cn78xx;
	struct cvmx_pko_l5_sqb_debug_s cn78xxp2;
};
typedef union cvmx_pko_l5_sqb_debug cvmx_pko_l5_sqb_debug_t;

union cvmx_pko_lutx {
	uint64_t u64;
	struct cvmx_pko_lutx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t valid:1;
		uint64_t reserved_14_14:1;
		uint64_t pq_idx:5;
		uint64_t queue_number:9;
#else
		uint64_t queue_number:9;
		uint64_t pq_idx:5;
		uint64_t reserved_14_14:1;
		uint64_t valid:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_pko_lutx_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t valid:1;
		uint64_t reserved_13_14:2;
		uint64_t pq_idx:4;
		uint64_t reserved_8_8:1;
		uint64_t queue_number:8;
#else
		uint64_t queue_number:8;
		uint64_t reserved_8_8:1;
		uint64_t pq_idx:4;
		uint64_t reserved_13_14:2;
		uint64_t valid:1;
		uint64_t reserved_16_63:48;
#endif
	} cn73xx;
	struct cvmx_pko_lutx_cn73xx cn75xx;
	struct cvmx_pko_lutx_s cn78xx;
	struct cvmx_pko_lutx_s cn78xxp2;
};
typedef union cvmx_pko_lutx cvmx_pko_lutx_t;

union cvmx_pko_lut_bist_status {
	uint64_t u64;
	struct cvmx_pko_lut_bist_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t bist_status:1;
#else
		uint64_t bist_status:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_pko_lut_bist_status_s cn73xx;
	struct cvmx_pko_lut_bist_status_s cn75xx;
	struct cvmx_pko_lut_bist_status_s cn78xx;
	struct cvmx_pko_lut_bist_status_s cn78xxp2;
};
typedef union cvmx_pko_lut_bist_status cvmx_pko_lut_bist_status_t;

union cvmx_pko_lut_ecc_ctl0 {
	uint64_t u64;
	struct cvmx_pko_lut_ecc_ctl0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t c2q_lut_ram_flip:2;
		uint64_t c2q_lut_ram_cdis:1;
		uint64_t reserved_0_60:61;
#else
		uint64_t reserved_0_60:61;
		uint64_t c2q_lut_ram_cdis:1;
		uint64_t c2q_lut_ram_flip:2;
#endif
	} s;
	struct cvmx_pko_lut_ecc_ctl0_s cn73xx;
	struct cvmx_pko_lut_ecc_ctl0_s cn75xx;
	struct cvmx_pko_lut_ecc_ctl0_s cn78xx;
	struct cvmx_pko_lut_ecc_ctl0_s cn78xxp2;
};
typedef union cvmx_pko_lut_ecc_ctl0 cvmx_pko_lut_ecc_ctl0_t;

union cvmx_pko_lut_ecc_dbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_lut_ecc_dbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t c2q_lut_ram_dbe:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t c2q_lut_ram_dbe:1;
#endif
	} s;
	struct cvmx_pko_lut_ecc_dbe_sts0_s cn73xx;
	struct cvmx_pko_lut_ecc_dbe_sts0_s cn75xx;
	struct cvmx_pko_lut_ecc_dbe_sts0_s cn78xx;
	struct cvmx_pko_lut_ecc_dbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_lut_ecc_dbe_sts0 cvmx_pko_lut_ecc_dbe_sts0_t;

union cvmx_pko_lut_ecc_dbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_lut_ecc_dbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t lut_dbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t lut_dbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_lut_ecc_dbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_lut_ecc_dbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_lut_ecc_dbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_lut_ecc_dbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_lut_ecc_dbe_sts_cmb0 cvmx_pko_lut_ecc_dbe_sts_cmb0_t;

union cvmx_pko_lut_ecc_sbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_lut_ecc_sbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t c2q_lut_ram_sbe:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t c2q_lut_ram_sbe:1;
#endif
	} s;
	struct cvmx_pko_lut_ecc_sbe_sts0_s cn73xx;
	struct cvmx_pko_lut_ecc_sbe_sts0_s cn75xx;
	struct cvmx_pko_lut_ecc_sbe_sts0_s cn78xx;
	struct cvmx_pko_lut_ecc_sbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_lut_ecc_sbe_sts0 cvmx_pko_lut_ecc_sbe_sts0_t;

union cvmx_pko_lut_ecc_sbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_lut_ecc_sbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t lut_sbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t lut_sbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_lut_ecc_sbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_lut_ecc_sbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_lut_ecc_sbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_lut_ecc_sbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_lut_ecc_sbe_sts_cmb0 cvmx_pko_lut_ecc_sbe_sts_cmb0_t;

union cvmx_pko_macx_cfg {
	uint64_t u64;
	struct cvmx_pko_macx_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_17_63:47;
		uint64_t min_pad_ena:1;
		uint64_t fcs_ena:1;
		uint64_t fcs_sop_off:8;
		uint64_t skid_max_cnt:2;
		uint64_t fifo_num:5;
#else
		uint64_t fifo_num:5;
		uint64_t skid_max_cnt:2;
		uint64_t fcs_sop_off:8;
		uint64_t fcs_ena:1;
		uint64_t min_pad_ena:1;
		uint64_t reserved_17_63:47;
#endif
	} s;
	struct cvmx_pko_macx_cfg_s cn73xx;
	struct cvmx_pko_macx_cfg_s cn75xx;
	struct cvmx_pko_macx_cfg_s cn78xx;
	struct cvmx_pko_macx_cfg_s cn78xxp2;
};
typedef union cvmx_pko_macx_cfg cvmx_pko_macx_cfg_t;

union cvmx_pko_mci0_cred_cntx {
	uint64_t u64;
	struct cvmx_pko_mci0_cred_cntx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_13_63:51;
		uint64_t cred_cnt:13;
#else
		uint64_t cred_cnt:13;
		uint64_t reserved_13_63:51;
#endif
	} s;
	struct cvmx_pko_mci0_cred_cntx_s cn78xx;
	struct cvmx_pko_mci0_cred_cntx_s cn78xxp2;
};
typedef union cvmx_pko_mci0_cred_cntx cvmx_pko_mci0_cred_cntx_t;

union cvmx_pko_mci0_max_credx {
	uint64_t u64;
	struct cvmx_pko_mci0_max_credx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t max_cred_lim:12;
#else
		uint64_t max_cred_lim:12;
		uint64_t reserved_12_63:52;
#endif
	} s;
	struct cvmx_pko_mci0_max_credx_s cn78xx;
	struct cvmx_pko_mci0_max_credx_s cn78xxp2;
};
typedef union cvmx_pko_mci0_max_credx cvmx_pko_mci0_max_credx_t;

union cvmx_pko_mci1_cred_cntx {
	uint64_t u64;
	struct cvmx_pko_mci1_cred_cntx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_13_63:51;
		uint64_t cred_cnt:13;
#else
		uint64_t cred_cnt:13;
		uint64_t reserved_13_63:51;
#endif
	} s;
	struct cvmx_pko_mci1_cred_cntx_s cn73xx;
	struct cvmx_pko_mci1_cred_cntx_s cn75xx;
	struct cvmx_pko_mci1_cred_cntx_s cn78xx;
	struct cvmx_pko_mci1_cred_cntx_s cn78xxp2;
};
typedef union cvmx_pko_mci1_cred_cntx cvmx_pko_mci1_cred_cntx_t;

union cvmx_pko_mci1_max_credx {
	uint64_t u64;
	struct cvmx_pko_mci1_max_credx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t max_cred_lim:12;
#else
		uint64_t max_cred_lim:12;
		uint64_t reserved_12_63:52;
#endif
	} s;
	struct cvmx_pko_mci1_max_credx_s cn73xx;
	struct cvmx_pko_mci1_max_credx_s cn75xx;
	struct cvmx_pko_mci1_max_credx_s cn78xx;
	struct cvmx_pko_mci1_max_credx_s cn78xxp2;
};
typedef union cvmx_pko_mci1_max_credx cvmx_pko_mci1_max_credx_t;

union cvmx_pko_mem_count0 {
	uint64_t u64;
	struct cvmx_pko_mem_count0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t count:32;
#else
		uint64_t count:32;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_pko_mem_count0_s cn30xx;
	struct cvmx_pko_mem_count0_s cn31xx;
	struct cvmx_pko_mem_count0_s cn38xx;
	struct cvmx_pko_mem_count0_s cn38xxp2;
	struct cvmx_pko_mem_count0_s cn50xx;
	struct cvmx_pko_mem_count0_s cn52xx;
	struct cvmx_pko_mem_count0_s cn52xxp1;
	struct cvmx_pko_mem_count0_s cn56xx;
	struct cvmx_pko_mem_count0_s cn56xxp1;
	struct cvmx_pko_mem_count0_s cn58xx;
	struct cvmx_pko_mem_count0_s cn58xxp1;
	struct cvmx_pko_mem_count0_s cn61xx;
	struct cvmx_pko_mem_count0_s cn63xx;
	struct cvmx_pko_mem_count0_s cn63xxp1;
	struct cvmx_pko_mem_count0_s cn66xx;
	struct cvmx_pko_mem_count0_s cn68xx;
	struct cvmx_pko_mem_count0_s cn68xxp1;
	struct cvmx_pko_mem_count0_s cn70xx;
	struct cvmx_pko_mem_count0_s cn70xxp1;
	struct cvmx_pko_mem_count0_s cnf71xx;
};
typedef union cvmx_pko_mem_count0 cvmx_pko_mem_count0_t;

union cvmx_pko_mem_count1 {
	uint64_t u64;
	struct cvmx_pko_mem_count1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t count:48;
#else
		uint64_t count:48;
		uint64_t reserved_48_63:16;
#endif
	} s;
	struct cvmx_pko_mem_count1_s cn30xx;
	struct cvmx_pko_mem_count1_s cn31xx;
	struct cvmx_pko_mem_count1_s cn38xx;
	struct cvmx_pko_mem_count1_s cn38xxp2;
	struct cvmx_pko_mem_count1_s cn50xx;
	struct cvmx_pko_mem_count1_s cn52xx;
	struct cvmx_pko_mem_count1_s cn52xxp1;
	struct cvmx_pko_mem_count1_s cn56xx;
	struct cvmx_pko_mem_count1_s cn56xxp1;
	struct cvmx_pko_mem_count1_s cn58xx;
	struct cvmx_pko_mem_count1_s cn58xxp1;
	struct cvmx_pko_mem_count1_s cn61xx;
	struct cvmx_pko_mem_count1_s cn63xx;
	struct cvmx_pko_mem_count1_s cn63xxp1;
	struct cvmx_pko_mem_count1_s cn66xx;
	struct cvmx_pko_mem_count1_s cn68xx;
	struct cvmx_pko_mem_count1_s cn68xxp1;
	struct cvmx_pko_mem_count1_s cn70xx;
	struct cvmx_pko_mem_count1_s cn70xxp1;
	struct cvmx_pko_mem_count1_s cnf71xx;
};
typedef union cvmx_pko_mem_count1 cvmx_pko_mem_count1_t;

union cvmx_pko_mem_debug0 {
	uint64_t u64;
	struct cvmx_pko_mem_debug0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t fau:28;
		uint64_t cmd:14;
		uint64_t segs:6;
		uint64_t size:16;
#else
		uint64_t size:16;
		uint64_t segs:6;
		uint64_t cmd:14;
		uint64_t fau:28;
#endif
	} s;
	struct cvmx_pko_mem_debug0_s cn30xx;
	struct cvmx_pko_mem_debug0_s cn31xx;
	struct cvmx_pko_mem_debug0_s cn38xx;
	struct cvmx_pko_mem_debug0_s cn38xxp2;
	struct cvmx_pko_mem_debug0_s cn50xx;
	struct cvmx_pko_mem_debug0_s cn52xx;
	struct cvmx_pko_mem_debug0_s cn52xxp1;
	struct cvmx_pko_mem_debug0_s cn56xx;
	struct cvmx_pko_mem_debug0_s cn56xxp1;
	struct cvmx_pko_mem_debug0_s cn58xx;
	struct cvmx_pko_mem_debug0_s cn58xxp1;
	struct cvmx_pko_mem_debug0_s cn61xx;
	struct cvmx_pko_mem_debug0_s cn63xx;
	struct cvmx_pko_mem_debug0_s cn63xxp1;
	struct cvmx_pko_mem_debug0_s cn66xx;
	struct cvmx_pko_mem_debug0_s cn68xx;
	struct cvmx_pko_mem_debug0_s cn68xxp1;
	struct cvmx_pko_mem_debug0_s cn70xx;
	struct cvmx_pko_mem_debug0_s cn70xxp1;
	struct cvmx_pko_mem_debug0_s cnf71xx;
};
typedef union cvmx_pko_mem_debug0 cvmx_pko_mem_debug0_t;

union cvmx_pko_mem_debug1 {
	uint64_t u64;
	struct cvmx_pko_mem_debug1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t i:1;
		uint64_t back:4;
		uint64_t pool:3;
		uint64_t size:16;
		uint64_t ptr:40;
#else
		uint64_t ptr:40;
		uint64_t size:16;
		uint64_t pool:3;
		uint64_t back:4;
		uint64_t i:1;
#endif
	} s;
	struct cvmx_pko_mem_debug1_s cn30xx;
	struct cvmx_pko_mem_debug1_s cn31xx;
	struct cvmx_pko_mem_debug1_s cn38xx;
	struct cvmx_pko_mem_debug1_s cn38xxp2;
	struct cvmx_pko_mem_debug1_s cn50xx;
	struct cvmx_pko_mem_debug1_s cn52xx;
	struct cvmx_pko_mem_debug1_s cn52xxp1;
	struct cvmx_pko_mem_debug1_s cn56xx;
	struct cvmx_pko_mem_debug1_s cn56xxp1;
	struct cvmx_pko_mem_debug1_s cn58xx;
	struct cvmx_pko_mem_debug1_s cn58xxp1;
	struct cvmx_pko_mem_debug1_s cn61xx;
	struct cvmx_pko_mem_debug1_s cn63xx;
	struct cvmx_pko_mem_debug1_s cn63xxp1;
	struct cvmx_pko_mem_debug1_s cn66xx;
	struct cvmx_pko_mem_debug1_s cn68xx;
	struct cvmx_pko_mem_debug1_s cn68xxp1;
	struct cvmx_pko_mem_debug1_s cn70xx;
	struct cvmx_pko_mem_debug1_s cn70xxp1;
	struct cvmx_pko_mem_debug1_s cnf71xx;
};
typedef union cvmx_pko_mem_debug1 cvmx_pko_mem_debug1_t;

union cvmx_pko_mem_debug10 {
	uint64_t u64;
	struct cvmx_pko_mem_debug10_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_0_63:64;
#else
		uint64_t reserved_0_63:64;
#endif
	} s;
	struct cvmx_pko_mem_debug10_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t fau:28;
		uint64_t cmd:14;
		uint64_t segs:6;
		uint64_t size:16;
#else
		uint64_t size:16;
		uint64_t segs:6;
		uint64_t cmd:14;
		uint64_t fau:28;
#endif
	} cn30xx;
	struct cvmx_pko_mem_debug10_cn30xx cn31xx;
	struct cvmx_pko_mem_debug10_cn30xx cn38xx;
	struct cvmx_pko_mem_debug10_cn30xx cn38xxp2;
	struct cvmx_pko_mem_debug10_cn50xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_49_63:15;
		uint64_t ptrs1:17;
		uint64_t reserved_17_31:15;
		uint64_t ptrs2:17;
#else
		uint64_t ptrs2:17;
		uint64_t reserved_17_31:15;
		uint64_t ptrs1:17;
		uint64_t reserved_49_63:15;
#endif
	} cn50xx;
	struct cvmx_pko_mem_debug10_cn50xx cn52xx;
	struct cvmx_pko_mem_debug10_cn50xx cn52xxp1;
	struct cvmx_pko_mem_debug10_cn50xx cn56xx;
	struct cvmx_pko_mem_debug10_cn50xx cn56xxp1;
	struct cvmx_pko_mem_debug10_cn50xx cn58xx;
	struct cvmx_pko_mem_debug10_cn50xx cn58xxp1;
	struct cvmx_pko_mem_debug10_cn50xx cn61xx;
	struct cvmx_pko_mem_debug10_cn50xx cn63xx;
	struct cvmx_pko_mem_debug10_cn50xx cn63xxp1;
	struct cvmx_pko_mem_debug10_cn50xx cn66xx;
	struct cvmx_pko_mem_debug10_cn50xx cn68xx;
	struct cvmx_pko_mem_debug10_cn50xx cn68xxp1;
	struct cvmx_pko_mem_debug10_cn50xx cn70xx;
	struct cvmx_pko_mem_debug10_cn50xx cn70xxp1;
	struct cvmx_pko_mem_debug10_cn50xx cnf71xx;
};
typedef union cvmx_pko_mem_debug10 cvmx_pko_mem_debug10_t;

union cvmx_pko_mem_debug11 {
	uint64_t u64;
	struct cvmx_pko_mem_debug11_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t i:1;
		uint64_t back:4;
		uint64_t pool:3;
		uint64_t size:16;
		uint64_t reserved_0_39:40;
#else
		uint64_t reserved_0_39:40;
		uint64_t size:16;
		uint64_t pool:3;
		uint64_t back:4;
		uint64_t i:1;
#endif
	} s;
	struct cvmx_pko_mem_debug11_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t i:1;
		uint64_t back:4;
		uint64_t pool:3;
		uint64_t size:16;
		uint64_t ptr:40;
#else
		uint64_t ptr:40;
		uint64_t size:16;
		uint64_t pool:3;
		uint64_t back:4;
		uint64_t i:1;
#endif
	} cn30xx;
	struct cvmx_pko_mem_debug11_cn30xx cn31xx;
	struct cvmx_pko_mem_debug11_cn30xx cn38xx;
	struct cvmx_pko_mem_debug11_cn30xx cn38xxp2;
	struct cvmx_pko_mem_debug11_cn50xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_23_63:41;
		uint64_t maj:1;
		uint64_t uid:3;
		uint64_t sop:1;
		uint64_t len:1;
		uint64_t chk:1;
		uint64_t cnt:13;
		uint64_t mod:3;
#else
		uint64_t mod:3;
		uint64_t cnt:13;
		uint64_t chk:1;
		uint64_t len:1;
		uint64_t sop:1;
		uint64_t uid:3;
		uint64_t maj:1;
		uint64_t reserved_23_63:41;
#endif
	} cn50xx;
	struct cvmx_pko_mem_debug11_cn50xx cn52xx;
	struct cvmx_pko_mem_debug11_cn50xx cn52xxp1;
	struct cvmx_pko_mem_debug11_cn50xx cn56xx;
	struct cvmx_pko_mem_debug11_cn50xx cn56xxp1;
	struct cvmx_pko_mem_debug11_cn50xx cn58xx;
	struct cvmx_pko_mem_debug11_cn50xx cn58xxp1;
	struct cvmx_pko_mem_debug11_cn50xx cn61xx;
	struct cvmx_pko_mem_debug11_cn50xx cn63xx;
	struct cvmx_pko_mem_debug11_cn50xx cn63xxp1;
	struct cvmx_pko_mem_debug11_cn50xx cn66xx;
	struct cvmx_pko_mem_debug11_cn50xx cn68xx;
	struct cvmx_pko_mem_debug11_cn50xx cn68xxp1;
	struct cvmx_pko_mem_debug11_cn50xx cn70xx;
	struct cvmx_pko_mem_debug11_cn50xx cn70xxp1;
	struct cvmx_pko_mem_debug11_cn50xx cnf71xx;
};
typedef union cvmx_pko_mem_debug11 cvmx_pko_mem_debug11_t;

union cvmx_pko_mem_debug12 {
	uint64_t u64;
	struct cvmx_pko_mem_debug12_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_0_63:64;
#else
		uint64_t reserved_0_63:64;
#endif
	} s;
	struct cvmx_pko_mem_debug12_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t data:64;
#else
		uint64_t data:64;
#endif
	} cn30xx;
	struct cvmx_pko_mem_debug12_cn30xx cn31xx;
	struct cvmx_pko_mem_debug12_cn30xx cn38xx;
	struct cvmx_pko_mem_debug12_cn30xx cn38xxp2;
	struct cvmx_pko_mem_debug12_cn50xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t fau:28;
		uint64_t cmd:14;
		uint64_t segs:6;
		uint64_t size:16;
#else
		uint64_t size:16;
		uint64_t segs:6;
		uint64_t cmd:14;
		uint64_t fau:28;
#endif
	} cn50xx;
	struct cvmx_pko_mem_debug12_cn50xx cn52xx;
	struct cvmx_pko_mem_debug12_cn50xx cn52xxp1;
	struct cvmx_pko_mem_debug12_cn50xx cn56xx;
	struct cvmx_pko_mem_debug12_cn50xx cn56xxp1;
	struct cvmx_pko_mem_debug12_cn50xx cn58xx;
	struct cvmx_pko_mem_debug12_cn50xx cn58xxp1;
	struct cvmx_pko_mem_debug12_cn50xx cn61xx;
	struct cvmx_pko_mem_debug12_cn50xx cn63xx;
	struct cvmx_pko_mem_debug12_cn50xx cn63xxp1;
	struct cvmx_pko_mem_debug12_cn50xx cn66xx;
	struct cvmx_pko_mem_debug12_cn68xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t state:64;
#else
		uint64_t state:64;
#endif
	} cn68xx;
	struct cvmx_pko_mem_debug12_cn68xx cn68xxp1;
	struct cvmx_pko_mem_debug12_cn50xx cn70xx;
	struct cvmx_pko_mem_debug12_cn50xx cn70xxp1;
	struct cvmx_pko_mem_debug12_cn50xx cnf71xx;
};
typedef union cvmx_pko_mem_debug12 cvmx_pko_mem_debug12_t;

union cvmx_pko_mem_debug13 {
	uint64_t u64;
	struct cvmx_pko_mem_debug13_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_0_63:64;
#else
		uint64_t reserved_0_63:64;
#endif
	} s;
	struct cvmx_pko_mem_debug13_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_51_63:13;
		uint64_t widx:17;
		uint64_t ridx2:17;
		uint64_t widx2:17;
#else
		uint64_t widx2:17;
		uint64_t ridx2:17;
		uint64_t widx:17;
		uint64_t reserved_51_63:13;
#endif
	} cn30xx;
	struct cvmx_pko_mem_debug13_cn30xx cn31xx;
	struct cvmx_pko_mem_debug13_cn30xx cn38xx;
	struct cvmx_pko_mem_debug13_cn30xx cn38xxp2;
	struct cvmx_pko_mem_debug13_cn50xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t i:1;
		uint64_t back:4;
		uint64_t pool:3;
		uint64_t size:16;
		uint64_t ptr:40;
#else
		uint64_t ptr:40;
		uint64_t size:16;
		uint64_t pool:3;
		uint64_t back:4;
		uint64_t i:1;
#endif
	} cn50xx;
	struct cvmx_pko_mem_debug13_cn50xx cn52xx;
	struct cvmx_pko_mem_debug13_cn50xx cn52xxp1;
	struct cvmx_pko_mem_debug13_cn50xx cn56xx;
	struct cvmx_pko_mem_debug13_cn50xx cn56xxp1;
	struct cvmx_pko_mem_debug13_cn50xx cn58xx;
	struct cvmx_pko_mem_debug13_cn50xx cn58xxp1;
	struct cvmx_pko_mem_debug13_cn50xx cn61xx;
	struct cvmx_pko_mem_debug13_cn50xx cn63xx;
	struct cvmx_pko_mem_debug13_cn50xx cn63xxp1;
	struct cvmx_pko_mem_debug13_cn50xx cn66xx;
	struct cvmx_pko_mem_debug13_cn68xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t state:64;
#else
		uint64_t state:64;
#endif
	} cn68xx;
	struct cvmx_pko_mem_debug13_cn68xx cn68xxp1;
	struct cvmx_pko_mem_debug13_cn50xx cn70xx;
	struct cvmx_pko_mem_debug13_cn50xx cn70xxp1;
	struct cvmx_pko_mem_debug13_cn50xx cnf71xx;
};
typedef union cvmx_pko_mem_debug13 cvmx_pko_mem_debug13_t;

union cvmx_pko_mem_debug14 {
	uint64_t u64;
	struct cvmx_pko_mem_debug14_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_0_63:64;
#else
		uint64_t reserved_0_63:64;
#endif
	} s;
	struct cvmx_pko_mem_debug14_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_17_63:47;
		uint64_t ridx:17;
#else
		uint64_t ridx:17;
		uint64_t reserved_17_63:47;
#endif
	} cn30xx;
	struct cvmx_pko_mem_debug14_cn30xx cn31xx;
	struct cvmx_pko_mem_debug14_cn30xx cn38xx;
	struct cvmx_pko_mem_debug14_cn30xx cn38xxp2;
	struct cvmx_pko_mem_debug14_cn52xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t data:64;
#else
		uint64_t data:64;
#endif
	} cn52xx;
	struct cvmx_pko_mem_debug14_cn52xx cn52xxp1;
	struct cvmx_pko_mem_debug14_cn52xx cn56xx;
	struct cvmx_pko_mem_debug14_cn52xx cn56xxp1;
	struct cvmx_pko_mem_debug14_cn52xx cn61xx;
	struct cvmx_pko_mem_debug14_cn52xx cn63xx;
	struct cvmx_pko_mem_debug14_cn52xx cn63xxp1;
	struct cvmx_pko_mem_debug14_cn52xx cn66xx;
	struct cvmx_pko_mem_debug14_cn52xx cn70xx;
	struct cvmx_pko_mem_debug14_cn52xx cn70xxp1;
	struct cvmx_pko_mem_debug14_cn52xx cnf71xx;
};
typedef union cvmx_pko_mem_debug14 cvmx_pko_mem_debug14_t;

union cvmx_pko_mem_debug2 {
	uint64_t u64;
	struct cvmx_pko_mem_debug2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t i:1;
		uint64_t back:4;
		uint64_t pool:3;
		uint64_t size:16;
		uint64_t ptr:40;
#else
		uint64_t ptr:40;
		uint64_t size:16;
		uint64_t pool:3;
		uint64_t back:4;
		uint64_t i:1;
#endif
	} s;
	struct cvmx_pko_mem_debug2_s cn30xx;
	struct cvmx_pko_mem_debug2_s cn31xx;
	struct cvmx_pko_mem_debug2_s cn38xx;
	struct cvmx_pko_mem_debug2_s cn38xxp2;
	struct cvmx_pko_mem_debug2_s cn50xx;
	struct cvmx_pko_mem_debug2_s cn52xx;
	struct cvmx_pko_mem_debug2_s cn52xxp1;
	struct cvmx_pko_mem_debug2_s cn56xx;
	struct cvmx_pko_mem_debug2_s cn56xxp1;
	struct cvmx_pko_mem_debug2_s cn58xx;
	struct cvmx_pko_mem_debug2_s cn58xxp1;
	struct cvmx_pko_mem_debug2_s cn61xx;
	struct cvmx_pko_mem_debug2_s cn63xx;
	struct cvmx_pko_mem_debug2_s cn63xxp1;
	struct cvmx_pko_mem_debug2_s cn66xx;
	struct cvmx_pko_mem_debug2_s cn68xx;
	struct cvmx_pko_mem_debug2_s cn68xxp1;
	struct cvmx_pko_mem_debug2_s cn70xx;
	struct cvmx_pko_mem_debug2_s cn70xxp1;
	struct cvmx_pko_mem_debug2_s cnf71xx;
};
typedef union cvmx_pko_mem_debug2 cvmx_pko_mem_debug2_t;

union cvmx_pko_mem_debug3 {
	uint64_t u64;
	struct cvmx_pko_mem_debug3_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_0_63:64;
#else
		uint64_t reserved_0_63:64;
#endif
	} s;
	struct cvmx_pko_mem_debug3_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t i:1;
		uint64_t back:4;
		uint64_t pool:3;
		uint64_t size:16;
		uint64_t ptr:40;
#else
		uint64_t ptr:40;
		uint64_t size:16;
		uint64_t pool:3;
		uint64_t back:4;
		uint64_t i:1;
#endif
	} cn30xx;
	struct cvmx_pko_mem_debug3_cn30xx cn31xx;
	struct cvmx_pko_mem_debug3_cn30xx cn38xx;
	struct cvmx_pko_mem_debug3_cn30xx cn38xxp2;
	struct cvmx_pko_mem_debug3_cn50xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t data:64;
#else
		uint64_t data:64;
#endif
	} cn50xx;
	struct cvmx_pko_mem_debug3_cn50xx cn52xx;
	struct cvmx_pko_mem_debug3_cn50xx cn52xxp1;
	struct cvmx_pko_mem_debug3_cn50xx cn56xx;
	struct cvmx_pko_mem_debug3_cn50xx cn56xxp1;
	struct cvmx_pko_mem_debug3_cn50xx cn58xx;
	struct cvmx_pko_mem_debug3_cn50xx cn58xxp1;
	struct cvmx_pko_mem_debug3_cn50xx cn61xx;
	struct cvmx_pko_mem_debug3_cn50xx cn63xx;
	struct cvmx_pko_mem_debug3_cn50xx cn63xxp1;
	struct cvmx_pko_mem_debug3_cn50xx cn66xx;
	struct cvmx_pko_mem_debug3_cn50xx cn68xx;
	struct cvmx_pko_mem_debug3_cn50xx cn68xxp1;
	struct cvmx_pko_mem_debug3_cn50xx cn70xx;
	struct cvmx_pko_mem_debug3_cn50xx cn70xxp1;
	struct cvmx_pko_mem_debug3_cn50xx cnf71xx;
};
typedef union cvmx_pko_mem_debug3 cvmx_pko_mem_debug3_t;

union cvmx_pko_mem_debug4 {
	uint64_t u64;
	struct cvmx_pko_mem_debug4_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_0_63:64;
#else
		uint64_t reserved_0_63:64;
#endif
	} s;
	struct cvmx_pko_mem_debug4_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t data:64;
#else
		uint64_t data:64;
#endif
	} cn30xx;
	struct cvmx_pko_mem_debug4_cn30xx cn31xx;
	struct cvmx_pko_mem_debug4_cn30xx cn38xx;
	struct cvmx_pko_mem_debug4_cn30xx cn38xxp2;
	struct cvmx_pko_mem_debug4_cn50xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t cmnd_segs:3;
		uint64_t cmnd_siz:16;
		uint64_t cmnd_off:6;
		uint64_t uid:3;
		uint64_t dread_sop:1;
		uint64_t init_dwrite:1;
		uint64_t chk_once:1;
		uint64_t chk_mode:1;
		uint64_t active:1;
		uint64_t static_p:1;
		uint64_t qos:3;
		uint64_t qcb_ridx:5;
		uint64_t qid_off_max:4;
		uint64_t qid_off:4;
		uint64_t qid_base:8;
		uint64_t wait:1;
		uint64_t minor:2;
		uint64_t major:3;
#else
		uint64_t major:3;
		uint64_t minor:2;
		uint64_t wait:1;
		uint64_t qid_base:8;
		uint64_t qid_off:4;
		uint64_t qid_off_max:4;
		uint64_t qcb_ridx:5;
		uint64_t qos:3;
		uint64_t static_p:1;
		uint64_t active:1;
		uint64_t chk_mode:1;
		uint64_t chk_once:1;
		uint64_t init_dwrite:1;
		uint64_t dread_sop:1;
		uint64_t uid:3;
		uint64_t cmnd_off:6;
		uint64_t cmnd_siz:16;
		uint64_t cmnd_segs:3;
#endif
	} cn50xx;
	struct cvmx_pko_mem_debug4_cn52xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t curr_siz:8;
		uint64_t curr_off:16;
		uint64_t cmnd_segs:6;
		uint64_t cmnd_siz:16;
		uint64_t cmnd_off:6;
		uint64_t uid:2;
		uint64_t dread_sop:1;
		uint64_t init_dwrite:1;
		uint64_t chk_once:1;
		uint64_t chk_mode:1;
		uint64_t wait:1;
		uint64_t minor:2;
		uint64_t major:3;
#else
		uint64_t major:3;
		uint64_t minor:2;
		uint64_t wait:1;
		uint64_t chk_mode:1;
		uint64_t chk_once:1;
		uint64_t init_dwrite:1;
		uint64_t dread_sop:1;
		uint64_t uid:2;
		uint64_t cmnd_off:6;
		uint64_t cmnd_siz:16;
		uint64_t cmnd_segs:6;
		uint64_t curr_off:16;
		uint64_t curr_siz:8;
#endif
	} cn52xx;
	struct cvmx_pko_mem_debug4_cn52xx cn52xxp1;
	struct cvmx_pko_mem_debug4_cn52xx cn56xx;
	struct cvmx_pko_mem_debug4_cn52xx cn56xxp1;
	struct cvmx_pko_mem_debug4_cn50xx cn58xx;
	struct cvmx_pko_mem_debug4_cn50xx cn58xxp1;
	struct cvmx_pko_mem_debug4_cn52xx cn61xx;
	struct cvmx_pko_mem_debug4_cn52xx cn63xx;
	struct cvmx_pko_mem_debug4_cn52xx cn63xxp1;
	struct cvmx_pko_mem_debug4_cn52xx cn66xx;
	struct cvmx_pko_mem_debug4_cn68xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t curr_siz:9;
		uint64_t curr_off:16;
		uint64_t cmnd_segs:6;
		uint64_t cmnd_siz:16;
		uint64_t cmnd_off:6;
		uint64_t dread_sop:1;
		uint64_t init_dwrite:1;
		uint64_t chk_once:1;
		uint64_t chk_mode:1;
		uint64_t reserved_6_6:1;
		uint64_t minor:2;
		uint64_t major:4;
#else
		uint64_t major:4;
		uint64_t minor:2;
		uint64_t reserved_6_6:1;
		uint64_t chk_mode:1;
		uint64_t chk_once:1;
		uint64_t init_dwrite:1;
		uint64_t dread_sop:1;
		uint64_t cmnd_off:6;
		uint64_t cmnd_siz:16;
		uint64_t cmnd_segs:6;
		uint64_t curr_off:16;
		uint64_t curr_siz:9;
#endif
	} cn68xx;
	struct cvmx_pko_mem_debug4_cn68xx cn68xxp1;
	struct cvmx_pko_mem_debug4_cn52xx cn70xx;
	struct cvmx_pko_mem_debug4_cn52xx cn70xxp1;
	struct cvmx_pko_mem_debug4_cn52xx cnf71xx;
};
typedef union cvmx_pko_mem_debug4 cvmx_pko_mem_debug4_t;

union cvmx_pko_mem_debug5 {
	uint64_t u64;
	struct cvmx_pko_mem_debug5_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_0_63:64;
#else
		uint64_t reserved_0_63:64;
#endif
	} s;
	struct cvmx_pko_mem_debug5_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dwri_mod:1;
		uint64_t dwri_sop:1;
		uint64_t dwri_len:1;
		uint64_t dwri_cnt:13;
		uint64_t cmnd_siz:16;
		uint64_t uid:1;
		uint64_t xfer_wor:1;
		uint64_t xfer_dwr:1;
		uint64_t cbuf_fre:1;
		uint64_t reserved_27_27:1;
		uint64_t chk_mode:1;
		uint64_t active:1;
		uint64_t qos:3;
		uint64_t qcb_ridx:5;
		uint64_t qid_off:3;
		uint64_t qid_base:7;
		uint64_t wait:1;
		uint64_t minor:2;
		uint64_t major:4;
#else
		uint64_t major:4;
		uint64_t minor:2;
		uint64_t wait:1;
		uint64_t qid_base:7;
		uint64_t qid_off:3;
		uint64_t qcb_ridx:5;
		uint64_t qos:3;
		uint64_t active:1;
		uint64_t chk_mode:1;
		uint64_t reserved_27_27:1;
		uint64_t cbuf_fre:1;
		uint64_t xfer_dwr:1;
		uint64_t xfer_wor:1;
		uint64_t uid:1;
		uint64_t cmnd_siz:16;
		uint64_t dwri_cnt:13;
		uint64_t dwri_len:1;
		uint64_t dwri_sop:1;
		uint64_t dwri_mod:1;
#endif
	} cn30xx;
	struct cvmx_pko_mem_debug5_cn30xx cn31xx;
	struct cvmx_pko_mem_debug5_cn30xx cn38xx;
	struct cvmx_pko_mem_debug5_cn30xx cn38xxp2;
	struct cvmx_pko_mem_debug5_cn50xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t curr_ptr:29;
		uint64_t curr_siz:16;
		uint64_t curr_off:16;
		uint64_t cmnd_segs:3;
#else
		uint64_t cmnd_segs:3;
		uint64_t curr_off:16;
		uint64_t curr_siz:16;
		uint64_t curr_ptr:29;
#endif
	} cn50xx;
	struct cvmx_pko_mem_debug5_cn52xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_54_63:10;
		uint64_t nxt_inflt:6;
		uint64_t curr_ptr:40;
		uint64_t curr_siz:8;
#else
		uint64_t curr_siz:8;
		uint64_t curr_ptr:40;
		uint64_t nxt_inflt:6;
		uint64_t reserved_54_63:10;
#endif
	} cn52xx;
	struct cvmx_pko_mem_debug5_cn52xx cn52xxp1;
	struct cvmx_pko_mem_debug5_cn52xx cn56xx;
	struct cvmx_pko_mem_debug5_cn52xx cn56xxp1;
	struct cvmx_pko_mem_debug5_cn50xx cn58xx;
	struct cvmx_pko_mem_debug5_cn50xx cn58xxp1;
	struct cvmx_pko_mem_debug5_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_56_63:8;
		uint64_t ptp:1;
		uint64_t major_3:1;
		uint64_t nxt_inflt:6;
		uint64_t curr_ptr:40;
		uint64_t curr_siz:8;
#else
		uint64_t curr_siz:8;
		uint64_t curr_ptr:40;
		uint64_t nxt_inflt:6;
		uint64_t major_3:1;
		uint64_t ptp:1;
		uint64_t reserved_56_63:8;
#endif
	} cn61xx;
	struct cvmx_pko_mem_debug5_cn61xx cn63xx;
	struct cvmx_pko_mem_debug5_cn61xx cn63xxp1;
	struct cvmx_pko_mem_debug5_cn61xx cn66xx;
	struct cvmx_pko_mem_debug5_cn68xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_57_63:7;
		uint64_t uid:3;
		uint64_t ptp:1;
		uint64_t nxt_inflt:6;
		uint64_t curr_ptr:40;
		uint64_t curr_siz:7;
#else
		uint64_t curr_siz:7;
		uint64_t curr_ptr:40;
		uint64_t nxt_inflt:6;
		uint64_t ptp:1;
		uint64_t uid:3;
		uint64_t reserved_57_63:7;
#endif
	} cn68xx;
	struct cvmx_pko_mem_debug5_cn68xx cn68xxp1;
	struct cvmx_pko_mem_debug5_cn61xx cn70xx;
	struct cvmx_pko_mem_debug5_cn61xx cn70xxp1;
	struct cvmx_pko_mem_debug5_cn61xx cnf71xx;
};
typedef union cvmx_pko_mem_debug5 cvmx_pko_mem_debug5_t;

union cvmx_pko_mem_debug6 {
	uint64_t u64;
	struct cvmx_pko_mem_debug6_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_38_63:26;
		uint64_t qos_active:1;
		uint64_t reserved_0_36:37;
#else
		uint64_t reserved_0_36:37;
		uint64_t qos_active:1;
		uint64_t reserved_38_63:26;
#endif
	} s;
	struct cvmx_pko_mem_debug6_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_11_63:53;
		uint64_t qid_offm:3;
		uint64_t static_p:1;
		uint64_t work_min:3;
		uint64_t dwri_chk:1;
		uint64_t dwri_uid:1;
		uint64_t dwri_mod:2;
#else
		uint64_t dwri_mod:2;
		uint64_t dwri_uid:1;
		uint64_t dwri_chk:1;
		uint64_t work_min:3;
		uint64_t static_p:1;
		uint64_t qid_offm:3;
		uint64_t reserved_11_63:53;
#endif
	} cn30xx;
	struct cvmx_pko_mem_debug6_cn30xx cn31xx;
	struct cvmx_pko_mem_debug6_cn30xx cn38xx;
	struct cvmx_pko_mem_debug6_cn30xx cn38xxp2;
	struct cvmx_pko_mem_debug6_cn50xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_11_63:53;
		uint64_t curr_ptr:11;
#else
		uint64_t curr_ptr:11;
		uint64_t reserved_11_63:53;
#endif
	} cn50xx;
	struct cvmx_pko_mem_debug6_cn52xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_37_63:27;
		uint64_t qid_offres:4;
		uint64_t qid_offths:4;
		uint64_t preempter:1;
		uint64_t preemptee:1;
		uint64_t preempted:1;
		uint64_t active:1;
		uint64_t statc:1;
		uint64_t qos:3;
		uint64_t qcb_ridx:5;
		uint64_t qid_offmax:4;
		uint64_t qid_off:4;
		uint64_t qid_base:8;
#else
		uint64_t qid_base:8;
		uint64_t qid_off:4;
		uint64_t qid_offmax:4;
		uint64_t qcb_ridx:5;
		uint64_t qos:3;
		uint64_t statc:1;
		uint64_t active:1;
		uint64_t preempted:1;
		uint64_t preemptee:1;
		uint64_t preempter:1;
		uint64_t qid_offths:4;
		uint64_t qid_offres:4;
		uint64_t reserved_37_63:27;
#endif
	} cn52xx;
	struct cvmx_pko_mem_debug6_cn52xx cn52xxp1;
	struct cvmx_pko_mem_debug6_cn52xx cn56xx;
	struct cvmx_pko_mem_debug6_cn52xx cn56xxp1;
	struct cvmx_pko_mem_debug6_cn50xx cn58xx;
	struct cvmx_pko_mem_debug6_cn50xx cn58xxp1;
	struct cvmx_pko_mem_debug6_cn52xx cn61xx;
	struct cvmx_pko_mem_debug6_cn52xx cn63xx;
	struct cvmx_pko_mem_debug6_cn52xx cn63xxp1;
	struct cvmx_pko_mem_debug6_cn52xx cn66xx;
	struct cvmx_pko_mem_debug6_cn68xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_38_63:26;
		uint64_t qos_active:1;
		uint64_t qid_offths:5;
		uint64_t preempter:1;
		uint64_t preemptee:1;
		uint64_t active:1;
		uint64_t static_p:1;
		uint64_t qos:3;
		uint64_t qcb_ridx:7;
		uint64_t qid_offmax:5;
		uint64_t qid_off:5;
		uint64_t qid_base:8;
#else
		uint64_t qid_base:8;
		uint64_t qid_off:5;
		uint64_t qid_offmax:5;
		uint64_t qcb_ridx:7;
		uint64_t qos:3;
		uint64_t static_p:1;
		uint64_t active:1;
		uint64_t preemptee:1;
		uint64_t preempter:1;
		uint64_t qid_offths:5;
		uint64_t qos_active:1;
		uint64_t reserved_38_63:26;
#endif
	} cn68xx;
	struct cvmx_pko_mem_debug6_cn68xx cn68xxp1;
	struct cvmx_pko_mem_debug6_cn70xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_63_37:27;
		uint64_t qid_offres:4;
		uint64_t qid_offths:4;
		uint64_t preempter:1;
		uint64_t preemptee:1;
		uint64_t preempted:1;
		uint64_t active:1;
		uint64_t staticb:1;
		uint64_t qos:3;
		uint64_t qcb_ridx:5;
		uint64_t qid_offmax:4;
		uint64_t qid_off:4;
		uint64_t qid_base:8;
#else
		uint64_t qid_base:8;
		uint64_t qid_off:4;
		uint64_t qid_offmax:4;
		uint64_t qcb_ridx:5;
		uint64_t qos:3;
		uint64_t staticb:1;
		uint64_t active:1;
		uint64_t preempted:1;
		uint64_t preemptee:1;
		uint64_t preempter:1;
		uint64_t qid_offths:4;
		uint64_t qid_offres:4;
		uint64_t reserved_63_37:27;
#endif
	} cn70xx;
	struct cvmx_pko_mem_debug6_cn70xx cn70xxp1;
	struct cvmx_pko_mem_debug6_cn52xx cnf71xx;
};
typedef union cvmx_pko_mem_debug6 cvmx_pko_mem_debug6_t;

union cvmx_pko_mem_debug7 {
	uint64_t u64;
	struct cvmx_pko_mem_debug7_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_0_63:64;
#else
		uint64_t reserved_0_63:64;
#endif
	} s;
	struct cvmx_pko_mem_debug7_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_58_63:6;
		uint64_t dwb:9;
		uint64_t start:33;
		uint64_t size:16;
#else
		uint64_t size:16;
		uint64_t start:33;
		uint64_t dwb:9;
		uint64_t reserved_58_63:6;
#endif
	} cn30xx;
	struct cvmx_pko_mem_debug7_cn30xx cn31xx;
	struct cvmx_pko_mem_debug7_cn30xx cn38xx;
	struct cvmx_pko_mem_debug7_cn30xx cn38xxp2;
	struct cvmx_pko_mem_debug7_cn50xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t qos:5;
		uint64_t tail:1;
		uint64_t buf_siz:13;
		uint64_t buf_ptr:33;
		uint64_t qcb_widx:6;
		uint64_t qcb_ridx:6;
#else
		uint64_t qcb_ridx:6;
		uint64_t qcb_widx:6;
		uint64_t buf_ptr:33;
		uint64_t buf_siz:13;
		uint64_t tail:1;
		uint64_t qos:5;
#endif
	} cn50xx;
	struct cvmx_pko_mem_debug7_cn50xx cn52xx;
	struct cvmx_pko_mem_debug7_cn50xx cn52xxp1;
	struct cvmx_pko_mem_debug7_cn50xx cn56xx;
	struct cvmx_pko_mem_debug7_cn50xx cn56xxp1;
	struct cvmx_pko_mem_debug7_cn50xx cn58xx;
	struct cvmx_pko_mem_debug7_cn50xx cn58xxp1;
	struct cvmx_pko_mem_debug7_cn50xx cn61xx;
	struct cvmx_pko_mem_debug7_cn50xx cn63xx;
	struct cvmx_pko_mem_debug7_cn50xx cn63xxp1;
	struct cvmx_pko_mem_debug7_cn50xx cn66xx;
	struct cvmx_pko_mem_debug7_cn68xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t buf_siz:11;
		uint64_t buf_ptr:37;
		uint64_t qcb_widx:8;
		uint64_t qcb_ridx:8;
#else
		uint64_t qcb_ridx:8;
		uint64_t qcb_widx:8;
		uint64_t buf_ptr:37;
		uint64_t buf_siz:11;
#endif
	} cn68xx;
	struct cvmx_pko_mem_debug7_cn68xx cn68xxp1;
	struct cvmx_pko_mem_debug7_cn50xx cn70xx;
	struct cvmx_pko_mem_debug7_cn50xx cn70xxp1;
	struct cvmx_pko_mem_debug7_cn50xx cnf71xx;
};
typedef union cvmx_pko_mem_debug7 cvmx_pko_mem_debug7_t;

union cvmx_pko_mem_debug8 {
	uint64_t u64;
	struct cvmx_pko_mem_debug8_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_59_63:5;
		uint64_t tail:1;
		uint64_t reserved_0_57:58;
#else
		uint64_t reserved_0_57:58;
		uint64_t tail:1;
		uint64_t reserved_59_63:5;
#endif
	} s;
	struct cvmx_pko_mem_debug8_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t qos:5;
		uint64_t tail:1;
		uint64_t buf_siz:13;
		uint64_t buf_ptr:33;
		uint64_t qcb_widx:6;
		uint64_t qcb_ridx:6;
#else
		uint64_t qcb_ridx:6;
		uint64_t qcb_widx:6;
		uint64_t buf_ptr:33;
		uint64_t buf_siz:13;
		uint64_t tail:1;
		uint64_t qos:5;
#endif
	} cn30xx;
	struct cvmx_pko_mem_debug8_cn30xx cn31xx;
	struct cvmx_pko_mem_debug8_cn30xx cn38xx;
	struct cvmx_pko_mem_debug8_cn30xx cn38xxp2;
	struct cvmx_pko_mem_debug8_cn50xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t doorbell:20;
		uint64_t reserved_6_7:2;
		uint64_t static_p:1;
		uint64_t s_tail:1;
		uint64_t static_q:1;
		uint64_t qos:3;
#else
		uint64_t qos:3;
		uint64_t static_q:1;
		uint64_t s_tail:1;
		uint64_t static_p:1;
		uint64_t reserved_6_7:2;
		uint64_t doorbell:20;
		uint64_t reserved_28_63:36;
#endif
	} cn50xx;
	struct cvmx_pko_mem_debug8_cn52xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_29_63:35;
		uint64_t preempter:1;
		uint64_t doorbell:20;
		uint64_t reserved_7_7:1;
		uint64_t preemptee:1;
		uint64_t static_p:1;
		uint64_t s_tail:1;
		uint64_t static_q:1;
		uint64_t qos:3;
#else
		uint64_t qos:3;
		uint64_t static_q:1;
		uint64_t s_tail:1;
		uint64_t static_p:1;
		uint64_t preemptee:1;
		uint64_t reserved_7_7:1;
		uint64_t doorbell:20;
		uint64_t preempter:1;
		uint64_t reserved_29_63:35;
#endif
	} cn52xx;
	struct cvmx_pko_mem_debug8_cn52xx cn52xxp1;
	struct cvmx_pko_mem_debug8_cn52xx cn56xx;
	struct cvmx_pko_mem_debug8_cn52xx cn56xxp1;
	struct cvmx_pko_mem_debug8_cn50xx cn58xx;
	struct cvmx_pko_mem_debug8_cn50xx cn58xxp1;
	struct cvmx_pko_mem_debug8_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_42_63:22;
		uint64_t qid_qqos:8;
		uint64_t reserved_33_33:1;
		uint64_t qid_idx:4;
		uint64_t preempter:1;
		uint64_t doorbell:20;
		uint64_t reserved_7_7:1;
		uint64_t preemptee:1;
		uint64_t static_p:1;
		uint64_t s_tail:1;
		uint64_t static_q:1;
		uint64_t qos:3;
#else
		uint64_t qos:3;
		uint64_t static_q:1;
		uint64_t s_tail:1;
		uint64_t static_p:1;
		uint64_t preemptee:1;
		uint64_t reserved_7_7:1;
		uint64_t doorbell:20;
		uint64_t preempter:1;
		uint64_t qid_idx:4;
		uint64_t reserved_33_33:1;
		uint64_t qid_qqos:8;
		uint64_t reserved_42_63:22;
#endif
	} cn61xx;
	struct cvmx_pko_mem_debug8_cn52xx cn63xx;
	struct cvmx_pko_mem_debug8_cn52xx cn63xxp1;
	struct cvmx_pko_mem_debug8_cn61xx cn66xx;
	struct cvmx_pko_mem_debug8_cn68xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_50_63:14;
		uint64_t qid_qqos:8;
		uint64_t qid_idx:5;
		uint64_t preempter:1;
		uint64_t doorbell:20;
		uint64_t reserved_9_15:7;
		uint64_t qid_qos:6;
		uint64_t qid_tail:1;
		uint64_t buf_siz:2;
#else
		uint64_t buf_siz:2;
		uint64_t qid_tail:1;
		uint64_t qid_qos:6;
		uint64_t reserved_9_15:7;
		uint64_t doorbell:20;
		uint64_t preempter:1;
		uint64_t qid_idx:5;
		uint64_t qid_qqos:8;
		uint64_t reserved_50_63:14;
#endif
	} cn68xx;
	struct cvmx_pko_mem_debug8_cn68xx cn68xxp1;
	struct cvmx_pko_mem_debug8_cn61xx cn70xx;
	struct cvmx_pko_mem_debug8_cn61xx cn70xxp1;
	struct cvmx_pko_mem_debug8_cn61xx cnf71xx;
};
typedef union cvmx_pko_mem_debug8 cvmx_pko_mem_debug8_t;

union cvmx_pko_mem_debug9 {
	uint64_t u64;
	struct cvmx_pko_mem_debug9_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_49_63:15;
		uint64_t ptrs0:17;
		uint64_t reserved_0_31:32;
#else
		uint64_t reserved_0_31:32;
		uint64_t ptrs0:17;
		uint64_t reserved_49_63:15;
#endif
	} s;
	struct cvmx_pko_mem_debug9_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t doorbell:20;
		uint64_t reserved_5_7:3;
		uint64_t s_tail:1;
		uint64_t static_q:1;
		uint64_t qos:3;
#else
		uint64_t qos:3;
		uint64_t static_q:1;
		uint64_t s_tail:1;
		uint64_t reserved_5_7:3;
		uint64_t doorbell:20;
		uint64_t reserved_28_63:36;
#endif
	} cn30xx;
	struct cvmx_pko_mem_debug9_cn30xx cn31xx;
	struct cvmx_pko_mem_debug9_cn38xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t doorbell:20;
		uint64_t reserved_6_7:2;
		uint64_t static_p:1;
		uint64_t s_tail:1;
		uint64_t static_q:1;
		uint64_t qos:3;
#else
		uint64_t qos:3;
		uint64_t static_q:1;
		uint64_t s_tail:1;
		uint64_t static_p:1;
		uint64_t reserved_6_7:2;
		uint64_t doorbell:20;
		uint64_t reserved_28_63:36;
#endif
	} cn38xx;
	struct cvmx_pko_mem_debug9_cn38xx cn38xxp2;
	struct cvmx_pko_mem_debug9_cn50xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_49_63:15;
		uint64_t ptrs0:17;
		uint64_t reserved_17_31:15;
		uint64_t ptrs3:17;
#else
		uint64_t ptrs3:17;
		uint64_t reserved_17_31:15;
		uint64_t ptrs0:17;
		uint64_t reserved_49_63:15;
#endif
	} cn50xx;
	struct cvmx_pko_mem_debug9_cn50xx cn52xx;
	struct cvmx_pko_mem_debug9_cn50xx cn52xxp1;
	struct cvmx_pko_mem_debug9_cn50xx cn56xx;
	struct cvmx_pko_mem_debug9_cn50xx cn56xxp1;
	struct cvmx_pko_mem_debug9_cn50xx cn58xx;
	struct cvmx_pko_mem_debug9_cn50xx cn58xxp1;
	struct cvmx_pko_mem_debug9_cn50xx cn61xx;
	struct cvmx_pko_mem_debug9_cn50xx cn63xx;
	struct cvmx_pko_mem_debug9_cn50xx cn63xxp1;
	struct cvmx_pko_mem_debug9_cn50xx cn66xx;
	struct cvmx_pko_mem_debug9_cn50xx cn68xx;
	struct cvmx_pko_mem_debug9_cn50xx cn68xxp1;
	struct cvmx_pko_mem_debug9_cn50xx cn70xx;
	struct cvmx_pko_mem_debug9_cn50xx cn70xxp1;
	struct cvmx_pko_mem_debug9_cn50xx cnf71xx;
};
typedef union cvmx_pko_mem_debug9 cvmx_pko_mem_debug9_t;

union cvmx_pko_mem_iport_ptrs {
	uint64_t u64;
	struct cvmx_pko_mem_iport_ptrs_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_63_63:1;
		uint64_t crc:1;
		uint64_t static_p:1;
		uint64_t qos_mask:8;
		uint64_t min_pkt:3;
		uint64_t reserved_31_49:19;
		uint64_t pipe:7;
		uint64_t reserved_21_23:3;
		uint64_t intr:5;
		uint64_t reserved_13_15:3;
		uint64_t eid:5;
		uint64_t reserved_7_7:1;
		uint64_t ipid:7;
#else
		uint64_t ipid:7;
		uint64_t reserved_7_7:1;
		uint64_t eid:5;
		uint64_t reserved_13_15:3;
		uint64_t intr:5;
		uint64_t reserved_21_23:3;
		uint64_t pipe:7;
		uint64_t reserved_31_49:19;
		uint64_t min_pkt:3;
		uint64_t qos_mask:8;
		uint64_t static_p:1;
		uint64_t crc:1;
		uint64_t reserved_63_63:1;
#endif
	} s;
	struct cvmx_pko_mem_iport_ptrs_s cn68xx;
	struct cvmx_pko_mem_iport_ptrs_s cn68xxp1;
};
typedef union cvmx_pko_mem_iport_ptrs cvmx_pko_mem_iport_ptrs_t;

union cvmx_pko_mem_iport_qos {
	uint64_t u64;
	struct cvmx_pko_mem_iport_qos_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_61_63:3;
		uint64_t qos_mask:8;
		uint64_t reserved_13_52:40;
		uint64_t eid:5;
		uint64_t reserved_7_7:1;
		uint64_t ipid:7;
#else
		uint64_t ipid:7;
		uint64_t reserved_7_7:1;
		uint64_t eid:5;
		uint64_t reserved_13_52:40;
		uint64_t qos_mask:8;
		uint64_t reserved_61_63:3;
#endif
	} s;
	struct cvmx_pko_mem_iport_qos_s cn68xx;
	struct cvmx_pko_mem_iport_qos_s cn68xxp1;
};
typedef union cvmx_pko_mem_iport_qos cvmx_pko_mem_iport_qos_t;

union cvmx_pko_mem_iqueue_ptrs {
	uint64_t u64;
	struct cvmx_pko_mem_iqueue_ptrs_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t s_tail:1;
		uint64_t static_p:1;
		uint64_t static_q:1;
		uint64_t qos_mask:8;
		uint64_t buf_ptr:31;
		uint64_t tail:1;
		uint64_t index:5;
		uint64_t reserved_15_15:1;
		uint64_t ipid:7;
		uint64_t qid:8;
#else
		uint64_t qid:8;
		uint64_t ipid:7;
		uint64_t reserved_15_15:1;
		uint64_t index:5;
		uint64_t tail:1;
		uint64_t buf_ptr:31;
		uint64_t qos_mask:8;
		uint64_t static_q:1;
		uint64_t static_p:1;
		uint64_t s_tail:1;
#endif
	} s;
	struct cvmx_pko_mem_iqueue_ptrs_s cn68xx;
	struct cvmx_pko_mem_iqueue_ptrs_s cn68xxp1;
};
typedef union cvmx_pko_mem_iqueue_ptrs cvmx_pko_mem_iqueue_ptrs_t;

union cvmx_pko_mem_iqueue_qos {
	uint64_t u64;
	struct cvmx_pko_mem_iqueue_qos_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_61_63:3;
		uint64_t qos_mask:8;
		uint64_t reserved_15_52:38;
		uint64_t ipid:7;
		uint64_t qid:8;
#else
		uint64_t qid:8;
		uint64_t ipid:7;
		uint64_t reserved_15_52:38;
		uint64_t qos_mask:8;
		uint64_t reserved_61_63:3;
#endif
	} s;
	struct cvmx_pko_mem_iqueue_qos_s cn68xx;
	struct cvmx_pko_mem_iqueue_qos_s cn68xxp1;
};
typedef union cvmx_pko_mem_iqueue_qos cvmx_pko_mem_iqueue_qos_t;

union cvmx_pko_mem_port_ptrs {
	uint64_t u64;
	struct cvmx_pko_mem_port_ptrs_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_62_63:2;
		uint64_t static_p:1;
		uint64_t qos_mask:8;
		uint64_t reserved_16_52:37;
		uint64_t bp_port:6;
		uint64_t eid:4;
		uint64_t pid:6;
#else
		uint64_t pid:6;
		uint64_t eid:4;
		uint64_t bp_port:6;
		uint64_t reserved_16_52:37;
		uint64_t qos_mask:8;
		uint64_t static_p:1;
		uint64_t reserved_62_63:2;
#endif
	} s;
	struct cvmx_pko_mem_port_ptrs_s cn52xx;
	struct cvmx_pko_mem_port_ptrs_s cn52xxp1;
	struct cvmx_pko_mem_port_ptrs_s cn56xx;
	struct cvmx_pko_mem_port_ptrs_s cn56xxp1;
	struct cvmx_pko_mem_port_ptrs_s cn61xx;
	struct cvmx_pko_mem_port_ptrs_s cn63xx;
	struct cvmx_pko_mem_port_ptrs_s cn63xxp1;
	struct cvmx_pko_mem_port_ptrs_s cn66xx;
	struct cvmx_pko_mem_port_ptrs_s cn70xx;
	struct cvmx_pko_mem_port_ptrs_s cn70xxp1;
	struct cvmx_pko_mem_port_ptrs_s cnf71xx;
};
typedef union cvmx_pko_mem_port_ptrs cvmx_pko_mem_port_ptrs_t;

union cvmx_pko_mem_port_qos {
	uint64_t u64;
	struct cvmx_pko_mem_port_qos_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_61_63:3;
		uint64_t qos_mask:8;
		uint64_t reserved_10_52:43;
		uint64_t eid:4;
		uint64_t pid:6;
#else
		uint64_t pid:6;
		uint64_t eid:4;
		uint64_t reserved_10_52:43;
		uint64_t qos_mask:8;
		uint64_t reserved_61_63:3;
#endif
	} s;
	struct cvmx_pko_mem_port_qos_s cn52xx;
	struct cvmx_pko_mem_port_qos_s cn52xxp1;
	struct cvmx_pko_mem_port_qos_s cn56xx;
	struct cvmx_pko_mem_port_qos_s cn56xxp1;
	struct cvmx_pko_mem_port_qos_s cn61xx;
	struct cvmx_pko_mem_port_qos_s cn63xx;
	struct cvmx_pko_mem_port_qos_s cn63xxp1;
	struct cvmx_pko_mem_port_qos_s cn66xx;
	struct cvmx_pko_mem_port_qos_s cn70xx;
	struct cvmx_pko_mem_port_qos_s cn70xxp1;
	struct cvmx_pko_mem_port_qos_s cnf71xx;
};
typedef union cvmx_pko_mem_port_qos cvmx_pko_mem_port_qos_t;

union cvmx_pko_mem_port_rate0 {
	uint64_t u64;
	struct cvmx_pko_mem_port_rate0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_51_63:13;
		uint64_t rate_word:19;
		uint64_t rate_pkt:24;
		uint64_t reserved_7_7:1;
		uint64_t pid:7;
#else
		uint64_t pid:7;
		uint64_t reserved_7_7:1;
		uint64_t rate_pkt:24;
		uint64_t rate_word:19;
		uint64_t reserved_51_63:13;
#endif
	} s;
	struct cvmx_pko_mem_port_rate0_cn52xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_51_63:13;
		uint64_t rate_word:19;
		uint64_t rate_pkt:24;
		uint64_t reserved_6_7:2;
		uint64_t pid:6;
#else
		uint64_t pid:6;
		uint64_t reserved_6_7:2;
		uint64_t rate_pkt:24;
		uint64_t rate_word:19;
		uint64_t reserved_51_63:13;
#endif
	} cn52xx;
	struct cvmx_pko_mem_port_rate0_cn52xx cn52xxp1;
	struct cvmx_pko_mem_port_rate0_cn52xx cn56xx;
	struct cvmx_pko_mem_port_rate0_cn52xx cn56xxp1;
	struct cvmx_pko_mem_port_rate0_cn52xx cn61xx;
	struct cvmx_pko_mem_port_rate0_cn52xx cn63xx;
	struct cvmx_pko_mem_port_rate0_cn52xx cn63xxp1;
	struct cvmx_pko_mem_port_rate0_cn52xx cn66xx;
	struct cvmx_pko_mem_port_rate0_s cn68xx;
	struct cvmx_pko_mem_port_rate0_s cn68xxp1;
	struct cvmx_pko_mem_port_rate0_cn52xx cn70xx;
	struct cvmx_pko_mem_port_rate0_cn52xx cn70xxp1;
	struct cvmx_pko_mem_port_rate0_cn52xx cnf71xx;
};
typedef union cvmx_pko_mem_port_rate0 cvmx_pko_mem_port_rate0_t;

union cvmx_pko_mem_port_rate1 {
	uint64_t u64;
	struct cvmx_pko_mem_port_rate1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t rate_lim:24;
		uint64_t reserved_7_7:1;
		uint64_t pid:7;
#else
		uint64_t pid:7;
		uint64_t reserved_7_7:1;
		uint64_t rate_lim:24;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_pko_mem_port_rate1_cn52xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t rate_lim:24;
		uint64_t reserved_6_7:2;
		uint64_t pid:6;
#else
		uint64_t pid:6;
		uint64_t reserved_6_7:2;
		uint64_t rate_lim:24;
		uint64_t reserved_32_63:32;
#endif
	} cn52xx;
	struct cvmx_pko_mem_port_rate1_cn52xx cn52xxp1;
	struct cvmx_pko_mem_port_rate1_cn52xx cn56xx;
	struct cvmx_pko_mem_port_rate1_cn52xx cn56xxp1;
	struct cvmx_pko_mem_port_rate1_cn52xx cn61xx;
	struct cvmx_pko_mem_port_rate1_cn52xx cn63xx;
	struct cvmx_pko_mem_port_rate1_cn52xx cn63xxp1;
	struct cvmx_pko_mem_port_rate1_cn52xx cn66xx;
	struct cvmx_pko_mem_port_rate1_s cn68xx;
	struct cvmx_pko_mem_port_rate1_s cn68xxp1;
	struct cvmx_pko_mem_port_rate1_cn52xx cn70xx;
	struct cvmx_pko_mem_port_rate1_cn52xx cn70xxp1;
	struct cvmx_pko_mem_port_rate1_cn52xx cnf71xx;
};
typedef union cvmx_pko_mem_port_rate1 cvmx_pko_mem_port_rate1_t;

union cvmx_pko_mem_queue_ptrs {
	uint64_t u64;
	struct cvmx_pko_mem_queue_ptrs_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t s_tail:1;
		uint64_t static_p:1;
		uint64_t static_q:1;
		uint64_t qos_mask:8;
		uint64_t buf_ptr:36;
		uint64_t tail:1;
		uint64_t index:3;
		uint64_t port:6;
		uint64_t queue:7;
#else
		uint64_t queue:7;
		uint64_t port:6;
		uint64_t index:3;
		uint64_t tail:1;
		uint64_t buf_ptr:36;
		uint64_t qos_mask:8;
		uint64_t static_q:1;
		uint64_t static_p:1;
		uint64_t s_tail:1;
#endif
	} s;
	struct cvmx_pko_mem_queue_ptrs_s cn30xx;
	struct cvmx_pko_mem_queue_ptrs_s cn31xx;
	struct cvmx_pko_mem_queue_ptrs_s cn38xx;
	struct cvmx_pko_mem_queue_ptrs_s cn38xxp2;
	struct cvmx_pko_mem_queue_ptrs_s cn50xx;
	struct cvmx_pko_mem_queue_ptrs_s cn52xx;
	struct cvmx_pko_mem_queue_ptrs_s cn52xxp1;
	struct cvmx_pko_mem_queue_ptrs_s cn56xx;
	struct cvmx_pko_mem_queue_ptrs_s cn56xxp1;
	struct cvmx_pko_mem_queue_ptrs_s cn58xx;
	struct cvmx_pko_mem_queue_ptrs_s cn58xxp1;
	struct cvmx_pko_mem_queue_ptrs_s cn61xx;
	struct cvmx_pko_mem_queue_ptrs_s cn63xx;
	struct cvmx_pko_mem_queue_ptrs_s cn63xxp1;
	struct cvmx_pko_mem_queue_ptrs_s cn66xx;
	struct cvmx_pko_mem_queue_ptrs_s cn70xx;
	struct cvmx_pko_mem_queue_ptrs_s cn70xxp1;
	struct cvmx_pko_mem_queue_ptrs_s cnf71xx;
};
typedef union cvmx_pko_mem_queue_ptrs cvmx_pko_mem_queue_ptrs_t;

union cvmx_pko_mem_queue_qos {
	uint64_t u64;
	struct cvmx_pko_mem_queue_qos_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_61_63:3;
		uint64_t qos_mask:8;
		uint64_t reserved_13_52:40;
		uint64_t pid:6;
		uint64_t qid:7;
#else
		uint64_t qid:7;
		uint64_t pid:6;
		uint64_t reserved_13_52:40;
		uint64_t qos_mask:8;
		uint64_t reserved_61_63:3;
#endif
	} s;
	struct cvmx_pko_mem_queue_qos_s cn30xx;
	struct cvmx_pko_mem_queue_qos_s cn31xx;
	struct cvmx_pko_mem_queue_qos_s cn38xx;
	struct cvmx_pko_mem_queue_qos_s cn38xxp2;
	struct cvmx_pko_mem_queue_qos_s cn50xx;
	struct cvmx_pko_mem_queue_qos_s cn52xx;
	struct cvmx_pko_mem_queue_qos_s cn52xxp1;
	struct cvmx_pko_mem_queue_qos_s cn56xx;
	struct cvmx_pko_mem_queue_qos_s cn56xxp1;
	struct cvmx_pko_mem_queue_qos_s cn58xx;
	struct cvmx_pko_mem_queue_qos_s cn58xxp1;
	struct cvmx_pko_mem_queue_qos_s cn61xx;
	struct cvmx_pko_mem_queue_qos_s cn63xx;
	struct cvmx_pko_mem_queue_qos_s cn63xxp1;
	struct cvmx_pko_mem_queue_qos_s cn66xx;
	struct cvmx_pko_mem_queue_qos_s cn70xx;
	struct cvmx_pko_mem_queue_qos_s cn70xxp1;
	struct cvmx_pko_mem_queue_qos_s cnf71xx;
};
typedef union cvmx_pko_mem_queue_qos cvmx_pko_mem_queue_qos_t;

union cvmx_pko_mem_throttle_int {
	uint64_t u64;
	struct cvmx_pko_mem_throttle_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_47_63:17;
		uint64_t word:15;
		uint64_t reserved_14_31:18;
		uint64_t packet:6;
		uint64_t reserved_5_7:3;
		uint64_t intr:5;
#else
		uint64_t intr:5;
		uint64_t reserved_5_7:3;
		uint64_t packet:6;
		uint64_t reserved_14_31:18;
		uint64_t word:15;
		uint64_t reserved_47_63:17;
#endif
	} s;
	struct cvmx_pko_mem_throttle_int_s cn68xx;
	struct cvmx_pko_mem_throttle_int_s cn68xxp1;
};
typedef union cvmx_pko_mem_throttle_int cvmx_pko_mem_throttle_int_t;

union cvmx_pko_mem_throttle_pipe {
	uint64_t u64;
	struct cvmx_pko_mem_throttle_pipe_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_47_63:17;
		uint64_t word:15;
		uint64_t reserved_14_31:18;
		uint64_t packet:6;
		uint64_t reserved_7_7:1;
		uint64_t pipe:7;
#else
		uint64_t pipe:7;
		uint64_t reserved_7_7:1;
		uint64_t packet:6;
		uint64_t reserved_14_31:18;
		uint64_t word:15;
		uint64_t reserved_47_63:17;
#endif
	} s;
	struct cvmx_pko_mem_throttle_pipe_s cn68xx;
	struct cvmx_pko_mem_throttle_pipe_s cn68xxp1;
};
typedef union cvmx_pko_mem_throttle_pipe cvmx_pko_mem_throttle_pipe_t;

union cvmx_pko_ncb_bist_status {
	uint64_t u64;
	struct cvmx_pko_ncb_bist_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t ncbi_l2_out_ram_bist_status:1;

		uint64_t ncbi_pp_out_ram_bist_status:1;

		uint64_t ncbo_pdm_cmd_dat_ram_bist_status:1;

		uint64_t ncbi_l2_pdm_pref_ram_bist_status:1;

		uint64_t ncbo_pp_fif_ram_bist_status:1;

		uint64_t ncbo_skid_fif_ram_bist_status:1;

		uint64_t reserved_0_57:58;
#else
		uint64_t reserved_0_57:58;
		uint64_t ncbo_skid_fif_ram_bist_status:1;
		uint64_t ncbo_pp_fif_ram_bist_status:1;
		uint64_t ncbi_l2_pdm_pref_ram_bist_status:1;
		uint64_t ncbo_pdm_cmd_dat_ram_bist_status:1;
		uint64_t ncbi_pp_out_ram_bist_status:1;
		uint64_t ncbi_l2_out_ram_bist_status:1;
#endif
	} s;
	struct cvmx_pko_ncb_bist_status_s cn73xx;
	struct cvmx_pko_ncb_bist_status_s cn75xx;
	struct cvmx_pko_ncb_bist_status_s cn78xx;
	struct cvmx_pko_ncb_bist_status_s cn78xxp2;
};
typedef union cvmx_pko_ncb_bist_status cvmx_pko_ncb_bist_status_t;

union cvmx_pko_ncb_ecc_ctl0 {
	uint64_t u64;
	struct cvmx_pko_ncb_ecc_ctl0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t ncbi_l2_out_ram_flip:2;
		uint64_t ncbi_l2_out_ram_cdis:1;
		uint64_t ncbi_pp_out_ram_flip:2;
		uint64_t ncbi_pp_out_ram_cdis:1;
		uint64_t ncbo_pdm_cmd_dat_ram_flip:2;

		uint64_t ncbo_pdm_cmd_dat_ram_cdis:1;

		uint64_t ncbi_l2_pdm_pref_ram_flip:2;

		uint64_t ncbi_l2_pdm_pref_ram_cdis:1;

		uint64_t ncbo_pp_fif_ram_flip:2;
		uint64_t ncbo_pp_fif_ram_cdis:1;
		uint64_t ncbo_skid_fif_ram_flip:2;
		uint64_t ncbo_skid_fif_ram_cdis:1;
		uint64_t reserved_0_45:46;
#else
		uint64_t reserved_0_45:46;
		uint64_t ncbo_skid_fif_ram_cdis:1;
		uint64_t ncbo_skid_fif_ram_flip:2;
		uint64_t ncbo_pp_fif_ram_cdis:1;
		uint64_t ncbo_pp_fif_ram_flip:2;
		uint64_t ncbi_l2_pdm_pref_ram_cdis:1;
		uint64_t ncbi_l2_pdm_pref_ram_flip:2;
		uint64_t ncbo_pdm_cmd_dat_ram_cdis:1;
		uint64_t ncbo_pdm_cmd_dat_ram_flip:2;
		uint64_t ncbi_pp_out_ram_cdis:1;
		uint64_t ncbi_pp_out_ram_flip:2;
		uint64_t ncbi_l2_out_ram_cdis:1;
		uint64_t ncbi_l2_out_ram_flip:2;
#endif
	} s;
	struct cvmx_pko_ncb_ecc_ctl0_s cn73xx;
	struct cvmx_pko_ncb_ecc_ctl0_s cn75xx;
	struct cvmx_pko_ncb_ecc_ctl0_s cn78xx;
	struct cvmx_pko_ncb_ecc_ctl0_s cn78xxp2;
};
typedef union cvmx_pko_ncb_ecc_ctl0 cvmx_pko_ncb_ecc_ctl0_t;

union cvmx_pko_ncb_ecc_dbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_ncb_ecc_dbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t ncbi_l2_out_ram_dbe:1;
		uint64_t ncbi_pp_out_ram_dbe:1;
		uint64_t ncbo_pdm_cmd_dat_ram_dbe:1;
		uint64_t ncbi_l2_pdm_pref_ram_dbe:1;
		uint64_t ncbo_pp_fif_ram_dbe:1;
		uint64_t ncbo_skid_fif_ram_dbe:1;
		uint64_t reserved_0_57:58;
#else
		uint64_t reserved_0_57:58;
		uint64_t ncbo_skid_fif_ram_dbe:1;
		uint64_t ncbo_pp_fif_ram_dbe:1;
		uint64_t ncbi_l2_pdm_pref_ram_dbe:1;
		uint64_t ncbo_pdm_cmd_dat_ram_dbe:1;
		uint64_t ncbi_pp_out_ram_dbe:1;
		uint64_t ncbi_l2_out_ram_dbe:1;
#endif
	} s;
	struct cvmx_pko_ncb_ecc_dbe_sts0_s cn73xx;
	struct cvmx_pko_ncb_ecc_dbe_sts0_s cn75xx;
	struct cvmx_pko_ncb_ecc_dbe_sts0_s cn78xx;
	struct cvmx_pko_ncb_ecc_dbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_ncb_ecc_dbe_sts0 cvmx_pko_ncb_ecc_dbe_sts0_t;

union cvmx_pko_ncb_ecc_dbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_ncb_ecc_dbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t ncb_dbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t ncb_dbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_ncb_ecc_dbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_ncb_ecc_dbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_ncb_ecc_dbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_ncb_ecc_dbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_ncb_ecc_dbe_sts_cmb0 cvmx_pko_ncb_ecc_dbe_sts_cmb0_t;

union cvmx_pko_ncb_ecc_sbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_ncb_ecc_sbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t ncbi_l2_out_ram_sbe:1;
		uint64_t ncbi_pp_out_ram_sbe:1;
		uint64_t ncbo_pdm_cmd_dat_ram_sbe:1;
		uint64_t ncbi_l2_pdm_pref_ram_sbe:1;
		uint64_t ncbo_pp_fif_ram_sbe:1;
		uint64_t ncbo_skid_fif_ram_sbe:1;
		uint64_t reserved_0_57:58;
#else
		uint64_t reserved_0_57:58;
		uint64_t ncbo_skid_fif_ram_sbe:1;
		uint64_t ncbo_pp_fif_ram_sbe:1;
		uint64_t ncbi_l2_pdm_pref_ram_sbe:1;
		uint64_t ncbo_pdm_cmd_dat_ram_sbe:1;
		uint64_t ncbi_pp_out_ram_sbe:1;
		uint64_t ncbi_l2_out_ram_sbe:1;
#endif
	} s;
	struct cvmx_pko_ncb_ecc_sbe_sts0_s cn73xx;
	struct cvmx_pko_ncb_ecc_sbe_sts0_s cn75xx;
	struct cvmx_pko_ncb_ecc_sbe_sts0_s cn78xx;
	struct cvmx_pko_ncb_ecc_sbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_ncb_ecc_sbe_sts0 cvmx_pko_ncb_ecc_sbe_sts0_t;

union cvmx_pko_ncb_ecc_sbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_ncb_ecc_sbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t ncb_sbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t ncb_sbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_ncb_ecc_sbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_ncb_ecc_sbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_ncb_ecc_sbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_ncb_ecc_sbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_ncb_ecc_sbe_sts_cmb0 cvmx_pko_ncb_ecc_sbe_sts_cmb0_t;

union cvmx_pko_ncb_int {
	uint64_t u64;
	struct cvmx_pko_ncb_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t tso_segment_cnt:1;
		uint64_t ncb_tx_error:1;
#else
		uint64_t ncb_tx_error:1;
		uint64_t tso_segment_cnt:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_pko_ncb_int_s cn73xx;
	struct cvmx_pko_ncb_int_s cn75xx;
	struct cvmx_pko_ncb_int_s cn78xx;
	struct cvmx_pko_ncb_int_s cn78xxp2;
};
typedef union cvmx_pko_ncb_int cvmx_pko_ncb_int_t;

union cvmx_pko_ncb_tx_err_info {
	uint64_t u64;
	struct cvmx_pko_ncb_tx_err_info_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t wcnt:5;
		uint64_t src:12;
		uint64_t dst:8;
		uint64_t tag:4;
		uint64_t eot:1;
		uint64_t sot:1;
		uint64_t valid:1;
#else
		uint64_t valid:1;
		uint64_t sot:1;
		uint64_t eot:1;
		uint64_t tag:4;
		uint64_t dst:8;
		uint64_t src:12;
		uint64_t wcnt:5;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_pko_ncb_tx_err_info_s cn73xx;
	struct cvmx_pko_ncb_tx_err_info_s cn75xx;
	struct cvmx_pko_ncb_tx_err_info_s cn78xx;
	struct cvmx_pko_ncb_tx_err_info_s cn78xxp2;
};
typedef union cvmx_pko_ncb_tx_err_info cvmx_pko_ncb_tx_err_info_t;

union cvmx_pko_ncb_tx_err_word {
	uint64_t u64;
	struct cvmx_pko_ncb_tx_err_word_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t err_word:64;
#else
		uint64_t err_word:64;
#endif
	} s;
	struct cvmx_pko_ncb_tx_err_word_s cn73xx;
	struct cvmx_pko_ncb_tx_err_word_s cn75xx;
	struct cvmx_pko_ncb_tx_err_word_s cn78xx;
	struct cvmx_pko_ncb_tx_err_word_s cn78xxp2;
};
typedef union cvmx_pko_ncb_tx_err_word cvmx_pko_ncb_tx_err_word_t;

union cvmx_pko_pdm_bist_status {
	uint64_t u64;
	struct cvmx_pko_pdm_bist_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t flshb_cache_lo_ram_bist_status:1;

		uint64_t flshb_cache_hi_ram_bist_status:1;

		uint64_t isrm_ca_iinst_ram_bist_status:1;

		uint64_t isrm_ca_cm_ram_bist_status:1;

		uint64_t isrm_st_ram2_bist_status:1;
		uint64_t isrm_st_ram1_bist_status:1;
		uint64_t isrm_st_ram0_bist_status:1;
		uint64_t isrd_st_ram3_bist_status:1;
		uint64_t isrd_st_ram2_bist_status:1;
		uint64_t isrd_st_ram1_bist_status:1;
		uint64_t isrd_st_ram0_bist_status:1;
		uint64_t drp_hi_ram_bist_status:1;
		uint64_t drp_lo_ram_bist_status:1;
		uint64_t dwp_hi_ram_bist_status:1;
		uint64_t dwp_lo_ram_bist_status:1;
		uint64_t mwp_hi_ram_bist_status:1;
		uint64_t mwp_lo_ram_bist_status:1;
		uint64_t fillb_m_rsp_ram_hi_bist_status:1;

		uint64_t fillb_m_rsp_ram_lo_bist_status:1;

		uint64_t fillb_d_rsp_ram_hi_bist_status:1;

		uint64_t fillb_d_rsp_ram_lo_bist_status:1;

		uint64_t fillb_d_rsp_dat_fifo_bist_status:1;

		uint64_t fillb_m_rsp_dat_fifo_bist_status:1;

		uint64_t flshb_m_dat_ram_bist_status:1;

		uint64_t flshb_d_dat_ram_bist_status:1;

		uint64_t minpad_ram_bist_status:1;
		uint64_t mwp_hi_spt_ram_bist_status:1;

		uint64_t mwp_lo_spt_ram_bist_status:1;

		uint64_t buf_wm_ram_bist_status:1;
		uint64_t reserved_0_34:35;
#else
		uint64_t reserved_0_34:35;
		uint64_t buf_wm_ram_bist_status:1;
		uint64_t mwp_lo_spt_ram_bist_status:1;
		uint64_t mwp_hi_spt_ram_bist_status:1;
		uint64_t minpad_ram_bist_status:1;
		uint64_t flshb_d_dat_ram_bist_status:1;
		uint64_t flshb_m_dat_ram_bist_status:1;
		uint64_t fillb_m_rsp_dat_fifo_bist_status:1;
		uint64_t fillb_d_rsp_dat_fifo_bist_status:1;
		uint64_t fillb_d_rsp_ram_lo_bist_status:1;
		uint64_t fillb_d_rsp_ram_hi_bist_status:1;
		uint64_t fillb_m_rsp_ram_lo_bist_status:1;
		uint64_t fillb_m_rsp_ram_hi_bist_status:1;
		uint64_t mwp_lo_ram_bist_status:1;
		uint64_t mwp_hi_ram_bist_status:1;
		uint64_t dwp_lo_ram_bist_status:1;
		uint64_t dwp_hi_ram_bist_status:1;
		uint64_t drp_lo_ram_bist_status:1;
		uint64_t drp_hi_ram_bist_status:1;
		uint64_t isrd_st_ram0_bist_status:1;
		uint64_t isrd_st_ram1_bist_status:1;
		uint64_t isrd_st_ram2_bist_status:1;
		uint64_t isrd_st_ram3_bist_status:1;
		uint64_t isrm_st_ram0_bist_status:1;
		uint64_t isrm_st_ram1_bist_status:1;
		uint64_t isrm_st_ram2_bist_status:1;
		uint64_t isrm_ca_cm_ram_bist_status:1;
		uint64_t isrm_ca_iinst_ram_bist_status:1;
		uint64_t flshb_cache_hi_ram_bist_status:1;
		uint64_t flshb_cache_lo_ram_bist_status:1;
#endif
	} s;
	struct cvmx_pko_pdm_bist_status_s cn73xx;
	struct cvmx_pko_pdm_bist_status_s cn75xx;
	struct cvmx_pko_pdm_bist_status_s cn78xx;
	struct cvmx_pko_pdm_bist_status_s cn78xxp2;
};
typedef union cvmx_pko_pdm_bist_status cvmx_pko_pdm_bist_status_t;

union cvmx_pko_pdm_cfg {
	uint64_t u64;
	struct cvmx_pko_pdm_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_13_63:51;
		uint64_t dis_lpd_w2r_fill:1;
		uint64_t en_fr_w2r_ptr_swp:1;
		uint64_t dis_flsh_cache:1;
		uint64_t pko_pad_minlen:7;
		uint64_t diag_mode:1;
		uint64_t alloc_lds:1;
		uint64_t alloc_sts:1;
#else
		uint64_t alloc_sts:1;
		uint64_t alloc_lds:1;
		uint64_t diag_mode:1;
		uint64_t pko_pad_minlen:7;
		uint64_t dis_flsh_cache:1;
		uint64_t en_fr_w2r_ptr_swp:1;
		uint64_t dis_lpd_w2r_fill:1;
		uint64_t reserved_13_63:51;
#endif
	} s;
	struct cvmx_pko_pdm_cfg_s cn73xx;
	struct cvmx_pko_pdm_cfg_s cn75xx;
	struct cvmx_pko_pdm_cfg_s cn78xx;
	struct cvmx_pko_pdm_cfg_s cn78xxp2;
};
typedef union cvmx_pko_pdm_cfg cvmx_pko_pdm_cfg_t;

union cvmx_pko_pdm_cfg_dbg {
	uint64_t u64;
	struct cvmx_pko_pdm_cfg_dbg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t cp_stall_thrshld:32;
#else
		uint64_t cp_stall_thrshld:32;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_pko_pdm_cfg_dbg_s cn73xx;
	struct cvmx_pko_pdm_cfg_dbg_s cn75xx;
	struct cvmx_pko_pdm_cfg_dbg_s cn78xx;
	struct cvmx_pko_pdm_cfg_dbg_s cn78xxp2;
};
typedef union cvmx_pko_pdm_cfg_dbg cvmx_pko_pdm_cfg_dbg_t;

union cvmx_pko_pdm_cp_dbg {
	uint64_t u64;
	struct cvmx_pko_pdm_cp_dbg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t stateless_fif_cnt:6;
		uint64_t reserved_5_9:5;
		uint64_t op_fif_not_full:5;
#else
		uint64_t op_fif_not_full:5;
		uint64_t reserved_5_9:5;
		uint64_t stateless_fif_cnt:6;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_pko_pdm_cp_dbg_s cn73xx;
	struct cvmx_pko_pdm_cp_dbg_s cn75xx;
	struct cvmx_pko_pdm_cp_dbg_s cn78xx;
	struct cvmx_pko_pdm_cp_dbg_s cn78xxp2;
};
typedef union cvmx_pko_pdm_cp_dbg cvmx_pko_pdm_cp_dbg_t;

union cvmx_pko_pdm_dqx_minpad {
	uint64_t u64;
	struct cvmx_pko_pdm_dqx_minpad_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t minpad:1;
#else
		uint64_t minpad:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_pko_pdm_dqx_minpad_s cn73xx;
	struct cvmx_pko_pdm_dqx_minpad_s cn75xx;
	struct cvmx_pko_pdm_dqx_minpad_s cn78xx;
	struct cvmx_pko_pdm_dqx_minpad_s cn78xxp2;
};
typedef union cvmx_pko_pdm_dqx_minpad cvmx_pko_pdm_dqx_minpad_t;

union cvmx_pko_pdm_drpbuf_dbg {
	uint64_t u64;
	struct cvmx_pko_pdm_drpbuf_dbg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_43_63:21;
		uint64_t sel_nxt_ptr:1;
		uint64_t load_val:1;
		uint64_t rdy:1;
		uint64_t cur_state:3;
		uint64_t reserved_33_36:4;
		uint64_t track_rd_cnt:6;
		uint64_t track_wr_cnt:6;
		uint64_t reserved_17_20:4;
		uint64_t mem_addr:13;
		uint64_t mem_en:4;
#else
		uint64_t mem_en:4;
		uint64_t mem_addr:13;
		uint64_t reserved_17_20:4;
		uint64_t track_wr_cnt:6;
		uint64_t track_rd_cnt:6;
		uint64_t reserved_33_36:4;
		uint64_t cur_state:3;
		uint64_t rdy:1;
		uint64_t load_val:1;
		uint64_t sel_nxt_ptr:1;
		uint64_t reserved_43_63:21;
#endif
	} s;
	struct cvmx_pko_pdm_drpbuf_dbg_s cn73xx;
	struct cvmx_pko_pdm_drpbuf_dbg_s cn75xx;
	struct cvmx_pko_pdm_drpbuf_dbg_s cn78xx;
	struct cvmx_pko_pdm_drpbuf_dbg_s cn78xxp2;
};
typedef union cvmx_pko_pdm_drpbuf_dbg cvmx_pko_pdm_drpbuf_dbg_t;

union cvmx_pko_pdm_dwpbuf_dbg {
	uint64_t u64;
	struct cvmx_pko_pdm_dwpbuf_dbg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t cmd_proc:1;
		uint64_t reserved_46_46:1;
		uint64_t mem_data_val:1;
		uint64_t insert_np:1;
		uint64_t reserved_43_43:1;
		uint64_t sel_nxt_ptr:1;
		uint64_t load_val:1;
		uint64_t rdy:1;
		uint64_t cur_state:3;
		uint64_t mem_rdy:1;
		uint64_t reserved_33_35:3;
		uint64_t track_rd_cnt:6;
		uint64_t track_wr_cnt:6;
		uint64_t reserved_19_20:2;
		uint64_t insert_dp:2;
		uint64_t mem_addr:13;
		uint64_t mem_en:4;
#else
		uint64_t mem_en:4;
		uint64_t mem_addr:13;
		uint64_t insert_dp:2;
		uint64_t reserved_19_20:2;
		uint64_t track_wr_cnt:6;
		uint64_t track_rd_cnt:6;
		uint64_t reserved_33_35:3;
		uint64_t mem_rdy:1;
		uint64_t cur_state:3;
		uint64_t rdy:1;
		uint64_t load_val:1;
		uint64_t sel_nxt_ptr:1;
		uint64_t reserved_43_43:1;
		uint64_t insert_np:1;
		uint64_t mem_data_val:1;
		uint64_t reserved_46_46:1;
		uint64_t cmd_proc:1;
		uint64_t reserved_48_63:16;
#endif
	} s;
	struct cvmx_pko_pdm_dwpbuf_dbg_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t cmd_proc:1;
		uint64_t reserved_46_46:1;
		uint64_t mem_data_val:1;
		uint64_t insert_np:1;
		uint64_t reserved_43_43:1;
		uint64_t sel_nxt_ptr:1;
		uint64_t load_val:1;
		uint64_t rdy:1;
		uint64_t reserved_37_39:3;
		uint64_t mem_rdy:1;
		uint64_t reserved_19_35:17;
		uint64_t insert_dp:2;
		uint64_t reserved_15_16:2;
		uint64_t mem_addr:11;
		uint64_t mem_en:4;
#else
		uint64_t mem_en:4;
		uint64_t mem_addr:11;
		uint64_t reserved_15_16:2;
		uint64_t insert_dp:2;
		uint64_t reserved_19_35:17;
		uint64_t mem_rdy:1;
		uint64_t reserved_37_39:3;
		uint64_t rdy:1;
		uint64_t load_val:1;
		uint64_t sel_nxt_ptr:1;
		uint64_t reserved_43_43:1;
		uint64_t insert_np:1;
		uint64_t mem_data_val:1;
		uint64_t reserved_46_46:1;
		uint64_t cmd_proc:1;
		uint64_t reserved_48_63:16;
#endif
	} cn73xx;
	struct cvmx_pko_pdm_dwpbuf_dbg_cn73xx cn75xx;
	struct cvmx_pko_pdm_dwpbuf_dbg_s cn78xx;
	struct cvmx_pko_pdm_dwpbuf_dbg_s cn78xxp2;
};
typedef union cvmx_pko_pdm_dwpbuf_dbg cvmx_pko_pdm_dwpbuf_dbg_t;

union cvmx_pko_pdm_ecc_ctl0 {
	uint64_t u64;
	struct cvmx_pko_pdm_ecc_ctl0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t flshb_cache_lo_ram_flip:2;
		uint64_t flshb_cache_lo_ram_cdis:1;
		uint64_t flshb_cache_hi_ram_flip:2;
		uint64_t flshb_cache_hi_ram_cdis:1;
		uint64_t isrm_ca_iinst_ram_flip:2;
		uint64_t isrm_ca_iinst_ram_cdis:1;
		uint64_t isrm_ca_cm_ram_flip:2;
		uint64_t isrm_ca_cm_ram_cdis:1;
		uint64_t isrm_st_ram2_flip:2;
		uint64_t isrm_st_ram2_cdis:1;
		uint64_t isrm_st_ram1_flip:2;
		uint64_t isrm_st_ram1_cdis:1;
		uint64_t isrm_st_ram0_flip:2;
		uint64_t isrm_st_ram0_cdis:1;
		uint64_t isrd_st_ram3_flip:2;
		uint64_t isrd_st_ram3_cdis:1;
		uint64_t isrd_st_ram2_flip:2;
		uint64_t isrd_st_ram2_cdis:1;
		uint64_t isrd_st_ram1_flip:2;
		uint64_t isrd_st_ram1_cdis:1;
		uint64_t isrd_st_ram0_flip:2;
		uint64_t isrd_st_ram0_cdis:1;
		uint64_t drp_hi_ram_flip:2;
		uint64_t drp_hi_ram_cdis:1;
		uint64_t drp_lo_ram_flip:2;
		uint64_t drp_lo_ram_cdis:1;
		uint64_t dwp_hi_ram_flip:2;
		uint64_t dwp_hi_ram_cdis:1;
		uint64_t dwp_lo_ram_flip:2;
		uint64_t dwp_lo_ram_cdis:1;
		uint64_t mwp_hi_ram_flip:2;
		uint64_t mwp_hi_ram_cdis:1;
		uint64_t mwp_lo_ram_flip:2;
		uint64_t mwp_lo_ram_cdis:1;
		uint64_t fillb_m_rsp_ram_hi_flip:2;
		uint64_t fillb_m_rsp_ram_hi_cdis:1;
		uint64_t fillb_m_rsp_ram_lo_flip:2;
		uint64_t fillb_m_rsp_ram_lo_cdis:1;
		uint64_t fillb_d_rsp_ram_hi_flip:2;
		uint64_t fillb_d_rsp_ram_hi_cdis:1;
		uint64_t fillb_d_rsp_ram_lo_flip:2;
		uint64_t fillb_d_rsp_ram_lo_cdis:1;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t fillb_d_rsp_ram_lo_cdis:1;
		uint64_t fillb_d_rsp_ram_lo_flip:2;
		uint64_t fillb_d_rsp_ram_hi_cdis:1;
		uint64_t fillb_d_rsp_ram_hi_flip:2;
		uint64_t fillb_m_rsp_ram_lo_cdis:1;
		uint64_t fillb_m_rsp_ram_lo_flip:2;
		uint64_t fillb_m_rsp_ram_hi_cdis:1;
		uint64_t fillb_m_rsp_ram_hi_flip:2;
		uint64_t mwp_lo_ram_cdis:1;
		uint64_t mwp_lo_ram_flip:2;
		uint64_t mwp_hi_ram_cdis:1;
		uint64_t mwp_hi_ram_flip:2;
		uint64_t dwp_lo_ram_cdis:1;
		uint64_t dwp_lo_ram_flip:2;
		uint64_t dwp_hi_ram_cdis:1;
		uint64_t dwp_hi_ram_flip:2;
		uint64_t drp_lo_ram_cdis:1;
		uint64_t drp_lo_ram_flip:2;
		uint64_t drp_hi_ram_cdis:1;
		uint64_t drp_hi_ram_flip:2;
		uint64_t isrd_st_ram0_cdis:1;
		uint64_t isrd_st_ram0_flip:2;
		uint64_t isrd_st_ram1_cdis:1;
		uint64_t isrd_st_ram1_flip:2;
		uint64_t isrd_st_ram2_cdis:1;
		uint64_t isrd_st_ram2_flip:2;
		uint64_t isrd_st_ram3_cdis:1;
		uint64_t isrd_st_ram3_flip:2;
		uint64_t isrm_st_ram0_cdis:1;
		uint64_t isrm_st_ram0_flip:2;
		uint64_t isrm_st_ram1_cdis:1;
		uint64_t isrm_st_ram1_flip:2;
		uint64_t isrm_st_ram2_cdis:1;
		uint64_t isrm_st_ram2_flip:2;
		uint64_t isrm_ca_cm_ram_cdis:1;
		uint64_t isrm_ca_cm_ram_flip:2;
		uint64_t isrm_ca_iinst_ram_cdis:1;
		uint64_t isrm_ca_iinst_ram_flip:2;
		uint64_t flshb_cache_hi_ram_cdis:1;
		uint64_t flshb_cache_hi_ram_flip:2;
		uint64_t flshb_cache_lo_ram_cdis:1;
		uint64_t flshb_cache_lo_ram_flip:2;
#endif
	} s;
	struct cvmx_pko_pdm_ecc_ctl0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t flshb_cache_lo_ram_flip:2;
		uint64_t flshb_cache_lo_ram_cdis:1;
		uint64_t flshb_cache_hi_ram_flip:2;
		uint64_t flshb_cache_hi_ram_cdis:1;
		uint64_t isrm_ca_iinst_ram_flip:2;
		uint64_t isrm_ca_iinst_ram_cdis:1;
		uint64_t isrm_ca_cm_ram_flip:2;
		uint64_t isrm_ca_cm_ram_cdis:1;
		uint64_t isrm_st_ram2_flip:2;
		uint64_t isrm_st_ram2_cdis:1;
		uint64_t isrm_st_ram1_flip:2;
		uint64_t isrm_st_ram1_cdis:1;
		uint64_t isrm_st_ram0_flip:2;
		uint64_t isrm_st_ram0_cdis:1;
		uint64_t isrd_st_ram3_flip:2;
		uint64_t isrd_st_ram3_cdis:1;
		uint64_t isrd_st_ram2_flip:2;
		uint64_t isrd_st_ram2_cdis:1;
		uint64_t isrd_st_ram1_flip:2;
		uint64_t isrd_st_ram1_cdis:1;
		uint64_t isrd_st_ram0_flip:2;
		uint64_t isrd_st_ram0_cdis:1;
		uint64_t drp_hi_ram_flip:2;
		uint64_t drp_hi_ram_cdis:1;
		uint64_t drp_lo_ram_flip:2;
		uint64_t drp_lo_ram_cdis:1;
		uint64_t dwp_hi_ram_flip:2;
		uint64_t dwp_hi_ram_cdis:1;
		uint64_t dwp_lo_ram_flip:2;
		uint64_t dwp_lo_ram_cdis:1;
		uint64_t reserved_13_18:6;
		uint64_t fillb_m_rsp_ram_hi_flip:2;
		uint64_t fillb_m_rsp_ram_hi_cdis:1;
		uint64_t fillb_m_rsp_ram_lo_flip:2;
		uint64_t fillb_m_rsp_ram_lo_cdis:1;
		uint64_t fillb_d_rsp_ram_hi_flip:2;
		uint64_t fillb_d_rsp_ram_hi_cdis:1;
		uint64_t fillb_d_rsp_ram_lo_flip:2;
		uint64_t fillb_d_rsp_ram_lo_cdis:1;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t fillb_d_rsp_ram_lo_cdis:1;
		uint64_t fillb_d_rsp_ram_lo_flip:2;
		uint64_t fillb_d_rsp_ram_hi_cdis:1;
		uint64_t fillb_d_rsp_ram_hi_flip:2;
		uint64_t fillb_m_rsp_ram_lo_cdis:1;
		uint64_t fillb_m_rsp_ram_lo_flip:2;
		uint64_t fillb_m_rsp_ram_hi_cdis:1;
		uint64_t fillb_m_rsp_ram_hi_flip:2;
		uint64_t reserved_13_18:6;
		uint64_t dwp_lo_ram_cdis:1;
		uint64_t dwp_lo_ram_flip:2;
		uint64_t dwp_hi_ram_cdis:1;
		uint64_t dwp_hi_ram_flip:2;
		uint64_t drp_lo_ram_cdis:1;
		uint64_t drp_lo_ram_flip:2;
		uint64_t drp_hi_ram_cdis:1;
		uint64_t drp_hi_ram_flip:2;
		uint64_t isrd_st_ram0_cdis:1;
		uint64_t isrd_st_ram0_flip:2;
		uint64_t isrd_st_ram1_cdis:1;
		uint64_t isrd_st_ram1_flip:2;
		uint64_t isrd_st_ram2_cdis:1;
		uint64_t isrd_st_ram2_flip:2;
		uint64_t isrd_st_ram3_cdis:1;
		uint64_t isrd_st_ram3_flip:2;
		uint64_t isrm_st_ram0_cdis:1;
		uint64_t isrm_st_ram0_flip:2;
		uint64_t isrm_st_ram1_cdis:1;
		uint64_t isrm_st_ram1_flip:2;
		uint64_t isrm_st_ram2_cdis:1;
		uint64_t isrm_st_ram2_flip:2;
		uint64_t isrm_ca_cm_ram_cdis:1;
		uint64_t isrm_ca_cm_ram_flip:2;
		uint64_t isrm_ca_iinst_ram_cdis:1;
		uint64_t isrm_ca_iinst_ram_flip:2;
		uint64_t flshb_cache_hi_ram_cdis:1;
		uint64_t flshb_cache_hi_ram_flip:2;
		uint64_t flshb_cache_lo_ram_cdis:1;
		uint64_t flshb_cache_lo_ram_flip:2;
#endif
	} cn73xx;
	struct cvmx_pko_pdm_ecc_ctl0_cn73xx cn75xx;
	struct cvmx_pko_pdm_ecc_ctl0_s cn78xx;
	struct cvmx_pko_pdm_ecc_ctl0_s cn78xxp2;
};
typedef union cvmx_pko_pdm_ecc_ctl0 cvmx_pko_pdm_ecc_ctl0_t;

union cvmx_pko_pdm_ecc_ctl1 {
	uint64_t u64;
	struct cvmx_pko_pdm_ecc_ctl1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t buf_wm_ram_flip:2;
		uint64_t buf_wm_ram_cdis:1;
		uint64_t mwp_mem0_ram_flip:2;
		uint64_t mwp_mem1_ram_flip:2;
		uint64_t mwp_mem2_ram_flip:2;
		uint64_t mwp_mem3_ram_flip:2;
		uint64_t mwp_ram_cdis:1;
		uint64_t minpad_ram_flip:2;
		uint64_t minpad_ram_cdis:1;
#else
		uint64_t minpad_ram_cdis:1;
		uint64_t minpad_ram_flip:2;
		uint64_t mwp_ram_cdis:1;
		uint64_t mwp_mem3_ram_flip:2;
		uint64_t mwp_mem2_ram_flip:2;
		uint64_t mwp_mem1_ram_flip:2;
		uint64_t mwp_mem0_ram_flip:2;
		uint64_t buf_wm_ram_cdis:1;
		uint64_t buf_wm_ram_flip:2;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_pko_pdm_ecc_ctl1_s cn73xx;
	struct cvmx_pko_pdm_ecc_ctl1_s cn75xx;
	struct cvmx_pko_pdm_ecc_ctl1_s cn78xx;
	struct cvmx_pko_pdm_ecc_ctl1_s cn78xxp2;
};
typedef union cvmx_pko_pdm_ecc_ctl1 cvmx_pko_pdm_ecc_ctl1_t;

union cvmx_pko_pdm_ecc_dbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pdm_ecc_dbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t flshb_cache_lo_ram_dbe:1;
		uint64_t flshb_cache_hi_ram_dbe:1;
		uint64_t isrm_ca_iinst_ram_dbe:1;
		uint64_t isrm_ca_cm_ram_dbe:1;
		uint64_t isrm_st_ram2_dbe:1;
		uint64_t isrm_st_ram1_dbe:1;
		uint64_t isrm_st_ram0_dbe:1;
		uint64_t isrd_st_ram3_dbe:1;
		uint64_t isrd_st_ram2_dbe:1;
		uint64_t isrd_st_ram1_dbe:1;
		uint64_t isrd_st_ram0_dbe:1;
		uint64_t drp_hi_ram_dbe:1;
		uint64_t drp_lo_ram_dbe:1;
		uint64_t dwp_hi_ram_dbe:1;
		uint64_t dwp_lo_ram_dbe:1;
		uint64_t mwp_hi_ram_dbe:1;
		uint64_t mwp_lo_ram_dbe:1;
		uint64_t fillb_m_rsp_ram_hi_dbe:1;
		uint64_t fillb_m_rsp_ram_lo_dbe:1;
		uint64_t fillb_d_rsp_ram_hi_dbe:1;
		uint64_t fillb_d_rsp_ram_lo_dbe:1;
		uint64_t minpad_ram_dbe:1;
		uint64_t mwp_hi_spt_ram_dbe:1;
		uint64_t mwp_lo_spt_ram_dbe:1;
		uint64_t buf_wm_ram_dbe:1;
		uint64_t reserved_0_38:39;
#else
		uint64_t reserved_0_38:39;
		uint64_t buf_wm_ram_dbe:1;
		uint64_t mwp_lo_spt_ram_dbe:1;
		uint64_t mwp_hi_spt_ram_dbe:1;
		uint64_t minpad_ram_dbe:1;
		uint64_t fillb_d_rsp_ram_lo_dbe:1;
		uint64_t fillb_d_rsp_ram_hi_dbe:1;
		uint64_t fillb_m_rsp_ram_lo_dbe:1;
		uint64_t fillb_m_rsp_ram_hi_dbe:1;
		uint64_t mwp_lo_ram_dbe:1;
		uint64_t mwp_hi_ram_dbe:1;
		uint64_t dwp_lo_ram_dbe:1;
		uint64_t dwp_hi_ram_dbe:1;
		uint64_t drp_lo_ram_dbe:1;
		uint64_t drp_hi_ram_dbe:1;
		uint64_t isrd_st_ram0_dbe:1;
		uint64_t isrd_st_ram1_dbe:1;
		uint64_t isrd_st_ram2_dbe:1;
		uint64_t isrd_st_ram3_dbe:1;
		uint64_t isrm_st_ram0_dbe:1;
		uint64_t isrm_st_ram1_dbe:1;
		uint64_t isrm_st_ram2_dbe:1;
		uint64_t isrm_ca_cm_ram_dbe:1;
		uint64_t isrm_ca_iinst_ram_dbe:1;
		uint64_t flshb_cache_hi_ram_dbe:1;
		uint64_t flshb_cache_lo_ram_dbe:1;
#endif
	} s;
	struct cvmx_pko_pdm_ecc_dbe_sts0_s cn73xx;
	struct cvmx_pko_pdm_ecc_dbe_sts0_s cn75xx;
	struct cvmx_pko_pdm_ecc_dbe_sts0_s cn78xx;
	struct cvmx_pko_pdm_ecc_dbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pdm_ecc_dbe_sts0 cvmx_pko_pdm_ecc_dbe_sts0_t;

union cvmx_pko_pdm_ecc_dbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pdm_ecc_dbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pdm_dbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pdm_dbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pdm_ecc_dbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_pdm_ecc_dbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_pdm_ecc_dbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pdm_ecc_dbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pdm_ecc_dbe_sts_cmb0 cvmx_pko_pdm_ecc_dbe_sts_cmb0_t;

union cvmx_pko_pdm_ecc_sbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pdm_ecc_sbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t flshb_cache_lo_ram_sbe:1;
		uint64_t flshb_cache_hi_ram_sbe:1;
		uint64_t isrm_ca_iinst_ram_sbe:1;
		uint64_t isrm_ca_cm_ram_sbe:1;
		uint64_t isrm_st_ram2_sbe:1;
		uint64_t isrm_st_ram1_sbe:1;
		uint64_t isrm_st_ram0_sbe:1;
		uint64_t isrd_st_ram3_sbe:1;
		uint64_t isrd_st_ram2_sbe:1;
		uint64_t isrd_st_ram1_sbe:1;
		uint64_t isrd_st_ram0_sbe:1;
		uint64_t drp_hi_ram_sbe:1;
		uint64_t drp_lo_ram_sbe:1;
		uint64_t dwp_hi_ram_sbe:1;
		uint64_t dwp_lo_ram_sbe:1;
		uint64_t mwp_hi_ram_sbe:1;
		uint64_t mwp_lo_ram_sbe:1;
		uint64_t fillb_m_rsp_ram_hi_sbe:1;
		uint64_t fillb_m_rsp_ram_lo_sbe:1;
		uint64_t fillb_d_rsp_ram_hi_sbe:1;
		uint64_t fillb_d_rsp_ram_lo_sbe:1;
		uint64_t minpad_ram_sbe:1;
		uint64_t mwp_hi_spt_ram_sbe:1;
		uint64_t mwp_lo_spt_ram_sbe:1;
		uint64_t buf_wm_ram_sbe:1;
		uint64_t reserved_0_38:39;
#else
		uint64_t reserved_0_38:39;
		uint64_t buf_wm_ram_sbe:1;
		uint64_t mwp_lo_spt_ram_sbe:1;
		uint64_t mwp_hi_spt_ram_sbe:1;
		uint64_t minpad_ram_sbe:1;
		uint64_t fillb_d_rsp_ram_lo_sbe:1;
		uint64_t fillb_d_rsp_ram_hi_sbe:1;
		uint64_t fillb_m_rsp_ram_lo_sbe:1;
		uint64_t fillb_m_rsp_ram_hi_sbe:1;
		uint64_t mwp_lo_ram_sbe:1;
		uint64_t mwp_hi_ram_sbe:1;
		uint64_t dwp_lo_ram_sbe:1;
		uint64_t dwp_hi_ram_sbe:1;
		uint64_t drp_lo_ram_sbe:1;
		uint64_t drp_hi_ram_sbe:1;
		uint64_t isrd_st_ram0_sbe:1;
		uint64_t isrd_st_ram1_sbe:1;
		uint64_t isrd_st_ram2_sbe:1;
		uint64_t isrd_st_ram3_sbe:1;
		uint64_t isrm_st_ram0_sbe:1;
		uint64_t isrm_st_ram1_sbe:1;
		uint64_t isrm_st_ram2_sbe:1;
		uint64_t isrm_ca_cm_ram_sbe:1;
		uint64_t isrm_ca_iinst_ram_sbe:1;
		uint64_t flshb_cache_hi_ram_sbe:1;
		uint64_t flshb_cache_lo_ram_sbe:1;
#endif
	} s;
	struct cvmx_pko_pdm_ecc_sbe_sts0_s cn73xx;
	struct cvmx_pko_pdm_ecc_sbe_sts0_s cn75xx;
	struct cvmx_pko_pdm_ecc_sbe_sts0_s cn78xx;
	struct cvmx_pko_pdm_ecc_sbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pdm_ecc_sbe_sts0 cvmx_pko_pdm_ecc_sbe_sts0_t;

union cvmx_pko_pdm_ecc_sbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pdm_ecc_sbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pdm_sbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pdm_sbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pdm_ecc_sbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_pdm_ecc_sbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_pdm_ecc_sbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pdm_ecc_sbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pdm_ecc_sbe_sts_cmb0 cvmx_pko_pdm_ecc_sbe_sts_cmb0_t;

union cvmx_pko_pdm_fillb_dbg0 {
	uint64_t u64;
	struct cvmx_pko_pdm_fillb_dbg0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_57_63:7;
		uint64_t pd_seq:5;
		uint64_t resp_pd_seq:5;
		uint64_t d_rsp_lo_ram_addr_sel:2;
		uint64_t d_rsp_hi_ram_addr_sel:2;
		uint64_t d_rsp_rd_seq:5;
		uint64_t d_rsp_fifo_rd_seq:5;
		uint64_t d_fill_req_fifo_val:1;
		uint64_t d_rsp_ram_valid:32;
#else
		uint64_t d_rsp_ram_valid:32;
		uint64_t d_fill_req_fifo_val:1;
		uint64_t d_rsp_fifo_rd_seq:5;
		uint64_t d_rsp_rd_seq:5;
		uint64_t d_rsp_hi_ram_addr_sel:2;
		uint64_t d_rsp_lo_ram_addr_sel:2;
		uint64_t resp_pd_seq:5;
		uint64_t pd_seq:5;
		uint64_t reserved_57_63:7;
#endif
	} s;
	struct cvmx_pko_pdm_fillb_dbg0_s cn73xx;
	struct cvmx_pko_pdm_fillb_dbg0_s cn75xx;
	struct cvmx_pko_pdm_fillb_dbg0_s cn78xx;
	struct cvmx_pko_pdm_fillb_dbg0_s cn78xxp2;
};
typedef union cvmx_pko_pdm_fillb_dbg0 cvmx_pko_pdm_fillb_dbg0_t;

union cvmx_pko_pdm_fillb_dbg1 {
	uint64_t u64;
	struct cvmx_pko_pdm_fillb_dbg1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_57_63:7;
		uint64_t mp_seq:5;
		uint64_t resp_mp_seq:5;
		uint64_t m_rsp_lo_ram_addr_sel:2;
		uint64_t m_rsp_hi_ram_addr_sel:2;
		uint64_t m_rsp_rd_seq:5;
		uint64_t m_rsp_fifo_rd_seq:5;
		uint64_t m_fill_req_fifo_val:1;
		uint64_t m_rsp_ram_valid:32;
#else
		uint64_t m_rsp_ram_valid:32;
		uint64_t m_fill_req_fifo_val:1;
		uint64_t m_rsp_fifo_rd_seq:5;
		uint64_t m_rsp_rd_seq:5;
		uint64_t m_rsp_hi_ram_addr_sel:2;
		uint64_t m_rsp_lo_ram_addr_sel:2;
		uint64_t resp_mp_seq:5;
		uint64_t mp_seq:5;
		uint64_t reserved_57_63:7;
#endif
	} s;
	struct cvmx_pko_pdm_fillb_dbg1_s cn73xx;
	struct cvmx_pko_pdm_fillb_dbg1_s cn75xx;
	struct cvmx_pko_pdm_fillb_dbg1_s cn78xx;
	struct cvmx_pko_pdm_fillb_dbg1_s cn78xxp2;
};
typedef union cvmx_pko_pdm_fillb_dbg1 cvmx_pko_pdm_fillb_dbg1_t;

union cvmx_pko_pdm_fillb_dbg2 {
	uint64_t u64;
	struct cvmx_pko_pdm_fillb_dbg2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t fillb_sm:5;
		uint64_t reserved_3_3:1;
		uint64_t iobp0_credit_cntr:3;
#else
		uint64_t iobp0_credit_cntr:3;
		uint64_t reserved_3_3:1;
		uint64_t fillb_sm:5;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_pko_pdm_fillb_dbg2_s cn73xx;
	struct cvmx_pko_pdm_fillb_dbg2_s cn75xx;
	struct cvmx_pko_pdm_fillb_dbg2_s cn78xx;
	struct cvmx_pko_pdm_fillb_dbg2_s cn78xxp2;
};
typedef union cvmx_pko_pdm_fillb_dbg2 cvmx_pko_pdm_fillb_dbg2_t;

union cvmx_pko_pdm_flshb_dbg0 {
	uint64_t u64;
	struct cvmx_pko_pdm_flshb_dbg0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_44_63:20;
		uint64_t flshb_sm:7;
		uint64_t flshb_ctl_sm:9;
		uint64_t cam_hptr:5;
		uint64_t cam_tptr:5;
		uint64_t expected_stdns:6;
		uint64_t d_flshb_eot_cntr:3;
		uint64_t m_flshb_eot_cntr:3;
		uint64_t ncbi_credit_cntr:6;
#else
		uint64_t ncbi_credit_cntr:6;
		uint64_t m_flshb_eot_cntr:3;
		uint64_t d_flshb_eot_cntr:3;
		uint64_t expected_stdns:6;
		uint64_t cam_tptr:5;
		uint64_t cam_hptr:5;
		uint64_t flshb_ctl_sm:9;
		uint64_t flshb_sm:7;
		uint64_t reserved_44_63:20;
#endif
	} s;
	struct cvmx_pko_pdm_flshb_dbg0_s cn73xx;
	struct cvmx_pko_pdm_flshb_dbg0_s cn75xx;
	struct cvmx_pko_pdm_flshb_dbg0_s cn78xx;
	struct cvmx_pko_pdm_flshb_dbg0_s cn78xxp2;
};
typedef union cvmx_pko_pdm_flshb_dbg0 cvmx_pko_pdm_flshb_dbg0_t;

union cvmx_pko_pdm_flshb_dbg1 {
	uint64_t u64;
	struct cvmx_pko_pdm_flshb_dbg1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t cam_stdn:32;
		uint64_t cam_valid:32;
#else
		uint64_t cam_valid:32;
		uint64_t cam_stdn:32;
#endif
	} s;
	struct cvmx_pko_pdm_flshb_dbg1_s cn73xx;
	struct cvmx_pko_pdm_flshb_dbg1_s cn75xx;
	struct cvmx_pko_pdm_flshb_dbg1_s cn78xx;
	struct cvmx_pko_pdm_flshb_dbg1_s cn78xxp2;
};
typedef union cvmx_pko_pdm_flshb_dbg1 cvmx_pko_pdm_flshb_dbg1_t;

union cvmx_pko_pdm_intf_dbg_rd {
	uint64_t u64;
	struct cvmx_pko_pdm_intf_dbg_rd_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t in_flight:8;
		uint64_t pdm_req_cred_cnt:8;
		uint64_t pse_buf_waddr:8;
		uint64_t pse_buf_raddr:8;
		uint64_t resp_buf_waddr:8;
		uint64_t resp_buf_raddr:8;
#else
		uint64_t resp_buf_raddr:8;
		uint64_t resp_buf_waddr:8;
		uint64_t pse_buf_raddr:8;
		uint64_t pse_buf_waddr:8;
		uint64_t pdm_req_cred_cnt:8;
		uint64_t in_flight:8;
		uint64_t reserved_48_63:16;
#endif
	} s;
	struct cvmx_pko_pdm_intf_dbg_rd_s cn73xx;
	struct cvmx_pko_pdm_intf_dbg_rd_s cn75xx;
	struct cvmx_pko_pdm_intf_dbg_rd_s cn78xxp2;
};
typedef union cvmx_pko_pdm_intf_dbg_rd cvmx_pko_pdm_intf_dbg_rd_t;

union cvmx_pko_pdm_isrd_dbg {
	uint64_t u64;
	struct cvmx_pko_pdm_isrd_dbg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_44_63:20;
		uint64_t in_arb_reqs:8;
		uint64_t in_arb_gnts:7;
		uint64_t cmt_arb_reqs:7;
		uint64_t cmt_arb_gnts:7;
		uint64_t in_use:4;
		uint64_t has_cred:4;
		uint64_t val_exec:7;
#else
		uint64_t val_exec:7;
		uint64_t has_cred:4;
		uint64_t in_use:4;
		uint64_t cmt_arb_gnts:7;
		uint64_t cmt_arb_reqs:7;
		uint64_t in_arb_gnts:7;
		uint64_t in_arb_reqs:8;
		uint64_t reserved_44_63:20;
#endif
	} s;
	struct cvmx_pko_pdm_isrd_dbg_s cn73xx;
	struct cvmx_pko_pdm_isrd_dbg_s cn75xx;
	struct cvmx_pko_pdm_isrd_dbg_s cn78xx;
	struct cvmx_pko_pdm_isrd_dbg_s cn78xxp2;
};
typedef union cvmx_pko_pdm_isrd_dbg cvmx_pko_pdm_isrd_dbg_t;

union cvmx_pko_pdm_isrd_dbg_dq {
	uint64_t u64;
	struct cvmx_pko_pdm_isrd_dbg_dq_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_46_63:18;
		uint64_t pebrd_sic_dq:10;
		uint64_t reserved_34_35:2;
		uint64_t pebfill_sic_dq:10;
		uint64_t reserved_22_23:2;
		uint64_t fr_sic_dq:10;
		uint64_t reserved_10_11:2;
		uint64_t cp_sic_dq:10;
#else
		uint64_t cp_sic_dq:10;
		uint64_t reserved_10_11:2;
		uint64_t fr_sic_dq:10;
		uint64_t reserved_22_23:2;
		uint64_t pebfill_sic_dq:10;
		uint64_t reserved_34_35:2;
		uint64_t pebrd_sic_dq:10;
		uint64_t reserved_46_63:18;
#endif
	} s;
	struct cvmx_pko_pdm_isrd_dbg_dq_s cn73xx;
	struct cvmx_pko_pdm_isrd_dbg_dq_s cn75xx;
	struct cvmx_pko_pdm_isrd_dbg_dq_s cn78xx;
	struct cvmx_pko_pdm_isrd_dbg_dq_s cn78xxp2;
};
typedef union cvmx_pko_pdm_isrd_dbg_dq cvmx_pko_pdm_isrd_dbg_dq_t;

union cvmx_pko_pdm_isrm_dbg {
	uint64_t u64;
	struct cvmx_pko_pdm_isrm_dbg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_34_63:30;
		uint64_t in_arb_reqs:7;
		uint64_t in_arb_gnts:6;
		uint64_t cmt_arb_reqs:6;
		uint64_t cmt_arb_gnts:6;
		uint64_t in_use:3;
		uint64_t has_cred:3;
		uint64_t val_exec:3;
#else
		uint64_t val_exec:3;
		uint64_t has_cred:3;
		uint64_t in_use:3;
		uint64_t cmt_arb_gnts:6;
		uint64_t cmt_arb_reqs:6;
		uint64_t in_arb_gnts:6;
		uint64_t in_arb_reqs:7;
		uint64_t reserved_34_63:30;
#endif
	} s;
	struct cvmx_pko_pdm_isrm_dbg_s cn73xx;
	struct cvmx_pko_pdm_isrm_dbg_s cn75xx;
	struct cvmx_pko_pdm_isrm_dbg_s cn78xx;
	struct cvmx_pko_pdm_isrm_dbg_s cn78xxp2;
};
typedef union cvmx_pko_pdm_isrm_dbg cvmx_pko_pdm_isrm_dbg_t;

union cvmx_pko_pdm_isrm_dbg_dq {
	uint64_t u64;
	struct cvmx_pko_pdm_isrm_dbg_dq_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_34_63:30;
		uint64_t ack_sic_dq:10;
		uint64_t reserved_22_23:2;
		uint64_t fr_sic_dq:10;
		uint64_t reserved_10_11:2;
		uint64_t cp_sic_dq:10;
#else
		uint64_t cp_sic_dq:10;
		uint64_t reserved_10_11:2;
		uint64_t fr_sic_dq:10;
		uint64_t reserved_22_23:2;
		uint64_t ack_sic_dq:10;
		uint64_t reserved_34_63:30;
#endif
	} s;
	struct cvmx_pko_pdm_isrm_dbg_dq_s cn73xx;
	struct cvmx_pko_pdm_isrm_dbg_dq_s cn75xx;
	struct cvmx_pko_pdm_isrm_dbg_dq_s cn78xx;
	struct cvmx_pko_pdm_isrm_dbg_dq_s cn78xxp2;
};
typedef union cvmx_pko_pdm_isrm_dbg_dq cvmx_pko_pdm_isrm_dbg_dq_t;

union cvmx_pko_pdm_mem_addr {
	uint64_t u64;
	struct cvmx_pko_pdm_mem_addr_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t memsel:3;
		uint64_t reserved_17_60:44;
		uint64_t memaddr:14;
		uint64_t reserved_2_2:1;
		uint64_t membanksel:2;
#else
		uint64_t membanksel:2;
		uint64_t reserved_2_2:1;
		uint64_t memaddr:14;
		uint64_t reserved_17_60:44;
		uint64_t memsel:3;
#endif
	} s;
	struct cvmx_pko_pdm_mem_addr_s cn73xx;
	struct cvmx_pko_pdm_mem_addr_s cn75xx;
	struct cvmx_pko_pdm_mem_addr_s cn78xx;
	struct cvmx_pko_pdm_mem_addr_s cn78xxp2;
};
typedef union cvmx_pko_pdm_mem_addr cvmx_pko_pdm_mem_addr_t;

union cvmx_pko_pdm_mem_data {
	uint64_t u64;
	struct cvmx_pko_pdm_mem_data_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t data:64;
#else
		uint64_t data:64;
#endif
	} s;
	struct cvmx_pko_pdm_mem_data_s cn73xx;
	struct cvmx_pko_pdm_mem_data_s cn75xx;
	struct cvmx_pko_pdm_mem_data_s cn78xx;
	struct cvmx_pko_pdm_mem_data_s cn78xxp2;
};
typedef union cvmx_pko_pdm_mem_data cvmx_pko_pdm_mem_data_t;

union cvmx_pko_pdm_mem_rw_ctl {
	uint64_t u64;
	struct cvmx_pko_pdm_mem_rw_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t read:1;
		uint64_t write:1;
#else
		uint64_t write:1;
		uint64_t read:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_pko_pdm_mem_rw_ctl_s cn73xx;
	struct cvmx_pko_pdm_mem_rw_ctl_s cn75xx;
	struct cvmx_pko_pdm_mem_rw_ctl_s cn78xx;
	struct cvmx_pko_pdm_mem_rw_ctl_s cn78xxp2;
};
typedef union cvmx_pko_pdm_mem_rw_ctl cvmx_pko_pdm_mem_rw_ctl_t;

union cvmx_pko_pdm_mem_rw_sts {
	uint64_t u64;
	struct cvmx_pko_pdm_mem_rw_sts_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t readdone:1;
#else
		uint64_t readdone:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_pko_pdm_mem_rw_sts_s cn73xx;
	struct cvmx_pko_pdm_mem_rw_sts_s cn75xx;
	struct cvmx_pko_pdm_mem_rw_sts_s cn78xx;
	struct cvmx_pko_pdm_mem_rw_sts_s cn78xxp2;
};
typedef union cvmx_pko_pdm_mem_rw_sts cvmx_pko_pdm_mem_rw_sts_t;

union cvmx_pko_pdm_mwpbuf_dbg {
	uint64_t u64;
	struct cvmx_pko_pdm_mwpbuf_dbg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_49_63:15;
		uint64_t str_proc:1;
		uint64_t cmd_proc:1;
		uint64_t str_val:1;
		uint64_t mem_data_val:1;
		uint64_t insert_np:1;
		uint64_t insert_mp:1;
		uint64_t sel_nxt_ptr:1;
		uint64_t load_val:1;
		uint64_t rdy:1;
		uint64_t cur_state:3;
		uint64_t mem_rdy:1;
		uint64_t str_rdy:1;
		uint64_t contention_type:2;
		uint64_t track_rd_cnt:6;
		uint64_t track_wr_cnt:6;
		uint64_t mem_wen:4;
		uint64_t mem_addr:13;
		uint64_t mem_en:4;
#else
		uint64_t mem_en:4;
		uint64_t mem_addr:13;
		uint64_t mem_wen:4;
		uint64_t track_wr_cnt:6;
		uint64_t track_rd_cnt:6;
		uint64_t contention_type:2;
		uint64_t str_rdy:1;
		uint64_t mem_rdy:1;
		uint64_t cur_state:3;
		uint64_t rdy:1;
		uint64_t load_val:1;
		uint64_t sel_nxt_ptr:1;
		uint64_t insert_mp:1;
		uint64_t insert_np:1;
		uint64_t mem_data_val:1;
		uint64_t str_val:1;
		uint64_t cmd_proc:1;
		uint64_t str_proc:1;
		uint64_t reserved_49_63:15;
#endif
	} s;
	struct cvmx_pko_pdm_mwpbuf_dbg_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_49_63:15;
		uint64_t str_proc:1;
		uint64_t cmd_proc:1;
		uint64_t str_val:1;
		uint64_t mem_data_val:1;
		uint64_t insert_np:1;
		uint64_t insert_mp:1;
		uint64_t sel_nxt_ptr:1;
		uint64_t load_val:1;
		uint64_t rdy:1;
		uint64_t cur_state:3;
		uint64_t mem_rdy:1;
		uint64_t str_rdy:1;
		uint64_t contention_type:2;
		uint64_t reserved_21_32:12;
		uint64_t mem_wen:4;
		uint64_t reserved_15_16:2;
		uint64_t mem_addr:11;
		uint64_t mem_en:4;
#else
		uint64_t mem_en:4;
		uint64_t mem_addr:11;
		uint64_t reserved_15_16:2;
		uint64_t mem_wen:4;
		uint64_t reserved_21_32:12;
		uint64_t contention_type:2;
		uint64_t str_rdy:1;
		uint64_t mem_rdy:1;
		uint64_t cur_state:3;
		uint64_t rdy:1;
		uint64_t load_val:1;
		uint64_t sel_nxt_ptr:1;
		uint64_t insert_mp:1;
		uint64_t insert_np:1;
		uint64_t mem_data_val:1;
		uint64_t str_val:1;
		uint64_t cmd_proc:1;
		uint64_t str_proc:1;
		uint64_t reserved_49_63:15;
#endif
	} cn73xx;
	struct cvmx_pko_pdm_mwpbuf_dbg_cn73xx cn75xx;
	struct cvmx_pko_pdm_mwpbuf_dbg_s cn78xx;
	struct cvmx_pko_pdm_mwpbuf_dbg_s cn78xxp2;
};
typedef union cvmx_pko_pdm_mwpbuf_dbg cvmx_pko_pdm_mwpbuf_dbg_t;

union cvmx_pko_pdm_sts {
	uint64_t u64;
	struct cvmx_pko_pdm_sts_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_38_63:26;
		uint64_t cp_stalled_thrshld_hit:1;
		uint64_t reserved_35_36:2;
		uint64_t mwpbuf_data_val_err:1;
		uint64_t drpbuf_data_val_err:1;
		uint64_t dwpbuf_data_val_err:1;
		uint64_t reserved_30_31:2;
		uint64_t qcmd_iobx_err_sts:4;
		uint64_t qcmd_iobx_err:1;
		uint64_t sendpkt_lmtdma_err_sts:4;
		uint64_t sendpkt_lmtdma_err:1;
		uint64_t sendpkt_lmtst_err_sts:4;
		uint64_t sendpkt_lmtst_err:1;
		uint64_t fpa_no_ptrs:1;
		uint64_t reserved_12_13:2;
		uint64_t cp_sendpkt_err_no_drp_code:2;

		uint64_t cp_sendpkt_err_no_drp:1;
		uint64_t reserved_7_8:2;
		uint64_t cp_sendpkt_err_drop_code:3;
		uint64_t cp_sendpkt_err_drop:1;
		uint64_t reserved_1_2:2;
		uint64_t desc_crc_err:1;
#else
		uint64_t desc_crc_err:1;
		uint64_t reserved_1_2:2;
		uint64_t cp_sendpkt_err_drop:1;
		uint64_t cp_sendpkt_err_drop_code:3;
		uint64_t reserved_7_8:2;
		uint64_t cp_sendpkt_err_no_drp:1;
		uint64_t cp_sendpkt_err_no_drp_code:2;
		uint64_t reserved_12_13:2;
		uint64_t fpa_no_ptrs:1;
		uint64_t sendpkt_lmtst_err:1;
		uint64_t sendpkt_lmtst_err_sts:4;
		uint64_t sendpkt_lmtdma_err:1;
		uint64_t sendpkt_lmtdma_err_sts:4;
		uint64_t qcmd_iobx_err:1;
		uint64_t qcmd_iobx_err_sts:4;
		uint64_t reserved_30_31:2;
		uint64_t dwpbuf_data_val_err:1;
		uint64_t drpbuf_data_val_err:1;
		uint64_t mwpbuf_data_val_err:1;
		uint64_t reserved_35_36:2;
		uint64_t cp_stalled_thrshld_hit:1;
		uint64_t reserved_38_63:26;
#endif
	} s;
	struct cvmx_pko_pdm_sts_s cn73xx;
	struct cvmx_pko_pdm_sts_s cn75xx;
	struct cvmx_pko_pdm_sts_s cn78xx;
	struct cvmx_pko_pdm_sts_s cn78xxp2;
};
typedef union cvmx_pko_pdm_sts cvmx_pko_pdm_sts_t;

union cvmx_pko_peb_bist_status {
	uint64_t u64;
	struct cvmx_pko_peb_bist_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_26_63:38;
		uint64_t add_work_fifo:1;
		uint64_t pdm_pse_buf_ram:1;
		uint64_t iobp0_fifo_ram:1;
		uint64_t iobp1_fifo_ram:1;
		uint64_t state_mem0:1;
		uint64_t reserved_19_20:2;
		uint64_t state_mem3:1;
		uint64_t iobp1_uid_fifo_ram:1;
		uint64_t nxt_link_ptr_ram:1;
		uint64_t pd_bank0_ram:1;
		uint64_t pd_bank1_ram:1;
		uint64_t pd_bank2_ram:1;
		uint64_t pd_bank3_ram:1;
		uint64_t pd_var_bank_ram:1;
		uint64_t pdm_resp_buf_ram:1;
		uint64_t tx_fifo_pkt_ram:1;
		uint64_t tx_fifo_hdr_ram:1;
		uint64_t tx_fifo_crc_ram:1;
		uint64_t ts_addwork_ram:1;
		uint64_t send_mem_ts_fifo:1;
		uint64_t send_mem_stdn_fifo:1;
		uint64_t send_mem_fifo:1;
		uint64_t pkt_mrk_ram:1;
		uint64_t peb_st_inf_ram:1;
		uint64_t peb_sm_jmp_ram:1;
#else
		uint64_t peb_sm_jmp_ram:1;
		uint64_t peb_st_inf_ram:1;
		uint64_t pkt_mrk_ram:1;
		uint64_t send_mem_fifo:1;
		uint64_t send_mem_stdn_fifo:1;
		uint64_t send_mem_ts_fifo:1;
		uint64_t ts_addwork_ram:1;
		uint64_t tx_fifo_crc_ram:1;
		uint64_t tx_fifo_hdr_ram:1;
		uint64_t tx_fifo_pkt_ram:1;
		uint64_t pdm_resp_buf_ram:1;
		uint64_t pd_var_bank_ram:1;
		uint64_t pd_bank3_ram:1;
		uint64_t pd_bank2_ram:1;
		uint64_t pd_bank1_ram:1;
		uint64_t pd_bank0_ram:1;
		uint64_t nxt_link_ptr_ram:1;
		uint64_t iobp1_uid_fifo_ram:1;
		uint64_t state_mem3:1;
		uint64_t reserved_19_20:2;
		uint64_t state_mem0:1;
		uint64_t iobp1_fifo_ram:1;
		uint64_t iobp0_fifo_ram:1;
		uint64_t pdm_pse_buf_ram:1;
		uint64_t add_work_fifo:1;
		uint64_t reserved_26_63:38;
#endif
	} s;
	struct cvmx_pko_peb_bist_status_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_26_63:38;
		uint64_t add_work_fifo:1;
		uint64_t pdm_pse_buf_ram:1;
		uint64_t iobp0_fifo_ram:1;
		uint64_t iobp1_fifo_ram:1;
		uint64_t state_mem0:1;
		uint64_t reserved_19_20:2;
		uint64_t state_mem3:1;
		uint64_t iobp1_uid_fifo_ram:1;
		uint64_t nxt_link_ptr_ram:1;
		uint64_t pd_bank0_ram:1;
		uint64_t reserved_13_14:2;
		uint64_t pd_bank3_ram:1;
		uint64_t pd_var_bank_ram:1;
		uint64_t pdm_resp_buf_ram:1;
		uint64_t tx_fifo_pkt_ram:1;
		uint64_t tx_fifo_hdr_ram:1;
		uint64_t tx_fifo_crc_ram:1;
		uint64_t ts_addwork_ram:1;
		uint64_t send_mem_ts_fifo:1;
		uint64_t send_mem_stdn_fifo:1;
		uint64_t send_mem_fifo:1;
		uint64_t pkt_mrk_ram:1;
		uint64_t peb_st_inf_ram:1;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t peb_st_inf_ram:1;
		uint64_t pkt_mrk_ram:1;
		uint64_t send_mem_fifo:1;
		uint64_t send_mem_stdn_fifo:1;
		uint64_t send_mem_ts_fifo:1;
		uint64_t ts_addwork_ram:1;
		uint64_t tx_fifo_crc_ram:1;
		uint64_t tx_fifo_hdr_ram:1;
		uint64_t tx_fifo_pkt_ram:1;
		uint64_t pdm_resp_buf_ram:1;
		uint64_t pd_var_bank_ram:1;
		uint64_t pd_bank3_ram:1;
		uint64_t reserved_13_14:2;
		uint64_t pd_bank0_ram:1;
		uint64_t nxt_link_ptr_ram:1;
		uint64_t iobp1_uid_fifo_ram:1;
		uint64_t state_mem3:1;
		uint64_t reserved_19_20:2;
		uint64_t state_mem0:1;
		uint64_t iobp1_fifo_ram:1;
		uint64_t iobp0_fifo_ram:1;
		uint64_t pdm_pse_buf_ram:1;
		uint64_t add_work_fifo:1;
		uint64_t reserved_26_63:38;
#endif
	} cn73xx;
	struct cvmx_pko_peb_bist_status_cn73xx cn75xx;
	struct cvmx_pko_peb_bist_status_s cn78xx;
	struct cvmx_pko_peb_bist_status_cn73xx cn78xxp2;
};
typedef union cvmx_pko_peb_bist_status cvmx_pko_peb_bist_status_t;

union cvmx_pko_peb_ecc_ctl0 {
	uint64_t u64;
	struct cvmx_pko_peb_ecc_ctl0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t iobp1_uid_fifo_ram_flip:2;
		uint64_t iobp1_uid_fifo_ram_cdis:1;
		uint64_t iobp0_fifo_ram_flip:2;
		uint64_t iobp0_fifo_ram_cdis:1;
		uint64_t iobp1_fifo_ram_flip:2;
		uint64_t iobp1_fifo_ram_cdis:1;
		uint64_t pdm_resp_buf_ram_flip:2;
		uint64_t pdm_resp_buf_ram_cdis:1;
		uint64_t pdm_pse_buf_ram_flip:2;
		uint64_t pdm_pse_buf_ram_cdis:1;
		uint64_t peb_sm_jmp_ram_flip:2;
		uint64_t peb_sm_jmp_ram_cdis:1;
		uint64_t peb_st_inf_ram_flip:2;
		uint64_t peb_st_inf_ram_cdis:1;
		uint64_t pd_bank3_ram_flip:2;
		uint64_t pd_bank3_ram_cdis:1;
		uint64_t pd_bank2_ram_flip:2;
		uint64_t pd_bank2_ram_cdis:1;
		uint64_t pd_bank1_ram_flip:2;
		uint64_t pd_bank1_ram_cdis:1;
		uint64_t pd_bank0_ram_flip:2;
		uint64_t pd_bank0_ram_cdis:1;
		uint64_t pd_var_bank_ram_flip:2;
		uint64_t pd_var_bank_ram_cdis:1;
		uint64_t tx_fifo_crc_ram_flip:2;
		uint64_t tx_fifo_crc_ram_cdis:1;
		uint64_t tx_fifo_hdr_ram_flip:2;
		uint64_t tx_fifo_hdr_ram_cdis:1;
		uint64_t tx_fifo_pkt_ram_flip:2;
		uint64_t tx_fifo_pkt_ram_cdis:1;
		uint64_t add_work_fifo_flip:2;
		uint64_t add_work_fifo_cdis:1;
		uint64_t send_mem_fifo_flip:2;
		uint64_t send_mem_fifo_cdis:1;
		uint64_t send_mem_stdn_fifo_flip:2;
		uint64_t send_mem_stdn_fifo_cdis:1;
		uint64_t send_mem_ts_fifo_flip:2;
		uint64_t send_mem_ts_fifo_cdis:1;
		uint64_t nxt_link_ptr_ram_flip:2;
		uint64_t nxt_link_ptr_ram_cdis:1;
		uint64_t pkt_mrk_ram_flip:2;
		uint64_t pkt_mrk_ram_cdis:1;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t pkt_mrk_ram_cdis:1;
		uint64_t pkt_mrk_ram_flip:2;
		uint64_t nxt_link_ptr_ram_cdis:1;
		uint64_t nxt_link_ptr_ram_flip:2;
		uint64_t send_mem_ts_fifo_cdis:1;
		uint64_t send_mem_ts_fifo_flip:2;
		uint64_t send_mem_stdn_fifo_cdis:1;
		uint64_t send_mem_stdn_fifo_flip:2;
		uint64_t send_mem_fifo_cdis:1;
		uint64_t send_mem_fifo_flip:2;
		uint64_t add_work_fifo_cdis:1;
		uint64_t add_work_fifo_flip:2;
		uint64_t tx_fifo_pkt_ram_cdis:1;
		uint64_t tx_fifo_pkt_ram_flip:2;
		uint64_t tx_fifo_hdr_ram_cdis:1;
		uint64_t tx_fifo_hdr_ram_flip:2;
		uint64_t tx_fifo_crc_ram_cdis:1;
		uint64_t tx_fifo_crc_ram_flip:2;
		uint64_t pd_var_bank_ram_cdis:1;
		uint64_t pd_var_bank_ram_flip:2;
		uint64_t pd_bank0_ram_cdis:1;
		uint64_t pd_bank0_ram_flip:2;
		uint64_t pd_bank1_ram_cdis:1;
		uint64_t pd_bank1_ram_flip:2;
		uint64_t pd_bank2_ram_cdis:1;
		uint64_t pd_bank2_ram_flip:2;
		uint64_t pd_bank3_ram_cdis:1;
		uint64_t pd_bank3_ram_flip:2;
		uint64_t peb_st_inf_ram_cdis:1;
		uint64_t peb_st_inf_ram_flip:2;
		uint64_t peb_sm_jmp_ram_cdis:1;
		uint64_t peb_sm_jmp_ram_flip:2;
		uint64_t pdm_pse_buf_ram_cdis:1;
		uint64_t pdm_pse_buf_ram_flip:2;
		uint64_t pdm_resp_buf_ram_cdis:1;
		uint64_t pdm_resp_buf_ram_flip:2;
		uint64_t iobp1_fifo_ram_cdis:1;
		uint64_t iobp1_fifo_ram_flip:2;
		uint64_t iobp0_fifo_ram_cdis:1;
		uint64_t iobp0_fifo_ram_flip:2;
		uint64_t iobp1_uid_fifo_ram_cdis:1;
		uint64_t iobp1_uid_fifo_ram_flip:2;
#endif
	} s;
	struct cvmx_pko_peb_ecc_ctl0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t iobp1_uid_fifo_ram_flip:2;
		uint64_t iobp1_uid_fifo_ram_cdis:1;
		uint64_t iobp0_fifo_ram_flip:2;
		uint64_t iobp0_fifo_ram_cdis:1;
		uint64_t iobp1_fifo_ram_flip:2;
		uint64_t iobp1_fifo_ram_cdis:1;
		uint64_t pdm_resp_buf_ram_flip:2;
		uint64_t pdm_resp_buf_ram_cdis:1;
		uint64_t pdm_pse_buf_ram_flip:2;
		uint64_t pdm_pse_buf_ram_cdis:1;
		uint64_t reserved_46_48:3;
		uint64_t peb_st_inf_ram_flip:2;
		uint64_t peb_st_inf_ram_cdis:1;
		uint64_t pd_bank3_ram_flip:2;
		uint64_t pd_bank3_ram_cdis:1;
		uint64_t reserved_34_39:6;
		uint64_t pd_bank0_ram_flip:2;
		uint64_t pd_bank0_ram_cdis:1;
		uint64_t pd_var_bank_ram_flip:2;
		uint64_t pd_var_bank_ram_cdis:1;
		uint64_t tx_fifo_crc_ram_flip:2;
		uint64_t tx_fifo_crc_ram_cdis:1;
		uint64_t tx_fifo_hdr_ram_flip:2;
		uint64_t tx_fifo_hdr_ram_cdis:1;
		uint64_t tx_fifo_pkt_ram_flip:2;
		uint64_t tx_fifo_pkt_ram_cdis:1;
		uint64_t add_work_fifo_flip:2;
		uint64_t add_work_fifo_cdis:1;
		uint64_t send_mem_fifo_flip:2;
		uint64_t send_mem_fifo_cdis:1;
		uint64_t send_mem_stdn_fifo_flip:2;
		uint64_t send_mem_stdn_fifo_cdis:1;
		uint64_t send_mem_ts_fifo_flip:2;
		uint64_t send_mem_ts_fifo_cdis:1;
		uint64_t nxt_link_ptr_ram_flip:2;
		uint64_t nxt_link_ptr_ram_cdis:1;
		uint64_t pkt_mrk_ram_flip:2;
		uint64_t pkt_mrk_ram_cdis:1;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t pkt_mrk_ram_cdis:1;
		uint64_t pkt_mrk_ram_flip:2;
		uint64_t nxt_link_ptr_ram_cdis:1;
		uint64_t nxt_link_ptr_ram_flip:2;
		uint64_t send_mem_ts_fifo_cdis:1;
		uint64_t send_mem_ts_fifo_flip:2;
		uint64_t send_mem_stdn_fifo_cdis:1;
		uint64_t send_mem_stdn_fifo_flip:2;
		uint64_t send_mem_fifo_cdis:1;
		uint64_t send_mem_fifo_flip:2;
		uint64_t add_work_fifo_cdis:1;
		uint64_t add_work_fifo_flip:2;
		uint64_t tx_fifo_pkt_ram_cdis:1;
		uint64_t tx_fifo_pkt_ram_flip:2;
		uint64_t tx_fifo_hdr_ram_cdis:1;
		uint64_t tx_fifo_hdr_ram_flip:2;
		uint64_t tx_fifo_crc_ram_cdis:1;
		uint64_t tx_fifo_crc_ram_flip:2;
		uint64_t pd_var_bank_ram_cdis:1;
		uint64_t pd_var_bank_ram_flip:2;
		uint64_t pd_bank0_ram_cdis:1;
		uint64_t pd_bank0_ram_flip:2;
		uint64_t reserved_34_39:6;
		uint64_t pd_bank3_ram_cdis:1;
		uint64_t pd_bank3_ram_flip:2;
		uint64_t peb_st_inf_ram_cdis:1;
		uint64_t peb_st_inf_ram_flip:2;
		uint64_t reserved_46_48:3;
		uint64_t pdm_pse_buf_ram_cdis:1;
		uint64_t pdm_pse_buf_ram_flip:2;
		uint64_t pdm_resp_buf_ram_cdis:1;
		uint64_t pdm_resp_buf_ram_flip:2;
		uint64_t iobp1_fifo_ram_cdis:1;
		uint64_t iobp1_fifo_ram_flip:2;
		uint64_t iobp0_fifo_ram_cdis:1;
		uint64_t iobp0_fifo_ram_flip:2;
		uint64_t iobp1_uid_fifo_ram_cdis:1;
		uint64_t iobp1_uid_fifo_ram_flip:2;
#endif
	} cn73xx;
	struct cvmx_pko_peb_ecc_ctl0_cn73xx cn75xx;
	struct cvmx_pko_peb_ecc_ctl0_s cn78xx;
	struct cvmx_pko_peb_ecc_ctl0_cn73xx cn78xxp2;
};
typedef union cvmx_pko_peb_ecc_ctl0 cvmx_pko_peb_ecc_ctl0_t;

union cvmx_pko_peb_ecc_ctl1 {
	uint64_t u64;
	struct cvmx_pko_peb_ecc_ctl1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t ts_addwork_ram_flip:2;
		uint64_t ts_addwork_ram_cdis:1;
		uint64_t state_mem0_flip:2;
		uint64_t state_mem0_cdis:1;
		uint64_t reserved_52_57:6;
		uint64_t state_mem3_flip:2;
		uint64_t state_mem3_cdis:1;
		uint64_t reserved_0_48:49;
#else
		uint64_t reserved_0_48:49;
		uint64_t state_mem3_cdis:1;
		uint64_t state_mem3_flip:2;
		uint64_t reserved_52_57:6;
		uint64_t state_mem0_cdis:1;
		uint64_t state_mem0_flip:2;
		uint64_t ts_addwork_ram_cdis:1;
		uint64_t ts_addwork_ram_flip:2;
#endif
	} s;
	struct cvmx_pko_peb_ecc_ctl1_s cn73xx;
	struct cvmx_pko_peb_ecc_ctl1_s cn75xx;
	struct cvmx_pko_peb_ecc_ctl1_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t ts_addwork_ram_flip:2;
		uint64_t ts_addwork_ram_cdis:1;
		uint64_t reserved_0_60:61;
#else
		uint64_t reserved_0_60:61;
		uint64_t ts_addwork_ram_cdis:1;
		uint64_t ts_addwork_ram_flip:2;
#endif
	} cn78xx;
	struct cvmx_pko_peb_ecc_ctl1_cn78xx cn78xxp2;
};
typedef union cvmx_pko_peb_ecc_ctl1 cvmx_pko_peb_ecc_ctl1_t;

union cvmx_pko_peb_ecc_dbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_peb_ecc_dbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t iobp1_uid_fifo_ram_dbe:1;
		uint64_t iobp0_fifo_ram_dbe:1;
		uint64_t iobp1_fifo_ram_dbe:1;
		uint64_t pdm_resp_buf_ram_dbe:1;
		uint64_t pdm_pse_buf_ram_dbe:1;
		uint64_t peb_sm_jmp_ram_dbe:1;
		uint64_t peb_st_inf_ram_dbe:1;
		uint64_t pd_bank3_ram_dbe:1;
		uint64_t pd_bank2_ram_dbe:1;
		uint64_t pd_bank1_ram_dbe:1;
		uint64_t pd_bank0_ram_dbe:1;
		uint64_t pd_var_bank_ram_dbe:1;
		uint64_t tx_fifo_crc_ram_dbe:1;
		uint64_t tx_fifo_hdr_ram_dbe:1;
		uint64_t tx_fifo_pkt_ram_dbe:1;
		uint64_t add_work_fifo_dbe:1;
		uint64_t send_mem_fifo_dbe:1;
		uint64_t send_mem_stdn_fifo_dbe:1;
		uint64_t send_mem_ts_fifo_dbe:1;
		uint64_t nxt_link_ptr_ram_dbe:1;
		uint64_t pkt_mrk_ram_dbe:1;
		uint64_t ts_addwork_ram_dbe:1;
		uint64_t state_mem0_dbe:1;
		uint64_t reserved_39_40:2;
		uint64_t state_mem3_dbe:1;
		uint64_t reserved_0_37:38;
#else
		uint64_t reserved_0_37:38;
		uint64_t state_mem3_dbe:1;
		uint64_t reserved_39_40:2;
		uint64_t state_mem0_dbe:1;
		uint64_t ts_addwork_ram_dbe:1;
		uint64_t pkt_mrk_ram_dbe:1;
		uint64_t nxt_link_ptr_ram_dbe:1;
		uint64_t send_mem_ts_fifo_dbe:1;
		uint64_t send_mem_stdn_fifo_dbe:1;
		uint64_t send_mem_fifo_dbe:1;
		uint64_t add_work_fifo_dbe:1;
		uint64_t tx_fifo_pkt_ram_dbe:1;
		uint64_t tx_fifo_hdr_ram_dbe:1;
		uint64_t tx_fifo_crc_ram_dbe:1;
		uint64_t pd_var_bank_ram_dbe:1;
		uint64_t pd_bank0_ram_dbe:1;
		uint64_t pd_bank1_ram_dbe:1;
		uint64_t pd_bank2_ram_dbe:1;
		uint64_t pd_bank3_ram_dbe:1;
		uint64_t peb_st_inf_ram_dbe:1;
		uint64_t peb_sm_jmp_ram_dbe:1;
		uint64_t pdm_pse_buf_ram_dbe:1;
		uint64_t pdm_resp_buf_ram_dbe:1;
		uint64_t iobp1_fifo_ram_dbe:1;
		uint64_t iobp0_fifo_ram_dbe:1;
		uint64_t iobp1_uid_fifo_ram_dbe:1;
#endif
	} s;
	struct cvmx_pko_peb_ecc_dbe_sts0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t iobp1_uid_fifo_ram_dbe:1;
		uint64_t iobp0_fifo_ram_dbe:1;
		uint64_t iobp1_fifo_ram_dbe:1;
		uint64_t pdm_resp_buf_ram_dbe:1;
		uint64_t pdm_pse_buf_ram_dbe:1;
		uint64_t reserved_58_58:1;
		uint64_t peb_st_inf_ram_dbe:1;
		uint64_t pd_bank3_ram_dbe:1;
		uint64_t reserved_54_55:2;
		uint64_t pd_bank0_ram_dbe:1;
		uint64_t pd_var_bank_ram_dbe:1;
		uint64_t tx_fifo_crc_ram_dbe:1;
		uint64_t tx_fifo_hdr_ram_dbe:1;
		uint64_t tx_fifo_pkt_ram_dbe:1;
		uint64_t add_work_fifo_dbe:1;
		uint64_t send_mem_fifo_dbe:1;
		uint64_t send_mem_stdn_fifo_dbe:1;
		uint64_t send_mem_ts_fifo_dbe:1;
		uint64_t nxt_link_ptr_ram_dbe:1;
		uint64_t pkt_mrk_ram_dbe:1;
		uint64_t ts_addwork_ram_dbe:1;
		uint64_t state_mem0_dbe:1;
		uint64_t reserved_39_40:2;
		uint64_t state_mem3_dbe:1;
		uint64_t reserved_0_37:38;
#else
		uint64_t reserved_0_37:38;
		uint64_t state_mem3_dbe:1;
		uint64_t reserved_39_40:2;
		uint64_t state_mem0_dbe:1;
		uint64_t ts_addwork_ram_dbe:1;
		uint64_t pkt_mrk_ram_dbe:1;
		uint64_t nxt_link_ptr_ram_dbe:1;
		uint64_t send_mem_ts_fifo_dbe:1;
		uint64_t send_mem_stdn_fifo_dbe:1;
		uint64_t send_mem_fifo_dbe:1;
		uint64_t add_work_fifo_dbe:1;
		uint64_t tx_fifo_pkt_ram_dbe:1;
		uint64_t tx_fifo_hdr_ram_dbe:1;
		uint64_t tx_fifo_crc_ram_dbe:1;
		uint64_t pd_var_bank_ram_dbe:1;
		uint64_t pd_bank0_ram_dbe:1;
		uint64_t reserved_54_55:2;
		uint64_t pd_bank3_ram_dbe:1;
		uint64_t peb_st_inf_ram_dbe:1;
		uint64_t reserved_58_58:1;
		uint64_t pdm_pse_buf_ram_dbe:1;
		uint64_t pdm_resp_buf_ram_dbe:1;
		uint64_t iobp1_fifo_ram_dbe:1;
		uint64_t iobp0_fifo_ram_dbe:1;
		uint64_t iobp1_uid_fifo_ram_dbe:1;
#endif
	} cn73xx;
	struct cvmx_pko_peb_ecc_dbe_sts0_cn73xx cn75xx;
	struct cvmx_pko_peb_ecc_dbe_sts0_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t iobp1_uid_fifo_ram_dbe:1;
		uint64_t iobp0_fifo_ram_dbe:1;
		uint64_t iobp1_fifo_ram_dbe:1;
		uint64_t pdm_resp_buf_ram_dbe:1;
		uint64_t pdm_pse_buf_ram_dbe:1;
		uint64_t peb_sm_jmp_ram_dbe:1;
		uint64_t peb_st_inf_ram_dbe:1;
		uint64_t pd_bank3_ram_dbe:1;
		uint64_t pd_bank2_ram_dbe:1;
		uint64_t pd_bank1_ram_dbe:1;
		uint64_t pd_bank0_ram_dbe:1;
		uint64_t pd_var_bank_ram_dbe:1;
		uint64_t tx_fifo_crc_ram_dbe:1;
		uint64_t tx_fifo_hdr_ram_dbe:1;
		uint64_t tx_fifo_pkt_ram_dbe:1;
		uint64_t add_work_fifo_dbe:1;
		uint64_t send_mem_fifo_dbe:1;
		uint64_t send_mem_stdn_fifo_dbe:1;
		uint64_t send_mem_ts_fifo_dbe:1;
		uint64_t nxt_link_ptr_ram_dbe:1;
		uint64_t pkt_mrk_ram_dbe:1;
		uint64_t ts_addwork_ram_dbe:1;
		uint64_t reserved_0_41:42;
#else
		uint64_t reserved_0_41:42;
		uint64_t ts_addwork_ram_dbe:1;
		uint64_t pkt_mrk_ram_dbe:1;
		uint64_t nxt_link_ptr_ram_dbe:1;
		uint64_t send_mem_ts_fifo_dbe:1;
		uint64_t send_mem_stdn_fifo_dbe:1;
		uint64_t send_mem_fifo_dbe:1;
		uint64_t add_work_fifo_dbe:1;
		uint64_t tx_fifo_pkt_ram_dbe:1;
		uint64_t tx_fifo_hdr_ram_dbe:1;
		uint64_t tx_fifo_crc_ram_dbe:1;
		uint64_t pd_var_bank_ram_dbe:1;
		uint64_t pd_bank0_ram_dbe:1;
		uint64_t pd_bank1_ram_dbe:1;
		uint64_t pd_bank2_ram_dbe:1;
		uint64_t pd_bank3_ram_dbe:1;
		uint64_t peb_st_inf_ram_dbe:1;
		uint64_t peb_sm_jmp_ram_dbe:1;
		uint64_t pdm_pse_buf_ram_dbe:1;
		uint64_t pdm_resp_buf_ram_dbe:1;
		uint64_t iobp1_fifo_ram_dbe:1;
		uint64_t iobp0_fifo_ram_dbe:1;
		uint64_t iobp1_uid_fifo_ram_dbe:1;
#endif
	} cn78xx;
	struct cvmx_pko_peb_ecc_dbe_sts0_cn78xxp2 {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t iobp1_uid_fifo_ram_dbe:1;
		uint64_t iobp0_fifo_ram_dbe:1;
		uint64_t iobp1_fifo_ram_dbe:1;
		uint64_t pdm_resp_buf_ram_dbe:1;
		uint64_t pdm_pse_buf_ram_dbe:1;
		uint64_t reserved_58_58:1;
		uint64_t peb_st_inf_ram_dbe:1;
		uint64_t pd_bank3_ram_dbe:1;
		uint64_t reserved_54_55:2;
		uint64_t pd_bank0_ram_dbe:1;
		uint64_t pd_var_bank_ram_dbe:1;
		uint64_t tx_fifo_crc_ram_dbe:1;
		uint64_t tx_fifo_hdr_ram_dbe:1;
		uint64_t tx_fifo_pkt_ram_dbe:1;
		uint64_t add_work_fifo_dbe:1;
		uint64_t send_mem_fifo_dbe:1;
		uint64_t send_mem_stdn_fifo_dbe:1;
		uint64_t send_mem_ts_fifo_dbe:1;
		uint64_t nxt_link_ptr_ram_dbe:1;
		uint64_t pkt_mrk_ram_dbe:1;
		uint64_t ts_addwork_ram_dbe:1;
		uint64_t reserved_0_41:42;
#else
		uint64_t reserved_0_41:42;
		uint64_t ts_addwork_ram_dbe:1;
		uint64_t pkt_mrk_ram_dbe:1;
		uint64_t nxt_link_ptr_ram_dbe:1;
		uint64_t send_mem_ts_fifo_dbe:1;
		uint64_t send_mem_stdn_fifo_dbe:1;
		uint64_t send_mem_fifo_dbe:1;
		uint64_t add_work_fifo_dbe:1;
		uint64_t tx_fifo_pkt_ram_dbe:1;
		uint64_t tx_fifo_hdr_ram_dbe:1;
		uint64_t tx_fifo_crc_ram_dbe:1;
		uint64_t pd_var_bank_ram_dbe:1;
		uint64_t pd_bank0_ram_dbe:1;
		uint64_t reserved_54_55:2;
		uint64_t pd_bank3_ram_dbe:1;
		uint64_t peb_st_inf_ram_dbe:1;
		uint64_t reserved_58_58:1;
		uint64_t pdm_pse_buf_ram_dbe:1;
		uint64_t pdm_resp_buf_ram_dbe:1;
		uint64_t iobp1_fifo_ram_dbe:1;
		uint64_t iobp0_fifo_ram_dbe:1;
		uint64_t iobp1_uid_fifo_ram_dbe:1;
#endif
	} cn78xxp2;
};
typedef union cvmx_pko_peb_ecc_dbe_sts0 cvmx_pko_peb_ecc_dbe_sts0_t;

union cvmx_pko_peb_ecc_dbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_peb_ecc_dbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t peb_dbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t peb_dbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_peb_ecc_dbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_peb_ecc_dbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_peb_ecc_dbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_peb_ecc_dbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_peb_ecc_dbe_sts_cmb0 cvmx_pko_peb_ecc_dbe_sts_cmb0_t;

union cvmx_pko_peb_ecc_sbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_peb_ecc_sbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t iobp1_uid_fifo_ram_sbe:1;
		uint64_t iobp0_fifo_ram_sbe:1;
		uint64_t iobp1_fifo_ram_sbe:1;
		uint64_t pdm_resp_buf_ram_sbe:1;
		uint64_t pdm_pse_buf_ram_sbe:1;
		uint64_t peb_sm_jmp_ram_sbe:1;
		uint64_t peb_st_inf_ram_sbe:1;
		uint64_t pd_bank3_ram_sbe:1;
		uint64_t pd_bank2_ram_sbe:1;
		uint64_t pd_bank1_ram_sbe:1;
		uint64_t pd_bank0_ram_sbe:1;
		uint64_t pd_var_bank_ram_sbe:1;
		uint64_t tx_fifo_crc_ram_sbe:1;
		uint64_t tx_fifo_hdr_ram_sbe:1;
		uint64_t tx_fifo_pkt_ram_sbe:1;
		uint64_t add_work_fifo_sbe:1;
		uint64_t send_mem_fifo_sbe:1;
		uint64_t send_mem_stdn_fifo_sbe:1;
		uint64_t send_mem_ts_fifo_sbe:1;
		uint64_t nxt_link_ptr_ram_sbe:1;
		uint64_t pkt_mrk_ram_sbe:1;
		uint64_t ts_addwork_ram_sbe:1;
		uint64_t state_mem0_sbe:1;
		uint64_t reserved_39_40:2;
		uint64_t state_mem3_sbe:1;
		uint64_t reserved_0_37:38;
#else
		uint64_t reserved_0_37:38;
		uint64_t state_mem3_sbe:1;
		uint64_t reserved_39_40:2;
		uint64_t state_mem0_sbe:1;
		uint64_t ts_addwork_ram_sbe:1;
		uint64_t pkt_mrk_ram_sbe:1;
		uint64_t nxt_link_ptr_ram_sbe:1;
		uint64_t send_mem_ts_fifo_sbe:1;
		uint64_t send_mem_stdn_fifo_sbe:1;
		uint64_t send_mem_fifo_sbe:1;
		uint64_t add_work_fifo_sbe:1;
		uint64_t tx_fifo_pkt_ram_sbe:1;
		uint64_t tx_fifo_hdr_ram_sbe:1;
		uint64_t tx_fifo_crc_ram_sbe:1;
		uint64_t pd_var_bank_ram_sbe:1;
		uint64_t pd_bank0_ram_sbe:1;
		uint64_t pd_bank1_ram_sbe:1;
		uint64_t pd_bank2_ram_sbe:1;
		uint64_t pd_bank3_ram_sbe:1;
		uint64_t peb_st_inf_ram_sbe:1;
		uint64_t peb_sm_jmp_ram_sbe:1;
		uint64_t pdm_pse_buf_ram_sbe:1;
		uint64_t pdm_resp_buf_ram_sbe:1;
		uint64_t iobp1_fifo_ram_sbe:1;
		uint64_t iobp0_fifo_ram_sbe:1;
		uint64_t iobp1_uid_fifo_ram_sbe:1;
#endif
	} s;
	struct cvmx_pko_peb_ecc_sbe_sts0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t iobp1_uid_fifo_ram_sbe:1;
		uint64_t iobp0_fifo_ram_sbe:1;
		uint64_t iobp1_fifo_ram_sbe:1;
		uint64_t pdm_resp_buf_ram_sbe:1;
		uint64_t pdm_pse_buf_ram_sbe:1;
		uint64_t reserved_58_58:1;
		uint64_t peb_st_inf_ram_sbe:1;
		uint64_t pd_bank3_ram_sbe:1;
		uint64_t reserved_54_55:2;
		uint64_t pd_bank0_ram_sbe:1;
		uint64_t pd_var_bank_ram_sbe:1;
		uint64_t tx_fifo_crc_ram_sbe:1;
		uint64_t tx_fifo_hdr_ram_sbe:1;
		uint64_t tx_fifo_pkt_ram_sbe:1;
		uint64_t add_work_fifo_sbe:1;
		uint64_t send_mem_fifo_sbe:1;
		uint64_t send_mem_stdn_fifo_sbe:1;
		uint64_t send_mem_ts_fifo_sbe:1;
		uint64_t nxt_link_ptr_ram_sbe:1;
		uint64_t pkt_mrk_ram_sbe:1;
		uint64_t ts_addwork_ram_sbe:1;
		uint64_t state_mem0_sbe:1;
		uint64_t reserved_39_40:2;
		uint64_t state_mem3_sbe:1;
		uint64_t reserved_0_37:38;
#else
		uint64_t reserved_0_37:38;
		uint64_t state_mem3_sbe:1;
		uint64_t reserved_39_40:2;
		uint64_t state_mem0_sbe:1;
		uint64_t ts_addwork_ram_sbe:1;
		uint64_t pkt_mrk_ram_sbe:1;
		uint64_t nxt_link_ptr_ram_sbe:1;
		uint64_t send_mem_ts_fifo_sbe:1;
		uint64_t send_mem_stdn_fifo_sbe:1;
		uint64_t send_mem_fifo_sbe:1;
		uint64_t add_work_fifo_sbe:1;
		uint64_t tx_fifo_pkt_ram_sbe:1;
		uint64_t tx_fifo_hdr_ram_sbe:1;
		uint64_t tx_fifo_crc_ram_sbe:1;
		uint64_t pd_var_bank_ram_sbe:1;
		uint64_t pd_bank0_ram_sbe:1;
		uint64_t reserved_54_55:2;
		uint64_t pd_bank3_ram_sbe:1;
		uint64_t peb_st_inf_ram_sbe:1;
		uint64_t reserved_58_58:1;
		uint64_t pdm_pse_buf_ram_sbe:1;
		uint64_t pdm_resp_buf_ram_sbe:1;
		uint64_t iobp1_fifo_ram_sbe:1;
		uint64_t iobp0_fifo_ram_sbe:1;
		uint64_t iobp1_uid_fifo_ram_sbe:1;
#endif
	} cn73xx;
	struct cvmx_pko_peb_ecc_sbe_sts0_cn73xx cn75xx;
	struct cvmx_pko_peb_ecc_sbe_sts0_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t iobp1_uid_fifo_ram_sbe:1;
		uint64_t iobp0_fifo_ram_sbe:1;
		uint64_t iobp1_fifo_ram_sbe:1;
		uint64_t pdm_resp_buf_ram_sbe:1;
		uint64_t pdm_pse_buf_ram_sbe:1;
		uint64_t peb_sm_jmp_ram_sbe:1;
		uint64_t peb_st_inf_ram_sbe:1;
		uint64_t pd_bank3_ram_sbe:1;
		uint64_t pd_bank2_ram_sbe:1;
		uint64_t pd_bank1_ram_sbe:1;
		uint64_t pd_bank0_ram_sbe:1;
		uint64_t pd_var_bank_ram_sbe:1;
		uint64_t tx_fifo_crc_ram_sbe:1;
		uint64_t tx_fifo_hdr_ram_sbe:1;
		uint64_t tx_fifo_pkt_ram_sbe:1;
		uint64_t add_work_fifo_sbe:1;
		uint64_t send_mem_fifo_sbe:1;
		uint64_t send_mem_stdn_fifo_sbe:1;
		uint64_t send_mem_ts_fifo_sbe:1;
		uint64_t nxt_link_ptr_ram_sbe:1;
		uint64_t pkt_mrk_ram_sbe:1;
		uint64_t ts_addwork_ram_sbe:1;
		uint64_t reserved_0_41:42;
#else
		uint64_t reserved_0_41:42;
		uint64_t ts_addwork_ram_sbe:1;
		uint64_t pkt_mrk_ram_sbe:1;
		uint64_t nxt_link_ptr_ram_sbe:1;
		uint64_t send_mem_ts_fifo_sbe:1;
		uint64_t send_mem_stdn_fifo_sbe:1;
		uint64_t send_mem_fifo_sbe:1;
		uint64_t add_work_fifo_sbe:1;
		uint64_t tx_fifo_pkt_ram_sbe:1;
		uint64_t tx_fifo_hdr_ram_sbe:1;
		uint64_t tx_fifo_crc_ram_sbe:1;
		uint64_t pd_var_bank_ram_sbe:1;
		uint64_t pd_bank0_ram_sbe:1;
		uint64_t pd_bank1_ram_sbe:1;
		uint64_t pd_bank2_ram_sbe:1;
		uint64_t pd_bank3_ram_sbe:1;
		uint64_t peb_st_inf_ram_sbe:1;
		uint64_t peb_sm_jmp_ram_sbe:1;
		uint64_t pdm_pse_buf_ram_sbe:1;
		uint64_t pdm_resp_buf_ram_sbe:1;
		uint64_t iobp1_fifo_ram_sbe:1;
		uint64_t iobp0_fifo_ram_sbe:1;
		uint64_t iobp1_uid_fifo_ram_sbe:1;
#endif
	} cn78xx;
	struct cvmx_pko_peb_ecc_sbe_sts0_cn78xxp2 {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t iobp1_uid_fifo_ram_sbe:1;
		uint64_t iobp0_fifo_ram_sbe:1;
		uint64_t iobp1_fifo_ram_sbe:1;
		uint64_t pdm_resp_buf_ram_sbe:1;
		uint64_t pdm_pse_buf_ram_sbe:1;
		uint64_t reserved_58_58:1;
		uint64_t peb_st_inf_ram_sbe:1;
		uint64_t pd_bank3_ram_sbe:1;
		uint64_t reserved_54_55:2;
		uint64_t pd_bank0_ram_sbe:1;
		uint64_t pd_var_bank_ram_sbe:1;
		uint64_t tx_fifo_crc_ram_sbe:1;
		uint64_t tx_fifo_hdr_ram_sbe:1;
		uint64_t tx_fifo_pkt_ram_sbe:1;
		uint64_t add_work_fifo_sbe:1;
		uint64_t send_mem_fifo_sbe:1;
		uint64_t send_mem_stdn_fifo_sbe:1;
		uint64_t send_mem_ts_fifo_sbe:1;
		uint64_t nxt_link_ptr_ram_sbe:1;
		uint64_t pkt_mrk_ram_sbe:1;
		uint64_t ts_addwork_ram_sbe:1;
		uint64_t reserved_0_41:42;
#else
		uint64_t reserved_0_41:42;
		uint64_t ts_addwork_ram_sbe:1;
		uint64_t pkt_mrk_ram_sbe:1;
		uint64_t nxt_link_ptr_ram_sbe:1;
		uint64_t send_mem_ts_fifo_sbe:1;
		uint64_t send_mem_stdn_fifo_sbe:1;
		uint64_t send_mem_fifo_sbe:1;
		uint64_t add_work_fifo_sbe:1;
		uint64_t tx_fifo_pkt_ram_sbe:1;
		uint64_t tx_fifo_hdr_ram_sbe:1;
		uint64_t tx_fifo_crc_ram_sbe:1;
		uint64_t pd_var_bank_ram_sbe:1;
		uint64_t pd_bank0_ram_sbe:1;
		uint64_t reserved_54_55:2;
		uint64_t pd_bank3_ram_sbe:1;
		uint64_t peb_st_inf_ram_sbe:1;
		uint64_t reserved_58_58:1;
		uint64_t pdm_pse_buf_ram_sbe:1;
		uint64_t pdm_resp_buf_ram_sbe:1;
		uint64_t iobp1_fifo_ram_sbe:1;
		uint64_t iobp0_fifo_ram_sbe:1;
		uint64_t iobp1_uid_fifo_ram_sbe:1;
#endif
	} cn78xxp2;
};
typedef union cvmx_pko_peb_ecc_sbe_sts0 cvmx_pko_peb_ecc_sbe_sts0_t;

union cvmx_pko_peb_ecc_sbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_peb_ecc_sbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t peb_sbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t peb_sbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_peb_ecc_sbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_peb_ecc_sbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_peb_ecc_sbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_peb_ecc_sbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_peb_ecc_sbe_sts_cmb0 cvmx_pko_peb_ecc_sbe_sts_cmb0_t;

union cvmx_pko_peb_eco {
	uint64_t u64;
	struct cvmx_pko_peb_eco_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t eco_rw:32;
#else
		uint64_t eco_rw:32;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_pko_peb_eco_s cn73xx;
	struct cvmx_pko_peb_eco_s cn75xx;
	struct cvmx_pko_peb_eco_s cn78xxp2;
};
typedef union cvmx_pko_peb_eco cvmx_pko_peb_eco_t;

union cvmx_pko_peb_err_int {
	uint64_t u64;
	struct cvmx_pko_peb_err_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t peb_macx_cfg_wr_err:1;
		uint64_t peb_max_link_err:1;
		uint64_t peb_subd_size_err:1;
		uint64_t peb_subd_addr_err:1;
		uint64_t peb_trunc_err:1;
		uint64_t peb_pad_err:1;
		uint64_t peb_pse_fifo_err:1;
		uint64_t peb_fcs_sop_err:1;
		uint64_t peb_jump_def_err:1;
		uint64_t peb_ext_hdr_def_err:1;
#else
		uint64_t peb_ext_hdr_def_err:1;
		uint64_t peb_jump_def_err:1;
		uint64_t peb_fcs_sop_err:1;
		uint64_t peb_pse_fifo_err:1;
		uint64_t peb_pad_err:1;
		uint64_t peb_trunc_err:1;
		uint64_t peb_subd_addr_err:1;
		uint64_t peb_subd_size_err:1;
		uint64_t peb_max_link_err:1;
		uint64_t peb_macx_cfg_wr_err:1;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_pko_peb_err_int_s cn73xx;
	struct cvmx_pko_peb_err_int_s cn75xx;
	struct cvmx_pko_peb_err_int_s cn78xx;
	struct cvmx_pko_peb_err_int_s cn78xxp2;
};
typedef union cvmx_pko_peb_err_int cvmx_pko_peb_err_int_t;

union cvmx_pko_peb_ext_hdr_def_err_info {
	uint64_t u64;
	struct cvmx_pko_peb_ext_hdr_def_err_info_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t val:1;
		uint64_t fifo:7;
		uint64_t chan:12;
#else
		uint64_t chan:12;
		uint64_t fifo:7;
		uint64_t val:1;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_peb_ext_hdr_def_err_info_s cn73xx;
	struct cvmx_pko_peb_ext_hdr_def_err_info_s cn75xx;
	struct cvmx_pko_peb_ext_hdr_def_err_info_s cn78xx;
	struct cvmx_pko_peb_ext_hdr_def_err_info_s cn78xxp2;
};
typedef union cvmx_pko_peb_ext_hdr_def_err_info cvmx_pko_peb_ext_hdr_def_err_info_t;

union cvmx_pko_peb_fcs_sop_err_info {
	uint64_t u64;
	struct cvmx_pko_peb_fcs_sop_err_info_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t val:1;
		uint64_t fifo:7;
		uint64_t chan:12;
#else
		uint64_t chan:12;
		uint64_t fifo:7;
		uint64_t val:1;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_peb_fcs_sop_err_info_s cn73xx;
	struct cvmx_pko_peb_fcs_sop_err_info_s cn75xx;
	struct cvmx_pko_peb_fcs_sop_err_info_s cn78xx;
	struct cvmx_pko_peb_fcs_sop_err_info_s cn78xxp2;
};
typedef union cvmx_pko_peb_fcs_sop_err_info cvmx_pko_peb_fcs_sop_err_info_t;

union cvmx_pko_peb_jump_def_err_info {
	uint64_t u64;
	struct cvmx_pko_peb_jump_def_err_info_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t val:1;
		uint64_t fifo:7;
		uint64_t chan:12;
#else
		uint64_t chan:12;
		uint64_t fifo:7;
		uint64_t val:1;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_peb_jump_def_err_info_s cn73xx;
	struct cvmx_pko_peb_jump_def_err_info_s cn75xx;
	struct cvmx_pko_peb_jump_def_err_info_s cn78xx;
	struct cvmx_pko_peb_jump_def_err_info_s cn78xxp2;
};
typedef union cvmx_pko_peb_jump_def_err_info cvmx_pko_peb_jump_def_err_info_t;

union cvmx_pko_peb_macx_cfg_wr_err_info {
	uint64_t u64;
	struct cvmx_pko_peb_macx_cfg_wr_err_info_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t val:1;
		uint64_t mac:7;
#else
		uint64_t mac:7;
		uint64_t val:1;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_pko_peb_macx_cfg_wr_err_info_s cn73xx;
	struct cvmx_pko_peb_macx_cfg_wr_err_info_s cn75xx;
	struct cvmx_pko_peb_macx_cfg_wr_err_info_s cn78xx;
	struct cvmx_pko_peb_macx_cfg_wr_err_info_s cn78xxp2;
};
typedef union cvmx_pko_peb_macx_cfg_wr_err_info cvmx_pko_peb_macx_cfg_wr_err_info_t;

union cvmx_pko_peb_max_link_err_info {
	uint64_t u64;
	struct cvmx_pko_peb_max_link_err_info_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t val:1;
		uint64_t fifo:7;
		uint64_t chan:12;
#else
		uint64_t chan:12;
		uint64_t fifo:7;
		uint64_t val:1;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_peb_max_link_err_info_s cn73xx;
	struct cvmx_pko_peb_max_link_err_info_s cn75xx;
	struct cvmx_pko_peb_max_link_err_info_s cn78xx;
	struct cvmx_pko_peb_max_link_err_info_s cn78xxp2;
};
typedef union cvmx_pko_peb_max_link_err_info cvmx_pko_peb_max_link_err_info_t;

union cvmx_pko_peb_ncb_cfg {
	uint64_t u64;
	struct cvmx_pko_peb_ncb_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t rstp:1;
#else
		uint64_t rstp:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_pko_peb_ncb_cfg_s cn73xx;
	struct cvmx_pko_peb_ncb_cfg_s cn75xx;
	struct cvmx_pko_peb_ncb_cfg_s cn78xx;
	struct cvmx_pko_peb_ncb_cfg_s cn78xxp2;
};
typedef union cvmx_pko_peb_ncb_cfg cvmx_pko_peb_ncb_cfg_t;

union cvmx_pko_peb_pad_err_info {
	uint64_t u64;
	struct cvmx_pko_peb_pad_err_info_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t val:1;
		uint64_t fifo:7;
		uint64_t chan:12;
#else
		uint64_t chan:12;
		uint64_t fifo:7;
		uint64_t val:1;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_peb_pad_err_info_s cn73xx;
	struct cvmx_pko_peb_pad_err_info_s cn75xx;
	struct cvmx_pko_peb_pad_err_info_s cn78xx;
	struct cvmx_pko_peb_pad_err_info_s cn78xxp2;
};
typedef union cvmx_pko_peb_pad_err_info cvmx_pko_peb_pad_err_info_t;

union cvmx_pko_peb_pse_fifo_err_info {
	uint64_t u64;
	struct cvmx_pko_peb_pse_fifo_err_info_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t val:1;
		uint64_t fifo:7;
		uint64_t chan:12;
#else
		uint64_t chan:12;
		uint64_t fifo:7;
		uint64_t val:1;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_peb_pse_fifo_err_info_s cn73xx;
	struct cvmx_pko_peb_pse_fifo_err_info_s cn75xx;
	struct cvmx_pko_peb_pse_fifo_err_info_s cn78xx;
	struct cvmx_pko_peb_pse_fifo_err_info_s cn78xxp2;
};
typedef union cvmx_pko_peb_pse_fifo_err_info cvmx_pko_peb_pse_fifo_err_info_t;

union cvmx_pko_peb_subd_addr_err_info {
	uint64_t u64;
	struct cvmx_pko_peb_subd_addr_err_info_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t val:1;
		uint64_t fifo:7;
		uint64_t chan:12;
#else
		uint64_t chan:12;
		uint64_t fifo:7;
		uint64_t val:1;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_peb_subd_addr_err_info_s cn73xx;
	struct cvmx_pko_peb_subd_addr_err_info_s cn75xx;
	struct cvmx_pko_peb_subd_addr_err_info_s cn78xx;
	struct cvmx_pko_peb_subd_addr_err_info_s cn78xxp2;
};
typedef union cvmx_pko_peb_subd_addr_err_info cvmx_pko_peb_subd_addr_err_info_t;

union cvmx_pko_peb_subd_size_err_info {
	uint64_t u64;
	struct cvmx_pko_peb_subd_size_err_info_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t val:1;
		uint64_t fifo:7;
		uint64_t chan:12;
#else
		uint64_t chan:12;
		uint64_t fifo:7;
		uint64_t val:1;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_peb_subd_size_err_info_s cn73xx;
	struct cvmx_pko_peb_subd_size_err_info_s cn75xx;
	struct cvmx_pko_peb_subd_size_err_info_s cn78xx;
	struct cvmx_pko_peb_subd_size_err_info_s cn78xxp2;
};
typedef union cvmx_pko_peb_subd_size_err_info cvmx_pko_peb_subd_size_err_info_t;

union cvmx_pko_peb_trunc_err_info {
	uint64_t u64;
	struct cvmx_pko_peb_trunc_err_info_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t val:1;
		uint64_t fifo:7;
		uint64_t chan:12;
#else
		uint64_t chan:12;
		uint64_t fifo:7;
		uint64_t val:1;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_peb_trunc_err_info_s cn73xx;
	struct cvmx_pko_peb_trunc_err_info_s cn75xx;
	struct cvmx_pko_peb_trunc_err_info_s cn78xx;
	struct cvmx_pko_peb_trunc_err_info_s cn78xxp2;
};
typedef union cvmx_pko_peb_trunc_err_info cvmx_pko_peb_trunc_err_info_t;

union cvmx_pko_peb_tso_cfg {
	uint64_t u64;
	struct cvmx_pko_peb_tso_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_44_63:20;
		uint64_t fsf:12;
		uint64_t reserved_28_31:4;
		uint64_t msf:12;
		uint64_t reserved_12_15:4;
		uint64_t lsf:12;
#else
		uint64_t lsf:12;
		uint64_t reserved_12_15:4;
		uint64_t msf:12;
		uint64_t reserved_28_31:4;
		uint64_t fsf:12;
		uint64_t reserved_44_63:20;
#endif
	} s;
	struct cvmx_pko_peb_tso_cfg_s cn73xx;
	struct cvmx_pko_peb_tso_cfg_s cn75xx;
	struct cvmx_pko_peb_tso_cfg_s cn78xx;
	struct cvmx_pko_peb_tso_cfg_s cn78xxp2;
};
typedef union cvmx_pko_peb_tso_cfg cvmx_pko_peb_tso_cfg_t;

union cvmx_pko_pq_csr_bus_debug {
	uint64_t u64;
	struct cvmx_pko_pq_csr_bus_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t csr_bus_debug:64;
#else
		uint64_t csr_bus_debug:64;
#endif
	} s;
	struct cvmx_pko_pq_csr_bus_debug_s cn73xx;
	struct cvmx_pko_pq_csr_bus_debug_s cn75xx;
	struct cvmx_pko_pq_csr_bus_debug_s cn78xx;
	struct cvmx_pko_pq_csr_bus_debug_s cn78xxp2;
};
typedef union cvmx_pko_pq_csr_bus_debug cvmx_pko_pq_csr_bus_debug_t;

union cvmx_pko_pq_debug_green {
	uint64_t u64;
	struct cvmx_pko_pq_debug_green_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t g_valid:32;
		uint64_t cred_ok_n:32;
#else
		uint64_t cred_ok_n:32;
		uint64_t g_valid:32;
#endif
	} s;
	struct cvmx_pko_pq_debug_green_s cn73xx;
	struct cvmx_pko_pq_debug_green_s cn75xx;
	struct cvmx_pko_pq_debug_green_s cn78xx;
	struct cvmx_pko_pq_debug_green_s cn78xxp2;
};
typedef union cvmx_pko_pq_debug_green cvmx_pko_pq_debug_green_t;

union cvmx_pko_pq_debug_links {
	uint64_t u64;
	struct cvmx_pko_pq_debug_links_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t links_ready:32;
		uint64_t peb_lnk_rdy_ir:32;
#else
		uint64_t peb_lnk_rdy_ir:32;
		uint64_t links_ready:32;
#endif
	} s;
	struct cvmx_pko_pq_debug_links_s cn73xx;
	struct cvmx_pko_pq_debug_links_s cn75xx;
	struct cvmx_pko_pq_debug_links_s cn78xx;
	struct cvmx_pko_pq_debug_links_s cn78xxp2;
};
typedef union cvmx_pko_pq_debug_links cvmx_pko_pq_debug_links_t;

union cvmx_pko_pq_debug_yellow {
	uint64_t u64;
	struct cvmx_pko_pq_debug_yellow_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t y_valid:32;
		uint64_t reserved_28_31:4;
		uint64_t link_vv:28;
#else
		uint64_t link_vv:28;
		uint64_t reserved_28_31:4;
		uint64_t y_valid:32;
#endif
	} s;
	struct cvmx_pko_pq_debug_yellow_s cn73xx;
	struct cvmx_pko_pq_debug_yellow_s cn75xx;
	struct cvmx_pko_pq_debug_yellow_s cn78xx;
	struct cvmx_pko_pq_debug_yellow_s cn78xxp2;
};
typedef union cvmx_pko_pq_debug_yellow cvmx_pko_pq_debug_yellow_t;

union cvmx_pko_pqa_debug {
	uint64_t u64;
	struct cvmx_pko_pqa_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dbg_vec:64;
#else
		uint64_t dbg_vec:64;
#endif
	} s;
	struct cvmx_pko_pqa_debug_s cn73xx;
	struct cvmx_pko_pqa_debug_s cn75xx;
	struct cvmx_pko_pqa_debug_s cn78xx;
	struct cvmx_pko_pqa_debug_s cn78xxp2;
};
typedef union cvmx_pko_pqa_debug cvmx_pko_pqa_debug_t;

union cvmx_pko_pqb_debug {
	uint64_t u64;
	struct cvmx_pko_pqb_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dbg_vec:64;
#else
		uint64_t dbg_vec:64;
#endif
	} s;
	struct cvmx_pko_pqb_debug_s cn73xx;
	struct cvmx_pko_pqb_debug_s cn75xx;
	struct cvmx_pko_pqb_debug_s cn78xx;
	struct cvmx_pko_pqb_debug_s cn78xxp2;
};
typedef union cvmx_pko_pqb_debug cvmx_pko_pqb_debug_t;

union cvmx_pko_pse_dq_bist_status {
	uint64_t u64;
	struct cvmx_pko_pse_dq_bist_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t rt7_sram:1;
		uint64_t rt6_sram:1;
		uint64_t rt5_sram:1;
		uint64_t reserved_4_4:1;
		uint64_t rt3_sram:1;
		uint64_t rt2_sram:1;
		uint64_t rt1_sram:1;
		uint64_t rt0_sram:1;
#else
		uint64_t rt0_sram:1;
		uint64_t rt1_sram:1;
		uint64_t rt2_sram:1;
		uint64_t rt3_sram:1;
		uint64_t reserved_4_4:1;
		uint64_t rt5_sram:1;
		uint64_t rt6_sram:1;
		uint64_t rt7_sram:1;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_pko_pse_dq_bist_status_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_5_63:59;
		uint64_t wt_sram:1;
		uint64_t reserved_2_3:2;
		uint64_t rt1_sram:1;
		uint64_t rt0_sram:1;
#else
		uint64_t rt0_sram:1;
		uint64_t rt1_sram:1;
		uint64_t reserved_2_3:2;
		uint64_t wt_sram:1;
		uint64_t reserved_5_63:59;
#endif
	} cn73xx;
	struct cvmx_pko_pse_dq_bist_status_cn73xx cn75xx;
	struct cvmx_pko_pse_dq_bist_status_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t wt_sram:1;
		uint64_t rt7_sram:1;
		uint64_t rt6_sram:1;
		uint64_t rt5_sram:1;
		uint64_t rt4_sram:1;
		uint64_t rt3_sram:1;
		uint64_t rt2_sram:1;
		uint64_t rt1_sram:1;
		uint64_t rt0_sram:1;
#else
		uint64_t rt0_sram:1;
		uint64_t rt1_sram:1;
		uint64_t rt2_sram:1;
		uint64_t rt3_sram:1;
		uint64_t rt4_sram:1;
		uint64_t rt5_sram:1;
		uint64_t rt6_sram:1;
		uint64_t rt7_sram:1;
		uint64_t wt_sram:1;
		uint64_t reserved_9_63:55;
#endif
	} cn78xx;
	struct cvmx_pko_pse_dq_bist_status_cn78xx cn78xxp2;
};
typedef union cvmx_pko_pse_dq_bist_status cvmx_pko_pse_dq_bist_status_t;

union cvmx_pko_pse_dq_ecc_ctl0 {
	uint64_t u64;
	struct cvmx_pko_pse_dq_ecc_ctl0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dq_wt_ram_flip:2;
		uint64_t dq_wt_ram_cdis:1;
		uint64_t dq_rt7_flip:2;
		uint64_t dq_rt7_cdis:1;
		uint64_t dq_rt6_flip:2;
		uint64_t dq_rt6_cdis:1;
		uint64_t dq_rt5_flip:2;
		uint64_t dq_rt5_cdis:1;
		uint64_t dq_rt4_flip:2;
		uint64_t dq_rt4_cdis:1;
		uint64_t dq_rt3_flip:2;
		uint64_t dq_rt3_cdis:1;
		uint64_t dq_rt2_flip:2;
		uint64_t dq_rt2_cdis:1;
		uint64_t dq_rt1_flip:2;
		uint64_t dq_rt1_cdis:1;
		uint64_t dq_rt0_flip:2;
		uint64_t dq_rt0_cdis:1;
		uint64_t reserved_0_36:37;
#else
		uint64_t reserved_0_36:37;
		uint64_t dq_rt0_cdis:1;
		uint64_t dq_rt0_flip:2;
		uint64_t dq_rt1_cdis:1;
		uint64_t dq_rt1_flip:2;
		uint64_t dq_rt2_cdis:1;
		uint64_t dq_rt2_flip:2;
		uint64_t dq_rt3_cdis:1;
		uint64_t dq_rt3_flip:2;
		uint64_t dq_rt4_cdis:1;
		uint64_t dq_rt4_flip:2;
		uint64_t dq_rt5_cdis:1;
		uint64_t dq_rt5_flip:2;
		uint64_t dq_rt6_cdis:1;
		uint64_t dq_rt6_flip:2;
		uint64_t dq_rt7_cdis:1;
		uint64_t dq_rt7_flip:2;
		uint64_t dq_wt_ram_cdis:1;
		uint64_t dq_wt_ram_flip:2;
#endif
	} s;
	struct cvmx_pko_pse_dq_ecc_ctl0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dq_wt_ram_flip:2;
		uint64_t dq_wt_ram_cdis:1;
		uint64_t reserved_43_60:18;
		uint64_t dq_rt1_flip:2;
		uint64_t dq_rt1_cdis:1;
		uint64_t dq_rt0_flip:2;
		uint64_t dq_rt0_cdis:1;
		uint64_t reserved_0_36:37;
#else
		uint64_t reserved_0_36:37;
		uint64_t dq_rt0_cdis:1;
		uint64_t dq_rt0_flip:2;
		uint64_t dq_rt1_cdis:1;
		uint64_t dq_rt1_flip:2;
		uint64_t reserved_43_60:18;
		uint64_t dq_wt_ram_cdis:1;
		uint64_t dq_wt_ram_flip:2;
#endif
	} cn73xx;
	struct cvmx_pko_pse_dq_ecc_ctl0_cn73xx cn75xx;
	struct cvmx_pko_pse_dq_ecc_ctl0_s cn78xx;
	struct cvmx_pko_pse_dq_ecc_ctl0_s cn78xxp2;
};
typedef union cvmx_pko_pse_dq_ecc_ctl0 cvmx_pko_pse_dq_ecc_ctl0_t;

union cvmx_pko_pse_dq_ecc_dbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pse_dq_ecc_dbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dq_wt_ram_dbe:1;
		uint64_t dq_rt7_dbe:1;
		uint64_t dq_rt6_dbe:1;
		uint64_t dq_rt5_dbe:1;
		uint64_t dq_rt4_dbe:1;
		uint64_t dq_rt3_dbe:1;
		uint64_t dq_rt2_dbe:1;
		uint64_t dq_rt1_dbe:1;
		uint64_t dq_rt0_dbe:1;
		uint64_t reserved_0_54:55;
#else
		uint64_t reserved_0_54:55;
		uint64_t dq_rt0_dbe:1;
		uint64_t dq_rt1_dbe:1;
		uint64_t dq_rt2_dbe:1;
		uint64_t dq_rt3_dbe:1;
		uint64_t dq_rt4_dbe:1;
		uint64_t dq_rt5_dbe:1;
		uint64_t dq_rt6_dbe:1;
		uint64_t dq_rt7_dbe:1;
		uint64_t dq_wt_ram_dbe:1;
#endif
	} s;
	struct cvmx_pko_pse_dq_ecc_dbe_sts0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dq_wt_ram_dbe:1;
		uint64_t reserved_57_62:6;
		uint64_t dq_rt1_dbe:1;
		uint64_t dq_rt0_dbe:1;
		uint64_t reserved_0_54:55;
#else
		uint64_t reserved_0_54:55;
		uint64_t dq_rt0_dbe:1;
		uint64_t dq_rt1_dbe:1;
		uint64_t reserved_57_62:6;
		uint64_t dq_wt_ram_dbe:1;
#endif
	} cn73xx;
	struct cvmx_pko_pse_dq_ecc_dbe_sts0_cn73xx cn75xx;
	struct cvmx_pko_pse_dq_ecc_dbe_sts0_s cn78xx;
	struct cvmx_pko_pse_dq_ecc_dbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pse_dq_ecc_dbe_sts0 cvmx_pko_pse_dq_ecc_dbe_sts0_t;

union cvmx_pko_pse_dq_ecc_dbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pse_dq_ecc_dbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pse_dq_dbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pse_dq_dbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pse_dq_ecc_dbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_pse_dq_ecc_dbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_pse_dq_ecc_dbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pse_dq_ecc_dbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pse_dq_ecc_dbe_sts_cmb0 cvmx_pko_pse_dq_ecc_dbe_sts_cmb0_t;

union cvmx_pko_pse_dq_ecc_sbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pse_dq_ecc_sbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dq_wt_ram_sbe:1;
		uint64_t dq_rt7_sbe:1;
		uint64_t dq_rt6_sbe:1;
		uint64_t dq_rt5_sbe:1;
		uint64_t dq_rt4_sbe:1;
		uint64_t dq_rt3_sbe:1;
		uint64_t dq_rt2_sbe:1;
		uint64_t dq_rt1_sbe:1;
		uint64_t dq_rt0_sbe:1;
		uint64_t reserved_0_54:55;
#else
		uint64_t reserved_0_54:55;
		uint64_t dq_rt0_sbe:1;
		uint64_t dq_rt1_sbe:1;
		uint64_t dq_rt2_sbe:1;
		uint64_t dq_rt3_sbe:1;
		uint64_t dq_rt4_sbe:1;
		uint64_t dq_rt5_sbe:1;
		uint64_t dq_rt6_sbe:1;
		uint64_t dq_rt7_sbe:1;
		uint64_t dq_wt_ram_sbe:1;
#endif
	} s;
	struct cvmx_pko_pse_dq_ecc_sbe_sts0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t dq_wt_ram_sbe:1;
		uint64_t reserved_57_62:6;
		uint64_t dq_rt1_sbe:1;
		uint64_t dq_rt0_sbe:1;
		uint64_t reserved_0_54:55;
#else
		uint64_t reserved_0_54:55;
		uint64_t dq_rt0_sbe:1;
		uint64_t dq_rt1_sbe:1;
		uint64_t reserved_57_62:6;
		uint64_t dq_wt_ram_sbe:1;
#endif
	} cn73xx;
	struct cvmx_pko_pse_dq_ecc_sbe_sts0_cn73xx cn75xx;
	struct cvmx_pko_pse_dq_ecc_sbe_sts0_s cn78xx;
	struct cvmx_pko_pse_dq_ecc_sbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pse_dq_ecc_sbe_sts0 cvmx_pko_pse_dq_ecc_sbe_sts0_t;

union cvmx_pko_pse_dq_ecc_sbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pse_dq_ecc_sbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pse_dq_sbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pse_dq_sbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pse_dq_ecc_sbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_pse_dq_ecc_sbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_pse_dq_ecc_sbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pse_dq_ecc_sbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pse_dq_ecc_sbe_sts_cmb0 cvmx_pko_pse_dq_ecc_sbe_sts_cmb0_t;

union cvmx_pko_pse_pq_bist_status {
	uint64_t u64;
	struct cvmx_pko_pse_pq_bist_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t tp_sram:1;
		uint64_t irq_fifo_sram:1;
		uint64_t wmd_sram:1;
		uint64_t wms_sram:1;
		uint64_t cxd_sram:1;
		uint64_t dqd_sram:1;
		uint64_t dqs_sram:1;
		uint64_t pqd_sram:1;
		uint64_t pqr_sram:1;
		uint64_t pqy_sram:1;
		uint64_t pqg_sram:1;
		uint64_t std_sram:1;
		uint64_t st_sram:1;
		uint64_t reserved_1_1:1;
		uint64_t cxs_sram:1;
#else
		uint64_t cxs_sram:1;
		uint64_t reserved_1_1:1;
		uint64_t st_sram:1;
		uint64_t std_sram:1;
		uint64_t pqg_sram:1;
		uint64_t pqy_sram:1;
		uint64_t pqr_sram:1;
		uint64_t pqd_sram:1;
		uint64_t dqs_sram:1;
		uint64_t dqd_sram:1;
		uint64_t cxd_sram:1;
		uint64_t wms_sram:1;
		uint64_t wmd_sram:1;
		uint64_t irq_fifo_sram:1;
		uint64_t tp_sram:1;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_pko_pse_pq_bist_status_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t tp_sram:1;
		uint64_t reserved_13_13:1;
		uint64_t wmd_sram:1;
		uint64_t reserved_11_11:1;
		uint64_t cxd_sram:1;
		uint64_t dqd_sram:1;
		uint64_t dqs_sram:1;
		uint64_t pqd_sram:1;
		uint64_t pqr_sram:1;
		uint64_t pqy_sram:1;
		uint64_t pqg_sram:1;
		uint64_t std_sram:1;
		uint64_t st_sram:1;
		uint64_t reserved_1_1:1;
		uint64_t cxs_sram:1;
#else
		uint64_t cxs_sram:1;
		uint64_t reserved_1_1:1;
		uint64_t st_sram:1;
		uint64_t std_sram:1;
		uint64_t pqg_sram:1;
		uint64_t pqy_sram:1;
		uint64_t pqr_sram:1;
		uint64_t pqd_sram:1;
		uint64_t dqs_sram:1;
		uint64_t dqd_sram:1;
		uint64_t cxd_sram:1;
		uint64_t reserved_11_11:1;
		uint64_t wmd_sram:1;
		uint64_t reserved_13_13:1;
		uint64_t tp_sram:1;
		uint64_t reserved_15_63:49;
#endif
	} cn73xx;
	struct cvmx_pko_pse_pq_bist_status_cn73xx cn75xx;
	struct cvmx_pko_pse_pq_bist_status_s cn78xx;
	struct cvmx_pko_pse_pq_bist_status_s cn78xxp2;
};
typedef union cvmx_pko_pse_pq_bist_status cvmx_pko_pse_pq_bist_status_t;

union cvmx_pko_pse_pq_ecc_ctl0 {
	uint64_t u64;
	struct cvmx_pko_pse_pq_ecc_ctl0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pq_cxs_ram_flip:2;
		uint64_t pq_cxs_ram_cdis:1;
		uint64_t pq_cxd_ram_flip:2;
		uint64_t pq_cxd_ram_cdis:1;
		uint64_t irq_fifo_sram_flip:2;
		uint64_t irq_fifo_sram_cdis:1;
		uint64_t tp_sram_flip:2;
		uint64_t tp_sram_cdis:1;
		uint64_t pq_std_ram_flip:2;
		uint64_t pq_std_ram_cdis:1;
		uint64_t pq_st_ram_flip:2;
		uint64_t pq_st_ram_cdis:1;
		uint64_t pq_wmd_ram_flip:2;
		uint64_t pq_wmd_ram_cdis:1;
		uint64_t pq_wms_ram_flip:2;
		uint64_t pq_wms_ram_cdis:1;
		uint64_t reserved_0_39:40;
#else
		uint64_t reserved_0_39:40;
		uint64_t pq_wms_ram_cdis:1;
		uint64_t pq_wms_ram_flip:2;
		uint64_t pq_wmd_ram_cdis:1;
		uint64_t pq_wmd_ram_flip:2;
		uint64_t pq_st_ram_cdis:1;
		uint64_t pq_st_ram_flip:2;
		uint64_t pq_std_ram_cdis:1;
		uint64_t pq_std_ram_flip:2;
		uint64_t tp_sram_cdis:1;
		uint64_t tp_sram_flip:2;
		uint64_t irq_fifo_sram_cdis:1;
		uint64_t irq_fifo_sram_flip:2;
		uint64_t pq_cxd_ram_cdis:1;
		uint64_t pq_cxd_ram_flip:2;
		uint64_t pq_cxs_ram_cdis:1;
		uint64_t pq_cxs_ram_flip:2;
#endif
	} s;
	struct cvmx_pko_pse_pq_ecc_ctl0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pq_cxs_ram_flip:2;
		uint64_t pq_cxs_ram_cdis:1;
		uint64_t pq_cxd_ram_flip:2;
		uint64_t pq_cxd_ram_cdis:1;
		uint64_t reserved_55_57:3;
		uint64_t tp_sram_flip:2;
		uint64_t tp_sram_cdis:1;
		uint64_t pq_std_ram_flip:2;
		uint64_t pq_std_ram_cdis:1;
		uint64_t pq_st_ram_flip:2;
		uint64_t pq_st_ram_cdis:1;
		uint64_t pq_wmd_ram_flip:2;
		uint64_t pq_wmd_ram_cdis:1;
		uint64_t reserved_0_42:43;
#else
		uint64_t reserved_0_42:43;
		uint64_t pq_wmd_ram_cdis:1;
		uint64_t pq_wmd_ram_flip:2;
		uint64_t pq_st_ram_cdis:1;
		uint64_t pq_st_ram_flip:2;
		uint64_t pq_std_ram_cdis:1;
		uint64_t pq_std_ram_flip:2;
		uint64_t tp_sram_cdis:1;
		uint64_t tp_sram_flip:2;
		uint64_t reserved_55_57:3;
		uint64_t pq_cxd_ram_cdis:1;
		uint64_t pq_cxd_ram_flip:2;
		uint64_t pq_cxs_ram_cdis:1;
		uint64_t pq_cxs_ram_flip:2;
#endif
	} cn73xx;
	struct cvmx_pko_pse_pq_ecc_ctl0_cn73xx cn75xx;
	struct cvmx_pko_pse_pq_ecc_ctl0_s cn78xx;
	struct cvmx_pko_pse_pq_ecc_ctl0_s cn78xxp2;
};
typedef union cvmx_pko_pse_pq_ecc_ctl0 cvmx_pko_pse_pq_ecc_ctl0_t;

union cvmx_pko_pse_pq_ecc_dbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pse_pq_ecc_dbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pq_cxs_ram_dbe:1;
		uint64_t pq_cxd_ram_dbe:1;
		uint64_t irq_fifo_sram_dbe:1;
		uint64_t tp_sram_dbe:1;
		uint64_t pq_std_ram_dbe:1;
		uint64_t pq_st_ram_dbe:1;
		uint64_t pq_wmd_ram_dbe:1;
		uint64_t pq_wms_ram_dbe:1;
		uint64_t reserved_0_55:56;
#else
		uint64_t reserved_0_55:56;
		uint64_t pq_wms_ram_dbe:1;
		uint64_t pq_wmd_ram_dbe:1;
		uint64_t pq_st_ram_dbe:1;
		uint64_t pq_std_ram_dbe:1;
		uint64_t tp_sram_dbe:1;
		uint64_t irq_fifo_sram_dbe:1;
		uint64_t pq_cxd_ram_dbe:1;
		uint64_t pq_cxs_ram_dbe:1;
#endif
	} s;
	struct cvmx_pko_pse_pq_ecc_dbe_sts0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pq_cxs_ram_dbe:1;
		uint64_t pq_cxd_ram_dbe:1;
		uint64_t reserved_61_61:1;
		uint64_t tp_sram_dbe:1;
		uint64_t pq_std_ram_dbe:1;
		uint64_t pq_st_ram_dbe:1;
		uint64_t pq_wmd_ram_dbe:1;
		uint64_t reserved_0_56:57;
#else
		uint64_t reserved_0_56:57;
		uint64_t pq_wmd_ram_dbe:1;
		uint64_t pq_st_ram_dbe:1;
		uint64_t pq_std_ram_dbe:1;
		uint64_t tp_sram_dbe:1;
		uint64_t reserved_61_61:1;
		uint64_t pq_cxd_ram_dbe:1;
		uint64_t pq_cxs_ram_dbe:1;
#endif
	} cn73xx;
	struct cvmx_pko_pse_pq_ecc_dbe_sts0_cn73xx cn75xx;
	struct cvmx_pko_pse_pq_ecc_dbe_sts0_s cn78xx;
	struct cvmx_pko_pse_pq_ecc_dbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pse_pq_ecc_dbe_sts0 cvmx_pko_pse_pq_ecc_dbe_sts0_t;

union cvmx_pko_pse_pq_ecc_dbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pse_pq_ecc_dbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pse_pq_dbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pse_pq_dbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pse_pq_ecc_dbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_pse_pq_ecc_dbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_pse_pq_ecc_dbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pse_pq_ecc_dbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pse_pq_ecc_dbe_sts_cmb0 cvmx_pko_pse_pq_ecc_dbe_sts_cmb0_t;

union cvmx_pko_pse_pq_ecc_sbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pse_pq_ecc_sbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pq_cxs_ram_sbe:1;
		uint64_t pq_cxd_ram_sbe:1;
		uint64_t irq_fifo_sram_sbe:1;
		uint64_t tp_sram_sbe:1;
		uint64_t pq_std_ram_sbe:1;
		uint64_t pq_st_ram_sbe:1;
		uint64_t pq_wmd_ram_sbe:1;
		uint64_t pq_wms_ram_sbe:1;
		uint64_t reserved_0_55:56;
#else
		uint64_t reserved_0_55:56;
		uint64_t pq_wms_ram_sbe:1;
		uint64_t pq_wmd_ram_sbe:1;
		uint64_t pq_st_ram_sbe:1;
		uint64_t pq_std_ram_sbe:1;
		uint64_t tp_sram_sbe:1;
		uint64_t irq_fifo_sram_sbe:1;
		uint64_t pq_cxd_ram_sbe:1;
		uint64_t pq_cxs_ram_sbe:1;
#endif
	} s;
	struct cvmx_pko_pse_pq_ecc_sbe_sts0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pq_cxs_ram_sbe:1;
		uint64_t pq_cxd_ram_sbe:1;
		uint64_t reserved_61_61:1;
		uint64_t tp_sram_sbe:1;
		uint64_t pq_std_ram_sbe:1;
		uint64_t pq_st_ram_sbe:1;
		uint64_t pq_wmd_ram_sbe:1;
		uint64_t reserved_0_56:57;
#else
		uint64_t reserved_0_56:57;
		uint64_t pq_wmd_ram_sbe:1;
		uint64_t pq_st_ram_sbe:1;
		uint64_t pq_std_ram_sbe:1;
		uint64_t tp_sram_sbe:1;
		uint64_t reserved_61_61:1;
		uint64_t pq_cxd_ram_sbe:1;
		uint64_t pq_cxs_ram_sbe:1;
#endif
	} cn73xx;
	struct cvmx_pko_pse_pq_ecc_sbe_sts0_cn73xx cn75xx;
	struct cvmx_pko_pse_pq_ecc_sbe_sts0_s cn78xx;
	struct cvmx_pko_pse_pq_ecc_sbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pse_pq_ecc_sbe_sts0 cvmx_pko_pse_pq_ecc_sbe_sts0_t;

union cvmx_pko_pse_pq_ecc_sbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pse_pq_ecc_sbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pse_pq_sbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pse_pq_sbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pse_pq_ecc_sbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_pse_pq_ecc_sbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_pse_pq_ecc_sbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pse_pq_ecc_sbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pse_pq_ecc_sbe_sts_cmb0 cvmx_pko_pse_pq_ecc_sbe_sts_cmb0_t;

union cvmx_pko_pse_sq1_bist_status {
	uint64_t u64;
	struct cvmx_pko_pse_sq1_bist_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_29_63:35;
		uint64_t sc_sram:1;
		uint64_t pc_sram:1;
		uint64_t xon_sram:1;
		uint64_t cc_sram:1;
		uint64_t vc1_sram:1;
		uint64_t vc0_sram:1;
		uint64_t reserved_21_22:2;
		uint64_t tp1_sram:1;
		uint64_t tp0_sram:1;
		uint64_t xo_sram:1;
		uint64_t rt_sram:1;
		uint64_t reserved_9_16:8;
		uint64_t tw1_cmd_fifo:1;
		uint64_t std_sram:1;
		uint64_t sts_sram:1;
		uint64_t tw0_cmd_fifo:1;
		uint64_t cxd_sram:1;
		uint64_t cxs_sram:1;
		uint64_t nt_sram:1;
		uint64_t pt_sram:1;
		uint64_t wt_sram:1;
#else
		uint64_t wt_sram:1;
		uint64_t pt_sram:1;
		uint64_t nt_sram:1;
		uint64_t cxs_sram:1;
		uint64_t cxd_sram:1;
		uint64_t tw0_cmd_fifo:1;
		uint64_t sts_sram:1;
		uint64_t std_sram:1;
		uint64_t tw1_cmd_fifo:1;
		uint64_t reserved_9_16:8;
		uint64_t rt_sram:1;
		uint64_t xo_sram:1;
		uint64_t tp0_sram:1;
		uint64_t tp1_sram:1;
		uint64_t reserved_21_22:2;
		uint64_t vc0_sram:1;
		uint64_t vc1_sram:1;
		uint64_t cc_sram:1;
		uint64_t xon_sram:1;
		uint64_t pc_sram:1;
		uint64_t sc_sram:1;
		uint64_t reserved_29_63:35;
#endif
	} s;
	struct cvmx_pko_pse_sq1_bist_status_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_29_63:35;
		uint64_t sc_sram:1;
		uint64_t pc_sram:1;
		uint64_t xon_sram:1;
		uint64_t cc_sram:1;
		uint64_t vc1_sram:1;
		uint64_t vc0_sram:1;
		uint64_t reserved_20_22:3;
		uint64_t tp0_sram:1;
		uint64_t xo_sram:1;
		uint64_t rt_sram:1;
		uint64_t reserved_9_16:8;
		uint64_t tw1_cmd_fifo:1;
		uint64_t std_sram:1;
		uint64_t sts_sram:1;
		uint64_t tw0_cmd_fifo:1;
		uint64_t cxd_sram:1;
		uint64_t cxs_sram:1;
		uint64_t nt_sram:1;
		uint64_t pt_sram:1;
		uint64_t wt_sram:1;
#else
		uint64_t wt_sram:1;
		uint64_t pt_sram:1;
		uint64_t nt_sram:1;
		uint64_t cxs_sram:1;
		uint64_t cxd_sram:1;
		uint64_t tw0_cmd_fifo:1;
		uint64_t sts_sram:1;
		uint64_t std_sram:1;
		uint64_t tw1_cmd_fifo:1;
		uint64_t reserved_9_16:8;
		uint64_t rt_sram:1;
		uint64_t xo_sram:1;
		uint64_t tp0_sram:1;
		uint64_t reserved_20_22:3;
		uint64_t vc0_sram:1;
		uint64_t vc1_sram:1;
		uint64_t cc_sram:1;
		uint64_t xon_sram:1;
		uint64_t pc_sram:1;
		uint64_t sc_sram:1;
		uint64_t reserved_29_63:35;
#endif
	} cn73xx;
	struct cvmx_pko_pse_sq1_bist_status_cn73xx cn75xx;
	struct cvmx_pko_pse_sq1_bist_status_s cn78xx;
	struct cvmx_pko_pse_sq1_bist_status_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq1_bist_status cvmx_pko_pse_sq1_bist_status_t;

union cvmx_pko_pse_sq1_ecc_ctl0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq1_ecc_ctl0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t cxs_ram_flip:2;
		uint64_t cxs_ram_cdis:1;
		uint64_t cxd_ram_flip:2;
		uint64_t cxd_ram_cdis:1;
		uint64_t vc1_sram_flip:2;
		uint64_t vc1_sram_cdis:1;
		uint64_t vc0_sram_flip:2;
		uint64_t vc0_sram_cdis:1;
		uint64_t sq_pt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t rt_ram_cdis:1;
		uint64_t pc_ram_flip:2;
		uint64_t pc_ram_cdis:1;
		uint64_t tw1_cmd_fifo_ram_flip:2;
		uint64_t tw1_cmd_fifo_ram_cdis:1;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t tp1_sram_flip:2;
		uint64_t tp1_sram_cdis:1;
		uint64_t tp0_sram_flip:2;
		uint64_t tp0_sram_cdis:1;
		uint64_t sts1_ram_flip:2;
		uint64_t sts1_ram_cdis:1;
		uint64_t sts0_ram_flip:2;
		uint64_t sts0_ram_cdis:1;
		uint64_t std1_ram_flip:2;
		uint64_t std1_ram_cdis:1;
		uint64_t std0_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t sc_ram_cdis:1;
		uint64_t reserved_0_9:10;
#else
		uint64_t reserved_0_9:10;
		uint64_t sc_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t std0_ram_flip:2;
		uint64_t std1_ram_cdis:1;
		uint64_t std1_ram_flip:2;
		uint64_t sts0_ram_cdis:1;
		uint64_t sts0_ram_flip:2;
		uint64_t sts1_ram_cdis:1;
		uint64_t sts1_ram_flip:2;
		uint64_t tp0_sram_cdis:1;
		uint64_t tp0_sram_flip:2;
		uint64_t tp1_sram_cdis:1;
		uint64_t tp1_sram_flip:2;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t tw1_cmd_fifo_ram_cdis:1;
		uint64_t tw1_cmd_fifo_ram_flip:2;
		uint64_t pc_ram_cdis:1;
		uint64_t pc_ram_flip:2;
		uint64_t rt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_pt_ram_flip:2;
		uint64_t vc0_sram_cdis:1;
		uint64_t vc0_sram_flip:2;
		uint64_t vc1_sram_cdis:1;
		uint64_t vc1_sram_flip:2;
		uint64_t cxd_ram_cdis:1;
		uint64_t cxd_ram_flip:2;
		uint64_t cxs_ram_cdis:1;
		uint64_t cxs_ram_flip:2;
#endif
	} s;
	struct cvmx_pko_pse_sq1_ecc_ctl0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t cxs_ram_flip:2;
		uint64_t cxs_ram_cdis:1;
		uint64_t cxd_ram_flip:2;
		uint64_t cxd_ram_cdis:1;
		uint64_t reserved_55_57:3;
		uint64_t vc0_sram_flip:2;
		uint64_t vc0_sram_cdis:1;
		uint64_t sq_pt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t rt_ram_cdis:1;
		uint64_t pc_ram_flip:2;
		uint64_t pc_ram_cdis:1;
		uint64_t reserved_37_39:3;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t reserved_31_33:3;
		uint64_t tp0_sram_flip:2;
		uint64_t tp0_sram_cdis:1;
		uint64_t reserved_25_27:3;
		uint64_t sts0_ram_flip:2;
		uint64_t sts0_ram_cdis:1;
		uint64_t reserved_19_21:3;
		uint64_t std0_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t sc_ram_cdis:1;
		uint64_t reserved_0_9:10;
#else
		uint64_t reserved_0_9:10;
		uint64_t sc_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t std0_ram_flip:2;
		uint64_t reserved_19_21:3;
		uint64_t sts0_ram_cdis:1;
		uint64_t sts0_ram_flip:2;
		uint64_t reserved_25_27:3;
		uint64_t tp0_sram_cdis:1;
		uint64_t tp0_sram_flip:2;
		uint64_t reserved_31_33:3;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t reserved_37_39:3;
		uint64_t pc_ram_cdis:1;
		uint64_t pc_ram_flip:2;
		uint64_t rt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_pt_ram_flip:2;
		uint64_t vc0_sram_cdis:1;
		uint64_t vc0_sram_flip:2;
		uint64_t reserved_55_57:3;
		uint64_t cxd_ram_cdis:1;
		uint64_t cxd_ram_flip:2;
		uint64_t cxs_ram_cdis:1;
		uint64_t cxs_ram_flip:2;
#endif
	} cn73xx;
	struct cvmx_pko_pse_sq1_ecc_ctl0_cn73xx cn75xx;
	struct cvmx_pko_pse_sq1_ecc_ctl0_s cn78xx;
	struct cvmx_pko_pse_sq1_ecc_ctl0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq1_ecc_ctl0 cvmx_pko_pse_sq1_ecc_ctl0_t;

union cvmx_pko_pse_sq1_ecc_dbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq1_ecc_dbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t cxs_ram_dbe:1;
		uint64_t cxd_ram_dbe:1;
		uint64_t vc1_sram_dbe:1;
		uint64_t vc0_sram_dbe:1;
		uint64_t sq_pt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t rt_ram_dbe:1;
		uint64_t pc_ram_dbe:1;
		uint64_t tw1_cmd_fifo_ram_dbe:1;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t tp1_sram_dbe:1;
		uint64_t tp0_sram_dbe:1;
		uint64_t sts1_ram_dbe:1;
		uint64_t sts0_ram_dbe:1;
		uint64_t std1_ram_dbe:1;
		uint64_t std0_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t sc_ram_dbe:1;
		uint64_t reserved_0_45:46;
#else
		uint64_t reserved_0_45:46;
		uint64_t sc_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t std0_ram_dbe:1;
		uint64_t std1_ram_dbe:1;
		uint64_t sts0_ram_dbe:1;
		uint64_t sts1_ram_dbe:1;
		uint64_t tp0_sram_dbe:1;
		uint64_t tp1_sram_dbe:1;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t tw1_cmd_fifo_ram_dbe:1;
		uint64_t pc_ram_dbe:1;
		uint64_t rt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t sq_pt_ram_dbe:1;
		uint64_t vc0_sram_dbe:1;
		uint64_t vc1_sram_dbe:1;
		uint64_t cxd_ram_dbe:1;
		uint64_t cxs_ram_dbe:1;
#endif
	} s;
	struct cvmx_pko_pse_sq1_ecc_dbe_sts0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t cxs_ram_dbe:1;
		uint64_t cxd_ram_dbe:1;
		uint64_t reserved_61_61:1;
		uint64_t vc0_sram_dbe:1;
		uint64_t sq_pt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t rt_ram_dbe:1;
		uint64_t pc_ram_dbe:1;
		uint64_t reserved_55_55:1;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t reserved_53_53:1;
		uint64_t tp0_sram_dbe:1;
		uint64_t reserved_51_51:1;
		uint64_t sts0_ram_dbe:1;
		uint64_t reserved_49_49:1;
		uint64_t std0_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t sc_ram_dbe:1;
		uint64_t reserved_0_45:46;
#else
		uint64_t reserved_0_45:46;
		uint64_t sc_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t std0_ram_dbe:1;
		uint64_t reserved_49_49:1;
		uint64_t sts0_ram_dbe:1;
		uint64_t reserved_51_51:1;
		uint64_t tp0_sram_dbe:1;
		uint64_t reserved_53_53:1;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t reserved_55_55:1;
		uint64_t pc_ram_dbe:1;
		uint64_t rt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t sq_pt_ram_dbe:1;
		uint64_t vc0_sram_dbe:1;
		uint64_t reserved_61_61:1;
		uint64_t cxd_ram_dbe:1;
		uint64_t cxs_ram_dbe:1;
#endif
	} cn73xx;
	struct cvmx_pko_pse_sq1_ecc_dbe_sts0_cn73xx cn75xx;
	struct cvmx_pko_pse_sq1_ecc_dbe_sts0_s cn78xx;
	struct cvmx_pko_pse_sq1_ecc_dbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq1_ecc_dbe_sts0 cvmx_pko_pse_sq1_ecc_dbe_sts0_t;

union cvmx_pko_pse_sq1_ecc_dbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq1_ecc_dbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pse_sq1_dbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pse_sq1_dbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pse_sq1_ecc_dbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_pse_sq1_ecc_dbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_pse_sq1_ecc_dbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pse_sq1_ecc_dbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq1_ecc_dbe_sts_cmb0 cvmx_pko_pse_sq1_ecc_dbe_sts_cmb0_t;

union cvmx_pko_pse_sq1_ecc_sbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq1_ecc_sbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t cxs_ram_sbe:1;
		uint64_t cxd_ram_sbe:1;
		uint64_t vc1_sram_sbe:1;
		uint64_t vc0_sram_sbe:1;
		uint64_t sq_pt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t rt_ram_sbe:1;
		uint64_t pc_ram_sbe:1;
		uint64_t tw1_cmd_fifo_ram_sbe:1;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t tp1_sram_sbe:1;
		uint64_t tp0_sram_sbe:1;
		uint64_t sts1_ram_sbe:1;
		uint64_t sts0_ram_sbe:1;
		uint64_t std1_ram_sbe:1;
		uint64_t std0_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t sc_ram_sbe:1;
		uint64_t reserved_0_45:46;
#else
		uint64_t reserved_0_45:46;
		uint64_t sc_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t std0_ram_sbe:1;
		uint64_t std1_ram_sbe:1;
		uint64_t sts0_ram_sbe:1;
		uint64_t sts1_ram_sbe:1;
		uint64_t tp0_sram_sbe:1;
		uint64_t tp1_sram_sbe:1;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t tw1_cmd_fifo_ram_sbe:1;
		uint64_t pc_ram_sbe:1;
		uint64_t rt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t sq_pt_ram_sbe:1;
		uint64_t vc0_sram_sbe:1;
		uint64_t vc1_sram_sbe:1;
		uint64_t cxd_ram_sbe:1;
		uint64_t cxs_ram_sbe:1;
#endif
	} s;
	struct cvmx_pko_pse_sq1_ecc_sbe_sts0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t cxs_ram_sbe:1;
		uint64_t cxd_ram_sbe:1;
		uint64_t reserved_61_61:1;
		uint64_t vc0_sram_sbe:1;
		uint64_t sq_pt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t rt_ram_sbe:1;
		uint64_t pc_ram_sbe:1;
		uint64_t reserved_55_55:1;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t reserved_53_53:1;
		uint64_t tp0_sram_sbe:1;
		uint64_t reserved_51_51:1;
		uint64_t sts0_ram_sbe:1;
		uint64_t reserved_49_49:1;
		uint64_t std0_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t sc_ram_sbe:1;
		uint64_t reserved_0_45:46;
#else
		uint64_t reserved_0_45:46;
		uint64_t sc_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t std0_ram_sbe:1;
		uint64_t reserved_49_49:1;
		uint64_t sts0_ram_sbe:1;
		uint64_t reserved_51_51:1;
		uint64_t tp0_sram_sbe:1;
		uint64_t reserved_53_53:1;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t reserved_55_55:1;
		uint64_t pc_ram_sbe:1;
		uint64_t rt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t sq_pt_ram_sbe:1;
		uint64_t vc0_sram_sbe:1;
		uint64_t reserved_61_61:1;
		uint64_t cxd_ram_sbe:1;
		uint64_t cxs_ram_sbe:1;
#endif
	} cn73xx;
	struct cvmx_pko_pse_sq1_ecc_sbe_sts0_cn73xx cn75xx;
	struct cvmx_pko_pse_sq1_ecc_sbe_sts0_s cn78xx;
	struct cvmx_pko_pse_sq1_ecc_sbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq1_ecc_sbe_sts0 cvmx_pko_pse_sq1_ecc_sbe_sts0_t;

union cvmx_pko_pse_sq1_ecc_sbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq1_ecc_sbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pse_sq1_sbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pse_sq1_sbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pse_sq1_ecc_sbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_pse_sq1_ecc_sbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_pse_sq1_ecc_sbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pse_sq1_ecc_sbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq1_ecc_sbe_sts_cmb0 cvmx_pko_pse_sq1_ecc_sbe_sts_cmb0_t;

union cvmx_pko_pse_sq2_bist_status {
	uint64_t u64;
	struct cvmx_pko_pse_sq2_bist_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_29_63:35;
		uint64_t sc_sram:1;
		uint64_t reserved_21_27:7;
		uint64_t tp1_sram:1;
		uint64_t tp0_sram:1;
		uint64_t reserved_18_18:1;
		uint64_t rt_sram:1;
		uint64_t reserved_9_16:8;
		uint64_t tw1_cmd_fifo:1;
		uint64_t std_sram:1;
		uint64_t sts_sram:1;
		uint64_t tw0_cmd_fifo:1;
		uint64_t reserved_3_4:2;
		uint64_t nt_sram:1;
		uint64_t pt_sram:1;
		uint64_t wt_sram:1;
#else
		uint64_t wt_sram:1;
		uint64_t pt_sram:1;
		uint64_t nt_sram:1;
		uint64_t reserved_3_4:2;
		uint64_t tw0_cmd_fifo:1;
		uint64_t sts_sram:1;
		uint64_t std_sram:1;
		uint64_t tw1_cmd_fifo:1;
		uint64_t reserved_9_16:8;
		uint64_t rt_sram:1;
		uint64_t reserved_18_18:1;
		uint64_t tp0_sram:1;
		uint64_t tp1_sram:1;
		uint64_t reserved_21_27:7;
		uint64_t sc_sram:1;
		uint64_t reserved_29_63:35;
#endif
	} s;
	struct cvmx_pko_pse_sq2_bist_status_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_29_63:35;
		uint64_t sc_sram:1;
		uint64_t reserved_20_27:8;
		uint64_t tp0_sram:1;
		uint64_t reserved_18_18:1;
		uint64_t rt_sram:1;
		uint64_t reserved_8_16:9;
		uint64_t std_sram:1;
		uint64_t sts_sram:1;
		uint64_t tw0_cmd_fifo:1;
		uint64_t reserved_3_4:2;
		uint64_t nt_sram:1;
		uint64_t pt_sram:1;
		uint64_t wt_sram:1;
#else
		uint64_t wt_sram:1;
		uint64_t pt_sram:1;
		uint64_t nt_sram:1;
		uint64_t reserved_3_4:2;
		uint64_t tw0_cmd_fifo:1;
		uint64_t sts_sram:1;
		uint64_t std_sram:1;
		uint64_t reserved_8_16:9;
		uint64_t rt_sram:1;
		uint64_t reserved_18_18:1;
		uint64_t tp0_sram:1;
		uint64_t reserved_20_27:8;
		uint64_t sc_sram:1;
		uint64_t reserved_29_63:35;
#endif
	} cn73xx;
	struct cvmx_pko_pse_sq2_bist_status_cn73xx cn75xx;
	struct cvmx_pko_pse_sq2_bist_status_s cn78xx;
	struct cvmx_pko_pse_sq2_bist_status_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq2_bist_status cvmx_pko_pse_sq2_bist_status_t;

union cvmx_pko_pse_sq2_ecc_ctl0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq2_ecc_ctl0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t rt_ram_cdis:1;
		uint64_t tw1_cmd_fifo_ram_flip:2;
		uint64_t tw1_cmd_fifo_ram_cdis:1;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t tp1_sram_flip:2;
		uint64_t tp1_sram_cdis:1;
		uint64_t tp0_sram_flip:2;
		uint64_t tp0_sram_cdis:1;
		uint64_t sts1_ram_flip:2;
		uint64_t sts1_ram_cdis:1;
		uint64_t sts0_ram_flip:2;
		uint64_t sts0_ram_cdis:1;
		uint64_t std1_ram_flip:2;
		uint64_t std1_ram_cdis:1;
		uint64_t std0_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t sc_ram_cdis:1;
		uint64_t reserved_0_24:25;
#else
		uint64_t reserved_0_24:25;
		uint64_t sc_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t std0_ram_flip:2;
		uint64_t std1_ram_cdis:1;
		uint64_t std1_ram_flip:2;
		uint64_t sts0_ram_cdis:1;
		uint64_t sts0_ram_flip:2;
		uint64_t sts1_ram_cdis:1;
		uint64_t sts1_ram_flip:2;
		uint64_t tp0_sram_cdis:1;
		uint64_t tp0_sram_flip:2;
		uint64_t tp1_sram_cdis:1;
		uint64_t tp1_sram_flip:2;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t tw1_cmd_fifo_ram_cdis:1;
		uint64_t tw1_cmd_fifo_ram_flip:2;
		uint64_t rt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_pt_ram_flip:2;
#endif
	} s;
	struct cvmx_pko_pse_sq2_ecc_ctl0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t rt_ram_cdis:1;
		uint64_t reserved_52_54:3;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t reserved_46_48:3;
		uint64_t tp0_sram_flip:2;
		uint64_t tp0_sram_cdis:1;
		uint64_t reserved_40_42:3;
		uint64_t sts0_ram_flip:2;
		uint64_t sts0_ram_cdis:1;
		uint64_t reserved_34_36:3;
		uint64_t std0_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t sc_ram_cdis:1;
		uint64_t reserved_0_24:25;
#else
		uint64_t reserved_0_24:25;
		uint64_t sc_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t std0_ram_flip:2;
		uint64_t reserved_34_36:3;
		uint64_t sts0_ram_cdis:1;
		uint64_t sts0_ram_flip:2;
		uint64_t reserved_40_42:3;
		uint64_t tp0_sram_cdis:1;
		uint64_t tp0_sram_flip:2;
		uint64_t reserved_46_48:3;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t reserved_52_54:3;
		uint64_t rt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_pt_ram_flip:2;
#endif
	} cn73xx;
	struct cvmx_pko_pse_sq2_ecc_ctl0_cn73xx cn75xx;
	struct cvmx_pko_pse_sq2_ecc_ctl0_s cn78xx;
	struct cvmx_pko_pse_sq2_ecc_ctl0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq2_ecc_ctl0 cvmx_pko_pse_sq2_ecc_ctl0_t;

union cvmx_pko_pse_sq2_ecc_dbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq2_ecc_dbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t rt_ram_dbe:1;
		uint64_t tw1_cmd_fifo_ram_dbe:1;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t tp1_sram_dbe:1;
		uint64_t tp0_sram_dbe:1;
		uint64_t sts1_ram_dbe:1;
		uint64_t sts0_ram_dbe:1;
		uint64_t std1_ram_dbe:1;
		uint64_t std0_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t sc_ram_dbe:1;
		uint64_t reserved_0_50:51;
#else
		uint64_t reserved_0_50:51;
		uint64_t sc_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t std0_ram_dbe:1;
		uint64_t std1_ram_dbe:1;
		uint64_t sts0_ram_dbe:1;
		uint64_t sts1_ram_dbe:1;
		uint64_t tp0_sram_dbe:1;
		uint64_t tp1_sram_dbe:1;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t tw1_cmd_fifo_ram_dbe:1;
		uint64_t rt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t sq_pt_ram_dbe:1;
#endif
	} s;
	struct cvmx_pko_pse_sq2_ecc_dbe_sts0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t rt_ram_dbe:1;
		uint64_t reserved_60_60:1;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t reserved_58_58:1;
		uint64_t tp0_sram_dbe:1;
		uint64_t reserved_56_56:1;
		uint64_t sts0_ram_dbe:1;
		uint64_t reserved_54_54:1;
		uint64_t std0_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t sc_ram_dbe:1;
		uint64_t reserved_0_50:51;
#else
		uint64_t reserved_0_50:51;
		uint64_t sc_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t std0_ram_dbe:1;
		uint64_t reserved_54_54:1;
		uint64_t sts0_ram_dbe:1;
		uint64_t reserved_56_56:1;
		uint64_t tp0_sram_dbe:1;
		uint64_t reserved_58_58:1;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t reserved_60_60:1;
		uint64_t rt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t sq_pt_ram_dbe:1;
#endif
	} cn73xx;
	struct cvmx_pko_pse_sq2_ecc_dbe_sts0_cn73xx cn75xx;
	struct cvmx_pko_pse_sq2_ecc_dbe_sts0_s cn78xx;
	struct cvmx_pko_pse_sq2_ecc_dbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq2_ecc_dbe_sts0 cvmx_pko_pse_sq2_ecc_dbe_sts0_t;

union cvmx_pko_pse_sq2_ecc_dbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq2_ecc_dbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pse_sq2_dbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pse_sq2_dbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pse_sq2_ecc_dbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_pse_sq2_ecc_dbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_pse_sq2_ecc_dbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pse_sq2_ecc_dbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq2_ecc_dbe_sts_cmb0 cvmx_pko_pse_sq2_ecc_dbe_sts_cmb0_t;

union cvmx_pko_pse_sq2_ecc_sbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq2_ecc_sbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t rt_ram_sbe:1;
		uint64_t tw1_cmd_fifo_ram_sbe:1;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t tp1_sram_sbe:1;
		uint64_t tp0_sram_sbe:1;
		uint64_t sts1_ram_sbe:1;
		uint64_t sts0_ram_sbe:1;
		uint64_t std1_ram_sbe:1;
		uint64_t std0_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t sc_ram_sbe:1;
		uint64_t reserved_0_50:51;
#else
		uint64_t reserved_0_50:51;
		uint64_t sc_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t std0_ram_sbe:1;
		uint64_t std1_ram_sbe:1;
		uint64_t sts0_ram_sbe:1;
		uint64_t sts1_ram_sbe:1;
		uint64_t tp0_sram_sbe:1;
		uint64_t tp1_sram_sbe:1;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t tw1_cmd_fifo_ram_sbe:1;
		uint64_t rt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t sq_pt_ram_sbe:1;
#endif
	} s;
	struct cvmx_pko_pse_sq2_ecc_sbe_sts0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t rt_ram_sbe:1;
		uint64_t reserved_60_60:1;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t reserved_58_58:1;
		uint64_t tp0_sram_sbe:1;
		uint64_t reserved_56_56:1;
		uint64_t sts0_ram_sbe:1;
		uint64_t reserved_54_54:1;
		uint64_t std0_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t sc_ram_sbe:1;
		uint64_t reserved_0_50:51;
#else
		uint64_t reserved_0_50:51;
		uint64_t sc_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t std0_ram_sbe:1;
		uint64_t reserved_54_54:1;
		uint64_t sts0_ram_sbe:1;
		uint64_t reserved_56_56:1;
		uint64_t tp0_sram_sbe:1;
		uint64_t reserved_58_58:1;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t reserved_60_60:1;
		uint64_t rt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t sq_pt_ram_sbe:1;
#endif
	} cn73xx;
	struct cvmx_pko_pse_sq2_ecc_sbe_sts0_cn73xx cn75xx;
	struct cvmx_pko_pse_sq2_ecc_sbe_sts0_s cn78xx;
	struct cvmx_pko_pse_sq2_ecc_sbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq2_ecc_sbe_sts0 cvmx_pko_pse_sq2_ecc_sbe_sts0_t;

union cvmx_pko_pse_sq2_ecc_sbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq2_ecc_sbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pse_sq2_sbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pse_sq2_sbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pse_sq2_ecc_sbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_pse_sq2_ecc_sbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_pse_sq2_ecc_sbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pse_sq2_ecc_sbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq2_ecc_sbe_sts_cmb0 cvmx_pko_pse_sq2_ecc_sbe_sts_cmb0_t;

union cvmx_pko_pse_sq3_bist_status {
	uint64_t u64;
	struct cvmx_pko_pse_sq3_bist_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_29_63:35;
		uint64_t sc_sram:1;
		uint64_t reserved_23_27:5;
		uint64_t tp3_sram:1;
		uint64_t tp2_sram:1;
		uint64_t tp1_sram:1;
		uint64_t tp0_sram:1;
		uint64_t reserved_18_18:1;
		uint64_t rt_sram:1;
		uint64_t reserved_15_16:2;
		uint64_t tw3_cmd_fifo:1;
		uint64_t reserved_12_13:2;
		uint64_t tw2_cmd_fifo:1;
		uint64_t reserved_9_10:2;
		uint64_t tw1_cmd_fifo:1;
		uint64_t std_sram:1;
		uint64_t sts_sram:1;
		uint64_t tw0_cmd_fifo:1;
		uint64_t reserved_3_4:2;
		uint64_t nt_sram:1;
		uint64_t pt_sram:1;
		uint64_t wt_sram:1;
#else
		uint64_t wt_sram:1;
		uint64_t pt_sram:1;
		uint64_t nt_sram:1;
		uint64_t reserved_3_4:2;
		uint64_t tw0_cmd_fifo:1;
		uint64_t sts_sram:1;
		uint64_t std_sram:1;
		uint64_t tw1_cmd_fifo:1;
		uint64_t reserved_9_10:2;
		uint64_t tw2_cmd_fifo:1;
		uint64_t reserved_12_13:2;
		uint64_t tw3_cmd_fifo:1;
		uint64_t reserved_15_16:2;
		uint64_t rt_sram:1;
		uint64_t reserved_18_18:1;
		uint64_t tp0_sram:1;
		uint64_t tp1_sram:1;
		uint64_t tp2_sram:1;
		uint64_t tp3_sram:1;
		uint64_t reserved_23_27:5;
		uint64_t sc_sram:1;
		uint64_t reserved_29_63:35;
#endif
	} s;
	struct cvmx_pko_pse_sq3_bist_status_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_29_63:35;
		uint64_t sc_sram:1;
		uint64_t reserved_20_27:8;
		uint64_t tp0_sram:1;
		uint64_t reserved_18_18:1;
		uint64_t rt_sram:1;
		uint64_t reserved_8_16:9;
		uint64_t std_sram:1;
		uint64_t sts_sram:1;
		uint64_t tw0_cmd_fifo:1;
		uint64_t reserved_3_4:2;
		uint64_t nt_sram:1;
		uint64_t pt_sram:1;
		uint64_t wt_sram:1;
#else
		uint64_t wt_sram:1;
		uint64_t pt_sram:1;
		uint64_t nt_sram:1;
		uint64_t reserved_3_4:2;
		uint64_t tw0_cmd_fifo:1;
		uint64_t sts_sram:1;
		uint64_t std_sram:1;
		uint64_t reserved_8_16:9;
		uint64_t rt_sram:1;
		uint64_t reserved_18_18:1;
		uint64_t tp0_sram:1;
		uint64_t reserved_20_27:8;
		uint64_t sc_sram:1;
		uint64_t reserved_29_63:35;
#endif
	} cn73xx;
	struct cvmx_pko_pse_sq3_bist_status_cn73xx cn75xx;
	struct cvmx_pko_pse_sq3_bist_status_s cn78xx;
	struct cvmx_pko_pse_sq3_bist_status_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq3_bist_status cvmx_pko_pse_sq3_bist_status_t;

union cvmx_pko_pse_sq3_ecc_ctl0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq3_ecc_ctl0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t rt_ram_cdis:1;
		uint64_t tw3_cmd_fifo_ram_flip:2;
		uint64_t tw3_cmd_fifo_ram_cdis:1;
		uint64_t tw2_cmd_fifo_ram_flip:2;
		uint64_t tw2_cmd_fifo_ram_cdis:1;
		uint64_t tw1_cmd_fifo_ram_flip:2;
		uint64_t tw1_cmd_fifo_ram_cdis:1;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t tp3_sram_flip:2;
		uint64_t tp3_sram_cdis:1;
		uint64_t tp2_sram_flip:2;
		uint64_t tp2_sram_cdis:1;
		uint64_t tp1_sram_flip:2;
		uint64_t tp1_sram_cdis:1;
		uint64_t tp0_sram_flip:2;
		uint64_t tp0_sram_cdis:1;
		uint64_t sts3_ram_flip:2;
		uint64_t sts3_ram_cdis:1;
		uint64_t sts2_ram_flip:2;
		uint64_t sts2_ram_cdis:1;
		uint64_t sts1_ram_flip:2;
		uint64_t sts1_ram_cdis:1;
		uint64_t sts0_ram_flip:2;
		uint64_t sts0_ram_cdis:1;
		uint64_t std3_ram_flip:2;
		uint64_t std3_ram_cdis:1;
		uint64_t std2_ram_flip:2;
		uint64_t std2_ram_cdis:1;
		uint64_t std1_ram_flip:2;
		uint64_t std1_ram_cdis:1;
		uint64_t std0_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t sc_ram_cdis:1;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t sc_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t std0_ram_flip:2;
		uint64_t std1_ram_cdis:1;
		uint64_t std1_ram_flip:2;
		uint64_t std2_ram_cdis:1;
		uint64_t std2_ram_flip:2;
		uint64_t std3_ram_cdis:1;
		uint64_t std3_ram_flip:2;
		uint64_t sts0_ram_cdis:1;
		uint64_t sts0_ram_flip:2;
		uint64_t sts1_ram_cdis:1;
		uint64_t sts1_ram_flip:2;
		uint64_t sts2_ram_cdis:1;
		uint64_t sts2_ram_flip:2;
		uint64_t sts3_ram_cdis:1;
		uint64_t sts3_ram_flip:2;
		uint64_t tp0_sram_cdis:1;
		uint64_t tp0_sram_flip:2;
		uint64_t tp1_sram_cdis:1;
		uint64_t tp1_sram_flip:2;
		uint64_t tp2_sram_cdis:1;
		uint64_t tp2_sram_flip:2;
		uint64_t tp3_sram_cdis:1;
		uint64_t tp3_sram_flip:2;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t tw1_cmd_fifo_ram_cdis:1;
		uint64_t tw1_cmd_fifo_ram_flip:2;
		uint64_t tw2_cmd_fifo_ram_cdis:1;
		uint64_t tw2_cmd_fifo_ram_flip:2;
		uint64_t tw3_cmd_fifo_ram_cdis:1;
		uint64_t tw3_cmd_fifo_ram_flip:2;
		uint64_t rt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_pt_ram_flip:2;
#endif
	} s;
	struct cvmx_pko_pse_sq3_ecc_ctl0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t rt_ram_cdis:1;
		uint64_t reserved_46_54:9;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t reserved_34_42:9;
		uint64_t tp0_sram_flip:2;
		uint64_t tp0_sram_cdis:1;
		uint64_t reserved_22_30:9;
		uint64_t sts0_ram_flip:2;
		uint64_t sts0_ram_cdis:1;
		uint64_t reserved_10_18:9;
		uint64_t std0_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t sc_ram_cdis:1;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t sc_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t std0_ram_flip:2;
		uint64_t reserved_10_18:9;
		uint64_t sts0_ram_cdis:1;
		uint64_t sts0_ram_flip:2;
		uint64_t reserved_22_30:9;
		uint64_t tp0_sram_cdis:1;
		uint64_t tp0_sram_flip:2;
		uint64_t reserved_34_42:9;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t reserved_46_54:9;
		uint64_t rt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_pt_ram_flip:2;
#endif
	} cn73xx;
	struct cvmx_pko_pse_sq3_ecc_ctl0_cn73xx cn75xx;
	struct cvmx_pko_pse_sq3_ecc_ctl0_s cn78xx;
	struct cvmx_pko_pse_sq3_ecc_ctl0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq3_ecc_ctl0 cvmx_pko_pse_sq3_ecc_ctl0_t;

union cvmx_pko_pse_sq3_ecc_dbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq3_ecc_dbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t rt_ram_dbe:1;
		uint64_t tw3_cmd_fifo_ram_dbe:1;
		uint64_t tw2_cmd_fifo_ram_dbe:1;
		uint64_t tw1_cmd_fifo_ram_dbe:1;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t tp3_sram_dbe:1;
		uint64_t tp2_sram_dbe:1;
		uint64_t tp1_sram_dbe:1;
		uint64_t tp0_sram_dbe:1;
		uint64_t sts3_ram_dbe:1;
		uint64_t sts2_ram_dbe:1;
		uint64_t sts1_ram_dbe:1;
		uint64_t sts0_ram_dbe:1;
		uint64_t std3_ram_dbe:1;
		uint64_t std2_ram_dbe:1;
		uint64_t std1_ram_dbe:1;
		uint64_t std0_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t sc_ram_dbe:1;
		uint64_t reserved_0_42:43;
#else
		uint64_t reserved_0_42:43;
		uint64_t sc_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t std0_ram_dbe:1;
		uint64_t std1_ram_dbe:1;
		uint64_t std2_ram_dbe:1;
		uint64_t std3_ram_dbe:1;
		uint64_t sts0_ram_dbe:1;
		uint64_t sts1_ram_dbe:1;
		uint64_t sts2_ram_dbe:1;
		uint64_t sts3_ram_dbe:1;
		uint64_t tp0_sram_dbe:1;
		uint64_t tp1_sram_dbe:1;
		uint64_t tp2_sram_dbe:1;
		uint64_t tp3_sram_dbe:1;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t tw1_cmd_fifo_ram_dbe:1;
		uint64_t tw2_cmd_fifo_ram_dbe:1;
		uint64_t tw3_cmd_fifo_ram_dbe:1;
		uint64_t rt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t sq_pt_ram_dbe:1;
#endif
	} s;
	struct cvmx_pko_pse_sq3_ecc_dbe_sts0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t rt_ram_dbe:1;
		uint64_t reserved_58_60:3;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t reserved_54_56:3;
		uint64_t tp0_sram_dbe:1;
		uint64_t reserved_50_52:3;
		uint64_t sts0_ram_dbe:1;
		uint64_t reserved_46_48:3;
		uint64_t std0_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t sc_ram_dbe:1;
		uint64_t reserved_0_42:43;
#else
		uint64_t reserved_0_42:43;
		uint64_t sc_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t std0_ram_dbe:1;
		uint64_t reserved_46_48:3;
		uint64_t sts0_ram_dbe:1;
		uint64_t reserved_50_52:3;
		uint64_t tp0_sram_dbe:1;
		uint64_t reserved_54_56:3;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t reserved_58_60:3;
		uint64_t rt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t sq_pt_ram_dbe:1;
#endif
	} cn73xx;
	struct cvmx_pko_pse_sq3_ecc_dbe_sts0_cn73xx cn75xx;
	struct cvmx_pko_pse_sq3_ecc_dbe_sts0_s cn78xx;
	struct cvmx_pko_pse_sq3_ecc_dbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq3_ecc_dbe_sts0 cvmx_pko_pse_sq3_ecc_dbe_sts0_t;

union cvmx_pko_pse_sq3_ecc_dbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq3_ecc_dbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pse_sq3_dbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pse_sq3_dbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pse_sq3_ecc_dbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_pse_sq3_ecc_dbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_pse_sq3_ecc_dbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pse_sq3_ecc_dbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq3_ecc_dbe_sts_cmb0 cvmx_pko_pse_sq3_ecc_dbe_sts_cmb0_t;

union cvmx_pko_pse_sq3_ecc_sbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq3_ecc_sbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t rt_ram_sbe:1;
		uint64_t tw3_cmd_fifo_ram_sbe:1;
		uint64_t tw2_cmd_fifo_ram_sbe:1;
		uint64_t tw1_cmd_fifo_ram_sbe:1;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t tp3_sram_sbe:1;
		uint64_t tp2_sram_sbe:1;
		uint64_t tp1_sram_sbe:1;
		uint64_t tp0_sram_sbe:1;
		uint64_t sts3_ram_sbe:1;
		uint64_t sts2_ram_sbe:1;
		uint64_t sts1_ram_sbe:1;
		uint64_t sts0_ram_sbe:1;
		uint64_t std3_ram_sbe:1;
		uint64_t std2_ram_sbe:1;
		uint64_t std1_ram_sbe:1;
		uint64_t std0_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t sc_ram_sbe:1;
		uint64_t reserved_0_42:43;
#else
		uint64_t reserved_0_42:43;
		uint64_t sc_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t std0_ram_sbe:1;
		uint64_t std1_ram_sbe:1;
		uint64_t std2_ram_sbe:1;
		uint64_t std3_ram_sbe:1;
		uint64_t sts0_ram_sbe:1;
		uint64_t sts1_ram_sbe:1;
		uint64_t sts2_ram_sbe:1;
		uint64_t sts3_ram_sbe:1;
		uint64_t tp0_sram_sbe:1;
		uint64_t tp1_sram_sbe:1;
		uint64_t tp2_sram_sbe:1;
		uint64_t tp3_sram_sbe:1;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t tw1_cmd_fifo_ram_sbe:1;
		uint64_t tw2_cmd_fifo_ram_sbe:1;
		uint64_t tw3_cmd_fifo_ram_sbe:1;
		uint64_t rt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t sq_pt_ram_sbe:1;
#endif
	} s;
	struct cvmx_pko_pse_sq3_ecc_sbe_sts0_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t rt_ram_sbe:1;
		uint64_t reserved_58_60:3;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t reserved_54_56:3;
		uint64_t tp0_sram_sbe:1;
		uint64_t reserved_50_52:3;
		uint64_t sts0_ram_sbe:1;
		uint64_t reserved_46_48:3;
		uint64_t std0_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t sc_ram_sbe:1;
		uint64_t reserved_0_42:43;
#else
		uint64_t reserved_0_42:43;
		uint64_t sc_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t std0_ram_sbe:1;
		uint64_t reserved_46_48:3;
		uint64_t sts0_ram_sbe:1;
		uint64_t reserved_50_52:3;
		uint64_t tp0_sram_sbe:1;
		uint64_t reserved_54_56:3;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t reserved_58_60:3;
		uint64_t rt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t sq_pt_ram_sbe:1;
#endif
	} cn73xx;
	struct cvmx_pko_pse_sq3_ecc_sbe_sts0_cn73xx cn75xx;
	struct cvmx_pko_pse_sq3_ecc_sbe_sts0_s cn78xx;
	struct cvmx_pko_pse_sq3_ecc_sbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq3_ecc_sbe_sts0 cvmx_pko_pse_sq3_ecc_sbe_sts0_t;

union cvmx_pko_pse_sq3_ecc_sbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq3_ecc_sbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pse_sq3_sbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pse_sq3_sbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pse_sq3_ecc_sbe_sts_cmb0_s cn73xx;
	struct cvmx_pko_pse_sq3_ecc_sbe_sts_cmb0_s cn75xx;
	struct cvmx_pko_pse_sq3_ecc_sbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pse_sq3_ecc_sbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq3_ecc_sbe_sts_cmb0 cvmx_pko_pse_sq3_ecc_sbe_sts_cmb0_t;

union cvmx_pko_pse_sq4_bist_status {
	uint64_t u64;
	struct cvmx_pko_pse_sq4_bist_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_29_63:35;
		uint64_t sc_sram:1;
		uint64_t reserved_23_27:5;
		uint64_t tp3_sram:1;
		uint64_t tp2_sram:1;
		uint64_t tp1_sram:1;
		uint64_t tp0_sram:1;
		uint64_t reserved_18_18:1;
		uint64_t rt_sram:1;
		uint64_t reserved_15_16:2;
		uint64_t tw3_cmd_fifo:1;
		uint64_t reserved_12_13:2;
		uint64_t tw2_cmd_fifo:1;
		uint64_t reserved_9_10:2;
		uint64_t tw1_cmd_fifo:1;
		uint64_t std_sram:1;
		uint64_t sts_sram:1;
		uint64_t tw0_cmd_fifo:1;
		uint64_t reserved_3_4:2;
		uint64_t nt_sram:1;
		uint64_t pt_sram:1;
		uint64_t wt_sram:1;
#else
		uint64_t wt_sram:1;
		uint64_t pt_sram:1;
		uint64_t nt_sram:1;
		uint64_t reserved_3_4:2;
		uint64_t tw0_cmd_fifo:1;
		uint64_t sts_sram:1;
		uint64_t std_sram:1;
		uint64_t tw1_cmd_fifo:1;
		uint64_t reserved_9_10:2;
		uint64_t tw2_cmd_fifo:1;
		uint64_t reserved_12_13:2;
		uint64_t tw3_cmd_fifo:1;
		uint64_t reserved_15_16:2;
		uint64_t rt_sram:1;
		uint64_t reserved_18_18:1;
		uint64_t tp0_sram:1;
		uint64_t tp1_sram:1;
		uint64_t tp2_sram:1;
		uint64_t tp3_sram:1;
		uint64_t reserved_23_27:5;
		uint64_t sc_sram:1;
		uint64_t reserved_29_63:35;
#endif
	} s;
	struct cvmx_pko_pse_sq4_bist_status_s cn78xx;
	struct cvmx_pko_pse_sq4_bist_status_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq4_bist_status cvmx_pko_pse_sq4_bist_status_t;

union cvmx_pko_pse_sq4_ecc_ctl0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq4_ecc_ctl0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t rt_ram_cdis:1;
		uint64_t tw3_cmd_fifo_ram_flip:2;
		uint64_t tw3_cmd_fifo_ram_cdis:1;
		uint64_t tw2_cmd_fifo_ram_flip:2;
		uint64_t tw2_cmd_fifo_ram_cdis:1;
		uint64_t tw1_cmd_fifo_ram_flip:2;
		uint64_t tw1_cmd_fifo_ram_cdis:1;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t tp3_sram_flip:2;
		uint64_t tp3_sram_cdis:1;
		uint64_t tp2_sram_flip:2;
		uint64_t tp2_sram_cdis:1;
		uint64_t tp1_sram_flip:2;
		uint64_t tp1_sram_cdis:1;
		uint64_t tp0_sram_flip:2;
		uint64_t tp0_sram_cdis:1;
		uint64_t sts3_ram_flip:2;
		uint64_t sts3_ram_cdis:1;
		uint64_t sts2_ram_flip:2;
		uint64_t sts2_ram_cdis:1;
		uint64_t sts1_ram_flip:2;
		uint64_t sts1_ram_cdis:1;
		uint64_t sts0_ram_flip:2;
		uint64_t sts0_ram_cdis:1;
		uint64_t std3_ram_flip:2;
		uint64_t std3_ram_cdis:1;
		uint64_t std2_ram_flip:2;
		uint64_t std2_ram_cdis:1;
		uint64_t std1_ram_flip:2;
		uint64_t std1_ram_cdis:1;
		uint64_t std0_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t sc_ram_cdis:1;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t sc_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t std0_ram_flip:2;
		uint64_t std1_ram_cdis:1;
		uint64_t std1_ram_flip:2;
		uint64_t std2_ram_cdis:1;
		uint64_t std2_ram_flip:2;
		uint64_t std3_ram_cdis:1;
		uint64_t std3_ram_flip:2;
		uint64_t sts0_ram_cdis:1;
		uint64_t sts0_ram_flip:2;
		uint64_t sts1_ram_cdis:1;
		uint64_t sts1_ram_flip:2;
		uint64_t sts2_ram_cdis:1;
		uint64_t sts2_ram_flip:2;
		uint64_t sts3_ram_cdis:1;
		uint64_t sts3_ram_flip:2;
		uint64_t tp0_sram_cdis:1;
		uint64_t tp0_sram_flip:2;
		uint64_t tp1_sram_cdis:1;
		uint64_t tp1_sram_flip:2;
		uint64_t tp2_sram_cdis:1;
		uint64_t tp2_sram_flip:2;
		uint64_t tp3_sram_cdis:1;
		uint64_t tp3_sram_flip:2;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t tw1_cmd_fifo_ram_cdis:1;
		uint64_t tw1_cmd_fifo_ram_flip:2;
		uint64_t tw2_cmd_fifo_ram_cdis:1;
		uint64_t tw2_cmd_fifo_ram_flip:2;
		uint64_t tw3_cmd_fifo_ram_cdis:1;
		uint64_t tw3_cmd_fifo_ram_flip:2;
		uint64_t rt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_pt_ram_flip:2;
#endif
	} s;
	struct cvmx_pko_pse_sq4_ecc_ctl0_s cn78xx;
	struct cvmx_pko_pse_sq4_ecc_ctl0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq4_ecc_ctl0 cvmx_pko_pse_sq4_ecc_ctl0_t;

union cvmx_pko_pse_sq4_ecc_dbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq4_ecc_dbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t rt_ram_dbe:1;
		uint64_t tw3_cmd_fifo_ram_dbe:1;
		uint64_t tw2_cmd_fifo_ram_dbe:1;
		uint64_t tw1_cmd_fifo_ram_dbe:1;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t tp3_sram_dbe:1;
		uint64_t tp2_sram_dbe:1;
		uint64_t tp1_sram_dbe:1;
		uint64_t tp0_sram_dbe:1;
		uint64_t sts3_ram_dbe:1;
		uint64_t sts2_ram_dbe:1;
		uint64_t sts1_ram_dbe:1;
		uint64_t sts0_ram_dbe:1;
		uint64_t std3_ram_dbe:1;
		uint64_t std2_ram_dbe:1;
		uint64_t std1_ram_dbe:1;
		uint64_t std0_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t sc_ram_dbe:1;
		uint64_t reserved_0_42:43;
#else
		uint64_t reserved_0_42:43;
		uint64_t sc_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t std0_ram_dbe:1;
		uint64_t std1_ram_dbe:1;
		uint64_t std2_ram_dbe:1;
		uint64_t std3_ram_dbe:1;
		uint64_t sts0_ram_dbe:1;
		uint64_t sts1_ram_dbe:1;
		uint64_t sts2_ram_dbe:1;
		uint64_t sts3_ram_dbe:1;
		uint64_t tp0_sram_dbe:1;
		uint64_t tp1_sram_dbe:1;
		uint64_t tp2_sram_dbe:1;
		uint64_t tp3_sram_dbe:1;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t tw1_cmd_fifo_ram_dbe:1;
		uint64_t tw2_cmd_fifo_ram_dbe:1;
		uint64_t tw3_cmd_fifo_ram_dbe:1;
		uint64_t rt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t sq_pt_ram_dbe:1;
#endif
	} s;
	struct cvmx_pko_pse_sq4_ecc_dbe_sts0_s cn78xx;
	struct cvmx_pko_pse_sq4_ecc_dbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq4_ecc_dbe_sts0 cvmx_pko_pse_sq4_ecc_dbe_sts0_t;

union cvmx_pko_pse_sq4_ecc_dbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq4_ecc_dbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pse_sq4_dbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pse_sq4_dbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pse_sq4_ecc_dbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pse_sq4_ecc_dbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq4_ecc_dbe_sts_cmb0 cvmx_pko_pse_sq4_ecc_dbe_sts_cmb0_t;

union cvmx_pko_pse_sq4_ecc_sbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq4_ecc_sbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t rt_ram_sbe:1;
		uint64_t tw3_cmd_fifo_ram_sbe:1;
		uint64_t tw2_cmd_fifo_ram_sbe:1;
		uint64_t tw1_cmd_fifo_ram_sbe:1;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t tp3_sram_sbe:1;
		uint64_t tp2_sram_sbe:1;
		uint64_t tp1_sram_sbe:1;
		uint64_t tp0_sram_sbe:1;
		uint64_t sts3_ram_sbe:1;
		uint64_t sts2_ram_sbe:1;
		uint64_t sts1_ram_sbe:1;
		uint64_t sts0_ram_sbe:1;
		uint64_t std3_ram_sbe:1;
		uint64_t std2_ram_sbe:1;
		uint64_t std1_ram_sbe:1;
		uint64_t std0_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t sc_ram_sbe:1;
		uint64_t reserved_0_42:43;
#else
		uint64_t reserved_0_42:43;
		uint64_t sc_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t std0_ram_sbe:1;
		uint64_t std1_ram_sbe:1;
		uint64_t std2_ram_sbe:1;
		uint64_t std3_ram_sbe:1;
		uint64_t sts0_ram_sbe:1;
		uint64_t sts1_ram_sbe:1;
		uint64_t sts2_ram_sbe:1;
		uint64_t sts3_ram_sbe:1;
		uint64_t tp0_sram_sbe:1;
		uint64_t tp1_sram_sbe:1;
		uint64_t tp2_sram_sbe:1;
		uint64_t tp3_sram_sbe:1;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t tw1_cmd_fifo_ram_sbe:1;
		uint64_t tw2_cmd_fifo_ram_sbe:1;
		uint64_t tw3_cmd_fifo_ram_sbe:1;
		uint64_t rt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t sq_pt_ram_sbe:1;
#endif
	} s;
	struct cvmx_pko_pse_sq4_ecc_sbe_sts0_s cn78xx;
	struct cvmx_pko_pse_sq4_ecc_sbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq4_ecc_sbe_sts0 cvmx_pko_pse_sq4_ecc_sbe_sts0_t;

union cvmx_pko_pse_sq4_ecc_sbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq4_ecc_sbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pse_sq4_sbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pse_sq4_sbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pse_sq4_ecc_sbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pse_sq4_ecc_sbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq4_ecc_sbe_sts_cmb0 cvmx_pko_pse_sq4_ecc_sbe_sts_cmb0_t;

union cvmx_pko_pse_sq5_bist_status {
	uint64_t u64;
	struct cvmx_pko_pse_sq5_bist_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_29_63:35;
		uint64_t sc_sram:1;
		uint64_t reserved_23_27:5;
		uint64_t tp3_sram:1;
		uint64_t tp2_sram:1;
		uint64_t tp1_sram:1;
		uint64_t tp0_sram:1;
		uint64_t reserved_18_18:1;
		uint64_t rt_sram:1;
		uint64_t reserved_15_16:2;
		uint64_t tw3_cmd_fifo:1;
		uint64_t reserved_12_13:2;
		uint64_t tw2_cmd_fifo:1;
		uint64_t reserved_9_10:2;
		uint64_t tw1_cmd_fifo:1;
		uint64_t std_sram:1;
		uint64_t sts_sram:1;
		uint64_t tw0_cmd_fifo:1;
		uint64_t reserved_3_4:2;
		uint64_t nt_sram:1;
		uint64_t pt_sram:1;
		uint64_t wt_sram:1;
#else
		uint64_t wt_sram:1;
		uint64_t pt_sram:1;
		uint64_t nt_sram:1;
		uint64_t reserved_3_4:2;
		uint64_t tw0_cmd_fifo:1;
		uint64_t sts_sram:1;
		uint64_t std_sram:1;
		uint64_t tw1_cmd_fifo:1;
		uint64_t reserved_9_10:2;
		uint64_t tw2_cmd_fifo:1;
		uint64_t reserved_12_13:2;
		uint64_t tw3_cmd_fifo:1;
		uint64_t reserved_15_16:2;
		uint64_t rt_sram:1;
		uint64_t reserved_18_18:1;
		uint64_t tp0_sram:1;
		uint64_t tp1_sram:1;
		uint64_t tp2_sram:1;
		uint64_t tp3_sram:1;
		uint64_t reserved_23_27:5;
		uint64_t sc_sram:1;
		uint64_t reserved_29_63:35;
#endif
	} s;
	struct cvmx_pko_pse_sq5_bist_status_s cn78xx;
	struct cvmx_pko_pse_sq5_bist_status_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq5_bist_status cvmx_pko_pse_sq5_bist_status_t;

union cvmx_pko_pse_sq5_ecc_ctl0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq5_ecc_ctl0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t rt_ram_cdis:1;
		uint64_t tw3_cmd_fifo_ram_flip:2;
		uint64_t tw3_cmd_fifo_ram_cdis:1;
		uint64_t tw2_cmd_fifo_ram_flip:2;
		uint64_t tw2_cmd_fifo_ram_cdis:1;
		uint64_t tw1_cmd_fifo_ram_flip:2;
		uint64_t tw1_cmd_fifo_ram_cdis:1;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t tp3_sram_flip:2;
		uint64_t tp3_sram_cdis:1;
		uint64_t tp2_sram_flip:2;
		uint64_t tp2_sram_cdis:1;
		uint64_t tp1_sram_flip:2;
		uint64_t tp1_sram_cdis:1;
		uint64_t tp0_sram_flip:2;
		uint64_t tp0_sram_cdis:1;
		uint64_t sts3_ram_flip:2;
		uint64_t sts3_ram_cdis:1;
		uint64_t sts2_ram_flip:2;
		uint64_t sts2_ram_cdis:1;
		uint64_t sts1_ram_flip:2;
		uint64_t sts1_ram_cdis:1;
		uint64_t sts0_ram_flip:2;
		uint64_t sts0_ram_cdis:1;
		uint64_t std3_ram_flip:2;
		uint64_t std3_ram_cdis:1;
		uint64_t std2_ram_flip:2;
		uint64_t std2_ram_cdis:1;
		uint64_t std1_ram_flip:2;
		uint64_t std1_ram_cdis:1;
		uint64_t std0_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t sc_ram_cdis:1;
		uint64_t reserved_0_0:1;
#else
		uint64_t reserved_0_0:1;
		uint64_t sc_ram_cdis:1;
		uint64_t sc_ram_flip:2;
		uint64_t wt_ram_cdis:1;
		uint64_t wt_ram_flip:2;
		uint64_t std0_ram_cdis:1;
		uint64_t std0_ram_flip:2;
		uint64_t std1_ram_cdis:1;
		uint64_t std1_ram_flip:2;
		uint64_t std2_ram_cdis:1;
		uint64_t std2_ram_flip:2;
		uint64_t std3_ram_cdis:1;
		uint64_t std3_ram_flip:2;
		uint64_t sts0_ram_cdis:1;
		uint64_t sts0_ram_flip:2;
		uint64_t sts1_ram_cdis:1;
		uint64_t sts1_ram_flip:2;
		uint64_t sts2_ram_cdis:1;
		uint64_t sts2_ram_flip:2;
		uint64_t sts3_ram_cdis:1;
		uint64_t sts3_ram_flip:2;
		uint64_t tp0_sram_cdis:1;
		uint64_t tp0_sram_flip:2;
		uint64_t tp1_sram_cdis:1;
		uint64_t tp1_sram_flip:2;
		uint64_t tp2_sram_cdis:1;
		uint64_t tp2_sram_flip:2;
		uint64_t tp3_sram_cdis:1;
		uint64_t tp3_sram_flip:2;
		uint64_t tw0_cmd_fifo_ram_cdis:1;
		uint64_t tw0_cmd_fifo_ram_flip:2;
		uint64_t tw1_cmd_fifo_ram_cdis:1;
		uint64_t tw1_cmd_fifo_ram_flip:2;
		uint64_t tw2_cmd_fifo_ram_cdis:1;
		uint64_t tw2_cmd_fifo_ram_flip:2;
		uint64_t tw3_cmd_fifo_ram_cdis:1;
		uint64_t tw3_cmd_fifo_ram_flip:2;
		uint64_t rt_ram_cdis:1;
		uint64_t rt_ram_flip:2;
		uint64_t sq_nt_ram_cdis:1;
		uint64_t sq_nt_ram_flip:2;
		uint64_t sq_pt_ram_cdis:1;
		uint64_t sq_pt_ram_flip:2;
#endif
	} s;
	struct cvmx_pko_pse_sq5_ecc_ctl0_s cn78xx;
	struct cvmx_pko_pse_sq5_ecc_ctl0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq5_ecc_ctl0 cvmx_pko_pse_sq5_ecc_ctl0_t;

union cvmx_pko_pse_sq5_ecc_dbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq5_ecc_dbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t rt_ram_dbe:1;
		uint64_t tw3_cmd_fifo_ram_dbe:1;
		uint64_t tw2_cmd_fifo_ram_dbe:1;
		uint64_t tw1_cmd_fifo_ram_dbe:1;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t tp3_sram_dbe:1;
		uint64_t tp2_sram_dbe:1;
		uint64_t tp1_sram_dbe:1;
		uint64_t tp0_sram_dbe:1;
		uint64_t sts3_ram_dbe:1;
		uint64_t sts2_ram_dbe:1;
		uint64_t sts1_ram_dbe:1;
		uint64_t sts0_ram_dbe:1;
		uint64_t std3_ram_dbe:1;
		uint64_t std2_ram_dbe:1;
		uint64_t std1_ram_dbe:1;
		uint64_t std0_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t sc_ram_dbe:1;
		uint64_t reserved_0_42:43;
#else
		uint64_t reserved_0_42:43;
		uint64_t sc_ram_dbe:1;
		uint64_t wt_ram_dbe:1;
		uint64_t std0_ram_dbe:1;
		uint64_t std1_ram_dbe:1;
		uint64_t std2_ram_dbe:1;
		uint64_t std3_ram_dbe:1;
		uint64_t sts0_ram_dbe:1;
		uint64_t sts1_ram_dbe:1;
		uint64_t sts2_ram_dbe:1;
		uint64_t sts3_ram_dbe:1;
		uint64_t tp0_sram_dbe:1;
		uint64_t tp1_sram_dbe:1;
		uint64_t tp2_sram_dbe:1;
		uint64_t tp3_sram_dbe:1;
		uint64_t tw0_cmd_fifo_ram_dbe:1;
		uint64_t tw1_cmd_fifo_ram_dbe:1;
		uint64_t tw2_cmd_fifo_ram_dbe:1;
		uint64_t tw3_cmd_fifo_ram_dbe:1;
		uint64_t rt_ram_dbe:1;
		uint64_t sq_nt_ram_dbe:1;
		uint64_t sq_pt_ram_dbe:1;
#endif
	} s;
	struct cvmx_pko_pse_sq5_ecc_dbe_sts0_s cn78xx;
	struct cvmx_pko_pse_sq5_ecc_dbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq5_ecc_dbe_sts0 cvmx_pko_pse_sq5_ecc_dbe_sts0_t;

union cvmx_pko_pse_sq5_ecc_dbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq5_ecc_dbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pse_sq5_dbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pse_sq5_dbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pse_sq5_ecc_dbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pse_sq5_ecc_dbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq5_ecc_dbe_sts_cmb0 cvmx_pko_pse_sq5_ecc_dbe_sts_cmb0_t;

union cvmx_pko_pse_sq5_ecc_sbe_sts0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq5_ecc_sbe_sts0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t sq_pt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t rt_ram_sbe:1;
		uint64_t tw3_cmd_fifo_ram_sbe:1;
		uint64_t tw2_cmd_fifo_ram_sbe:1;
		uint64_t tw1_cmd_fifo_ram_sbe:1;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t tp3_sram_sbe:1;
		uint64_t tp2_sram_sbe:1;
		uint64_t tp1_sram_sbe:1;
		uint64_t tp0_sram_sbe:1;
		uint64_t sts3_ram_sbe:1;
		uint64_t sts2_ram_sbe:1;
		uint64_t sts1_ram_sbe:1;
		uint64_t sts0_ram_sbe:1;
		uint64_t std3_ram_sbe:1;
		uint64_t std2_ram_sbe:1;
		uint64_t std1_ram_sbe:1;
		uint64_t std0_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t sc_ram_sbe:1;
		uint64_t reserved_0_42:43;
#else
		uint64_t reserved_0_42:43;
		uint64_t sc_ram_sbe:1;
		uint64_t wt_ram_sbe:1;
		uint64_t std0_ram_sbe:1;
		uint64_t std1_ram_sbe:1;
		uint64_t std2_ram_sbe:1;
		uint64_t std3_ram_sbe:1;
		uint64_t sts0_ram_sbe:1;
		uint64_t sts1_ram_sbe:1;
		uint64_t sts2_ram_sbe:1;
		uint64_t sts3_ram_sbe:1;
		uint64_t tp0_sram_sbe:1;
		uint64_t tp1_sram_sbe:1;
		uint64_t tp2_sram_sbe:1;
		uint64_t tp3_sram_sbe:1;
		uint64_t tw0_cmd_fifo_ram_sbe:1;
		uint64_t tw1_cmd_fifo_ram_sbe:1;
		uint64_t tw2_cmd_fifo_ram_sbe:1;
		uint64_t tw3_cmd_fifo_ram_sbe:1;
		uint64_t rt_ram_sbe:1;
		uint64_t sq_nt_ram_sbe:1;
		uint64_t sq_pt_ram_sbe:1;
#endif
	} s;
	struct cvmx_pko_pse_sq5_ecc_sbe_sts0_s cn78xx;
	struct cvmx_pko_pse_sq5_ecc_sbe_sts0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq5_ecc_sbe_sts0 cvmx_pko_pse_sq5_ecc_sbe_sts0_t;

union cvmx_pko_pse_sq5_ecc_sbe_sts_cmb0 {
	uint64_t u64;
	struct cvmx_pko_pse_sq5_ecc_sbe_sts_cmb0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pse_sq5_sbe_cmb0:1;
		uint64_t reserved_0_62:63;
#else
		uint64_t reserved_0_62:63;
		uint64_t pse_sq5_sbe_cmb0:1;
#endif
	} s;
	struct cvmx_pko_pse_sq5_ecc_sbe_sts_cmb0_s cn78xx;
	struct cvmx_pko_pse_sq5_ecc_sbe_sts_cmb0_s cn78xxp2;
};
typedef union cvmx_pko_pse_sq5_ecc_sbe_sts_cmb0 cvmx_pko_pse_sq5_ecc_sbe_sts_cmb0_t;

union cvmx_pko_ptfx_status {
	uint64_t u64;
	struct cvmx_pko_ptfx_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t total_in_flight_cnt:8;
		uint64_t in_flight_cnt:7;
		uint64_t mac_num:5;
#else
		uint64_t mac_num:5;
		uint64_t in_flight_cnt:7;
		uint64_t total_in_flight_cnt:8;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_ptfx_status_s cn73xx;
	struct cvmx_pko_ptfx_status_s cn75xx;
	struct cvmx_pko_ptfx_status_s cn78xx;
	struct cvmx_pko_ptfx_status_s cn78xxp2;
};
typedef union cvmx_pko_ptfx_status cvmx_pko_ptfx_status_t;

union cvmx_pko_ptf_iobp_cfg {
	uint64_t u64;
	struct cvmx_pko_ptf_iobp_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_44_63:20;
		uint64_t iobp1_ds_opt:1;
		uint64_t iobp0_l2_allocate:1;
		uint64_t iobp1_magic_addr:35;
		uint64_t max_read_size:7;
#else
		uint64_t max_read_size:7;
		uint64_t iobp1_magic_addr:35;
		uint64_t iobp0_l2_allocate:1;
		uint64_t iobp1_ds_opt:1;
		uint64_t reserved_44_63:20;
#endif
	} s;
	struct cvmx_pko_ptf_iobp_cfg_s cn73xx;
	struct cvmx_pko_ptf_iobp_cfg_s cn75xx;
	struct cvmx_pko_ptf_iobp_cfg_s cn78xx;
	struct cvmx_pko_ptf_iobp_cfg_s cn78xxp2;
};
typedef union cvmx_pko_ptf_iobp_cfg cvmx_pko_ptf_iobp_cfg_t;

union cvmx_pko_ptgfx_cfg {
	uint64_t u64;
	struct cvmx_pko_ptgfx_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t reset:1;
		uint64_t rate:3;
		uint64_t size:3;
#else
		uint64_t size:3;
		uint64_t rate:3;
		uint64_t reset:1;
		uint64_t reserved_7_63:57;
#endif
	} s;
	struct cvmx_pko_ptgfx_cfg_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t reset:1;
		uint64_t reserved_5_5:1;
		uint64_t rate:2;
		uint64_t size:3;
#else
		uint64_t size:3;
		uint64_t rate:2;
		uint64_t reserved_5_5:1;
		uint64_t reset:1;
		uint64_t reserved_7_63:57;
#endif
	} cn73xx;
	struct cvmx_pko_ptgfx_cfg_cn73xx cn75xx;
	struct cvmx_pko_ptgfx_cfg_s cn78xx;
	struct cvmx_pko_ptgfx_cfg_s cn78xxp2;
};
typedef union cvmx_pko_ptgfx_cfg cvmx_pko_ptgfx_cfg_t;

union cvmx_pko_reg_bist_result {
	uint64_t u64;
	struct cvmx_pko_reg_bist_result_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_0_63:64;
#else
		uint64_t reserved_0_63:64;
#endif
	} s;
	struct cvmx_pko_reg_bist_result_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_27_63:37;
		uint64_t psb2:5;
		uint64_t count:1;
		uint64_t rif:1;
		uint64_t wif:1;
		uint64_t ncb:1;
		uint64_t out:1;
		uint64_t crc:1;
		uint64_t chk:1;
		uint64_t qsb:2;
		uint64_t qcb:2;
		uint64_t pdb:4;
		uint64_t psb:7;
#else
		uint64_t psb:7;
		uint64_t pdb:4;
		uint64_t qcb:2;
		uint64_t qsb:2;
		uint64_t chk:1;
		uint64_t crc:1;
		uint64_t out:1;
		uint64_t ncb:1;
		uint64_t wif:1;
		uint64_t rif:1;
		uint64_t count:1;
		uint64_t psb2:5;
		uint64_t reserved_27_63:37;
#endif
	} cn30xx;
	struct cvmx_pko_reg_bist_result_cn30xx cn31xx;
	struct cvmx_pko_reg_bist_result_cn30xx cn38xx;
	struct cvmx_pko_reg_bist_result_cn30xx cn38xxp2;
	struct cvmx_pko_reg_bist_result_cn50xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_33_63:31;
		uint64_t csr:1;
		uint64_t iob:1;
		uint64_t out_crc:1;
		uint64_t out_ctl:3;
		uint64_t out_sta:1;
		uint64_t out_wif:1;
		uint64_t prt_chk:3;
		uint64_t prt_nxt:1;
		uint64_t prt_psb:6;
		uint64_t ncb_inb:2;
		uint64_t prt_qcb:2;
		uint64_t prt_qsb:3;
		uint64_t dat_dat:4;
		uint64_t dat_ptr:4;
#else
		uint64_t dat_ptr:4;
		uint64_t dat_dat:4;
		uint64_t prt_qsb:3;
		uint64_t prt_qcb:2;
		uint64_t ncb_inb:2;
		uint64_t prt_psb:6;
		uint64_t prt_nxt:1;
		uint64_t prt_chk:3;
		uint64_t out_wif:1;
		uint64_t out_sta:1;
		uint64_t out_ctl:3;
		uint64_t out_crc:1;
		uint64_t iob:1;
		uint64_t csr:1;
		uint64_t reserved_33_63:31;
#endif
	} cn50xx;
	struct cvmx_pko_reg_bist_result_cn52xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_35_63:29;
		uint64_t csr:1;
		uint64_t iob:1;
		uint64_t out_dat:1;
		uint64_t out_ctl:3;
		uint64_t out_sta:1;
		uint64_t out_wif:1;
		uint64_t prt_chk:3;
		uint64_t prt_nxt:1;
		uint64_t prt_psb:8;
		uint64_t ncb_inb:2;
		uint64_t prt_qcb:2;
		uint64_t prt_qsb:3;
		uint64_t prt_ctl:2;
		uint64_t dat_dat:2;
		uint64_t dat_ptr:4;
#else
		uint64_t dat_ptr:4;
		uint64_t dat_dat:2;
		uint64_t prt_ctl:2;
		uint64_t prt_qsb:3;
		uint64_t prt_qcb:2;
		uint64_t ncb_inb:2;
		uint64_t prt_psb:8;
		uint64_t prt_nxt:1;
		uint64_t prt_chk:3;
		uint64_t out_wif:1;
		uint64_t out_sta:1;
		uint64_t out_ctl:3;
		uint64_t out_dat:1;
		uint64_t iob:1;
		uint64_t csr:1;
		uint64_t reserved_35_63:29;
#endif
	} cn52xx;
	struct cvmx_pko_reg_bist_result_cn52xx cn52xxp1;
	struct cvmx_pko_reg_bist_result_cn52xx cn56xx;
	struct cvmx_pko_reg_bist_result_cn52xx cn56xxp1;
	struct cvmx_pko_reg_bist_result_cn50xx cn58xx;
	struct cvmx_pko_reg_bist_result_cn50xx cn58xxp1;
	struct cvmx_pko_reg_bist_result_cn52xx cn61xx;
	struct cvmx_pko_reg_bist_result_cn52xx cn63xx;
	struct cvmx_pko_reg_bist_result_cn52xx cn63xxp1;
	struct cvmx_pko_reg_bist_result_cn52xx cn66xx;
	struct cvmx_pko_reg_bist_result_cn68xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_36_63:28;
		uint64_t crc:1;
		uint64_t csr:1;
		uint64_t iob:1;
		uint64_t out_dat:1;
		uint64_t reserved_31_31:1;
		uint64_t out_ctl:2;
		uint64_t out_sta:1;
		uint64_t out_wif:1;
		uint64_t prt_chk:3;
		uint64_t prt_nxt:1;
		uint64_t prt_psb7:1;
		uint64_t reserved_21_21:1;
		uint64_t prt_psb:6;
		uint64_t ncb_inb:2;
		uint64_t prt_qcb:2;
		uint64_t prt_qsb:3;
		uint64_t prt_ctl:2;
		uint64_t dat_dat:2;
		uint64_t dat_ptr:4;
#else
		uint64_t dat_ptr:4;
		uint64_t dat_dat:2;
		uint64_t prt_ctl:2;
		uint64_t prt_qsb:3;
		uint64_t prt_qcb:2;
		uint64_t ncb_inb:2;
		uint64_t prt_psb:6;
		uint64_t reserved_21_21:1;
		uint64_t prt_psb7:1;
		uint64_t prt_nxt:1;
		uint64_t prt_chk:3;
		uint64_t out_wif:1;
		uint64_t out_sta:1;
		uint64_t out_ctl:2;
		uint64_t reserved_31_31:1;
		uint64_t out_dat:1;
		uint64_t iob:1;
		uint64_t csr:1;
		uint64_t crc:1;
		uint64_t reserved_36_63:28;
#endif
	} cn68xx;
	struct cvmx_pko_reg_bist_result_cn68xxp1 {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_35_63:29;
		uint64_t csr:1;
		uint64_t iob:1;
		uint64_t out_dat:1;
		uint64_t reserved_31_31:1;
		uint64_t out_ctl:2;
		uint64_t out_sta:1;
		uint64_t out_wif:1;
		uint64_t prt_chk:3;
		uint64_t prt_nxt:1;
		uint64_t prt_psb7:1;
		uint64_t reserved_21_21:1;
		uint64_t prt_psb:6;
		uint64_t ncb_inb:2;
		uint64_t prt_qcb:2;
		uint64_t prt_qsb:3;
		uint64_t prt_ctl:2;
		uint64_t dat_dat:2;
		uint64_t dat_ptr:4;
#else
		uint64_t dat_ptr:4;
		uint64_t dat_dat:2;
		uint64_t prt_ctl:2;
		uint64_t prt_qsb:3;
		uint64_t prt_qcb:2;
		uint64_t ncb_inb:2;
		uint64_t prt_psb:6;
		uint64_t reserved_21_21:1;
		uint64_t prt_psb7:1;
		uint64_t prt_nxt:1;
		uint64_t prt_chk:3;
		uint64_t out_wif:1;
		uint64_t out_sta:1;
		uint64_t out_ctl:2;
		uint64_t reserved_31_31:1;
		uint64_t out_dat:1;
		uint64_t iob:1;
		uint64_t csr:1;
		uint64_t reserved_35_63:29;
#endif
	} cn68xxp1;
	struct cvmx_pko_reg_bist_result_cn70xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_30_63:34;
		uint64_t csr:1;
		uint64_t iob:1;
		uint64_t out_dat:1;
		uint64_t out_ctl:1;
		uint64_t out_sta:1;
		uint64_t out_wif:1;
		uint64_t prt_chk:3;
		uint64_t prt_nxt:1;
		uint64_t prt_psb:8;
		uint64_t ncb_inb:1;
		uint64_t prt_qcb:1;
		uint64_t prt_qsb:2;
		uint64_t prt_ctl:2;
		uint64_t dat_dat:2;
		uint64_t dat_ptr:4;
#else
		uint64_t dat_ptr:4;
		uint64_t dat_dat:2;
		uint64_t prt_ctl:2;
		uint64_t prt_qsb:2;
		uint64_t prt_qcb:1;
		uint64_t ncb_inb:1;
		uint64_t prt_psb:8;
		uint64_t prt_nxt:1;
		uint64_t prt_chk:3;
		uint64_t out_wif:1;
		uint64_t out_sta:1;
		uint64_t out_ctl:1;
		uint64_t out_dat:1;
		uint64_t iob:1;
		uint64_t csr:1;
		uint64_t reserved_30_63:34;
#endif
	} cn70xx;
	struct cvmx_pko_reg_bist_result_cn70xx cn70xxp1;
	struct cvmx_pko_reg_bist_result_cn52xx cnf71xx;
};
typedef union cvmx_pko_reg_bist_result cvmx_pko_reg_bist_result_t;

union cvmx_pko_reg_cmd_buf {
	uint64_t u64;
	struct cvmx_pko_reg_cmd_buf_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_23_63:41;
		uint64_t pool:3;
		uint64_t reserved_13_19:7;
		uint64_t size:13;
#else
		uint64_t size:13;
		uint64_t reserved_13_19:7;
		uint64_t pool:3;
		uint64_t reserved_23_63:41;
#endif
	} s;
	struct cvmx_pko_reg_cmd_buf_s cn30xx;
	struct cvmx_pko_reg_cmd_buf_s cn31xx;
	struct cvmx_pko_reg_cmd_buf_s cn38xx;
	struct cvmx_pko_reg_cmd_buf_s cn38xxp2;
	struct cvmx_pko_reg_cmd_buf_s cn50xx;
	struct cvmx_pko_reg_cmd_buf_s cn52xx;
	struct cvmx_pko_reg_cmd_buf_s cn52xxp1;
	struct cvmx_pko_reg_cmd_buf_s cn56xx;
	struct cvmx_pko_reg_cmd_buf_s cn56xxp1;
	struct cvmx_pko_reg_cmd_buf_s cn58xx;
	struct cvmx_pko_reg_cmd_buf_s cn58xxp1;
	struct cvmx_pko_reg_cmd_buf_s cn61xx;
	struct cvmx_pko_reg_cmd_buf_s cn63xx;
	struct cvmx_pko_reg_cmd_buf_s cn63xxp1;
	struct cvmx_pko_reg_cmd_buf_s cn66xx;
	struct cvmx_pko_reg_cmd_buf_s cn68xx;
	struct cvmx_pko_reg_cmd_buf_s cn68xxp1;
	struct cvmx_pko_reg_cmd_buf_cn70xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_23_63:41;
		uint64_t pool:3;
		uint64_t reserved_19_13:7;
		uint64_t size:13;
#else
		uint64_t size:13;
		uint64_t reserved_19_13:7;
		uint64_t pool:3;
		uint64_t reserved_23_63:41;
#endif
	} cn70xx;
	struct cvmx_pko_reg_cmd_buf_cn70xx cn70xxp1;
	struct cvmx_pko_reg_cmd_buf_s cnf71xx;
};
typedef union cvmx_pko_reg_cmd_buf cvmx_pko_reg_cmd_buf_t;

union cvmx_pko_reg_crc_ctlx {
	uint64_t u64;
	struct cvmx_pko_reg_crc_ctlx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t invres:1;
		uint64_t refin:1;
#else
		uint64_t refin:1;
		uint64_t invres:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_pko_reg_crc_ctlx_s cn38xx;
	struct cvmx_pko_reg_crc_ctlx_s cn38xxp2;
	struct cvmx_pko_reg_crc_ctlx_s cn58xx;
	struct cvmx_pko_reg_crc_ctlx_s cn58xxp1;
};
typedef union cvmx_pko_reg_crc_ctlx cvmx_pko_reg_crc_ctlx_t;

union cvmx_pko_reg_crc_enable {
	uint64_t u64;
	struct cvmx_pko_reg_crc_enable_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t enable:32;
#else
		uint64_t enable:32;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_pko_reg_crc_enable_s cn38xx;
	struct cvmx_pko_reg_crc_enable_s cn38xxp2;
	struct cvmx_pko_reg_crc_enable_s cn58xx;
	struct cvmx_pko_reg_crc_enable_s cn58xxp1;
};
typedef union cvmx_pko_reg_crc_enable cvmx_pko_reg_crc_enable_t;

union cvmx_pko_reg_crc_ivx {
	uint64_t u64;
	struct cvmx_pko_reg_crc_ivx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t iv:32;
#else
		uint64_t iv:32;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_pko_reg_crc_ivx_s cn38xx;
	struct cvmx_pko_reg_crc_ivx_s cn38xxp2;
	struct cvmx_pko_reg_crc_ivx_s cn58xx;
	struct cvmx_pko_reg_crc_ivx_s cn58xxp1;
};
typedef union cvmx_pko_reg_crc_ivx cvmx_pko_reg_crc_ivx_t;

union cvmx_pko_reg_debug0 {
	uint64_t u64;
	struct cvmx_pko_reg_debug0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t asserts:64;
#else
		uint64_t asserts:64;
#endif
	} s;
	struct cvmx_pko_reg_debug0_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_17_63:47;
		uint64_t asserts:17;
#else
		uint64_t asserts:17;
		uint64_t reserved_17_63:47;
#endif
	} cn30xx;
	struct cvmx_pko_reg_debug0_cn30xx cn31xx;
	struct cvmx_pko_reg_debug0_cn30xx cn38xx;
	struct cvmx_pko_reg_debug0_cn30xx cn38xxp2;
	struct cvmx_pko_reg_debug0_s cn50xx;
	struct cvmx_pko_reg_debug0_s cn52xx;
	struct cvmx_pko_reg_debug0_s cn52xxp1;
	struct cvmx_pko_reg_debug0_s cn56xx;
	struct cvmx_pko_reg_debug0_s cn56xxp1;
	struct cvmx_pko_reg_debug0_s cn58xx;
	struct cvmx_pko_reg_debug0_s cn58xxp1;
	struct cvmx_pko_reg_debug0_s cn61xx;
	struct cvmx_pko_reg_debug0_s cn63xx;
	struct cvmx_pko_reg_debug0_s cn63xxp1;
	struct cvmx_pko_reg_debug0_s cn66xx;
	struct cvmx_pko_reg_debug0_s cn68xx;
	struct cvmx_pko_reg_debug0_s cn68xxp1;
	struct cvmx_pko_reg_debug0_s cn70xx;
	struct cvmx_pko_reg_debug0_s cn70xxp1;
	struct cvmx_pko_reg_debug0_s cnf71xx;
};
typedef union cvmx_pko_reg_debug0 cvmx_pko_reg_debug0_t;

union cvmx_pko_reg_debug1 {
	uint64_t u64;
	struct cvmx_pko_reg_debug1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t asserts:64;
#else
		uint64_t asserts:64;
#endif
	} s;
	struct cvmx_pko_reg_debug1_s cn50xx;
	struct cvmx_pko_reg_debug1_s cn52xx;
	struct cvmx_pko_reg_debug1_s cn52xxp1;
	struct cvmx_pko_reg_debug1_s cn56xx;
	struct cvmx_pko_reg_debug1_s cn56xxp1;
	struct cvmx_pko_reg_debug1_s cn58xx;
	struct cvmx_pko_reg_debug1_s cn58xxp1;
	struct cvmx_pko_reg_debug1_s cn61xx;
	struct cvmx_pko_reg_debug1_s cn63xx;
	struct cvmx_pko_reg_debug1_s cn63xxp1;
	struct cvmx_pko_reg_debug1_s cn66xx;
	struct cvmx_pko_reg_debug1_s cn68xx;
	struct cvmx_pko_reg_debug1_s cn68xxp1;
	struct cvmx_pko_reg_debug1_s cn70xx;
	struct cvmx_pko_reg_debug1_s cn70xxp1;
	struct cvmx_pko_reg_debug1_s cnf71xx;
};
typedef union cvmx_pko_reg_debug1 cvmx_pko_reg_debug1_t;

union cvmx_pko_reg_debug2 {
	uint64_t u64;
	struct cvmx_pko_reg_debug2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t asserts:64;
#else
		uint64_t asserts:64;
#endif
	} s;
	struct cvmx_pko_reg_debug2_s cn50xx;
	struct cvmx_pko_reg_debug2_s cn52xx;
	struct cvmx_pko_reg_debug2_s cn52xxp1;
	struct cvmx_pko_reg_debug2_s cn56xx;
	struct cvmx_pko_reg_debug2_s cn56xxp1;
	struct cvmx_pko_reg_debug2_s cn58xx;
	struct cvmx_pko_reg_debug2_s cn58xxp1;
	struct cvmx_pko_reg_debug2_s cn61xx;
	struct cvmx_pko_reg_debug2_s cn63xx;
	struct cvmx_pko_reg_debug2_s cn63xxp1;
	struct cvmx_pko_reg_debug2_s cn66xx;
	struct cvmx_pko_reg_debug2_s cn68xx;
	struct cvmx_pko_reg_debug2_s cn68xxp1;
	struct cvmx_pko_reg_debug2_s cn70xx;
	struct cvmx_pko_reg_debug2_s cn70xxp1;
	struct cvmx_pko_reg_debug2_s cnf71xx;
};
typedef union cvmx_pko_reg_debug2 cvmx_pko_reg_debug2_t;

union cvmx_pko_reg_debug3 {
	uint64_t u64;
	struct cvmx_pko_reg_debug3_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t asserts:64;
#else
		uint64_t asserts:64;
#endif
	} s;
	struct cvmx_pko_reg_debug3_s cn50xx;
	struct cvmx_pko_reg_debug3_s cn52xx;
	struct cvmx_pko_reg_debug3_s cn52xxp1;
	struct cvmx_pko_reg_debug3_s cn56xx;
	struct cvmx_pko_reg_debug3_s cn56xxp1;
	struct cvmx_pko_reg_debug3_s cn58xx;
	struct cvmx_pko_reg_debug3_s cn58xxp1;
	struct cvmx_pko_reg_debug3_s cn61xx;
	struct cvmx_pko_reg_debug3_s cn63xx;
	struct cvmx_pko_reg_debug3_s cn63xxp1;
	struct cvmx_pko_reg_debug3_s cn66xx;
	struct cvmx_pko_reg_debug3_s cn68xx;
	struct cvmx_pko_reg_debug3_s cn68xxp1;
	struct cvmx_pko_reg_debug3_s cn70xx;
	struct cvmx_pko_reg_debug3_s cn70xxp1;
	struct cvmx_pko_reg_debug3_s cnf71xx;
};
typedef union cvmx_pko_reg_debug3 cvmx_pko_reg_debug3_t;

union cvmx_pko_reg_debug4 {
	uint64_t u64;
	struct cvmx_pko_reg_debug4_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t asserts:64;
#else
		uint64_t asserts:64;
#endif
	} s;
	struct cvmx_pko_reg_debug4_s cn68xx;
	struct cvmx_pko_reg_debug4_s cn68xxp1;
};
typedef union cvmx_pko_reg_debug4 cvmx_pko_reg_debug4_t;

union cvmx_pko_reg_engine_inflight {
	uint64_t u64;
	struct cvmx_pko_reg_engine_inflight_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t engine15:4;
		uint64_t engine14:4;
		uint64_t engine13:4;
		uint64_t engine12:4;
		uint64_t engine11:4;
		uint64_t engine10:4;
		uint64_t engine9:4;
		uint64_t engine8:4;
		uint64_t engine7:4;
		uint64_t engine6:4;
		uint64_t engine5:4;
		uint64_t engine4:4;
		uint64_t engine3:4;
		uint64_t engine2:4;
		uint64_t engine1:4;
		uint64_t engine0:4;
#else
		uint64_t engine0:4;
		uint64_t engine1:4;
		uint64_t engine2:4;
		uint64_t engine3:4;
		uint64_t engine4:4;
		uint64_t engine5:4;
		uint64_t engine6:4;
		uint64_t engine7:4;
		uint64_t engine8:4;
		uint64_t engine9:4;
		uint64_t engine10:4;
		uint64_t engine11:4;
		uint64_t engine12:4;
		uint64_t engine13:4;
		uint64_t engine14:4;
		uint64_t engine15:4;
#endif
	} s;
	struct cvmx_pko_reg_engine_inflight_cn52xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_40_63:24;
		uint64_t engine9:4;
		uint64_t engine8:4;
		uint64_t engine7:4;
		uint64_t engine6:4;
		uint64_t engine5:4;
		uint64_t engine4:4;
		uint64_t engine3:4;
		uint64_t engine2:4;
		uint64_t engine1:4;
		uint64_t engine0:4;
#else
		uint64_t engine0:4;
		uint64_t engine1:4;
		uint64_t engine2:4;
		uint64_t engine3:4;
		uint64_t engine4:4;
		uint64_t engine5:4;
		uint64_t engine6:4;
		uint64_t engine7:4;
		uint64_t engine8:4;
		uint64_t engine9:4;
		uint64_t reserved_40_63:24;
#endif
	} cn52xx;
	struct cvmx_pko_reg_engine_inflight_cn52xx cn52xxp1;
	struct cvmx_pko_reg_engine_inflight_cn52xx cn56xx;
	struct cvmx_pko_reg_engine_inflight_cn52xx cn56xxp1;
	struct cvmx_pko_reg_engine_inflight_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_56_63:8;
		uint64_t engine13:4;
		uint64_t engine12:4;
		uint64_t engine11:4;
		uint64_t engine10:4;
		uint64_t engine9:4;
		uint64_t engine8:4;
		uint64_t engine7:4;
		uint64_t engine6:4;
		uint64_t engine5:4;
		uint64_t engine4:4;
		uint64_t engine3:4;
		uint64_t engine2:4;
		uint64_t engine1:4;
		uint64_t engine0:4;
#else
		uint64_t engine0:4;
		uint64_t engine1:4;
		uint64_t engine2:4;
		uint64_t engine3:4;
		uint64_t engine4:4;
		uint64_t engine5:4;
		uint64_t engine6:4;
		uint64_t engine7:4;
		uint64_t engine8:4;
		uint64_t engine9:4;
		uint64_t engine10:4;
		uint64_t engine11:4;
		uint64_t engine12:4;
		uint64_t engine13:4;
		uint64_t reserved_56_63:8;
#endif
	} cn61xx;
	struct cvmx_pko_reg_engine_inflight_cn63xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t engine11:4;
		uint64_t engine10:4;
		uint64_t engine9:4;
		uint64_t engine8:4;
		uint64_t engine7:4;
		uint64_t engine6:4;
		uint64_t engine5:4;
		uint64_t engine4:4;
		uint64_t engine3:4;
		uint64_t engine2:4;
		uint64_t engine1:4;
		uint64_t engine0:4;
#else
		uint64_t engine0:4;
		uint64_t engine1:4;
		uint64_t engine2:4;
		uint64_t engine3:4;
		uint64_t engine4:4;
		uint64_t engine5:4;
		uint64_t engine6:4;
		uint64_t engine7:4;
		uint64_t engine8:4;
		uint64_t engine9:4;
		uint64_t engine10:4;
		uint64_t engine11:4;
		uint64_t reserved_48_63:16;
#endif
	} cn63xx;
	struct cvmx_pko_reg_engine_inflight_cn63xx cn63xxp1;
	struct cvmx_pko_reg_engine_inflight_cn61xx cn66xx;
	struct cvmx_pko_reg_engine_inflight_s cn68xx;
	struct cvmx_pko_reg_engine_inflight_s cn68xxp1;
	struct cvmx_pko_reg_engine_inflight_cn61xx cn70xx;
	struct cvmx_pko_reg_engine_inflight_cn61xx cn70xxp1;
	struct cvmx_pko_reg_engine_inflight_cn61xx cnf71xx;
};
typedef union cvmx_pko_reg_engine_inflight cvmx_pko_reg_engine_inflight_t;

union cvmx_pko_reg_engine_inflight1 {
	uint64_t u64;
	struct cvmx_pko_reg_engine_inflight1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t engine19:4;
		uint64_t engine18:4;
		uint64_t engine17:4;
		uint64_t engine16:4;
#else
		uint64_t engine16:4;
		uint64_t engine17:4;
		uint64_t engine18:4;
		uint64_t engine19:4;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_pko_reg_engine_inflight1_s cn68xx;
	struct cvmx_pko_reg_engine_inflight1_s cn68xxp1;
};
typedef union cvmx_pko_reg_engine_inflight1 cvmx_pko_reg_engine_inflight1_t;

union cvmx_pko_reg_engine_storagex {
	uint64_t u64;
	struct cvmx_pko_reg_engine_storagex_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t engine15:4;
		uint64_t engine14:4;
		uint64_t engine13:4;
		uint64_t engine12:4;
		uint64_t engine11:4;
		uint64_t engine10:4;
		uint64_t engine9:4;
		uint64_t engine8:4;
		uint64_t engine7:4;
		uint64_t engine6:4;
		uint64_t engine5:4;
		uint64_t engine4:4;
		uint64_t engine3:4;
		uint64_t engine2:4;
		uint64_t engine1:4;
		uint64_t engine0:4;
#else
		uint64_t engine0:4;
		uint64_t engine1:4;
		uint64_t engine2:4;
		uint64_t engine3:4;
		uint64_t engine4:4;
		uint64_t engine5:4;
		uint64_t engine6:4;
		uint64_t engine7:4;
		uint64_t engine8:4;
		uint64_t engine9:4;
		uint64_t engine10:4;
		uint64_t engine11:4;
		uint64_t engine12:4;
		uint64_t engine13:4;
		uint64_t engine14:4;
		uint64_t engine15:4;
#endif
	} s;
	struct cvmx_pko_reg_engine_storagex_s cn68xx;
	struct cvmx_pko_reg_engine_storagex_s cn68xxp1;
};
typedef union cvmx_pko_reg_engine_storagex cvmx_pko_reg_engine_storagex_t;

union cvmx_pko_reg_engine_thresh {
	uint64_t u64;
	struct cvmx_pko_reg_engine_thresh_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t mask:20;
#else
		uint64_t mask:20;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_pko_reg_engine_thresh_cn52xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t mask:10;
#else
		uint64_t mask:10;
		uint64_t reserved_10_63:54;
#endif
	} cn52xx;
	struct cvmx_pko_reg_engine_thresh_cn52xx cn52xxp1;
	struct cvmx_pko_reg_engine_thresh_cn52xx cn56xx;
	struct cvmx_pko_reg_engine_thresh_cn52xx cn56xxp1;
	struct cvmx_pko_reg_engine_thresh_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t mask:14;
#else
		uint64_t mask:14;
		uint64_t reserved_14_63:50;
#endif
	} cn61xx;
	struct cvmx_pko_reg_engine_thresh_cn63xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t mask:12;
#else
		uint64_t mask:12;
		uint64_t reserved_12_63:52;
#endif
	} cn63xx;
	struct cvmx_pko_reg_engine_thresh_cn63xx cn63xxp1;
	struct cvmx_pko_reg_engine_thresh_cn61xx cn66xx;
	struct cvmx_pko_reg_engine_thresh_s cn68xx;
	struct cvmx_pko_reg_engine_thresh_s cn68xxp1;
	struct cvmx_pko_reg_engine_thresh_cn61xx cn70xx;
	struct cvmx_pko_reg_engine_thresh_cn61xx cn70xxp1;
	struct cvmx_pko_reg_engine_thresh_cn61xx cnf71xx;
};
typedef union cvmx_pko_reg_engine_thresh cvmx_pko_reg_engine_thresh_t;

union cvmx_pko_reg_error {
	uint64_t u64;
	struct cvmx_pko_reg_error_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t loopback:1;
		uint64_t currzero:1;
		uint64_t doorbell:1;
		uint64_t parity:1;
#else
		uint64_t parity:1;
		uint64_t doorbell:1;
		uint64_t currzero:1;
		uint64_t loopback:1;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_pko_reg_error_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t doorbell:1;
		uint64_t parity:1;
#else
		uint64_t parity:1;
		uint64_t doorbell:1;
		uint64_t reserved_2_63:62;
#endif
	} cn30xx;
	struct cvmx_pko_reg_error_cn30xx cn31xx;
	struct cvmx_pko_reg_error_cn30xx cn38xx;
	struct cvmx_pko_reg_error_cn30xx cn38xxp2;
	struct cvmx_pko_reg_error_cn50xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_3_63:61;
		uint64_t currzero:1;
		uint64_t doorbell:1;
		uint64_t parity:1;
#else
		uint64_t parity:1;
		uint64_t doorbell:1;
		uint64_t currzero:1;
		uint64_t reserved_3_63:61;
#endif
	} cn50xx;
	struct cvmx_pko_reg_error_cn50xx cn52xx;
	struct cvmx_pko_reg_error_cn50xx cn52xxp1;
	struct cvmx_pko_reg_error_cn50xx cn56xx;
	struct cvmx_pko_reg_error_cn50xx cn56xxp1;
	struct cvmx_pko_reg_error_cn50xx cn58xx;
	struct cvmx_pko_reg_error_cn50xx cn58xxp1;
	struct cvmx_pko_reg_error_cn50xx cn61xx;
	struct cvmx_pko_reg_error_cn50xx cn63xx;
	struct cvmx_pko_reg_error_cn50xx cn63xxp1;
	struct cvmx_pko_reg_error_cn50xx cn66xx;
	struct cvmx_pko_reg_error_s cn68xx;
	struct cvmx_pko_reg_error_s cn68xxp1;
	struct cvmx_pko_reg_error_cn50xx cn70xx;
	struct cvmx_pko_reg_error_cn50xx cn70xxp1;
	struct cvmx_pko_reg_error_cn50xx cnf71xx;
};
typedef union cvmx_pko_reg_error cvmx_pko_reg_error_t;

union cvmx_pko_reg_flags {
	uint64_t u64;
	struct cvmx_pko_reg_flags_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t dis_perf3:1;
		uint64_t dis_perf2:1;
		uint64_t dis_perf1:1;
		uint64_t dis_perf0:1;
		uint64_t ena_throttle:1;
		uint64_t reset:1;
		uint64_t store_be:1;
		uint64_t ena_dwb:1;
		uint64_t ena_pko:1;
#else
		uint64_t ena_pko:1;
		uint64_t ena_dwb:1;
		uint64_t store_be:1;
		uint64_t reset:1;
		uint64_t ena_throttle:1;
		uint64_t dis_perf0:1;
		uint64_t dis_perf1:1;
		uint64_t dis_perf2:1;
		uint64_t dis_perf3:1;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_pko_reg_flags_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t reset:1;
		uint64_t store_be:1;
		uint64_t ena_dwb:1;
		uint64_t ena_pko:1;
#else
		uint64_t ena_pko:1;
		uint64_t ena_dwb:1;
		uint64_t store_be:1;
		uint64_t reset:1;
		uint64_t reserved_4_63:60;
#endif
	} cn30xx;
	struct cvmx_pko_reg_flags_cn30xx cn31xx;
	struct cvmx_pko_reg_flags_cn30xx cn38xx;
	struct cvmx_pko_reg_flags_cn30xx cn38xxp2;
	struct cvmx_pko_reg_flags_cn30xx cn50xx;
	struct cvmx_pko_reg_flags_cn30xx cn52xx;
	struct cvmx_pko_reg_flags_cn30xx cn52xxp1;
	struct cvmx_pko_reg_flags_cn30xx cn56xx;
	struct cvmx_pko_reg_flags_cn30xx cn56xxp1;
	struct cvmx_pko_reg_flags_cn30xx cn58xx;
	struct cvmx_pko_reg_flags_cn30xx cn58xxp1;
	struct cvmx_pko_reg_flags_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t dis_perf3:1;
		uint64_t dis_perf2:1;
		uint64_t reserved_4_6:3;
		uint64_t reset:1;
		uint64_t store_be:1;
		uint64_t ena_dwb:1;
		uint64_t ena_pko:1;
#else
		uint64_t ena_pko:1;
		uint64_t ena_dwb:1;
		uint64_t store_be:1;
		uint64_t reset:1;
		uint64_t reserved_4_6:3;
		uint64_t dis_perf2:1;
		uint64_t dis_perf3:1;
		uint64_t reserved_9_63:55;
#endif
	} cn61xx;
	struct cvmx_pko_reg_flags_cn30xx cn63xx;
	struct cvmx_pko_reg_flags_cn30xx cn63xxp1;
	struct cvmx_pko_reg_flags_cn61xx cn66xx;
	struct cvmx_pko_reg_flags_s cn68xx;
	struct cvmx_pko_reg_flags_cn68xxp1 {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t dis_perf1:1;
		uint64_t dis_perf0:1;
		uint64_t ena_throttle:1;
		uint64_t reset:1;
		uint64_t store_be:1;
		uint64_t ena_dwb:1;
		uint64_t ena_pko:1;
#else
		uint64_t ena_pko:1;
		uint64_t ena_dwb:1;
		uint64_t store_be:1;
		uint64_t reset:1;
		uint64_t ena_throttle:1;
		uint64_t dis_perf0:1;
		uint64_t dis_perf1:1;
		uint64_t reserved_7_63:57;
#endif
	} cn68xxp1;
	struct cvmx_pko_reg_flags_cn61xx cn70xx;
	struct cvmx_pko_reg_flags_cn61xx cn70xxp1;
	struct cvmx_pko_reg_flags_cn61xx cnf71xx;
};
typedef union cvmx_pko_reg_flags cvmx_pko_reg_flags_t;

union cvmx_pko_reg_gmx_port_mode {
	uint64_t u64;
	struct cvmx_pko_reg_gmx_port_mode_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_6_63:58;
		uint64_t mode1:3;
		uint64_t mode0:3;
#else
		uint64_t mode0:3;
		uint64_t mode1:3;
		uint64_t reserved_6_63:58;
#endif
	} s;
	struct cvmx_pko_reg_gmx_port_mode_s cn30xx;
	struct cvmx_pko_reg_gmx_port_mode_s cn31xx;
	struct cvmx_pko_reg_gmx_port_mode_s cn38xx;
	struct cvmx_pko_reg_gmx_port_mode_s cn38xxp2;
	struct cvmx_pko_reg_gmx_port_mode_s cn50xx;
	struct cvmx_pko_reg_gmx_port_mode_s cn52xx;
	struct cvmx_pko_reg_gmx_port_mode_s cn52xxp1;
	struct cvmx_pko_reg_gmx_port_mode_s cn56xx;
	struct cvmx_pko_reg_gmx_port_mode_s cn56xxp1;
	struct cvmx_pko_reg_gmx_port_mode_s cn58xx;
	struct cvmx_pko_reg_gmx_port_mode_s cn58xxp1;
	struct cvmx_pko_reg_gmx_port_mode_s cn61xx;
	struct cvmx_pko_reg_gmx_port_mode_s cn63xx;
	struct cvmx_pko_reg_gmx_port_mode_s cn63xxp1;
	struct cvmx_pko_reg_gmx_port_mode_s cn66xx;
	struct cvmx_pko_reg_gmx_port_mode_s cn70xx;
	struct cvmx_pko_reg_gmx_port_mode_s cn70xxp1;
	struct cvmx_pko_reg_gmx_port_mode_s cnf71xx;
};
typedef union cvmx_pko_reg_gmx_port_mode cvmx_pko_reg_gmx_port_mode_t;

union cvmx_pko_reg_int_mask {
	uint64_t u64;
	struct cvmx_pko_reg_int_mask_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t loopback:1;
		uint64_t currzero:1;
		uint64_t doorbell:1;
		uint64_t parity:1;
#else
		uint64_t parity:1;
		uint64_t doorbell:1;
		uint64_t currzero:1;
		uint64_t loopback:1;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_pko_reg_int_mask_cn30xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t doorbell:1;
		uint64_t parity:1;
#else
		uint64_t parity:1;
		uint64_t doorbell:1;
		uint64_t reserved_2_63:62;
#endif
	} cn30xx;
	struct cvmx_pko_reg_int_mask_cn30xx cn31xx;
	struct cvmx_pko_reg_int_mask_cn30xx cn38xx;
	struct cvmx_pko_reg_int_mask_cn30xx cn38xxp2;
	struct cvmx_pko_reg_int_mask_cn50xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_3_63:61;
		uint64_t currzero:1;
		uint64_t doorbell:1;
		uint64_t parity:1;
#else
		uint64_t parity:1;
		uint64_t doorbell:1;
		uint64_t currzero:1;
		uint64_t reserved_3_63:61;
#endif
	} cn50xx;
	struct cvmx_pko_reg_int_mask_cn50xx cn52xx;
	struct cvmx_pko_reg_int_mask_cn50xx cn52xxp1;
	struct cvmx_pko_reg_int_mask_cn50xx cn56xx;
	struct cvmx_pko_reg_int_mask_cn50xx cn56xxp1;
	struct cvmx_pko_reg_int_mask_cn50xx cn58xx;
	struct cvmx_pko_reg_int_mask_cn50xx cn58xxp1;
	struct cvmx_pko_reg_int_mask_cn50xx cn61xx;
	struct cvmx_pko_reg_int_mask_cn50xx cn63xx;
	struct cvmx_pko_reg_int_mask_cn50xx cn63xxp1;
	struct cvmx_pko_reg_int_mask_cn50xx cn66xx;
	struct cvmx_pko_reg_int_mask_s cn68xx;
	struct cvmx_pko_reg_int_mask_s cn68xxp1;
	struct cvmx_pko_reg_int_mask_cn50xx cn70xx;
	struct cvmx_pko_reg_int_mask_cn50xx cn70xxp1;
	struct cvmx_pko_reg_int_mask_cn50xx cnf71xx;
};
typedef union cvmx_pko_reg_int_mask cvmx_pko_reg_int_mask_t;

union cvmx_pko_reg_loopback_bpid {
	uint64_t u64;
	struct cvmx_pko_reg_loopback_bpid_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_59_63:5;
		uint64_t bpid7:6;
		uint64_t reserved_52_52:1;
		uint64_t bpid6:6;
		uint64_t reserved_45_45:1;
		uint64_t bpid5:6;
		uint64_t reserved_38_38:1;
		uint64_t bpid4:6;
		uint64_t reserved_31_31:1;
		uint64_t bpid3:6;
		uint64_t reserved_24_24:1;
		uint64_t bpid2:6;
		uint64_t reserved_17_17:1;
		uint64_t bpid1:6;
		uint64_t reserved_10_10:1;
		uint64_t bpid0:6;
		uint64_t reserved_0_3:4;
#else
		uint64_t reserved_0_3:4;
		uint64_t bpid0:6;
		uint64_t reserved_10_10:1;
		uint64_t bpid1:6;
		uint64_t reserved_17_17:1;
		uint64_t bpid2:6;
		uint64_t reserved_24_24:1;
		uint64_t bpid3:6;
		uint64_t reserved_31_31:1;
		uint64_t bpid4:6;
		uint64_t reserved_38_38:1;
		uint64_t bpid5:6;
		uint64_t reserved_45_45:1;
		uint64_t bpid6:6;
		uint64_t reserved_52_52:1;
		uint64_t bpid7:6;
		uint64_t reserved_59_63:5;
#endif
	} s;
	struct cvmx_pko_reg_loopback_bpid_s cn68xx;
	struct cvmx_pko_reg_loopback_bpid_s cn68xxp1;
};
typedef union cvmx_pko_reg_loopback_bpid cvmx_pko_reg_loopback_bpid_t;

union cvmx_pko_reg_loopback_pkind {
	uint64_t u64;
	struct cvmx_pko_reg_loopback_pkind_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_59_63:5;
		uint64_t pkind7:6;
		uint64_t reserved_52_52:1;
		uint64_t pkind6:6;
		uint64_t reserved_45_45:1;
		uint64_t pkind5:6;
		uint64_t reserved_38_38:1;
		uint64_t pkind4:6;
		uint64_t reserved_31_31:1;
		uint64_t pkind3:6;
		uint64_t reserved_24_24:1;
		uint64_t pkind2:6;
		uint64_t reserved_17_17:1;
		uint64_t pkind1:6;
		uint64_t reserved_10_10:1;
		uint64_t pkind0:6;
		uint64_t num_ports:4;
#else
		uint64_t num_ports:4;
		uint64_t pkind0:6;
		uint64_t reserved_10_10:1;
		uint64_t pkind1:6;
		uint64_t reserved_17_17:1;
		uint64_t pkind2:6;
		uint64_t reserved_24_24:1;
		uint64_t pkind3:6;
		uint64_t reserved_31_31:1;
		uint64_t pkind4:6;
		uint64_t reserved_38_38:1;
		uint64_t pkind5:6;
		uint64_t reserved_45_45:1;
		uint64_t pkind6:6;
		uint64_t reserved_52_52:1;
		uint64_t pkind7:6;
		uint64_t reserved_59_63:5;
#endif
	} s;
	struct cvmx_pko_reg_loopback_pkind_s cn68xx;
	struct cvmx_pko_reg_loopback_pkind_s cn68xxp1;
};
typedef union cvmx_pko_reg_loopback_pkind cvmx_pko_reg_loopback_pkind_t;

union cvmx_pko_reg_min_pkt {
	uint64_t u64;
	struct cvmx_pko_reg_min_pkt_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t size7:8;
		uint64_t size6:8;
		uint64_t size5:8;
		uint64_t size4:8;
		uint64_t size3:8;
		uint64_t size2:8;
		uint64_t size1:8;
		uint64_t size0:8;
#else
		uint64_t size0:8;
		uint64_t size1:8;
		uint64_t size2:8;
		uint64_t size3:8;
		uint64_t size4:8;
		uint64_t size5:8;
		uint64_t size6:8;
		uint64_t size7:8;
#endif
	} s;
	struct cvmx_pko_reg_min_pkt_s cn68xx;
	struct cvmx_pko_reg_min_pkt_s cn68xxp1;
};
typedef union cvmx_pko_reg_min_pkt cvmx_pko_reg_min_pkt_t;

union cvmx_pko_reg_preempt {
	uint64_t u64;
	struct cvmx_pko_reg_preempt_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t min_size:16;
#else
		uint64_t min_size:16;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_pko_reg_preempt_s cn52xx;
	struct cvmx_pko_reg_preempt_s cn52xxp1;
	struct cvmx_pko_reg_preempt_s cn56xx;
	struct cvmx_pko_reg_preempt_s cn56xxp1;
	struct cvmx_pko_reg_preempt_s cn61xx;
	struct cvmx_pko_reg_preempt_s cn63xx;
	struct cvmx_pko_reg_preempt_s cn63xxp1;
	struct cvmx_pko_reg_preempt_s cn66xx;
	struct cvmx_pko_reg_preempt_s cn68xx;
	struct cvmx_pko_reg_preempt_s cn68xxp1;
	struct cvmx_pko_reg_preempt_s cn70xx;
	struct cvmx_pko_reg_preempt_s cn70xxp1;
	struct cvmx_pko_reg_preempt_s cnf71xx;
};
typedef union cvmx_pko_reg_preempt cvmx_pko_reg_preempt_t;

union cvmx_pko_reg_queue_mode {
	uint64_t u64;
	struct cvmx_pko_reg_queue_mode_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t mode:2;
#else
		uint64_t mode:2;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_pko_reg_queue_mode_s cn30xx;
	struct cvmx_pko_reg_queue_mode_s cn31xx;
	struct cvmx_pko_reg_queue_mode_s cn38xx;
	struct cvmx_pko_reg_queue_mode_s cn38xxp2;
	struct cvmx_pko_reg_queue_mode_s cn50xx;
	struct cvmx_pko_reg_queue_mode_s cn52xx;
	struct cvmx_pko_reg_queue_mode_s cn52xxp1;
	struct cvmx_pko_reg_queue_mode_s cn56xx;
	struct cvmx_pko_reg_queue_mode_s cn56xxp1;
	struct cvmx_pko_reg_queue_mode_s cn58xx;
	struct cvmx_pko_reg_queue_mode_s cn58xxp1;
	struct cvmx_pko_reg_queue_mode_s cn61xx;
	struct cvmx_pko_reg_queue_mode_s cn63xx;
	struct cvmx_pko_reg_queue_mode_s cn63xxp1;
	struct cvmx_pko_reg_queue_mode_s cn66xx;
	struct cvmx_pko_reg_queue_mode_s cn68xx;
	struct cvmx_pko_reg_queue_mode_s cn68xxp1;
	struct cvmx_pko_reg_queue_mode_s cn70xx;
	struct cvmx_pko_reg_queue_mode_s cn70xxp1;
	struct cvmx_pko_reg_queue_mode_s cnf71xx;
};
typedef union cvmx_pko_reg_queue_mode cvmx_pko_reg_queue_mode_t;

union cvmx_pko_reg_queue_preempt {
	uint64_t u64;
	struct cvmx_pko_reg_queue_preempt_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t preemptee:1;
		uint64_t preempter:1;
#else
		uint64_t preempter:1;
		uint64_t preemptee:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_pko_reg_queue_preempt_s cn52xx;
	struct cvmx_pko_reg_queue_preempt_s cn52xxp1;
	struct cvmx_pko_reg_queue_preempt_s cn56xx;
	struct cvmx_pko_reg_queue_preempt_s cn56xxp1;
	struct cvmx_pko_reg_queue_preempt_s cn61xx;
	struct cvmx_pko_reg_queue_preempt_s cn63xx;
	struct cvmx_pko_reg_queue_preempt_s cn63xxp1;
	struct cvmx_pko_reg_queue_preempt_s cn66xx;
	struct cvmx_pko_reg_queue_preempt_s cn68xx;
	struct cvmx_pko_reg_queue_preempt_s cn68xxp1;
	struct cvmx_pko_reg_queue_preempt_s cn70xx;
	struct cvmx_pko_reg_queue_preempt_s cn70xxp1;
	struct cvmx_pko_reg_queue_preempt_s cnf71xx;
};
typedef union cvmx_pko_reg_queue_preempt cvmx_pko_reg_queue_preempt_t;

union cvmx_pko_reg_queue_ptrs1 {
	uint64_t u64;
	struct cvmx_pko_reg_queue_ptrs1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t idx3:1;
		uint64_t qid7:1;
#else
		uint64_t qid7:1;
		uint64_t idx3:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_pko_reg_queue_ptrs1_s cn50xx;
	struct cvmx_pko_reg_queue_ptrs1_s cn52xx;
	struct cvmx_pko_reg_queue_ptrs1_s cn52xxp1;
	struct cvmx_pko_reg_queue_ptrs1_s cn56xx;
	struct cvmx_pko_reg_queue_ptrs1_s cn56xxp1;
	struct cvmx_pko_reg_queue_ptrs1_s cn58xx;
	struct cvmx_pko_reg_queue_ptrs1_s cn58xxp1;
	struct cvmx_pko_reg_queue_ptrs1_s cn61xx;
	struct cvmx_pko_reg_queue_ptrs1_s cn63xx;
	struct cvmx_pko_reg_queue_ptrs1_s cn63xxp1;
	struct cvmx_pko_reg_queue_ptrs1_s cn66xx;
	struct cvmx_pko_reg_queue_ptrs1_s cn70xx;
	struct cvmx_pko_reg_queue_ptrs1_s cn70xxp1;
	struct cvmx_pko_reg_queue_ptrs1_s cnf71xx;
};
typedef union cvmx_pko_reg_queue_ptrs1 cvmx_pko_reg_queue_ptrs1_t;

union cvmx_pko_reg_read_idx {
	uint64_t u64;
	struct cvmx_pko_reg_read_idx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t inc:8;
		uint64_t index:8;
#else
		uint64_t index:8;
		uint64_t inc:8;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_pko_reg_read_idx_s cn30xx;
	struct cvmx_pko_reg_read_idx_s cn31xx;
	struct cvmx_pko_reg_read_idx_s cn38xx;
	struct cvmx_pko_reg_read_idx_s cn38xxp2;
	struct cvmx_pko_reg_read_idx_s cn50xx;
	struct cvmx_pko_reg_read_idx_s cn52xx;
	struct cvmx_pko_reg_read_idx_s cn52xxp1;
	struct cvmx_pko_reg_read_idx_s cn56xx;
	struct cvmx_pko_reg_read_idx_s cn56xxp1;
	struct cvmx_pko_reg_read_idx_s cn58xx;
	struct cvmx_pko_reg_read_idx_s cn58xxp1;
	struct cvmx_pko_reg_read_idx_s cn61xx;
	struct cvmx_pko_reg_read_idx_s cn63xx;
	struct cvmx_pko_reg_read_idx_s cn63xxp1;
	struct cvmx_pko_reg_read_idx_s cn66xx;
	struct cvmx_pko_reg_read_idx_s cn68xx;
	struct cvmx_pko_reg_read_idx_s cn68xxp1;
	struct cvmx_pko_reg_read_idx_s cn70xx;
	struct cvmx_pko_reg_read_idx_s cn70xxp1;
	struct cvmx_pko_reg_read_idx_s cnf71xx;
};
typedef union cvmx_pko_reg_read_idx cvmx_pko_reg_read_idx_t;

union cvmx_pko_reg_throttle {
	uint64_t u64;
	struct cvmx_pko_reg_throttle_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t int_mask:32;
#else
		uint64_t int_mask:32;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_pko_reg_throttle_s cn68xx;
	struct cvmx_pko_reg_throttle_s cn68xxp1;
};
typedef union cvmx_pko_reg_throttle cvmx_pko_reg_throttle_t;

union cvmx_pko_reg_timestamp {
	uint64_t u64;
	struct cvmx_pko_reg_timestamp_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t wqe_word:4;
#else
		uint64_t wqe_word:4;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_pko_reg_timestamp_s cn61xx;
	struct cvmx_pko_reg_timestamp_s cn63xx;
	struct cvmx_pko_reg_timestamp_s cn63xxp1;
	struct cvmx_pko_reg_timestamp_s cn66xx;
	struct cvmx_pko_reg_timestamp_s cn68xx;
	struct cvmx_pko_reg_timestamp_s cn68xxp1;
	struct cvmx_pko_reg_timestamp_s cn70xx;
	struct cvmx_pko_reg_timestamp_s cn70xxp1;
	struct cvmx_pko_reg_timestamp_s cnf71xx;
};
typedef union cvmx_pko_reg_timestamp cvmx_pko_reg_timestamp_t;

union cvmx_pko_shaper_cfg {
	uint64_t u64;
	struct cvmx_pko_shaper_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t color_aware:1;
		uint64_t red_send_as_yellow:1;
#else
		uint64_t red_send_as_yellow:1;
		uint64_t color_aware:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_pko_shaper_cfg_s cn73xx;
	struct cvmx_pko_shaper_cfg_s cn75xx;
	struct cvmx_pko_shaper_cfg_s cn78xx;
	struct cvmx_pko_shaper_cfg_s cn78xxp2;
};
typedef union cvmx_pko_shaper_cfg cvmx_pko_shaper_cfg_t;

union cvmx_pko_state_uid_in_usex_rd {
	uint64_t u64;
	struct cvmx_pko_state_uid_in_usex_rd_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t in_use:64;
#else
		uint64_t in_use:64;
#endif
	} s;
	struct cvmx_pko_state_uid_in_usex_rd_s cn73xx;
	struct cvmx_pko_state_uid_in_usex_rd_s cn75xx;
	struct cvmx_pko_state_uid_in_usex_rd_s cn78xxp2;
};
typedef union cvmx_pko_state_uid_in_usex_rd cvmx_pko_state_uid_in_usex_rd_t;

union cvmx_pko_status {
	uint64_t u64;
	struct cvmx_pko_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pko_rdy:1;
		uint64_t reserved_24_62:39;
		uint64_t c2qlut_rdy:1;
		uint64_t ppfi_rdy:1;
		uint64_t iobp1_rdy:1;
		uint64_t ncb_rdy:1;
		uint64_t pse_rdy:1;
		uint64_t pdm_rdy:1;
		uint64_t peb_rdy:1;
		uint64_t csi_rdy:1;
		uint64_t reserved_5_15:11;
		uint64_t ncb_bist_status:1;
		uint64_t c2qlut_bist_status:1;
		uint64_t pdm_bist_status:1;
		uint64_t peb_bist_status:1;
		uint64_t pse_bist_status:1;
#else
		uint64_t pse_bist_status:1;
		uint64_t peb_bist_status:1;
		uint64_t pdm_bist_status:1;
		uint64_t c2qlut_bist_status:1;
		uint64_t ncb_bist_status:1;
		uint64_t reserved_5_15:11;
		uint64_t csi_rdy:1;
		uint64_t peb_rdy:1;
		uint64_t pdm_rdy:1;
		uint64_t pse_rdy:1;
		uint64_t ncb_rdy:1;
		uint64_t iobp1_rdy:1;
		uint64_t ppfi_rdy:1;
		uint64_t c2qlut_rdy:1;
		uint64_t reserved_24_62:39;
		uint64_t pko_rdy:1;
#endif
	} s;
	struct cvmx_pko_status_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pko_rdy:1;
		uint64_t reserved_62_24:39;
		uint64_t c2qlut_rdy:1;
		uint64_t ppfi_rdy:1;
		uint64_t iobp1_rdy:1;
		uint64_t ncb_rdy:1;
		uint64_t pse_rdy:1;
		uint64_t pdm_rdy:1;
		uint64_t peb_rdy:1;
		uint64_t csi_rdy:1;
		uint64_t reserved_15_5:11;
		uint64_t ncb_bist_status:1;
		uint64_t c2qlut_bist_status:1;
		uint64_t pdm_bist_status:1;
		uint64_t peb_bist_status:1;
		uint64_t pse_bist_status:1;
#else
		uint64_t pse_bist_status:1;
		uint64_t peb_bist_status:1;
		uint64_t pdm_bist_status:1;
		uint64_t c2qlut_bist_status:1;
		uint64_t ncb_bist_status:1;
		uint64_t reserved_15_5:11;
		uint64_t csi_rdy:1;
		uint64_t peb_rdy:1;
		uint64_t pdm_rdy:1;
		uint64_t pse_rdy:1;
		uint64_t ncb_rdy:1;
		uint64_t iobp1_rdy:1;
		uint64_t ppfi_rdy:1;
		uint64_t c2qlut_rdy:1;
		uint64_t reserved_62_24:39;
		uint64_t pko_rdy:1;
#endif
	} cn73xx;
	struct cvmx_pko_status_cn73xx cn75xx;
	struct cvmx_pko_status_cn73xx cn78xx;
	struct cvmx_pko_status_cn73xx cn78xxp2;
};
typedef union cvmx_pko_status cvmx_pko_status_t;

union cvmx_pko_txfx_pkt_cnt_rd {
	uint64_t u64;
	struct cvmx_pko_txfx_pkt_cnt_rd_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t cnt:8;
#else
		uint64_t cnt:8;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_pko_txfx_pkt_cnt_rd_s cn73xx;
	struct cvmx_pko_txfx_pkt_cnt_rd_s cn75xx;
	struct cvmx_pko_txfx_pkt_cnt_rd_s cn78xxp2;
};
typedef union cvmx_pko_txfx_pkt_cnt_rd cvmx_pko_txfx_pkt_cnt_rd_t;

#endif
