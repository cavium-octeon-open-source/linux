/*
 * XHCI HCD glue for Cavium Octeon III SOCs.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2010-2015 Cavium Networks
 *
 */

#include <linux/platform_device.h>
#include <linux/device.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/delay.h>
#include <linux/of.h>
#include <linux/dma-mapping.h>
#include <linux/of_platform.h>
#include <linux/of_gpio.h>

#include <asm/bitfield.h>
#include <asm/octeon/octeon.h>

#define UCTL_CTL	0
#define UCTL_HOST_CFG	0xe0
#define UCTL_SHIM_CFG	0xe8

#define OCTEON_USB3_MIN_H_CLK_RATE	150000000
#define OCTEON_USB3_MAX_H_CLK_RATE	300000000

union cvmx_usbdrdx_uctl_ctl {
	uint64_t u64;
	struct cvmx_usbdrdx_uctl_ctl_s {
		__BITFIELD_FIELD(uint64_t clear_bist:1,
		__BITFIELD_FIELD(uint64_t start_bist:1,
		__BITFIELD_FIELD(uint64_t ref_clk_sel:2,
		__BITFIELD_FIELD(uint64_t ssc_en:1,
		__BITFIELD_FIELD(uint64_t ssc_range:3,
		__BITFIELD_FIELD(uint64_t ssc_ref_clk_sel:9,
		__BITFIELD_FIELD(uint64_t mpll_multiplier:7,
		__BITFIELD_FIELD(uint64_t ref_ssp_en:1,
		__BITFIELD_FIELD(uint64_t ref_clk_div2:1,
		__BITFIELD_FIELD(uint64_t ref_clk_fsel:6,
		__BITFIELD_FIELD(uint64_t reserved_31_31:1,
		__BITFIELD_FIELD(uint64_t h_clk_en:1,
		__BITFIELD_FIELD(uint64_t h_clk_byp_sel:1,
		__BITFIELD_FIELD(uint64_t h_clkdiv_rst:1,
		__BITFIELD_FIELD(uint64_t reserved_27_27:1,
		__BITFIELD_FIELD(uint64_t h_clkdiv_sel:3,
		__BITFIELD_FIELD(uint64_t reserved_22_23:2,
		__BITFIELD_FIELD(uint64_t usb3_port_perm_attach:1,
		__BITFIELD_FIELD(uint64_t usb2_port_perm_attach:1,
		__BITFIELD_FIELD(uint64_t reserved_19_19:1,
		__BITFIELD_FIELD(uint64_t usb3_port_disable:1,
		__BITFIELD_FIELD(uint64_t reserved_17_17:1,
		__BITFIELD_FIELD(uint64_t usb2_port_disable:1,
		__BITFIELD_FIELD(uint64_t reserved_15_15:1,
		__BITFIELD_FIELD(uint64_t ss_power_en:1,
		__BITFIELD_FIELD(uint64_t reserved_13_13:1,
		__BITFIELD_FIELD(uint64_t hs_power_en:1,
		__BITFIELD_FIELD(uint64_t reserved_5_11:7,
		__BITFIELD_FIELD(uint64_t csclk_en:1,
		__BITFIELD_FIELD(uint64_t drd_mode:1,
		__BITFIELD_FIELD(uint64_t uphy_rst:1,
		__BITFIELD_FIELD(uint64_t uahc_rst:1,
		__BITFIELD_FIELD(uint64_t uctl_rst:1,
		;)))))))))))))))))))))))))))))))))
	} s;
};

union cvmx_usbdrdx_uctl_host_cfg {
	uint64_t u64;
	struct cvmx_usbdrdx_uctl_host_cfg_s {
		__BITFIELD_FIELD(uint64_t reserved_60_63:4,
		__BITFIELD_FIELD(uint64_t host_current_belt:12,
		__BITFIELD_FIELD(uint64_t reserved_38_47:10,
		__BITFIELD_FIELD(uint64_t fla:6,
		__BITFIELD_FIELD(uint64_t reserved_29_31:3,
		__BITFIELD_FIELD(uint64_t bme:1,
		__BITFIELD_FIELD(uint64_t oci_en:1,
		__BITFIELD_FIELD(uint64_t oci_active_high_en:1,
		__BITFIELD_FIELD(uint64_t ppc_en:1,
		__BITFIELD_FIELD(uint64_t ppc_active_high_en:1,
		__BITFIELD_FIELD(uint64_t reserved_0_23:24,
		;)))))))))))
	} s;
};

union cvmx_usbdrdx_uctl_shim_cfg {
	uint64_t u64;
	struct cvmx_usbdrdx_uctl_shim_cfg_s {
		__BITFIELD_FIELD(uint64_t xs_ncb_oob_wrn:1,
		__BITFIELD_FIELD(uint64_t reserved_60_62:3,
		__BITFIELD_FIELD(uint64_t xs_ncb_oob_osrc:12,
		__BITFIELD_FIELD(uint64_t xm_bad_dma_wrn:1,
		__BITFIELD_FIELD(uint64_t reserved_44_46:3,
		__BITFIELD_FIELD(uint64_t xm_bad_dma_type:4,
		__BITFIELD_FIELD(uint64_t reserved_13_39:27,
		__BITFIELD_FIELD(uint64_t dma_read_cmd:1,
		__BITFIELD_FIELD(uint64_t reserved_10_11:2,
		__BITFIELD_FIELD(uint64_t dma_endian_mode:2,
		__BITFIELD_FIELD(uint64_t reserved_2_7:6,
		__BITFIELD_FIELD(uint64_t csr_endian_mode:2,
		;))))))))))))
	} s;
};

#define CLK_DIV_SIZE ARRAY_SIZE(clk_div)
static const uint8_t clk_div[] = {1, 2, 4, 6, 8, 16, 24, 32};

static int octeon3_usb_clocks_start(struct device *dev, u64 base)
{
	u32 clock_rate;
	union cvmx_usbdrdx_uctl_ctl uctl_ctl;
	int ref_clk_sel, ref_clk_fsel, mpll_mul;
	u64 div;
	int i;
	u64 h_clk_rate;
	const char *ss_clock_type;
	const char *hs_clock_type;

	i = of_property_read_u32(dev->of_node, "refclk-frequency", &clock_rate);
	if (i) {
		dev_err(dev, "No \"refclk-frequency\"\n");
		return -EINVAL;
	}

	i = of_property_read_string(dev->of_node,
				    "refclk-type-ss", &ss_clock_type);
	if (i) {
		dev_err(dev, "No \"refclk-type-ss\"\n");
		return -EINVAL;
	}

	i = of_property_read_string(dev->of_node,
				    "refclk-type-hs", &hs_clock_type);
	if (i) {
		dev_err(dev, "No \"refclk-type-hs\"\n");
		return -EINVAL;
	}

	if (strcmp(ss_clock_type, "dlmc_ref_clk0") == 0) {
		if (strcmp(hs_clock_type, "dlmc_ref_clk0") == 0) {
			ref_clk_sel = 0;
		} else if (strcmp(hs_clock_type, "pll_ref_clk") == 0) {
			ref_clk_sel = 2;
		} else {
			dev_err(dev, "Invalid \"refclk-type-hs\" %s\n",
				hs_clock_type);
			return -EINVAL;
		}
	} else if (strcmp(ss_clock_type, "dlmc_ref_clk1") == 0) {
		if (strcmp(hs_clock_type, "dlmc_ref_clk1") == 0) {
			ref_clk_sel = 1;
		} else if (strcmp(hs_clock_type, "pll_ref_clk") == 0) {
			ref_clk_sel = 3;
		} else {
			dev_err(dev, "Invalid \"refclk-type-hs\" %s\n",
				hs_clock_type);
			return -EINVAL;
		}
	} else {
		dev_err(dev, "Invalid \"refclk-type-ss\" %s\n", ss_clock_type);
		return -EINVAL;
	}

	if (ref_clk_sel == 0 || ref_clk_sel == 1)
		if (clock_rate == 100000000) {
			ref_clk_fsel = 0x27;
		} else {
			dev_err(dev, "Invalid \"refclk-frequency\" %u\n",
				clock_rate);
			return -EINVAL;
		}
	else
		ref_clk_fsel = 0x7;

	switch (clock_rate) {
	case 50000000:
		mpll_mul = 0x32;
		break;
	case 100000000:
		mpll_mul = 0x19;
		break;
	case 125000000:
		mpll_mul = 0x28;
		break;
	default:
		dev_err(dev, "Invalid \"refclk-frequency\" %u\n", clock_rate);
		return -EINVAL;
	}

	/* Step 1: Wait for voltages stable */

	/* Step 2: If overcurrent indication is desired... Not desired */

	/* Step 3: Assert all resets */
	uctl_ctl.u64 = cvmx_read_csr(base + UCTL_CTL);
	uctl_ctl.s.uphy_rst = 1;
	uctl_ctl.s.uahc_rst = 1;
	uctl_ctl.s.uctl_rst = 1;
	cvmx_write_csr(base + UCTL_CTL, uctl_ctl.u64);

	/* Step 4: Configure controller clock */

	/* Step 4a: Reset the clock dividers */
	uctl_ctl.u64 = cvmx_read_csr(base + UCTL_CTL);
	uctl_ctl.s.h_clkdiv_rst = 1;
	cvmx_write_csr(base + UCTL_CTL, uctl_ctl.u64);

	/* Step 4b: Select controller clock frequency */
	for (div = 0; div < CLK_DIV_SIZE; div++) {
		h_clk_rate = octeon_get_io_clock_rate() / clk_div[div];
		if (OCTEON_USB3_MIN_H_CLK_RATE <= h_clk_rate &&
			h_clk_rate <= OCTEON_USB3_MAX_H_CLK_RATE)
			break;
	}
	if (div == CLK_DIV_SIZE) {
		dev_err(dev, "Cannot find divider for hclk\n");
		return -EINVAL;
	}

	uctl_ctl.u64 = cvmx_read_csr(base + UCTL_CTL);
	uctl_ctl.s.h_clkdiv_sel = div;
	uctl_ctl.s.h_clk_en = 1;
	cvmx_write_csr(base + UCTL_CTL, uctl_ctl.u64);

	uctl_ctl.u64 = cvmx_read_csr(base + UCTL_CTL);
	if ((div != uctl_ctl.s.h_clkdiv_sel) || (!uctl_ctl.s.h_clk_en)) {
		dev_err(dev, "USB controller clock initialization failure\n");
		return -EINVAL;
	}

	/* Step 4c: Deassert the controller clock divider reset */
	uctl_ctl.u64 = cvmx_read_csr(base + UCTL_CTL);
	uctl_ctl.s.h_clkdiv_rst = 0;
	cvmx_write_csr(base + UCTL_CTL, uctl_ctl.u64);

	uctl_ctl.u64 = cvmx_read_csr(base + UCTL_CTL);

	/* Step 5: Configure the strap signals */
	uctl_ctl.s.ref_clk_fsel = ref_clk_fsel;
	uctl_ctl.s.mpll_multiplier = mpll_mul;
	uctl_ctl.s.ref_clk_sel = ref_clk_sel;
	uctl_ctl.s.ref_clk_div2 = 0;
	uctl_ctl.s.ssc_en = 0;
	uctl_ctl.s.ref_ssp_en = 1;

	/* Step 6: Power up the per-port PHY logic */
	uctl_ctl.s.ss_power_en = 1;
	uctl_ctl.s.hs_power_en = 1;
	cvmx_write_csr(base + UCTL_CTL, uctl_ctl.u64);

	/* Step 7: Wait 10 controller-clock cycles */
	ndelay(200);

	/* Step 8a */
	uctl_ctl.u64 = cvmx_read_csr(base + UCTL_CTL);
	uctl_ctl.s.uctl_rst = 0;
	cvmx_write_csr(base + UCTL_CTL, uctl_ctl.u64);

	/* Step 8b: Wait 10 controller-clock cycles */
	ndelay(200);

	/* Step 8c: Port-power control */
	/*
	 * configured by the PINCTRL device
	 */

	/* Step 8d */
	uctl_ctl.u64 = cvmx_read_csr(base + UCTL_CTL);
	uctl_ctl.s.uahc_rst = 0;
	cvmx_write_csr(base + UCTL_CTL, uctl_ctl.u64);

	/* Step 8e: Wait 10 controller-clock cycles */
	ndelay(200);

	/* Step 9 */
	uctl_ctl.u64 = cvmx_read_csr(base + UCTL_CTL);
	uctl_ctl.s.csclk_en = 1;
	cvmx_write_csr(base + UCTL_CTL, uctl_ctl.u64);

	/* Step 10 */
	uctl_ctl.u64 = cvmx_read_csr(base + UCTL_CTL);
	uctl_ctl.s.drd_mode = 0;
	cvmx_write_csr(base + UCTL_CTL, uctl_ctl.u64);

	/* Steps 11..12 -- initialization of UAHC */

	/* Step 13: Wait 10 μs */
	udelay(20);

	/* Step 14 */
	uctl_ctl.u64 = cvmx_read_csr(base + UCTL_CTL);
	uctl_ctl.s.uphy_rst = 0;
	cvmx_write_csr(base + UCTL_CTL, uctl_ctl.u64);

	return 0;
}

static int dwc3_octeon_probe(struct platform_device *pdev)
{
	union cvmx_usbdrdx_uctl_shim_cfg shim_cfg;
	struct device *dev = &pdev->dev;
	struct resource *res;
	void __iomem *base;
	int ret;

	if (!dev->of_node)
		return -EINVAL;

	ret = dma_coerce_mask_and_coherent(dev, DMA_BIT_MASK(32));
	if (ret)
		return ret;

	res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
	if (!res) {
		dev_err(&pdev->dev, "Platform resource[0] is missing\n");
		return -ENODEV;
	}

	base = devm_ioremap_resource(&pdev->dev, res);
	if (IS_ERR(base))
		return PTR_ERR(base);

	octeon3_usb_clocks_start(&pdev->dev, (u64)base);

	shim_cfg.u64 = cvmx_read_csr((u64)base + UCTL_SHIM_CFG);
#ifdef __BIG_ENDIAN
	shim_cfg.s.dma_endian_mode = 1;
	shim_cfg.s.csr_endian_mode = 1;
#else
	shim_cfg.s.dma_endian_mode = 0;
	shim_cfg.s.csr_endian_mode = 0;
#endif
	cvmx_write_csr((u64)base + UCTL_SHIM_CFG, shim_cfg.u64);

	ret = of_platform_populate(dev->of_node, NULL, NULL, dev);
	if (ret) {
		dev_err(dev, "Failed to add dwc3 core\n");
		return ret;
	}

	return 0;
}

static int dwc3_octeon_remove(struct platform_device *pdev)
{
	return 0;
}

static const struct of_device_id octeon_dwc3_match[] = {
	{ .compatible = "cavium,octeon-7130-usb-uctl", },
	{},
};
MODULE_DEVICE_TABLE(of, octeon_ahci_match);

static struct platform_driver dwc3_octeon_driver = {
	.probe          = dwc3_octeon_probe,
	.remove         = dwc3_octeon_remove,
	.driver         = {
		.name   = "octeon-dwc3",
		.of_match_table = octeon_dwc3_match,
	},
};

module_platform_driver(dwc3_octeon_driver);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Cavium, Inc. <support@cavium.com>");
MODULE_DESCRIPTION("Cavium Inc. octeon usb3 clock init.");
