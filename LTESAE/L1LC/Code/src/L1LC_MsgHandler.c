Line 481: UpdateRfBandList: SingleLO pair: Scell[%d]: earfcn(%d), Scell[%d]: earfcn(%d)
Line 535: Do not start SetDlFreqReq (mode: %d) due to nearby e.p.t
Line 549: Do not start SetDlFreqReq (mode: %d) due to nearby e.p.t
Line 598: [LTE_L1LC] RFBand of SCG STACK should be removed
Line 613: L1LC_DecodeRrmSetDlFreqReq(RRM_L1LC_DL_TUNE_BPLMN_INIT)(Save HALSC_SavedAfcValueBplmn(%d))
Line 616: L1LC_DecodeRrmSetDlFreqReq(pMsg->SearchRepeatMode:%d, pMsg->dl_mode:%d)
Line 627: L1LC_DecodeRrmSetDlFreqReq(FH Test)(pMsg->SearchRepeatMode:%d FHCnt:%d pMsg->dl_mode:%d)
Line 718: L1LC_DecodeRrmSetUlFreqReq (mode:%d, cp type:%d, ul earfcn:%d, ul bw:%d)
Line 768: UL CP type = %d
Line 830: Do not start SearchReq (mode: %d) due to nearby e.p.t
Line 985: Restore DRX Config
Line 1010: Block SIB RNTI (%d, %d)
Line 1019: Measurement on going, RETURN!!!
Line 1026: [LTE L1LC DSL1RC] SI Decoding completed!!!
Line 1076: Do not consider Update Rf cause in SibCtrlNtf(Stop) as Pause Flag is set,PauseFlag(%d)
Line 1175: DSP Status bitmap(Rach/ULG/SRI/CR(%x) RTT/RTX/IAT/ODT(%x) Paging/DediRach(%x))
Line 1265: Not found available CC for earfcn(%d)
Line 1310: Not found SCell index for earfcn(%d)
Line 1316: updateDsp(SCell rsrp(%d), NCell rsrp(%d)
Line 1368: Max cc num is %d (CC = %d)
Line 1370: SCell(%d): RSRP(PC) = %d, PathLoss = %d
Line 1400: updateDsp(PCell rsrp(%d), NCell rsrp(%d)
Line 1425: PCell: RSRP(PC) = %d, PathLoss = %d
Line 1470: Irat measure is ongoing(%d), prepared(%d) (IratMeasState: %d, %d, %d)
Line 1480: UMTS measure stop!
Line 1486: GSM measure stop!
Line 1504: Measure_Stop_Req is pending, wait measure result from other RAT
Line 1510: During Inter GAP, IratMeasState (%d, %d, %d)
Line 1560: gL1lc_DsdsDB.IsWaitResponse (%d)
Line 1594: [LTE_L1LC] gL1LC_AllstopMsgProcByRrmEvent = [%d] 
Line 1614: [LTE_DSDS] DRX spare timer expiry case. RRM saved message [%d] is freed!!(RF available[%d])
Line 1623: Ignore All stop if IRAT procedure is ongoing
Line 1663: signal mask is set, do not stop gL1LC_DsdsRetryTmr
Line 1668: All Stop case. RF response pending.Retry Timer stopped
Line 1677: [LTE_DSDS] HAL saved message [%d] is freed !! (RF available[%d])])
Line 1684: No resource release during signaling (gRspNeeded: 0x%x)
Line 1725: All Stop case. RF response pending. Release RF to allow further RF request (Is_ResumeReq:%d)
Line 1770: [RRM => L1LC] Decode RRM_L1LC_SET_TDP_STATE_NTF (mode:%d)
Line 1837: abnormal TDP state ntf mode
Line 1930: [RRM => L1LC] Decode RRM_L1LC_UE_STATE_NTF (%d -> %d)
Line 2000: Unknown NextUeState(%d)
Line 2019: [4GDS] Conn - Conn state is started!!
Line 2049: [4GDS] Conn - Conn state is ended!!
Line 2092: RE-Invoke L1LC_ProcL1txTxReq For RAND_ACC and RESET gRand_Acc_Tx_Cnf_Nop to FALSE
Line 2436: [RRM => L1LC] Decode RRM_L1LC_CGI_START_NTF
Line 2467: [RRM => L1LC] Decode RRM_L1LC_AGAP_STOP_REQ
Line 2487: [RRM => L1LC] Decode RRM_L1LC_OTDOA_MEAS_REQ
Line 2505: [RRM => L1LC] Decode RRM_L1LC_OTDOA_ABORT
Line 2522: [RRM => L1LC] Decode RRM_L1LC_OTDOA_RESULT_REQ
Line 2542: [RRM => L1LC] Decode RRM_L1LC_INTER_FREQ_LIST : NumInterFreq[%d]
Line 2548: InterFreqList[%d] earfcn[%d] bw[%d]
Line 2634: [RRM => L1LC] Received RRM_L1LC_SCELL_PCH_INFO_NTF earfcn[%d] 
Line 2640: [HAL-MBSFN] Invalid CC
Line 2645: [MBSFN] PCH status on CC[%d] command[%d] drx_T[%d] PF[%d] PO[%d]
Line 2706: Cannot Allocate Message buffer
Line 2723: Waiting LATCH_CNF
Line 2733: LATCH for L2U handover shall be pended(gL1LC_IratGsmMeasState:%d, gL1LC_IratGsmVerifyState:%d).
Line 2794: Waiting LATCH_CNF
Line 2808: LATCH for L2G handover shall be pended(gL1LC_IratUmtsMeasState:%d).
Line 2827: NOT support RRM_L1LC_NCELL_TIMING_INFO_REQ(rat_type:%d)
Line 2885: SET gL1lc_DsdsDB_[%d].IsSuspend
Line 2897: [LTE_L1LC] gL1LC_SuspendMsgProcByRrmEvent = [%d] 
Line 2943: [LTE_L1LC] RFBand of SCG STACK should be removed
Line 2961: [4G_DRDS] restore Dynamic QS (4G_DRDS deact)
Line 2962: [4G_DRDS] DEACTIVATED From DR_State(%d) / Suspend SCG ===
Line 3005: LATCH is ongoing, RrmSuspendCnf message is pended.
Line 3036: [LTE_L1LC] SUSPEND message saved in Other stack
Line 3132: [DRX] current_sleep_cnt(%d)
Line 3136: [DRX] SleepAbort is Failed (Minimun Sleep Abort Allowable Time[ST: %d, %d, %d])
Line 3142: [DRX] SleepAbort is Failed (Minimun Sleep Abort Allowable Time[ST:%d, %d, %d])
Line 3145: [DRX] Start Default Wakeup Timer for ST%d DsdsWakeupIntrTmr : [500us]
Line 3152: [DRX] Sleep Start Time : (Previous ST%d %dus) vs (Current ST%d %dus)
Line 3163: [DRX] hal_sleepTime(%d)
Line 3191: [Debug] Is_Drx_check_ind = %d
Line 3198: [DRX] Wait for WakeupIntr!
Line 3261: Wakeup procedure is ongoing. Don't decode IDLE_SLEEP_REQ
Line 3293: [DRX] Do not process IdleSleepReq as Slow Clock Estimation is running!
Line 3302: L1LC_DrxStateChange (%s -> %s)
Line 3327: Wakeup procedure is ongoing. Don't decode CONN_SLEEP_REQ
Line 3371: Measure is running, Sleep pass.
Line 3399: (L1LC_DecodeRrmConnSleepReq) (R value no update for long time)
Line 3414: Measure is running, Sleep pass.
Line 3421: gL1LC_DrxControl.state = DRX_CLKEST, Sleep pass.
Line 3425: L1LC_DrxStateChange (%s -> %s)
Line 3502: L1LC_DecodeRrmForceWakeupReq(%d) assert
Line 3504: Forced Crash due to multiple FORCE_WAKEUP_REQ
Line 3550: 1LC_DecodeRrmTxPowerDownNtf(skip), RF unavailable
Line 3574: [RRM => L1LC] Decode RRM_L1LC_POWER_RESET_REQ
Line 3592: [RRM => L1LC] Decode RRM_L1LC_BPLMN_CGI_START_NTF
Line 3646: [RRM => L1LC] Decode RRM_L1LC_BPLMN_CGI_STOP_NTF
Line 3668: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 3746: [L1LC => RRM] Send L1LC_RRM_FREQ_AID_IND
Line 3751: Cannot Allocate Message buffer
Line 3819: [RRM => L1LC] Decode RRM_L1LC_BPLMN_CGI_HOLD_NTF
Line 3866: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 3922: utra_SI_AcquisitionForHO is postponed because UMTS modem is ongoing!
Line 3952: gL1LC_SupportBandList[%d]= %d
Line 3997: [RRM => L1LC] Decode RRM_L1LC_SET_SCELL_NTF(%d)
Line 4022: Not supported band for SCC(earfcn:%d)
Line 4044: Instant SCell configuration&activation for MBSFN (TTI:%d)
Line 4097: Not found available CC for earfcn(%d)
Line 4138: [SetSCellNtf]SetTdpState(CC%d):state(%d->%d)
Line 4171: (CA activation) Skip checking TDD contiguous CA & setting SLO because this device can't support TDD SLO.
Line 4271: [4G_DRDS] Remove RFband of SCG from RFbandlist due to MIMO conflict
Line 4292: MBSFN Config present in Scell(%d) NumMbsfnConfig[%d]
Line 4297: No MBSFN on Scell(%d)
Line 4320: Not found activated CC for earfcn(%d)
Line 4387: MBSFN on Scell[%d] is released
Line 4427: [RRM => L1LC] Decode RRM_L1LC_SCELL_CONFIG_NTF
Line 4462: earfcn(%d) is already configured as Scell(%d)
Line 4478: Add Scell: cid(%d), dl_earfcn(%d), ul_earfcn(%d), dl_bw(%d), ul_bw(%d)
Line 4482: Num of Scell: total(%d) = prev(%d, %d) + curr(%d)
Line 4499: (Scell configuration) Skip checking TDD contiguous CA & setting SLO because this device can't support TDD SLO.
Line 4576: No available RF
Line 4610: earfcn(%d) is need to using GAP for measurement
Line 4618: Not supported band list for target inter_freq(%d). Clear inter_freq list: Num of Scell (%d) -> (%d)
Line 4634: earfcn(%d) is already configured as Scell
Line 4653: earfcn(%d) is already configured, update infomation to scell info
Line 4656: earfcn(%d) is already configured
Line 4683: Replace Freq: dl_earfcn(%d), meas_bw(%d)
Line 4701: Add Freq: dl_earfcn(%d), meas_bw(%d)
Line 4706: Num of Scell: total(%d) = prev(%d, %d) + curr(%d)
Line 4741: [4G_DRDS] Remove RFband of SCG from RFbandlist due to MIMO conflict
Line 4775: [RRM => L1LC] Decode RRM_L1LC_SCELL_UPDATE_TIMEOFFSET_NTF
Line 4783: Ignore SCell TimeOffset !!!
Line 4815: [RRM => L1LC] Decode RRM_L1LC_RELEASE_SCELL_NTF
Line 4846: Remove Scell: cid(%d), dl_earfcn(%d)
Line 4867: Num of Scell: total(%d) = prev(%d, %d) - curr(%d)
Line 4910: [4G_DRDS] Remove RFband of SCG from RFbandlist due to MIMO conflict
Line 4954: [RRM => L1LC] Decode RRM_L1LC_EICIC_IC_NTF
Line 4991: [RRM => L1LC] Decode RRM_L1LC_FEICIC_NTF
Line 5031: [L1LC => RRM] Send L1LC_RRM_SCELL_DEACT_TIMER_EXPIRY_IND
Line 5036: Cannot Allocate Message buffer
Line 5064: [L1LC => RRM] Send L1LC_RRM_SCELL_RTG_UPDATE_NTF
Line 5069: Cannot Allocate Message buffer
Line 5104: L1LC_DecodeRrmEventA3Ntf(%d)
Line 5160: [RRM => L1LC] Decode RRM_L1LC_WIFI_COEXIST_INFO_NTF (wifi_coexist_info: %d)
Line 5181: [RRM => L1LC] Decode RRM_L1LC_SL_PRECONFIG_NTF
Line 5214: [RRM => L1LC] Decode RRM_L1LC_SL_SIB18_UPDATE_NTF
Line 5243: [RRM => L1LC] Decode RRM_L1LC_SL_SIB19_UPDATE_NTF
Line 5273: [RRM => L1LC] Decode RRM_L1LC_SL_DEDI_TX_CONFIG_NTF
Line 5302: [RRM => L1LC] Decode RRM_L1LC_SL_ACTIVATE_NTF
Line 5311: CC(%d) is already in use for earfcn(%d), type(%d)
Line 5355: [SlActivateNtf]SetTdpState(CC%d):state(%d->%d)
Line 5412: [RRM => L1LC] Decode RRM_L1LC_SL_DEACTIVATE_NTF
Line 5416: Not found activated CC for sidelink
Line 5459: [RRM => L1LC] Decode RRM_L1LC_SL_SET_RX_RSC_POOL_NTF
Line 5489: [RRM => L1LC] Decode RRM_L1LC_SL_SET_TX_RSC_POOL_NTF
Line 5513: [RRM => L1LC] Decode RRM_L1LC_SL_SYNCTX_CONTROL_NTF
Line 5537: [RRM => L1LC] Decode RRM_L1LC_SL_OOC_SCHEDULE_DONE_NTF
Line 5571: [RRM => L1LC] Decode RRM_L1LC_SL_MEASURE_REQ
Line 5590: [RRM => L1LC] Decode RRM_L1LC_VOLTE_STATUS_NTF (%d)
Line 5622: [RRM => L1LC] Decode RRM_L1LC_SET_SFNINFO_NTF
Line 5641: [L1LC => RRM] Send L1LC_RRM_SET_DL_FREQ_CNF
Line 5646: Cannot Allocate Message buffer
Line 5672: [L1LC => RRM] Send L1LC_RRM_FREQ_SCAN_CNF
Line 5677: Cannot Allocate Message buffer
Line 5721: [L1LC => RRM] Send L1LC_RRM_SEARCH_CNF
Line 5726: Cannot Allocate Message buffer
Line 5753: [L1LC => RRM] Send L1LC_RRM_SL_MEASURE_CNF
Line 5758: Cannot Allocate Message buffer
Line 5788: [L1LC => RRM] Send L1LC_RRM_SL_SYNCREFUE_LOST_IND
Line 5793: Cannot Allocate Message buffer
Line 5819: [L1LC => RRM] Send L1LC_RRM_MEASURE_CNF(isLastMeas:%d)
Line 5824: Cannot Allocate Message buffer
Line 5851: [L1LC => RRM] Send L1LC_RRM_PBCH_DECODE_CNF
Line 5856: Cannot Allocate Message buffer
Line 5918: [L1LC => RRM] Send L1LC_RRM_MEASURE_STOP_CNF
Line 5923: Cannot Allocate Message buffer
Line 5948: [L1LC => RRM] Send L1LC_RRM_ALL_STOP_CNF
Line 5953: Cannot Allocate Message buffer
Line 6000: Cannot Allocate Message buffer
Line 6100: [L1LC => RRM] Send L1LC_RRM_MEAS_SCHEDULE_IND
Line 6123: [L1LC => RRM] Send L1LC_RRM_CELL_CHANGE_CNF
Line 6128: Cannot Allocate Message buffer
Line 6156: [L1LC => RRM] Send L1LC_RRM_OUT_OF_SYNC_IND
Line 6161: Cannot Allocate Message buffer
Line 6168: pSendMsg->req.OutOfSyncInd.oosCause:%d
Line 6207: [L1LC => RRM] Send L1LC_RRM_IRAT_CDMA_INFO_IND
Line 6212: Cannot Allocate Message buffer
Line 6242: [L1LC => RRM] Send L1LC_RRM_IRAT_CDMA_CS_STATE_IND
Line 6247: Cannot Allocate Message buffer
Line 6273: [L1LC => RRM] Send L1LC_RRM_IN_SYNC_IND
Line 6278: Cannot Allocate Message buffer
Line 6305: [L1LC => RRM] Send L1LC_RRM_NCELL_TIMING_INFO_CNF
Line 6310: Cannot Allocate Message buffer
Line 6335: [L1LC => RRM] Send L1LC_RRM_SUSPEND_CNF
Line 6340: Cannot Allocate Message buffer
Line 6367: [L1LC => RRM] Send L1LC_RRM_OTDOA_MEASURE_RSP
Line 6372: [ERROR] L1LC_SendRrmOtdoaMeasureRsp :: Incoming OTDOA Response is NULL!!!
Line 6380: [ERROR] L1LC_SendRrmOtdoaMeasureRsp :: Cannot Allocate Message Buffer!!!
Line 6409: [L1LC => RRM] Send L1LC_RRM_RSTD_INTER_FREQ_MEAS_IND
Line 6414: [ERROR] L1LC_SendRrmRstdInterFreqMeasInd :: Cannot Allocate Message Buffer!!!
Line 6440: [L1LC => RRM] Send L1LC_RRM_RESUME_CNF
Line 6445: Cannot Allocate Message buffer
Line 6471: [L1LC => RRM] Send L1LC_RRM_SHADE_CNF
Line 6476: Cannot Allocate Message buffer
Line 6499: [L1LC => RRM] Send L1LC_RRM_FORCE_WAKEUP_CNF
Line 6504: Cannot Allocate Message buffer
Line 6534: [L1LC => RRM] Send L1LC_RRM_SHADE_WAKEUP_IND
Line 6539: Cannot Allocate Message buffer
Line 6564: [L1LC => RRM] Send L1LC_RRM_WAKEUP_IND
Line 6569: Cannot Allocate Message buffer
Line 6597: [L1LC => RRM] Send L1LC_RRM_BPLMN_CGI_START_IND
Line 6602: Cannot Allocate Message buffer
Line 6628: [L1LC => RRM] Send L1LC_RRM_PAGING_DONE_IND
Line 6633: Cannot Allocate Message buffer
Line 6659: [L1LC => RRM] Send L1LC_RRM_REINIT_DRX_IND
Line 6664: Cannot Allocate Message buffer
Line 6678: [L1LC_DisableDsdsMask] -> 0x00
Line 6717: [L1LC => RRM] Send L1LC_RRM_MEASURE_CONFIG_IND
Line 6722: Cannot Allocate Message buffer
Line 6747: [L1LC => RRM] Send L1LC_RRM_MEASURE_SUSPEND_FOR_TX_REQ
Line 6752: Cannot Allocate Message buffer
Line 6775: [L1LC => RRM] Send L1LC_RRM_MEASURE_RESUME_FOR_TX_IND
Line 6780: Cannot Allocate Message buffer
Line 6808: [L1LC => RRM] Send L1LC_RRM_SET_SIUPDATE_TMR_IND
Line 6813: Cannot Allocate Message buffer
Line 6839: [L1LC => RRM] Send L1LC_RRM_BARRED_LIST_REQ
Line 6844: Cannot Allocate Message buffer
Line 6870: [L1LC => RRM] Send L1LC_RRM_CLK_EST_DONE_IND
Line 6875: Cannot Allocate Message buffer
Line 6901: [L1LC => RRM] Send L1LC_RRM_SEARCH_REQUEST_IND
Line 6906: Cannot Allocate Message buffer
Line 6930: [L1LC => RRM] Send L1LC_RRM_BACKGROUND_START_LTE_ACTIVE_IND
Line 6935: Cannot Allocate Message buffer
Line 6959: [L1LC => RRM] Send L1LC_RRM_BACKGROUND_STOP_LTE_ACTIVE_IND
Line 6964: Cannot Allocate Message buffer
Line 6990: [L1LC => RRM] Send L1LC_RRM_BACKGROUND_START_IND
Line 6995: Cannot Allocate Message buffer
Line 7020: [L1LC => RRM] Send L1LC_RRM_CGI_STOP_RSP
Line 7025: Cannot Allocate Message buffer
Line 7052: [L1LC => RRM] Send L1LC_RRM_UMTS_SFN_MIB_ACQUISITION_IND
Line 7057: Cannot Allocate Message buffer
Line 7084: Measure had been stopped. Ignore MMC_LTEL1_GSM_TIMING_LATCH_CNF.
Line 7088: [MMC => L1LC] Decode MMC_LTEL1_GSM_TIMING_LATCH_CNF
Line 7148: Measure had been stopped. Ignore MMC_LTEL1_GSM_RSSI_MEASURE_CNF.
Line 7152: [MMC => L1LC] Decode MMC_LTEL1_GSM_RSSI_MEASURE_CNF
Line 7186: Measure had been stopped. Ignore MMC_LTEL1_GSM_FCH_ACQ_CNF.
Line 7190: [MMC => L1LC] Decode MMC_LTEL1_GSM_FCH_ACQ_CNF
Line 7224: Measure had been stopped. Ignore MMC_LTEL1_GSM_SCH_ACQ_CNF.
Line 7228: [MMC => L1LC] Decode MMC_LTEL1_GSM_SCH_ACQ_CNF
Line 7262: Measure had been stopped. Ignore MMC_LTEL1_UMTS_TIMING_LATCH_CNF.
Line 7266: [MMC => L1LC] Decode MMC_LTEL1_UMTS_TIMING_LATCH_CNF
Line 7318: Measure had been stopped. Ignore MMC_LTEL1_UMTS_CELL_SEARCH_CNF.
Line 7322: [MMC => L1LC] Decode MMC_LTEL1_UMTS_CELL_SEARCH_CNF
Line 7355: Measure had been stopped. Ignore MMC_LTEL1_UMTS_PARTIAL_SEARCH_CNF.
Line 7359: [MMC => L1LC] Decode MMC_LTEL1_UMTS_PARTIAL_SEARCH_CNF
Line 7392: Measure had been stopped. Ignore MMC_LTEL1_UMTS_TDD_PARTIAL_SEARCH_CNF.
Line 7396: [MMC => L1LC] Decode MMC_LTEL1_UMTS_TDD_PARTIAL_SEARCH_CNF
Line 7429: Measure had been stopped. Ignore MMC_LTEL1_UMTS_INIT_MEASURE_CNF.
Line 7433: [MMC => L1LC] Decode MMC_LTEL1_UMTS_INIT_MEASURE_CNF
Line 7466: Measure had been stopped. Ignore MMC_LTEL1_UMTS_MEASURE_CNF.
Line 7470: [MMC => L1LC] Decode MMC_LTEL1_UMTS_MEASURE_CNF
Line 7502: [MMC => L1LC] Decode MMC_LTEL1_UMTS_CGI_ACQUISITION_CNF
Line 7531: [MMC => L1LC] Decode MMC_LTEL1_LEGACY_MEASURE_CNF
Line 7561: [MMC => L1LC] Decode MMC_LTEL1_CDMA_TIMING_LATCH_CNF(rat_mode:%d)
Line 7621: [MMC => L1LC] Decode MMC_LTEL1_CDMA_MEAS_RESULT_IND(freq num : %d)
Line 7660: [MMC => L1LC] Decode MMC_LTEL1_LTE_TIMING_LATCH_REQ(%d)
Line 7665: gL1LC_DrxState(%d), prev_source_rat(%d), cur_source_rat(%d)
Line 7754: MMC MSG(L1LC_DecodeMmcLteAgcInitReq) from DRX_STATE_SUSPEND
Line 7759: [MMC => L1LC] Decode MMC_LTEL1_LTE_AGC_INIT_REQ
Line 7789: MMC MSG(L1LC_DecodeMmcLteCellSearchReq) from DRX_STATE_SUSPEND
Line 7794: [MMC => L1LC] Decode MMC_LTEL1_LTE_CELL_SEARCH_REQ
Line 7842: MMC MSG(L1LC_DecodeMmcLteMeasureReq) from DRX_STATE_SUSPEND
Line 7847: [MMC => L1LC] Decode MMC_LTEL1_LTE_MEASURE_REQ
Line 7895: MMC MSG(L1LC_DecodeMmcLteSearchMeasureReq) from DRX_STATE_SUSPEND
Line 7905: [MMC => L1LC] Decode MMC_LTEL1_LTE_SEARCH_MEASURE_REQ
Line 7935: MMC MSG(L1LC_DecodeMmcLteMeasReselReq) from DRX_STATE_SUSPEND
Line 7940: [MMC => L1LC] Decode MMC_LTEL1_LTE_MEAS_RESEL_REQ
Line 7968: MMC MSG(L1LC_DecodeMmcLteMesaStopReq) from DRX_STATE_SUSPEND
Line 7973: [MMC => L1LC] Decode MMC_LTEL1_LTE_MEAS_STOP_REQ
Line 7992: [MMC => L1LC] Decode MMC_LTEL1_HEDGEMODE_IND
Line 8012: [MMC => L1LC] Decode MMC_LTEL1_CDMACS_STATUS_IND
Line 8032: [MMC => L1LC] Decode MMC_LTEL1_START_DRX_INFOSHARE_IND
Line 8035: gL1LC_DrxState(%d) IsManualList (%d), Therefore L1LC send LTEL1_MMC_BACK_GND_PLMN_LIST_FAIL_IND to MMC
Line 8056: [MMC => L1LC] Decode MMC_LTEL1_BPLMN_SRCH_STOP_IND
Line 8093: [MMC => L1LC] Decode MMC_HEDGE_LTEL1_BPLMN_SRCH_START_IND gL1LC_DrxState[%d] avail_time[%d] start_time[%d]
Line 8106: DRX spare timer has already elapsed. elapsedTime=%d avail_time=%d
Line 8140: [DRX] SleepAbort is Failed (Minimun Sleep Abort Allowable Time[ST: %d, %d, %d])
Line 8147: [DRX] SleepAbort is Failed (Minimun Sleep Abort Allowable Time[ST:%d, %d, %d])
Line 8154: [DRX] Sleep Start Time : (Previous %dus) vs (Current %dus)
Line 8165: [DRX] hal_sleepTime(%d (100us))
Line 8175: [DRX] Avail_Time(%d (ms) is shorter than IDLE_BPLMN_MIN_TIME + gDrx_SysStableTime/10 - DRX_INFO_WARMUP_PERIOD)
Line 8181: [DRX] Don't need to turn on the modem!
Line 8201: [DRX] HW is not off actually
Line 8207: [DRX] gDrx_PowerOn_TimingLatch, Skip Modem/Dsp power on 
Line 8221: [DRX] gDrx_PowerOn_TimingLatch (Other ST: %d), Skip Modem/Dsp power on 
Line 8306: [DRX] Diff cellboundary is zero!
Line 8367: G2L search/measure is running, Pending BPLMN start avail_time(%d)
Line 8372: Current state is not suspend(%d)
Line 8377: [LTE_DSDS] RRM request [%d] is freed!!
Line 8401: [MMC => L1LC] Decode MMC_HEDGE_LTEL1_BPLMN_SRCH_HOLD_IND
Line 8417: [MMC => L1LC] Decode MMC_LTEL1_BPLMN_ABORT_DONE_IND
Line 8435: sleep abort avoided at L1LC_DecodeMmcLteL1BplmnAbortDoneInd
Line 8439: sleep abort at L1LC_DecodeMmcLteL1BplmnAbortDoneInd
Line 8459: Ignore the MMC_LTEL1_UL_INACTIVITY_IND(%d): DATA_BLOCK(%d), RAT(%d), SIM(%d), TM(%d), UE(%d)
Line 8465: [MMC => L1LC] Decode MMC_LTEL1_UL_INACTIVITY_IND(%d): testSIM(%d) Conn(%d) TM(%d) gL1LC_SinrStatus(%d)
Line 8482: Ignore L1LC_DecodeMmcLteL1UlInactivityInd due to DSDS_RF_UNAVAILABLE
Line 8486: Ignore L1LC_DecodeMmcLteL1UlInactivityInd due to DSDS_RF_UNAVAILABLE
Line 8529: [MMC => L1LC] Process MMC_LTEL1_GRIP_SENSOR_STATE_REQ (Feature: %d, Sensor status: 0x%X)
Line 8566: [AS] Proximity Backoff:OFF, Proximity Sensor status:%d
Line 8570: [AS] Force switch to down antenna
Line 8621: [MMC => L1LC] Process MMC_LTEL1_ANT_SWITCH_INFO_REQ (AS INFO: 0x%X)
Line 8640: [MMC => L1LC] Process MMC_LTEL1_AIT_TESTMODE_REQ (CP EVENT INFO: 0x%X)
Line 8659: [MMC => L1LC] Decode MMC_LTEL1_SENSOR_STATE_REQ (Feature: 0x%x, Sensor status: 0x%x)
Line 8714: [L1LC => %s] Send LTEL1_MMC_GSM_TIMING_LATCH_REQ
Line 8718: Simulate sending LTEL1_MMC_GSM_TIMING_LATCH_REQ to MMC
Line 8725: Cannot Allocate Message buffer
Line 8757: [L1LC => %s] Send LTEL1_MMC_GSM_RSSI_MEASURE_REQ
Line 8761: Simulate sending LTEL1_MMC_GSM_RSSI_MEASURE_REQ to MMC
Line 8768: Cannot Allocate Message buffer
Line 8801: [L1LC => %s] Send LTEL1_MMC_GSM_FCH_ACQ_REQ
Line 8805: [L1LC => %s] Send LTEL1_MMC_GSM_POWER_DOWN_REQ
Line 8810: Simulate sending L1LC_SendMmcGsmFchAcqReq to MMC
Line 8817: Cannot Allocate Message buffer
Line 8847: [L1LC => %s] Send LTEL1_MMC_GSM_SCH_ACQ_REQ
Line 8851: Simulate sending LTEL1_MMC_GSM_SCH_ACQ_REQ to MMC
Line 8858: Cannot Allocate Message buffer
Line 8890: [L1LC => %s] Send LTEL1_MMC_UMTS_TIMING_LATCH_REQ
Line 8894: Simulate sending LTEL1_MMC_UMTS_TIMING_LATCH_REQ to MMC
Line 8901: Cannot Allocate Message buffer
Line 8942: [L1LC => %s] Send LTEL1_MMC_UMTS_CELL_SEARCH_REQ
Line 8946: Simulate sending LTEL1_MMC_UMTS_CELL_SEARCH_REQ to MMC
Line 8953: Cannot Allocate Message buffer
Line 8983: [L1LC => %s] Send LTEL1_MMC_UMTS_PARTIAL_SEARCH_REQ
Line 8987: Simulate sending LTEL1_MMC_UMTS_PARTIAL_SEARCH_REQ to MMC
Line 8994: Cannot Allocate Message buffer
Line 9024: [L1LC => %s] Send LTEL1_MMC_UMTS_TDD_PARTIAL_SEARCH_REQ
Line 9028: Simulate sending LTEL1_MMC_UMTS_TDD_PARTIAL_SEARCH_REQ to MMC
Line 9035: Cannot Allocate Message buffer
Line 9066: [L1LC => %s] Send LTEL1_MMC_UMTS_INIT_MEASURE_REQ
Line 9070: Simulate sending LTEL1_MMC_UMTS_INIT_MEASURE_REQ to MMC
Line 9077: Cannot Allocate Message buffer
Line 9107: [L1LC => %s] Send LTEL1_MMC_UMTS_MEASURE_REQ
Line 9111: Simulate sending LTEL1_MMC_UMTS_MEASURE_REQ to MMC
Line 9118: Cannot Allocate Message buffer
Line 9150: [L1LC => %s] Send LTEL1_MMC_UMTS_CGI_ACQUISITION_REQ
Line 9154: Simulate sending LTEL1_MMC_UMTS_CGI_ACQUISITION_REQ to MMC
Line 9161: Cannot Allocate Message buffer
Line 9191: [L1LC => %s] Send LTEL1_MMC_LEGACY_MEASURE_REQ
Line 9195: Simulate sending LTEL1_MMC_LEGACY_MEASURE_REQ to MMC
Line 9202: Cannot Allocate Message buffer
Line 9230: [L1LC => %s] Send LTEL1_MMC_LEGACY_MEAS_STOP_REQ
Line 9234: Simulate sending LTEL1_MMC_LEGACY_MEAS_STOP_REQ to MMC
Line 9241: Cannot Allocate Message buffer
Line 9273: [L1LC => %s] Send LTEL1_MMC_CDMA_TIMING_LATCH_REQ
Line 9278: Cannot Allocate Message buffer
Line 9330: [L1LC => MMC] Send LTEL1_MMC_CDMA_MEAS_REQ
Line 9334: Simulate sending LTEL1_MMC_CDMA_MEAS_REQ to MMC
Line 9341: Cannot Allocate Message buffer
Line 9369: [L1LC => %s] Send LTEL1_MMC_LTE_TIMING_LATCH_CNF
Line 9373: Simulate sending LTEL1_MMC_LTE_TIMING_LATCH_CNF to MMC
Line 9380: Cannot Allocate Message buffer
Line 9390: EmodemStatus %d
Line 9427: [L1LC => %s] Send LTEL1_MMC_LTE_AGC_INIT_CNF
Line 9432: Simulate sending LTEL1_MMC_LTE_AGC_INIT_CNF to MMC
Line 9439: Cannot Allocate Message buffer
Line 9469: [L1LC => %s] Send LTEL1_MMC_LTE_CELL_SEARCH_CNF
Line 9474: Simulate sending LTEL1_MMC_LTE_CELL_SEARCH_CNF to MMC
Line 9477: Simulate sending LTEL1_MMC_LTE_CELL_SEARCH_CNF to MMC => Check LteCellSearchCnf_msg earfcn:%d, AGC1:%d, AGC2:%d, AFC:%d, numOfcells:%d
Line 9482: CELL[%d] - cell_id(%d), cp_type:%d, FramePosition:%d
Line 9490: Cannot Allocate Message buffer
Line 9520: [L1LC => %s] Send LTEL1_MMC_LTE_MEASURE_CNF
Line 9524: Simulate sending LTEL1_MMC_LTE_MEASURE_CNF to MMC
Line 9531: Cannot Allocate Message buffer
Line 9561: [L1LC => %s] Send LTEL1_MMC_LTE_SEARCH_MEASURE_CNF
Line 9565: Simulate sending LTEL1_MMC_LTE_SEARCH_MEASURE_CNF to MMC
Line 9572: Cannot Allocate Message buffer
Line 9609: [L1LC => %s] Send LTEL1_MMC_LTE_MEAS_RESEL_CNF
Line 9613: Simulate sending LTEL1_MMC_LTE_MEAS_RESEL_CNF to MMC(cell num:%d)
Line 9620: Cannot Allocate Message buffer
Line 9650: [L1LC => %s] Send LTEL1_TO_2G3G_MMC_BPLMN_SRCH_START_IND
Line 9655: Cannot Allocate Message buffer
Line 9713: [L1LC => %s] SKIP SENDING LTEL1_TO_2G3G_MMC_BPLMN_SRCH_HOLD_IND
Line 9717: [L1LC => %s] Send LTEL1_TO_2G3G_MMC_BPLMN_SRCH_HOLD_IND
Line 9724: Cannot Allocate Message buffer
Line 9790: [L1LC => MMC] Send LTEL1_MMC_BACK_GND_PLMN_LIST_FAIL_IND
Line 9795: Cannot Allocate Message buffer
Line 9825: [L1LC => MMC] Send LTEL1_MMC_TIMING_AIDING_RSP
Line 9830: Cannot Allocate Message buffer
Line 9943: [L1LC => L1LC] Send L1LC_INT_SYNC_TIMER_EXPIRED
Line 9948: Cannot Allocate Message buffer
Line 10007: [L1LC=> L1LC] Send L1LC_INT_MEAS_TIMER_EXPIRED
Line 10012: Cannot Allocate Message buffer
Line 10039: [L1LC => L1LC] Send L1LC_INT_MBSFN_DRX_TIMER_EXPIRED
Line 10044: Cannot Allocate Message buffer
Line 10071: [L1LC => L1LC] [4G_DRDS] Send L1LC_INT_EDV_NTF
Line 10076: Cannot Allocate Message buffer
Line 10100: [L1LC => L1LC] [4G_DRDS] Decode L1LC_INT_EDV_NTF
Line 10104: [4G_DRDS] SCG got suspened, do not activate eDV. Reset will be done as part of Suspend procedure
Line 10116: [L1LC => L1LC] [4G_DRDS] Reset EDV variable and trigger recovery procedure
Line 10157: [L1LC => L1LC] [4G_DRDS] Decode HAL_L1LC_EDV_SCG_IPC_IND
Line 10184: [L1LC => L1LC] [4G_DRDS] Decode HAL_L1LC_UPDATE_RFBAND_LIST_IND
Line 10304: [4GDS] There is no RF resource
Line 10313: [HAL=> L1LC] Send HAL_L1LC_MEAS_DURATION_IND (LTERRM_L1LC_CMEAS_GAP)
Line 10322: DecodeHalMeasDurationInd - DmtcEnable(%d)
Line 10396: [4GDS] There is no RF resource
Line 10407: [RSTD] Skip GAP_SCHEDULE_IND (curMode:%d, curIratMode:%d)
Line 10411: GAP_SCHEDULE_IND Measure(curMode:%d, curIratMode:%d)
Line 10433: GAP_SCHEDULE_IND Measure(curMode:%d, curIratMode:%d)
Line 10580: L1LC_DecodeHalGapEndInd:  [RSTD] Ignore the Dummy Sync Results
Line 10601: GapEnd_Intra_L1LC_StartMeas
Line 10609: GapEnd_IRAT_L1LC_StartMeas
Line 10682: L1LC_DrxStateInit
Line 10792: [DRX-MBSFN] Sleep not triggered for MBSFN
Line 10803: [DRX-MBSFN] [Conn State] Wrap around Condition Current SFN[%d] Mbsfn_Start_info SFN[%d]
Line 10815: [DRX-MBSFN] Current Time SFN[%d] TTI[%d] offset[%d]
Line 10820: [DRX-MBSFN] Timer-2 Created = %d
Line 10863: [HAL ==> L1LC] Decode HAL_L1LC_MEAS_TIMING_IND
Line 10868: [4G_DRDS] Do not send HAL_L1LC_MEAS_TIMING_IND for SCG stack in IDLE-IDLE 4G_DRDS state
Line 10876: Do not start measurement during reinit drx period
Line 10986: [DRX-MBSFN] Sleep not triggered for MBSFN
Line 10993: [DRX-MBSFN] Paging Rcv Intr set at paging_frame(%d), paging_offset(%d), curTimeSFN(%d, %d)
Line 11003: [DRX-MBSFN] [Idle State] Wrap around Condition Current SFN[%d] Mbsfn_Start_info SFN[%d]
Line 11013: [DRX-MBSFN] Timer value is not sufficient, Default timer created[%d]
Line 11016: [DRX-MBSFN] Mbsfn_End_info.sfn[%d] Mbsfn_End_info.sfn[%d] time[%d]
Line 11018: [DRX-MBSFN] Current Time SFN[%d] TTI[%d] offset[%d]
Line 11023: [DRX-MBSFN] Timer-2 Created = %d
Line 11059: [LTE L1LC] PendingFromMeasReq[%d]!!!
Line 11065: [LTE L1LC] PendingFromIsDuringMeas[%d]!!!
Line 11070: [LTE L1LC] !!! pNextMeasElem is NULL !!!
Line 11111: [4G_DRDS] Start the Pending MeasureReq[%d] in SCG stack
Line 11117: [4G_DRDS] Update RF cause as MeasureReq[%d] is pending in SCG stack!
Line 11127: [4G_DRDS] Update RF cause Result : %d !!!
Line 11137: [4G_DRDS] Deactivate 4G_DRDS as PauseInd is TRUE in SCG stack !
Line 11167: Do not start measurement during reinit drx period
Line 11239: Measure is running, Sleep pass.
Line 11252: Abnormal behavior, CurrMeasFlag(%d), ue_state(%d)
Line 11301: Skip TX path recovery at this time(due to GAP)(gHALSC_IdleGapOnGoing(%d) gHALSC_PrepareGapMeas(%d))
Line 11382: [L1LC => RRM] Send L1LC_RRM_MCCH_CHANGE_IND
Line 11387: Cannot Allocate Message buffer
Line 11415: [L1LC => RRM] Send L1LC_RRM_MBSFN_SIG_STRENGTH_RSP
Line 11419: [L1LC] [%d]snr[%d] area_id[%d] eSnr[%d]
Line 11425: Cannot Allocate Message buffer
Line 11449: [HAL => L1LC] Decode HAL_L1LC_RSTD_MEASURE_DONE_IND
Line 11466: [HAL => L1LC] Decode HAL_L1LC_RSTD_SCHEDULE_IND
Line 11483: [HAL => L1LC] Decode HAL_L1LC_AGAP_STOP_IND
Line 11561: [4G_DRDS] restore Dynamic QS (4G_DRDS deact)
Line 11595: DecodeHalSCellDeactCnfInd(%d) during no RF resource
Line 11650: DecodeHalSCellDeactCnfInd: Invalid CNF message type(%d)
Line 11681: L1LC_DecodeHalSinrStatusInd: Skip due to UE state(%d)
Line 11685: [HAL => L1LC] Decode HAL_L1LC_SINR_STATUS_IND(%d, %d)
Line 11687: L1LC_DecodeHalSinrStatusInd(gL1LC_DataActivityStatus:%d gL1LC_SinrStatus[%d]:%d gDrxL1_Flag:%d)
Line 11695: Ignore L1LC_DecodeHalSinrStatusInd due to DSDS_RF_UNAVAILABLE
Line 11699: Ignore L1LC_DecodeHalSinrStatusInd due to DSDS_RF_UNAVAILABLE
Line 11705: L1LC_DecodeHalSinrStatusInd: Skip due to GAP scheduled in %dms
Line 11765: [L1LC => L1TX] Send L1LC_L1TX_TX_CNF:TxType(%d)
Line 11769: Simulate sending L1LC_L1TX_TX_CNF to L1TX
Line 11776: Cannot Allocate Message buffer
Line 11816: [L1RX => L1LC] Decode L1RX_L1LC_RX_DATA_IND (gL1LC_DataActivityStatus:%d gL1LC_SinrStatus[CC0]:%d gDrxL1_Flag:%d)
Line 11821: Ignore L1LC_DecodeL1rxRxDataInd due to DSDS_RF_UNAVAILABLE
Line 11825: Ignore L1LC_DecodeL1rxRxDataInd due to DSDS_RF_UNAVAILABLE
Line 11853: L1LC_DecodeL1rxRxDataInd(gL1LC_DataActivityStatus:%d gL1LC_SinrStatus[CC0]:%d gDrxL1_Flag:%d)
Line 11920: [L1LC => L2TX] Send L1LC_L2HTX_TX_CNF
Line 11924: Simulate sending L1LC_L2HTX_TX_CNF to L2TX
Line 11931: Cannot Allocate Message buffer
Line 11982: [L1LC => L2RX] Send L1LC_L2RX_RX_CNF
Line 11986: Simulate sending L1LC_L2RX_RX_CNF to L2RX
Line 11993: Cannot Allocate Message buffer
Line 12033: [LTE DSDS] assert condition : Message is NULL
Line 12051: [LTE DSDS] assert condition : Message Sending failed
Line 12183: [L1LC => L1TX] Send L1LC_L1TX_TX_RF_STATUS_IND
Line 12188: Cannot Allocate Message buffer
Line 12211: [L1LC => L1TX] Send L1LC_L1TX_TX_RF_RELEASE_IND
Line 12216: Cannot Allocate Message buffer
Line 12250: [SR-IF => L1LC]: Decode MMCIF_L1LC_DSL1C_RSRC_RSP [%s],EarlyPauseDuration[%u],Early_time[%u], retry_time[%u]
Line 12253: [LTE L1LC DSL1RC] RSRC_REQ and RSRC_RSP message number [%d][%d]
Line 12257: [LTE L1LC DSL1RC] Process the Grant received after Wait/Reg Timer Expiry at MMC-IF
Line 12261: [LTE L1LC DSL1RC] Ignore response due to mismatched number
Line 12270: Early Pause Timer stop
Line 12277: Ignore Early Pause Timer as eDV is active. Early Pause Time(%u)
Line 12288: Early Pause Time(%u) is too small - But UE is in DRX sleep. RF will be released
Line 12314: [4G_DRDS] eDV_AvailableforEPT(%d -> %d)
Line 12322: [4G_DRDS] Don't do pause done ! EDV_Active [%u] EDV_State [%d]
Line 12330: Early Pause Time(%u) is too small - send PAUSE DONE CNF
Line 12357: Early Pause Timer started with [%u]us!!!
Line 12367: early_pause_duration [%u]us/Early time is negative/Timer is already running!!!
Line 12372: Early pause duration is zero
Line 12393: [SR-IF => L1LC]: Decode MMCIF_L1LC_DSL1C_PAUSE_REQ
Line 12423: [SR-IF => L1LC]: Decode MMCIF_L1LC_DSL1C_RSRC_RESUME with EarlyPauseDuration[%u],Early_time[%u]
Line 12430: [LTE L1LC DSL1RC] Ignore RESUME. RF is already released. No Resume awaited at L1LC at this time!!!
Line 12442: Early Pause Timer stop
Line 12450: gL1LC_DsdsReleaseAndReqTmr Timer stop
Line 12458: Early Pause Timer started with [%u]us!!!
Line 12462: early_pause_duration [%u]us/Early time is negative/Timer is already running!!!
Line 12496: [SR-IF => L1LC]: Decode MMCIF_L1LC_DSL1C_START_TIMER_IND with EarlyPauseDuration[%u],Early_time[%u]
Line 12503: Early Pause Timer stop
Line 12513: Early Pause Timer started with [%u]us!!!
Line 12533: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSetDlFreq!!!
Line 12542: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSearchReq!!!
Line 12555: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Meas Processing -PendingFromMeasReq[%d]!!!
Line 12566: early_pause_duration [%u]us / Early time is negative!!
Line 12583: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSetDlFreq!!!
Line 12592: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSearchReq!!!
Line 12605: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Meas Processing -PendingFromMeasReq[%d]!!!
Line 12630: [SR-IF => L1LC]: Decode MMCIF_L1LC_DSL1C_STOP_TIMER_IND
Line 12636: Early Pause Timer stop
Line 12654: [SR-IF => L1LC] Decode MMCIF_L1LC_DSL1C_PSPS_IND. IsPsPsEnabled[%s]
Line 12661: [LTE PSPS] PSPS Scheme Started! Enable RF Protection during C-DRX Sleep
Line 12665: [LTE PSPS] PSPS Scheme stopped! Stop Early Pause Timer
Line 12689: [SR-IF => L1LC]: Decode MMCIF_L1LC_DSL1C_2G_CS_CALL_IND
Line 12701: [LTE L1LC DSL1RC] Suspend is expected for the Call on other stack..Restarted Protecting timer for 100ms!!!
Line 12720: [HAL => L1LC]: Decode HAL_L1LC_WAKEUP_START_IND
Line 12742: [HAL => L1LC]: Decode HAL_L1LC_CONFIG_GAP_INT
Line 12758: [MTM => L1LC] Decode MTM_L1LC_FER_MEAS_REQ
Line 12774: [HAL => L1LC] Decode HAL_L1LC_DRX_WAKEUP_IND1
Line 12796: [HAL => L1LC] Decode HAL_L1LC_DRX_WAKEUP_IND2
Line 12824: [L1LC => SRIF] LTE_L1LC_MMCIF_DSL1C_PAUSE_DONE_CNF - RELEASE[%s], Register[%d]
Line 12836: Cannot Allocate Message buffer
Line 12853: IsInConnected [%u], DutyCycle [%u]
Line 12884: [L1LC => SRIF] LTE_L1LC_MMCIF_DSL1C_RELEASE_IND  [%s]
Line 12896: Cannot Allocate Message buffer
Line 12924: IsInConnected [%u], NextEventPresent [%u], NextWakeupCause [%u], NextEventStartTime [%u], NextEventDuration [%u]
Line 12957: [L1LC => SRIF] LTE_L1LC_MMCIF_DSL1C_RSRC_REQ [%s]
Line 12971: L1LC_SendSrIfReq->Csfb(%d), Handover (%d)
Line 12978: L1LC_SendSrIfReq->RF status(%s), remaining Early pause time(%u)
Line 12985: RF Cause Update Pending due to nearby Early pause time
Line 12991: RF Cause : Signalling. Do not check nearby Early pause time
Line 12999: Cannot Allocate Message buffer
Line 13026: IsInConnected [%u], DutyCycle [%u]
Line 13034: Early Pause Timer stop
Line 13066: LTE L1LC is already in deregistered state, do not send deregister again
Line 13070: [L1LC => SRIF] send LTE_L1LC_MMCIF_DSL1C_REG_IND :: Register[%s] Deregister[%s]
Line 13077: Cannot Allocate Message buffer
Line 13087: gL1LC_IsBplmnOnOtherRat[%d] gL1LC_CgiInfo.isEnable[%d] L1LC_CgiMeasMode[%d]
Line 13137: [L1LC => SRIF] send LTE_L1LC_MMCIF_DSL1C_UPDATE_TIME_IND time[%u]eventDuration[%u]
Line 13154: Cannot Allocate Message buffer
Line 13182: [L1LC => RRM] Send L1LC_RRM_DSDS_RELEASE_IND
Line 13188: Cannot Allocate Message buffer
Line 13215: [L1LC => RRM] Send L1LC_RRM_PROC_PAUSE_IND [%d]
Line 13223: Cannot Allocate Message buffer
Line 13256: [L1LC => RRM] Send L1LC_RRM_PROC_RESUME_IND 
Line 13262: Cannot Allocate Message buffer
Line 13284: [RRM => L1LC] Decode RRM_L1LC_SIGNALLING_IND [%d]
Line 13299: [RRM => L1LC] Decode RRM_L1LC_IDLE_STATE_IND
Line 13315: [RRM => L1LC] Decode RRM_L1LC_OTHER_RAT_BPLMN_IND
Line 13325: gL1LC_OtherRatBplmnStart(%d), Therefore L1LC send LTEL1_MMC_BACK_GND_PLMN_LIST_FAIL_IND to MMC
Line 13345: [RRM => L1LC] Decode RRM_L1LC_HIGH_PRIORITY_IND [%d, %d]
Line 13361: [RRM => L1LC] Decode RRM_L1LC_DSDS_PAUSE_IND
Line 13368: [4G_DRDS] PauseInd received in ST[%u]. eDV_Active[%u], MeasMode[%u], IsPreponeSet[%u]
Line 13374: [4G_DRDS] Deactivate 4G_DRDS as PauseInd is received in SCG stack!
Line 13383: Wakeup procedure is not completed. Hence do not send pause done yet!
Line 13418: Pause Indication received in RF unavailable state
Line 13435: [RRM => L1LC] Decode RRM_L1LC_DSDS_RESUME_IND
Line 13445: Ignore RESUME_IND due to Modem Power Off
Line 13503: [RRM => L1LC] Decode RRM_L1LC_CELL_CHANGE_START_IND
Line 13521: [LTE_L1LC] RFBand of SCG STACK should be removed
Line 13544: [L1LC => L1LC] Send L1LC_INT_EARLY_PAUSE_TIMER_EXPIRED
Line 13549: Cannot Allocate Message buffer
Line 13553: [LTE_DSDS] Search/Measure mode (HALSC_SyncMode: [%d], LTERRM_MEASMODE: [%d], curIratMode: [%d])
Line 13570: [LTE_DSDS]RF Pause Flag set
Line 13596: [L1LC => L1LC] Send L1LC_INT_DSDS_CONN_SIB_TIMER_EXPIRED
Line 13601: Cannot Allocate Message buffer
Line 13627: [L1LC => L1LC] Send L1LC_INT_DSDS_TIMER_EXPIRY_ACTION
Line 13632: Cannot Allocate Message buffer
Line 13658: [L1LC => L1LC] Send L1LC_INT_DSDS_BPLMN_DURATION_TIMER_EXPIRED
Line 13663: Cannot Allocate Message buffer
Line 13707: Set IsMandatarySibsReadReq as FALSE.
Line 13770: [L1LC => MMC] send LTE_L1LC_MMCIF_DSL1C_PSUPDATE_TIME_IND [%d]
Line 13776: Cannot Allocate Message buffer
Line 13788: UpdateTime [%u], EventDuration [%u], Cause [%u]
Line 13838: [L1LC => %s] Send LTEL1_MMC_UMTS_STOP_REQ
Line 13842: Simulate sending LTEL1_MMC_UMTS_STOP_REQ to MMC
Line 13849: Cannot Allocate Message buffer
Line 13882: [L1LC => %s] Send LTEL1_MMC_CDMA_STOP_REQ
Line 13899: [RRM => L1LC] Decode RRM_L1LC_SIB8_INFO_NTF
Line 13905: CMDA2000 info is absent
Line 13929: [HAL => L1LC] Decode HAL_L1LC_GNSS_TIME_AID_IND
Line 13957: [4G_DRDS] Do nothing in RsrcReqInd
Line 13963: [LTE L1LC DSL1RC] RsrcReqInd
Line 13979: Early Pause Timer stop, remain time (%d)
Line 13985: [4G_DRDS] eDV_Active[%u] Don't do early pause for Active Idle-Idle case !
Line 13990: [DRX] L1LC_DecodeHalRsrcReqInd: PreponePagingRFReqTime(%d)
Line 14001: [DRX][Before] PreponePagingRFReqTime(%d), Current SfnTTI(%d), next_paging_SfnTTI(%d)
Line 14014: [DRX][After] PreponePagingRFReqTime(%d), Current SfnTTI(%d), next_paging_SfnTTI(%d)
Line 14018: [DRX] Preponed HALDRX_ProcPagingRcvIntr, paging_frame=%d, paging_offset=%d, IsRfAvailable(%d)
Line 14036: [DRX] Saved AGC Index(%d, %d)
Line 14070: [L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_NR_4G_INFO_REQ
Line 14075: Cannot Allocate Message buffer
Line 14097: [L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_4G_NR_INFO_CNF
Line 14102: Cannot Allocate Message buffer
Line 14156: [SC] NSA CC%d: earfcn(%d), resv(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x)
Line 14171: [L1LC] tcxoFreqOffset(%d), refFreqOffset(%d)
Line 14179: [L1LC] 4G_NR_INFO_REQ : Path REQ, type(%d) //0:PCC, 1:SCC, used_cc_path(0x%x)
Line 14193: [L1LC] 4G_NR_INFO_REQ : Searcher REQ, SearchConfiguredflag(0x%x)
Line 14207: [L1LC] 4G_NR_INFO_REQ : Measure block REQ, MeasureConfiguredflag(0x%x)
Line 14218: [L1LC] 4G_NR_INFO_REQ : PATH_MODIFY from NR(TBD)
Line 14223: [L1LC] 4G_NR_INFO_REQ : NOT defined type, please check L1 tunnel message type(%d)
Line 14240: [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_4G_INFO_CNF(type:%d)
Line 14253: [L1TUNNEL => L1LC] Please check Message type(%d)
Line 14270: [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_INFO_UPDATE_IND
Line 14293: [L1LC] NR_INFO_UPDATE_IND : Searcher Release (0x%x)
Line 14300: [L1LC] NR_INFO_UPDATE_IND : Measure Block Release (0x%x), prevMode(%d)
Line 14321: [SC] NSA CC%d: earfcn(%d), resv(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(0x%x)
Line 14333: [L1LC] NR_INFO_UPDATE_IND : Path Release, cc_occupied(0x%x)
Line 14338: [L1TUNNEL => L1LC] NR_INFO_UPDATE_IND : Please check Message type(%d)
Line 14344: [L1LC] NR_INFO_UPDATE_IND : mode(%d), earfcn(%d), isEnable(%d)
Line 14365: [L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_NR_RESUME_SUSPEND_REQ(type:%d => 1:resume, 0:suspend)
Line 14370: Cannot Allocate Message buffer
Line 14391: [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_RESUME_SUSPEND_CNF
Line 14412: [L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_NR_4G_MEAS_REQ(measMode:%d)
Line 14417: Cannot Allocate Message buffer
Line 14438: [L1LC => L1TUNNEL] request information : band(%d), arfcn(%d), numOfCell(%d), subcarrierSpacing(%d), periodicity(%d), AgcGain(%d, %d)
Line 14441: [L1LC => L1TUNNEL] request information : smtc_included(%d), smtc.offset(%d), smtc.duration(%d), NumSsbToMeasure(%d), SsbToMeasure(0x%x, 0x%x)
Line 14451: [L1LC => L1TUNNEL] request information : cell_index#%d => cell_Id(%d), ssb_index(%d), timing_offset(%d)
Line 14473: [L1TUNNEL => L1LC] Decode L1LC_L1TUNNEL_NR_4G_MEAS_CNF(measMode:%d)
Line 14496: [L1LC] Search result : arfcn(%d), Num(%d), corr(%d), freq_offset(%d) timing_offset(%d), cell_id(%d)
Line 14499: [L1LC] Search result : AgcGain(%d, %d))
Line 14540: [L1LC] MeasResult : band(%d), arfcn(%d), Num(%d), cell_id(%d), ssb_index(%d), timing_offset(%d) rssi(%d)
Line 14543: [L1LC] MeasResult : rssi(%d), rsrp(%d) rsrq(%d), rssinr(%d)
Line 14549: [L1LC] MeasResult : AgcGain(%d, %d))
Line 14565: [L1LC] Pbch result : ssb_frequency(%d), cell_id(%d), ssb_index(%d), cell_barred(%d) intra_timing_reselection(%d)
Line 14572: [L1LC] Unknown measMode:%d
Line 14589: [L1LC] Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 14621: [L1LC => L1TUNNEL] Send L1LC_L1TUNNEL_NR_MEASSTOP_IND
Line 14626: Cannot Allocate Message buffer
Line 14652: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 14661: gHalDrx_ConnDrxState = DRX_CONN_INIT
