/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2009-2012 Cavium, Inc.
 */

#include <linux/platform_device.h>
#include <linux/of_mdio.h>
#include <linux/delay.h>
#include <linux/module.h>
#include <linux/gfp.h>
#include <linux/phy.h>
#include <linux/io.h>

#define DRV_VERSION "1.0"
#define DRV_DESCRIPTION "Cavium Networks Octeon SMI/MDIO driver"

#define SMI_CMD		0x0
#define SMI_WR_DAT	0x8
#define SMI_RD_DAT	0x10
#define SMI_CLK		0x18
#define SMI_EN		0x20

static inline u64 smi_cmd(u64 phy_op, u64 phy_adr, u64 reg_adr)
{
	return ((phy_op & 3) << 16) | ((phy_adr & 0x1f) << 8) | (reg_adr & 0x1f);
}

#define SMI_DATA_PENDING BIT(17)
#define SMI_DATA_VAL BIT(16)
#define SMI_CLK_MODE BIT(24)
#define SMI_CLK_PREAMBLE BIT(12)
#define SMI_EN_EN BIT(0)

enum octeon_mdiobus_mode {
	UNINIT = 0,
	C22,
	C45
};

struct octeon_mdiobus {
	void __iomem *base;
	struct mii_bus *mii_bus;
	resource_size_t mdio_phys;
	resource_size_t regsize;
	enum octeon_mdiobus_mode mode;
	int phy_irq[PHY_MAX_ADDR];
};

static void octeon_mdiobus_set_mode(struct octeon_mdiobus *p,
				    enum octeon_mdiobus_mode m)
{
	u64 clk;

	if (m == p->mode)
		return;

	clk = readq(p->base + SMI_CLK);
	if (m == C45)
		clk |= SMI_CLK_MODE;
	else
		clk &= ~SMI_CLK_MODE;
	clk |= SMI_CLK_PREAMBLE;
	writeq(clk, p->base + SMI_CLK);
	p->mode = m;
}

static int octeon_mdiobus_c45_addr(struct octeon_mdiobus *p,
				   int phy_id, int regnum)
{
	int timeout = 1000;
	u64 v;

	octeon_mdiobus_set_mode(p, C45);

	writeq(regnum & 0xffff, p->base + SMI_WR_DAT);

	regnum = (regnum >> 16) & 0x1f;

	writeq(smi_cmd(0, phy_id, regnum), p->base + SMI_CMD);

	do {
		/* Wait 1000 clocks so we don't saturate the RSL bus
		 * doing reads.
		 */
		__delay(1000);
		v = readq(p->base + SMI_WR_DAT);
	} while ((v & SMI_DATA_PENDING) && --timeout);

	if (timeout <= 0)
		return -EIO;
	return 0;
}

static int octeon_mdiobus_read(struct mii_bus *bus, int phy_id, int regnum)
{
	struct octeon_mdiobus *p = bus->priv;
	unsigned int op = 1; /* MDIO_CLAUSE_22_READ */
	int timeout = 1000;
	u64 v;

	if (regnum & MII_ADDR_C45) {
		int r = octeon_mdiobus_c45_addr(p, phy_id, regnum);
		if (r < 0)
			return r;

		regnum = (regnum >> 16) & 0x1f;
		op = 3; /* MDIO_CLAUSE_45_READ */
	} else {
		octeon_mdiobus_set_mode(p, C22);
	}

	writeq(smi_cmd(op, phy_id, regnum), p->base + SMI_CMD);

	do {
		/* Wait 1000 clocks so we don't saturate the RSL bus
		 * doing reads.
		 */
		__delay(1000);
		v = readq(p->base + SMI_RD_DAT);
	} while ((v & SMI_DATA_PENDING) && --timeout);

	return (v & SMI_DATA_VAL) ? (v & 0xffff) : -EIO;
}

static int octeon_mdiobus_write(struct mii_bus *bus, int phy_id,
				int regnum, u16 val)
{
	struct octeon_mdiobus *p = bus->priv;
	unsigned int op = 0; /* MDIO_CLAUSE_22_WRITE */
	int timeout = 1000;
	u64 v;

	if (regnum & MII_ADDR_C45) {
		int r = octeon_mdiobus_c45_addr(p, phy_id, regnum);
		if (r < 0)
			return r;

		regnum = (regnum >> 16) & 0x1f;
		op = 1; /* MDIO_CLAUSE_45_WRITE */
	} else {
		octeon_mdiobus_set_mode(p, C22);
	}

	writeq(val & 0xffff, p->base + SMI_WR_DAT);

	writeq(smi_cmd(op, phy_id, regnum), p->base + SMI_CMD);

	do {
		/* Wait 1000 clocks so we don't saturate the RSL bus
		 * doing reads.
		 */
		__delay(1000);
		v = readq(p->base + SMI_WR_DAT);
	} while ((v & SMI_DATA_PENDING) && --timeout);

	if (timeout <= 0)
		return -EIO;

	return 0;
}

static int octeon_mdiobus_probe(struct platform_device *pdev)
{
	struct octeon_mdiobus *bus;
	struct resource *res_mem;
	int err = -ENOENT;

	bus = devm_kzalloc(&pdev->dev, sizeof(*bus), GFP_KERNEL);
	if (!bus)
		return -ENOMEM;

	res_mem = platform_get_resource(pdev, IORESOURCE_MEM, 0);

	if (res_mem == NULL) {
		dev_err(&pdev->dev, "found no memory resource\n");
		err = -ENXIO;
		goto fail;
	}
	bus->mdio_phys = res_mem->start;
	bus->regsize = resource_size(res_mem);
	if (!devm_request_mem_region(&pdev->dev, bus->mdio_phys, bus->regsize,
				     res_mem->name)) {
		dev_err(&pdev->dev, "request_mem_region failed\n");
		goto fail;
	}
	bus->base = devm_ioremap(&pdev->dev, bus->mdio_phys, bus->regsize);

	bus->mii_bus = mdiobus_alloc();

	if (!bus->mii_bus)
		goto fail;

	writeq(SMI_EN_EN, bus->base + SMI_EN);

	bus->mii_bus->priv = bus;
	bus->mii_bus->irq = bus->phy_irq;
	bus->mii_bus->name = "mdio-octeon";
	snprintf(bus->mii_bus->id, MII_BUS_ID_SIZE, "%llx", (u64)bus->base);
	bus->mii_bus->parent = &pdev->dev;

	bus->mii_bus->read = octeon_mdiobus_read;
	bus->mii_bus->write = octeon_mdiobus_write;

	platform_set_drvdata(pdev, bus);

	err = of_mdiobus_register(bus->mii_bus, pdev->dev.of_node);
	if (err)
		goto fail_register;

	dev_info(&pdev->dev, "Version " DRV_VERSION "\n");

	return 0;
fail_register:
	mdiobus_free(bus->mii_bus);
fail:
	writeq(0, bus->base + SMI_EN);
	return err;
}

static int octeon_mdiobus_remove(struct platform_device *pdev)
{
	struct octeon_mdiobus *bus;

	bus = platform_get_drvdata(pdev);

	mdiobus_unregister(bus->mii_bus);
	mdiobus_free(bus->mii_bus);
	writeq(0, bus->base + SMI_EN);
	return 0;
}

static struct of_device_id octeon_mdiobus_match[] = {
	{
		.compatible = "cavium,octeon-3860-mdio",
	},
	{},
};
MODULE_DEVICE_TABLE(of, octeon_mdiobus_match);

static struct platform_driver octeon_mdiobus_driver = {
	.driver = {
		.name		= "mdio-octeon",
		.of_match_table = octeon_mdiobus_match,
	},
	.probe		= octeon_mdiobus_probe,
	.remove		= octeon_mdiobus_remove,
};

void octeon_mdiobus_force_mod_depencency(void)
{
	/* Let ethernet drivers force us to be loaded.  */
}
EXPORT_SYMBOL(octeon_mdiobus_force_mod_depencency);

module_platform_driver(octeon_mdiobus_driver);

MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR("David Daney");
MODULE_LICENSE("GPL");
