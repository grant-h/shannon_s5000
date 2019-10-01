Line 153: initialize stored RRC message(num:%d)
Line 190: StoredRrcMsgNum:%d)
Line 197: RRM already sent Forced Wakeup and wait L1 response
Line 203: RRM set DL Freq and Wait Response
Line 210: Execute StoredRrcMsg(%d)(idx:%d, RamainingNum:%d)
Line 229: Stored RRC message(idx:%d, RamainingNum:%d) is NULL
Line 255: StoreRrcMsg - stored max num RRC msg
Line 262: StoreRrcMsg1(%d)(inpos:%d->%d, Num:%d->%d)
Line 287: Received DSDS Pause/Resume ind from RRC(%d) in RRM %s State
Line 317: Received new RRC message(%d)(num:%d)
Line 325: Received Pause_Ind/Resume_Ind(%d)
Line 331: Received LTE_CPHY_SCELL_MBSFN_GRANT_REQ in Power down state. Wait for resume operation. No need to store this message
Line 345: Received the stored RRC message(current:%d)
Line 351: Received RRC message(%d) during serving cell return
Line 361: There is no stored RRC message(%d)
Line 372: RRC request SUSPEND or MODEM_STOP to RRM in power down, %s State, Msg(0x%x)
Line 377: Modem resume is not needed for req_id(%d)
Line 390: No resume for LTERRC_RRM_INIT_IND in %s State
Line 395: abnormal State(%s) for LTERRC_RRM_INIT_IND
Line 409: No resume for req_id(%d)
Line 415: No resume for LTE_FPLMN_SCAN_IRAT
Line 419: No resume for LTE_CPHY_UPDATE_SUPPORTED_BAND_LIST_REQ
Line 426: No resume for LTERRC_RRM_SIGNALLING_IND in %s State
Line 430: No resume for LTERRC_RRM_DSDS_PAUSE/RESUME_IND in %s State
Line 436: Ignore for LTE_CPHY_TIME_AIDING_REQ in %s State
Line 442: Ignore for LTE_CPHY_VOLTE_STATUS_NTF in %s State
Line 449: RRC sent some MSG without RESUME or MODEM_START in LTERRM_SUSPEND_STATE, save LteRrm_ProcRrcMsg(0x%x)
Line 460: remove LTE_CPHY_POWER_DOWN_DRX_REQ in %s State
Line 469: No resume for LTERRC_RRM_SIGNALLING_IND in %s State
Line 473: No resume for LTERRC_RRM_DSDS_PAUSE/RESUME_IND in %s State
Line 479: Ignore for LTE_CPHY_TIME_AIDING_REQ in %s State
Line 485: Ignore for LTE_CPHY_VOLTE_STATUS_NTF in %s State
Line 492: %s State, save RrcMsg(0x%x)
Line 507: power down - %s State, save RrcMsg(0x%x)
Line 515: No resume for LTERRC_RRM_SIGNALLING_IND in power down State
Line 519: No resume for LTERRC_RRM_DSDS_PAUSE/RESUME_IND in power down state
Line 523: no resume for LTERRC_RRM_IDLE_STATE_IND in power down state
Line 530: Received LTE_CPHY_SCELL_MBSFN_GRANT_REQ in Power down state. Wait for resume operation. No need to store this message
Line 536: power down state, save RrcMsg(0x%x)
Line 541: RRM already sent Forced Wakeup Request (not trigger to send)
Line 580: RRM received NULL RRC message
Line 592: [RRC => RRM][%s] ST(%d), Msg(%d)
Line 1007: Illegal Modem Access on POWER OFF[%d]
Line 1050: [L1RX => RRM][%s] ST(%d), Msg(%d)
Line 1059: Illegal Modem Access on POWER OFF[%d]
Line 1115: [L1LC => RRM][%s] ST(%d), Msg(%d)
Line 1141: Ignore L1LC_RRM_SEARCH_CNF (bIgnoreL1LCMsgBeforeAllStopCnf = %d)
Line 1154: Ignore L1LC_RRM_MEASURE_CNF (bIgnoreL1LCMsgBeforeAllStopCnf = %d)
Line 1169: Ignore L1LC_RRM_PBCH_DECODE_CNF (AllStopCnf:%d, Enable:%d)
Line 1202: Ignore L1LC_RRM_MEAS_SCHEDULE_IND in %s State
Line 1211: Ignore L1LC_RRM_MEAS_SCHEDULE_IND in %s State
Line 1472: LteRrm Timer expiry (TmrId:%d)
Line 1477: LTERRM_SI_UPDATE_TIMER expiry
Line 1481: LTERRM_CR_MAX_TIMER expiry
Line 1485: LTERRM_CR_MAX_HYST_TIMER expiry
Line 1489: LTERRM_UNSUITABLE_TIMER expiry
Line 1493: LTERRM_CELLBARRED_TIMER expiry
Line 1497: LTERRM_FREQBARRED_TIMER expiry
Line 1501: LTERRM_T320_TIMER expiry
Line 1505: LTERRM_T325_TIMER expiry
Line 1509: LTERRM_DRX_SPARE_TIMER expiry
Line 1513: LTERRM_MTM_DELAY_TIMER expiry
Line 1517: LTERRM_REPORT_UPDATE_TIMER expiry
Line 1521: LTERRM_CONN_DRX_MEAS_CONF_TIMER expiry
Line 1525: LTERRM_DRX_HOLD_TIMER expiry
Line 1529: LTERRM_LPP_ECID_MEAS_TIMER expiry
Line 1533: LTERRM_LPP_OTDOA_MEAS_TIMER expiry
Line 1537: LTERRM_MOB_HIST_REP_MAX_TIMER expiry
Line 1541: LTERRM_TEMP_Q_OFFSET_TIMER expiry
Line 1545: LTERRM_CONN_DRX_DISABLE_TIMER expiry
Line 1549: LTERRM_CSFB_UTRA_MEAS_TIMER expiry
Line 1553: Unexpected TmrId(%d)
Line 1681: Wrong stack id(%d)
Line 1686: [RRM => RRC][%s] ST(%d), Msg(%d)
Line 1753: [RRM => RRC with SYNC][%s] ST(%d), Msg(%d)
Line 2135: [RRM => L1LC][%s] ST(%d), Msg(%d)
Line 2339: LteRrm Timer called!
