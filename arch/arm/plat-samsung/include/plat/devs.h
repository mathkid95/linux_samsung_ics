/* arch/arm/plat-samsung/include/plat/devs.h
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Copyright (c) 2004 Simtec Electronics
 * Ben Dooks <ben@simtec.co.uk>
 *
 * Header file for s3c2410 standard platform devices
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __PLAT_DEVS_H
#define __PLAT_DEVS_H __FILE__

#include <linux/platform_device.h>

struct s3c24xx_uart_resources {
	struct resource		*resources;
	unsigned long		 nr_resources;
};

extern struct s3c24xx_uart_resources s3c2410_uart_resources[];
extern struct s3c24xx_uart_resources s3c64xx_uart_resources[];
extern struct s3c24xx_uart_resources s5p_uart_resources[];

extern struct platform_device *s3c24xx_uart_devs[];
extern struct platform_device *s3c24xx_uart_src[];

extern struct platform_device s3c24xx_uart_device0;
extern struct platform_device s3c24xx_uart_device1;
extern struct platform_device s3c24xx_uart_device2;
extern struct platform_device s3c24xx_uart_device3;

extern struct platform_device s5pv210_device_fiqdbg_uart0;
extern struct platform_device s5pv210_device_fiqdbg_uart1;
extern struct platform_device s5pv210_device_fiqdbg_uart2;
extern struct platform_device s5pv210_device_fiqdbg_uart3;

extern struct platform_device s3c_device_timer[];

extern struct platform_device s3c64xx_device_iis0;
extern struct platform_device s3c64xx_device_iis1;
extern struct platform_device s3c64xx_device_iisv4;

extern struct platform_device s3c64xx_device_spi0;
extern struct platform_device s3c64xx_device_spi1;

extern struct platform_device samsung_asoc_dma;

extern struct platform_device s3c64xx_device_pcm0;
extern struct platform_device s3c64xx_device_pcm1;

extern struct platform_device s3c64xx_device_ac97;

extern struct platform_device s3c_device_ts;

extern struct platform_device s3c_device_fb;

extern struct platform_device s3c_device_fimc0;
extern struct platform_device s3c_device_fimc1;
extern struct platform_device s3c_device_fimc2;
extern struct platform_device s3c_device_ipc;
extern struct platform_device s3c_device_mfc;
extern struct platform_device s3c_device_jpeg;
extern struct platform_device s3c_device_g3d;

extern struct platform_device s3c_device_ohci;
extern struct platform_device s3c_device_lcd;
extern struct platform_device s3c_device_wdt;
extern struct platform_device s3c_device_i2c0;
extern struct platform_device s3c_device_i2c1;
extern struct platform_device s3c_device_i2c2;
extern struct platform_device s3c_device_i2c3;
extern struct platform_device s3c_device_i2c4;
extern struct platform_device s3c_device_i2c5;
extern struct platform_device s3c_device_i2c6;
extern struct platform_device s3c_device_i2c7;
extern struct platform_device s3c_device_rtc;
extern struct platform_device s3c_device_adc;
extern struct platform_device s3c_device_sdi;
extern struct platform_device s3c_device_iis;
extern struct platform_device s3c_device_hwmon;
extern struct platform_device s3c_device_hsmmc0;
extern struct platform_device s3c_device_hsmmc1;
extern struct platform_device s3c_device_hsmmc2;
extern struct platform_device s3c_device_hsmmc3;
extern struct platform_device s3c_device_cfcon;

extern struct platform_device s3c_device_spi0;
extern struct platform_device s3c_device_spi1;

extern struct platform_device s5pc100_device_spi0;
extern struct platform_device s5pc100_device_spi1;
extern struct platform_device s5pc100_device_spi2;
extern struct platform_device s5pv210_device_spi0;
extern struct platform_device s5pv210_device_spi1;
extern struct platform_device s5p64x0_device_spi0;
extern struct platform_device s5p64x0_device_spi1;

extern struct platform_device s3c_device_hwmon;

extern struct platform_device s3c_device_nand;
extern struct platform_device s3c_device_onenand;
extern struct platform_device s3c64xx_device_onenand1;
extern struct platform_device s5p_device_onenand;

extern struct platform_device s3c_device_usbgadget;
extern struct platform_device s3c_device_usb_hsudc;
extern struct platform_device s3c_device_android_usb;
extern struct platform_device s3c_device_usb_mass_storage;
extern struct platform_device s3c_device_rndis;
extern struct platform_device s3c_device_usb_hsotg;
#ifdef CONFIG_USB_S3C_OTG_HOST
extern struct platform_device s3c_device_usb_otghcd;
#endif

extern struct platform_device s5p_device_rotator;
extern struct platform_device s5p_device_tvout;
extern struct platform_device s5p_device_g3d;

extern struct platform_device s5pv210_device_ac97;
extern struct platform_device s5pv210_device_pcm0;
extern struct platform_device s5pv210_device_pcm1;
extern struct platform_device s5pv210_device_pcm2;
extern struct platform_device s5pv210_device_iis0;
extern struct platform_device s5pv210_device_iis1;
extern struct platform_device s5pv210_device_iis2;
extern struct platform_device s5pv210_device_spdif;

extern struct platform_device exynos4_device_ac97;
extern struct platform_device exynos4_device_pcm0;
extern struct platform_device exynos4_device_pcm1;
extern struct platform_device exynos4_device_pcm2;
extern struct platform_device exynos4_device_i2s0;
extern struct platform_device exynos4_device_i2s1;
extern struct platform_device exynos4_device_i2s2;
extern struct platform_device exynos4_device_spdif;
extern struct platform_device exynos4_device_pd[];
extern struct platform_device exynos4_device_ahci;

extern struct platform_device s5p6440_device_pcm;
extern struct platform_device s5p6440_device_iis;

extern struct platform_device s5p6450_device_iis0;
extern struct platform_device s5p6450_device_iis1;
extern struct platform_device s5p6450_device_iis2;
extern struct platform_device s5p6450_device_pcm0;

extern struct platform_device s5pc100_device_ac97;
extern struct platform_device s5pc100_device_pcm0;
extern struct platform_device s5pc100_device_pcm1;
extern struct platform_device s5pc100_device_iis0;
extern struct platform_device s5pc100_device_iis1;
extern struct platform_device s5pc100_device_iis2;
extern struct platform_device s5pc100_device_spdif;

extern struct platform_device samsung_device_keypad;

extern struct platform_device s5p_device_fimc0;
extern struct platform_device s5p_device_fimc1;
extern struct platform_device s5p_device_fimc2;
extern struct platform_device s5p_device_fimc3;

extern struct platform_device s5p_device_mipi_csis0;
extern struct platform_device s5p_device_mipi_csis1;

extern struct platform_device s5p_device_ehci;

extern struct platform_device exynos4_device_sysmmu;
extern struct platform_device s5p_device_rtc;

extern struct platform_device s3c_device_adc;
/* s3c2440 specific devices */

extern struct platform_device s5pv210_device_pdma0;
extern struct platform_device s5pv210_device_pdma1;
extern struct platform_device s5pv210_device_mdma;

extern struct platform_device s5pv210_device_cpufreq;

#ifdef CONFIG_CPU_S3C2440

extern struct platform_device s3c_device_camif;
extern struct platform_device s3c_device_ac97;

#endif

/**
 * s3c_set_platdata() - helper for setting platform data
 * @pd: The default platform data for this device.
 * @pdsize: The size of the platform data.
 * @pdev: Pointer to the device to fill in.
 *
 * This helper replaces a number of calls that copy and then set the
 * platform data of the device.
 */
extern void *s3c_set_platdata(void *pd, size_t pdsize,
			      struct platform_device *pdev);

void __init s3c_usb_set_serial(void);

#endif /* __PLAT_DEVS_H */
