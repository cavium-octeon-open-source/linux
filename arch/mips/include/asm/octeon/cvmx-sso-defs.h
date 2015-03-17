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

#ifndef __CVMX_SSO_DEFS_H__
#define __CVMX_SSO_DEFS_H__

#define CVMX_SSO_ACTIVE_CYCLES (CVMX_ADD_IO_SEG(0x00016700000010E8ull))
#define CVMX_SSO_ACTIVE_CYCLESX(offset) (CVMX_ADD_IO_SEG(0x0001670000001100ull) + ((offset) & 3) * 8)
#define CVMX_SSO_AW_ADD (CVMX_ADD_IO_SEG(0x0001670000002080ull))
#define CVMX_SSO_AW_CFG (CVMX_ADD_IO_SEG(0x00016700000010F0ull))
#define CVMX_SSO_AW_ECO (CVMX_ADD_IO_SEG(0x0001670000001030ull))
#define CVMX_SSO_AW_READ_ARB (CVMX_ADD_IO_SEG(0x0001670000002090ull))
#define CVMX_SSO_AW_STATUS (CVMX_ADD_IO_SEG(0x00016700000010E0ull))
#define CVMX_SSO_AW_TAG_LATENCY_PC (CVMX_ADD_IO_SEG(0x00016700000020A8ull))
#define CVMX_SSO_AW_TAG_REQ_PC (CVMX_ADD_IO_SEG(0x00016700000020A0ull))
#define CVMX_SSO_AW_WE (CVMX_ADD_IO_SEG(0x0001670000001080ull))
#define CVMX_SSO_BIST_STAT (CVMX_ADD_IO_SEG(0x0001670000001078ull))
#define CVMX_SSO_BIST_STATUS0 (CVMX_ADD_IO_SEG(0x0001670000001200ull))
#define CVMX_SSO_BIST_STATUS1 (CVMX_ADD_IO_SEG(0x0001670000001208ull))
#define CVMX_SSO_BIST_STATUS2 (CVMX_ADD_IO_SEG(0x0001670000001210ull))
#define CVMX_SSO_CFG (CVMX_ADD_IO_SEG(0x0001670000001088ull))
#define CVMX_SSO_DS_PC (CVMX_ADD_IO_SEG(0x0001670000001070ull))
#define CVMX_SSO_ECC_CTL0 (CVMX_ADD_IO_SEG(0x0001670000001280ull))
#define CVMX_SSO_ECC_CTL1 (CVMX_ADD_IO_SEG(0x0001670000001288ull))
#define CVMX_SSO_ECC_CTL2 (CVMX_ADD_IO_SEG(0x0001670000001290ull))
#define CVMX_SSO_ERR (CVMX_ADD_IO_SEG(0x0001670000001038ull))
#define CVMX_SSO_ERR0 (CVMX_ADD_IO_SEG(0x0001670000001240ull))
#define CVMX_SSO_ERR1 (CVMX_ADD_IO_SEG(0x0001670000001248ull))
#define CVMX_SSO_ERR2 (CVMX_ADD_IO_SEG(0x0001670000001250ull))
#define CVMX_SSO_ERR_ENB (CVMX_ADD_IO_SEG(0x0001670000001030ull))
#define CVMX_SSO_FIDX_ECC_CTL (CVMX_ADD_IO_SEG(0x00016700000010D0ull))
#define CVMX_SSO_FIDX_ECC_ST (CVMX_ADD_IO_SEG(0x00016700000010D8ull))
#define CVMX_SSO_FPAGE_CNT (CVMX_ADD_IO_SEG(0x0001670000001090ull))
#define CVMX_SSO_GRPX_AQ_CNT(offset) (CVMX_ADD_IO_SEG(0x0001670020000700ull) + ((offset) & 255) * 0x10000ull)
#define CVMX_SSO_GRPX_AQ_THR(offset) (CVMX_ADD_IO_SEG(0x0001670020000800ull) + ((offset) & 255) * 0x10000ull)
#define CVMX_SSO_GRPX_DS_PC(offset) (CVMX_ADD_IO_SEG(0x0001670020001400ull) + ((offset) & 255) * 0x10000ull)
#define CVMX_SSO_GRPX_EXT_PC(offset) (CVMX_ADD_IO_SEG(0x0001670020001100ull) + ((offset) & 255) * 0x10000ull)
#define CVMX_SSO_GRPX_IAQ_THR(offset) (CVMX_ADD_IO_SEG(0x0001670020000000ull) + ((offset) & 255) * 0x10000ull)
#define CVMX_SSO_GRPX_INT(offset) (CVMX_ADD_IO_SEG(0x0001670020000400ull) + ((offset) & 255) * 0x10000ull)
#define CVMX_SSO_GRPX_INT_CNT(offset) (CVMX_ADD_IO_SEG(0x0001670020000600ull) + ((offset) & 255) * 0x10000ull)
#define CVMX_SSO_GRPX_INT_THR(offset) (CVMX_ADD_IO_SEG(0x0001670020000500ull) + ((offset) & 255) * 0x10000ull)
#define CVMX_SSO_GRPX_PRI(offset) (CVMX_ADD_IO_SEG(0x0001670020000200ull) + ((offset) & 255) * 0x10000ull)
#define CVMX_SSO_GRPX_TAQ_THR(offset) (CVMX_ADD_IO_SEG(0x0001670020000100ull) + ((offset) & 255) * 0x10000ull)
#define CVMX_SSO_GRPX_TS_PC(offset) (CVMX_ADD_IO_SEG(0x0001670020001300ull) + ((offset) & 255) * 0x10000ull)
#define CVMX_SSO_GRPX_WA_PC(offset) (CVMX_ADD_IO_SEG(0x0001670020001200ull) + ((offset) & 255) * 0x10000ull)
#define CVMX_SSO_GRPX_WS_PC(offset) (CVMX_ADD_IO_SEG(0x0001670020001000ull) + ((offset) & 255) * 0x10000ull)
#define CVMX_SSO_GWE_CFG (CVMX_ADD_IO_SEG(0x0001670000001098ull))
#define CVMX_SSO_GWE_RANDOM (CVMX_ADD_IO_SEG(0x00016700000010B0ull))
#define CVMX_SSO_GW_ECO (CVMX_ADD_IO_SEG(0x0001670000001038ull))
#define CVMX_SSO_IDX_ECC_CTL (CVMX_ADD_IO_SEG(0x00016700000010C0ull))
#define CVMX_SSO_IDX_ECC_ST (CVMX_ADD_IO_SEG(0x00016700000010C8ull))
#define CVMX_SSO_IENTX_LINKS(offset) (CVMX_ADD_IO_SEG(0x00016700A0060000ull) + ((offset) & 4095) * 8)
#define CVMX_SSO_IENTX_PENDTAG(offset) (CVMX_ADD_IO_SEG(0x00016700A0040000ull) + ((offset) & 4095) * 8)
#define CVMX_SSO_IENTX_QLINKS(offset) (CVMX_ADD_IO_SEG(0x00016700A0080000ull) + ((offset) & 4095) * 8)
#define CVMX_SSO_IENTX_TAG(offset) (CVMX_ADD_IO_SEG(0x00016700A0000000ull) + ((offset) & 4095) * 8)
#define CVMX_SSO_IENTX_WQPGRP(offset) (CVMX_ADD_IO_SEG(0x00016700A0020000ull) + ((offset) & 4095) * 8)
#define CVMX_SSO_IPL_CONFX(offset) (CVMX_ADD_IO_SEG(0x0001670080080000ull) + ((offset) & 255) * 8)
#define CVMX_SSO_IPL_DESCHEDX(offset) (CVMX_ADD_IO_SEG(0x0001670080060000ull) + ((offset) & 255) * 8)
#define CVMX_SSO_IPL_FREEX(offset) (CVMX_ADD_IO_SEG(0x0001670080000000ull) + ((offset) & 7) * 8)
#define CVMX_SSO_IPL_IAQX(offset) (CVMX_ADD_IO_SEG(0x0001670080040000ull) + ((offset) & 255) * 8)
#define CVMX_SSO_IQ_CNTX(offset) (CVMX_ADD_IO_SEG(0x0001670000009000ull) + ((offset) & 7) * 8)
#define CVMX_SSO_IQ_COM_CNT (CVMX_ADD_IO_SEG(0x0001670000001058ull))
#define CVMX_SSO_IQ_INT (CVMX_ADD_IO_SEG(0x0001670000001048ull))
#define CVMX_SSO_IQ_INT_EN (CVMX_ADD_IO_SEG(0x0001670000001050ull))
#define CVMX_SSO_IQ_THRX(offset) (CVMX_ADD_IO_SEG(0x000167000000A000ull) + ((offset) & 7) * 8)
#define CVMX_SSO_NOS_CNT (CVMX_ADD_IO_SEG(0x0001670000001040ull))
#define CVMX_SSO_NW_TIM (CVMX_ADD_IO_SEG(0x0001670000001028ull))
#define CVMX_SSO_OTH_ECC_CTL (CVMX_ADD_IO_SEG(0x00016700000010B0ull))
#define CVMX_SSO_OTH_ECC_ST (CVMX_ADD_IO_SEG(0x00016700000010B8ull))
#define CVMX_SSO_PAGE_CNT (CVMX_ADD_IO_SEG(0x0001670000001090ull))
#define CVMX_SSO_PND_ECC_CTL (CVMX_ADD_IO_SEG(0x00016700000010A0ull))
#define CVMX_SSO_PND_ECC_ST (CVMX_ADD_IO_SEG(0x00016700000010A8ull))
#define CVMX_SSO_PPX_ARB(offset) (CVMX_ADD_IO_SEG(0x0001670040000000ull) + ((offset) & 63) * 0x10000ull)
#define CVMX_SSO_PPX_GRP_MSK(offset) (CVMX_ADD_IO_SEG(0x0001670000006000ull) + ((offset) & 31) * 8)
#define CVMX_SSO_PPX_QOS_PRI(offset) (CVMX_ADD_IO_SEG(0x0001670000003000ull) + ((offset) & 31) * 8)
#define CVMX_SSO_PPX_SX_GRPMSKX(a, b, c) (CVMX_ADD_IO_SEG(0x0001670040001000ull) + ((a) << 16) + ((b) << 5) + ((c) << 3))
#define CVMX_SSO_PP_STRICT (CVMX_ADD_IO_SEG(0x00016700000010E0ull))
#define CVMX_SSO_QOSX_RND(offset) (CVMX_ADD_IO_SEG(0x0001670000002000ull) + ((offset) & 7) * 8)
#define CVMX_SSO_QOS_THRX(offset) (CVMX_ADD_IO_SEG(0x000167000000B000ull) + ((offset) & 7) * 8)
#define CVMX_SSO_QOS_WE (CVMX_ADD_IO_SEG(0x0001670000001080ull))
#define CVMX_SSO_RESET CVMX_SSO_RESET_FUNC()
static inline uint64_t CVMX_SSO_RESET_FUNC(void)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN78XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN73XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN75XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00016700000010F8ull);
	case OCTEON_CN68XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00016700000010F0ull);
	}
	return CVMX_ADD_IO_SEG(0x00016700000010F8ull);
}

#define CVMX_SSO_RWQ_HEAD_PTRX(offset) (CVMX_ADD_IO_SEG(0x000167000000C000ull) + ((offset) & 7) * 8)
#define CVMX_SSO_RWQ_POP_FPTR (CVMX_ADD_IO_SEG(0x000167000000C408ull))
#define CVMX_SSO_RWQ_PSH_FPTR (CVMX_ADD_IO_SEG(0x000167000000C400ull))
#define CVMX_SSO_RWQ_TAIL_PTRX(offset) (CVMX_ADD_IO_SEG(0x000167000000C200ull) + ((offset) & 7) * 8)
#define CVMX_SSO_SL_PPX_LINKS(offset) (CVMX_ADD_IO_SEG(0x0001670060000040ull) + ((offset) & 63) * 0x10000ull)
#define CVMX_SSO_SL_PPX_PENDTAG(offset) (CVMX_ADD_IO_SEG(0x0001670060000000ull) + ((offset) & 63) * 0x10000ull)
#define CVMX_SSO_SL_PPX_PENDWQP(offset) (CVMX_ADD_IO_SEG(0x0001670060000010ull) + ((offset) & 63) * 0x10000ull)
#define CVMX_SSO_SL_PPX_TAG(offset) (CVMX_ADD_IO_SEG(0x0001670060000020ull) + ((offset) & 63) * 0x10000ull)
#define CVMX_SSO_SL_PPX_WQP(offset) (CVMX_ADD_IO_SEG(0x0001670060000030ull) + ((offset) & 63) * 0x10000ull)
#define CVMX_SSO_TAQX_LINK(offset) (CVMX_ADD_IO_SEG(0x00016700C0000000ull) + ((offset) & 2047) * 4096)
#define CVMX_SSO_TAQX_WAEX_TAG(offset, block_id) (CVMX_ADD_IO_SEG(0x00016700D0000000ull) + (((offset) & 15) + ((block_id) & 2047) * 0x100ull) * 16)
#define CVMX_SSO_TAQX_WAEX_WQP(offset, block_id) (CVMX_ADD_IO_SEG(0x00016700D0000008ull) + (((offset) & 15) + ((block_id) & 2047) * 0x100ull) * 16)
#define CVMX_SSO_TAQ_ADD (CVMX_ADD_IO_SEG(0x00016700000020E0ull))
#define CVMX_SSO_TAQ_CNT (CVMX_ADD_IO_SEG(0x00016700000020C0ull))
#define CVMX_SSO_TIAQX_STATUS(offset) (CVMX_ADD_IO_SEG(0x00016700000C0000ull) + ((offset) & 255) * 8)
#define CVMX_SSO_TOAQX_STATUS(offset) (CVMX_ADD_IO_SEG(0x00016700000D0000ull) + ((offset) & 255) * 8)
#define CVMX_SSO_TS_PC (CVMX_ADD_IO_SEG(0x0001670000001068ull))
#define CVMX_SSO_WA_COM_PC (CVMX_ADD_IO_SEG(0x0001670000001060ull))
#define CVMX_SSO_WA_PCX(offset) (CVMX_ADD_IO_SEG(0x0001670000005000ull) + ((offset) & 7) * 8)
#define CVMX_SSO_WQ_INT (CVMX_ADD_IO_SEG(0x0001670000001000ull))
#define CVMX_SSO_WQ_INT_CNTX(offset) (CVMX_ADD_IO_SEG(0x0001670000008000ull) + ((offset) & 63) * 8)
#define CVMX_SSO_WQ_INT_PC (CVMX_ADD_IO_SEG(0x0001670000001020ull))
#define CVMX_SSO_WQ_INT_THRX(offset) (CVMX_ADD_IO_SEG(0x0001670000007000ull) + ((offset) & 63) * 8)
#define CVMX_SSO_WQ_IQ_DIS (CVMX_ADD_IO_SEG(0x0001670000001010ull))
#define CVMX_SSO_WS_CFG (CVMX_ADD_IO_SEG(0x0001670000001088ull))
#define CVMX_SSO_WS_ECO (CVMX_ADD_IO_SEG(0x0001670000001048ull))
#define CVMX_SSO_WS_PCX(offset) (CVMX_ADD_IO_SEG(0x0001670000004000ull) + ((offset) & 63) * 8)
#define CVMX_SSO_XAQX_HEAD_NEXT(offset) (CVMX_ADD_IO_SEG(0x00016700000A0000ull) + ((offset) & 255) * 8)
#define CVMX_SSO_XAQX_HEAD_PTR(offset) (CVMX_ADD_IO_SEG(0x0001670000080000ull) + ((offset) & 255) * 8)
#define CVMX_SSO_XAQX_TAIL_NEXT(offset) (CVMX_ADD_IO_SEG(0x00016700000B0000ull) + ((offset) & 255) * 8)
#define CVMX_SSO_XAQX_TAIL_PTR(offset) (CVMX_ADD_IO_SEG(0x0001670000090000ull) + ((offset) & 255) * 8)
#define CVMX_SSO_XAQ_AURA (CVMX_ADD_IO_SEG(0x0001670000002100ull))
#define CVMX_SSO_XAQ_LATENCY_PC (CVMX_ADD_IO_SEG(0x00016700000020B8ull))
#define CVMX_SSO_XAQ_REQ_PC (CVMX_ADD_IO_SEG(0x00016700000020B0ull))

union cvmx_sso_active_cycles {
	uint64_t u64;
	struct cvmx_sso_active_cycles_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t act_cyc:64;
#else
		uint64_t act_cyc:64;
#endif
	} s;
	struct cvmx_sso_active_cycles_s cn68xx;
};
typedef union cvmx_sso_active_cycles cvmx_sso_active_cycles_t;

union cvmx_sso_active_cyclesx {
	uint64_t u64;
	struct cvmx_sso_active_cyclesx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t act_cyc:64;
#else
		uint64_t act_cyc:64;
#endif
	} s;
	struct cvmx_sso_active_cyclesx_s cn73xx;
	struct cvmx_sso_active_cyclesx_s cn75xx;
	struct cvmx_sso_active_cyclesx_s cn78xx;
	struct cvmx_sso_active_cyclesx_s cn78xxp2;
};
typedef union cvmx_sso_active_cyclesx cvmx_sso_active_cyclesx_t;

union cvmx_sso_aw_add {
	uint64_t u64;
	struct cvmx_sso_aw_add_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_30_63:34;
		uint64_t rsvd_free:14;
		uint64_t reserved_0_15:16;
#else
		uint64_t reserved_0_15:16;
		uint64_t rsvd_free:14;
		uint64_t reserved_30_63:34;
#endif
	} s;
	struct cvmx_sso_aw_add_s cn73xx;
	struct cvmx_sso_aw_add_s cn75xx;
	struct cvmx_sso_aw_add_s cn78xx;
	struct cvmx_sso_aw_add_s cn78xxp2;
};
typedef union cvmx_sso_aw_add cvmx_sso_aw_add_t;

union cvmx_sso_aw_cfg {
	uint64_t u64;
	struct cvmx_sso_aw_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t ldt_short:1;
		uint64_t lol:1;
		uint64_t xaq_alloc_dis:1;
		uint64_t ocla_bp:1;
		uint64_t xaq_byp_dis:1;
		uint64_t stt:1;
		uint64_t ldt:1;
		uint64_t ldwb:1;
		uint64_t rwen:1;
#else
		uint64_t rwen:1;
		uint64_t ldwb:1;
		uint64_t ldt:1;
		uint64_t stt:1;
		uint64_t xaq_byp_dis:1;
		uint64_t ocla_bp:1;
		uint64_t xaq_alloc_dis:1;
		uint64_t lol:1;
		uint64_t ldt_short:1;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_sso_aw_cfg_s cn73xx;
	struct cvmx_sso_aw_cfg_s cn75xx;
	struct cvmx_sso_aw_cfg_s cn78xx;
	struct cvmx_sso_aw_cfg_s cn78xxp2;
};
typedef union cvmx_sso_aw_cfg cvmx_sso_aw_cfg_t;

union cvmx_sso_aw_eco {
	uint64_t u64;
	struct cvmx_sso_aw_eco_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t eco_rw:8;
#else
		uint64_t eco_rw:8;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_sso_aw_eco_s cn73xx;
	struct cvmx_sso_aw_eco_s cn75xx;
};
typedef union cvmx_sso_aw_eco cvmx_sso_aw_eco_t;

union cvmx_sso_aw_read_arb {
	uint64_t u64;
	struct cvmx_sso_aw_read_arb_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_30_63:34;
		uint64_t xaq_lev:6;
		uint64_t reserved_21_23:3;
		uint64_t xaq_min:5;
		uint64_t reserved_14_15:2;
		uint64_t aw_tag_lev:6;
		uint64_t reserved_5_7:3;
		uint64_t aw_tag_min:5;
#else
		uint64_t aw_tag_min:5;
		uint64_t reserved_5_7:3;
		uint64_t aw_tag_lev:6;
		uint64_t reserved_14_15:2;
		uint64_t xaq_min:5;
		uint64_t reserved_21_23:3;
		uint64_t xaq_lev:6;
		uint64_t reserved_30_63:34;
#endif
	} s;
	struct cvmx_sso_aw_read_arb_s cn73xx;
	struct cvmx_sso_aw_read_arb_s cn75xx;
	struct cvmx_sso_aw_read_arb_s cn78xx;
	struct cvmx_sso_aw_read_arb_s cn78xxp2;
};
typedef union cvmx_sso_aw_read_arb cvmx_sso_aw_read_arb_t;

union cvmx_sso_aw_status {
	uint64_t u64;
	struct cvmx_sso_aw_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_6_63:58;
		uint64_t xaq_buf_cached:6;
#else
		uint64_t xaq_buf_cached:6;
		uint64_t reserved_6_63:58;
#endif
	} s;
	struct cvmx_sso_aw_status_s cn73xx;
	struct cvmx_sso_aw_status_s cn75xx;
	struct cvmx_sso_aw_status_s cn78xx;
	struct cvmx_sso_aw_status_s cn78xxp2;
};
typedef union cvmx_sso_aw_status cvmx_sso_aw_status_t;

union cvmx_sso_aw_tag_latency_pc {
	uint64_t u64;
	struct cvmx_sso_aw_tag_latency_pc_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t count:64;
#else
		uint64_t count:64;
#endif
	} s;
	struct cvmx_sso_aw_tag_latency_pc_s cn73xx;
	struct cvmx_sso_aw_tag_latency_pc_s cn75xx;
	struct cvmx_sso_aw_tag_latency_pc_s cn78xx;
	struct cvmx_sso_aw_tag_latency_pc_s cn78xxp2;
};
typedef union cvmx_sso_aw_tag_latency_pc cvmx_sso_aw_tag_latency_pc_t;

union cvmx_sso_aw_tag_req_pc {
	uint64_t u64;
	struct cvmx_sso_aw_tag_req_pc_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t count:64;
#else
		uint64_t count:64;
#endif
	} s;
	struct cvmx_sso_aw_tag_req_pc_s cn73xx;
	struct cvmx_sso_aw_tag_req_pc_s cn75xx;
	struct cvmx_sso_aw_tag_req_pc_s cn78xx;
	struct cvmx_sso_aw_tag_req_pc_s cn78xxp2;
};
typedef union cvmx_sso_aw_tag_req_pc cvmx_sso_aw_tag_req_pc_t;

union cvmx_sso_aw_we {
	uint64_t u64;
	struct cvmx_sso_aw_we_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_29_63:35;
		uint64_t rsvd_free:13;
		uint64_t reserved_13_15:3;
		uint64_t free_cnt:13;
#else
		uint64_t free_cnt:13;
		uint64_t reserved_13_15:3;
		uint64_t rsvd_free:13;
		uint64_t reserved_29_63:35;
#endif
	} s;
	struct cvmx_sso_aw_we_s cn73xx;
	struct cvmx_sso_aw_we_s cn75xx;
	struct cvmx_sso_aw_we_s cn78xx;
	struct cvmx_sso_aw_we_s cn78xxp2;
};
typedef union cvmx_sso_aw_we cvmx_sso_aw_we_t;

union cvmx_sso_bist_stat {
	uint64_t u64;
	struct cvmx_sso_bist_stat_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_62_63:2;
		uint64_t odu_pref:2;
		uint64_t reserved_54_59:6;
		uint64_t fptr:2;
		uint64_t reserved_45_51:7;
		uint64_t rwo_dat:1;
		uint64_t rwo:2;
		uint64_t reserved_35_41:7;
		uint64_t rwi_dat:1;
		uint64_t reserved_32_33:2;
		uint64_t soc:1;
		uint64_t reserved_28_30:3;
		uint64_t ncbo:4;
		uint64_t reserved_21_23:3;
		uint64_t index:1;
		uint64_t reserved_17_19:3;
		uint64_t fidx:1;
		uint64_t reserved_10_15:6;
		uint64_t pend:2;
		uint64_t reserved_2_7:6;
		uint64_t oth:2;
#else
		uint64_t oth:2;
		uint64_t reserved_2_7:6;
		uint64_t pend:2;
		uint64_t reserved_10_15:6;
		uint64_t fidx:1;
		uint64_t reserved_17_19:3;
		uint64_t index:1;
		uint64_t reserved_21_23:3;
		uint64_t ncbo:4;
		uint64_t reserved_28_30:3;
		uint64_t soc:1;
		uint64_t reserved_32_33:2;
		uint64_t rwi_dat:1;
		uint64_t reserved_35_41:7;
		uint64_t rwo:2;
		uint64_t rwo_dat:1;
		uint64_t reserved_45_51:7;
		uint64_t fptr:2;
		uint64_t reserved_54_59:6;
		uint64_t odu_pref:2;
		uint64_t reserved_62_63:2;
#endif
	} s;
	struct cvmx_sso_bist_stat_s cn68xx;
	struct cvmx_sso_bist_stat_cn68xxp1 {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_54_63:10;
		uint64_t fptr:2;
		uint64_t reserved_45_51:7;
		uint64_t rwo_dat:1;
		uint64_t rwo:2;
		uint64_t reserved_35_41:7;
		uint64_t rwi_dat:1;
		uint64_t reserved_32_33:2;
		uint64_t soc:1;
		uint64_t reserved_28_30:3;
		uint64_t ncbo:4;
		uint64_t reserved_21_23:3;
		uint64_t index:1;
		uint64_t reserved_17_19:3;
		uint64_t fidx:1;
		uint64_t reserved_10_15:6;
		uint64_t pend:2;
		uint64_t reserved_2_7:6;
		uint64_t oth:2;
#else
		uint64_t oth:2;
		uint64_t reserved_2_7:6;
		uint64_t pend:2;
		uint64_t reserved_10_15:6;
		uint64_t fidx:1;
		uint64_t reserved_17_19:3;
		uint64_t index:1;
		uint64_t reserved_21_23:3;
		uint64_t ncbo:4;
		uint64_t reserved_28_30:3;
		uint64_t soc:1;
		uint64_t reserved_32_33:2;
		uint64_t rwi_dat:1;
		uint64_t reserved_35_41:7;
		uint64_t rwo:2;
		uint64_t rwo_dat:1;
		uint64_t reserved_45_51:7;
		uint64_t fptr:2;
		uint64_t reserved_54_63:10;
#endif
	} cn68xxp1;
};
typedef union cvmx_sso_bist_stat cvmx_sso_bist_stat_t;

union cvmx_sso_bist_status0 {
	uint64_t u64;
	struct cvmx_sso_bist_status0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t bist:10;
#else
		uint64_t bist:10;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_sso_bist_status0_s cn73xx;
	struct cvmx_sso_bist_status0_s cn75xx;
	struct cvmx_sso_bist_status0_s cn78xx;
	struct cvmx_sso_bist_status0_s cn78xxp2;
};
typedef union cvmx_sso_bist_status0 cvmx_sso_bist_status0_t;

union cvmx_sso_bist_status1 {
	uint64_t u64;
	struct cvmx_sso_bist_status1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t bist:7;
#else
		uint64_t bist:7;
		uint64_t reserved_7_63:57;
#endif
	} s;
	struct cvmx_sso_bist_status1_s cn73xx;
	struct cvmx_sso_bist_status1_s cn75xx;
	struct cvmx_sso_bist_status1_s cn78xx;
	struct cvmx_sso_bist_status1_s cn78xxp2;
};
typedef union cvmx_sso_bist_status1 cvmx_sso_bist_status1_t;

union cvmx_sso_bist_status2 {
	uint64_t u64;
	struct cvmx_sso_bist_status2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t bist:9;
#else
		uint64_t bist:9;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_sso_bist_status2_s cn73xx;
	struct cvmx_sso_bist_status2_s cn75xx;
	struct cvmx_sso_bist_status2_s cn78xx;
	struct cvmx_sso_bist_status2_s cn78xxp2;
};
typedef union cvmx_sso_bist_status2 cvmx_sso_bist_status2_t;

union cvmx_sso_cfg {
	uint64_t u64;
	struct cvmx_sso_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t qck_gw_rsp_adj:3;
		uint64_t qck_gw_rsp_dis:1;
		uint64_t qck_sw_dis:1;
		uint64_t rwq_alloc_dis:1;
		uint64_t soc_ccam_dis:1;
		uint64_t sso_cclk_dis:1;
		uint64_t rwo_flush:1;
		uint64_t wfe_thr:1;
		uint64_t rwio_byp_dis:1;
		uint64_t rwq_byp_dis:1;
		uint64_t stt:1;
		uint64_t ldt:1;
		uint64_t dwb:1;
		uint64_t rwen:1;
#else
		uint64_t rwen:1;
		uint64_t dwb:1;
		uint64_t ldt:1;
		uint64_t stt:1;
		uint64_t rwq_byp_dis:1;
		uint64_t rwio_byp_dis:1;
		uint64_t wfe_thr:1;
		uint64_t rwo_flush:1;
		uint64_t sso_cclk_dis:1;
		uint64_t soc_ccam_dis:1;
		uint64_t rwq_alloc_dis:1;
		uint64_t qck_sw_dis:1;
		uint64_t qck_gw_rsp_dis:1;
		uint64_t qck_gw_rsp_adj:3;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_sso_cfg_s cn68xx;
	struct cvmx_sso_cfg_cn68xxp1 {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t rwo_flush:1;
		uint64_t wfe_thr:1;
		uint64_t rwio_byp_dis:1;
		uint64_t rwq_byp_dis:1;
		uint64_t stt:1;
		uint64_t ldt:1;
		uint64_t dwb:1;
		uint64_t rwen:1;
#else
		uint64_t rwen:1;
		uint64_t dwb:1;
		uint64_t ldt:1;
		uint64_t stt:1;
		uint64_t rwq_byp_dis:1;
		uint64_t rwio_byp_dis:1;
		uint64_t wfe_thr:1;
		uint64_t rwo_flush:1;
		uint64_t reserved_8_63:56;
#endif
	} cn68xxp1;
};
typedef union cvmx_sso_cfg cvmx_sso_cfg_t;

union cvmx_sso_ds_pc {
	uint64_t u64;
	struct cvmx_sso_ds_pc_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t ds_pc:64;
#else
		uint64_t ds_pc:64;
#endif
	} s;
	struct cvmx_sso_ds_pc_s cn68xx;
	struct cvmx_sso_ds_pc_s cn68xxp1;
};
typedef union cvmx_sso_ds_pc cvmx_sso_ds_pc_t;

union cvmx_sso_ecc_ctl0 {
	uint64_t u64;
	struct cvmx_sso_ecc_ctl0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_30_63:34;
		uint64_t toaqt_flip:2;
		uint64_t toaqt_cdis:1;
		uint64_t toaqh_flip:2;
		uint64_t toaqh_cdis:1;
		uint64_t tiaqt_flip:2;
		uint64_t tiaqt_cdis:1;
		uint64_t tiaqh_flip:2;
		uint64_t tiaqh_cdis:1;
		uint64_t llm_flip:2;
		uint64_t llm_cdis:1;
		uint64_t inp_flip:2;
		uint64_t inp_cdis:1;
		uint64_t qtc_flip:2;
		uint64_t qtc_cdis:1;
		uint64_t xaq_flip:2;
		uint64_t xaq_cdis:1;
		uint64_t fff_flip:2;
		uint64_t fff_cdis:1;
		uint64_t wes_flip:2;
		uint64_t wes_cdis:1;
#else
		uint64_t wes_cdis:1;
		uint64_t wes_flip:2;
		uint64_t fff_cdis:1;
		uint64_t fff_flip:2;
		uint64_t xaq_cdis:1;
		uint64_t xaq_flip:2;
		uint64_t qtc_cdis:1;
		uint64_t qtc_flip:2;
		uint64_t inp_cdis:1;
		uint64_t inp_flip:2;
		uint64_t llm_cdis:1;
		uint64_t llm_flip:2;
		uint64_t tiaqh_cdis:1;
		uint64_t tiaqh_flip:2;
		uint64_t tiaqt_cdis:1;
		uint64_t tiaqt_flip:2;
		uint64_t toaqh_cdis:1;
		uint64_t toaqh_flip:2;
		uint64_t toaqt_cdis:1;
		uint64_t toaqt_flip:2;
		uint64_t reserved_30_63:34;
#endif
	} s;
	struct cvmx_sso_ecc_ctl0_s cn73xx;
	struct cvmx_sso_ecc_ctl0_s cn75xx;
	struct cvmx_sso_ecc_ctl0_s cn78xx;
	struct cvmx_sso_ecc_ctl0_s cn78xxp2;
};
typedef union cvmx_sso_ecc_ctl0 cvmx_sso_ecc_ctl0_t;

union cvmx_sso_ecc_ctl1 {
	uint64_t u64;
	struct cvmx_sso_ecc_ctl1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_21_63:43;
		uint64_t thrint_flip:2;
		uint64_t thrint_cdis:1;
		uint64_t mask_flip:2;
		uint64_t mask_cdis:1;
		uint64_t gdw_flip:2;
		uint64_t gdw_cdis:1;
		uint64_t qidx_flip:2;
		uint64_t qidx_cdis:1;
		uint64_t tptr_flip:2;
		uint64_t tptr_cdis:1;
		uint64_t hptr_flip:2;
		uint64_t hptr_cdis:1;
		uint64_t cntr_flip:2;
		uint64_t cntr_cdis:1;
#else
		uint64_t cntr_cdis:1;
		uint64_t cntr_flip:2;
		uint64_t hptr_cdis:1;
		uint64_t hptr_flip:2;
		uint64_t tptr_cdis:1;
		uint64_t tptr_flip:2;
		uint64_t qidx_cdis:1;
		uint64_t qidx_flip:2;
		uint64_t gdw_cdis:1;
		uint64_t gdw_flip:2;
		uint64_t mask_cdis:1;
		uint64_t mask_flip:2;
		uint64_t thrint_cdis:1;
		uint64_t thrint_flip:2;
		uint64_t reserved_21_63:43;
#endif
	} s;
	struct cvmx_sso_ecc_ctl1_s cn73xx;
	struct cvmx_sso_ecc_ctl1_s cn75xx;
	struct cvmx_sso_ecc_ctl1_s cn78xx;
	struct cvmx_sso_ecc_ctl1_s cn78xxp2;
};
typedef union cvmx_sso_ecc_ctl1 cvmx_sso_ecc_ctl1_t;

union cvmx_sso_ecc_ctl2 {
	uint64_t u64;
	struct cvmx_sso_ecc_ctl2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_15_63:49;
		uint64_t ncbo_flip:2;
		uint64_t ncbo_cdis:1;
		uint64_t pnd_flip:2;
		uint64_t pnd_cdis:1;
		uint64_t oth_flip:2;
		uint64_t oth_cdis:1;
		uint64_t nidx_flip:2;
		uint64_t nidx_cdis:1;
		uint64_t pidx_flip:2;
		uint64_t pidx_cdis:1;
#else
		uint64_t pidx_cdis:1;
		uint64_t pidx_flip:2;
		uint64_t nidx_cdis:1;
		uint64_t nidx_flip:2;
		uint64_t oth_cdis:1;
		uint64_t oth_flip:2;
		uint64_t pnd_cdis:1;
		uint64_t pnd_flip:2;
		uint64_t ncbo_cdis:1;
		uint64_t ncbo_flip:2;
		uint64_t reserved_15_63:49;
#endif
	} s;
	struct cvmx_sso_ecc_ctl2_s cn73xx;
	struct cvmx_sso_ecc_ctl2_s cn75xx;
	struct cvmx_sso_ecc_ctl2_s cn78xx;
	struct cvmx_sso_ecc_ctl2_s cn78xxp2;
};
typedef union cvmx_sso_ecc_ctl2 cvmx_sso_ecc_ctl2_t;

union cvmx_sso_err {
	uint64_t u64;
	struct cvmx_sso_err_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t bfp:1;
		uint64_t awe:1;
		uint64_t fpe:1;
		uint64_t reserved_43_44:2;
		uint64_t iop:11;
		uint64_t reserved_12_31:20;
		uint64_t pnd_dbe0:1;
		uint64_t pnd_sbe0:1;
		uint64_t pnd_dbe1:1;
		uint64_t pnd_sbe1:1;
		uint64_t oth_dbe0:1;
		uint64_t oth_sbe0:1;
		uint64_t oth_dbe1:1;
		uint64_t oth_sbe1:1;
		uint64_t idx_dbe:1;
		uint64_t idx_sbe:1;
		uint64_t fidx_dbe:1;
		uint64_t fidx_sbe:1;
#else
		uint64_t fidx_sbe:1;
		uint64_t fidx_dbe:1;
		uint64_t idx_sbe:1;
		uint64_t idx_dbe:1;
		uint64_t oth_sbe1:1;
		uint64_t oth_dbe1:1;
		uint64_t oth_sbe0:1;
		uint64_t oth_dbe0:1;
		uint64_t pnd_sbe1:1;
		uint64_t pnd_dbe1:1;
		uint64_t pnd_sbe0:1;
		uint64_t pnd_dbe0:1;
		uint64_t reserved_12_31:20;
		uint64_t iop:11;
		uint64_t reserved_43_44:2;
		uint64_t fpe:1;
		uint64_t awe:1;
		uint64_t bfp:1;
		uint64_t reserved_48_63:16;
#endif
	} s;
	struct cvmx_sso_err_s cn68xx;
	struct cvmx_sso_err_s cn68xxp1;
};
typedef union cvmx_sso_err cvmx_sso_err_t;

union cvmx_sso_err0 {
	uint64_t u64;
	struct cvmx_sso_err0_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_52_63:12;
		uint64_t toaqt_dbe:1;
		uint64_t toaqt_sbe:1;
		uint64_t toaqh_dbe:1;
		uint64_t toaqh_sbe:1;
		uint64_t tiaqt_dbe:1;
		uint64_t tiaqt_sbe:1;
		uint64_t tiaqh_dbe:1;
		uint64_t tiaqh_sbe:1;
		uint64_t llm_dbe:1;
		uint64_t llm_sbe:1;
		uint64_t inp_dbe:1;
		uint64_t inp_sbe:1;
		uint64_t qtc_dbe:1;
		uint64_t qtc_sbe:1;
		uint64_t xaq_dbe:1;
		uint64_t xaq_sbe:1;
		uint64_t fff_dbe:1;
		uint64_t fff_sbe:1;
		uint64_t wes_dbe:1;
		uint64_t wes_sbe:1;
		uint64_t reserved_6_31:26;
		uint64_t addwq_dropped:1;
		uint64_t awempty:1;
		uint64_t grpdis:1;
		uint64_t bfp:1;
		uint64_t awe:1;
		uint64_t fpe:1;
#else
		uint64_t fpe:1;
		uint64_t awe:1;
		uint64_t bfp:1;
		uint64_t grpdis:1;
		uint64_t awempty:1;
		uint64_t addwq_dropped:1;
		uint64_t reserved_6_31:26;
		uint64_t wes_sbe:1;
		uint64_t wes_dbe:1;
		uint64_t fff_sbe:1;
		uint64_t fff_dbe:1;
		uint64_t xaq_sbe:1;
		uint64_t xaq_dbe:1;
		uint64_t qtc_sbe:1;
		uint64_t qtc_dbe:1;
		uint64_t inp_sbe:1;
		uint64_t inp_dbe:1;
		uint64_t llm_sbe:1;
		uint64_t llm_dbe:1;
		uint64_t tiaqh_sbe:1;
		uint64_t tiaqh_dbe:1;
		uint64_t tiaqt_sbe:1;
		uint64_t tiaqt_dbe:1;
		uint64_t toaqh_sbe:1;
		uint64_t toaqh_dbe:1;
		uint64_t toaqt_sbe:1;
		uint64_t toaqt_dbe:1;
		uint64_t reserved_52_63:12;
#endif
	} s;
	struct cvmx_sso_err0_s cn73xx;
	struct cvmx_sso_err0_s cn75xx;
	struct cvmx_sso_err0_s cn78xx;
	struct cvmx_sso_err0_s cn78xxp2;
};
typedef union cvmx_sso_err0 cvmx_sso_err0_t;

union cvmx_sso_err1 {
	uint64_t u64;
	struct cvmx_sso_err1_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t thrint_dbe:1;
		uint64_t thrint_sbe:1;
		uint64_t mask_dbe:1;
		uint64_t mask_sbe:1;
		uint64_t gdw_dbe:1;
		uint64_t gdw_sbe:1;
		uint64_t qidx_dbe:1;
		uint64_t qidx_sbe:1;
		uint64_t tptr_dbe:1;
		uint64_t tptr_sbe:1;
		uint64_t hptr_dbe:1;
		uint64_t hptr_sbe:1;
		uint64_t cntr_dbe:1;
		uint64_t cntr_sbe:1;
#else
		uint64_t cntr_sbe:1;
		uint64_t cntr_dbe:1;
		uint64_t hptr_sbe:1;
		uint64_t hptr_dbe:1;
		uint64_t tptr_sbe:1;
		uint64_t tptr_dbe:1;
		uint64_t qidx_sbe:1;
		uint64_t qidx_dbe:1;
		uint64_t gdw_sbe:1;
		uint64_t gdw_dbe:1;
		uint64_t mask_sbe:1;
		uint64_t mask_dbe:1;
		uint64_t thrint_sbe:1;
		uint64_t thrint_dbe:1;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_sso_err1_s cn73xx;
	struct cvmx_sso_err1_s cn75xx;
	struct cvmx_sso_err1_s cn78xx;
	struct cvmx_sso_err1_s cn78xxp2;
};
typedef union cvmx_sso_err1 cvmx_sso_err1_t;

union cvmx_sso_err2 {
	uint64_t u64;
	struct cvmx_sso_err2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_42_63:22;
		uint64_t ncbo_dbe:1;
		uint64_t ncbo_sbe:1;
		uint64_t pnd_dbe:1;
		uint64_t pnd_sbe:1;
		uint64_t oth_dbe:1;
		uint64_t oth_sbe:1;
		uint64_t nidx_dbe:1;
		uint64_t nidx_sbe:1;
		uint64_t pidx_dbe:1;
		uint64_t pidx_sbe:1;
		uint64_t reserved_13_31:19;
		uint64_t iop:13;
#else
		uint64_t iop:13;
		uint64_t reserved_13_31:19;
		uint64_t pidx_sbe:1;
		uint64_t pidx_dbe:1;
		uint64_t nidx_sbe:1;
		uint64_t nidx_dbe:1;
		uint64_t oth_sbe:1;
		uint64_t oth_dbe:1;
		uint64_t pnd_sbe:1;
		uint64_t pnd_dbe:1;
		uint64_t ncbo_sbe:1;
		uint64_t ncbo_dbe:1;
		uint64_t reserved_42_63:22;
#endif
	} s;
	struct cvmx_sso_err2_s cn73xx;
	struct cvmx_sso_err2_s cn75xx;
	struct cvmx_sso_err2_s cn78xx;
	struct cvmx_sso_err2_s cn78xxp2;
};
typedef union cvmx_sso_err2 cvmx_sso_err2_t;

union cvmx_sso_err_enb {
	uint64_t u64;
	struct cvmx_sso_err_enb_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t bfp_ie:1;
		uint64_t awe_ie:1;
		uint64_t fpe_ie:1;
		uint64_t reserved_43_44:2;
		uint64_t iop_ie:11;
		uint64_t reserved_12_31:20;
		uint64_t pnd_dbe0_ie:1;
		uint64_t pnd_sbe0_ie:1;
		uint64_t pnd_dbe1_ie:1;
		uint64_t pnd_sbe1_ie:1;
		uint64_t oth_dbe0_ie:1;
		uint64_t oth_sbe0_ie:1;
		uint64_t oth_dbe1_ie:1;
		uint64_t oth_sbe1_ie:1;
		uint64_t idx_dbe_ie:1;
		uint64_t idx_sbe_ie:1;
		uint64_t fidx_dbe_ie:1;
		uint64_t fidx_sbe_ie:1;
#else
		uint64_t fidx_sbe_ie:1;
		uint64_t fidx_dbe_ie:1;
		uint64_t idx_sbe_ie:1;
		uint64_t idx_dbe_ie:1;
		uint64_t oth_sbe1_ie:1;
		uint64_t oth_dbe1_ie:1;
		uint64_t oth_sbe0_ie:1;
		uint64_t oth_dbe0_ie:1;
		uint64_t pnd_sbe1_ie:1;
		uint64_t pnd_dbe1_ie:1;
		uint64_t pnd_sbe0_ie:1;
		uint64_t pnd_dbe0_ie:1;
		uint64_t reserved_12_31:20;
		uint64_t iop_ie:11;
		uint64_t reserved_43_44:2;
		uint64_t fpe_ie:1;
		uint64_t awe_ie:1;
		uint64_t bfp_ie:1;
		uint64_t reserved_48_63:16;
#endif
	} s;
	struct cvmx_sso_err_enb_s cn68xx;
	struct cvmx_sso_err_enb_s cn68xxp1;
};
typedef union cvmx_sso_err_enb cvmx_sso_err_enb_t;

union cvmx_sso_fidx_ecc_ctl {
	uint64_t u64;
	struct cvmx_sso_fidx_ecc_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_3_63:61;
		uint64_t flip_synd:2;
		uint64_t ecc_ena:1;
#else
		uint64_t ecc_ena:1;
		uint64_t flip_synd:2;
		uint64_t reserved_3_63:61;
#endif
	} s;
	struct cvmx_sso_fidx_ecc_ctl_s cn68xx;
	struct cvmx_sso_fidx_ecc_ctl_s cn68xxp1;
};
typedef union cvmx_sso_fidx_ecc_ctl cvmx_sso_fidx_ecc_ctl_t;

union cvmx_sso_fidx_ecc_st {
	uint64_t u64;
	struct cvmx_sso_fidx_ecc_st_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_27_63:37;
		uint64_t addr:11;
		uint64_t reserved_9_15:7;
		uint64_t syndrom:5;
		uint64_t reserved_0_3:4;
#else
		uint64_t reserved_0_3:4;
		uint64_t syndrom:5;
		uint64_t reserved_9_15:7;
		uint64_t addr:11;
		uint64_t reserved_27_63:37;
#endif
	} s;
	struct cvmx_sso_fidx_ecc_st_s cn68xx;
	struct cvmx_sso_fidx_ecc_st_s cn68xxp1;
};
typedef union cvmx_sso_fidx_ecc_st cvmx_sso_fidx_ecc_st_t;

union cvmx_sso_fpage_cnt {
	uint64_t u64;
	struct cvmx_sso_fpage_cnt_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t fpage_cnt:32;
#else
		uint64_t fpage_cnt:32;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_sso_fpage_cnt_s cn68xx;
	struct cvmx_sso_fpage_cnt_s cn68xxp1;
};
typedef union cvmx_sso_fpage_cnt cvmx_sso_fpage_cnt_t;

union cvmx_sso_grpx_aq_cnt {
	uint64_t u64;
	struct cvmx_sso_grpx_aq_cnt_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_33_63:31;
		uint64_t aq_cnt:33;
#else
		uint64_t aq_cnt:33;
		uint64_t reserved_33_63:31;
#endif
	} s;
	struct cvmx_sso_grpx_aq_cnt_s cn73xx;
	struct cvmx_sso_grpx_aq_cnt_s cn75xx;
	struct cvmx_sso_grpx_aq_cnt_s cn78xx;
	struct cvmx_sso_grpx_aq_cnt_s cn78xxp2;
};
typedef union cvmx_sso_grpx_aq_cnt cvmx_sso_grpx_aq_cnt_t;

union cvmx_sso_grpx_aq_thr {
	uint64_t u64;
	struct cvmx_sso_grpx_aq_thr_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_33_63:31;
		uint64_t aq_thr:33;
#else
		uint64_t aq_thr:33;
		uint64_t reserved_33_63:31;
#endif
	} s;
	struct cvmx_sso_grpx_aq_thr_s cn73xx;
	struct cvmx_sso_grpx_aq_thr_s cn75xx;
	struct cvmx_sso_grpx_aq_thr_s cn78xx;
	struct cvmx_sso_grpx_aq_thr_s cn78xxp2;
};
typedef union cvmx_sso_grpx_aq_thr cvmx_sso_grpx_aq_thr_t;

union cvmx_sso_grpx_ds_pc {
	uint64_t u64;
	struct cvmx_sso_grpx_ds_pc_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t cnt:64;
#else
		uint64_t cnt:64;
#endif
	} s;
	struct cvmx_sso_grpx_ds_pc_s cn73xx;
	struct cvmx_sso_grpx_ds_pc_s cn75xx;
	struct cvmx_sso_grpx_ds_pc_s cn78xx;
	struct cvmx_sso_grpx_ds_pc_s cn78xxp2;
};
typedef union cvmx_sso_grpx_ds_pc cvmx_sso_grpx_ds_pc_t;

union cvmx_sso_grpx_ext_pc {
	uint64_t u64;
	struct cvmx_sso_grpx_ext_pc_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t cnt:64;
#else
		uint64_t cnt:64;
#endif
	} s;
	struct cvmx_sso_grpx_ext_pc_s cn73xx;
	struct cvmx_sso_grpx_ext_pc_s cn75xx;
	struct cvmx_sso_grpx_ext_pc_s cn78xx;
	struct cvmx_sso_grpx_ext_pc_s cn78xxp2;
};
typedef union cvmx_sso_grpx_ext_pc cvmx_sso_grpx_ext_pc_t;

union cvmx_sso_grpx_iaq_thr {
	uint64_t u64;
	struct cvmx_sso_grpx_iaq_thr_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_61_63:3;
		uint64_t grp_cnt:13;
		uint64_t reserved_45_47:3;
		uint64_t max_thr:13;
		uint64_t reserved_13_31:19;
		uint64_t rsvd_thr:13;
#else
		uint64_t rsvd_thr:13;
		uint64_t reserved_13_31:19;
		uint64_t max_thr:13;
		uint64_t reserved_45_47:3;
		uint64_t grp_cnt:13;
		uint64_t reserved_61_63:3;
#endif
	} s;
	struct cvmx_sso_grpx_iaq_thr_s cn73xx;
	struct cvmx_sso_grpx_iaq_thr_s cn75xx;
	struct cvmx_sso_grpx_iaq_thr_s cn78xx;
	struct cvmx_sso_grpx_iaq_thr_s cn78xxp2;
};
typedef union cvmx_sso_grpx_iaq_thr cvmx_sso_grpx_iaq_thr_t;

union cvmx_sso_grpx_int {
	uint64_t u64;
	struct cvmx_sso_grpx_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t exe_dis:1;
		uint64_t reserved_2_62:61;
		uint64_t exe_int:1;
		uint64_t aq_int:1;
#else
		uint64_t aq_int:1;
		uint64_t exe_int:1;
		uint64_t reserved_2_62:61;
		uint64_t exe_dis:1;
#endif
	} s;
	struct cvmx_sso_grpx_int_s cn73xx;
	struct cvmx_sso_grpx_int_s cn75xx;
	struct cvmx_sso_grpx_int_s cn78xx;
	struct cvmx_sso_grpx_int_s cn78xxp2;
};
typedef union cvmx_sso_grpx_int cvmx_sso_grpx_int_t;

union cvmx_sso_grpx_int_cnt {
	uint64_t u64;
	struct cvmx_sso_grpx_int_cnt_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_61_63:3;
		uint64_t tc_cnt:13;
		uint64_t reserved_45_47:3;
		uint64_t cq_cnt:13;
		uint64_t reserved_29_31:3;
		uint64_t ds_cnt:13;
		uint64_t reserved_13_15:3;
		uint64_t iaq_cnt:13;
#else
		uint64_t iaq_cnt:13;
		uint64_t reserved_13_15:3;
		uint64_t ds_cnt:13;
		uint64_t reserved_29_31:3;
		uint64_t cq_cnt:13;
		uint64_t reserved_45_47:3;
		uint64_t tc_cnt:13;
		uint64_t reserved_61_63:3;
#endif
	} s;
	struct cvmx_sso_grpx_int_cnt_s cn73xx;
	struct cvmx_sso_grpx_int_cnt_s cn75xx;
	struct cvmx_sso_grpx_int_cnt_s cn78xx;
	struct cvmx_sso_grpx_int_cnt_s cn78xxp2;
};
typedef union cvmx_sso_grpx_int_cnt cvmx_sso_grpx_int_cnt_t;

union cvmx_sso_grpx_int_thr {
	uint64_t u64;
	struct cvmx_sso_grpx_int_thr_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t tc_en:1;
		uint64_t reserved_61_62:2;
		uint64_t tc_thr:13;
		uint64_t reserved_45_47:3;
		uint64_t cq_thr:13;
		uint64_t reserved_29_31:3;
		uint64_t ds_thr:13;
		uint64_t reserved_13_15:3;
		uint64_t iaq_thr:13;
#else
		uint64_t iaq_thr:13;
		uint64_t reserved_13_15:3;
		uint64_t ds_thr:13;
		uint64_t reserved_29_31:3;
		uint64_t cq_thr:13;
		uint64_t reserved_45_47:3;
		uint64_t tc_thr:13;
		uint64_t reserved_61_62:2;
		uint64_t tc_en:1;
#endif
	} s;
	struct cvmx_sso_grpx_int_thr_s cn73xx;
	struct cvmx_sso_grpx_int_thr_s cn75xx;
	struct cvmx_sso_grpx_int_thr_s cn78xx;
	struct cvmx_sso_grpx_int_thr_s cn78xxp2;
};
typedef union cvmx_sso_grpx_int_thr cvmx_sso_grpx_int_thr_t;

union cvmx_sso_grpx_pri {
	uint64_t u64;
	struct cvmx_sso_grpx_pri_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_30_63:34;
		uint64_t wgt_left:6;
		uint64_t reserved_22_23:2;
		uint64_t weight:6;
		uint64_t reserved_12_15:4;
		uint64_t affinity:4;
		uint64_t reserved_3_7:5;
		uint64_t pri:3;
#else
		uint64_t pri:3;
		uint64_t reserved_3_7:5;
		uint64_t affinity:4;
		uint64_t reserved_12_15:4;
		uint64_t weight:6;
		uint64_t reserved_22_23:2;
		uint64_t wgt_left:6;
		uint64_t reserved_30_63:34;
#endif
	} s;
	struct cvmx_sso_grpx_pri_s cn73xx;
	struct cvmx_sso_grpx_pri_s cn75xx;
	struct cvmx_sso_grpx_pri_s cn78xx;
	struct cvmx_sso_grpx_pri_s cn78xxp2;
};
typedef union cvmx_sso_grpx_pri cvmx_sso_grpx_pri_t;

union cvmx_sso_grpx_taq_thr {
	uint64_t u64;
	struct cvmx_sso_grpx_taq_thr_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_59_63:5;
		uint64_t grp_cnt:11;
		uint64_t reserved_43_47:5;
		uint64_t max_thr:11;
		uint64_t reserved_11_31:21;
		uint64_t rsvd_thr:11;
#else
		uint64_t rsvd_thr:11;
		uint64_t reserved_11_31:21;
		uint64_t max_thr:11;
		uint64_t reserved_43_47:5;
		uint64_t grp_cnt:11;
		uint64_t reserved_59_63:5;
#endif
	} s;
	struct cvmx_sso_grpx_taq_thr_s cn73xx;
	struct cvmx_sso_grpx_taq_thr_s cn75xx;
	struct cvmx_sso_grpx_taq_thr_s cn78xx;
	struct cvmx_sso_grpx_taq_thr_s cn78xxp2;
};
typedef union cvmx_sso_grpx_taq_thr cvmx_sso_grpx_taq_thr_t;

union cvmx_sso_grpx_ts_pc {
	uint64_t u64;
	struct cvmx_sso_grpx_ts_pc_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t cnt:64;
#else
		uint64_t cnt:64;
#endif
	} s;
	struct cvmx_sso_grpx_ts_pc_s cn73xx;
	struct cvmx_sso_grpx_ts_pc_s cn75xx;
	struct cvmx_sso_grpx_ts_pc_s cn78xx;
	struct cvmx_sso_grpx_ts_pc_s cn78xxp2;
};
typedef union cvmx_sso_grpx_ts_pc cvmx_sso_grpx_ts_pc_t;

union cvmx_sso_grpx_wa_pc {
	uint64_t u64;
	struct cvmx_sso_grpx_wa_pc_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t cnt:64;
#else
		uint64_t cnt:64;
#endif
	} s;
	struct cvmx_sso_grpx_wa_pc_s cn73xx;
	struct cvmx_sso_grpx_wa_pc_s cn75xx;
	struct cvmx_sso_grpx_wa_pc_s cn78xx;
	struct cvmx_sso_grpx_wa_pc_s cn78xxp2;
};
typedef union cvmx_sso_grpx_wa_pc cvmx_sso_grpx_wa_pc_t;

union cvmx_sso_grpx_ws_pc {
	uint64_t u64;
	struct cvmx_sso_grpx_ws_pc_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t cnt:64;
#else
		uint64_t cnt:64;
#endif
	} s;
	struct cvmx_sso_grpx_ws_pc_s cn73xx;
	struct cvmx_sso_grpx_ws_pc_s cn75xx;
	struct cvmx_sso_grpx_ws_pc_s cn78xx;
	struct cvmx_sso_grpx_ws_pc_s cn78xxp2;
};
typedef union cvmx_sso_grpx_ws_pc cvmx_sso_grpx_ws_pc_t;

union cvmx_sso_gw_eco {
	uint64_t u64;
	struct cvmx_sso_gw_eco_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t eco_rw:8;
#else
		uint64_t eco_rw:8;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_sso_gw_eco_s cn73xx;
	struct cvmx_sso_gw_eco_s cn75xx;
};
typedef union cvmx_sso_gw_eco cvmx_sso_gw_eco_t;

union cvmx_sso_gwe_cfg {
	uint64_t u64;
	struct cvmx_sso_gwe_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t odu_ffpgw_dis:1;
		uint64_t gwe_rfpgw_dis:1;
		uint64_t odu_prf_dis:1;
		uint64_t reserved_0_8:9;
#else
		uint64_t reserved_0_8:9;
		uint64_t odu_prf_dis:1;
		uint64_t gwe_rfpgw_dis:1;
		uint64_t odu_ffpgw_dis:1;
		uint64_t reserved_12_63:52;
#endif
	} s;
	struct cvmx_sso_gwe_cfg_cn68xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t odu_ffpgw_dis:1;
		uint64_t gwe_rfpgw_dis:1;
		uint64_t odu_prf_dis:1;
		uint64_t odu_bmp_dis:1;
		uint64_t reserved_5_7:3;
		uint64_t gwe_hvy_dis:1;
		uint64_t gwe_poe:1;
		uint64_t gwe_fpor:1;
		uint64_t gwe_rah:1;
		uint64_t gwe_dis:1;
#else
		uint64_t gwe_dis:1;
		uint64_t gwe_rah:1;
		uint64_t gwe_fpor:1;
		uint64_t gwe_poe:1;
		uint64_t gwe_hvy_dis:1;
		uint64_t reserved_5_7:3;
		uint64_t odu_bmp_dis:1;
		uint64_t odu_prf_dis:1;
		uint64_t gwe_rfpgw_dis:1;
		uint64_t odu_ffpgw_dis:1;
		uint64_t reserved_12_63:52;
#endif
	} cn68xx;
	struct cvmx_sso_gwe_cfg_cn68xxp1 {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t gwe_poe:1;
		uint64_t gwe_fpor:1;
		uint64_t gwe_rah:1;
		uint64_t gwe_dis:1;
#else
		uint64_t gwe_dis:1;
		uint64_t gwe_rah:1;
		uint64_t gwe_fpor:1;
		uint64_t gwe_poe:1;
		uint64_t reserved_4_63:60;
#endif
	} cn68xxp1;
	struct cvmx_sso_gwe_cfg_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t dis_wgt_credit:1;
		uint64_t ws_retries:8;
#else
		uint64_t ws_retries:8;
		uint64_t dis_wgt_credit:1;
		uint64_t reserved_9_63:55;
#endif
	} cn73xx;
	struct cvmx_sso_gwe_cfg_cn73xx cn75xx;
	struct cvmx_sso_gwe_cfg_cn73xx cn78xx;
	struct cvmx_sso_gwe_cfg_cn73xx cn78xxp2;
};
typedef union cvmx_sso_gwe_cfg cvmx_sso_gwe_cfg_t;

union cvmx_sso_gwe_random {
	uint64_t u64;
	struct cvmx_sso_gwe_random_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t rnd:16;
#else
		uint64_t rnd:16;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_sso_gwe_random_s cn73xx;
	struct cvmx_sso_gwe_random_s cn75xx;
	struct cvmx_sso_gwe_random_s cn78xx;
	struct cvmx_sso_gwe_random_s cn78xxp2;
};
typedef union cvmx_sso_gwe_random cvmx_sso_gwe_random_t;

union cvmx_sso_idx_ecc_ctl {
	uint64_t u64;
	struct cvmx_sso_idx_ecc_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_3_63:61;
		uint64_t flip_synd:2;
		uint64_t ecc_ena:1;
#else
		uint64_t ecc_ena:1;
		uint64_t flip_synd:2;
		uint64_t reserved_3_63:61;
#endif
	} s;
	struct cvmx_sso_idx_ecc_ctl_s cn68xx;
	struct cvmx_sso_idx_ecc_ctl_s cn68xxp1;
};
typedef union cvmx_sso_idx_ecc_ctl cvmx_sso_idx_ecc_ctl_t;

union cvmx_sso_idx_ecc_st {
	uint64_t u64;
	struct cvmx_sso_idx_ecc_st_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_27_63:37;
		uint64_t addr:11;
		uint64_t reserved_9_15:7;
		uint64_t syndrom:5;
		uint64_t reserved_0_3:4;
#else
		uint64_t reserved_0_3:4;
		uint64_t syndrom:5;
		uint64_t reserved_9_15:7;
		uint64_t addr:11;
		uint64_t reserved_27_63:37;
#endif
	} s;
	struct cvmx_sso_idx_ecc_st_s cn68xx;
	struct cvmx_sso_idx_ecc_st_s cn68xxp1;
};
typedef union cvmx_sso_idx_ecc_st cvmx_sso_idx_ecc_st_t;

union cvmx_sso_ientx_links {
	uint64_t u64;
	struct cvmx_sso_ientx_links_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t prev_index:12;
		uint64_t reserved_0_15:16;
#else
		uint64_t reserved_0_15:16;
		uint64_t prev_index:12;
		uint64_t reserved_28_63:36;
#endif
	} s;
	struct cvmx_sso_ientx_links_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_26_63:38;
		uint64_t prev_index:10;
		uint64_t reserved_11_15:5;
		uint64_t next_index_vld:1;
		uint64_t next_index:10;
#else
		uint64_t next_index:10;
		uint64_t next_index_vld:1;
		uint64_t reserved_11_15:5;
		uint64_t prev_index:10;
		uint64_t reserved_26_63:38;
#endif
	} cn73xx;
	struct cvmx_sso_ientx_links_cn73xx cn75xx;
	struct cvmx_sso_ientx_links_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t prev_index:12;
		uint64_t reserved_13_15:3;
		uint64_t next_index_vld:1;
		uint64_t next_index:12;
#else
		uint64_t next_index:12;
		uint64_t next_index_vld:1;
		uint64_t reserved_13_15:3;
		uint64_t prev_index:12;
		uint64_t reserved_28_63:36;
#endif
	} cn78xx;
	struct cvmx_sso_ientx_links_cn78xx cn78xxp2;
};
typedef union cvmx_sso_ientx_links cvmx_sso_ientx_links_t;

union cvmx_sso_ientx_pendtag {
	uint64_t u64;
	struct cvmx_sso_ientx_pendtag_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_38_63:26;
		uint64_t pend_switch:1;
		uint64_t reserved_34_36:3;
		uint64_t pend_tt:2;
		uint64_t pend_tag:32;
#else
		uint64_t pend_tag:32;
		uint64_t pend_tt:2;
		uint64_t reserved_34_36:3;
		uint64_t pend_switch:1;
		uint64_t reserved_38_63:26;
#endif
	} s;
	struct cvmx_sso_ientx_pendtag_s cn73xx;
	struct cvmx_sso_ientx_pendtag_s cn75xx;
	struct cvmx_sso_ientx_pendtag_s cn78xx;
	struct cvmx_sso_ientx_pendtag_s cn78xxp2;
};
typedef union cvmx_sso_ientx_pendtag cvmx_sso_ientx_pendtag_t;

union cvmx_sso_ientx_qlinks {
	uint64_t u64;
	struct cvmx_sso_ientx_qlinks_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t next_index:12;
#else
		uint64_t next_index:12;
		uint64_t reserved_12_63:52;
#endif
	} s;
	struct cvmx_sso_ientx_qlinks_s cn73xx;
	struct cvmx_sso_ientx_qlinks_s cn75xx;
	struct cvmx_sso_ientx_qlinks_s cn78xx;
	struct cvmx_sso_ientx_qlinks_s cn78xxp2;
};
typedef union cvmx_sso_ientx_qlinks cvmx_sso_ientx_qlinks_t;

union cvmx_sso_ientx_tag {
	uint64_t u64;
	struct cvmx_sso_ientx_tag_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_39_63:25;
		uint64_t tailc:1;
		uint64_t tail:1;
		uint64_t reserved_34_36:3;
		uint64_t tt:2;
		uint64_t tag:32;
#else
		uint64_t tag:32;
		uint64_t tt:2;
		uint64_t reserved_34_36:3;
		uint64_t tail:1;
		uint64_t tailc:1;
		uint64_t reserved_39_63:25;
#endif
	} s;
	struct cvmx_sso_ientx_tag_s cn73xx;
	struct cvmx_sso_ientx_tag_s cn75xx;
	struct cvmx_sso_ientx_tag_s cn78xx;
	struct cvmx_sso_ientx_tag_s cn78xxp2;
};
typedef union cvmx_sso_ientx_tag cvmx_sso_ientx_tag_t;

union cvmx_sso_ientx_wqpgrp {
	uint64_t u64;
	struct cvmx_sso_ientx_wqpgrp_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_62_63:2;
		uint64_t head:1;
		uint64_t nosched:1;
		uint64_t reserved_58_59:2;
		uint64_t grp:10;
		uint64_t reserved_42_47:6;
		uint64_t wqp:42;
#else
		uint64_t wqp:42;
		uint64_t reserved_42_47:6;
		uint64_t grp:10;
		uint64_t reserved_58_59:2;
		uint64_t nosched:1;
		uint64_t head:1;
		uint64_t reserved_62_63:2;
#endif
	} s;
	struct cvmx_sso_ientx_wqpgrp_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_62_63:2;
		uint64_t head:1;
		uint64_t nosched:1;
		uint64_t reserved_56_59:4;
		uint64_t grp:8;
		uint64_t reserved_42_47:6;
		uint64_t wqp:42;
#else
		uint64_t wqp:42;
		uint64_t reserved_42_47:6;
		uint64_t grp:8;
		uint64_t reserved_56_59:4;
		uint64_t nosched:1;
		uint64_t head:1;
		uint64_t reserved_62_63:2;
#endif
	} cn73xx;
	struct cvmx_sso_ientx_wqpgrp_cn73xx cn75xx;
	struct cvmx_sso_ientx_wqpgrp_s cn78xx;
	struct cvmx_sso_ientx_wqpgrp_s cn78xxp2;
};
typedef union cvmx_sso_ientx_wqpgrp cvmx_sso_ientx_wqpgrp_t;

union cvmx_sso_ipl_confx {
	uint64_t u64;
	struct cvmx_sso_ipl_confx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t queue_val:1;
		uint64_t queue_one:1;
		uint64_t reserved_25_25:1;
		uint64_t queue_head:12;
		uint64_t reserved_12_12:1;
		uint64_t queue_tail:12;
#else
		uint64_t queue_tail:12;
		uint64_t reserved_12_12:1;
		uint64_t queue_head:12;
		uint64_t reserved_25_25:1;
		uint64_t queue_one:1;
		uint64_t queue_val:1;
		uint64_t reserved_28_63:36;
#endif
	} s;
	struct cvmx_sso_ipl_confx_s cn73xx;
	struct cvmx_sso_ipl_confx_s cn75xx;
	struct cvmx_sso_ipl_confx_s cn78xx;
	struct cvmx_sso_ipl_confx_s cn78xxp2;
};
typedef union cvmx_sso_ipl_confx cvmx_sso_ipl_confx_t;

union cvmx_sso_ipl_deschedx {
	uint64_t u64;
	struct cvmx_sso_ipl_deschedx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t queue_val:1;
		uint64_t queue_one:1;
		uint64_t reserved_25_25:1;
		uint64_t queue_head:12;
		uint64_t reserved_12_12:1;
		uint64_t queue_tail:12;
#else
		uint64_t queue_tail:12;
		uint64_t reserved_12_12:1;
		uint64_t queue_head:12;
		uint64_t reserved_25_25:1;
		uint64_t queue_one:1;
		uint64_t queue_val:1;
		uint64_t reserved_28_63:36;
#endif
	} s;
	struct cvmx_sso_ipl_deschedx_s cn73xx;
	struct cvmx_sso_ipl_deschedx_s cn75xx;
	struct cvmx_sso_ipl_deschedx_s cn78xx;
	struct cvmx_sso_ipl_deschedx_s cn78xxp2;
};
typedef union cvmx_sso_ipl_deschedx cvmx_sso_ipl_deschedx_t;

union cvmx_sso_ipl_freex {
	uint64_t u64;
	struct cvmx_sso_ipl_freex_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_62_63:2;
		uint64_t qnum_head:3;
		uint64_t qnum_tail:3;
		uint64_t reserved_28_55:28;
		uint64_t queue_val:1;
		uint64_t reserved_25_26:2;
		uint64_t queue_head:12;
		uint64_t reserved_12_12:1;
		uint64_t queue_tail:12;
#else
		uint64_t queue_tail:12;
		uint64_t reserved_12_12:1;
		uint64_t queue_head:12;
		uint64_t reserved_25_26:2;
		uint64_t queue_val:1;
		uint64_t reserved_28_55:28;
		uint64_t qnum_tail:3;
		uint64_t qnum_head:3;
		uint64_t reserved_62_63:2;
#endif
	} s;
	struct cvmx_sso_ipl_freex_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_62_63:2;
		uint64_t qnum_head:3;
		uint64_t qnum_tail:3;
		uint64_t reserved_28_55:28;
		uint64_t queue_val:1;
		uint64_t reserved_23_26:4;
		uint64_t queue_head:10;
		uint64_t reserved_10_12:3;
		uint64_t queue_tail:10;
#else
		uint64_t queue_tail:10;
		uint64_t reserved_10_12:3;
		uint64_t queue_head:10;
		uint64_t reserved_23_26:4;
		uint64_t queue_val:1;
		uint64_t reserved_28_55:28;
		uint64_t qnum_tail:3;
		uint64_t qnum_head:3;
		uint64_t reserved_62_63:2;
#endif
	} cn73xx;
	struct cvmx_sso_ipl_freex_cn73xx cn75xx;
	struct cvmx_sso_ipl_freex_s cn78xx;
	struct cvmx_sso_ipl_freex_s cn78xxp2;
};
typedef union cvmx_sso_ipl_freex cvmx_sso_ipl_freex_t;

union cvmx_sso_ipl_iaqx {
	uint64_t u64;
	struct cvmx_sso_ipl_iaqx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t queue_val:1;
		uint64_t queue_one:1;
		uint64_t reserved_25_25:1;
		uint64_t queue_head:12;
		uint64_t reserved_12_12:1;
		uint64_t queue_tail:12;
#else
		uint64_t queue_tail:12;
		uint64_t reserved_12_12:1;
		uint64_t queue_head:12;
		uint64_t reserved_25_25:1;
		uint64_t queue_one:1;
		uint64_t queue_val:1;
		uint64_t reserved_28_63:36;
#endif
	} s;
	struct cvmx_sso_ipl_iaqx_s cn73xx;
	struct cvmx_sso_ipl_iaqx_s cn75xx;
	struct cvmx_sso_ipl_iaqx_s cn78xx;
	struct cvmx_sso_ipl_iaqx_s cn78xxp2;
};
typedef union cvmx_sso_ipl_iaqx cvmx_sso_ipl_iaqx_t;

union cvmx_sso_iq_cntx {
	uint64_t u64;
	struct cvmx_sso_iq_cntx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t iq_cnt:32;
#else
		uint64_t iq_cnt:32;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_sso_iq_cntx_s cn68xx;
	struct cvmx_sso_iq_cntx_s cn68xxp1;
};
typedef union cvmx_sso_iq_cntx cvmx_sso_iq_cntx_t;

union cvmx_sso_iq_com_cnt {
	uint64_t u64;
	struct cvmx_sso_iq_com_cnt_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t iq_cnt:32;
#else
		uint64_t iq_cnt:32;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_sso_iq_com_cnt_s cn68xx;
	struct cvmx_sso_iq_com_cnt_s cn68xxp1;
};
typedef union cvmx_sso_iq_com_cnt cvmx_sso_iq_com_cnt_t;

union cvmx_sso_iq_int {
	uint64_t u64;
	struct cvmx_sso_iq_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t iq_int:8;
#else
		uint64_t iq_int:8;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_sso_iq_int_s cn68xx;
	struct cvmx_sso_iq_int_s cn68xxp1;
};
typedef union cvmx_sso_iq_int cvmx_sso_iq_int_t;

union cvmx_sso_iq_int_en {
	uint64_t u64;
	struct cvmx_sso_iq_int_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t int_en:8;
#else
		uint64_t int_en:8;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_sso_iq_int_en_s cn68xx;
	struct cvmx_sso_iq_int_en_s cn68xxp1;
};
typedef union cvmx_sso_iq_int_en cvmx_sso_iq_int_en_t;

union cvmx_sso_iq_thrx {
	uint64_t u64;
	struct cvmx_sso_iq_thrx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t iq_thr:32;
#else
		uint64_t iq_thr:32;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_sso_iq_thrx_s cn68xx;
	struct cvmx_sso_iq_thrx_s cn68xxp1;
};
typedef union cvmx_sso_iq_thrx cvmx_sso_iq_thrx_t;

union cvmx_sso_nos_cnt {
	uint64_t u64;
	struct cvmx_sso_nos_cnt_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_13_63:51;
		uint64_t nos_cnt:13;
#else
		uint64_t nos_cnt:13;
		uint64_t reserved_13_63:51;
#endif
	} s;
	struct cvmx_sso_nos_cnt_cn68xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t nos_cnt:12;
#else
		uint64_t nos_cnt:12;
		uint64_t reserved_12_63:52;
#endif
	} cn68xx;
	struct cvmx_sso_nos_cnt_cn68xx cn68xxp1;
	struct cvmx_sso_nos_cnt_s cn73xx;
	struct cvmx_sso_nos_cnt_s cn75xx;
	struct cvmx_sso_nos_cnt_s cn78xx;
	struct cvmx_sso_nos_cnt_s cn78xxp2;
};
typedef union cvmx_sso_nos_cnt cvmx_sso_nos_cnt_t;

union cvmx_sso_nw_tim {
	uint64_t u64;
	struct cvmx_sso_nw_tim_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t nw_tim:10;
#else
		uint64_t nw_tim:10;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_sso_nw_tim_s cn68xx;
	struct cvmx_sso_nw_tim_s cn68xxp1;
	struct cvmx_sso_nw_tim_s cn73xx;
	struct cvmx_sso_nw_tim_s cn75xx;
	struct cvmx_sso_nw_tim_s cn78xx;
	struct cvmx_sso_nw_tim_s cn78xxp2;
};
typedef union cvmx_sso_nw_tim cvmx_sso_nw_tim_t;

union cvmx_sso_oth_ecc_ctl {
	uint64_t u64;
	struct cvmx_sso_oth_ecc_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_6_63:58;
		uint64_t flip_synd1:2;
		uint64_t ecc_ena1:1;
		uint64_t flip_synd0:2;
		uint64_t ecc_ena0:1;
#else
		uint64_t ecc_ena0:1;
		uint64_t flip_synd0:2;
		uint64_t ecc_ena1:1;
		uint64_t flip_synd1:2;
		uint64_t reserved_6_63:58;
#endif
	} s;
	struct cvmx_sso_oth_ecc_ctl_s cn68xx;
	struct cvmx_sso_oth_ecc_ctl_s cn68xxp1;
};
typedef union cvmx_sso_oth_ecc_ctl cvmx_sso_oth_ecc_ctl_t;

union cvmx_sso_oth_ecc_st {
	uint64_t u64;
	struct cvmx_sso_oth_ecc_st_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_59_63:5;
		uint64_t addr1:11;
		uint64_t reserved_43_47:5;
		uint64_t syndrom1:7;
		uint64_t reserved_27_35:9;
		uint64_t addr0:11;
		uint64_t reserved_11_15:5;
		uint64_t syndrom0:7;
		uint64_t reserved_0_3:4;
#else
		uint64_t reserved_0_3:4;
		uint64_t syndrom0:7;
		uint64_t reserved_11_15:5;
		uint64_t addr0:11;
		uint64_t reserved_27_35:9;
		uint64_t syndrom1:7;
		uint64_t reserved_43_47:5;
		uint64_t addr1:11;
		uint64_t reserved_59_63:5;
#endif
	} s;
	struct cvmx_sso_oth_ecc_st_s cn68xx;
	struct cvmx_sso_oth_ecc_st_s cn68xxp1;
};
typedef union cvmx_sso_oth_ecc_st cvmx_sso_oth_ecc_st_t;

union cvmx_sso_page_cnt {
	uint64_t u64;
	struct cvmx_sso_page_cnt_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t cnt:32;
#else
		uint64_t cnt:32;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_sso_page_cnt_s cn73xx;
	struct cvmx_sso_page_cnt_s cn75xx;
	struct cvmx_sso_page_cnt_s cn78xx;
	struct cvmx_sso_page_cnt_s cn78xxp2;
};
typedef union cvmx_sso_page_cnt cvmx_sso_page_cnt_t;

union cvmx_sso_pnd_ecc_ctl {
	uint64_t u64;
	struct cvmx_sso_pnd_ecc_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_6_63:58;
		uint64_t flip_synd1:2;
		uint64_t ecc_ena1:1;
		uint64_t flip_synd0:2;
		uint64_t ecc_ena0:1;
#else
		uint64_t ecc_ena0:1;
		uint64_t flip_synd0:2;
		uint64_t ecc_ena1:1;
		uint64_t flip_synd1:2;
		uint64_t reserved_6_63:58;
#endif
	} s;
	struct cvmx_sso_pnd_ecc_ctl_s cn68xx;
	struct cvmx_sso_pnd_ecc_ctl_s cn68xxp1;
};
typedef union cvmx_sso_pnd_ecc_ctl cvmx_sso_pnd_ecc_ctl_t;

union cvmx_sso_pnd_ecc_st {
	uint64_t u64;
	struct cvmx_sso_pnd_ecc_st_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_59_63:5;
		uint64_t addr1:11;
		uint64_t reserved_43_47:5;
		uint64_t syndrom1:7;
		uint64_t reserved_27_35:9;
		uint64_t addr0:11;
		uint64_t reserved_11_15:5;
		uint64_t syndrom0:7;
		uint64_t reserved_0_3:4;
#else
		uint64_t reserved_0_3:4;
		uint64_t syndrom0:7;
		uint64_t reserved_11_15:5;
		uint64_t addr0:11;
		uint64_t reserved_27_35:9;
		uint64_t syndrom1:7;
		uint64_t reserved_43_47:5;
		uint64_t addr1:11;
		uint64_t reserved_59_63:5;
#endif
	} s;
	struct cvmx_sso_pnd_ecc_st_s cn68xx;
	struct cvmx_sso_pnd_ecc_st_s cn68xxp1;
};
typedef union cvmx_sso_pnd_ecc_st cvmx_sso_pnd_ecc_st_t;

union cvmx_sso_ppx_arb {
	uint64_t u64;
	struct cvmx_sso_ppx_arb_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t aff_left:4;
		uint64_t reserved_8_15:8;
		uint64_t last_grp:8;
#else
		uint64_t last_grp:8;
		uint64_t reserved_8_15:8;
		uint64_t aff_left:4;
		uint64_t reserved_20_63:44;
#endif
	} s;
	struct cvmx_sso_ppx_arb_s cn73xx;
	struct cvmx_sso_ppx_arb_s cn75xx;
	struct cvmx_sso_ppx_arb_s cn78xx;
	struct cvmx_sso_ppx_arb_s cn78xxp2;
};
typedef union cvmx_sso_ppx_arb cvmx_sso_ppx_arb_t;

union cvmx_sso_ppx_grp_msk {
	uint64_t u64;
	struct cvmx_sso_ppx_grp_msk_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t grp_msk:64;
#else
		uint64_t grp_msk:64;
#endif
	} s;
	struct cvmx_sso_ppx_grp_msk_s cn68xx;
	struct cvmx_sso_ppx_grp_msk_s cn68xxp1;
};
typedef union cvmx_sso_ppx_grp_msk cvmx_sso_ppx_grp_msk_t;

union cvmx_sso_ppx_qos_pri {
	uint64_t u64;
	struct cvmx_sso_ppx_qos_pri_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_60_63:4;
		uint64_t qos7_pri:4;
		uint64_t reserved_52_55:4;
		uint64_t qos6_pri:4;
		uint64_t reserved_44_47:4;
		uint64_t qos5_pri:4;
		uint64_t reserved_36_39:4;
		uint64_t qos4_pri:4;
		uint64_t reserved_28_31:4;
		uint64_t qos3_pri:4;
		uint64_t reserved_20_23:4;
		uint64_t qos2_pri:4;
		uint64_t reserved_12_15:4;
		uint64_t qos1_pri:4;
		uint64_t reserved_4_7:4;
		uint64_t qos0_pri:4;
#else
		uint64_t qos0_pri:4;
		uint64_t reserved_4_7:4;
		uint64_t qos1_pri:4;
		uint64_t reserved_12_15:4;
		uint64_t qos2_pri:4;
		uint64_t reserved_20_23:4;
		uint64_t qos3_pri:4;
		uint64_t reserved_28_31:4;
		uint64_t qos4_pri:4;
		uint64_t reserved_36_39:4;
		uint64_t qos5_pri:4;
		uint64_t reserved_44_47:4;
		uint64_t qos6_pri:4;
		uint64_t reserved_52_55:4;
		uint64_t qos7_pri:4;
		uint64_t reserved_60_63:4;
#endif
	} s;
	struct cvmx_sso_ppx_qos_pri_s cn68xx;
	struct cvmx_sso_ppx_qos_pri_s cn68xxp1;
};
typedef union cvmx_sso_ppx_qos_pri cvmx_sso_ppx_qos_pri_t;

union cvmx_sso_ppx_sx_grpmskx {
	uint64_t u64;
	struct cvmx_sso_ppx_sx_grpmskx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t grp_msk:64;
#else
		uint64_t grp_msk:64;
#endif
	} s;
	struct cvmx_sso_ppx_sx_grpmskx_s cn73xx;
	struct cvmx_sso_ppx_sx_grpmskx_s cn75xx;
	struct cvmx_sso_ppx_sx_grpmskx_s cn78xx;
	struct cvmx_sso_ppx_sx_grpmskx_s cn78xxp2;
};
typedef union cvmx_sso_ppx_sx_grpmskx cvmx_sso_ppx_sx_grpmskx_t;

union cvmx_sso_pp_strict {
	uint64_t u64;
	struct cvmx_sso_pp_strict_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t pp_strict:32;
#else
		uint64_t pp_strict:32;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_sso_pp_strict_s cn68xx;
	struct cvmx_sso_pp_strict_s cn68xxp1;
};
typedef union cvmx_sso_pp_strict cvmx_sso_pp_strict_t;

union cvmx_sso_qosx_rnd {
	uint64_t u64;
	struct cvmx_sso_qosx_rnd_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t rnds_qos:8;
#else
		uint64_t rnds_qos:8;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_sso_qosx_rnd_s cn68xx;
	struct cvmx_sso_qosx_rnd_s cn68xxp1;
};
typedef union cvmx_sso_qosx_rnd cvmx_sso_qosx_rnd_t;

union cvmx_sso_qos_thrx {
	uint64_t u64;
	struct cvmx_sso_qos_thrx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_40_63:24;
		uint64_t buf_cnt:12;
		uint64_t reserved_26_27:2;
		uint64_t max_thr:12;
		uint64_t reserved_12_13:2;
		uint64_t min_thr:12;
#else
		uint64_t min_thr:12;
		uint64_t reserved_12_13:2;
		uint64_t max_thr:12;
		uint64_t reserved_26_27:2;
		uint64_t buf_cnt:12;
		uint64_t reserved_40_63:24;
#endif
	} s;
	struct cvmx_sso_qos_thrx_s cn68xx;
	struct cvmx_sso_qos_thrx_s cn68xxp1;
};
typedef union cvmx_sso_qos_thrx cvmx_sso_qos_thrx_t;

union cvmx_sso_qos_we {
	uint64_t u64;
	struct cvmx_sso_qos_we_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_26_63:38;
		uint64_t des_cnt:12;
		uint64_t reserved_12_13:2;
		uint64_t free_cnt:12;
#else
		uint64_t free_cnt:12;
		uint64_t reserved_12_13:2;
		uint64_t des_cnt:12;
		uint64_t reserved_26_63:38;
#endif
	} s;
	struct cvmx_sso_qos_we_s cn68xx;
	struct cvmx_sso_qos_we_s cn68xxp1;
};
typedef union cvmx_sso_qos_we cvmx_sso_qos_we_t;

union cvmx_sso_reset {
	uint64_t u64;
	struct cvmx_sso_reset_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t busy:1;
		uint64_t reserved_1_62:62;
		uint64_t reset:1;
#else
		uint64_t reset:1;
		uint64_t reserved_1_62:62;
		uint64_t busy:1;
#endif
	} s;
	struct cvmx_sso_reset_cn68xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t reset:1;
#else
		uint64_t reset:1;
		uint64_t reserved_1_63:63;
#endif
	} cn68xx;
	struct cvmx_sso_reset_s cn73xx;
	struct cvmx_sso_reset_s cn75xx;
	struct cvmx_sso_reset_s cn78xx;
	struct cvmx_sso_reset_s cn78xxp2;
};
typedef union cvmx_sso_reset cvmx_sso_reset_t;

union cvmx_sso_rwq_head_ptrx {
	uint64_t u64;
	struct cvmx_sso_rwq_head_ptrx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_38_63:26;
		uint64_t ptr:31;
		uint64_t reserved_5_6:2;
		uint64_t rctr:5;
#else
		uint64_t rctr:5;
		uint64_t reserved_5_6:2;
		uint64_t ptr:31;
		uint64_t reserved_38_63:26;
#endif
	} s;
	struct cvmx_sso_rwq_head_ptrx_s cn68xx;
	struct cvmx_sso_rwq_head_ptrx_s cn68xxp1;
};
typedef union cvmx_sso_rwq_head_ptrx cvmx_sso_rwq_head_ptrx_t;

union cvmx_sso_rwq_pop_fptr {
	uint64_t u64;
	struct cvmx_sso_rwq_pop_fptr_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t val:1;
		uint64_t reserved_38_62:25;
		uint64_t fptr:31;
		uint64_t reserved_0_6:7;
#else
		uint64_t reserved_0_6:7;
		uint64_t fptr:31;
		uint64_t reserved_38_62:25;
		uint64_t val:1;
#endif
	} s;
	struct cvmx_sso_rwq_pop_fptr_s cn68xx;
	struct cvmx_sso_rwq_pop_fptr_s cn68xxp1;
};
typedef union cvmx_sso_rwq_pop_fptr cvmx_sso_rwq_pop_fptr_t;

union cvmx_sso_rwq_psh_fptr {
	uint64_t u64;
	struct cvmx_sso_rwq_psh_fptr_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t full:1;
		uint64_t reserved_38_62:25;
		uint64_t fptr:31;
		uint64_t reserved_0_6:7;
#else
		uint64_t reserved_0_6:7;
		uint64_t fptr:31;
		uint64_t reserved_38_62:25;
		uint64_t full:1;
#endif
	} s;
	struct cvmx_sso_rwq_psh_fptr_s cn68xx;
	struct cvmx_sso_rwq_psh_fptr_s cn68xxp1;
};
typedef union cvmx_sso_rwq_psh_fptr cvmx_sso_rwq_psh_fptr_t;

union cvmx_sso_rwq_tail_ptrx {
	uint64_t u64;
	struct cvmx_sso_rwq_tail_ptrx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_38_63:26;
		uint64_t ptr:31;
		uint64_t reserved_5_6:2;
		uint64_t rctr:5;
#else
		uint64_t rctr:5;
		uint64_t reserved_5_6:2;
		uint64_t ptr:31;
		uint64_t reserved_38_63:26;
#endif
	} s;
	struct cvmx_sso_rwq_tail_ptrx_s cn68xx;
	struct cvmx_sso_rwq_tail_ptrx_s cn68xxp1;
};
typedef union cvmx_sso_rwq_tail_ptrx cvmx_sso_rwq_tail_ptrx_t;

union cvmx_sso_sl_ppx_links {
	uint64_t u64;
	struct cvmx_sso_sl_ppx_links_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t tailc:1;
		uint64_t reserved_60_62:3;
		uint64_t index:12;
		uint64_t reserved_38_47:10;
		uint64_t grp:10;
		uint64_t head:1;
		uint64_t tail:1;
		uint64_t reserved_0_25:26;
#else
		uint64_t reserved_0_25:26;
		uint64_t tail:1;
		uint64_t head:1;
		uint64_t grp:10;
		uint64_t reserved_38_47:10;
		uint64_t index:12;
		uint64_t reserved_60_62:3;
		uint64_t tailc:1;
#endif
	} s;
	struct cvmx_sso_sl_ppx_links_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t tailc:1;
		uint64_t reserved_58_62:5;
		uint64_t index:10;
		uint64_t reserved_36_47:12;
		uint64_t grp:8;
		uint64_t head:1;
		uint64_t tail:1;
		uint64_t reserved_21_25:5;
		uint64_t revlink_index:10;
		uint64_t link_index_vld:1;
		uint64_t link_index:10;
#else
		uint64_t link_index:10;
		uint64_t link_index_vld:1;
		uint64_t revlink_index:10;
		uint64_t reserved_21_25:5;
		uint64_t tail:1;
		uint64_t head:1;
		uint64_t grp:8;
		uint64_t reserved_36_47:12;
		uint64_t index:10;
		uint64_t reserved_58_62:5;
		uint64_t tailc:1;
#endif
	} cn73xx;
	struct cvmx_sso_sl_ppx_links_cn73xx cn75xx;
	struct cvmx_sso_sl_ppx_links_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t tailc:1;
		uint64_t reserved_60_62:3;
		uint64_t index:12;
		uint64_t reserved_38_47:10;
		uint64_t grp:10;
		uint64_t head:1;
		uint64_t tail:1;
		uint64_t reserved_25_25:1;
		uint64_t revlink_index:12;
		uint64_t link_index_vld:1;
		uint64_t link_index:12;
#else
		uint64_t link_index:12;
		uint64_t link_index_vld:1;
		uint64_t revlink_index:12;
		uint64_t reserved_25_25:1;
		uint64_t tail:1;
		uint64_t head:1;
		uint64_t grp:10;
		uint64_t reserved_38_47:10;
		uint64_t index:12;
		uint64_t reserved_60_62:3;
		uint64_t tailc:1;
#endif
	} cn78xx;
	struct cvmx_sso_sl_ppx_links_cn78xx cn78xxp2;
};
typedef union cvmx_sso_sl_ppx_links cvmx_sso_sl_ppx_links_t;

union cvmx_sso_sl_ppx_pendtag {
	uint64_t u64;
	struct cvmx_sso_sl_ppx_pendtag_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pend_switch:1;
		uint64_t pend_get_work:1;
		uint64_t pend_get_work_wait:1;
		uint64_t pend_nosched:1;
		uint64_t pend_nosched_clr:1;
		uint64_t pend_desched:1;
		uint64_t pend_alloc_we:1;
		uint64_t reserved_34_56:23;
		uint64_t pend_tt:2;
		uint64_t pend_tag:32;
#else
		uint64_t pend_tag:32;
		uint64_t pend_tt:2;
		uint64_t reserved_34_56:23;
		uint64_t pend_alloc_we:1;
		uint64_t pend_desched:1;
		uint64_t pend_nosched_clr:1;
		uint64_t pend_nosched:1;
		uint64_t pend_get_work_wait:1;
		uint64_t pend_get_work:1;
		uint64_t pend_switch:1;
#endif
	} s;
	struct cvmx_sso_sl_ppx_pendtag_s cn73xx;
	struct cvmx_sso_sl_ppx_pendtag_s cn75xx;
	struct cvmx_sso_sl_ppx_pendtag_s cn78xx;
	struct cvmx_sso_sl_ppx_pendtag_s cn78xxp2;
};
typedef union cvmx_sso_sl_ppx_pendtag cvmx_sso_sl_ppx_pendtag_t;

union cvmx_sso_sl_ppx_pendwqp {
	uint64_t u64;
	struct cvmx_sso_sl_ppx_pendwqp_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pend_switch:1;
		uint64_t pend_get_work:1;
		uint64_t pend_get_work_wait:1;
		uint64_t pend_nosched:1;
		uint64_t pend_nosched_clr:1;
		uint64_t pend_desched:1;
		uint64_t pend_alloc_we:1;
		uint64_t reserved_56_56:1;
		uint64_t pend_index:12;
		uint64_t reserved_42_43:2;
		uint64_t pend_wqp:42;
#else
		uint64_t pend_wqp:42;
		uint64_t reserved_42_43:2;
		uint64_t pend_index:12;
		uint64_t reserved_56_56:1;
		uint64_t pend_alloc_we:1;
		uint64_t pend_desched:1;
		uint64_t pend_nosched_clr:1;
		uint64_t pend_nosched:1;
		uint64_t pend_get_work_wait:1;
		uint64_t pend_get_work:1;
		uint64_t pend_switch:1;
#endif
	} s;
	struct cvmx_sso_sl_ppx_pendwqp_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t pend_switch:1;
		uint64_t pend_get_work:1;
		uint64_t pend_get_work_wait:1;
		uint64_t pend_nosched:1;
		uint64_t pend_nosched_clr:1;
		uint64_t pend_desched:1;
		uint64_t pend_alloc_we:1;
		uint64_t reserved_54_56:3;
		uint64_t pend_index:10;
		uint64_t reserved_42_43:2;
		uint64_t pend_wqp:42;
#else
		uint64_t pend_wqp:42;
		uint64_t reserved_42_43:2;
		uint64_t pend_index:10;
		uint64_t reserved_54_56:3;
		uint64_t pend_alloc_we:1;
		uint64_t pend_desched:1;
		uint64_t pend_nosched_clr:1;
		uint64_t pend_nosched:1;
		uint64_t pend_get_work_wait:1;
		uint64_t pend_get_work:1;
		uint64_t pend_switch:1;
#endif
	} cn73xx;
	struct cvmx_sso_sl_ppx_pendwqp_cn73xx cn75xx;
	struct cvmx_sso_sl_ppx_pendwqp_s cn78xx;
	struct cvmx_sso_sl_ppx_pendwqp_s cn78xxp2;
};
typedef union cvmx_sso_sl_ppx_pendwqp cvmx_sso_sl_ppx_pendwqp_t;

union cvmx_sso_sl_ppx_tag {
	uint64_t u64;
	struct cvmx_sso_sl_ppx_tag_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t tailc:1;
		uint64_t reserved_60_62:3;
		uint64_t index:12;
		uint64_t reserved_46_47:2;
		uint64_t grp:10;
		uint64_t head:1;
		uint64_t tail:1;
		uint64_t tt:2;
		uint64_t tag:32;
#else
		uint64_t tag:32;
		uint64_t tt:2;
		uint64_t tail:1;
		uint64_t head:1;
		uint64_t grp:10;
		uint64_t reserved_46_47:2;
		uint64_t index:12;
		uint64_t reserved_60_62:3;
		uint64_t tailc:1;
#endif
	} s;
	struct cvmx_sso_sl_ppx_tag_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t tailc:1;
		uint64_t reserved_58_62:5;
		uint64_t index:10;
		uint64_t reserved_44_47:4;
		uint64_t grp:8;
		uint64_t head:1;
		uint64_t tail:1;
		uint64_t tt:2;
		uint64_t tag:32;
#else
		uint64_t tag:32;
		uint64_t tt:2;
		uint64_t tail:1;
		uint64_t head:1;
		uint64_t grp:8;
		uint64_t reserved_44_47:4;
		uint64_t index:10;
		uint64_t reserved_58_62:5;
		uint64_t tailc:1;
#endif
	} cn73xx;
	struct cvmx_sso_sl_ppx_tag_cn73xx cn75xx;
	struct cvmx_sso_sl_ppx_tag_s cn78xx;
	struct cvmx_sso_sl_ppx_tag_s cn78xxp2;
};
typedef union cvmx_sso_sl_ppx_tag cvmx_sso_sl_ppx_tag_t;

union cvmx_sso_sl_ppx_wqp {
	uint64_t u64;
	struct cvmx_sso_sl_ppx_wqp_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_58_63:6;
		uint64_t grp:10;
		uint64_t reserved_42_47:6;
		uint64_t wqp:42;
#else
		uint64_t wqp:42;
		uint64_t reserved_42_47:6;
		uint64_t grp:10;
		uint64_t reserved_58_63:6;
#endif
	} s;
	struct cvmx_sso_sl_ppx_wqp_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_56_63:8;
		uint64_t grp:8;
		uint64_t reserved_42_47:6;
		uint64_t wqp:42;
#else
		uint64_t wqp:42;
		uint64_t reserved_42_47:6;
		uint64_t grp:8;
		uint64_t reserved_56_63:8;
#endif
	} cn73xx;
	struct cvmx_sso_sl_ppx_wqp_cn73xx cn75xx;
	struct cvmx_sso_sl_ppx_wqp_s cn78xx;
	struct cvmx_sso_sl_ppx_wqp_s cn78xxp2;
};
typedef union cvmx_sso_sl_ppx_wqp cvmx_sso_sl_ppx_wqp_t;

union cvmx_sso_taqx_link {
	uint64_t u64;
	struct cvmx_sso_taqx_link_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_11_63:53;
		uint64_t next:11;
#else
		uint64_t next:11;
		uint64_t reserved_11_63:53;
#endif
	} s;
	struct cvmx_sso_taqx_link_s cn73xx;
	struct cvmx_sso_taqx_link_s cn75xx;
	struct cvmx_sso_taqx_link_s cn78xx;
	struct cvmx_sso_taqx_link_s cn78xxp2;
};
typedef union cvmx_sso_taqx_link cvmx_sso_taqx_link_t;

union cvmx_sso_taqx_waex_tag {
	uint64_t u64;
	struct cvmx_sso_taqx_waex_tag_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_34_63:30;
		uint64_t tt:2;
		uint64_t tag:32;
#else
		uint64_t tag:32;
		uint64_t tt:2;
		uint64_t reserved_34_63:30;
#endif
	} s;
	struct cvmx_sso_taqx_waex_tag_s cn73xx;
	struct cvmx_sso_taqx_waex_tag_s cn75xx;
	struct cvmx_sso_taqx_waex_tag_s cn78xx;
	struct cvmx_sso_taqx_waex_tag_s cn78xxp2;
};
typedef union cvmx_sso_taqx_waex_tag cvmx_sso_taqx_waex_tag_t;

union cvmx_sso_taqx_waex_wqp {
	uint64_t u64;
	struct cvmx_sso_taqx_waex_wqp_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_42_63:22;
		uint64_t wqp:42;
#else
		uint64_t wqp:42;
		uint64_t reserved_42_63:22;
#endif
	} s;
	struct cvmx_sso_taqx_waex_wqp_s cn73xx;
	struct cvmx_sso_taqx_waex_wqp_s cn75xx;
	struct cvmx_sso_taqx_waex_wqp_s cn78xx;
	struct cvmx_sso_taqx_waex_wqp_s cn78xxp2;
};
typedef union cvmx_sso_taqx_waex_wqp cvmx_sso_taqx_waex_wqp_t;

union cvmx_sso_taq_add {
	uint64_t u64;
	struct cvmx_sso_taq_add_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_29_63:35;
		uint64_t rsvd_free:13;
		uint64_t reserved_0_15:16;
#else
		uint64_t reserved_0_15:16;
		uint64_t rsvd_free:13;
		uint64_t reserved_29_63:35;
#endif
	} s;
	struct cvmx_sso_taq_add_s cn73xx;
	struct cvmx_sso_taq_add_s cn75xx;
	struct cvmx_sso_taq_add_s cn78xx;
	struct cvmx_sso_taq_add_s cn78xxp2;
};
typedef union cvmx_sso_taq_add cvmx_sso_taq_add_t;

union cvmx_sso_taq_cnt {
	uint64_t u64;
	struct cvmx_sso_taq_cnt_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_27_63:37;
		uint64_t rsvd_free:11;
		uint64_t reserved_11_15:5;
		uint64_t free_cnt:11;
#else
		uint64_t free_cnt:11;
		uint64_t reserved_11_15:5;
		uint64_t rsvd_free:11;
		uint64_t reserved_27_63:37;
#endif
	} s;
	struct cvmx_sso_taq_cnt_s cn73xx;
	struct cvmx_sso_taq_cnt_s cn75xx;
	struct cvmx_sso_taq_cnt_s cn78xx;
	struct cvmx_sso_taq_cnt_s cn78xxp2;
};
typedef union cvmx_sso_taq_cnt cvmx_sso_taq_cnt_t;

union cvmx_sso_tiaqx_status {
	uint64_t u64;
	struct cvmx_sso_tiaqx_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t wae_head:4;
		uint64_t wae_tail:4;
		uint64_t reserved_47_55:9;
		uint64_t wae_used:15;
		uint64_t reserved_23_31:9;
		uint64_t ent_head:11;
		uint64_t reserved_11_11:1;
		uint64_t ent_tail:11;
#else
		uint64_t ent_tail:11;
		uint64_t reserved_11_11:1;
		uint64_t ent_head:11;
		uint64_t reserved_23_31:9;
		uint64_t wae_used:15;
		uint64_t reserved_47_55:9;
		uint64_t wae_tail:4;
		uint64_t wae_head:4;
#endif
	} s;
	struct cvmx_sso_tiaqx_status_s cn73xx;
	struct cvmx_sso_tiaqx_status_s cn75xx;
	struct cvmx_sso_tiaqx_status_s cn78xx;
	struct cvmx_sso_tiaqx_status_s cn78xxp2;
};
typedef union cvmx_sso_tiaqx_status cvmx_sso_tiaqx_status_t;

union cvmx_sso_toaqx_status {
	uint64_t u64;
	struct cvmx_sso_toaqx_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_62_63:2;
		uint64_t ext_vld:1;
		uint64_t partial:1;
		uint64_t wae_tail:4;
		uint64_t reserved_43_55:13;
		uint64_t cl_used:11;
		uint64_t reserved_23_31:9;
		uint64_t ent_head:11;
		uint64_t reserved_11_11:1;
		uint64_t ent_tail:11;
#else
		uint64_t ent_tail:11;
		uint64_t reserved_11_11:1;
		uint64_t ent_head:11;
		uint64_t reserved_23_31:9;
		uint64_t cl_used:11;
		uint64_t reserved_43_55:13;
		uint64_t wae_tail:4;
		uint64_t partial:1;
		uint64_t ext_vld:1;
		uint64_t reserved_62_63:2;
#endif
	} s;
	struct cvmx_sso_toaqx_status_s cn73xx;
	struct cvmx_sso_toaqx_status_s cn75xx;
	struct cvmx_sso_toaqx_status_s cn78xx;
	struct cvmx_sso_toaqx_status_s cn78xxp2;
};
typedef union cvmx_sso_toaqx_status cvmx_sso_toaqx_status_t;

union cvmx_sso_ts_pc {
	uint64_t u64;
	struct cvmx_sso_ts_pc_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t ts_pc:64;
#else
		uint64_t ts_pc:64;
#endif
	} s;
	struct cvmx_sso_ts_pc_s cn68xx;
	struct cvmx_sso_ts_pc_s cn68xxp1;
};
typedef union cvmx_sso_ts_pc cvmx_sso_ts_pc_t;

union cvmx_sso_wa_com_pc {
	uint64_t u64;
	struct cvmx_sso_wa_com_pc_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t wa_pc:64;
#else
		uint64_t wa_pc:64;
#endif
	} s;
	struct cvmx_sso_wa_com_pc_s cn68xx;
	struct cvmx_sso_wa_com_pc_s cn68xxp1;
};
typedef union cvmx_sso_wa_com_pc cvmx_sso_wa_com_pc_t;

union cvmx_sso_wa_pcx {
	uint64_t u64;
	struct cvmx_sso_wa_pcx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t wa_pc:64;
#else
		uint64_t wa_pc:64;
#endif
	} s;
	struct cvmx_sso_wa_pcx_s cn68xx;
	struct cvmx_sso_wa_pcx_s cn68xxp1;
};
typedef union cvmx_sso_wa_pcx cvmx_sso_wa_pcx_t;

union cvmx_sso_wq_int {
	uint64_t u64;
	struct cvmx_sso_wq_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t wq_int:64;
#else
		uint64_t wq_int:64;
#endif
	} s;
	struct cvmx_sso_wq_int_s cn68xx;
	struct cvmx_sso_wq_int_s cn68xxp1;
};
typedef union cvmx_sso_wq_int cvmx_sso_wq_int_t;

union cvmx_sso_wq_int_cntx {
	uint64_t u64;
	struct cvmx_sso_wq_int_cntx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t tc_cnt:4;
		uint64_t reserved_26_27:2;
		uint64_t ds_cnt:12;
		uint64_t reserved_12_13:2;
		uint64_t iq_cnt:12;
#else
		uint64_t iq_cnt:12;
		uint64_t reserved_12_13:2;
		uint64_t ds_cnt:12;
		uint64_t reserved_26_27:2;
		uint64_t tc_cnt:4;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_sso_wq_int_cntx_s cn68xx;
	struct cvmx_sso_wq_int_cntx_s cn68xxp1;
};
typedef union cvmx_sso_wq_int_cntx cvmx_sso_wq_int_cntx_t;

union cvmx_sso_wq_int_pc {
	uint64_t u64;
	struct cvmx_sso_wq_int_pc_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_60_63:4;
		uint64_t pc:28;
		uint64_t reserved_28_31:4;
		uint64_t pc_thr:20;
		uint64_t reserved_0_7:8;
#else
		uint64_t reserved_0_7:8;
		uint64_t pc_thr:20;
		uint64_t reserved_28_31:4;
		uint64_t pc:28;
		uint64_t reserved_60_63:4;
#endif
	} s;
	struct cvmx_sso_wq_int_pc_s cn68xx;
	struct cvmx_sso_wq_int_pc_s cn68xxp1;
	struct cvmx_sso_wq_int_pc_s cn73xx;
	struct cvmx_sso_wq_int_pc_s cn75xx;
	struct cvmx_sso_wq_int_pc_s cn78xx;
	struct cvmx_sso_wq_int_pc_s cn78xxp2;
};
typedef union cvmx_sso_wq_int_pc cvmx_sso_wq_int_pc_t;

union cvmx_sso_wq_int_thrx {
	uint64_t u64;
	struct cvmx_sso_wq_int_thrx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_33_63:31;
		uint64_t tc_en:1;
		uint64_t tc_thr:4;
		uint64_t reserved_26_27:2;
		uint64_t ds_thr:12;
		uint64_t reserved_12_13:2;
		uint64_t iq_thr:12;
#else
		uint64_t iq_thr:12;
		uint64_t reserved_12_13:2;
		uint64_t ds_thr:12;
		uint64_t reserved_26_27:2;
		uint64_t tc_thr:4;
		uint64_t tc_en:1;
		uint64_t reserved_33_63:31;
#endif
	} s;
	struct cvmx_sso_wq_int_thrx_s cn68xx;
	struct cvmx_sso_wq_int_thrx_s cn68xxp1;
};
typedef union cvmx_sso_wq_int_thrx cvmx_sso_wq_int_thrx_t;

union cvmx_sso_wq_iq_dis {
	uint64_t u64;
	struct cvmx_sso_wq_iq_dis_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t iq_dis:64;
#else
		uint64_t iq_dis:64;
#endif
	} s;
	struct cvmx_sso_wq_iq_dis_s cn68xx;
	struct cvmx_sso_wq_iq_dis_s cn68xxp1;
};
typedef union cvmx_sso_wq_iq_dis cvmx_sso_wq_iq_dis_t;

union cvmx_sso_ws_cfg {
	uint64_t u64;
	struct cvmx_sso_ws_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_56_63:8;
		uint64_t ocla_bp:8;
		uint64_t reserved_7_47:41;
		uint64_t aw_clk_dis:1;
		uint64_t gw_clk_dis:1;
		uint64_t disable_pw:1;
		uint64_t arbc_step_en:1;
		uint64_t ncbo_step_en:1;
		uint64_t soc_ccam_dis:1;
		uint64_t sso_cclk_dis:1;
#else
		uint64_t sso_cclk_dis:1;
		uint64_t soc_ccam_dis:1;
		uint64_t ncbo_step_en:1;
		uint64_t arbc_step_en:1;
		uint64_t disable_pw:1;
		uint64_t gw_clk_dis:1;
		uint64_t aw_clk_dis:1;
		uint64_t reserved_7_47:41;
		uint64_t ocla_bp:8;
		uint64_t reserved_56_63:8;
#endif
	} s;
	struct cvmx_sso_ws_cfg_s cn73xx;
	struct cvmx_sso_ws_cfg_s cn75xx;
	struct cvmx_sso_ws_cfg_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_56_63:8;
		uint64_t ocla_bp:8;
		uint64_t reserved_5_47:43;
		uint64_t disable_pw:1;
		uint64_t arbc_step_en:1;
		uint64_t ncbo_step_en:1;
		uint64_t soc_ccam_dis:1;
		uint64_t sso_cclk_dis:1;
#else
		uint64_t sso_cclk_dis:1;
		uint64_t soc_ccam_dis:1;
		uint64_t ncbo_step_en:1;
		uint64_t arbc_step_en:1;
		uint64_t disable_pw:1;
		uint64_t reserved_5_47:43;
		uint64_t ocla_bp:8;
		uint64_t reserved_56_63:8;
#endif
	} cn78xx;
	struct cvmx_sso_ws_cfg_cn78xx cn78xxp2;
};
typedef union cvmx_sso_ws_cfg cvmx_sso_ws_cfg_t;

union cvmx_sso_ws_eco {
	uint64_t u64;
	struct cvmx_sso_ws_eco_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t eco_rw:8;
#else
		uint64_t eco_rw:8;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_sso_ws_eco_s cn73xx;
	struct cvmx_sso_ws_eco_s cn75xx;
};
typedef union cvmx_sso_ws_eco cvmx_sso_ws_eco_t;

union cvmx_sso_ws_pcx {
	uint64_t u64;
	struct cvmx_sso_ws_pcx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t ws_pc:64;
#else
		uint64_t ws_pc:64;
#endif
	} s;
	struct cvmx_sso_ws_pcx_s cn68xx;
	struct cvmx_sso_ws_pcx_s cn68xxp1;
};
typedef union cvmx_sso_ws_pcx cvmx_sso_ws_pcx_t;

union cvmx_sso_xaqx_head_next {
	uint64_t u64;
	struct cvmx_sso_xaqx_head_next_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_42_63:22;
		uint64_t ptr:35;
		uint64_t reserved_0_6:7;
#else
		uint64_t reserved_0_6:7;
		uint64_t ptr:35;
		uint64_t reserved_42_63:22;
#endif
	} s;
	struct cvmx_sso_xaqx_head_next_s cn73xx;
	struct cvmx_sso_xaqx_head_next_s cn75xx;
	struct cvmx_sso_xaqx_head_next_s cn78xx;
	struct cvmx_sso_xaqx_head_next_s cn78xxp2;
};
typedef union cvmx_sso_xaqx_head_next cvmx_sso_xaqx_head_next_t;

union cvmx_sso_xaqx_head_ptr {
	uint64_t u64;
	struct cvmx_sso_xaqx_head_ptr_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_42_63:22;
		uint64_t ptr:35;
		uint64_t reserved_5_6:2;
		uint64_t cl:5;
#else
		uint64_t cl:5;
		uint64_t reserved_5_6:2;
		uint64_t ptr:35;
		uint64_t reserved_42_63:22;
#endif
	} s;
	struct cvmx_sso_xaqx_head_ptr_s cn73xx;
	struct cvmx_sso_xaqx_head_ptr_s cn75xx;
	struct cvmx_sso_xaqx_head_ptr_s cn78xx;
	struct cvmx_sso_xaqx_head_ptr_s cn78xxp2;
};
typedef union cvmx_sso_xaqx_head_ptr cvmx_sso_xaqx_head_ptr_t;

union cvmx_sso_xaqx_tail_next {
	uint64_t u64;
	struct cvmx_sso_xaqx_tail_next_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_42_63:22;
		uint64_t ptr:35;
		uint64_t reserved_0_6:7;
#else
		uint64_t reserved_0_6:7;
		uint64_t ptr:35;
		uint64_t reserved_42_63:22;
#endif
	} s;
	struct cvmx_sso_xaqx_tail_next_s cn73xx;
	struct cvmx_sso_xaqx_tail_next_s cn75xx;
	struct cvmx_sso_xaqx_tail_next_s cn78xx;
	struct cvmx_sso_xaqx_tail_next_s cn78xxp2;
};
typedef union cvmx_sso_xaqx_tail_next cvmx_sso_xaqx_tail_next_t;

union cvmx_sso_xaqx_tail_ptr {
	uint64_t u64;
	struct cvmx_sso_xaqx_tail_ptr_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_42_63:22;
		uint64_t ptr:35;
		uint64_t reserved_5_6:2;
		uint64_t cl:5;
#else
		uint64_t cl:5;
		uint64_t reserved_5_6:2;
		uint64_t ptr:35;
		uint64_t reserved_42_63:22;
#endif
	} s;
	struct cvmx_sso_xaqx_tail_ptr_s cn73xx;
	struct cvmx_sso_xaqx_tail_ptr_s cn75xx;
	struct cvmx_sso_xaqx_tail_ptr_s cn78xx;
	struct cvmx_sso_xaqx_tail_ptr_s cn78xxp2;
};
typedef union cvmx_sso_xaqx_tail_ptr cvmx_sso_xaqx_tail_ptr_t;

union cvmx_sso_xaq_aura {
	uint64_t u64;
	struct cvmx_sso_xaq_aura_s {
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
	struct cvmx_sso_xaq_aura_s cn73xx;
	struct cvmx_sso_xaq_aura_s cn75xx;
	struct cvmx_sso_xaq_aura_s cn78xx;
	struct cvmx_sso_xaq_aura_s cn78xxp2;
};
typedef union cvmx_sso_xaq_aura cvmx_sso_xaq_aura_t;

union cvmx_sso_xaq_latency_pc {
	uint64_t u64;
	struct cvmx_sso_xaq_latency_pc_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t count:64;
#else
		uint64_t count:64;
#endif
	} s;
	struct cvmx_sso_xaq_latency_pc_s cn73xx;
	struct cvmx_sso_xaq_latency_pc_s cn75xx;
	struct cvmx_sso_xaq_latency_pc_s cn78xx;
	struct cvmx_sso_xaq_latency_pc_s cn78xxp2;
};
typedef union cvmx_sso_xaq_latency_pc cvmx_sso_xaq_latency_pc_t;

union cvmx_sso_xaq_req_pc {
	uint64_t u64;
	struct cvmx_sso_xaq_req_pc_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t count:64;
#else
		uint64_t count:64;
#endif
	} s;
	struct cvmx_sso_xaq_req_pc_s cn73xx;
	struct cvmx_sso_xaq_req_pc_s cn75xx;
	struct cvmx_sso_xaq_req_pc_s cn78xx;
	struct cvmx_sso_xaq_req_pc_s cn78xxp2;
};
typedef union cvmx_sso_xaq_req_pc cvmx_sso_xaq_req_pc_t;

#endif
