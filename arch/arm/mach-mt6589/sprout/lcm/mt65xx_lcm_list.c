#include <lcm_drv.h>
#ifdef CONFIG_BUILD_LK
#include <platform/disp_drv_platform.h>
#else
#include <linux/delay.h>
#include <mach/mt_gpio.h>
#endif
#include <cust_gpio_usage.h>
//used to identify float ID PIN status
#define LCD_HW_ID_STATUS_LOW 0
#define LCD_HW_ID_STATUS_HIGH 1
#define LCD_HW_ID_STATUS_FLOAT 0x02
#define LCD_HW_ID_STATUS_ERROR 0x03
#ifdef CONFIG_BUILD_LK
#define LCD_DEBUG(fmt) dprintf(CRITICAL,fmt)
#else
#define LCD_DEBUG(fmt) printk(fmt)
#endif

#define NT35590_HD720_DSI_VDO_TRULY 1

#pragma message "go " NT35590_HD720_DSI_VDO_TRULY

extern LCM_DRIVER hx8369_lcm_drv;
extern LCM_DRIVER hx8369_6575_lcm_drv;
extern LCM_DRIVER hx8363_6575_dsi_lcm_drv;
extern LCM_DRIVER hx8363_6575_dsi_hvga_lcm_drv;
extern LCM_DRIVER bm8578_lcm_drv;
extern LCM_DRIVER nt35582_mcu_lcm_drv;
extern LCM_DRIVER nt35582_mcu_6575_lcm_drv;
extern LCM_DRIVER nt35582_rgb_6575_lcm_drv;
extern LCM_DRIVER hx8357b_lcm_drv;
extern LCM_DRIVER hx8369_dsi_lcm_drv;
extern LCM_DRIVER hx8369_dsi_6575_lcm_drv;
extern LCM_DRIVER hx8369_dsi_6575_hvga_lcm_drv;
extern LCM_DRIVER hx8369_dsi_6575_qvga_lcm_drv;
extern LCM_DRIVER hx8369_dsi_vdo_lcm_drv;
extern LCM_DRIVER hx8369b_dsi_vdo_lcm_drv;
extern LCM_DRIVER hx8369_hvga_lcm_drv;
extern LCM_DRIVER ili9481_lcm_drv;
extern LCM_DRIVER nt35582_lcm_drv;
extern LCM_DRIVER s6d0170_lcm_drv;
extern LCM_DRIVER spfd5461a_lcm_drv;
extern LCM_DRIVER ta7601_lcm_drv;
extern LCM_DRIVER tft1p3037_lcm_drv;
extern LCM_DRIVER ha5266_lcm_drv;
extern LCM_DRIVER hsd070idw1_lcm_drv;
extern LCM_DRIVER lg4571_lcm_drv;
extern LCM_DRIVER lvds_wsvga_lcm_drv;
extern LCM_DRIVER lvds_wsvga_ti_lcm_drv;
extern LCM_DRIVER lvds_wsvga_ti_n_lcm_drv;
extern LCM_DRIVER nt35565_3d_lcm_drv;
extern LCM_DRIVER tm070ddh03_lcm_drv;
extern LCM_DRIVER r61408_lcm_drv;
extern LCM_DRIVER nt35510_lcm_drv;
extern LCM_DRIVER nt35510_dpi_lcm_drv;
extern LCM_DRIVER nt35510_hvga_lcm_drv;
extern LCM_DRIVER nt35510_qvga_lcm_drv;
extern LCM_DRIVER nt35510_6517_lcm_drv;
extern LCM_DRIVER r63303_idisplay_lcm_drv;
extern LCM_DRIVER hj080ia_lcm_drv;
extern LCM_DRIVER hj101na02a_lcm_drv;
extern LCM_DRIVER hsd070pfw3_lcm_drv;
extern LCM_DRIVER scf0700m48ggu02_lcm_drv;
extern LCM_DRIVER nt35510_fwvga_lcm_drv;
#if defined(GN_SSD2825_SMD_S6E8AA)
extern LCM_DRIVER gn_ssd2825_smd_s6e8aa;
#endif
extern LCM_DRIVER hx8369_dsi_bld_lcm_drv;
extern LCM_DRIVER hx8369_dsi_tm_lcm_drv;
extern LCM_DRIVER otm8018b_dsi_vdo_lcm_drv;	 
extern LCM_DRIVER nt35512_dsi_vdo_lcm_drv;
extern LCM_DRIVER hx8369_rgb_6585_fpga_lcm_drv;
extern LCM_DRIVER hx8392a_dsi_cmd_lcm_drv;
extern LCM_DRIVER nt35590_hd720_dsi_vdo_truly_lcm_drv;
extern LCM_DRIVER ssd2075_hd720_dsi_vdo_truly_lcm_drv;
extern LCM_DRIVER nt35590_hd720_dsi_cmd_auo_lcm_drv;
extern LCM_DRIVER nt35590_hd720_dsi_cmd_auo_fwvga_lcm_drv;
extern LCM_DRIVER nt35590_hd720_dsi_cmd_auo_qhd_lcm_drv;
extern LCM_DRIVER nt35590_hd720_dsi_cmd_cmi_lcm_drv;
extern LCM_DRIVER nt35516_qhd_dsi_cmd_ipsboe_lcm_drv;
extern LCM_DRIVER nt35516_qhd_dsi_cmd_ipsboe_wvga_lcm_drv;
extern LCM_DRIVER bp070ws1_lcm_drv;
extern LCM_DRIVER bp101wx1_lcm_drv;
extern LCM_DRIVER bp101wx1_n_lcm_drv;
extern LCM_DRIVER nt35516_qhd_rav4_lcm_drv;
extern LCM_DRIVER r63311_fhd_dsi_vdo_sharp_lcm_drv;
extern LCM_DRIVER nt35596_fhd_dsi_vdo_truly_lcm_drv;
extern LCM_DRIVER nt35596_auo65_ykl_fhd_lcm_drv;
extern LCM_DRIVER otm1283_auo_lcm_drv;
extern LCM_DRIVER otm1283_auo57_ykl_hd_lcm_drv;
extern LCM_DRIVER otm1281a_auo_lcm_drv;
extern LCM_DRIVER lg4591_auo_lcm_drv;
extern LCM_DRIVER lg4591_lcm_drv;
extern LCM_DRIVER nt35590_auo47_truly_lcm_drv;
extern LCM_DRIVER nt35516_auo53_ykl_drv;
extern LCM_DRIVER hx8394_linju_lcm_drv;
extern LCM_DRIVER hx8394_lg47_truly_lcm_drv;
extern LCM_DRIVER hx8394_gp53_hengs_hd_lcm_drv;
extern LCM_DRIVER hx8389b_qhd_dsi_vdo_drv;
extern LCM_DRIVER otm9605a_dsi_lcm_drv;
extern LCM_DRIVER rm68190_dsi_lcm_drv;
extern LCM_DRIVER otm8018b_dsi_lcm_drv;
extern LCM_DRIVER nt35512_dsi_lcm_drv;
extern LCM_DRIVER otm8009a_dsi_lcm_drv;
extern LCM_DRIVER rm68180_dsi_lcm_drv;

extern LCM_DRIVER s6tnmr1x01_dsi_vdo_lcm_drv;
extern LCM_DRIVER r63311_fhd_dsi_lcm_drv;
extern LCM_DRIVER r63315_fhd_dsi_lcm_drv;
extern LCM_DRIVER otm9608a_dsi_lcm_drv;
extern LCM_DRIVER nt35595_fhd_dsi_lcm_drv;
//#if defined(NT35596_AUO60_YKL_FHD)
extern LCM_DRIVER nt35596_auo60_ykl_fhd_lcm_drv;
//#endif
extern LCM_DRIVER otm1283a_auo50_ykl_hd_lcm_drv;
#if defined(HX8392A_CMI45_TRULY_HD)
extern LCM_DRIVER hx8392a_cmi45_truly_hd_lcm_drv;
#endif
extern LCM_DRIVER hx8389b_jdi50_kl_qhd_lcm_drv;
extern LCM_DRIVER r63311_auo50_truly_fhd_lcm_drv;
extern LCM_DRIVER r63311_auo57_truly_fhd_lcm_drv;
extern LCM_DRIVER nt35521_auo60_ykl_hd_lcm_drv;
#if defined(NT35592_SHARP50_HLT_HD)
extern LCM_DRIVER nt35592_sharp50_hlt_hd_lcm_drv;
#endif
#if defined(NT35521_JDI50_XYL_HD)
extern LCM_DRIVER nt35521_jdi50_xyl_hd_lcm_drv;
#endif
LCM_DRIVER* lcm_driver_list[] = 
{
#if defined(NT35521_JDI50_XYL_HD)
    &nt35521_jdi50_xyl_hd_lcm_drv,
#endif
#if defined(NT35592_SHARP50_HLT_HD)
    &nt35592_sharp50_hlt_hd_lcm_drv,
#endif
#if defined(NT35521_AUO60_YKL_HD)
    &nt35521_auo60_ykl_hd_lcm_drv,
#endif
#if defined(R63311_AUO57_TRULY_FHD)
    &r63311_auo57_truly_fhd_lcm_drv,
#endif
#if defined(R63311_AUO50_TRULY_FHD)
    &r63311_auo50_truly_fhd_lcm_drv,
#endif
#if defined(HX8389B_JDI50_KL_QHD)
    &hx8389b_jdi50_kl_qhd_lcm_drv,
#endif
#if defined(HX8392A_CMI45_TRULY_HD)
    &hx8392a_cmi45_truly_hd_lcm_drv,
#endif
#if defined(OTM1283A_AUO50_YKL_HD)
    &otm1283a_auo50_ykl_hd_lcm_drv,
#endif
#if defined(NT35595_LG60_TRULY)
	&nt35595_fhd_dsi_lcm_drv,
#endif

#if defined(NT35596_AUO60_YKL_FHD)
	&nt35596_auo60_ykl_fhd_lcm_drv,
#endif

#if defined(HX8369)
	&hx8369_lcm_drv,
#endif

#if defined(HX8369_6575)
	&hx8369_6575_lcm_drv,
#endif

#if defined(BM8578)
	&bm8578_lcm_drv,
#endif

#if defined(NT35582_MCU)
	&nt35582_mcu_lcm_drv,
#endif

#if defined(NT35582_MCU_6575)
	&nt35582_mcu_6575_lcm_drv,
#endif

#if defined(NT35590_HD720_DSI_VDO_TRULY)
	&nt35590_hd720_dsi_vdo_truly_lcm_drv,
#else
#pragma message "NT35590_HD720_DSI_VDO_TRULY NOT defined"
#endif

#if defined(SSD2075_HD720_DSI_VDO_TRULY)
	&ssd2075_hd720_dsi_vdo_truly_lcm_drv, 
#endif


#if defined(NT35590_HD720_DSI_CMD_AUO)
	&nt35590_hd720_dsi_cmd_auo_lcm_drv,
#endif

#if defined(NT35590_HD720_DSI_CMD_AUO_QHD)
	&nt35590_hd720_dsi_cmd_auo_qhd_lcm_drv,
#endif

#if defined(NT35590_HD720_DSI_CMD_AUO_FWVGA)
	&nt35590_hd720_dsi_cmd_auo_fwvga_lcm_drv,
#endif

#if defined(NT35590_HD720_DSI_CMD_CMI)
	&nt35590_hd720_dsi_cmd_cmi_lcm_drv,
#endif

#if defined(NT35582_RGB_6575)
	&nt35582_rgb_6575_lcm_drv,
#endif

#if defined(HX8369_RGB_6585_FPGA)
	&hx8369_rgb_6585_fpga_lcm_drv,
#endif

#if defined(HX8357B)
	&hx8357b_lcm_drv,
#endif

#if defined(R61408)
	&r61408_lcm_drv,
#endif

#if defined(HX8369_DSI_VDO)
	&hx8369_dsi_vdo_lcm_drv,
#endif

#if defined(HX8369_DSI)
	&hx8369_dsi_lcm_drv,
#endif

#if defined(HX8369_6575_DSI)
	&hx8369_dsi_6575_lcm_drv,
#endif

#if defined(HX8369_6575_DSI_NFC_ZTE)
	&hx8369_dsi_6575_lcm_drv,
#endif

#if defined(HX8369_6575_DSI_HVGA)
	&hx8369_dsi_6575_hvga_lcm_drv,
#endif

#if defined(HX8369_6575_DSI_QVGA)
	&hx8369_dsi_6575_qvga_lcm_drv,
#endif

#if defined(HX8369_HVGA)
	&hx8369_hvga_lcm_drv,
#endif

#if (defined(NT35510) || (defined(NT35510_HSD527_ZET)) || defined(NT35510_HSD50_XINCH))
	&nt35510_lcm_drv,
#endif

#if defined(NT35510_RGB_6575) 
	&nt35510_dpi_lcm_drv,
#endif	
	

#if defined(NT35510_HVGA)
	&nt35510_hvga_lcm_drv,
#endif

#if defined(NT35510_QVGA)
	&nt35510_qvga_lcm_drv,
#endif

#if defined(NT35510_6517)
	&nt35510_6517_lcm_drv,
#endif

#if defined(ILI9481)
	&ili9481_lcm_drv,
#endif

#if defined(NT35582)
	&nt35582_lcm_drv,
#endif

#if defined(S6D0170)
	&s6d0170_lcm_drv,
#endif

#if defined(SPFD5461A)
	&spfd5461a_lcm_drv,
#endif

#if defined(TA7601)
	&ta7601_lcm_drv,
#endif

#if defined(TFT1P3037)
	&tft1p3037_lcm_drv,
#endif

#if defined(HA5266)
	&ha5266_lcm_drv,
#endif

#if defined(HSD070IDW1)
	&hsd070idw1_lcm_drv,
#endif

#if defined(HX8363_6575_DSI)
	&hx8363_6575_dsi_lcm_drv,
#endif

#if defined(HX8363_6575_DSI_HVGA)
	&hx8363_6575_dsi_hvga_lcm_drv,
#endif

#if defined(LG4571)
	&lg4571_lcm_drv,
#endif

#if defined(LVDS_WSVGA)
	&lvds_wsvga_lcm_drv,
#endif

#if defined(LVDS_WSVGA_TI)
	&lvds_wsvga_ti_lcm_drv,
#endif

#if defined(LVDS_WSVGA_TI_N)
	&lvds_wsvga_ti_n_lcm_drv,
#endif

#if defined(NT35565_3D)
	&nt35565_3d_lcm_drv,
#endif

#if defined(TM070DDH03)
	&tm070ddh03_lcm_drv,
#endif
#if defined(R63303_IDISPLAY)
	&r63303_idisplay_lcm_drv,
#endif

#if defined(HX8369B_DSI_VDO)
	&hx8369b_dsi_vdo_lcm_drv,
#endif

#if defined(GN_SSD2825_SMD_S6E8AA)
	&gn_ssd2825_smd_s6e8aa,
#endif
#if defined(HX8369_TM_DSI)
	&hx8369_dsi_tm_lcm_drv,
#endif

#if defined(HX8369_BLD_DSI)
	&hx8369_dsi_bld_lcm_drv,
#endif

#if defined(HJ080IA)
	&hj080ia_lcm_drv,
#endif

#if defined(HJ101NA02A)
	&hj101na02a_lcm_drv,
#endif

#if defined(HSD070PFW3)
	&hsd070pfw3_lcm_drv,
#endif

#if defined(SCF0700M48GGU02)
	&scf0700m48ggu02_lcm_drv,
#endif

#if defined(OTM8018B_DSI_VDO)	
	&otm8018b_dsi_vdo_lcm_drv, 
#endif

#if defined(NT35512_DSI_VDO)
	&nt35512_dsi_vdo_lcm_drv, 
#endif

#if defined(HX8392A_DSI_CMD)
  &hx8392a_dsi_cmd_lcm_drv,
#endif 

#if defined(NT35516_QHD_DSI_CMD_IPSBOE)
  &nt35516_qhd_dsi_cmd_ipsboe_lcm_drv,
#endif

#if defined(NT35516_QHD_DSI_CMD_IPSBOE_WVGA)
  &nt35516_qhd_dsi_cmd_ipsboe_wvga_lcm_drv,
#endif

#if defined(NT35516_QHD_DSI_VEDIO)
  &nt35516_qhd_rav4_lcm_drv,
#endif

#if defined(BP070WS1)
  &bp070ws1_lcm_drv,
#endif

#if defined(BP101WX1)
  &bp101wx1_lcm_drv,
#endif

#if defined(BP101WX1_N)
  &bp101wx1_n_lcm_drv,
#endif

#if defined(NT35510_FWVGA)
  &nt35510_fwvga_lcm_drv,
#endif

#if defined(R63311_FHD_DSI_VDO_SHARP)
	&r63311_fhd_dsi_vdo_sharp_lcm_drv,
#endif

#if (defined(NT35596_FHD_DSI_VDO_TRULY) || defined(NT35596_HITACHI63_WANGLONG_HD) || defined(NT35596_AUO55_YASHI))
	&nt35596_fhd_dsi_vdo_truly_lcm_drv,
#endif
#if defined(OTM1281A_AUO_TRULY)
	&otm1281a_auo_lcm_drv,
#endif
#if defined(NT35596_AUO65_YKL_FHD)
	&nt35596_auo65_ykl_fhd_lcm_drv,
#endif
#if (defined(OTM1283_AUO_TRULY) || defined(OTM1283_CPT53_ZET) || defined(OTM1283_CMI55_YKL) || defined(OTM1283A_CPT57_LDL) || defined(OTM1283A_CPT57_WUYANG_HD))
	&otm1283_auo_lcm_drv,
#endif
#if defined(OTM1283_AUO57_YKL_HD)
	&otm1283_auo57_ykl_hd_lcm_drv,
#endif
#if (defined(NT35590_AUO47_TRULY) || defined(NT35590_AUO50_YKL) || defined(NT35590_AUO45_TRULY) || defined(NT35590_CMI50_SLS) || defined(NT35590_AUO50_LLONG))
	&nt35590_auo47_truly_lcm_drv,
#endif
#if (defined(NT35516_AUO53_YKL) || defined(NT35516_HSD50_HST))
	&nt35516_auo53_ykl_drv,
#endif
#if defined(HX8394_LINJU_CHUANMA)
	&hx8394_linju_lcm_drv,
#endif


#if defined(HX8394_GP53_HENGS_HD)
	&hx8394_gp53_hengs_hd_lcm_drv,
#endif
#if defined(HX8394_LG47_TRULY)
	&hx8394_lg47_truly_lcm_drv,
#endif
#if defined(HX8389B_QHD_DSI_VDO)
	&hx8389b_qhd_dsi_vdo_drv,
#endif
#if defined(LG4591_LG5_XINLI)
	&lg4591_lcm_drv,
#endif
#if defined(LG4591_LG_YKL)
	&lg4591_auo_lcm_drv,
#endif
#if defined(OTM9605A_AUO45_YKL)
	&otm9605a_dsi_lcm_drv,
#endif
#if defined(RM68190_AUO50_YKL)
	&rm68190_dsi_lcm_drv,
#endif
#if (defined(OTM8018B_HSD53_JQ) || defined(OTM8018B_HSD50_YKL))
	&otm8018b_dsi_lcm_drv,
#endif
#if defined(NT35512_HSD50_HST)
	&nt35512_dsi_lcm_drv,
#endif
#if (defined(OTM8009A_HSD53_JTAI) || defined(OTM8009A_HSD53_ZES))
	&otm8009a_dsi_lcm_drv,
#endif
#if defined(RM68180_BOE60_YKL)
    &rm68180_dsi_lcm_drv,
#endif

#if defined(S6TNMR1X01)
    &s6tnmr1x01_dsi_vdo_lcm_drv,
#endif
#if (defined(R63311_FHD_AUO57_YKL) || defined(R63311_FHD_AUO57_BYD))
    &r63311_fhd_dsi_lcm_drv,
#endif
#if defined(R63315_FHD_LG50_TRULY)
    &r63315_fhd_dsi_lcm_drv,
#endif

#if defined(OTM9608A_HSD50_GX_QHD)
    &otm9608a_dsi_lcm_drv,
#endif

};

#define LCM_COMPILE_ASSERT(condition) LCM_COMPILE_ASSERT_X(condition, __LINE__)
#define LCM_COMPILE_ASSERT_X(condition, line) LCM_COMPILE_ASSERT_XX(condition, line)
#define LCM_COMPILE_ASSERT_XX(condition, line) char assertion_failed_at_line_##line[(condition)?1:-1]

unsigned int lcm_count = sizeof(lcm_driver_list)/sizeof(LCM_DRIVER*);
//LCM_COMPILE_ASSERT(0 != sizeof(lcm_driver_list)/sizeof(LCM_DRIVER*));
