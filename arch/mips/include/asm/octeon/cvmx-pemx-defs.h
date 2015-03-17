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

#ifndef __CVMX_PEMX_DEFS_H__
#define __CVMX_PEMX_DEFS_H__

static inline uint64_t CVMX_PEMX_BAR1_INDEXX(unsigned long offset, unsigned long block_id)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN66XX & OCTEON_FAMILY_MASK:
	case OCTEON_CNF71XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN63XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN61XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN68XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C00000A8ull) + ((offset) + (block_id) * 0x200000ull) * 8;
	case OCTEON_CN70XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000100ull) + ((offset) + (block_id) * 0x200000ull) * 8;
	case OCTEON_CN78XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN73XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN75XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000100ull) + ((offset) + (block_id) * 0x200000ull) * 8;
	}
	return CVMX_ADD_IO_SEG(0x00011800C00000A8ull) + ((offset) + (block_id) * 0x200000ull) * 8;
}

static inline uint64_t CVMX_PEMX_BAR2_MASK(unsigned long offset)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN66XX & OCTEON_FAMILY_MASK:
	case OCTEON_CNF71XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN61XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN68XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000130ull) + (offset) * 0x1000000ull;
	case OCTEON_CN70XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C00000B0ull) + (offset) * 0x1000000ull;
	case OCTEON_CN78XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN73XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN75XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C00000B0ull) + (offset) * 0x1000000ull;
	}
	return CVMX_ADD_IO_SEG(0x00011800C0000130ull) + (offset) * 0x1000000ull;
}

static inline uint64_t CVMX_PEMX_BAR_CTL(unsigned long offset)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN66XX & OCTEON_FAMILY_MASK:
	case OCTEON_CNF71XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN61XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN63XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN68XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000128ull) + (offset) * 0x1000000ull;
	case OCTEON_CN70XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C00000A8ull) + (offset) * 0x1000000ull;
	case OCTEON_CN78XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN73XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN75XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C00000A8ull) + (offset) * 0x1000000ull;
	}
	return CVMX_ADD_IO_SEG(0x00011800C0000128ull) + (offset) * 0x1000000ull;
}

static inline uint64_t CVMX_PEMX_BIST_STATUS(unsigned long offset)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN66XX & OCTEON_FAMILY_MASK:
	case OCTEON_CNF71XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN63XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN61XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN68XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000018ull) + (offset) * 0x1000000ull;
	case OCTEON_CN70XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000018ull) + (offset) * 0x1000000ull;
	case OCTEON_CN78XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN73XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN75XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000440ull) + (offset) * 0x1000000ull;
	}
	return CVMX_ADD_IO_SEG(0x00011800C0000018ull) + (offset) * 0x1000000ull;
}

static inline uint64_t CVMX_PEMX_BIST_STATUS2(unsigned long offset)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN66XX & OCTEON_FAMILY_MASK:
	case OCTEON_CNF71XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN61XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN63XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN68XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000420ull) + (offset) * 0x1000000ull;
	case OCTEON_CN70XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000440ull) + (offset) * 0x1000000ull;
	}
	return CVMX_ADD_IO_SEG(0x00011800C0000420ull) + (offset) * 0x1000000ull;
}

#define CVMX_PEMX_CFG(offset) (CVMX_ADD_IO_SEG(0x00011800C0000410ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_CFG_RD(offset) (CVMX_ADD_IO_SEG(0x00011800C0000030ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_CFG_WR(offset) (CVMX_ADD_IO_SEG(0x00011800C0000028ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_CLK_EN(offset) (CVMX_ADD_IO_SEG(0x00011800C0000400ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_CPL_LUT_VALID(offset) (CVMX_ADD_IO_SEG(0x00011800C0000098ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_CTL_STATUS(offset) (CVMX_ADD_IO_SEG(0x00011800C0000000ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_CTL_STATUS2(offset) (CVMX_ADD_IO_SEG(0x00011800C0000008ull) + ((offset) & 3) * 0x1000000ull)
static inline uint64_t CVMX_PEMX_DBG_INFO(unsigned long offset)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN66XX & OCTEON_FAMILY_MASK:
	case OCTEON_CNF71XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN61XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN63XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN68XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000008ull) + (offset) * 0x1000000ull;
	case OCTEON_CN70XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C00000D0ull) + (offset) * 0x1000000ull;
	case OCTEON_CN78XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN73XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN75XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C00000D0ull) + (offset) * 0x1000000ull;
	}
	return CVMX_ADD_IO_SEG(0x00011800C0000008ull) + (offset) * 0x1000000ull;
}

#define CVMX_PEMX_DBG_INFO_EN(offset) (CVMX_ADD_IO_SEG(0x00011800C00000A0ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_DIAG_STATUS(offset) (CVMX_ADD_IO_SEG(0x00011800C0000020ull) + ((offset) & 3) * 0x1000000ull)
static inline uint64_t CVMX_PEMX_ECC_ENA(unsigned long offset)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN70XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C00000C0ull) + (offset) * 0x1000000ull;
	case OCTEON_CN78XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN73XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN75XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000448ull) + (offset) * 0x1000000ull;
	}
	return CVMX_ADD_IO_SEG(0x00011800C0000448ull) + (offset) * 0x1000000ull;
}

static inline uint64_t CVMX_PEMX_ECC_SYND_CTRL(unsigned long offset)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN70XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C00000C8ull) + (offset) * 0x1000000ull;
	case OCTEON_CN78XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN73XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN75XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000450ull) + (offset) * 0x1000000ull;
	}
	return CVMX_ADD_IO_SEG(0x00011800C0000450ull) + (offset) * 0x1000000ull;
}

#define CVMX_PEMX_FLR_GLBLCNT_CTL(offset) (CVMX_ADD_IO_SEG(0x00011800C0000210ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_FLR_PF0_VF_STOPREQ(offset) (CVMX_ADD_IO_SEG(0x00011800C0000220ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_FLR_PF_STOPREQ(offset) (CVMX_ADD_IO_SEG(0x00011800C0000218ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_FLR_ZOMBIE_CTL(offset) (CVMX_ADD_IO_SEG(0x00011800C0000230ull) + ((offset) & 3) * 0x1000000ull)
static inline uint64_t CVMX_PEMX_INB_READ_CREDITS(unsigned long offset)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN66XX & OCTEON_FAMILY_MASK:
	case OCTEON_CNF71XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN61XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN68XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000138ull) + (offset) * 0x1000000ull;
	case OCTEON_CN70XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C00000B8ull) + (offset) * 0x1000000ull;
	case OCTEON_CN78XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN73XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN75XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C00000B8ull) + (offset) * 0x1000000ull;
	}
	return CVMX_ADD_IO_SEG(0x00011800C0000138ull) + (offset) * 0x1000000ull;
}

static inline uint64_t CVMX_PEMX_INT_ENB(unsigned long offset)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN66XX & OCTEON_FAMILY_MASK:
	case OCTEON_CNF71XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN61XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN63XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN68XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000410ull) + (offset) * 0x1000000ull;
	case OCTEON_CN70XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000430ull) + (offset) * 0x1000000ull;
	}
	return CVMX_ADD_IO_SEG(0x00011800C0000410ull) + (offset) * 0x1000000ull;
}

static inline uint64_t CVMX_PEMX_INT_ENB_INT(unsigned long offset)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN66XX & OCTEON_FAMILY_MASK:
	case OCTEON_CNF71XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN61XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN63XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN68XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000418ull) + (offset) * 0x1000000ull;
	case OCTEON_CN70XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000438ull) + (offset) * 0x1000000ull;
	}
	return CVMX_ADD_IO_SEG(0x00011800C0000418ull) + (offset) * 0x1000000ull;
}

static inline uint64_t CVMX_PEMX_INT_SUM(unsigned long offset)
{
	switch (cvmx_get_octeon_family()) {
	case OCTEON_CN66XX & OCTEON_FAMILY_MASK:
	case OCTEON_CNF71XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN61XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN63XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN68XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000408ull) + (offset) * 0x1000000ull;
	case OCTEON_CN70XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000428ull) + (offset) * 0x1000000ull;
	case OCTEON_CN78XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN73XX & OCTEON_FAMILY_MASK:
	case OCTEON_CN75XX & OCTEON_FAMILY_MASK:
		return CVMX_ADD_IO_SEG(0x00011800C0000428ull) + (offset) * 0x1000000ull;
	}
	return CVMX_ADD_IO_SEG(0x00011800C0000408ull) + (offset) * 0x1000000ull;
}

#define CVMX_PEMX_ON(offset) (CVMX_ADD_IO_SEG(0x00011800C0000420ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_P2N_BAR0_START(offset) (CVMX_ADD_IO_SEG(0x00011800C0000080ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_P2N_BAR1_START(offset) (CVMX_ADD_IO_SEG(0x00011800C0000088ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_P2N_BAR2_START(offset) (CVMX_ADD_IO_SEG(0x00011800C0000090ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_P2P_BARX_END(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800C0000048ull) + (((offset) & 3) + ((block_id) & 3) * 0x100000ull) * 16)
#define CVMX_PEMX_P2P_BARX_START(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800C0000040ull) + (((offset) & 3) + ((block_id) & 3) * 0x100000ull) * 16)
#define CVMX_PEMX_QLM(offset) (CVMX_ADD_IO_SEG(0x00011800C0000418ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_SPI_CTL(offset) (CVMX_ADD_IO_SEG(0x00011800C0000180ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_SPI_DATA(offset) (CVMX_ADD_IO_SEG(0x00011800C0000188ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_STRAP(offset) (CVMX_ADD_IO_SEG(0x00011800C0000408ull) + ((offset) & 3) * 0x1000000ull)
#define CVMX_PEMX_TLP_CREDITS(offset) (CVMX_ADD_IO_SEG(0x00011800C0000038ull) + ((offset) & 3) * 0x1000000ull)

union cvmx_pemx_bar1_indexx {
	uint64_t u64;
	struct cvmx_pemx_bar1_indexx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_24_63:40;
		uint64_t addr_idx:20;
		uint64_t ca:1;
		uint64_t end_swp:2;
		uint64_t addr_v:1;
#else
		uint64_t addr_v:1;
		uint64_t end_swp:2;
		uint64_t ca:1;
		uint64_t addr_idx:20;
		uint64_t reserved_24_63:40;
#endif
	} s;
	struct cvmx_pemx_bar1_indexx_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_20_63:44;
		uint64_t addr_idx:16;
		uint64_t ca:1;
		uint64_t end_swp:2;
		uint64_t addr_v:1;
#else
		uint64_t addr_v:1;
		uint64_t end_swp:2;
		uint64_t ca:1;
		uint64_t addr_idx:16;
		uint64_t reserved_20_63:44;
#endif
	} cn61xx;
	struct cvmx_pemx_bar1_indexx_cn61xx cn63xx;
	struct cvmx_pemx_bar1_indexx_cn61xx cn63xxp1;
	struct cvmx_pemx_bar1_indexx_cn61xx cn66xx;
	struct cvmx_pemx_bar1_indexx_cn61xx cn68xx;
	struct cvmx_pemx_bar1_indexx_cn61xx cn68xxp1;
	struct cvmx_pemx_bar1_indexx_s cn70xx;
	struct cvmx_pemx_bar1_indexx_s cn70xxp1;
	struct cvmx_pemx_bar1_indexx_s cn73xx;
	struct cvmx_pemx_bar1_indexx_s cn75xx;
	struct cvmx_pemx_bar1_indexx_s cn78xx;
	struct cvmx_pemx_bar1_indexx_s cn78xxp2;
	struct cvmx_pemx_bar1_indexx_cn61xx cnf71xx;
};
typedef union cvmx_pemx_bar1_indexx cvmx_pemx_bar1_indexx_t;

union cvmx_pemx_bar2_mask {
	uint64_t u64;
	struct cvmx_pemx_bar2_mask_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_42_63:22;
		uint64_t mask:39;
		uint64_t reserved_0_2:3;
#else
		uint64_t reserved_0_2:3;
		uint64_t mask:39;
		uint64_t reserved_42_63:22;
#endif
	} s;
	struct cvmx_pemx_bar2_mask_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_38_63:26;
		uint64_t mask:35;
		uint64_t reserved_0_2:3;
#else
		uint64_t reserved_0_2:3;
		uint64_t mask:35;
		uint64_t reserved_38_63:26;
#endif
	} cn61xx;
	struct cvmx_pemx_bar2_mask_cn61xx cn66xx;
	struct cvmx_pemx_bar2_mask_cn61xx cn68xx;
	struct cvmx_pemx_bar2_mask_cn61xx cn68xxp1;
	struct cvmx_pemx_bar2_mask_cn61xx cn70xx;
	struct cvmx_pemx_bar2_mask_cn61xx cn70xxp1;
	struct cvmx_pemx_bar2_mask_s cn73xx;
	struct cvmx_pemx_bar2_mask_s cn75xx;
	struct cvmx_pemx_bar2_mask_s cn78xx;
	struct cvmx_pemx_bar2_mask_s cn78xxp2;
	struct cvmx_pemx_bar2_mask_cn61xx cnf71xx;
};
typedef union cvmx_pemx_bar2_mask cvmx_pemx_bar2_mask_t;

union cvmx_pemx_bar_ctl {
	uint64_t u64;
	struct cvmx_pemx_bar_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t bar1_siz:3;
		uint64_t bar2_enb:1;
		uint64_t bar2_esx:2;
		uint64_t bar2_cax:1;
#else
		uint64_t bar2_cax:1;
		uint64_t bar2_esx:2;
		uint64_t bar2_enb:1;
		uint64_t bar1_siz:3;
		uint64_t reserved_7_63:57;
#endif
	} s;
	struct cvmx_pemx_bar_ctl_s cn61xx;
	struct cvmx_pemx_bar_ctl_s cn63xx;
	struct cvmx_pemx_bar_ctl_s cn63xxp1;
	struct cvmx_pemx_bar_ctl_s cn66xx;
	struct cvmx_pemx_bar_ctl_s cn68xx;
	struct cvmx_pemx_bar_ctl_s cn68xxp1;
	struct cvmx_pemx_bar_ctl_s cn70xx;
	struct cvmx_pemx_bar_ctl_s cn70xxp1;
	struct cvmx_pemx_bar_ctl_s cn73xx;
	struct cvmx_pemx_bar_ctl_s cn75xx;
	struct cvmx_pemx_bar_ctl_s cn78xx;
	struct cvmx_pemx_bar_ctl_s cn78xxp2;
	struct cvmx_pemx_bar_ctl_s cnf71xx;
};
typedef union cvmx_pemx_bar_ctl cvmx_pemx_bar_ctl_t;

union cvmx_pemx_bist_status {
	uint64_t u64;
	struct cvmx_pemx_bist_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t retryc:1;
		uint64_t reserved_14_14:1;
		uint64_t rqhdrb0:1;
		uint64_t rqhdrb1:1;
		uint64_t rqdatab0:1;
		uint64_t rqdatab1:1;
		uint64_t tlpn_d0:1;
		uint64_t tlpn_d1:1;
		uint64_t reserved_0_7:8;
#else
		uint64_t reserved_0_7:8;
		uint64_t tlpn_d1:1;
		uint64_t tlpn_d0:1;
		uint64_t rqdatab1:1;
		uint64_t rqdatab0:1;
		uint64_t rqhdrb1:1;
		uint64_t rqhdrb0:1;
		uint64_t reserved_14_14:1;
		uint64_t retryc:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_pemx_bist_status_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t retry:1;
		uint64_t rqdata0:1;
		uint64_t rqdata1:1;
		uint64_t rqdata2:1;
		uint64_t rqdata3:1;
		uint64_t rqhdr1:1;
		uint64_t rqhdr0:1;
		uint64_t sot:1;
#else
		uint64_t sot:1;
		uint64_t rqhdr0:1;
		uint64_t rqhdr1:1;
		uint64_t rqdata3:1;
		uint64_t rqdata2:1;
		uint64_t rqdata1:1;
		uint64_t rqdata0:1;
		uint64_t retry:1;
		uint64_t reserved_8_63:56;
#endif
	} cn61xx;
	struct cvmx_pemx_bist_status_cn61xx cn63xx;
	struct cvmx_pemx_bist_status_cn61xx cn63xxp1;
	struct cvmx_pemx_bist_status_cn61xx cn66xx;
	struct cvmx_pemx_bist_status_cn61xx cn68xx;
	struct cvmx_pemx_bist_status_cn61xx cn68xxp1;
	struct cvmx_pemx_bist_status_cn70xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_6_63:58;
		uint64_t retry:1;
		uint64_t sot:1;
		uint64_t rqhdr0:1;
		uint64_t rqhdr1:1;
		uint64_t rqdata0:1;
		uint64_t rqdata1:1;
#else
		uint64_t rqdata1:1;
		uint64_t rqdata0:1;
		uint64_t rqhdr1:1;
		uint64_t rqhdr0:1;
		uint64_t sot:1;
		uint64_t retry:1;
		uint64_t reserved_6_63:58;
#endif
	} cn70xx;
	struct cvmx_pemx_bist_status_cn70xx cn70xxp1;
	struct cvmx_pemx_bist_status_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t retryc:1;
		uint64_t sot:1;
		uint64_t rqhdrb0:1;
		uint64_t rqhdrb1:1;
		uint64_t rqdatab0:1;
		uint64_t rqdatab1:1;
		uint64_t tlpn_d0:1;
		uint64_t tlpn_d1:1;
		uint64_t tlpn_ctl:1;
		uint64_t tlpp_d0:1;
		uint64_t tlpp_d1:1;
		uint64_t tlpp_ctl:1;
		uint64_t tlpc_d0:1;
		uint64_t tlpc_d1:1;
		uint64_t tlpc_ctl:1;
		uint64_t m2s:1;
#else
		uint64_t m2s:1;
		uint64_t tlpc_ctl:1;
		uint64_t tlpc_d1:1;
		uint64_t tlpc_d0:1;
		uint64_t tlpp_ctl:1;
		uint64_t tlpp_d1:1;
		uint64_t tlpp_d0:1;
		uint64_t tlpn_ctl:1;
		uint64_t tlpn_d1:1;
		uint64_t tlpn_d0:1;
		uint64_t rqdatab1:1;
		uint64_t rqdatab0:1;
		uint64_t rqhdrb1:1;
		uint64_t rqhdrb0:1;
		uint64_t sot:1;
		uint64_t retryc:1;
		uint64_t reserved_16_63:48;
#endif
	} cn73xx;
	struct cvmx_pemx_bist_status_cn73xx cn75xx;
	struct cvmx_pemx_bist_status_cn73xx cn78xx;
	struct cvmx_pemx_bist_status_cn73xx cn78xxp2;
	struct cvmx_pemx_bist_status_cn61xx cnf71xx;
};
typedef union cvmx_pemx_bist_status cvmx_pemx_bist_status_t;

union cvmx_pemx_bist_status2 {
	uint64_t u64;
	struct cvmx_pemx_bist_status2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_13_63:51;
		uint64_t tlpn_d:1;
		uint64_t tlpn_ctl:1;
		uint64_t tlpp_d:1;
		uint64_t reserved_0_9:10;
#else
		uint64_t reserved_0_9:10;
		uint64_t tlpp_d:1;
		uint64_t tlpn_ctl:1;
		uint64_t tlpn_d:1;
		uint64_t reserved_13_63:51;
#endif
	} s;
	struct cvmx_pemx_bist_status2_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t e2p_cpl:1;
		uint64_t e2p_n:1;
		uint64_t e2p_p:1;
		uint64_t peai_p2e:1;
		uint64_t pef_tpf1:1;
		uint64_t pef_tpf0:1;
		uint64_t pef_tnf:1;
		uint64_t pef_tcf1:1;
		uint64_t pef_tc0:1;
		uint64_t ppf:1;
#else
		uint64_t ppf:1;
		uint64_t pef_tc0:1;
		uint64_t pef_tcf1:1;
		uint64_t pef_tnf:1;
		uint64_t pef_tpf0:1;
		uint64_t pef_tpf1:1;
		uint64_t peai_p2e:1;
		uint64_t e2p_p:1;
		uint64_t e2p_n:1;
		uint64_t e2p_cpl:1;
		uint64_t reserved_10_63:54;
#endif
	} cn61xx;
	struct cvmx_pemx_bist_status2_cn61xx cn63xx;
	struct cvmx_pemx_bist_status2_cn61xx cn63xxp1;
	struct cvmx_pemx_bist_status2_cn61xx cn66xx;
	struct cvmx_pemx_bist_status2_cn61xx cn68xx;
	struct cvmx_pemx_bist_status2_cn61xx cn68xxp1;
	struct cvmx_pemx_bist_status2_cn70xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t peai_p2e:1;
		uint64_t tlpn_d:1;
		uint64_t tlpn_ctl:1;
		uint64_t tlpp_d:1;
		uint64_t tlpp_ctl:1;
		uint64_t tlpc_d:1;
		uint64_t tlpc_ctl:1;
		uint64_t tlpan_d:1;
		uint64_t tlpan_ctl:1;
		uint64_t tlpap_d:1;
		uint64_t tlpap_ctl:1;
		uint64_t tlpac_d:1;
		uint64_t tlpac_ctl:1;
		uint64_t m2s:1;
#else
		uint64_t m2s:1;
		uint64_t tlpac_ctl:1;
		uint64_t tlpac_d:1;
		uint64_t tlpap_ctl:1;
		uint64_t tlpap_d:1;
		uint64_t tlpan_ctl:1;
		uint64_t tlpan_d:1;
		uint64_t tlpc_ctl:1;
		uint64_t tlpc_d:1;
		uint64_t tlpp_ctl:1;
		uint64_t tlpp_d:1;
		uint64_t tlpn_ctl:1;
		uint64_t tlpn_d:1;
		uint64_t peai_p2e:1;
		uint64_t reserved_14_63:50;
#endif
	} cn70xx;
	struct cvmx_pemx_bist_status2_cn70xx cn70xxp1;
	struct cvmx_pemx_bist_status2_cn61xx cnf71xx;
};
typedef union cvmx_pemx_bist_status2 cvmx_pemx_bist_status2_t;

union cvmx_pemx_cfg {
	uint64_t u64;
	struct cvmx_pemx_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_5_63:59;
		uint64_t laneswap:1;
		uint64_t reserved_2_3:2;
		uint64_t md:2;
#else
		uint64_t md:2;
		uint64_t reserved_2_3:2;
		uint64_t laneswap:1;
		uint64_t reserved_5_63:59;
#endif
	} s;
	struct cvmx_pemx_cfg_cn70xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_5_63:59;
		uint64_t laneswap:1;
		uint64_t hostmd:1;
		uint64_t md:3;
#else
		uint64_t md:3;
		uint64_t hostmd:1;
		uint64_t laneswap:1;
		uint64_t reserved_5_63:59;
#endif
	} cn70xx;
	struct cvmx_pemx_cfg_cn70xx cn70xxp1;
	struct cvmx_pemx_cfg_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_5_63:59;
		uint64_t laneswap:1;
		uint64_t lanes8:1;
		uint64_t hostmd:1;
		uint64_t md:2;
#else
		uint64_t md:2;
		uint64_t hostmd:1;
		uint64_t lanes8:1;
		uint64_t laneswap:1;
		uint64_t reserved_5_63:59;
#endif
	} cn73xx;
	struct cvmx_pemx_cfg_cn73xx cn75xx;
	struct cvmx_pemx_cfg_cn73xx cn78xx;
	struct cvmx_pemx_cfg_cn73xx cn78xxp2;
};
typedef union cvmx_pemx_cfg cvmx_pemx_cfg_t;

union cvmx_pemx_cfg_rd {
	uint64_t u64;
	struct cvmx_pemx_cfg_rd_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t data:32;
		uint64_t addr:32;
#else
		uint64_t addr:32;
		uint64_t data:32;
#endif
	} s;
	struct cvmx_pemx_cfg_rd_s cn61xx;
	struct cvmx_pemx_cfg_rd_s cn63xx;
	struct cvmx_pemx_cfg_rd_s cn63xxp1;
	struct cvmx_pemx_cfg_rd_s cn66xx;
	struct cvmx_pemx_cfg_rd_s cn68xx;
	struct cvmx_pemx_cfg_rd_s cn68xxp1;
	struct cvmx_pemx_cfg_rd_s cn70xx;
	struct cvmx_pemx_cfg_rd_s cn70xxp1;
	struct cvmx_pemx_cfg_rd_s cn73xx;
	struct cvmx_pemx_cfg_rd_s cn75xx;
	struct cvmx_pemx_cfg_rd_s cn78xx;
	struct cvmx_pemx_cfg_rd_s cn78xxp2;
	struct cvmx_pemx_cfg_rd_s cnf71xx;
};
typedef union cvmx_pemx_cfg_rd cvmx_pemx_cfg_rd_t;

union cvmx_pemx_cfg_wr {
	uint64_t u64;
	struct cvmx_pemx_cfg_wr_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t data:32;
		uint64_t addr:32;
#else
		uint64_t addr:32;
		uint64_t data:32;
#endif
	} s;
	struct cvmx_pemx_cfg_wr_s cn61xx;
	struct cvmx_pemx_cfg_wr_s cn63xx;
	struct cvmx_pemx_cfg_wr_s cn63xxp1;
	struct cvmx_pemx_cfg_wr_s cn66xx;
	struct cvmx_pemx_cfg_wr_s cn68xx;
	struct cvmx_pemx_cfg_wr_s cn68xxp1;
	struct cvmx_pemx_cfg_wr_s cn70xx;
	struct cvmx_pemx_cfg_wr_s cn70xxp1;
	struct cvmx_pemx_cfg_wr_s cn73xx;
	struct cvmx_pemx_cfg_wr_s cn75xx;
	struct cvmx_pemx_cfg_wr_s cn78xx;
	struct cvmx_pemx_cfg_wr_s cn78xxp2;
	struct cvmx_pemx_cfg_wr_s cnf71xx;
};
typedef union cvmx_pemx_cfg_wr cvmx_pemx_cfg_wr_t;

union cvmx_pemx_clk_en {
	uint64_t u64;
	struct cvmx_pemx_clk_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t pceclk_gate:1;
		uint64_t csclk_gate:1;
#else
		uint64_t csclk_gate:1;
		uint64_t pceclk_gate:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_pemx_clk_en_s cn70xx;
	struct cvmx_pemx_clk_en_s cn70xxp1;
	struct cvmx_pemx_clk_en_s cn73xx;
	struct cvmx_pemx_clk_en_s cn75xx;
	struct cvmx_pemx_clk_en_s cn78xx;
	struct cvmx_pemx_clk_en_s cn78xxp2;
};
typedef union cvmx_pemx_clk_en cvmx_pemx_clk_en_t;

union cvmx_pemx_cpl_lut_valid {
	uint64_t u64;
	struct cvmx_pemx_cpl_lut_valid_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t tag:64;
#else
		uint64_t tag:64;
#endif
	} s;
	struct cvmx_pemx_cpl_lut_valid_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t tag:32;
#else
		uint64_t tag:32;
		uint64_t reserved_32_63:32;
#endif
	} cn61xx;
	struct cvmx_pemx_cpl_lut_valid_cn61xx cn63xx;
	struct cvmx_pemx_cpl_lut_valid_cn61xx cn63xxp1;
	struct cvmx_pemx_cpl_lut_valid_cn61xx cn66xx;
	struct cvmx_pemx_cpl_lut_valid_cn61xx cn68xx;
	struct cvmx_pemx_cpl_lut_valid_cn61xx cn68xxp1;
	struct cvmx_pemx_cpl_lut_valid_cn61xx cn70xx;
	struct cvmx_pemx_cpl_lut_valid_cn61xx cn70xxp1;
	struct cvmx_pemx_cpl_lut_valid_s cn73xx;
	struct cvmx_pemx_cpl_lut_valid_s cn75xx;
	struct cvmx_pemx_cpl_lut_valid_s cn78xx;
	struct cvmx_pemx_cpl_lut_valid_s cn78xxp2;
	struct cvmx_pemx_cpl_lut_valid_cn61xx cnf71xx;
};
typedef union cvmx_pemx_cpl_lut_valid cvmx_pemx_cpl_lut_valid_t;

union cvmx_pemx_ctl_status {
	uint64_t u64;
	struct cvmx_pemx_ctl_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_51_63:13;
		uint64_t inv_dpar:1;
		uint64_t inv_hpar:1;
		uint64_t inv_rpar:1;
		uint64_t auto_sd:1;
		uint64_t dnum:5;
		uint64_t pbus:8;
		uint64_t reserved_32_33:2;
		uint64_t cfg_rtry:16;
		uint64_t reserved_12_15:4;
		uint64_t pm_xtoff:1;
		uint64_t pm_xpme:1;
		uint64_t ob_p_cmd:1;
		uint64_t reserved_7_8:2;
		uint64_t nf_ecrc:1;
		uint64_t dly_one:1;
		uint64_t lnk_enb:1;
		uint64_t ro_ctlp:1;
		uint64_t fast_lm:1;
		uint64_t inv_ecrc:1;
		uint64_t inv_lcrc:1;
#else
		uint64_t inv_lcrc:1;
		uint64_t inv_ecrc:1;
		uint64_t fast_lm:1;
		uint64_t ro_ctlp:1;
		uint64_t lnk_enb:1;
		uint64_t dly_one:1;
		uint64_t nf_ecrc:1;
		uint64_t reserved_7_8:2;
		uint64_t ob_p_cmd:1;
		uint64_t pm_xpme:1;
		uint64_t pm_xtoff:1;
		uint64_t reserved_12_15:4;
		uint64_t cfg_rtry:16;
		uint64_t reserved_32_33:2;
		uint64_t pbus:8;
		uint64_t dnum:5;
		uint64_t auto_sd:1;
		uint64_t inv_rpar:1;
		uint64_t inv_hpar:1;
		uint64_t inv_dpar:1;
		uint64_t reserved_51_63:13;
#endif
	} s;
	struct cvmx_pemx_ctl_status_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t auto_sd:1;
		uint64_t dnum:5;
		uint64_t pbus:8;
		uint64_t reserved_32_33:2;
		uint64_t cfg_rtry:16;
		uint64_t reserved_12_15:4;
		uint64_t pm_xtoff:1;
		uint64_t pm_xpme:1;
		uint64_t ob_p_cmd:1;
		uint64_t reserved_7_8:2;
		uint64_t nf_ecrc:1;
		uint64_t dly_one:1;
		uint64_t lnk_enb:1;
		uint64_t ro_ctlp:1;
		uint64_t fast_lm:1;
		uint64_t inv_ecrc:1;
		uint64_t inv_lcrc:1;
#else
		uint64_t inv_lcrc:1;
		uint64_t inv_ecrc:1;
		uint64_t fast_lm:1;
		uint64_t ro_ctlp:1;
		uint64_t lnk_enb:1;
		uint64_t dly_one:1;
		uint64_t nf_ecrc:1;
		uint64_t reserved_7_8:2;
		uint64_t ob_p_cmd:1;
		uint64_t pm_xpme:1;
		uint64_t pm_xtoff:1;
		uint64_t reserved_12_15:4;
		uint64_t cfg_rtry:16;
		uint64_t reserved_32_33:2;
		uint64_t pbus:8;
		uint64_t dnum:5;
		uint64_t auto_sd:1;
		uint64_t reserved_48_63:16;
#endif
	} cn61xx;
	struct cvmx_pemx_ctl_status_cn61xx cn63xx;
	struct cvmx_pemx_ctl_status_cn61xx cn63xxp1;
	struct cvmx_pemx_ctl_status_cn61xx cn66xx;
	struct cvmx_pemx_ctl_status_cn61xx cn68xx;
	struct cvmx_pemx_ctl_status_cn61xx cn68xxp1;
	struct cvmx_pemx_ctl_status_s cn70xx;
	struct cvmx_pemx_ctl_status_s cn70xxp1;
	struct cvmx_pemx_ctl_status_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_51_63:13;
		uint64_t inv_dpar:1;
		uint64_t reserved_48_49:2;
		uint64_t auto_sd:1;
		uint64_t dnum:5;
		uint64_t pbus:8;
		uint64_t reserved_32_33:2;
		uint64_t cfg_rtry:16;
		uint64_t reserved_12_15:4;
		uint64_t pm_xtoff:1;
		uint64_t pm_xpme:1;
		uint64_t ob_p_cmd:1;
		uint64_t reserved_7_8:2;
		uint64_t nf_ecrc:1;
		uint64_t dly_one:1;
		uint64_t lnk_enb:1;
		uint64_t ro_ctlp:1;
		uint64_t fast_lm:1;
		uint64_t inv_ecrc:1;
		uint64_t inv_lcrc:1;
#else
		uint64_t inv_lcrc:1;
		uint64_t inv_ecrc:1;
		uint64_t fast_lm:1;
		uint64_t ro_ctlp:1;
		uint64_t lnk_enb:1;
		uint64_t dly_one:1;
		uint64_t nf_ecrc:1;
		uint64_t reserved_7_8:2;
		uint64_t ob_p_cmd:1;
		uint64_t pm_xpme:1;
		uint64_t pm_xtoff:1;
		uint64_t reserved_12_15:4;
		uint64_t cfg_rtry:16;
		uint64_t reserved_32_33:2;
		uint64_t pbus:8;
		uint64_t dnum:5;
		uint64_t auto_sd:1;
		uint64_t reserved_48_49:2;
		uint64_t inv_dpar:1;
		uint64_t reserved_51_63:13;
#endif
	} cn73xx;
	struct cvmx_pemx_ctl_status_cn73xx cn75xx;
	struct cvmx_pemx_ctl_status_cn73xx cn78xx;
	struct cvmx_pemx_ctl_status_cn73xx cn78xxp2;
	struct cvmx_pemx_ctl_status_cn61xx cnf71xx;
};
typedef union cvmx_pemx_ctl_status cvmx_pemx_ctl_status_t;

union cvmx_pemx_ctl_status2 {
	uint64_t u64;
	struct cvmx_pemx_ctl_status2_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t no_fwd_prg:16;
#else
		uint64_t no_fwd_prg:16;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_pemx_ctl_status2_s cn73xx;
	struct cvmx_pemx_ctl_status2_s cn75xx;
	struct cvmx_pemx_ctl_status2_s cn78xx;
	struct cvmx_pemx_ctl_status2_s cn78xxp2;
};
typedef union cvmx_pemx_ctl_status2 cvmx_pemx_ctl_status2_t;

union cvmx_pemx_dbg_info {
	uint64_t u64;
	struct cvmx_pemx_dbg_info_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_58_63:6;
		uint64_t qhdr_b1_dbe:1;
		uint64_t qhdr_b1_sbe:1;
		uint64_t qhdr_b0_dbe:1;
		uint64_t qhdr_b0_sbe:1;
		uint64_t rtry_dbe:1;
		uint64_t rtry_sbe:1;
		uint64_t reserved_50_51:2;
		uint64_t c_d1_dbe:1;
		uint64_t c_d1_sbe:1;
		uint64_t c_d0_dbe:1;
		uint64_t c_d0_sbe:1;
		uint64_t reserved_34_45:12;
		uint64_t datq_pe:1;
		uint64_t hdrq_pe:1;
		uint64_t reserved_31_31:1;
		uint64_t ecrc_e:1;
		uint64_t rawwpp:1;
		uint64_t racpp:1;
		uint64_t ramtlp:1;
		uint64_t rarwdns:1;
		uint64_t caar:1;
		uint64_t racca:1;
		uint64_t racur:1;
		uint64_t rauc:1;
		uint64_t rqo:1;
		uint64_t fcuv:1;
		uint64_t rpe:1;
		uint64_t fcpvwt:1;
		uint64_t dpeoosd:1;
		uint64_t rtwdle:1;
		uint64_t rdwdle:1;
		uint64_t mre:1;
		uint64_t rte:1;
		uint64_t acto:1;
		uint64_t rvdm:1;
		uint64_t rumep:1;
		uint64_t rptamrc:1;
		uint64_t rpmerc:1;
		uint64_t rfemrc:1;
		uint64_t rnfemrc:1;
		uint64_t rcemrc:1;
		uint64_t rpoison:1;
		uint64_t recrce:1;
		uint64_t rtlplle:1;
		uint64_t rtlpmal:1;
		uint64_t spoison:1;
#else
		uint64_t spoison:1;
		uint64_t rtlpmal:1;
		uint64_t rtlplle:1;
		uint64_t recrce:1;
		uint64_t rpoison:1;
		uint64_t rcemrc:1;
		uint64_t rnfemrc:1;
		uint64_t rfemrc:1;
		uint64_t rpmerc:1;
		uint64_t rptamrc:1;
		uint64_t rumep:1;
		uint64_t rvdm:1;
		uint64_t acto:1;
		uint64_t rte:1;
		uint64_t mre:1;
		uint64_t rdwdle:1;
		uint64_t rtwdle:1;
		uint64_t dpeoosd:1;
		uint64_t fcpvwt:1;
		uint64_t rpe:1;
		uint64_t fcuv:1;
		uint64_t rqo:1;
		uint64_t rauc:1;
		uint64_t racur:1;
		uint64_t racca:1;
		uint64_t caar:1;
		uint64_t rarwdns:1;
		uint64_t ramtlp:1;
		uint64_t racpp:1;
		uint64_t rawwpp:1;
		uint64_t ecrc_e:1;
		uint64_t reserved_31_31:1;
		uint64_t hdrq_pe:1;
		uint64_t datq_pe:1;
		uint64_t reserved_34_45:12;
		uint64_t c_d0_sbe:1;
		uint64_t c_d0_dbe:1;
		uint64_t c_d1_sbe:1;
		uint64_t c_d1_dbe:1;
		uint64_t reserved_50_51:2;
		uint64_t rtry_sbe:1;
		uint64_t rtry_dbe:1;
		uint64_t qhdr_b0_sbe:1;
		uint64_t qhdr_b0_dbe:1;
		uint64_t qhdr_b1_sbe:1;
		uint64_t qhdr_b1_dbe:1;
		uint64_t reserved_58_63:6;
#endif
	} s;
	struct cvmx_pemx_dbg_info_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_31_63:33;
		uint64_t ecrc_e:1;
		uint64_t rawwpp:1;
		uint64_t racpp:1;
		uint64_t ramtlp:1;
		uint64_t rarwdns:1;
		uint64_t caar:1;
		uint64_t racca:1;
		uint64_t racur:1;
		uint64_t rauc:1;
		uint64_t rqo:1;
		uint64_t fcuv:1;
		uint64_t rpe:1;
		uint64_t fcpvwt:1;
		uint64_t dpeoosd:1;
		uint64_t rtwdle:1;
		uint64_t rdwdle:1;
		uint64_t mre:1;
		uint64_t rte:1;
		uint64_t acto:1;
		uint64_t rvdm:1;
		uint64_t rumep:1;
		uint64_t rptamrc:1;
		uint64_t rpmerc:1;
		uint64_t rfemrc:1;
		uint64_t rnfemrc:1;
		uint64_t rcemrc:1;
		uint64_t rpoison:1;
		uint64_t recrce:1;
		uint64_t rtlplle:1;
		uint64_t rtlpmal:1;
		uint64_t spoison:1;
#else
		uint64_t spoison:1;
		uint64_t rtlpmal:1;
		uint64_t rtlplle:1;
		uint64_t recrce:1;
		uint64_t rpoison:1;
		uint64_t rcemrc:1;
		uint64_t rnfemrc:1;
		uint64_t rfemrc:1;
		uint64_t rpmerc:1;
		uint64_t rptamrc:1;
		uint64_t rumep:1;
		uint64_t rvdm:1;
		uint64_t acto:1;
		uint64_t rte:1;
		uint64_t mre:1;
		uint64_t rdwdle:1;
		uint64_t rtwdle:1;
		uint64_t dpeoosd:1;
		uint64_t fcpvwt:1;
		uint64_t rpe:1;
		uint64_t fcuv:1;
		uint64_t rqo:1;
		uint64_t rauc:1;
		uint64_t racur:1;
		uint64_t racca:1;
		uint64_t caar:1;
		uint64_t rarwdns:1;
		uint64_t ramtlp:1;
		uint64_t racpp:1;
		uint64_t rawwpp:1;
		uint64_t ecrc_e:1;
		uint64_t reserved_31_63:33;
#endif
	} cn61xx;
	struct cvmx_pemx_dbg_info_cn61xx cn63xx;
	struct cvmx_pemx_dbg_info_cn61xx cn63xxp1;
	struct cvmx_pemx_dbg_info_cn61xx cn66xx;
	struct cvmx_pemx_dbg_info_cn61xx cn68xx;
	struct cvmx_pemx_dbg_info_cn61xx cn68xxp1;
	struct cvmx_pemx_dbg_info_cn70xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_46_63:18;
		uint64_t c_c_dbe:1;
		uint64_t c_c_sbe:1;
		uint64_t c_d_dbe:1;
		uint64_t c_d_sbe:1;
		uint64_t n_c_dbe:1;
		uint64_t n_c_sbe:1;
		uint64_t n_d_dbe:1;
		uint64_t n_d_sbe:1;
		uint64_t p_c_dbe:1;
		uint64_t p_c_sbe:1;
		uint64_t p_d_dbe:1;
		uint64_t p_d_sbe:1;
		uint64_t datq_pe:1;
		uint64_t hdrq_pe:1;
		uint64_t rtry_pe:1;
		uint64_t ecrc_e:1;
		uint64_t rawwpp:1;
		uint64_t racpp:1;
		uint64_t ramtlp:1;
		uint64_t rarwdns:1;
		uint64_t caar:1;
		uint64_t racca:1;
		uint64_t racur:1;
		uint64_t rauc:1;
		uint64_t rqo:1;
		uint64_t fcuv:1;
		uint64_t rpe:1;
		uint64_t fcpvwt:1;
		uint64_t dpeoosd:1;
		uint64_t rtwdle:1;
		uint64_t rdwdle:1;
		uint64_t mre:1;
		uint64_t rte:1;
		uint64_t acto:1;
		uint64_t rvdm:1;
		uint64_t rumep:1;
		uint64_t rptamrc:1;
		uint64_t rpmerc:1;
		uint64_t rfemrc:1;
		uint64_t rnfemrc:1;
		uint64_t rcemrc:1;
		uint64_t rpoison:1;
		uint64_t recrce:1;
		uint64_t rtlplle:1;
		uint64_t rtlpmal:1;
		uint64_t spoison:1;
#else
		uint64_t spoison:1;
		uint64_t rtlpmal:1;
		uint64_t rtlplle:1;
		uint64_t recrce:1;
		uint64_t rpoison:1;
		uint64_t rcemrc:1;
		uint64_t rnfemrc:1;
		uint64_t rfemrc:1;
		uint64_t rpmerc:1;
		uint64_t rptamrc:1;
		uint64_t rumep:1;
		uint64_t rvdm:1;
		uint64_t acto:1;
		uint64_t rte:1;
		uint64_t mre:1;
		uint64_t rdwdle:1;
		uint64_t rtwdle:1;
		uint64_t dpeoosd:1;
		uint64_t fcpvwt:1;
		uint64_t rpe:1;
		uint64_t fcuv:1;
		uint64_t rqo:1;
		uint64_t rauc:1;
		uint64_t racur:1;
		uint64_t racca:1;
		uint64_t caar:1;
		uint64_t rarwdns:1;
		uint64_t ramtlp:1;
		uint64_t racpp:1;
		uint64_t rawwpp:1;
		uint64_t ecrc_e:1;
		uint64_t rtry_pe:1;
		uint64_t hdrq_pe:1;
		uint64_t datq_pe:1;
		uint64_t p_d_sbe:1;
		uint64_t p_d_dbe:1;
		uint64_t p_c_sbe:1;
		uint64_t p_c_dbe:1;
		uint64_t n_d_sbe:1;
		uint64_t n_d_dbe:1;
		uint64_t n_c_sbe:1;
		uint64_t n_c_dbe:1;
		uint64_t c_d_sbe:1;
		uint64_t c_d_dbe:1;
		uint64_t c_c_sbe:1;
		uint64_t c_c_dbe:1;
		uint64_t reserved_46_63:18;
#endif
	} cn70xx;
	struct cvmx_pemx_dbg_info_cn70xx cn70xxp1;
	struct cvmx_pemx_dbg_info_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_58_63:6;
		uint64_t qhdr_b1_dbe:1;
		uint64_t qhdr_b1_sbe:1;
		uint64_t qhdr_b0_dbe:1;
		uint64_t qhdr_b0_sbe:1;
		uint64_t rtry_dbe:1;
		uint64_t rtry_sbe:1;
		uint64_t c_c_dbe:1;
		uint64_t c_c_sbe:1;
		uint64_t c_d1_dbe:1;
		uint64_t c_d1_sbe:1;
		uint64_t c_d0_dbe:1;
		uint64_t c_d0_sbe:1;
		uint64_t n_c_dbe:1;
		uint64_t n_c_sbe:1;
		uint64_t n_d1_dbe:1;
		uint64_t n_d1_sbe:1;
		uint64_t n_d0_dbe:1;
		uint64_t n_d0_sbe:1;
		uint64_t p_c_dbe:1;
		uint64_t p_c_sbe:1;
		uint64_t p_d1_dbe:1;
		uint64_t p_d1_sbe:1;
		uint64_t p_d0_dbe:1;
		uint64_t p_d0_sbe:1;
		uint64_t datq_pe:1;
		uint64_t reserved_32_32:1;
		uint64_t lofp:1;
		uint64_t ecrc_e:1;
		uint64_t rawwpp:1;
		uint64_t racpp:1;
		uint64_t ramtlp:1;
		uint64_t rarwdns:1;
		uint64_t caar:1;
		uint64_t racca:1;
		uint64_t racur:1;
		uint64_t rauc:1;
		uint64_t rqo:1;
		uint64_t fcuv:1;
		uint64_t rpe:1;
		uint64_t fcpvwt:1;
		uint64_t dpeoosd:1;
		uint64_t rtwdle:1;
		uint64_t rdwdle:1;
		uint64_t mre:1;
		uint64_t rte:1;
		uint64_t acto:1;
		uint64_t rvdm:1;
		uint64_t rumep:1;
		uint64_t rptamrc:1;
		uint64_t rpmerc:1;
		uint64_t rfemrc:1;
		uint64_t rnfemrc:1;
		uint64_t rcemrc:1;
		uint64_t rpoison:1;
		uint64_t recrce:1;
		uint64_t rtlplle:1;
		uint64_t rtlpmal:1;
		uint64_t spoison:1;
#else
		uint64_t spoison:1;
		uint64_t rtlpmal:1;
		uint64_t rtlplle:1;
		uint64_t recrce:1;
		uint64_t rpoison:1;
		uint64_t rcemrc:1;
		uint64_t rnfemrc:1;
		uint64_t rfemrc:1;
		uint64_t rpmerc:1;
		uint64_t rptamrc:1;
		uint64_t rumep:1;
		uint64_t rvdm:1;
		uint64_t acto:1;
		uint64_t rte:1;
		uint64_t mre:1;
		uint64_t rdwdle:1;
		uint64_t rtwdle:1;
		uint64_t dpeoosd:1;
		uint64_t fcpvwt:1;
		uint64_t rpe:1;
		uint64_t fcuv:1;
		uint64_t rqo:1;
		uint64_t rauc:1;
		uint64_t racur:1;
		uint64_t racca:1;
		uint64_t caar:1;
		uint64_t rarwdns:1;
		uint64_t ramtlp:1;
		uint64_t racpp:1;
		uint64_t rawwpp:1;
		uint64_t ecrc_e:1;
		uint64_t lofp:1;
		uint64_t reserved_32_32:1;
		uint64_t datq_pe:1;
		uint64_t p_d0_sbe:1;
		uint64_t p_d0_dbe:1;
		uint64_t p_d1_sbe:1;
		uint64_t p_d1_dbe:1;
		uint64_t p_c_sbe:1;
		uint64_t p_c_dbe:1;
		uint64_t n_d0_sbe:1;
		uint64_t n_d0_dbe:1;
		uint64_t n_d1_sbe:1;
		uint64_t n_d1_dbe:1;
		uint64_t n_c_sbe:1;
		uint64_t n_c_dbe:1;
		uint64_t c_d0_sbe:1;
		uint64_t c_d0_dbe:1;
		uint64_t c_d1_sbe:1;
		uint64_t c_d1_dbe:1;
		uint64_t c_c_sbe:1;
		uint64_t c_c_dbe:1;
		uint64_t rtry_sbe:1;
		uint64_t rtry_dbe:1;
		uint64_t qhdr_b0_sbe:1;
		uint64_t qhdr_b0_dbe:1;
		uint64_t qhdr_b1_sbe:1;
		uint64_t qhdr_b1_dbe:1;
		uint64_t reserved_58_63:6;
#endif
	} cn73xx;
	struct cvmx_pemx_dbg_info_cn73xx cn75xx;
	struct cvmx_pemx_dbg_info_cn73xx cn78xx;
	struct cvmx_pemx_dbg_info_cn73xx cn78xxp2;
	struct cvmx_pemx_dbg_info_cn61xx cnf71xx;
};
typedef union cvmx_pemx_dbg_info cvmx_pemx_dbg_info_t;

union cvmx_pemx_dbg_info_en {
	uint64_t u64;
	struct cvmx_pemx_dbg_info_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_46_63:18;
		uint64_t tpcdbe1:1;
		uint64_t tpcsbe1:1;
		uint64_t tpcdbe0:1;
		uint64_t tpcsbe0:1;
		uint64_t tnfdbe1:1;
		uint64_t tnfsbe1:1;
		uint64_t tnfdbe0:1;
		uint64_t tnfsbe0:1;
		uint64_t tpfdbe1:1;
		uint64_t tpfsbe1:1;
		uint64_t tpfdbe0:1;
		uint64_t tpfsbe0:1;
		uint64_t datq_pe:1;
		uint64_t hdrq_pe:1;
		uint64_t rtry_pe:1;
		uint64_t ecrc_e:1;
		uint64_t rawwpp:1;
		uint64_t racpp:1;
		uint64_t ramtlp:1;
		uint64_t rarwdns:1;
		uint64_t caar:1;
		uint64_t racca:1;
		uint64_t racur:1;
		uint64_t rauc:1;
		uint64_t rqo:1;
		uint64_t fcuv:1;
		uint64_t rpe:1;
		uint64_t fcpvwt:1;
		uint64_t dpeoosd:1;
		uint64_t rtwdle:1;
		uint64_t rdwdle:1;
		uint64_t mre:1;
		uint64_t rte:1;
		uint64_t acto:1;
		uint64_t rvdm:1;
		uint64_t rumep:1;
		uint64_t rptamrc:1;
		uint64_t rpmerc:1;
		uint64_t rfemrc:1;
		uint64_t rnfemrc:1;
		uint64_t rcemrc:1;
		uint64_t rpoison:1;
		uint64_t recrce:1;
		uint64_t rtlplle:1;
		uint64_t rtlpmal:1;
		uint64_t spoison:1;
#else
		uint64_t spoison:1;
		uint64_t rtlpmal:1;
		uint64_t rtlplle:1;
		uint64_t recrce:1;
		uint64_t rpoison:1;
		uint64_t rcemrc:1;
		uint64_t rnfemrc:1;
		uint64_t rfemrc:1;
		uint64_t rpmerc:1;
		uint64_t rptamrc:1;
		uint64_t rumep:1;
		uint64_t rvdm:1;
		uint64_t acto:1;
		uint64_t rte:1;
		uint64_t mre:1;
		uint64_t rdwdle:1;
		uint64_t rtwdle:1;
		uint64_t dpeoosd:1;
		uint64_t fcpvwt:1;
		uint64_t rpe:1;
		uint64_t fcuv:1;
		uint64_t rqo:1;
		uint64_t rauc:1;
		uint64_t racur:1;
		uint64_t racca:1;
		uint64_t caar:1;
		uint64_t rarwdns:1;
		uint64_t ramtlp:1;
		uint64_t racpp:1;
		uint64_t rawwpp:1;
		uint64_t ecrc_e:1;
		uint64_t rtry_pe:1;
		uint64_t hdrq_pe:1;
		uint64_t datq_pe:1;
		uint64_t tpfsbe0:1;
		uint64_t tpfdbe0:1;
		uint64_t tpfsbe1:1;
		uint64_t tpfdbe1:1;
		uint64_t tnfsbe0:1;
		uint64_t tnfdbe0:1;
		uint64_t tnfsbe1:1;
		uint64_t tnfdbe1:1;
		uint64_t tpcsbe0:1;
		uint64_t tpcdbe0:1;
		uint64_t tpcsbe1:1;
		uint64_t tpcdbe1:1;
		uint64_t reserved_46_63:18;
#endif
	} s;
	struct cvmx_pemx_dbg_info_en_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_31_63:33;
		uint64_t ecrc_e:1;
		uint64_t rawwpp:1;
		uint64_t racpp:1;
		uint64_t ramtlp:1;
		uint64_t rarwdns:1;
		uint64_t caar:1;
		uint64_t racca:1;
		uint64_t racur:1;
		uint64_t rauc:1;
		uint64_t rqo:1;
		uint64_t fcuv:1;
		uint64_t rpe:1;
		uint64_t fcpvwt:1;
		uint64_t dpeoosd:1;
		uint64_t rtwdle:1;
		uint64_t rdwdle:1;
		uint64_t mre:1;
		uint64_t rte:1;
		uint64_t acto:1;
		uint64_t rvdm:1;
		uint64_t rumep:1;
		uint64_t rptamrc:1;
		uint64_t rpmerc:1;
		uint64_t rfemrc:1;
		uint64_t rnfemrc:1;
		uint64_t rcemrc:1;
		uint64_t rpoison:1;
		uint64_t recrce:1;
		uint64_t rtlplle:1;
		uint64_t rtlpmal:1;
		uint64_t spoison:1;
#else
		uint64_t spoison:1;
		uint64_t rtlpmal:1;
		uint64_t rtlplle:1;
		uint64_t recrce:1;
		uint64_t rpoison:1;
		uint64_t rcemrc:1;
		uint64_t rnfemrc:1;
		uint64_t rfemrc:1;
		uint64_t rpmerc:1;
		uint64_t rptamrc:1;
		uint64_t rumep:1;
		uint64_t rvdm:1;
		uint64_t acto:1;
		uint64_t rte:1;
		uint64_t mre:1;
		uint64_t rdwdle:1;
		uint64_t rtwdle:1;
		uint64_t dpeoosd:1;
		uint64_t fcpvwt:1;
		uint64_t rpe:1;
		uint64_t fcuv:1;
		uint64_t rqo:1;
		uint64_t rauc:1;
		uint64_t racur:1;
		uint64_t racca:1;
		uint64_t caar:1;
		uint64_t rarwdns:1;
		uint64_t ramtlp:1;
		uint64_t racpp:1;
		uint64_t rawwpp:1;
		uint64_t ecrc_e:1;
		uint64_t reserved_31_63:33;
#endif
	} cn61xx;
	struct cvmx_pemx_dbg_info_en_cn61xx cn63xx;
	struct cvmx_pemx_dbg_info_en_cn61xx cn63xxp1;
	struct cvmx_pemx_dbg_info_en_cn61xx cn66xx;
	struct cvmx_pemx_dbg_info_en_cn61xx cn68xx;
	struct cvmx_pemx_dbg_info_en_cn61xx cn68xxp1;
	struct cvmx_pemx_dbg_info_en_s cn70xx;
	struct cvmx_pemx_dbg_info_en_s cn70xxp1;
	struct cvmx_pemx_dbg_info_en_cn61xx cnf71xx;
};
typedef union cvmx_pemx_dbg_info_en cvmx_pemx_dbg_info_en_t;

union cvmx_pemx_diag_status {
	uint64_t u64;
	struct cvmx_pemx_diag_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_9_63:55;
		uint64_t pwrdwn:3;
		uint64_t pm_dst:3;
		uint64_t pm_stat:1;
		uint64_t pm_en:1;
		uint64_t aux_en:1;
#else
		uint64_t aux_en:1;
		uint64_t pm_en:1;
		uint64_t pm_stat:1;
		uint64_t pm_dst:3;
		uint64_t pwrdwn:3;
		uint64_t reserved_9_63:55;
#endif
	} s;
	struct cvmx_pemx_diag_status_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t pm_dst:1;
		uint64_t pm_stat:1;
		uint64_t pm_en:1;
		uint64_t aux_en:1;
#else
		uint64_t aux_en:1;
		uint64_t pm_en:1;
		uint64_t pm_stat:1;
		uint64_t pm_dst:1;
		uint64_t reserved_4_63:60;
#endif
	} cn61xx;
	struct cvmx_pemx_diag_status_cn61xx cn63xx;
	struct cvmx_pemx_diag_status_cn61xx cn63xxp1;
	struct cvmx_pemx_diag_status_cn61xx cn66xx;
	struct cvmx_pemx_diag_status_cn61xx cn68xx;
	struct cvmx_pemx_diag_status_cn61xx cn68xxp1;
	struct cvmx_pemx_diag_status_cn70xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_63_6:58;
		uint64_t pm_dst:3;
		uint64_t pm_stat:1;
		uint64_t pm_en:1;
		uint64_t aux_en:1;
#else
		uint64_t aux_en:1;
		uint64_t pm_en:1;
		uint64_t pm_stat:1;
		uint64_t pm_dst:3;
		uint64_t reserved_63_6:58;
#endif
	} cn70xx;
	struct cvmx_pemx_diag_status_cn70xx cn70xxp1;
	struct cvmx_pemx_diag_status_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_63_9:55;
		uint64_t pwrdwn:3;
		uint64_t pm_dst:3;
		uint64_t pm_stat:1;
		uint64_t pm_en:1;
		uint64_t aux_en:1;
#else
		uint64_t aux_en:1;
		uint64_t pm_en:1;
		uint64_t pm_stat:1;
		uint64_t pm_dst:3;
		uint64_t pwrdwn:3;
		uint64_t reserved_63_9:55;
#endif
	} cn73xx;
	struct cvmx_pemx_diag_status_cn73xx cn75xx;
	struct cvmx_pemx_diag_status_cn73xx cn78xx;
	struct cvmx_pemx_diag_status_cn73xx cn78xxp2;
	struct cvmx_pemx_diag_status_cn61xx cnf71xx;
};
typedef union cvmx_pemx_diag_status cvmx_pemx_diag_status_t;

union cvmx_pemx_ecc_ena {
	uint64_t u64;
	struct cvmx_pemx_ecc_ena_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_35_63:29;
		uint64_t qhdr_b1_ena:1;
		uint64_t qhdr_b0_ena:1;
		uint64_t rtry_ena:1;
		uint64_t reserved_9_31:23;
		uint64_t c_c_ena:1;
		uint64_t c_d1_ena:1;
		uint64_t c_d0_ena:1;
		uint64_t reserved_0_5:6;
#else
		uint64_t reserved_0_5:6;
		uint64_t c_d0_ena:1;
		uint64_t c_d1_ena:1;
		uint64_t c_c_ena:1;
		uint64_t reserved_9_31:23;
		uint64_t rtry_ena:1;
		uint64_t qhdr_b0_ena:1;
		uint64_t qhdr_b1_ena:1;
		uint64_t reserved_35_63:29;
#endif
	} s;
	struct cvmx_pemx_ecc_ena_cn70xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_6_63:58;
		uint64_t tlp_nc_ena:1;
		uint64_t tlp_nd_ena:1;
		uint64_t tlp_pc_ena:1;
		uint64_t tlp_pd_ena:1;
		uint64_t tlp_cc_ena:1;
		uint64_t tlp_cd_ena:1;
#else
		uint64_t tlp_cd_ena:1;
		uint64_t tlp_cc_ena:1;
		uint64_t tlp_pd_ena:1;
		uint64_t tlp_pc_ena:1;
		uint64_t tlp_nd_ena:1;
		uint64_t tlp_nc_ena:1;
		uint64_t reserved_6_63:58;
#endif
	} cn70xx;
	struct cvmx_pemx_ecc_ena_cn70xx cn70xxp1;
	struct cvmx_pemx_ecc_ena_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_35_63:29;
		uint64_t qhdr_b1_ena:1;
		uint64_t qhdr_b0_ena:1;
		uint64_t rtry_ena:1;
		uint64_t reserved_9_31:23;
		uint64_t c_c_ena:1;
		uint64_t c_d1_ena:1;
		uint64_t c_d0_ena:1;
		uint64_t n_c_ena:1;
		uint64_t n_d1_ena:1;
		uint64_t n_d0_ena:1;
		uint64_t p_c_ena:1;
		uint64_t p_d1_ena:1;
		uint64_t p_d0_ena:1;
#else
		uint64_t p_d0_ena:1;
		uint64_t p_d1_ena:1;
		uint64_t p_c_ena:1;
		uint64_t n_d0_ena:1;
		uint64_t n_d1_ena:1;
		uint64_t n_c_ena:1;
		uint64_t c_d0_ena:1;
		uint64_t c_d1_ena:1;
		uint64_t c_c_ena:1;
		uint64_t reserved_9_31:23;
		uint64_t rtry_ena:1;
		uint64_t qhdr_b0_ena:1;
		uint64_t qhdr_b1_ena:1;
		uint64_t reserved_35_63:29;
#endif
	} cn73xx;
	struct cvmx_pemx_ecc_ena_cn73xx cn75xx;
	struct cvmx_pemx_ecc_ena_cn73xx cn78xx;
	struct cvmx_pemx_ecc_ena_cn73xx cn78xxp2;
};
typedef union cvmx_pemx_ecc_ena cvmx_pemx_ecc_ena_t;

union cvmx_pemx_ecc_synd_ctrl {
	uint64_t u64;
	struct cvmx_pemx_ecc_synd_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_38_63:26;
		uint64_t qhdr_b1_syn:2;
		uint64_t qhdr_b0_syn:2;
		uint64_t rtry_syn:2;
		uint64_t reserved_18_31:14;
		uint64_t c_c_syn:2;
		uint64_t c_d1_syn:2;
		uint64_t c_d0_syn:2;
		uint64_t reserved_0_11:12;
#else
		uint64_t reserved_0_11:12;
		uint64_t c_d0_syn:2;
		uint64_t c_d1_syn:2;
		uint64_t c_c_syn:2;
		uint64_t reserved_18_31:14;
		uint64_t rtry_syn:2;
		uint64_t qhdr_b0_syn:2;
		uint64_t qhdr_b1_syn:2;
		uint64_t reserved_38_63:26;
#endif
	} s;
	struct cvmx_pemx_ecc_synd_ctrl_cn70xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t tlp_nc_syn:2;
		uint64_t tlp_nd_syn:2;
		uint64_t tlp_pc_syn:2;
		uint64_t tlp_pd_syn:2;
		uint64_t tlp_cc_syn:2;
		uint64_t tlp_cd_syn:2;
#else
		uint64_t tlp_cd_syn:2;
		uint64_t tlp_cc_syn:2;
		uint64_t tlp_pd_syn:2;
		uint64_t tlp_pc_syn:2;
		uint64_t tlp_nd_syn:2;
		uint64_t tlp_nc_syn:2;
		uint64_t reserved_12_63:52;
#endif
	} cn70xx;
	struct cvmx_pemx_ecc_synd_ctrl_cn70xx cn70xxp1;
	struct cvmx_pemx_ecc_synd_ctrl_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_38_63:26;
		uint64_t qhdr_b1_syn:2;
		uint64_t qhdr_b0_syn:2;
		uint64_t rtry_syn:2;
		uint64_t reserved_18_31:14;
		uint64_t c_c_syn:2;
		uint64_t c_d1_syn:2;
		uint64_t c_d0_syn:2;
		uint64_t n_c_syn:2;
		uint64_t n_d1_syn:2;
		uint64_t n_d0_syn:2;
		uint64_t p_c_syn:2;
		uint64_t p_d1_syn:2;
		uint64_t p_d0_syn:2;
#else
		uint64_t p_d0_syn:2;
		uint64_t p_d1_syn:2;
		uint64_t p_c_syn:2;
		uint64_t n_d0_syn:2;
		uint64_t n_d1_syn:2;
		uint64_t n_c_syn:2;
		uint64_t c_d0_syn:2;
		uint64_t c_d1_syn:2;
		uint64_t c_c_syn:2;
		uint64_t reserved_18_31:14;
		uint64_t rtry_syn:2;
		uint64_t qhdr_b0_syn:2;
		uint64_t qhdr_b1_syn:2;
		uint64_t reserved_38_63:26;
#endif
	} cn73xx;
	struct cvmx_pemx_ecc_synd_ctrl_cn73xx cn75xx;
	struct cvmx_pemx_ecc_synd_ctrl_cn73xx cn78xx;
	struct cvmx_pemx_ecc_synd_ctrl_cn73xx cn78xxp2;
};
typedef union cvmx_pemx_ecc_synd_ctrl cvmx_pemx_ecc_synd_ctrl_t;

union cvmx_pemx_flr_glblcnt_ctl {
	uint64_t u64;
	struct cvmx_pemx_flr_glblcnt_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t chge:1;
		uint64_t inc:1;
		uint64_t delta:2;
#else
		uint64_t delta:2;
		uint64_t inc:1;
		uint64_t chge:1;
		uint64_t reserved_4_63:60;
#endif
	} s;
	struct cvmx_pemx_flr_glblcnt_ctl_s cn73xx;
	struct cvmx_pemx_flr_glblcnt_ctl_s cn75xx;
};
typedef union cvmx_pemx_flr_glblcnt_ctl cvmx_pemx_flr_glblcnt_ctl_t;

union cvmx_pemx_flr_pf0_vf_stopreq {
	uint64_t u64;
	struct cvmx_pemx_flr_pf0_vf_stopreq_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t vf_stopreq:64;
#else
		uint64_t vf_stopreq:64;
#endif
	} s;
	struct cvmx_pemx_flr_pf0_vf_stopreq_s cn73xx;
	struct cvmx_pemx_flr_pf0_vf_stopreq_s cn75xx;
};
typedef union cvmx_pemx_flr_pf0_vf_stopreq cvmx_pemx_flr_pf0_vf_stopreq_t;

union cvmx_pemx_flr_pf_stopreq {
	uint64_t u64;
	struct cvmx_pemx_flr_pf_stopreq_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t pf0_stopreq:1;
#else
		uint64_t pf0_stopreq:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_pemx_flr_pf_stopreq_s cn73xx;
	struct cvmx_pemx_flr_pf_stopreq_s cn75xx;
};
typedef union cvmx_pemx_flr_pf_stopreq cvmx_pemx_flr_pf_stopreq_t;

union cvmx_pemx_flr_zombie_ctl {
	uint64_t u64;
	struct cvmx_pemx_flr_zombie_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t exp:10;
#else
		uint64_t exp:10;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_pemx_flr_zombie_ctl_s cn73xx;
	struct cvmx_pemx_flr_zombie_ctl_s cn75xx;
};
typedef union cvmx_pemx_flr_zombie_ctl cvmx_pemx_flr_zombie_ctl_t;

union cvmx_pemx_inb_read_credits {
	uint64_t u64;
	struct cvmx_pemx_inb_read_credits_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t num:7;
#else
		uint64_t num:7;
		uint64_t reserved_7_63:57;
#endif
	} s;
	struct cvmx_pemx_inb_read_credits_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_6_63:58;
		uint64_t num:6;
#else
		uint64_t num:6;
		uint64_t reserved_6_63:58;
#endif
	} cn61xx;
	struct cvmx_pemx_inb_read_credits_cn61xx cn66xx;
	struct cvmx_pemx_inb_read_credits_cn61xx cn68xx;
	struct cvmx_pemx_inb_read_credits_cn61xx cn70xx;
	struct cvmx_pemx_inb_read_credits_cn61xx cn70xxp1;
	struct cvmx_pemx_inb_read_credits_s cn73xx;
	struct cvmx_pemx_inb_read_credits_s cn75xx;
	struct cvmx_pemx_inb_read_credits_s cn78xx;
	struct cvmx_pemx_inb_read_credits_s cn78xxp2;
	struct cvmx_pemx_inb_read_credits_cn61xx cnf71xx;
};
typedef union cvmx_pemx_inb_read_credits cvmx_pemx_inb_read_credits_t;

union cvmx_pemx_int_enb {
	uint64_t u64;
	struct cvmx_pemx_int_enb_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t crs_dr:1;
		uint64_t crs_er:1;
		uint64_t rdlk:1;
		uint64_t exc:1;
		uint64_t un_bx:1;
		uint64_t un_b2:1;
		uint64_t un_b1:1;
		uint64_t up_bx:1;
		uint64_t up_b2:1;
		uint64_t up_b1:1;
		uint64_t pmem:1;
		uint64_t pmei:1;
		uint64_t se:1;
		uint64_t aeri:1;
#else
		uint64_t aeri:1;
		uint64_t se:1;
		uint64_t pmei:1;
		uint64_t pmem:1;
		uint64_t up_b1:1;
		uint64_t up_b2:1;
		uint64_t up_bx:1;
		uint64_t un_b1:1;
		uint64_t un_b2:1;
		uint64_t un_bx:1;
		uint64_t exc:1;
		uint64_t rdlk:1;
		uint64_t crs_er:1;
		uint64_t crs_dr:1;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_pemx_int_enb_s cn61xx;
	struct cvmx_pemx_int_enb_s cn63xx;
	struct cvmx_pemx_int_enb_s cn63xxp1;
	struct cvmx_pemx_int_enb_s cn66xx;
	struct cvmx_pemx_int_enb_s cn68xx;
	struct cvmx_pemx_int_enb_s cn68xxp1;
	struct cvmx_pemx_int_enb_s cn70xx;
	struct cvmx_pemx_int_enb_s cn70xxp1;
	struct cvmx_pemx_int_enb_s cnf71xx;
};
typedef union cvmx_pemx_int_enb cvmx_pemx_int_enb_t;

union cvmx_pemx_int_enb_int {
	uint64_t u64;
	struct cvmx_pemx_int_enb_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t crs_dr:1;
		uint64_t crs_er:1;
		uint64_t rdlk:1;
		uint64_t exc:1;
		uint64_t un_bx:1;
		uint64_t un_b2:1;
		uint64_t un_b1:1;
		uint64_t up_bx:1;
		uint64_t up_b2:1;
		uint64_t up_b1:1;
		uint64_t pmem:1;
		uint64_t pmei:1;
		uint64_t se:1;
		uint64_t aeri:1;
#else
		uint64_t aeri:1;
		uint64_t se:1;
		uint64_t pmei:1;
		uint64_t pmem:1;
		uint64_t up_b1:1;
		uint64_t up_b2:1;
		uint64_t up_bx:1;
		uint64_t un_b1:1;
		uint64_t un_b2:1;
		uint64_t un_bx:1;
		uint64_t exc:1;
		uint64_t rdlk:1;
		uint64_t crs_er:1;
		uint64_t crs_dr:1;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_pemx_int_enb_int_s cn61xx;
	struct cvmx_pemx_int_enb_int_s cn63xx;
	struct cvmx_pemx_int_enb_int_s cn63xxp1;
	struct cvmx_pemx_int_enb_int_s cn66xx;
	struct cvmx_pemx_int_enb_int_s cn68xx;
	struct cvmx_pemx_int_enb_int_s cn68xxp1;
	struct cvmx_pemx_int_enb_int_s cn70xx;
	struct cvmx_pemx_int_enb_int_s cn70xxp1;
	struct cvmx_pemx_int_enb_int_s cnf71xx;
};
typedef union cvmx_pemx_int_enb_int cvmx_pemx_int_enb_int_t;

union cvmx_pemx_int_sum {
	uint64_t u64;
	struct cvmx_pemx_int_sum_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t intd:1;
		uint64_t intc:1;
		uint64_t intb:1;
		uint64_t inta:1;
		uint64_t reserved_14_59:46;
		uint64_t crs_dr:1;
		uint64_t crs_er:1;
		uint64_t rdlk:1;
		uint64_t exc:1;
		uint64_t un_bx:1;
		uint64_t un_b2:1;
		uint64_t un_b1:1;
		uint64_t up_bx:1;
		uint64_t up_b2:1;
		uint64_t up_b1:1;
		uint64_t pmem:1;
		uint64_t pmei:1;
		uint64_t se:1;
		uint64_t aeri:1;
#else
		uint64_t aeri:1;
		uint64_t se:1;
		uint64_t pmei:1;
		uint64_t pmem:1;
		uint64_t up_b1:1;
		uint64_t up_b2:1;
		uint64_t up_bx:1;
		uint64_t un_b1:1;
		uint64_t un_b2:1;
		uint64_t un_bx:1;
		uint64_t exc:1;
		uint64_t rdlk:1;
		uint64_t crs_er:1;
		uint64_t crs_dr:1;
		uint64_t reserved_14_59:46;
		uint64_t inta:1;
		uint64_t intb:1;
		uint64_t intc:1;
		uint64_t intd:1;
#endif
	} s;
	struct cvmx_pemx_int_sum_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t crs_dr:1;
		uint64_t crs_er:1;
		uint64_t rdlk:1;
		uint64_t exc:1;
		uint64_t un_bx:1;
		uint64_t un_b2:1;
		uint64_t un_b1:1;
		uint64_t up_bx:1;
		uint64_t up_b2:1;
		uint64_t up_b1:1;
		uint64_t pmem:1;
		uint64_t pmei:1;
		uint64_t se:1;
		uint64_t aeri:1;
#else
		uint64_t aeri:1;
		uint64_t se:1;
		uint64_t pmei:1;
		uint64_t pmem:1;
		uint64_t up_b1:1;
		uint64_t up_b2:1;
		uint64_t up_bx:1;
		uint64_t un_b1:1;
		uint64_t un_b2:1;
		uint64_t un_bx:1;
		uint64_t exc:1;
		uint64_t rdlk:1;
		uint64_t crs_er:1;
		uint64_t crs_dr:1;
		uint64_t reserved_14_63:50;
#endif
	} cn61xx;
	struct cvmx_pemx_int_sum_cn61xx cn63xx;
	struct cvmx_pemx_int_sum_cn61xx cn63xxp1;
	struct cvmx_pemx_int_sum_cn61xx cn66xx;
	struct cvmx_pemx_int_sum_cn61xx cn68xx;
	struct cvmx_pemx_int_sum_cn61xx cn68xxp1;
	struct cvmx_pemx_int_sum_cn61xx cn70xx;
	struct cvmx_pemx_int_sum_cn61xx cn70xxp1;
	struct cvmx_pemx_int_sum_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t intd:1;
		uint64_t intc:1;
		uint64_t intb:1;
		uint64_t inta:1;
		uint64_t reserved_14_59:46;
		uint64_t crs_dr:1;
		uint64_t crs_er:1;
		uint64_t rdlk:1;
		uint64_t reserved_10_10:1;
		uint64_t un_bx:1;
		uint64_t un_b2:1;
		uint64_t un_b1:1;
		uint64_t up_bx:1;
		uint64_t up_b2:1;
		uint64_t up_b1:1;
		uint64_t reserved_3_3:1;
		uint64_t pmei:1;
		uint64_t se:1;
		uint64_t aeri:1;
#else
		uint64_t aeri:1;
		uint64_t se:1;
		uint64_t pmei:1;
		uint64_t reserved_3_3:1;
		uint64_t up_b1:1;
		uint64_t up_b2:1;
		uint64_t up_bx:1;
		uint64_t un_b1:1;
		uint64_t un_b2:1;
		uint64_t un_bx:1;
		uint64_t reserved_10_10:1;
		uint64_t rdlk:1;
		uint64_t crs_er:1;
		uint64_t crs_dr:1;
		uint64_t reserved_14_59:46;
		uint64_t inta:1;
		uint64_t intb:1;
		uint64_t intc:1;
		uint64_t intd:1;
#endif
	} cn73xx;
	struct cvmx_pemx_int_sum_cn73xx cn75xx;
	struct cvmx_pemx_int_sum_cn73xx cn78xx;
	struct cvmx_pemx_int_sum_cn73xx cn78xxp2;
	struct cvmx_pemx_int_sum_cn61xx cnf71xx;
};
typedef union cvmx_pemx_int_sum cvmx_pemx_int_sum_t;

union cvmx_pemx_on {
	uint64_t u64;
	struct cvmx_pemx_on_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_2_63:62;
		uint64_t pemoor:1;
		uint64_t pemon:1;
#else
		uint64_t pemon:1;
		uint64_t pemoor:1;
		uint64_t reserved_2_63:62;
#endif
	} s;
	struct cvmx_pemx_on_s cn70xx;
	struct cvmx_pemx_on_s cn70xxp1;
	struct cvmx_pemx_on_s cn73xx;
	struct cvmx_pemx_on_s cn75xx;
	struct cvmx_pemx_on_s cn78xx;
	struct cvmx_pemx_on_s cn78xxp2;
};
typedef union cvmx_pemx_on cvmx_pemx_on_t;

union cvmx_pemx_p2n_bar0_start {
	uint64_t u64;
	struct cvmx_pemx_p2n_bar0_start_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_0_63:64;
#else
		uint64_t reserved_0_63:64;
#endif
	} s;
	struct cvmx_pemx_p2n_bar0_start_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t addr:50;
		uint64_t reserved_0_13:14;
#else
		uint64_t reserved_0_13:14;
		uint64_t addr:50;
#endif
	} cn61xx;
	struct cvmx_pemx_p2n_bar0_start_cn61xx cn63xx;
	struct cvmx_pemx_p2n_bar0_start_cn61xx cn63xxp1;
	struct cvmx_pemx_p2n_bar0_start_cn61xx cn66xx;
	struct cvmx_pemx_p2n_bar0_start_cn61xx cn68xx;
	struct cvmx_pemx_p2n_bar0_start_cn61xx cn68xxp1;
	struct cvmx_pemx_p2n_bar0_start_cn61xx cn70xx;
	struct cvmx_pemx_p2n_bar0_start_cn61xx cn70xxp1;
	struct cvmx_pemx_p2n_bar0_start_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t addr:40;
		uint64_t reserved_0_23:24;
#else
		uint64_t reserved_0_23:24;
		uint64_t addr:40;
#endif
	} cn73xx;
	struct cvmx_pemx_p2n_bar0_start_cn73xx cn75xx;
	struct cvmx_pemx_p2n_bar0_start_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t addr:49;
		uint64_t reserved_0_14:15;
#else
		uint64_t reserved_0_14:15;
		uint64_t addr:49;
#endif
	} cn78xx;
	struct cvmx_pemx_p2n_bar0_start_cn78xx cn78xxp2;
	struct cvmx_pemx_p2n_bar0_start_cn61xx cnf71xx;
};
typedef union cvmx_pemx_p2n_bar0_start cvmx_pemx_p2n_bar0_start_t;

union cvmx_pemx_p2n_bar1_start {
	uint64_t u64;
	struct cvmx_pemx_p2n_bar1_start_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t addr:38;
		uint64_t reserved_0_25:26;
#else
		uint64_t reserved_0_25:26;
		uint64_t addr:38;
#endif
	} s;
	struct cvmx_pemx_p2n_bar1_start_s cn61xx;
	struct cvmx_pemx_p2n_bar1_start_s cn63xx;
	struct cvmx_pemx_p2n_bar1_start_s cn63xxp1;
	struct cvmx_pemx_p2n_bar1_start_s cn66xx;
	struct cvmx_pemx_p2n_bar1_start_s cn68xx;
	struct cvmx_pemx_p2n_bar1_start_s cn68xxp1;
	struct cvmx_pemx_p2n_bar1_start_s cn70xx;
	struct cvmx_pemx_p2n_bar1_start_s cn70xxp1;
	struct cvmx_pemx_p2n_bar1_start_s cn73xx;
	struct cvmx_pemx_p2n_bar1_start_s cn75xx;
	struct cvmx_pemx_p2n_bar1_start_s cn78xx;
	struct cvmx_pemx_p2n_bar1_start_s cn78xxp2;
	struct cvmx_pemx_p2n_bar1_start_s cnf71xx;
};
typedef union cvmx_pemx_p2n_bar1_start cvmx_pemx_p2n_bar1_start_t;

union cvmx_pemx_p2n_bar2_start {
	uint64_t u64;
	struct cvmx_pemx_p2n_bar2_start_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_0_63:64;
#else
		uint64_t reserved_0_63:64;
#endif
	} s;
	struct cvmx_pemx_p2n_bar2_start_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t addr:23;
		uint64_t reserved_0_40:41;
#else
		uint64_t reserved_0_40:41;
		uint64_t addr:23;
#endif
	} cn61xx;
	struct cvmx_pemx_p2n_bar2_start_cn61xx cn63xx;
	struct cvmx_pemx_p2n_bar2_start_cn61xx cn63xxp1;
	struct cvmx_pemx_p2n_bar2_start_cn61xx cn66xx;
	struct cvmx_pemx_p2n_bar2_start_cn61xx cn68xx;
	struct cvmx_pemx_p2n_bar2_start_cn61xx cn68xxp1;
	struct cvmx_pemx_p2n_bar2_start_cn61xx cn70xx;
	struct cvmx_pemx_p2n_bar2_start_cn61xx cn70xxp1;
	struct cvmx_pemx_p2n_bar2_start_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t addr:19;
		uint64_t reserved_0_44:45;
#else
		uint64_t reserved_0_44:45;
		uint64_t addr:19;
#endif
	} cn73xx;
	struct cvmx_pemx_p2n_bar2_start_cn73xx cn75xx;
	struct cvmx_pemx_p2n_bar2_start_cn73xx cn78xx;
	struct cvmx_pemx_p2n_bar2_start_cn73xx cn78xxp2;
	struct cvmx_pemx_p2n_bar2_start_cn61xx cnf71xx;
};
typedef union cvmx_pemx_p2n_bar2_start cvmx_pemx_p2n_bar2_start_t;

union cvmx_pemx_p2p_barx_end {
	uint64_t u64;
	struct cvmx_pemx_p2p_barx_end_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t addr:52;
		uint64_t reserved_0_11:12;
#else
		uint64_t reserved_0_11:12;
		uint64_t addr:52;
#endif
	} s;
	struct cvmx_pemx_p2p_barx_end_s cn63xx;
	struct cvmx_pemx_p2p_barx_end_s cn63xxp1;
	struct cvmx_pemx_p2p_barx_end_s cn66xx;
	struct cvmx_pemx_p2p_barx_end_s cn68xx;
	struct cvmx_pemx_p2p_barx_end_s cn68xxp1;
	struct cvmx_pemx_p2p_barx_end_s cn73xx;
	struct cvmx_pemx_p2p_barx_end_s cn75xx;
	struct cvmx_pemx_p2p_barx_end_s cn78xx;
	struct cvmx_pemx_p2p_barx_end_s cn78xxp2;
};
typedef union cvmx_pemx_p2p_barx_end cvmx_pemx_p2p_barx_end_t;

union cvmx_pemx_p2p_barx_start {
	uint64_t u64;
	struct cvmx_pemx_p2p_barx_start_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t addr:52;
		uint64_t reserved_2_11:10;
		uint64_t dst:2;
#else
		uint64_t dst:2;
		uint64_t reserved_2_11:10;
		uint64_t addr:52;
#endif
	} s;
	struct cvmx_pemx_p2p_barx_start_cn63xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t addr:52;
		uint64_t reserved_0_11:12;
#else
		uint64_t reserved_0_11:12;
		uint64_t addr:52;
#endif
	} cn63xx;
	struct cvmx_pemx_p2p_barx_start_cn63xx cn63xxp1;
	struct cvmx_pemx_p2p_barx_start_cn63xx cn66xx;
	struct cvmx_pemx_p2p_barx_start_cn63xx cn68xx;
	struct cvmx_pemx_p2p_barx_start_cn63xx cn68xxp1;
	struct cvmx_pemx_p2p_barx_start_s cn73xx;
	struct cvmx_pemx_p2p_barx_start_s cn75xx;
	struct cvmx_pemx_p2p_barx_start_s cn78xx;
	struct cvmx_pemx_p2p_barx_start_s cn78xxp2;
};
typedef union cvmx_pemx_p2p_barx_start cvmx_pemx_p2p_barx_start_t;

union cvmx_pemx_qlm {
	uint64_t u64;
	struct cvmx_pemx_qlm_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_0_63:64;
#else
		uint64_t reserved_0_63:64;
#endif
	} s;
	struct cvmx_pemx_qlm_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t pemdlmsel:1;
#else
		uint64_t pemdlmsel:1;
		uint64_t reserved_1_63:63;
#endif
	} cn73xx;
	struct cvmx_pemx_qlm_cn73xx cn75xx;
	struct cvmx_pemx_qlm_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t pem3qlm:1;
#else
		uint64_t pem3qlm:1;
		uint64_t reserved_1_63:63;
#endif
	} cn78xx;
	struct cvmx_pemx_qlm_cn78xx cn78xxp2;
};
typedef union cvmx_pemx_qlm cvmx_pemx_qlm_t;

union cvmx_pemx_spi_ctl {
	uint64_t u64;
	struct cvmx_pemx_spi_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_14_63:50;
		uint64_t start_busy:1;
		uint64_t tvalid:1;
		uint64_t cmd:3;
		uint64_t adr:9;
#else
		uint64_t adr:9;
		uint64_t cmd:3;
		uint64_t tvalid:1;
		uint64_t start_busy:1;
		uint64_t reserved_14_63:50;
#endif
	} s;
	struct cvmx_pemx_spi_ctl_s cn70xx;
	struct cvmx_pemx_spi_ctl_s cn70xxp1;
	struct cvmx_pemx_spi_ctl_s cn73xx;
	struct cvmx_pemx_spi_ctl_s cn75xx;
	struct cvmx_pemx_spi_ctl_s cn78xx;
	struct cvmx_pemx_spi_ctl_s cn78xxp2;
};
typedef union cvmx_pemx_spi_ctl cvmx_pemx_spi_ctl_t;

union cvmx_pemx_spi_data {
	uint64_t u64;
	struct cvmx_pemx_spi_data_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t preamble:16;
		uint64_t reserved_45_47:3;
		uint64_t cs2:1;
		uint64_t adr:12;
		uint64_t data:32;
#else
		uint64_t data:32;
		uint64_t adr:12;
		uint64_t cs2:1;
		uint64_t reserved_45_47:3;
		uint64_t preamble:16;
#endif
	} s;
	struct cvmx_pemx_spi_data_s cn70xx;
	struct cvmx_pemx_spi_data_s cn70xxp1;
	struct cvmx_pemx_spi_data_s cn73xx;
	struct cvmx_pemx_spi_data_s cn75xx;
	struct cvmx_pemx_spi_data_s cn78xx;
	struct cvmx_pemx_spi_data_s cn78xxp2;
};
typedef union cvmx_pemx_spi_data cvmx_pemx_spi_data_t;

union cvmx_pemx_strap {
	uint64_t u64;
	struct cvmx_pemx_strap_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_5_63:59;
		uint64_t miopem2dlm5sel:1;
		uint64_t pilaneswap:1;
		uint64_t reserved_0_2:3;
#else
		uint64_t reserved_0_2:3;
		uint64_t pilaneswap:1;
		uint64_t miopem2dlm5sel:1;
		uint64_t reserved_5_63:59;
#endif
	} s;
	struct cvmx_pemx_strap_cn70xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t pilaneswap:1;
		uint64_t pimode:3;
#else
		uint64_t pimode:3;
		uint64_t pilaneswap:1;
		uint64_t reserved_4_63:60;
#endif
	} cn70xx;
	struct cvmx_pemx_strap_cn70xx cn70xxp1;
	struct cvmx_pemx_strap_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_5_63:59;
		uint64_t miopem2dlm5sel:1;
		uint64_t pilaneswap:1;
		uint64_t pilanes8:1;
		uint64_t pimode:2;
#else
		uint64_t pimode:2;
		uint64_t pilanes8:1;
		uint64_t pilaneswap:1;
		uint64_t miopem2dlm5sel:1;
		uint64_t reserved_5_63:59;
#endif
	} cn73xx;
	struct cvmx_pemx_strap_cn73xx cn75xx;
	struct cvmx_pemx_strap_cn78xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t pilaneswap:1;
		uint64_t pilanes8:1;
		uint64_t pimode:2;
#else
		uint64_t pimode:2;
		uint64_t pilanes8:1;
		uint64_t pilaneswap:1;
		uint64_t reserved_4_63:60;
#endif
	} cn78xx;
	struct cvmx_pemx_strap_cn78xx cn78xxp2;
};
typedef union cvmx_pemx_strap cvmx_pemx_strap_t;

union cvmx_pemx_tlp_credits {
	uint64_t u64;
	struct cvmx_pemx_tlp_credits_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_56_63:8;
		uint64_t peai_ppf:8;
		uint64_t pem_cpl:8;
		uint64_t pem_np:8;
		uint64_t pem_p:8;
		uint64_t sli_cpl:8;
		uint64_t sli_np:8;
		uint64_t sli_p:8;
#else
		uint64_t sli_p:8;
		uint64_t sli_np:8;
		uint64_t sli_cpl:8;
		uint64_t pem_p:8;
		uint64_t pem_np:8;
		uint64_t pem_cpl:8;
		uint64_t peai_ppf:8;
		uint64_t reserved_56_63:8;
#endif
	} s;
	struct cvmx_pemx_tlp_credits_cn61xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_56_63:8;
		uint64_t peai_ppf:8;
		uint64_t reserved_24_47:24;
		uint64_t sli_cpl:8;
		uint64_t sli_np:8;
		uint64_t sli_p:8;
#else
		uint64_t sli_p:8;
		uint64_t sli_np:8;
		uint64_t sli_cpl:8;
		uint64_t reserved_24_47:24;
		uint64_t peai_ppf:8;
		uint64_t reserved_56_63:8;
#endif
	} cn61xx;
	struct cvmx_pemx_tlp_credits_s cn63xx;
	struct cvmx_pemx_tlp_credits_s cn63xxp1;
	struct cvmx_pemx_tlp_credits_s cn66xx;
	struct cvmx_pemx_tlp_credits_s cn68xx;
	struct cvmx_pemx_tlp_credits_s cn68xxp1;
	struct cvmx_pemx_tlp_credits_cn61xx cn70xx;
	struct cvmx_pemx_tlp_credits_cn61xx cn70xxp1;
	struct cvmx_pemx_tlp_credits_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t pem_cpl:8;
		uint64_t pem_np:8;
		uint64_t pem_p:8;
		uint64_t sli_cpl:8;
		uint64_t sli_np:8;
		uint64_t sli_p:8;
#else
		uint64_t sli_p:8;
		uint64_t sli_np:8;
		uint64_t sli_cpl:8;
		uint64_t pem_p:8;
		uint64_t pem_np:8;
		uint64_t pem_cpl:8;
		uint64_t reserved_48_63:16;
#endif
	} cn73xx;
	struct cvmx_pemx_tlp_credits_cn73xx cn75xx;
	struct cvmx_pemx_tlp_credits_cn73xx cn78xx;
	struct cvmx_pemx_tlp_credits_cn73xx cn78xxp2;
	struct cvmx_pemx_tlp_credits_cn61xx cnf71xx;
};
typedef union cvmx_pemx_tlp_credits cvmx_pemx_tlp_credits_t;

#endif
