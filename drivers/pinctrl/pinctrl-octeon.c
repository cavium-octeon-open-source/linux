/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2011, 2012, 2015 Cavium Inc.
 */

#include <linux/platform_device.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/gpio.h>
#include <linux/io.h>
#include <linux/pinctrl/pinctrl.h>
#include <linux/pinctrl/pinmux.h>
#include <linux/pinctrl/machine.h>

#include <asm/octeon/octeon.h>
#include <asm/octeon/cvmx-gpio-defs.h>

#include "pinctrl-utils.h"
#include "core.h"

#define RX_DAT 0x80
#define TX_SET 0x88
#define TX_CLEAR 0x90
/*
 * The address offset of the GPIO configuration register for a given
 * line.
 */
static unsigned int bit_cfg_reg(unsigned int offset)
{
	/*
	 * The register stride is 8, with a discontinuity after the
	 * first 16.
	 */
	if (offset < 16)
		return 8 * offset;
	else
		return 8 * (offset - 16) + 0x100;
}

struct octeon_gpio {
	struct gpio_chip chip;
	struct pinctrl_desc pinctrl;
	struct pinctrl_dev *pinctrl_device;
	unsigned long busy;
	u64 register_base;
};

static int octeon_gpio_request(struct gpio_chip *chip, unsigned offset)
{
	return pinctrl_request_gpio(chip->base + offset);
}

static void octeon_gpio_free(struct gpio_chip *chip, unsigned offset)
{
	pinctrl_free_gpio(chip->base + offset);
}

static int octeon_gpio_dir_in(struct gpio_chip *chip, unsigned offset)
{
	struct octeon_gpio *gpio = container_of(chip, struct octeon_gpio, chip);

	cvmx_write_csr(gpio->register_base + bit_cfg_reg(offset), 0);
	return 0;
}

static void octeon_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
{
	struct octeon_gpio *gpio = container_of(chip, struct octeon_gpio, chip);
	u64 mask = 1ull << offset;
	u64 reg = gpio->register_base + (value ? TX_SET : TX_CLEAR);
	cvmx_write_csr(reg, mask);
}

static int octeon_gpio_dir_out(struct gpio_chip *chip, unsigned offset,
			       int value)
{
	struct octeon_gpio *gpio = container_of(chip, struct octeon_gpio, chip);
	union cvmx_gpio_bit_cfgx cfgx;

	octeon_gpio_set(chip, offset, value);

	cfgx.u64 = 0;
	cfgx.s.tx_oe = 1;

	cvmx_write_csr(gpio->register_base + bit_cfg_reg(offset), cfgx.u64);
	return 0;
}

static int octeon_gpio_get(struct gpio_chip *chip, unsigned offset)
{
	struct octeon_gpio *gpio = container_of(chip, struct octeon_gpio, chip);
	u64 read_bits = cvmx_read_csr(gpio->register_base + RX_DAT);

	return ((1ull << offset) & read_bits) != 0;
}

/*
 * Each pin belongs to exactly one singleton group
 */
#define _I \
	_P(0),  _P(1),  _P(2),  _P(3),  _P(4),  _P(5),  _P(6),  _P(7),   \
	_P(8),  _P(9),  _P(10), _P(11), _P(12), _P(13), _P(14), _P(15),  \
	_P(16), _P(17), _P(18), _P(19),

#define _P(x) PINCTRL_PIN(x, "pin" #x)
static const struct pinctrl_pin_desc octeon_pads[] = { _I };
#undef _P

#define _P(x) "grp" #x
static const char * const groups_array[] = { _I };
#undef _P

#undef _I

static const struct {
	unsigned int cfg;
	const char *name;
} octeon_pin_functions[] = {
	{ .cfg = 0x01, .name = "PTP_CKOUT" },
	{ .cfg = 0x02, .name = "PTP_PPS" },
	{ .cfg = 0x03, .name = "CLK_SYNCE0" },
	{ .cfg = 0x04, .name = "CLK_SYNCE1" },
	{ .cfg = 0x05, .name = "MCD0" },
	{ .cfg = 0x06, .name = "MCD1" },
	{ .cfg = 0x07, .name = "MCD2" },
	{ .cfg = 0x08, .name = "LMC_ECC" },
	{ .cfg = 0x10, .name = "GPIO_CLK_GEN0" },
	{ .cfg = 0x11, .name = "GPIO_CLK_GEN1" },
	{ .cfg = 0x12, .name = "GPIO_CLK_GEN2" },
	{ .cfg = 0x13, .name = "GPIO_CLK_GEN3" },
	{ .cfg = 0x14, .name = "USB0_VBUS_CTRL" },
	{ .cfg = 0x15, .name = "SATA0_COLD_PRESENCE" },
	{ .cfg = 0x16, .name = "SATA1_COLD_PRESENCE" },
	{ .cfg = 0x17, .name = "SATA0_LED" },
	{ .cfg = 0x18, .name = "SATA1_LED" },
	{ .cfg = 0x19, .name = "USB1_VBUS_CTRL" },
};

static int octeon_get_groups_count(struct pinctrl_dev *pctldev)
{
	return ARRAY_SIZE(groups_array);
}

static int octeon_get_group_pins(struct pinctrl_dev *pctldev,
	unsigned group, const unsigned **pins, unsigned *num_pins)
{
	*pins = &octeon_pads[group].number;
	*num_pins = 1;
	return 0;
}

static const char *octeon_get_group_name(struct pinctrl_dev *pctldev,
	unsigned selector)
{
	return groups_array[selector];
}

static int octeon_dt_node_to_map(struct pinctrl_dev *pctrl_dev,
	struct device_node *node,
	struct pinctrl_map **map,
	unsigned *num_maps)
{
	struct property *prop;
	const char *function_name, *group_name;
	unsigned reserved_maps = 0;
	int ret, ngroups;

	*map = NULL;
	*num_maps = 0;

	ret = of_property_read_string(node, "function", &function_name);
	if (ret) {
		dev_err(pctrl_dev->dev,
			"missing function property in node %s\n", node->name);
		return -EINVAL;
	}

	ngroups = of_property_count_strings(node, "groups");
	if (ngroups < 0) {
		dev_err(pctrl_dev->dev,
			"missing groups property in node %s\n", node->name);
		return -EINVAL;
	}

	ret = pinctrl_utils_reserve_map(pctrl_dev, map, &reserved_maps,
		num_maps, ngroups);
	if (ret) {
		dev_err(pctrl_dev->dev, "can't reserve map: %d\n", ret);
		return ret;
	}

	of_property_for_each_string(node, "groups", prop, group_name) {
		ret = pinctrl_utils_add_map_mux(pctrl_dev, map, &reserved_maps,
			num_maps, group_name, function_name);
		if (ret) {
			dev_err(pctrl_dev->dev, "can't add map: %d\n", ret);
			return ret;
		}
	}

	return 0;
}

static const struct pinctrl_ops octeon_pctrl_ops = {
	.get_groups_count	= octeon_get_groups_count,
	.get_group_name		= octeon_get_group_name,
	.get_group_pins		= octeon_get_group_pins,
	.dt_node_to_map		= octeon_dt_node_to_map,
	.dt_free_map		= pinctrl_utils_dt_free_map,
};

static int octeon_get_funcs_count(struct pinctrl_dev *pctldev)
{
	return ARRAY_SIZE(octeon_pin_functions);
}

static const char *octeon_get_func_name(struct pinctrl_dev *pctldev,
	unsigned function)
{
	return octeon_pin_functions[function].name;
}

static int octeon_get_func_groups(struct pinctrl_dev *pctldev,
	unsigned function, const char * const **groups,
	unsigned * const num_groups)
{
	*groups = groups_array;
	*num_groups = ARRAY_SIZE(groups_array);

	return 0;
}

static int octeon_set_mux(struct pinctrl_dev *pctldev, unsigned selector,
	unsigned group)
{
	struct octeon_gpio *gpio;
	union cvmx_gpio_bit_cfgx cfgx;

	gpio = pinctrl_dev_get_drvdata(pctldev);

	cfgx.u64 = 0;
	cfgx.cn70xx.tx_oe = 1;
	cfgx.cn70xx.output_sel = octeon_pin_functions[selector].cfg;

	cvmx_write_csr(gpio->register_base + bit_cfg_reg(group), cfgx.u64);

	return 0;
}

static int octeon_request(struct pinctrl_dev *pctldev, unsigned offset)
{
	struct octeon_gpio *gpio = pinctrl_dev_get_drvdata(pctldev);

	return test_and_set_bit(offset, &gpio->busy) ? -EBUSY : 0;
}

static int octeon_free(struct pinctrl_dev *pctldev, unsigned offset)
{
	struct octeon_gpio *gpio = pinctrl_dev_get_drvdata(pctldev);

	clear_bit(offset, &gpio->busy);
	return 0;
}

static struct pinmux_ops octeon_pinmux_ops = {
	.request		= octeon_request,
	.free			= octeon_free,
	.get_functions_count	= octeon_get_funcs_count,
	.get_function_name	= octeon_get_func_name,
	.get_function_groups	= octeon_get_func_groups,
	.set_mux		= octeon_set_mux,
};

static int octeon_gpio_probe(struct platform_device *pdev)
{
	struct octeon_gpio *gpio;
	struct gpio_chip *chip;
	struct pinctrl_desc *pinctrl;
	struct resource *res_mem;
	bool cn7130_style;
	int err = 0;

	gpio = devm_kzalloc(&pdev->dev, sizeof(*gpio), GFP_KERNEL);
	if (!gpio)
		return -ENOMEM;
	chip = &gpio->chip;
	pinctrl = &gpio->pinctrl;

	res_mem = platform_get_resource(pdev, IORESOURCE_MEM, 0);
	if (res_mem == NULL) {
		dev_err(&pdev->dev, "found no memory resource\n");
		return -ENXIO;
	}
	if (!devm_request_mem_region(&pdev->dev, res_mem->start,
					resource_size(res_mem),
				     res_mem->name)) {
		dev_err(&pdev->dev, "request_mem_region failed\n");
		return -ENXIO;
	}
	gpio->register_base = (u64)devm_ioremap(&pdev->dev, res_mem->start,
						resource_size(res_mem));
	gpio->busy = 0;

	platform_set_drvdata(pdev, gpio);

	cn7130_style = of_device_is_compatible(pdev->dev.of_node,
						"cavium,octeon-7130-gpio");

	if (cn7130_style) {
		pinctrl->name = dev_name(&pdev->dev);
		pinctrl->pins = octeon_pads,
		pinctrl->npins = ARRAY_SIZE(octeon_pads),
		pinctrl->pctlops = &octeon_pctrl_ops,
		pinctrl->pmxops = &octeon_pinmux_ops,
		pinctrl->owner = THIS_MODULE,
		gpio->pinctrl_device = pinctrl_register(
			pinctrl, &pdev->dev, gpio);
		if (!gpio->pinctrl_device) {
			dev_err(&pdev->dev, "could not register Octeon pinmux driver\n");
			return -EINVAL;
		}
	}

	chip->label = "octeon-gpio";
	chip->dev = &pdev->dev;
	chip->owner = THIS_MODULE;
	chip->base = 0;
	chip->can_sleep = false;
	chip->ngpio = 20;
	if (cn7130_style) {
		chip->request = octeon_gpio_request;
		chip->free = octeon_gpio_free;
	}
	chip->direction_input = octeon_gpio_dir_in;
	chip->get = octeon_gpio_get;
	chip->direction_output = octeon_gpio_dir_out;
	chip->set = octeon_gpio_set;
	err = gpiochip_add(chip);
	if (err) {
		pinctrl_unregister(gpio->pinctrl_device);
		dev_err(&pdev->dev, "could not Octeon gpio chip\n");
		return err;
	}

	dev_info(&pdev->dev, "OCTEON GPIO driver probed.\n");

	return 0;
}

static int octeon_gpio_remove(struct platform_device *pdev)
{
	struct octeon_gpio *gpio = platform_get_drvdata(pdev);

	pinctrl_unregister(gpio->pinctrl_device);
	gpiochip_remove(&gpio->chip);
	return 0;
}

static struct of_device_id octeon_gpio_match[] = {
	{ .compatible = "cavium,octeon-3860-gpio", },
	{ .compatible = "cavium,octeon-7130-gpio", },
	{},
};
MODULE_DEVICE_TABLE(of, octeon_gpio_match);

static struct platform_driver octeon_gpio_driver = {
	.driver = {
		.name		= "octeon_gpio",
		.of_match_table = octeon_gpio_match,
	},
	.probe		= octeon_gpio_probe,
	.remove		= octeon_gpio_remove,
};

module_platform_driver(octeon_gpio_driver);

MODULE_DESCRIPTION("Cavium Inc. OCTEON GPIO Driver");
MODULE_AUTHOR("David Daney");
MODULE_LICENSE("GPL");
