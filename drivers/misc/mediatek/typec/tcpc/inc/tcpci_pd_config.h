/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */

#ifndef __LINUX_TCPC_PD_CONFIG_H
#define __LINUX_TCPC_PD_CONFIG_H

/* Experimental for CodeSize */
#define CONFIG_USB_PD_DR_SWAP		1
#define CONFIG_USB_PD_PR_SWAP		1
#define CONFIG_USB_PD_VCONN_SWAP	1
#define CONFIG_USB_PD_PE_SINK		1
#define CONFIG_USB_PD_PE_SOURCE		1
#define CONFIG_USB_PD_DISABLE_PE	0

#define CONFIG_USB_PD_TCPM_CB_RETRY		3
#define CONFIG_USB_PD_TCPM_CB_2ND	1
#define CONFIG_USB_PD_BLOCK_TCPM	1

#define CONFIG_USB_PD_RICHTEK_UVDM	0

/**********************************************************
 * Mode Operation
 **********************************************************/

#define CONFIG_USB_PD_MODE_OPERATION	1

#if CONFIG_USB_PD_MODE_OPERATION

#define CONFIG_USB_PD_ATTEMPT_ENTER_MODE	1
#define CONFIG_USB_PD_ALT_MODE	1

#if CONFIG_USB_PD_ALT_MODE
#define CONFIG_USB_PD_ALT_MODE_DFP	1
/*#ifdef OPLUS_FEATURE_CHG_BASIC*/
/*#define CONFIG_USB_PD_ALT_MODE_RTDC	1*/
/*#else*/
#define CONFIG_USB_PD_ALT_MODE_RTDC	0
/*#endif*/
#else
#define CONFIG_USB_PD_ALT_MODE_DFP	0
#define CONFIG_USB_PD_ALT_MODE_RTDC	0
#endif	/* CONFIG_USB_PD_ALT_MODE */

#define CONFIG_USB_PD_DP_CHECK_CABLE	0
#define CONFIG_USB_PD_RTDC_CHECK_CABLE	0

#else /* no CONFIG_USB_PD_MODE_OPERATION */
#define CONFIG_USB_PD_ATTEMPT_ENTER_MODE	0
#define CONFIG_USB_PD_ALT_MODE	0
#define CONFIG_USB_PD_ALT_MODE_DFP	0
#define CONFIG_USB_PD_ALT_MODE_RTDC	0
#define CONFIG_USB_PD_DP_CHECK_CABLE	0
#define CONFIG_USB_PD_RTDC_CHECK_CABLE	0

#endif	/* CONFIG_USB_PD_MODE_OPERATION */

/**********************************************************
 * PD revision 3.0 feature
 **********************************************************/

#define CONFIG_USB_PD_REV30	1

#if CONFIG_USB_PD_REV30
#include "tcpci_pd30_config.h"
#else /* CONFIG_USB_PD_REV30 = 0 */
#define CONFIG_USB_PD_REV30_SYNC_SPEC_REV	0
#define CONFIG_USB_PD_REV30_COLLISION_AVOID	0
#define CONFIG_USB_PD_REV30_SRC_FLOW_DELAY_STARTUP	0
#define CONFIG_USB_PD_REV30_SNK_FLOW_DELAY_STARTUP	0
#define CONFIG_USB_PD_REV30_DISCOVER_CABLE_WITH_VCONN	0
#define CONFIG_USB_PD_REV30_SRC_CAP_EXT_LOCAL		0
#define CONFIG_USB_PD_REV30_SRC_CAP_EXT_REMOTE		0
#define CONFIG_USB_PD_REV30_BAT_CAP_LOCAL		0
#define CONFIG_USB_PD_REV30_BAT_CAP_REMOTE		0
#define CONFIG_USB_PD_REV30_BAT_STATUS_LOCAL	0
#define CONFIG_USB_PD_REV30_BAT_STATUS_REMOTE	0
#define CONFIG_USB_PD_REV30_MFRS_INFO_LOCAL	0
#define CONFIG_USB_PD_REV30_MFRS_INFO_REMOTE	0
#define CONFIG_USB_PD_REV30_COUNTRY_CODE_LOCAL	0
#define CONFIG_USB_PD_REV30_COUNTRY_CODE_REMOTE	0
#define CONFIG_USB_PD_REV30_COUNTRY_INFO_LOCAL	0
#define CONFIG_USB_PD_REV30_COUNTRY_INFO_REMOTE	0
#define CONFIG_USB_PD_REV30_ALERT_LOCAL		0
#define CONFIG_USB_PD_REV30_ALERT_REMOTE	0
#define CONFIG_USB_PD_REV30_STATUS_LOCAL	0
#define CONFIG_USB_PD_REV30_STATUS_REMOTE	0
#define CONFIG_USB_PD_REV30_CHUNKING_BY_PE	0
#define CONFIG_USB_PD_REV30_PPS_SINK		0
#define CONFIG_USB_PD_REV30_PPS_SOURCE		0
#define CONFIG_USB_PD_REV30_STATUS_LOCAL_TEMP	0
#define CONFIG_USB_PD_REV30_BAT_INFO	0
#define CONFIG_USB_PD_REV30_COUNTRY_AUTHORITY	0
#define CONFIG_USB_PD_DPM_AUTO_SEND_ALERT	0
#define CONFIG_USB_PD_DPM_AUTO_GET_STATUS	0
#define CONFIG_MTK_HANDLE_PPS_TIMEOUT	0
#endif	/* CONFIG_USB_PD_REV30 */

/**********************************************************
 * PD direct charge support
 **********************************************************/

#if CONFIG_USB_PD_ALT_MODE_RTDC
#define CONFIG_USB_PD_DIRECT_CHARGE	1
#else
#define CONFIG_USB_PD_DIRECT_CHARGE	0
#endif	/* CONFIG_USB_PD_ALT_MODE_RTDC */

#if CONFIG_USB_PD_REV30_PPS_SINK
#undef CONFIG_USB_PD_DIRECT_CHARGE
#define CONFIG_USB_PD_DIRECT_CHARGE	1
#endif	/* CONFIG_USB_PD_REV30_PPS_SINK */

#define CONFIG_USB_PD_KEEP_PARTNER_ID	1
#define CONFIG_USB_PD_KEEP_SVIDS	1
/*#ifdef OPLUS_FEATURE_CHG_BASIC*/
/*#define CONFIG_USB_PD_SRC_STARTUP_DISCOVER_ID	1
#define CONFIG_USB_PD_DFP_READY_DISCOVER_ID	1*/
/*#else*/
#define CONFIG_USB_PD_SRC_STARTUP_DISCOVER_ID	0
#define CONFIG_USB_PD_DFP_READY_DISCOVER_ID	0
/*#endif*/
#define CONFIG_USB_PD_RESET_CABLE		1

#define CONFIG_USB_PD_RANDOM_FLOW_DELAY		1

#define CONFIG_USB_PD_DFP_FLOW_DELAY		1
#define CONFIG_USB_PD_DFP_FLOW_DELAY_STARTUP	1
#define CONFIG_USB_PD_DFP_FLOW_DELAY_DRSWAP	1
#define CONFIG_USB_PD_DFP_FLOW_DELAY_RESET	1

#define CONFIG_USB_PD_DISCARD_AND_UNEXPECT_MSG	1

/* Only in startup */
/*#ifdef OPLUS_FEATURE_CHG_BASIC*/
/*#define CONFIG_USB_PD_UFP_FLOW_DELAY		1*/
/*#else*/
#define CONFIG_USB_PD_UFP_FLOW_DELAY		0
/*#endif*/

#define CONFIG_USB_PD_VCONN_STABLE_DELAY	1
#define CONFIG_USB_PD_VCONN_SAFE5V_ONLY		1

#define CONFIG_USB_PD_ATTEMPT_DISCOVER_ID	1
#define CONFIG_USB_PD_ATTEMPT_DISCOVER_SVID	1

#define CONFIG_USB_PD_DISCOVER_CABLE_REQUEST_VCONN	1
#define CONFIG_USB_PD_DISCOVER_CABLE_RETURN_VCONN	1

#define CONFIG_USB_PD_PR_SWAP_ERROR_RECOVERY		1

#define CONFIG_USB_PD_CUSTOM_VDM	1

#if CONFIG_USB_PD_CUSTOM_VDM
#define CONFIG_USB_PD_SVDM	1
#define CONFIG_USB_PD_UVDM	1
#else
#define CONFIG_USB_PD_SVDM	0
#define CONFIG_USB_PD_UVDM	0
#endif	/* CONFIG_USB_PD_CUSTOM_VDM */

#if CONFIG_TYPEC_CAP_DBGACC_SNK
#define CONFIG_USB_PD_CUSTOM_DBGACC	0
#else
#define CONFIG_USB_PD_CUSTOM_DBGACC	1
#endif	/* CONFIG_TYPEC_CAP_DBGACC_SNK */

/* S/W patch for ESD issue: repeat HReset Alert */
#define CONFIG_USB_PD_RECV_HRESET_COUNTER	0

/* S/W patch for NoGoodCRC if SNK_DFT */
#define CONFIG_USB_PD_SNK_DFT_NO_GOOD_CRC	1

/* S/W patch for NoGoodCRC after PR_SWAP (repeat PS_RDY) */
#define CONFIG_USB_PD_IGNORE_PS_RDY_AFTER_PR_SWAP	1

/* S/W patch for delayed ps_change related to PS_RDY during PR_SWAP */
#define CONFIG_USB_PD_VBUS_DETECTION_DURING_PR_SWAP	1

/*
 * S/W patch for INT handler was stuck by other task (system busy)
 *
 * If the communication fails due to a timeout,
 * check the rx buffer is empty or not.
 *
 * If the rx buffer isn't empty, postpone timer.
 */

#define CONFIG_USB_PD_CHECK_RX_PENDING_IF_SRTOUT	1
#define CONFIG_USB_PD_ONLY_PRINT_SYSTEM_BUSY		1

#define CONFIG_USB_PD_TRY_TIMEDELAY_IF_SRTOUT   3000
#define CONFIG_USB_PD_TRY_TIMEDELAY_MAX 10000

/*
 * S/W patch for
 * If the CC pin is shorted to ground and our receive ability is better,
 * then we may receive message however always send failed.
 *
 * For the source role, it becomes an infinite hard reset loop.
 * For the sink role, it becomes an infinite error recovery loop.
 *
 * RENEGOTIATION_COUNTER:
 *     Auto error recovery
 *     if retried hard reset many times still negotiation failed.
 *
 * ERROR_RECOVERY_ONCE:
 *     If we have tried an error recovery,
 *     using pure typec mode during next time we reconnect.
 *
 */

#define CONFIG_USB_PD_RENEGOTIATION_COUNTER	1
#define CONFIG_USB_PD_ERROR_RECOVERY_ONCE	1

#define CONFIG_USB_PD_IGNORE_HRESET_COMPLETE_TIMER	1
#define CONFIG_USB_PD_DROP_REPEAT_PING		1
#define CONFIG_USB_PD_CHECK_DATA_ROLE		1
#define CONFIG_USB_PD_RETRY_CRC_DISCARD		1
#define CONFIG_USB_PD_PARTNER_CTRL_MSG_FIRST	1

#define CONFIG_USB_PD_SNK_HRESET_KEEP_DRAW	1
#define CONFIG_USB_PD_SNK_IGNORE_HRESET_IF_TYPEC_ONLY	0
#define CONFIG_USB_PD_SNK_STANDBY_POWER		1
#define CONFIG_USB_PD_SNK_GOTOMIN		1

#define CONFIG_USB_PD_SRC_HIGHCAP_POWER			0
#define CONFIG_USB_PD_SRC_TRY_PR_SWAP_IF_BAD_PW		0
#define CONFIG_USB_PD_SRC_REJECT_PR_SWAP_IF_GOOD_PW	0

#define CONFIG_USB_PD_TRANSMIT_BIST2		1
#define CONFIG_USB_PD_POSTPONE_VDM		1
#define CONFIG_USB_PD_POSTPONE_RETRY_VDM	1
#define CONFIG_USB_PD_POSTPONE_FIRST_VDM	1
#define CONFIG_USB_PD_POSTPONE_OTHER_VDM	1
#define CONFIG_USB_PD_STOP_SEND_VDM_IF_RX_BUSY	0
#define CONFIG_USB_PD_STOP_REPLY_VDM_IF_RX_BUSY	1

#define CONFIG_USB_PD_SAFE0V_DELAY	0
#define CONFIG_USB_PD_SAFE0V_TIMEOUT	0

#ifndef CONFIG_USB_PD_DPM_SVDM_RETRY
#define CONFIG_USB_PD_DPM_SVDM_RETRY     2
#endif     /* CONFIG_USB_PD_DPM_SVDM_RETRY */

#ifndef CONFIG_USB_PD_DFP_FLOW_RETRY_MAX
#define CONFIG_USB_PD_DFP_FLOW_RETRY_MAX 2
#endif	/* CONFIG_USB_PD_DFP_FLOW_RETRY_MAX */

#ifndef CONFIG_USB_PD_VBUS_STABLE_TOUT
#define CONFIG_USB_PD_VBUS_STABLE_TOUT 125
#endif	/* CONFIG_USB_PD_VBUS_STABLE_TOUT */

#ifndef CONFIG_USB_PD_VBUS_PRESENT_TOUT
#define CONFIG_USB_PD_VBUS_PRESENT_TOUT	20
#endif	/* CONFIG_USB_PD_VBUS_PRESENT_TOUT */

#ifndef CONFIG_USB_PD_CUSTOM_VDM_TOUT
#define CONFIG_USB_PD_CUSTOM_VDM_TOUT	500
#endif	/* CONFIG_USB_PD_CUSTOM_VDM_TOUT */

#ifndef CONFIG_USB_PD_VCONN_READY_TOUT
#define CONFIG_USB_PD_VCONN_READY_TOUT		5
#endif	/* CONFIG_USB_PD_VCONN_READY_TOUT */

#ifndef CONFIG_USB_PD_DFP_FLOW_DLY
#define CONFIG_USB_PD_DFP_FLOW_DLY	30
#endif	/* CONFIG_USB_PD_DFP_FLOW_DLY */

#ifndef CONFIG_USB_PD_UFP_FLOW_DLY
#define CONFIG_USB_PD_UFP_FLOW_DLY			300
#endif	/* CONFIG_USB_PD_UFP_FLOW_DLY */

#ifndef CONFIG_USB_PD_PPS_REQUEST_INTERVAL
#define CONFIG_USB_PD_PPS_REQUEST_INTERVAL	7000
#endif	/* CONFIG_USB_PD_PPS_REQUEST_INTERVAL */

#define CONFIG_USB_PD_WAIT_BC12		0

#endif /* __LINUX_TCPC_PD_CONFIG_H */
