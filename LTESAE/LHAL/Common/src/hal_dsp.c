Line 478: [DSP] Modem Status: %d  RF available: %d, SKIP IPC_ACTION_ID_SI_UPDATE 
Line 529: [DSP] IPC_ACTION_ID_SI_UPDATE: cell_group[MCG], mode(%d)
Line 579: [DSP] Modem Status: % d	RF available: %d
Line 584: [DSP] command PENDING:[%d]IPC_ACTION_ID_UL_BW
Line 588: [DSP] command PENDING Q FULL!!:[%d]IPC_ACTION_ID_UL_BW
Line 613: [DSP] IPC_ACTION_ID_UL_BW: cell_group(%d), cc(%d), bw(%d), cp_type(%d)
Line 692: [DSP] Modem Status: % d  RF available: %d
Line 697: [DSP] command PENDING:[%d]IPC_ACTION_ID_RXMODE_CHANGE
Line 701: [DSP] command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RXMODE_CHANGE
Line 754: [DSP] IPC_ACTION_ID_RXMODE_CHANGE: cc(%02x), rx_mode(%x)
Line 791: stackID[%d] LTE_SHM_Address[0x%x], DS_LTE_SHM_Address[0x%x], L1Dsp_SHM[0x%x]
Line 808: [RACH] CarrierInd(%x) RachCnt(%d) TransTTI(%d) Power(%d) GpadcVal(%d)
Line 858: HALDSP_SetRACHCmd: gRACHflag is SET!preamble_cnt(%d)
Line 876: During 4G_DRDS ativated, RACH can't be triggered
Line 877: IsRfAvailable is changed to FALSE!!
Line 884: [DSP] RF unavailable
Line 890: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_RACH
Line 894: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_RACH
Line 912: [DRX, 4GDS] RACH is triggered in CDRX MeasConfig with gHALSC_PrepareGapMeas
Line 917: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_RACH
Line 921: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_RACH
Line 940: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_RACH
Line 944: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_RACH
Line 964: [DSP] For RACH, MACMain Config should be sent!
Line 1008: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 1017: [DSP] gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 1059: gRACHflag is initialized
Line 1064: gRACHflag is initialized
Line 1097: [DSP] IPC_ACTION_ID_MAC_RACH: cell_group(%d), cmd(%d)
Line 1141: (CONN State) SONANR: Pending SRI
Line 1169: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SRI_ON
Line 1173: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SRI_ON
Line 1185: [DSP] RF unavailable, IPC_ACTION_ID_SRI_ON
Line 1206: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SRI_ON
Line 1210: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SRI_ON
Line 1228: [DRX, 4GDS] SR is triggered in CDRX MeasConfig with gHALSC_PrepareGapMeas
Line 1233: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SRI_ON
Line 1237: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SRI_ON
Line 1244: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 1254: [DSP] gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 1265: [DSP] IPC_ACTION_ID_SRI_ON: cell_group(%d),  sri_count(%d)
Line 1306: assert condition : Wrong MacCE command ID
Line 1313: [DSP] Modem Status: % d  RF available: %d
Line 1319: [DSP] Command PENDING:[%d]IPC_ACTION_ID_DRX_CMD
Line 1323: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_DRX_CMD
Line 1334: [DSP] IPC_ACTION_ID_DRX_CMD [MacCE:%d]
Line 1432: [DSP] Modem Status: % d  RF available: %d
Line 1437: [DSP] Command PENDING:[%d]IPC_ACTION_ID_GAP_CONTROL
Line 1441: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_GAP_CONTROL
Line 1490: [DSP] IPC_ACTION_ID_GAP_CONTROL [0x%x]
Line 1549: [DSP] Modem Status: % d  RF available: %d
Line 1554: [DSP] Command PENDING:[%d]IPC_ACTION_ID_GAP_INFO
Line 1558: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_GAP_INFO
Line 1566: [DSP] IPC_ACTION_ID_GAP_INFO (gap_en:%d, gap_pattern:%d, gapinfo_offset:%d)
Line 1637: [DSP] Modem Status: % d  RF available: %d
Line 1646: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PMAX
Line 1650: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PMAX
Line 1658: [DSP] SetPmaxBackoffCmd: Sensor(%d), Max Power(%d, %d)
Line 1661: [DSP] PCell_Pmax(%d), nvLimitedPmax(%d)
Line 1671: [DSP] SetPmaxBackoffCmd: ulca_backoff(%d), Pmax(%d) cur_maxPower(%d)
Line 1703: [DSP] SCell_Pmax(%d), nvLimitedPmax(%d)
Line 1722: [DSP] IPC_ACTION_ID_PMAX [%d/%d] num_CC[%d] SLO_CC[%d] UlCaStatus[%d] 
Line 1828: [DSP] PCell_Pmax(%d), nvLimitedPmax(%d)
Line 1845: [DSP] Modem Status: % d  RF available: %d, SKIP IPC_ACTION_ID_PMAX
Line 1879: [DSP] IPC_ACTION_ID_PMAX: cell_group(%d), cc(%d), maxPower(%d)
Line 1926: [DSP] No Max Tx Pwr Limit on MTM/FCC! : %ddBm
Line 1935: [DSP] Invalid Tx Power level cfg : %ddBm
Line 1963: [DSP] Modem Status: % d  RF available: %d
Line 1968: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PMAX(LimitPmaxCmd)
Line 1972: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PMAX(LimitPmaxCmd)
Line 2013: [DSP] IPC_ACTION_ID_PMAX: cell_group(%d), cc(%d), Max Tx Pwr Limit = %ddBm
Line 2058: [DSP] Modem Status: % d  RF available: %d
Line 2068: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_RX_SIB_TDD_CFG
Line 2072: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_RX_SIB_TDD_CFG
Line 2088: [DSP] IPC_ACTION_ID_PHY_RX_SIB_TDD_CFG [%d, %d, %d]
Line 2144: [DSP] SI is decoded, hence deactivate 4G_DRDS
Line 2159: [DSP] Modem Status: % d  RF available: %d
Line 2168: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SI_SCHED
Line 2172: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SI_SCHED
Line 2208: [DSP] IPC_ACTION_ID_SI_SCHED: cell_group(%d), withSIB1(%d),CC(%d),Sib_drx(%d)
Line 2212: [DSP] SI WindowLength[%d], Number of SI [%d], sib_drx[%d]
Line 2215: [DSP] SI valid[%d], Periodicity[%d]
Line 2259: [DSP] Modem Status: % d  RF available: %d , SKIP IPC_ACTION_ID_CONFIG_PCH
Line 2271: [DSP] IPC_ACTION_ID_CONFIG_PCH
Line 2273: [DSP] PCH Config drx_T[%d], PF[%d], PO[%d], nB[%d]
Line 2363: [DSP] Modem Status: % d  RF available: %d , SKIP IPC_ACTION_ID_CONFIG_SCELL_PCH
Line 2376: [DSP] IPC_ACTION_ID_CONFIG_SCELL_PCH cc[%d] command[%d] drx_T[%d PF[%d] PO[%d]
Line 2479: [DSP] RF unavailable, skip HALDSP_SetRNTICmd(SI_RNTI case)
Line 2499: [DSP] No need of pending IPC_ACTION_ID_RNTI_MANAGE for SI decode, value=0x%x
Line 2508: [DSP] Command PENDING:[%d]IPC_ACTION_ID_RNTI_MANAGE
Line 2512: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RNTI_MANAGE
Line 2519: [DSP] SI is completely decoded, deactivate 4G_DRDS, set eDV_pend_SIRNTI = TRUE
Line 2567: [DSP] IPC_ACTION_ID_RNTI_MANAGE: cell_group(%d), RNTI[%d] = 0x%04X
Line 2621: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_RNTI_MANAGE
Line 2625: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_RNTI_MANAGE
Line 2664: [DSP] IPC_ACTION_ID_SCELL_RNTI_MANAGE: CC[%d] RNTI[%d] = 0x%04X
Line 2745: During 4G_DRDS ativated, state can't be changed
Line 2746: IsRfAvailable is changed to FALSE!!
Line 2757: [DSP] Modem Status: % d, RF available: %d
Line 2767: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_MAIN_CFG
Line 2771: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_MAIN_CFG
Line 2831: [DSP] Max HARQ TX Nun(%d), SPS C-RNTI(0x%x), TTI bundling(%d)
Line 2834: [DSP] sr_ProhibitTimer(%d)
Line 2837: [DSP] sCellDeactivationTimer(%d)
Line 2856: [DSP] pPRACHCfg(%d):(rs:%d)(Config:%d)(hs_f:%d)(zcor:%d)(fo:%d)
Line 2859: [DSP] pPRACHCfg(init_p:%d)(p_step:%d)(delta:%d)
Line 2864: pHARQCfg(%d) cr_timer(%d)
Line 2876: HALDSP_SetMACMain: gRACHflag is SET!
Line 2884: [DSP] IPC_ACTION_ID_MAC_MAIN_CFG: cell_group(%d)
Line 2939: [DSP] Modem Status: % d
Line 2950: [DSP] Command PENDING:[%d]IPC_ACTION_ID_DRX_CONFIG
Line 2954: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_DRX_CONFIG
Line 2964: [DSP] RF unavailable, IPC_ACTION_ID_DRX_CONFIG
Line 2975: [DSP] ConnDrx On: on_dur(%d) inact(%d) retx(%d) long cycle(%d) offset(%d)
Line 2989: [DSP] Short drx On: short cycle(%d) timer(%d)
Line 3002: [DSP] ConnDrx Off
Line 3010: [DSP] IPC_ACTION_ID_DRX_CONFIG: cell_group(%d)
Line 3075: [DSP] Modem Status: % d  RF available: %d
Line 3084: [DSP] Command PENDING:[%d]IPC_ACTION_ID_M3_GRANT
Line 3088: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_M3_GRANT
Line 3107: [DSP] IPC_ACTION_ID_M3_GRANT [RAR TTI:%d]
Line 3108: [DSP] M3_GRANT : hop_flag[%d], rb_asn[%d], trun_mcs[%d], tpc[%d], ul_delay[%d], cqi_req[%d], temp_crnti[%X]
Line 3159: [DSP] Modem Status: % d, RF available: %d
Line 3170: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBSFN_SF_ASSIGN
Line 3174: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBSFN_SF_ASSIGN
Line 3182: [DSP] SFA pt0(0x%x) pt1(0x%x) pt2(0x%x) pt3(0x%x) 
Line 3183: [DSP] SFA  pt4 (0x%x) pt5(0x%x) pt6(0x%x) pt7(0x%x)
Line 3185: [DSP] SFA pt8(0x%x) pt9(0x%x) pt10(0x%x) pt11(0x%x) 
Line 3186: [DSP] SFA pt12(0x%x) pt13(0x%x) pt14(0x%x) pt15(0x%x)
Line 3191: [DSP] IPC_ACTION_ID_MBSFN_SF_ASSIGN
Line 3240: [DSP] Modem Status: % d, RF available: %d
Line 3250: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 3254: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 3265: [DSP] IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 3319: [DSP]Modem/Rf Status: % d, RF available: %d
Line 3328: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_NOTIFICATION_CONFIG
Line 3332: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_NOTIFICATION_CONFIG
Line 3343: [DSP] IPC_ACTION_ID_MBMS_NOTIFICATION_CONFIG
Line 3391: [DSP] Modem Status: % d, RF available: %d
Line 3400: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_AREA_SCHED
Line 3404: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_AREA_SCHED
Line 3415: [DSP] IPC_ACTION_ID_MBMS_AREA_SCHED
Line 3463: [DSP] Modem Status: % d, RF available: %d
Line 3472: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_PMCH_SCHED
Line 3476: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_PMCH_SCHED
Line 3487: [DSP] IPC_ACTION_ID_MBMS_PMCH_SCHED: %d, %d, %d, %d, %d, %d, %d
Line 3543: [DSP] Modem Status: % d, RF available: %d
Line 3552: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_MSI_SCHED
Line 3556: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_MSI_SCHED
Line 3567: [DSP] IPC_ACTION_ID_MBMS_MSI_SCHED
Line 3605: [DSP] Modem Status: % d, RF available: %d
Line 3610: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 3614: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 3645: [DSP] IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 3649: [DSP] RestoreMbmsMcchSched: Addr(0x%x), SF CC[%d]:PT0(%x)
Line 3650: [DSP] n_MCCH[%d] n_AreaSched[%d] n_PMCH[%d] n_Msi[%d]
Line 3701: [DSP] Modem Status: % d, RF available: %d
Line 3711: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBSFN_CONFIG
Line 3715: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBSFN_CONFIG
Line 3725: [DSP] num_mbsfn_cfg >= LTE_RRC_MAX_MBSFN_CONFIG (%d)
Line 3747: [DSP] IPC_ACTION_ID_MBSFN_CONFIG
Line 3793: [DSP] Modem Status: % d, RF available: %d
Line 3802: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PRS_INFO_INIT
Line 3806: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PRS_INFO_INIT
Line 3817: [DSP] IPC_ACTION_ID_PRS_INFO_INIT
Line 3868: [DSP] Modem Status: % d, RF available: %d
Line 3877: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_PRS_FFT_CONFIG_REQ
Line 3881: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_PRS_FFT_CONFIG_REQ
Line 3892: [DSP] IPC_ACTION_ID_PHY_PRS_FFT_CONFIG_REQ
Line 3939: [DSP] Modem Status: % d, RF available: %d
Line 3953: [DSP] SetPATHLOSS: cc(%d), value(%d)
Line 3986: [DSP] HALDSP_SetRPDetect: slam_en(%d), time_diff(%d)
Line 4047: [DSP] Modem Status: % d, RF available: %d
Line 4056: [DSP] Command PENDING:[%d]IPC_ACTION_ID_TA_TIMER
Line 4060: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TA_TIMER
Line 4084: [DSP] IPC_ACTION_ID_TA_TIMER [cell_group : %d][state : %d][CCs_bitmap: %d][input_CCs_bitmap: %d]
Line 4142: [DSP] Modem Status: % d, RF available: %d
Line 4147: [DSP] Command PENDING:[%d]IPC_ACTION_ID_HO_TSFN
Line 4151: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_HO_TSFN
Line 4175: [DSP] IPC_ACTION_ID_HO_TSFN: cell_group(%d), ho_tsfn.tsfn = 0
Line 4185: [DSP] IPC_ACTION_ID_HO_TSFN: cell_group(%d), ho_tsfn.tsfn = 1
Line 4239: [DSP]Modem/Rf Status: % d, RF available: %d
Line 4248: [DSP] Command PENDING:[%d]IPC_ACTION_ID_RLF_SIGNAL
Line 4252: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RLF_SIGNAL
Line 4268: [DSP] IPC_ACTION_ID_RLF_SIGNAL: cell_group(%d)
Line 4345: [DSP] Modem Status: % d, RF available: %d
Line 4355: [DSP] Command PENDING:[%d]IPC_ACTION_ID_TA_AD
Line 4359: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TA_AD
Line 4389: [DSP] IPC_ACTION_ID_TA_AD [TA : %d](mode:%d)(CCs_bitmap: %d)(input_CCs_bitmap: %d)
Line 4448: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 4451: [DSP] SKIP IPC_ACTION_ID_SCELL_TX_CONFIG
Line 4459: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_TX_CONFIG
Line 4463: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_TX_CONFIG
Line 4495: [DSP] SCell_Pmax(%d), nvLimitedPmax(%d)
Line 4943: (HAL)SCELL cqi_report_config_v1310_setup:%d, cqi_report_aperiodic_v1310_setup:%d
Line 4982: [DSP] IPC_ACTION_ID_SCELL_TX_CONFIG: cell_group(%d), Cmd[%d]
Line 5753: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 5756: [DSP] SKIP IPC_ACTION_ID_SCELL_RX_CONFIG
Line 5764: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_RX_CONFIG
Line 5768: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_RX_CONFIG
Line 6136: [DSP] IPC_ACTION_ID_SCELL_RX_CONFIG: cell_group(%d), Cmd[%d]
Line 6575: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 6578: [DSP] Command SKIP: IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL
Line 6586: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL
Line 6590: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL
Line 6615: [DSP] IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL: Type[%d]
Line 6720: [DSP] Modem Status: % d, RF available: %d 
Line 6729: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_NEIGH
Line 6733: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_NEIGH
Line 6757: [DSP] IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_NEIGH: Type[%x]
Line 7074: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 7079: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SRS
Line 7083: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SRS
Line 7136: [DSP] IPC_ACTION_ID_PHY_DEDI_UL_SRS: cell_group(%d)
Line 7364: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 7369: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_CONFIGURE
Line 7373: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_CONFIGURE
Line 7493: [DSP](C) Pucch_r10 copyng .r10_valid:%d, format3 setup:%d
Line 7582: [DSP](C) Pucch_r10 invalid .
Line 7770: [DSP]Pucch_r13 spatial bundling : % d,r13 valid : %d format3 setup: %d, codebook_size_determination_r13_setup: %d, max_payload_coderate_r13_setup: %d
Line 7820: [DSP] IPC_ACTION_ID_PHY_CONFIGURE: cell_group(%d)
Line 7906: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 7911: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_DEDI_CQI
Line 7915: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_DEDI_CQI
Line 7976: [DSP] IPC_ACTION_ID_PHY_DEDI_CQI: cell_group(%d)
Line 8049: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 8055: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SR
Line 8059: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SR
Line 8081: [DSP] DSR_Config.valid(TRUE), DSR_PUCCH_ResourceIndex(%d), DSR_Configuration_Index(%d), DSR_Trans_max(%d)
Line 8099: [DSP] IPC_ACTION_ID_PHY_DEDI_UL_SR: cell_group(%d)
Line 8247: [DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_PHY_SIB
Line 8264: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_SIB
Line 8268: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_SIB
Line 8275: [DSP] RF unavailable, IPC_ACTION_ID_PHY_SIB
Line 8402: [DSP] IPC_ACTION_ID_PHY_SIB: cell_group(%d)
Line 8459: [DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_PHY_RX_SIB_PDSCH 
Line 8476: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_RX_SIB_PDSCH
Line 8480: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_RX_SIB_PDSCH
Line 8488: [DSP] RF unavailable, IPC_ACTION_ID_PHY_RX_SIB_PDSCH
Line 8508: [DSP] IPC_ACTION_ID_PHY_RX_SIB_PDSCH: cell_group(%d)
Line 8690: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 8696: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_RX_CONFIG
Line 8700: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_RX_CONFIG
Line 9021: [DSP] IPC_ACTION_ID_PHY_RX_CONFIG: cell_group(%d)
Line 9053: [DSP] msg_ltm_ul_bw.t_ul_bw = %d
Line 9090: [DSP] msg_ltm_ul_bw.t_tti_con = %d
Line 9117: [DSP] msg_ltm_tx_pwr.valid = %d
Line 9141: [DSP] msg_ltm_tx_pwr.t_tx_pwr = %d
Line 9165: [DSP] msg_ltm_pusch.t_rb_size = %d
Line 9189: [DSP] msg_ltm_pusch.t_mc_rb_size = %d
Line 9213: [DSP] msg_ltm_pusch.t_rb_offset = %d
Line 9237: [DSP] msg_ltm_pusch.t_mc_rb_offset = %d
Line 9261: [DSP] msg_ltm_pusch.t_mcs = %d
Line 9285: [DSP] msg_ltm_ul_bw.t_fix_data = %d
Line 9310: [DSP] msg_ltm_pucch.t_format = %d
Line 9334: [DSP] msg_ltm_pucch.t_cqi_size = %d
Line 9358: [DSP] msg_ltm_pucch.ackNackValue = %d
Line 9382: [DSP] msg_ltm_prach.t_config_index = %d
Line 9406: [DSP] msg_ltm_prach.t_rb_offset = %d
Line 9430: [DSP] msg_ltm_srs.t_rb_size = %d
Line 9454: [DSP] msg_ltm_srs.t_rb_offset = %d
Line 9478: [DSP] msg_ltm_srs.t_period = %d
Line 9503: [DSP] IPC_ACTION_ID_LTM_SET: PUCCH
Line 9510: [DSP] IPC_ACTION_ID_LTM_SET: PUSCH
Line 9517: [DSP] IPC_ACTION_ID_LTM_SET: PRACH
Line 9524: [DSP] IPC_ACTION_ID_LTM_SET: SRS
Line 9531: [DSP] IPC_ACTION_ID_LTM_SET: MC-PUSCH
Line 9536: [DSP] IPC_ACTION_ID_LTM_SET: D2D
Line 9542: [DSP] IPC_ACTION_ID_LTM_SET: Tx channel reset
Line 9612: [DSP] IPC_ACTION_ID_LTM_MEAS_FER (duration:%d)
Line 9653: [MTM] SL OOC FER PSDCH(%d) PSSCH(%d)
Line 9710: [DSP] Modem Status: % d, RF available: %d 
Line 9720: [DSP] SetRestorePendingEvent(num:%d)
Line 10187: [DSP] 1ms delay for DSP scheduling
Line 10196: [DSP] 1ms delay for DSP scheduling
Line 10347: [DSP] Invalid PendingEvent
Line 10384: [DSP] GetHWVersion: gDrx_ActiveRat(%d)
Line 10402: [DSP] IPC_ACTION_ID_HW_VERSION
Line 10431: [DSP] GetULFrequency: gDrx_ActiveRat(%d)
Line 10449: [DSP] IPC_ACTION_ID_RF_FREQ [%d, %d]
Line 10486: [DSP] IPC_ACTION_ID_LTE_DSP_INIT(%d)
Line 10506: [DSP] IPC_ACTION_ID_LTE_DSP_MEAS_INIT(%d)
Line 10532: [DSP] IPC_ACTION_ID_LTE_RELEASE_DONE
Line 10539: [DSP] power : wrong state(%d), Ready(0x%x)
Line 10572: [4G_DRDS] restore Dynamic QS (4G_DRDS deact)
Line 10592: [DSP] SetActiveRatInfo: rat(%d)
Line 10703: [DSP] GetConnSleepSCT(SCT:%d)
Line 10730: [DSP] SetConnSleepSCT(SCT:%d)
Line 10765: [DSP] GetConnTXdb[%d](ta:%d, pucch_tpc:%d, pusch_tpc:%d, ab_pwr:%d)
Line 10819: [DSP] SetConnTXdb[%d](ta:%d, pucch_tpc:%d, pusch_tpc:%d, ab_pwr:%d)
Line 10860: [DSP] GetConnSpsDb(dl_on_tti:%d, ul_on_tti:%d, dl_state:%d, ul_state:%d)
Line 10914: [DSP] GetConnDSPdb(ta_state:%d, rlf_state:%d) (CA_deact_t:%d,%d, SFN:%d)
Line 10953: [DSP] SetConnDSPdb(ta_state:%d, rlf_state:%d)(CA_deact_t:%d,%d, SFN:%d)
Line 11002: [DSP] Modem Status: % d, RF available: %d
Line 11008: [DSP] IPC_ACTION_ID_RELEASE Pending(gHALSC_IdleGapOnGoing(%d))
Line 11013: [DSP] Command PENDING:[%d]IPC_ACTION_ID_RELEASE
Line 11017: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RELEASE
Line 11032: Skip Sending IPC_ACTION_ID_RELEASE(RF not available)
Line 11047: [DSP] IPC_ACTION_ID_RELEASE
Line 11091: [DSP] Modem Status: % d, RF available: %d
Line 11097: [DSP] IPC_ACTION_ID_RESET Pending(gHALSC_IdleGapOnGoing(%d))
Line 11109: [DSP] Command PENDING:[%d]IPC_ACTION_ID_RESET
Line 11113: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RESET
Line 11143: [DSP] IPC_ACTION_ID_RESET: cell_group(%d), cause(%d)
Line 11196: [DSP] Modem Status: % d, RF available: %d
Line 11202: DSP Command PENDING:[%d]IPC_ACTION_ID_SCELL_SRS_RELEASE
Line 11206: DSP Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_SRS_RELEASE
Line 11268: [DSP] IPC_ACTION_ID_SCELL_SRS_RELEASE: cell_group(%d), carrier_bitmap(%x)
Line 11309: [DSP] Modem Status: % d, RF available: %d
Line 11319: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PUCCH_SRS_CQI_RELEASE
Line 11323: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PUCCH_SRS_CQI_RELEASE
Line 11381: [DSP] IPC_ACTION_ID_PUCCH_SRS_CQI_RELEASE
Line 11419: [DSP] Modem Status: % d, RF available: %d
Line 11429: [DSP] Command PENDING:[%d]IPC_ACTION_ID_LOOPBACK_CONTROL
Line 11433: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_LOOPBACK_CONTROL
Line 11444: [DSP] IPC_ACTION_ID_LOOPBACK_CONTROL
Line 11482: [DSP] Modem Status: % d, RF available: %d
Line 11491: [DSP] Command PENDING:[%d]IPC_ACTION_ID_ULSPS_IMPLICIT_RELEASE
Line 11495: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_ULSPS_IMPLICIT_RELEASE
Line 11505: [DSP] IPC_ACTION_ID_ULSPS_IMPLICIT_RELEASE
Line 11591: [DSP] IPC_ACTION_ID_SI_UPDATE: cell_group[SCG], cc(%d)
Line 11598: [DSP] IPC_ACTION_ID_RELEASE(%d)
Line 11644: [DSP] RF unavailable
Line 11649: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_ACT_DEACT
Line 11653: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_ACT_DEACT
Line 11701: [DSP] IPC_ACTION_ID_SCELL_ACT_DEACT: cc(%d) cmd(%d), earfcn(%d), tti(%d)
Line 11730: [DSP] IPC_ACTION_ID_SCELL_ONOFF: cc(%d), cmd(%d), earfcn(%d)
Line 11757: [DSP] RF unavailable
Line 11762: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SIDELINK_RX_ACT_DEACT
Line 11766: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SIDELINK_RX_ACT_DEACT
Line 11791: [DSP] IPC_ACTION_ID_SIDELINK_RX_ACT_DEACT: cc(%d), cmd(%d), sync_offset(%d)
Line 12766: [DSP] Modem Status: % d, RF available: %d
Line 12775: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SLINK_RX_RSCPOOL_UPDATE
Line 12779: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SLINK_RX_RSCPOOL_UPDATE
Line 12793: [DSP] IPC_ACTION_ID_SLINK_RX_RSCPOOL_UPDATE: sl_mode(%d), rsc_type(%d), num_pool(%d), bitmap(0x%x)
Line 12845: [DSP] Modem Status: % d, RF available: %d
Line 12854: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SLINK_TX_RSCPOOL_UPDATE
Line 12858: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SLINK_TX_RSCPOOL_UPDATE
Line 12874: [DSP] IPC_ACTION_ID_SLINK_TX_RSCPOOL_UPDATE: sl_mode(%d), rsc_type(%d), index(%d)
Line 12931: [DSP] Modem Status: % d, RF available: %d
Line 12940: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SIDELINK_TX_SYNC_REQ
Line 12944: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SIDELINK_TX_SYNC_REQ
Line 12963: [DSP] IPC_ACTION_ID_SIDELINK_TX_SYNC_REQ: sl_mode(%d), enable(%d), sid(%d), sync_offset(%d), inc(%d), resv(%d)
Line 13043: [DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_ACTIVATE_EICIC
Line 13095: [DSP] IPC_ACTION_ID_ACTIVATE_EICIC: mode(%d), num(%d, %d)
Line 13145: [DSP] HALDSP_SetInactivityStatus(skip), RF unavailable
Line 13157: [DSP] IPC_ACTION_ID_QSLEEP_CONTROL: status(%d) dynamicDisable(%d) gVolteStatus(%d)
Line 13197: [DSP] HALDSP_SetDynamicQsDisable(skip): TdpState(%d)
Line 13212: [DSP] HALDSP_SetDynamicQsDisable(%d -> %d) DataActivityStatus(%d) rx_mode(%d) scell_start(%d) scell_status(%d) gVolteStatus(%d)
Line 13230: QsDisable(delay)
Line 13272: [DSP] IPC_ACTION_ID_REDEMAP_CONTROL: cc(%d), cmd(%d)
Line 13309: [DSP] Modem Status: % d, RF available: %d
Line 13310: [DSP] Skip sending IPC: IPC_ACTION_ID_TDP_CONFIG
Line 13392: [DSP] IPC_ACTION_ID_TDP_CONFIG: cc(%d), tdp_enable(%06x), lastTdpConfig(%06x)
Line 13436: [DSP] Modem Status: % d, RF available: %d
Line 13445: [DSP] Command PENDING:[%d]IPC_ACTION_ID_TIMING_UPDATE
Line 13449: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TIMING_UPDATE
Line 13465: [DSP] IPC_ACTION_ID_TIMING_UPDATE: cc(%d), cp(%d), time_diff(%d)
Line 13506: [DSP] Modem Status: %d
Line 13521: [DSP] RF unavailable
Line 13527: [DSP] Command PENDING:[%d]IPC_ACTION_ID_CQI_INT_CONTROL: on(%d)
Line 13531: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_CQI_INT_CONTROL: on(%d)
Line 13542: [DSP] IPC_ACTION_ID_CQI_INT_CONTROL: on(%d)
Line 13574: [DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_WAKEUP_DRX
Line 13588: [DSP] IPC_ACTION_ID_WAKEUP_DRX, han_ta_acc[0](%d)
Line 13630: [DSP] Modem Status: % d, RF available: %d
Line 13635: [DSP] Command PENDING:[%d]IPC_ACTION_ID_TXBACKUP_DRX
Line 13639: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TXBACKUP_DRX
Line 13668: [DSP] IPC_ACTION_ID_TXBACKUP_DRX
Line 13763: [DSP] IPC_ACTION_ID_PHY_MEAS_REQUEST: meas_cnt(%d), dur(%x)
Line 13819: [DSP][DEBUG] GetMeasResult: NOT SAME!! gHal_DrsPositionIdx(%d), max_idx(%d)
Line 14135: [DSP] SetRsrpValue(CC%d): srv(%d,%d), nbr(%d)
Line 14173: [DSP] Check UeState(%d)
Line 14198: MIF CLK change to BASE, OwnerMask [%d/%d]
Line 14204: CPU CLK change to SVC_NO_SVC OwnerMask [%d/%d]
Line 14230: MIF CLK change to BASE, OwnerMask [%d/%d]
Line 14236: CPU CLK change to SVC_PS OwnerMask [%d/%d]
Line 14289: MIF CLK change to 1GHz OwnerMask [%d/%d], ActivtedCC: %d
Line 14307: CPU CLK change to OD OwnerMask, ActivtedCC: %d
Line 14315: CPU CLK change to SVC_4G_REL12 OwnerMask [%d/%d]
Line 14495: [MTM] LMT: FER(%d)
Line 14545: gRACHflag is initialized
Line 14675: [DSP] ConfigurePhyTest
Line 14706: [DSP] Modem Status: % d  RF available: %d
Line 14712: [DSP] Command PENDING:[%d]IPC_ACTION_ID_CQI_LIMIT
Line 14716: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_CQI_LIMIT
Line 14725: [DSP] IPC_ACTION_ID_CQI_LIMIT
Line 14776: HALDSP_Set_LT12, Start [%d] Timer
Line 14807: [DSP] IPC_ACTION_ID_LTE_BLK_ENABLE
Line 14829: [DSP] IPC_ACTION_ID_LTE_BLK_RELEASE(%d)
Line 14848: DSP_RELEASE(%d, %d)
Line 14867: HALDSP_SetDSPInitRelease: [DSDS]Do not release DSP again as it is already released
Line 14872: DSP_INIT
Line 14922: [4RxD] HALDSP_Set4RxEnable: MTM running... so skip!!!
Line 14990: [DSP] Set4RxEnable: enable(%d), thres(%d,%d,%d), hys(%d,%d)
Line 14999: [DSP] Set4RxEnable: Mid enable(%d), thres(%d,%d,%d,%d)
Line 15007: [DSP] Set4RxEnable: DCI rate(%d,%d,%d,%d), DCR period(%d), Monitor thres(%d, %d)
Line 15021: [DSP] Set4RxEnable: cc(%d), enable(%d), bitmap(%x), 4Rx_RB_SIZE(%d)
Line 15057: [AS] Command PENDING:[%d]IPC_ACTION_ID_ANTSW_STOP
Line 15061: [AS] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_ANTSW_STOP
Line 15075: [AS] SetAsEnable: MTM mode. Disable AS
Line 15082: [AS] SetAsEnable: SISO Test mode (0x%X) and AS TEST RxMode (NO), Disable AS
Line 15095: [AS] SetAsEnable: mcc(0x%x) Disable AS
Line 15102: [AS] SetAsEnable: DPDT only works in LB, Disable AS (%d)
Line 15108: [AS] SetAsEnable: C-DRX config, Disable AS
Line 15114: [AS] SetAsEnable: Recv ON, Disable AS
Line 15123: [AS] SetAsEnable: CA config, Disable AS
Line 15168: [AS] Command PENDING:[%d]IPC_ACTION_ID_ANTSW_STOP
Line 15172: [AS] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_ANTSW_STOP
Line 15186: [AS] IPC_ACTION_ID_ANTSW_STOP
Line 15231: [AS] SetAsEnable: Fixed Antenna Mode (%d)
Line 15256: [AS] SetAsEnable: Not support AS (%d)
Line 15273: [AS] SetAsEnable: AS Test Mode OFF for current band (%d)
Line 15286: [AS] SetAsEnable: TestMode ON (Band:%d, Operation:%d)
Line 15290: [AS] SetAsEnable: TX ANT switch Test Operation Mode(%d)
Line 15353: [AS] SetAsEnable: TPC Max Time(%d), RSRP(%d %d %d %d) HardSW(%d,%d)
Line 15363: [AS] SetAsEnable: RSRP Threshold(%d %d), Tx Power Threshold(%d %d), RSRP Offset(%d %d)
Line 15400: [AS] 3P3T: Antenna(%d) TRP(%d), TIS(%d)
Line 15406: [AS] 3P3T: SwapType(%d) Main_RxRsrpOffset(%d), Sub_RxRsrpOffset(%d)
Line 15434: [AS] DPDT: Antenna(%d) TRP(%d), TIS(%d)
Line 15438: [AS] DPDT: Main_RxRsrpOffset(%d), Sub_RxRsrpOffset(%d)
Line 15452: [AS] SetAsEnable: Enabled, AsMode(%d)
Line 15469: [AS] SetAsEnable: Disabled
Line 15473: [AS] SetAsEnable: State is not changed (%d)
Line 15514: [AS] HALDSP_SetAsEnable_EXP: Proximity Backoff Enabled
Line 15528: [AS] HALDSP_SetAsEnable_EXP: Proximity detected -> No change AS
Line 15533: [AS] HALDSP_SetAsEnable_EXP: No Proximity detected -> Enable AS
Line 15564: [AS] HALDSP_ControlAsforCA: SCell Configured -> Disable AS
Line 15574: [AS] HALDSP_ControlAsforCA: SCell Released -> Enable AS
Line 15605: [AS] HALDSP_GetCurrentAsStatus (%d)
Line 15691: [DSP] PCell_Pmax(%d), nvLimitedPmax(%d)
Line 15709: [AS] Pending HALDSP_SetPmaxLimitCmd_AS: Modem power(%d), RF unavailable(%d)
Line 15719: [AS] Command PENDING:[%d]IPC_ACTION_ID_PMAX
Line 15723: [AS] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PMAX
Line 15731: [AS] HALDSP_SetPmaxLimitCmd_AS: Switch Status(%d), Max Power(%d)
Line 15753: [AS] IPC_ACTION_ID_PMAX: cell_group(%d), cc(%d), maxPower(%d)
Line 15822: [B8B7] Command PENDING:[%d]IPC_ACTION_ID_PMAX
Line 15826: [B8B7] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PMAX
Line 15834: [B8B7] HALDSP_SetPmaxLimitCmd_AS: Switch Status(%d), Max Power(%d)
Line 15841: [B8B7] IPC_ACTION_ID_PMAX: cell_group(%d), maxPower(%d)
Line 15871: [CL-AIT] HALDSP_GetClAitEnable: status (%d)
Line 15934: [CL-AIT] SetAitEnable: Not supported RF band
Line 15939: [CL-AIT] SetAitEnable: Disabled due to AitEn2 and no VoLTE
Line 15948: [CL-AIT] SetAitEnable: Disabled due to CA and no VoLTE
Line 15953: [CL-AIT] SetAitEnable: Do not enable CL-AIT (RfBandType:%d, AS mode:%d)
Line 15958: [CL-AIT] SetAitEnable: Do not enable CL-AIT (Switched to Upper Antenna)
Line 15987: [CL-AIT] OLAIT SET flag (%d)
Line 16016: [CL-AIT] SetAitEnable: enable(%d -> %d)
Line 16164: [CL-AIT] SetAitMipiWord: mode(%d), num_word_RFFE0(%d), num_word_RFFE2(%d), word_Tuner(0x%x, 0x%x), word_XGND(0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x)
Line 16180: [CL-AIT] SetAitMipiWord: x_gnd_ctrl_type(%d), xgnd(0x%x, 0x%x, 0x%x)
Line 16215: [TxTime] power_index(%d %d %d %d %d)
Line 16252: [DSP] IPC_ACTION_ID_SET_DMXR_FREQ_INIT: cc(%d, %d), dmxr_freq_value(%d, %d), time(%d, %d, %d)
Line 16295: [DSP] IPC_ACTION_ID_SET_DMXR_FREQ_INIT: ul_slo(%d), cmd(%d), cc(%d, %d), time(%d, %d, %d)
Line 16633: [DSP] IpcHndlr_SWReset !!!
Line 16644: [DSP] IPC_ACTION_ID_RECOVERY_SWRESET: ID(%d), cnt(%d) !!!
Line 16667: [DSP] IPC_ACTION_ID_RECOVERY_SWRESET: cnt(%d) !!!
Line 16707: [DSP] UL SPS grant release(by PDCCH or parameter reconfiguration)
Line 16748: [DSP] UL SPS grant activated
Line 16803: [DSP] Invalid cmd type (CC%d, %d)
Line 16812: [DSP] SCellActDeactCnf(CC%d): cmd(%d), SCellActCmd(%d)
Line 16855: [DSP] SlinkDeactCnf
Line 17126: RF_DUMP received
Line 17170: ABNORMAL_PWR is detected
Line 17174: False Alram case (ABNORMAL_PWR)
Line 17212: [DSP] AIT_DumpInd: dump_state(%d),tx_ch_info(%d), tx_ch_power(%d), pusch_comp_pwr(%d)
Line 17214: [DSP] AIT_DumpInd: set1_start_rb(%d), set1_rb_size(%d), set2_start_rb(%d), set2_rb_size(%d)
Line 17250: [DSP] COMM_DUMP: msg_id(%d), cc_idx(%d), tti_index(%d)
Line 17892: [DSP] PHYDM Error report(0x%x), data[5:0]:0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 17924: [DSP] IPC_ACTION_ID_STORE_DSPPARAM, backup_han_ta_acc[0](%d)
Line 17960: [AS] IpcHndlr_AntSwitch (%d)
Line 17964: [AS] IpcHndlr_AntSwitch: Do not enable CL-AIT (Switched to Upper Antenna)
Line 18077: [DSP] HALDSP_SetAgcGainAvg(%d): agc_gain(%d, %d), SHM(0x%x,0x%x)
Line 18118: [DSP] PSCellDeActCnf(CC%d)
Line 18143: [DSP] IpcHndlr_PscellActCnf
Line 18291: [DSP] IPC_ACTION_ID_WIFI_COEXIST_INFO
Line 18319: [DSP] IPC_ACTION_ID_LTE_ATI_CMD : %d %d
Line 18349: [DSP] IPC_ACTION_ID_TX_SWAP [0x%x]
Line 18384: [DSP] Update DRS Position(CC%d): TTI(%d)
Line 18442: [DSP] Update LAA DCI STATUS: cc(%d) status(%d) 
Line 18462: [DSP] IPC_ACTION_ID_TX_BLOCK
Line 18547: [SAR] out of range power : %d
Line 18745: [SAR] Invalid gSARLimit!!!(%d)
Line 18777: [SAR] Get Beta i(%d)
Line 18806: [SAR] Init periodM(%d) LinearSARLimit(%d) PatialLimitforN(%d) gSARsumLimit(%d)
Line 18827: [SAR] Init_RE gSAR_remain(%d) start index(%d) FirstSAR(%d)
Line 18858: [SAR] TestMode disabled / EMC(%d)
Line 18886: [SAR] Check UeState(%d)
Line 18903: [SAR] Save PrioritySensor(%d)
Line 18931: [SAR] SAR(%d) Pow(%d) remain_ret(%d) 
Line 18937: [SAR] N(%d) SensorStatus(0x%x) event(%u)
Line 18984: [SAR] Abnormal state! M(%d) 
Line 19001: [SAR] reset SAR_remain (%d)
Line 19015: [SAR] prevtime(%d) curtime(%d) time_diff(%d)
Line 19029: [SAR] Skip(%d) remain(%d)
Line 19038: [SAR] SAR_remain (%d) remainPatialM(%d) gSARPatialRemain[M](%d)
Line 19043: [SAR] SAR_remain (%d) remainPatialM(%d) gSARPatialLimitforN(%d)
Line 19056: [SAR] reset SAR_remain (%d)
Line 19063: [SAR] tempData (%d) M(%d) index(%d) gSARPatialRemain[ ](%d)
Line 19075: [SAR] SAR_remain (%d) remainPatialM(%d) tempData(%d)
Line 19080: [SAR] SAR_remain (%d) gSARPatialLimitforN(%d) gSARPatialRemain[M](%d)
Line 19100: [SAR] M(%u) gSARConnCnt(%u) Qfull(%d) MaxSARLimit(%d) X_Used_SAR(%d) C_Used_SAR(%d)
Line 19106: [SAR] Reset count 0 as threshold(%d)
Line 19115: [SAR] nowMaxLimit(%d) gSARalpha(%d) using SAR 6 min before
Line 19120: [SAR] nowMaxLimit(%d) gSARalpha(%d) using Max SAR limit
Line 19134: [SAR] nowMaxLimit(%d) backoff Alpha3 %d%
Line 19157: [SAR] nowMaxLimit(%d) SAR_remain < nowBeta(%d) Beta(%d)
Line 19165: [SAR] nowMaxLimit(%d) SAR_remain big enough!(%d)
Line 19172: [SAR] nowMaxLimit(%d) No backoff by DELTA
Line 19181: [SAR] nowMaxLimit(%d) set to 6min before SAR
Line 19187: [SAR] Current Max Limit is %d.0dBm
Line 19246: [DSP] p_max_pwr_threshold is NULL
Line 19316: [DSP] GetPhyHpueMetic
Line 19363: [DSP] SetVolteStatus Current(%d -> %d), Other(%d)
Line 19384: [DSP] GetVolteStatus (%d)
Line 19420: [DSP] GetCurrentPmax (%d, %d, %d, %d ,%d)
Line 19474: [SPR] HALDSP_EnableB41Ns04Op: Stack#%d, NS04 enable(%d), band(%d), MCC-MNC(%d-%d)
Line 19519: [DSP] IPC_ACTION_ID_EDUAL_VOLTE_STATUS(%s) :: Mcg/Scg(St%d/St%d)
Line 19559: Not found available CC for earfcn(%d)
Line 19569: [DSP] IPC_ACTION_ID_SCG_START_IND: cc(%d), dl_earfcn(%d)
