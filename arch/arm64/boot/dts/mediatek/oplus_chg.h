//ifdef OPLUS_FEATURE_CHG_BASIC

#define OPLUS_CHG_IC_BUCK		0x00
#define OPLUS_CHG_IC_BOOST		0x01
#define OPLUS_CHG_IC_BUCK_BOOST		0x02
#define OPLUS_CHG_IC_CP_DIV2		0x03
#define OPLUS_CHG_IC_CP_MUL2		0x04
#define OPLUS_CHG_IC_CP_TW2		0x05
#define OPLUS_CHG_IC_RX			0x06
#define OPLUS_CHG_IC_VIRTUAL_RX		0x07
#define OPLUS_CHG_IC_VIRTUAL_BUCK	0x08
#define OPLUS_CHG_IC_VIRTUAL_CP		0x09
#define OPLUS_CHG_IC_VIRTUAL_USB	0x0a
#define OPLUS_CHG_IC_TYPEC		0x0b
#define OPLUS_CHG_IC_GAUGE		0x0c
#define OPLUS_CHG_IC_VIRTUAL_GAUGE	0x0d
#define OPLUS_CHG_IC_ASIC		0x0e
#define OPLUS_CHG_IC_VIRTUAL_ASIC	0x0f

#define VOOC_VERSION_DEFAULT		0x0
#define VOOC_VERSION_1_0		0x1
#define VOOC_VERSION_2_0		0x2
#define VOOC_VERSION_3_0		0x3
#define VOOC_VERSION_4_0		0x4
#define VOOC_VERSION_5_0		0x5 /* optimize into fastchging time */

#define CURR_LIMIT_VOOC_3_6A_SVOOC_2_5A	0x01
#define CURR_LIMIT_VOOC_2_5A_SVOOC_2_0A	0x02
#define CURR_LIMIT_VOOC_3_0A_SVOOC_3_0A	0x03
#define CURR_LIMIT_VOOC_4_0A_SVOOC_4_0A	0x04
#define CURR_LIMIT_VOOC_5_0A_SVOOC_5_0A	0x05
#define CURR_LIMIT_VOOC_6_0A_SVOOC_6_5A	0x06

#define CURR_LIMIT_7BIT_1_0A		0x01
#define CURR_LIMIT_7BIT_1_5A		0x02
#define CURR_LIMIT_7BIT_2_0A		0x03
#define CURR_LIMIT_7BIT_2_5A		0x04
#define CURR_LIMIT_7BIT_3_0A		0x05
#define CURR_LIMIT_7BIT_3_5A		0x06
#define CURR_LIMIT_7BIT_4_0A		0x07
#define CURR_LIMIT_7BIT_4_5A		0x08
#define CURR_LIMIT_7BIT_5_0A		0x09
#define CURR_LIMIT_7BIT_5_5A		0x0a
#define CURR_LIMIT_7BIT_6_0A		0x0b
#define CURR_LIMIT_7BIT_6_3A		0x0c
#define CURR_LIMIT_7BIT_6_5A		0x0d
#define CURR_LIMIT_7BIT_7_0A		0x0e
#define CURR_LIMIT_7BIT_7_5A		0x0f
#define CURR_LIMIT_7BIT_8_0A		0x10
#define CURR_LIMIT_7BIT_8_5A		0x11
#define CURR_LIMIT_7BIT_9_0A		0x12
#define CURR_LIMIT_7BIT_9_5A		0x13
#define CURR_LIMIT_7BIT_10_0A		0x14
#define CURR_LIMIT_7BIT_10_5A		0x15
#define CURR_LIMIT_7BIT_11_0A		0x16
#define CURR_LIMIT_7BIT_11_5A		0x17
#define CURR_LIMIT_7BIT_12_0A		0x18
#define CURR_LIMIT_7BIT_12_5A		0x19

/* VADC scale function index */
#define OPLUS_ADC_SCALE_DEFAULT			0x0
#define OPLUS_ADC_SCALE_THERM_100K_PULLUP		0x1
#define OPLUS_ADC_SCALE_PMIC_THERM			0x2
#define OPLUS_ADC_SCALE_XOTHERM			0x3
#define OPLUS_ADC_SCALE_PMI_CHG_TEMP			0x4
#define OPLUS_ADC_SCALE_HW_CALIB_DEFAULT		0x5
#define OPLUS_ADC_SCALE_HW_CALIB_THERM_100K_PULLUP	0x6
#define OPLUS_ADC_SCALE_HW_CALIB_XOTHERM		0x7
#define OPLUS_ADC_SCALE_HW_CALIB_PMIC_THERM		0x8
#define OPLUS_ADC_SCALE_HW_CALIB_CUR			0x9
#define OPLUS_ADC_SCALE_HW_CALIB_PM5_CHG_TEMP		0xA
#define OPLUS_ADC_SCALE_HW_CALIB_PM5_SMB_TEMP		0xB
#define OPLUS_ADC_SCALE_HW_CALIB_BATT_THERM_100K	0xC
#define OPLUS_ADC_SCALE_HW_CALIB_BATT_THERM_30K		0xD
#define OPLUS_ADC_SCALE_HW_CALIB_BATT_THERM_400K	0xE
#define OPLUS_ADC_SCALE_HW_CALIB_PM5_SMB1398_TEMP	0xF

#define OPLUS_CHG_IC_CONNECT_PARALLEL	0
#define OPLUS_CHG_IC_CONNECT_SERIAL	1

#define OPLUS_IC_FUNC_NUM_COMMON_START			0
#define OPLUS_IC_FUNC_EXIT				(OPLUS_IC_FUNC_NUM_COMMON_START + 0)
#define OPLUS_IC_FUNC_INIT				(OPLUS_IC_FUNC_NUM_COMMON_START + 1)
#define OPLUS_IC_FUNC_REG_DUMP				(OPLUS_IC_FUNC_NUM_COMMON_START + 2)
#define OPLUS_IC_FUNC_SMT_TEST				(OPLUS_IC_FUNC_NUM_COMMON_START + 3)
#define OPLUS_IC_FUNC_CHIP_ENABLE			(OPLUS_IC_FUNC_NUM_COMMON_START + 4)
#define OPLUS_IC_FUNC_CHIP_IS_ENABLE			(OPLUS_IC_FUNC_NUM_COMMON_START + 5)

/* wireless rx */
#define OPLUS_IC_FUNC_NUM_RX_START			100
#define OPLUS_IC_FUNC_RX_IS_CONNECTED			(OPLUS_IC_FUNC_NUM_RX_START + 0)
#define OPLUS_IC_FUNC_RX_GET_VOUT			(OPLUS_IC_FUNC_NUM_RX_START + 1)
#define OPLUS_IC_FUNC_RX_SET_VOUT			(OPLUS_IC_FUNC_NUM_RX_START + 2)
#define OPLUS_IC_FUNC_RX_GET_VRECT			(OPLUS_IC_FUNC_NUM_RX_START + 3)
#define OPLUS_IC_FUNC_RX_GET_IOUT			(OPLUS_IC_FUNC_NUM_RX_START + 4)
#define OPLUS_IC_FUNC_RX_GET_TRX_VOL			(OPLUS_IC_FUNC_NUM_RX_START + 5)
#define OPLUS_IC_FUNC_RX_GET_TRX_CURR			(OPLUS_IC_FUNC_NUM_RX_START + 6)
#define OPLUS_IC_FUNC_RX_GET_CEP_COUNT			(OPLUS_IC_FUNC_NUM_RX_START + 7)
#define OPLUS_IC_FUNC_RX_GET_CEP_VAL			(OPLUS_IC_FUNC_NUM_RX_START + 8)
#define OPLUS_IC_FUNC_RX_GET_WORK_FREQ			(OPLUS_IC_FUNC_NUM_RX_START + 9)
#define OPLUS_IC_FUNC_RX_GET_RX_MODE			(OPLUS_IC_FUNC_NUM_RX_START + 10)
#define OPLUS_IC_FUNC_RX_SET_DCDC_ENABLE		(OPLUS_IC_FUNC_NUM_RX_START + 11)
#define OPLUS_IC_FUNC_RX_SET_TRX_ENABLE			(OPLUS_IC_FUNC_NUM_RX_START + 12)
#define OPLUS_IC_FUNC_RX_GET_TRX_STATUS			(OPLUS_IC_FUNC_NUM_RX_START + 13)
#define OPLUS_IC_FUNC_RX_GET_TRX_ERR			(OPLUS_IC_FUNC_NUM_RX_START + 14)
#define OPLUS_IC_FUNC_RX_GET_HEADROOM			(OPLUS_IC_FUNC_NUM_RX_START + 15)
#define OPLUS_IC_FUNC_RX_SET_HEADROOM			(OPLUS_IC_FUNC_NUM_RX_START + 16)
#define OPLUS_IC_FUNC_RX_SEND_MATCH_Q			(OPLUS_IC_FUNC_NUM_RX_START + 17)
#define OPLUS_IC_FUNC_RX_SET_FOD_PARM			(OPLUS_IC_FUNC_NUM_RX_START + 18)
#define OPLUS_IC_FUNC_RX_SEND_MSG			(OPLUS_IC_FUNC_NUM_RX_START + 19)
#define OPLUS_IC_FUNC_RX_REG_MSG_CALLBACK		(OPLUS_IC_FUNC_NUM_RX_START + 20)
#define OPLUS_IC_FUNC_RX_GET_FW_VERSION_BY_BUF		(OPLUS_IC_FUNC_NUM_RX_START + 21)
#define OPLUS_IC_FUNC_RX_GET_FW_VERSION_BY_CHIP		(OPLUS_IC_FUNC_NUM_RX_START + 22)
#define OPLUS_IC_FUNC_RX_UPGRADE_FW_BY_BUF		(OPLUS_IC_FUNC_NUM_RX_START + 23)
#define OPLUS_IC_FUNC_RX_UPGRADE_FW_BY_IMG		(OPLUS_IC_FUNC_NUM_RX_START + 24)
#define OPLUS_IC_FUNC_RX_CHECK_CONNECT			(OPLUS_IC_FUNC_NUM_RX_START + 25)

/* buck/boost */
#define OPLUS_IC_FUNC_NUM_BUCK_START			200
#define OPLUS_IC_FUNC_BUCK_INPUT_PRESENT		(OPLUS_IC_FUNC_NUM_BUCK_START + 0)
#define OPLUS_IC_FUNC_BUCK_INPUT_SUSPEND		(OPLUS_IC_FUNC_NUM_BUCK_START + 1)
#define OPLUS_IC_FUNC_BUCK_INPUT_IS_SUSPEND		(OPLUS_IC_FUNC_NUM_BUCK_START + 2)
#define OPLUS_IC_FUNC_BUCK_OUTPUT_SUSPEND		(OPLUS_IC_FUNC_NUM_BUCK_START + 3)
#define OPLUS_IC_FUNC_BUCK_OUTPUT_IS_SUSPEND		(OPLUS_IC_FUNC_NUM_BUCK_START + 4)
#define OPLUS_IC_FUNC_BUCK_SET_ICL			(OPLUS_IC_FUNC_NUM_BUCK_START + 5)
#define OPLUS_IC_FUNC_BUCK_GET_ICL			(OPLUS_IC_FUNC_NUM_BUCK_START + 6)
#define OPLUS_IC_FUNC_BUCK_SET_FCC			(OPLUS_IC_FUNC_NUM_BUCK_START + 7)
#define OPLUS_IC_FUNC_BUCK_SET_FV			(OPLUS_IC_FUNC_NUM_BUCK_START + 8)
#define OPLUS_IC_FUNC_BUCK_SET_ITERM			(OPLUS_IC_FUNC_NUM_BUCK_START + 9)
#define OPLUS_IC_FUNC_BUCK_SET_RECHG_VOL		(OPLUS_IC_FUNC_NUM_BUCK_START + 10)
#define OPLUS_IC_FUNC_BUCK_GET_INPUT_CURR		(OPLUS_IC_FUNC_NUM_BUCK_START + 11)
#define OPLUS_IC_FUNC_BUCK_GET_INPUT_VOL		(OPLUS_IC_FUNC_NUM_BUCK_START + 12)
#define OPLUS_IC_FUNC_BUCK_AICL_ENABLE			(OPLUS_IC_FUNC_NUM_BUCK_START + 13)
#define OPLUS_IC_FUNC_BUCK_AICL_RERUN			(OPLUS_IC_FUNC_NUM_BUCK_START + 14)
#define OPLUS_IC_FUNC_BUCK_AICL_RESET			(OPLUS_IC_FUNC_NUM_BUCK_START + 15)
#define OPLUS_IC_FUNC_BUCK_GET_CC_ORIENTATION		(OPLUS_IC_FUNC_NUM_BUCK_START + 16)
#define OPLUS_IC_FUNC_BUCK_GET_HW_DETECT		(OPLUS_IC_FUNC_NUM_BUCK_START + 17)
#define OPLUS_IC_FUNC_BUCK_GET_CHARGER_TYPE		(OPLUS_IC_FUNC_NUM_BUCK_START + 18)
#define OPLUS_IC_FUNC_BUCK_RERUN_BC12			(OPLUS_IC_FUNC_NUM_BUCK_START + 19)
#define OPLUS_IC_FUNC_BUCK_QC_DETECT_ENABLE		(OPLUS_IC_FUNC_NUM_BUCK_START + 20)
#define OPLUS_IC_FUNC_BUCK_SHIPMODE_ENABLE		(OPLUS_IC_FUNC_NUM_BUCK_START + 21)
#define OPLUS_IC_FUNC_BUCK_SET_QC_CONFIG		(OPLUS_IC_FUNC_NUM_BUCK_START + 22)
#define OPLUS_IC_FUNC_BUCK_SET_PD_CONFIG		(OPLUS_IC_FUNC_NUM_BUCK_START + 23)
#define OPLUS_IC_FUNC_BUCK_GET_VBUS_COLLAPSE_STATUS	(OPLUS_IC_FUNC_NUM_BUCK_START + 24)
#define OPLUS_IC_FUNC_BUCK_CURR_DROP			(OPLUS_IC_FUNC_NUM_BUCK_START + 25)
#define OPLUS_IC_FUNC_BUCK_WDT_ENABLE			(OPLUS_IC_FUNC_NUM_BUCK_START + 26)
#define OPLUS_IC_FUNC_BUCK_KICK_WDT			(OPLUS_IC_FUNC_NUM_BUCK_START + 27)
#define OPLUS_IC_FUNC_BUCK_BC12_COMPLETED		(OPLUS_IC_FUNC_NUM_BUCK_START + 28)
#define OPLUS_IC_FUNC_BUCK_SET_AICL_POINT		(OPLUS_IC_FUNC_NUM_BUCK_START + 29)
#define OPLUS_IC_FUNC_BUCK_SET_VINDPM			(OPLUS_IC_FUNC_NUM_BUCK_START + 30)
#define OPLUS_IC_FUNC_BUCK_HARDWARE_INIT		(OPLUS_IC_FUNC_NUM_BUCK_START + 31)

/* charge pump */
#define OPLUS_IC_FUNC_NUM_CP_START			300
#define OPLUS_IC_FUNC_CP_START				(OPLUS_IC_FUNC_NUM_CP_START + 0)

/* gauge */
#define OPLUS_IC_FUNC_NUM_GAUGE_START			400
#define OPLUS_IC_FUNC_GAUGE_UPDATE			(OPLUS_IC_FUNC_NUM_GAUGE_START + 0)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_VOL		(OPLUS_IC_FUNC_NUM_GAUGE_START + 1)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_MAX		(OPLUS_IC_FUNC_NUM_GAUGE_START + 2)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_MIN		(OPLUS_IC_FUNC_NUM_GAUGE_START + 3)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_CURR		(OPLUS_IC_FUNC_NUM_GAUGE_START + 4)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_TEMP		(OPLUS_IC_FUNC_NUM_GAUGE_START + 5)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_SOC		(OPLUS_IC_FUNC_NUM_GAUGE_START + 6)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_FCC		(OPLUS_IC_FUNC_NUM_GAUGE_START + 7)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_CC			(OPLUS_IC_FUNC_NUM_GAUGE_START + 8)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_RM			(OPLUS_IC_FUNC_NUM_GAUGE_START + 9)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_SOH		(OPLUS_IC_FUNC_NUM_GAUGE_START + 10)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_AUTH		(OPLUS_IC_FUNC_NUM_GAUGE_START + 11)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_HMAC		(OPLUS_IC_FUNC_NUM_GAUGE_START + 12)
#define OPLUS_IC_FUNC_GAUGE_SET_BATT_FULL		(OPLUS_IC_FUNC_NUM_GAUGE_START + 13)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_FC			(OPLUS_IC_FUNC_NUM_GAUGE_START + 14)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_QM			(OPLUS_IC_FUNC_NUM_GAUGE_START + 15)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_PD			(OPLUS_IC_FUNC_NUM_GAUGE_START + 16)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_RCU		(OPLUS_IC_FUNC_NUM_GAUGE_START + 17)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_RCF		(OPLUS_IC_FUNC_NUM_GAUGE_START + 18)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_FCU		(OPLUS_IC_FUNC_NUM_GAUGE_START + 19)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_FCF		(OPLUS_IC_FUNC_NUM_GAUGE_START + 20)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_SOU		(OPLUS_IC_FUNC_NUM_GAUGE_START + 21)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_DO0		(OPLUS_IC_FUNC_NUM_GAUGE_START + 22)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_DOE		(OPLUS_IC_FUNC_NUM_GAUGE_START + 23)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_TRM		(OPLUS_IC_FUNC_NUM_GAUGE_START + 24)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_PC			(OPLUS_IC_FUNC_NUM_GAUGE_START + 25)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_QS			(OPLUS_IC_FUNC_NUM_GAUGE_START + 26)
#define OPLUS_IC_FUNC_GAUGE_UPDATE_DOD0			(OPLUS_IC_FUNC_NUM_GAUGE_START + 27)
#define OPLUS_IC_FUNC_GAUGE_UPDATE_SOC_SMOOTH		(OPLUS_IC_FUNC_NUM_GAUGE_START + 28)
#define OPLUS_IC_FUNC_GAUGE_GET_CB_STATUS		(OPLUS_IC_FUNC_NUM_GAUGE_START + 29)
#define OPLUS_IC_FUNC_GAUGE_GET_PASSEDCHG		(OPLUS_IC_FUNC_NUM_GAUGE_START + 30)
#define OPLUS_IC_FUNC_GAUGE_SET_LOCK			(OPLUS_IC_FUNC_NUM_GAUGE_START + 31)
#define OPLUS_IC_FUNC_GAUGE_IS_LOCKED			(OPLUS_IC_FUNC_NUM_GAUGE_START + 32)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_NUM		(OPLUS_IC_FUNC_NUM_GAUGE_START + 33)
#define OPLUS_IC_FUNC_GAUGE_GET_DEVICE_TYPE		(OPLUS_IC_FUNC_NUM_GAUGE_START + 34)
#define OPLUS_IC_FUNC_GAUGE_GET_DEVICE_TYPE_FOR_VOOC	(OPLUS_IC_FUNC_NUM_GAUGE_START + 35)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_EXIST		(OPLUS_IC_FUNC_NUM_GAUGE_START + 36)
#define OPLUS_IC_FUNC_GAUGE_GET_BATT_CAP		(OPLUS_IC_FUNC_NUM_GAUGE_START + 37)
#define OPLUS_IC_FUNC_GAUGE_IS_SUSPEND			(OPLUS_IC_FUNC_NUM_GAUGE_START + 38)
#define OPLUS_IC_FUNC_GAUGE_GET_BCC_PARMS		(OPLUS_IC_FUNC_NUM_GAUGE_START + 39)
#define OPLUS_IC_FUNC_GAUGE_FASTCHG_UPDATE_BCC_PARMS	(OPLUS_IC_FUNC_NUM_GAUGE_START + 40)
#define OPLUS_IC_FUNC_GAUGE_GET_PREV_BCC_PARMS		(OPLUS_IC_FUNC_NUM_GAUGE_START + 41)
#define OPLUS_IC_FUNC_GAUGE_SET_BCC_PARMS		(OPLUS_IC_FUNC_NUM_GAUGE_START + 42)
#define OPLUS_IC_FUNC_GAUGE_SET_PROTECT_CHECK		(OPLUS_IC_FUNC_NUM_GAUGE_START + 43)
#define OPLUS_IC_FUNC_GAUGE_GET_AFI_UPDATE_DONE		(OPLUS_IC_FUNC_NUM_GAUGE_START + 44)

/* misc */
#define OPLUS_IC_FUNC_NUM_MISC_START			500
#define OPLUS_IC_FUNC_GET_CHARGER_CYCLE			(OPLUS_IC_FUNC_NUM_MISC_START + 0)
#define OPLUS_IC_FUNC_OTG_BOOST_ENABLE			(OPLUS_IC_FUNC_NUM_MISC_START + 1)
#define OPLUS_IC_FUNC_SET_OTG_BOOST_VOL			(OPLUS_IC_FUNC_NUM_MISC_START + 2)
#define OPLUS_IC_FUNC_SET_OTG_BOOST_CURR_LIMIT		(OPLUS_IC_FUNC_NUM_MISC_START + 3)
#define OPLUS_IC_FUNC_WLS_BOOST_ENABLE			(OPLUS_IC_FUNC_NUM_MISC_START + 4)
#define OPLUS_IC_FUNC_SET_WLS_BOOST_VOL			(OPLUS_IC_FUNC_NUM_MISC_START + 5)
#define OPLUS_IC_FUNC_SET_WLS_BOOST_CURR_LIMIT		(OPLUS_IC_FUNC_NUM_MISC_START + 6)
#define OPLUS_IC_FUNC_GET_SHUTDOWN_SOC			(OPLUS_IC_FUNC_NUM_MISC_START + 7)
#define OPLUS_IC_FUNC_BACKUP_SOC			(OPLUS_IC_FUNC_NUM_MISC_START + 8)
#define OPLUS_IC_FUNC_GET_USB_TEMP			(OPLUS_IC_FUNC_NUM_MISC_START + 9)
#define OPLUS_IC_FUNC_GET_USB_TEMP_VOLT			(OPLUS_IC_FUNC_NUM_MISC_START + 10)
#define OPLUS_IC_FUNC_USB_TEMP_CHECK_IS_SUPPORT		(OPLUS_IC_FUNC_NUM_MISC_START + 11)
#define OPLUS_IC_FUNC_GET_TYPEC_MODE			(OPLUS_IC_FUNC_NUM_MISC_START + 12)
#define OPLUS_IC_FUNC_SET_TYPEC_MODE			(OPLUS_IC_FUNC_NUM_MISC_START + 13)
#define OPLUS_IC_FUNC_SET_USB_DISCHG_ENABLE		(OPLUS_IC_FUNC_NUM_MISC_START + 14)
#define OPLUS_IC_FUNC_GET_USB_DISCHG_STATUS		(OPLUS_IC_FUNC_NUM_MISC_START + 15)
#define OPLUS_IC_FUNC_SET_OTG_SWITCH_STATUS		(OPLUS_IC_FUNC_NUM_MISC_START + 16)
#define OPLUS_IC_FUNC_GET_OTG_SWITCH_STATUS		(OPLUS_IC_FUNC_NUM_MISC_START + 17)
#define OPLUS_IC_FUNC_GET_OTG_ONLINE_STATUS		(OPLUS_IC_FUNC_NUM_MISC_START + 18)
#define OPLUS_IC_FUNC_CC_DETECT_HAPPENED		(OPLUS_IC_FUNC_NUM_MISC_START + 19)
#define OPLUS_IC_FUNC_GET_OTG_ENABLE			(OPLUS_IC_FUNC_NUM_MISC_START + 20)
#define OPLUS_IC_FUNC_GET_CHARGER_VOL_MAX		(OPLUS_IC_FUNC_NUM_MISC_START + 21)
#define OPLUS_IC_FUNC_GET_CHARGER_VOL_MIN		(OPLUS_IC_FUNC_NUM_MISC_START + 22)
#define OPLUS_IC_FUNC_GET_CHARGER_CURR_MAX		(OPLUS_IC_FUNC_NUM_MISC_START + 23)
#define OPLUS_IC_FUNC_DISABLE_VBUS			(OPLUS_IC_FUNC_NUM_MISC_START + 24)
#define OPLUS_IC_FUNC_IS_OPLUS_SVID			(OPLUS_IC_FUNC_NUM_MISC_START + 25)
#define OPLUS_IC_FUNC_GET_DATA_ROLE			(OPLUS_IC_FUNC_NUM_MISC_START + 26)

/* voocphy */
#define OPLUS_IC_FUNC_NUM_VOOCPHY_START			600
#define OPLUS_IC_FUNC_VOOCPHY_ENABLE			(OPLUS_IC_FUNC_NUM_VOOCPHY_START + 0)
#define OPLUS_IC_FUNC_VOOCPHY_RESET_AGAIN		(OPLUS_IC_FUNC_NUM_VOOCPHY_START + 1)
#define OPLUS_IC_FUNC_VOOCPHY_SET_CURR_LEVEL		(OPLUS_IC_FUNC_NUM_VOOCPHY_START + 2)
#define OPLUS_IC_FUNC_VOOCPHY_SET_MATCH_TEMP		(OPLUS_IC_FUNC_NUM_VOOCPHY_START + 3)

/* virq ID */
#define OPLUS_IC_VIRQ_ERR			0
#define OPLUS_IC_VIRQ_CC_DETECT			1
#define OPLUS_IC_VIRQ_PLUGIN			2
#define OPLUS_IC_VIRQ_CC_CHANGED		3
#define OPLUS_IC_VIRQ_VOOC_DATA			4
#define OPLUS_IC_VIRQ_SUSPEND_CHECK		5
#define OPLUS_IC_VIRQ_CHG_TYPE_CHANGE		6
#define OPLUS_IC_VIRQ_OFFLINE			7
#define OPLUS_IC_VIRQ_RESUME			8
#define OPLUS_IC_VIRQ_SVID			9
#define OPLUS_IC_VIRQ_OTG_ENABLE		10
#define OPLUS_IC_VIRQ_VOLTAGE_CHANGED		11
#define OPLUS_IC_VIRQ_CURRENT_CHANGED		12
#define OPLUS_IC_VIRQ_BC12_COMPLETED		13
#define OPLUS_IC_VIRQ_DATA_ROLE_CHANGED		14
#define OPLUS_IC_VIRQ_ONLINE			15

/* strategy */
#define OPLUS_STRATEGY_USE_BATT_TEMP		0
#define OPLUS_STRATEGY_USE_SHELL_TEMP		1

//endif OPLUS_FEATURE_CHG_BASIC
