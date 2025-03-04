/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Meson8b clock tree IDs
 */

#ifndef __MESON8B_CLKC_H
#define __MESON8B_CLKC_H

#define CLKID_PLL_FIXED		2
#define CLKID_PLL_VID		3
#define CLKID_PLL_SYS		4
#define CLKID_FCLK_DIV2		5
#define CLKID_FCLK_DIV3		6
#define CLKID_FCLK_DIV4		7
#define CLKID_FCLK_DIV5		8
#define CLKID_FCLK_DIV7		9
#define CLKID_CLK81		10
#define CLKID_MALI		11
#define CLKID_CPUCLK		12
#define CLKID_ZERO		13
#define CLKID_MPEG_SEL		14
#define CLKID_MPEG_DIV		15
#define CLKID_DDR		16
#define CLKID_DOS		17
#define CLKID_ISA		18
#define CLKID_PL301		19
#define CLKID_PERIPHS		20
#define CLKID_SPICC		21
#define CLKID_I2C		22
#define CLKID_SAR_ADC		23
#define CLKID_SMART_CARD	24
#define CLKID_RNG0		25
#define CLKID_UART0		26
#define CLKID_SDHC		27
#define CLKID_STREAM		28
#define CLKID_ASYNC_FIFO	29
#define CLKID_SDIO		30
#define CLKID_ABUF		31
#define CLKID_HIU_IFACE		32
#define CLKID_ASSIST_MISC	33
#define CLKID_SPI		34
#define CLKID_I2S_SPDIF		35
#define CLKID_ETH		36
#define CLKID_DEMUX		37
#define CLKID_AIU_GLUE		38
#define CLKID_IEC958		39
#define CLKID_I2S_OUT		40
#define CLKID_AMCLK		41
#define CLKID_AIFIFO2		42
#define CLKID_MIXER		43
#define CLKID_MIXER_IFACE	44
#define CLKID_ADC		45
#define CLKID_BLKMV		46
#define CLKID_AIU		47
#define CLKID_UART1		48
#define CLKID_G2D		49
#define CLKID_USB0		50
#define CLKID_USB1		51
#define CLKID_RESET		52
#define CLKID_NAND		53
#define CLKID_DOS_PARSER	54
#define CLKID_USB		55
#define CLKID_VDIN1		56
#define CLKID_AHB_ARB0		57
#define CLKID_EFUSE		58
#define CLKID_BOOT_ROM		59
#define CLKID_AHB_DATA_BUS	60
#define CLKID_AHB_CTRL_BUS	61
#define CLKID_HDMI_INTR_SYNC	62
#define CLKID_HDMI_PCLK		63
#define CLKID_USB1_DDR_BRIDGE	64
#define CLKID_USB0_DDR_BRIDGE	65
#define CLKID_MMC_PCLK		66
#define CLKID_DVIN		67
#define CLKID_UART2		68
#define CLKID_SANA		69
#define CLKID_VPU_INTR		70
#define CLKID_SEC_AHB_AHB3_BRIDGE	71
#define CLKID_CLK81_A9		72
#define CLKID_VCLK2_VENCI0	73
#define CLKID_VCLK2_VENCI1	74
#define CLKID_VCLK2_VENCP0	75
#define CLKID_VCLK2_VENCP1	76
#define CLKID_GCLK_VENCI_INT	77
#define CLKID_GCLK_VENCP_INT	78
#define CLKID_DAC_CLK		79
#define CLKID_AOCLK_GATE	80
#define CLKID_IEC958_GATE	81
#define CLKID_ENC480P		82
#define CLKID_RNG1		83
#define CLKID_GCLK_VENCL_INT	84
#define CLKID_VCLK2_VENCLMCC	85
#define CLKID_VCLK2_VENCL	86
#define CLKID_VCLK2_OTHER	87
#define CLKID_EDP		88
#define CLKID_AO_MEDIA_CPU	89
#define CLKID_AO_AHB_SRAM	90
#define CLKID_AO_AHB_BUS	91
#define CLKID_AO_IFACE		92
#define CLKID_MPLL0		93
#define CLKID_MPLL1		94
#define CLKID_MPLL2		95
#define CLKID_NAND_CLK		112
#define CLKID_APB		124
#define CLKID_PERIPH		126
#define CLKID_AXI		128
#define CLKID_L2_DRAM		130
#define CLKID_HDMI_PLL_HDMI_OUT	132
#define CLKID_VID_PLL_FINAL_DIV	137
#define CLKID_VCLK_IN_SEL	138
#define CLKID_VCLK2_IN_SEL	149
#define CLKID_CTS_ENCT		161
#define CLKID_CTS_ENCP		163
#define CLKID_CTS_ENCI		165
#define CLKID_HDMI_TX_PIXEL	167
#define CLKID_CTS_ENCL		169
#define CLKID_CTS_VDAC0		171
#define CLKID_HDMI_SYS		174
#define CLKID_VPU		190
#define CLKID_VDEC_1		196
#define CLKID_VDEC_HCODEC	199
#define CLKID_VDEC_2		202
#define CLKID_VDEC_HEVC		206
#define CLKID_CTS_AMCLK		209
#define CLKID_CTS_MCLK_I958	212
#define CLKID_CTS_I958		213
#define CLKID_ETH_CLK		222

#endif /* __MESON8B_CLKC_H */
