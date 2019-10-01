Line 847: [DRX] curTimeSFN=%d, curTimeTti=%d, curTimeOffset=%d)
Line 859: [DRX] EnablePagingRcvIntr : PagingRcvIntrTime (%d us)
Line 865: [DRX] HALDRX_EnablePagingRcvIntr: PreponePagingRFReqTime(%d)
Line 914: [DRX] curTimeSFN=%d, curTimeTti=%d, curTimeOffset=%d)
Line 926: [DRX] EnablePagingRcvIntrSCG : PagingRcvIntrTime (%d us)
Line 932: [DRX] HALDRX_EnablePagingRcvIntr: PreponePagingRFReqTime(%d)
Line 971: [DRX] DisablePagingRcvIntr, prepone(%d)
Line 1042: [DRX] Modem is off, so do not control CQI int regster
Line 1072: [DRX] Modem is off, so do not control CQI int regster
Line 1107: [DRX] ProcFreqErrIntr: FreqErrIntr Disable returns FALSE, Stop processing
Line 1122: [DRX] ProcFreqErrIntr: gDrx_FreqIntVal(%d), FREQ_INT_VALUE(%d)
Line 1152: [DRX] ProcFreqErrIntr(freq_int_value:%d gSceTotalModemClk:%d)
Line 1179: [DRX] ProcSysValidIntr
Line 1266: [4G_DRDS] Skip SCG wakeup intr, make SCG 1. IsRfAvailable(%d) and 2. gDrx_HW_PowerOn_flag(%d)
Line 1272: [4G_DRDS] 4G_DRDS will be activated after PBCH decoding
Line 1292: [DRX] hold_time(%d)
Line 1306: [DRX] Delay current stack wakeup procedure as its sleep is on-going
Line 1342: [DRX] ProcWakeupIntr: MIF INTR Status ON
Line 1346: [SC] LteMifFreq(%d) 
Line 1373: [DRX] Ignore ProcWakeupIntr as Suspend processing is in progress!!
Line 1392: [Debug] Is_Drx_check_ind = %d
Line 1439: [DRX] ProcWakeupIntr: System Stable Start Time(%u)
Line 1473: [DRX] ProcReSyncIntr: sfn(%d), SWSFNload(%d)
Line 1481: [DRX] gDrxResync_cnt(%d)
Line 1504: [DRX] AFC/STR start(%d)
Line 1526: [DRX] System stable end time(%d), stable time diff(%d)
Line 1534: [DRX] CHECK!!! Over Stable Time Difference between Actual Elapsed Time and SW Set Time: %d
Line 1757: HALDRX_ProcMODEMsetting
Line 1768: LMAC Init
Line 1789: DSP setting
Line 1975: [DRX] ProcPagingIntr(%d): sfn(%d), tti(%d)
Line 2032: [DRX] Paging channel Rx
Line 2085: [DRX] ProcPagingIntr(%d): sfn(%d), tti(%d), Expected sfn(%d), tti(%d)
Line 2090: [DRX] SFN is zero[%d,%d], Expected SFN_Tti[%d,%d], HWSFNload[%d], SWSFNload[%d]
Line 2095: [DRX] SFN is zero, Reinit due to abnormal
Line 2159: [4GDRDS] Skip pal_DrxPagingHCB 
Line 2189: [DRX] Paging channel Rx
Line 2205: Update UL Timing at last paging interrupt. (ta_acc:%d)
Line 2301: [Debug] Is_Drx_check_ind = %d
Line 2436: HALDRX_ProcDSDSIntrHisr gHALSC_dsdsIntrState(%d)
Line 2452: Unknown DSDS mode(%d)
Line 2482: HALDRX_ProcSCGDSDSIntrHisr gHALSC_dsdsIntrState(%d)
Line 2530: [DRX] HALDRX_ProcPagingRcvIntr, IsRfAvailable(%d) Preponed(%d)
Line 2534: [DRX] Preponed HALDRX_ProcPagingRcvIntr: sfn(%d), tti(%d), Preponed(%d)
Line 2599: [DRX] ProcPagingRcvIntr: sfn(%d), tti(%d)
Line 2613: [DRX] Saved AGC Index(%d, %d)
Line 2618: [DRX] Saved AGC Index(%d, %d)
Line 2671: [DRX] ProcSfnUpdateIntr
Line 2937: [DRX] ProcDrxPagingRcvHisr: gHalDrx_SleepState(%d), gHalDrx_NonPaging(%d)
Line 3009: [DRX] Cancel Rvalue update!rtg counter did not start yet
Line 3028: [DRX] rtg_counter_start(%d) rtg_counter_end(%d) time_offset_str(%d)
Line 3033: [DRX] AA gDrx_CfoValue(%d), gDrx_FreqIntVal(%d), gDrxErrAccPeriod(%d), gSceTotalModemClk(%d)
Line 3057: (Abnormal R value) gSceTotalModemClk = %d, gDrx_CfoValue = %d
Line 3065: [DRX] BB gSceTotalModemClk(%d), gDrx_CfoValue(%d), gDrx_StrOffsetVal(%d), rvalue_filter_gain(%d), gDrx_rvalue_filter_gain_cnt(%d)
Line 3074: [DRX] CC gDrx_StrOffsetVal(%d), time_offset_str(%d), CFO_STR_OFFSET_LOOP_GAIN(%d)
Line 3087: [DRX] gSceTotalModemClk(%d), time_offset_str(%d), prev_sleepTimeInSlowClk(%d)
Line 3258: [Debug] Is_Drx_check_ind = %d
Line 3290: [Debug] Is_Drx_check_ind = %d
Line 3324: [DRX] Sleep Abort - OTDOA Measurement Ongoing!!!
Line 3333: [DRX] gL1LC_DrxControl.state = DRX_CLKEST
Line 3342: [DRX] gHalDrx_ConnDrxBlock is true
Line 3349: [DRX] ProcDrxConnSleepStartHisr: gHalDrx_ConnDrxState(%d)
Line 3357: [DRX] Don't Sleep before MEAS DONE, gHalDrx_ConnDrxState = DRX_CONN_DSP_DONE
Line 3363: [DRX, 4GDS] Set measconfig as HALSC_MEAS_CONFIG_CONN_DRX
Line 3383: [DRX] Abnormal Case(%d) : gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 3394: [DRX] DSP done : gHalDrx_SleepState(%d)
Line 3502: [DRX] ProcDrxWakeupModemHisr is invoked(gDrx_PowerDown[%d][%d]
Line 3513: [DRX] HW is not off actually
Line 3519: [DRX] Check-Point-3 (Rat(%d)/ TimingLatch[%d][%d]
Line 3576: [DRX] ProcDrxWakeupDSPHisr: Modem Stable Time(%d)
Line 3667: [DRX] ProcDrxWakeupRF1Hisr: DSP Stable Time(%d)
Line 3702: [DRX] ProcDrxWakeupRF2Hisr
Line 3731: [DRX] ProcDrxWakeupRF3Hisr
Line 3759: [DRX] ProcDrxWakeupRF4Hisr
Line 3787: [DRX] ProcDrxWakeupRF5Hisr
Line 3791: [DRX] RF InitFromSleepIdle end
Line 3836: [DRX] ProcDrxWakeupInitHisr: RF Stable Time(%d)
Line 3874: [DRX] before DrxSysValid, Saved AGC Index(%d, %d)
Line 4515: [DRX] ProcDrxSysValidHisr: DRX Init Time(%d)
Line 4527: [DRX] RTG update start: sfn(%d), tti(%d), offset(%d)
Line 4574: [DRX] gSceTotalModemClk(%d): sleepCnt(%d), modemCnt(%d), sleepTime(%d, %d, %d), RC(0x%x)
Line 4576: [DRX] slp_ref_cnt(0x%x), xfr_ref_cnt(0x%x)
Line 4583: [DRX] Do not update RTG, because HW is not sleep actually!
Line 4589: [DRX] RTG update end: sfn(%d), tti(%d), offset(%d)
Line 4608: [DRX] Cellboundary: %d, Otherstack: %d, Diff: %d
Line 4623: [DRX] SFN cal, Update and Interrupt Setting start gDrx_ARM_PD(%d)
Line 4629: [DRX] RTG is recovered!
Line 4639: [Debug] Is_Drx_check_ind = %d
Line 4653: [Debug] Is_Drx_check_ind = %d
Line 4680: [DRX] Diff cellboundary is zero!
Line 4688: [DRX] Reset SleepType
Line 4726: [DRX] Otherstack's CellBoundary: %d, Diff: %d
Line 4787: [DRX] curTimeSFN(%d), curTimeTti(%d), reset_offset(%d)
Line 4788: [DRX] time_diff(%d) drx_wakeup_time_tti(%d) drx_wakeup_time_mclk(%d) drx_tti_mclk(%d) gDrx_WakeupTimeforUpdate(%d), gDrx_WakeupStartTime(%d), gDrx_WakeupEndTime(%d)
Line 4793: [DRX] RTG update Check curTimeTti(%d), reset_offset(%d), gDrx_WakeupTimeforUpdate(%d), Mclk(%d)
Line 4802: [DRX] EnableSfnUpdateIntr: tti(%d), offset(%d), current_time(%d, %d, %d)
Line 4809: [DRX] SFN_LOAD_VALUE(%d), SWSFNload(%d)
Line 4825: [DRX] Reset SleepType 
Line 4831: [DRX] SFN cal and Interrupt Setting end
Line 4837: [OHE]ST-%d(%d) => OHE_StackStatus[0][1] (%d, %d)
Line 4844: [DRX] Resync Interrupt set
Line 4870: [DRX] EnableReSyncIntr: tti(%d), offset(%d), current_time(%d, %d, %d)
Line 4908: [DRX] [Before AGC start] Turned on Rx diversity paths according to the current Rx mode(%x)
Line 4913: [DRX] (Adaptation): Changed to 4Rx for monitoring
Line 4924: [DRX] AGC gain recovery(%d, %d)
Line 4942: [DRX] AGC start
Line 4945: [DRX] ProcDrxSysValidHisr: Sys Valid Time(%d)
Line 5306: [DRX] MCG STACK's CellBoundary: %d, Diff: %d
Line 5329: [DRX] Cellboundary(SCG: %d): %d, Otherstack(MCG): %d, Diff: %d, RxDelay: %d
Line 5354: [4G_DRDS] SCG: curTimeTti(%d), curTimeOffset(%d)
Line 5355: [4G_DRDS] SCG: time_diff(%d) blackout_time_tti(%d) blackout_time_mclk(%d) blackout_tti_mclk(%d) Updated_tti(%d), RFReleasePalTime(%d), RFGrantPalTime(%d)
Line 5359: [DSDS] RTG update Check!!! curTimeTti(%d), curTimeOffset(%d), Updated_tti(%d), Mclk(%d)
Line 5447: [DRX] paging_frame(%d), paging_offset(%d), curTimeSFN(%d, %d), HWSFNload(%d), SWSFNload(%d)
Line 5460: [DRX] RemainingTime to PagingRcvIntr(%d, %d, %d)
Line 5478: [DRX] paging_frame(%d), paging_offset(%d), curTimeSFN(%d, %d), SFNload(%d)
Line 5479: [DRX] Invalid paging_frame(%d)!!! ---> Skip PagingRcvIntr Enable(%d)
Line 5550: [DRX] SCG paging_frame(%d), paging_offset(%d), curTimeSFN(%d, %d), HWSFNload(%d), SWSFNload(%d)
Line 5576: [DRX] SCG SI start SFN-TTI(%d, %d), SI End SFN-TTI(%d, %d)
Line 5581: [DRX] Skip setting Paging Rcv Intr and trigger Paging done from Last Paging Intr
Line 5640: [DRX] gDrx_SavedSFN(%d), gDrx_SavedTTI(%d), gDrx_SavedOffset(%d)
Line 5768: Set CheckWakeupAvailable timer (1ms)!!
Line 5799: Set CheckWakeupAvailable timer (1ms)!!
Line 5836: [DRX] ProcSfnUpdateHisr
Line 5842: [DRX] SFN_LOAD_VALUE(%d)
Line 6111: [DRX] Init
Line 6194: [DRX] StartSlowClkEst: freq_int_value(%d)
Line 6200: [DRX] StartSlowClkEst: 1st
Line 6202: [DRX] StartSlowClkEst: 2nd
Line 6204: [DRX] StartSlowClkEst: 3rd Drx_clk_est_temp(%d)
Line 6232: [DRX] StartSlowClkEstForCFO: ERR_ACC_PERIOD(%d)
Line 6278: [DRX] RF_PowerDown start,NASU_MODE_SELECT(%d) 
Line 6297: [DRX] RF ClearHpcmOwnMask in BplmnSrchStartLteActive(%d)
Line 6312: [DRX] RF_PowerDown end
Line 6332: [DRX] RF_DSP_PowerDown start
Line 6346: [DRX] RF_DSP_PowerDown end
Line 6372: [DRX] InitFromSleepIdle start
Line 6378: [DRX] Skip RF init during 2G call suspend
Line 6390: [DRX] InitFromSleepIdle end
Line 6408: [DRX] WakeupSendIPCtoDSP
Line 6589: [DRX] IPC end
Line 6741: [DRX] WakeupSendIPCtoDSPforSCG
Line 6750: [4G_DRDS] disable Dynamic QS (4G_DRDS act)
Line 6755: Instant SCell configuration&activation for 4G_DRDS SCG (TTI:%d)
Line 6771: [4G_DRDS] SCG TDP state was not HW_IDLE @ DRDS-Activated(%d)
Line 6773: [4G_DRDS] MCG SetTdpState(CC%d): state(%d -> %d)
Line 6793: [4G_DRDS]Add Scell: cid(%d), dl_earfcn(%d), ul_earfcn(%d), dl_bw(%d), ul_bw(%d)
Line 6804: [4G_DRDS] SetTdpState(SCG:CC0):state(%d->%d)
Line 6807: [4G_DRDS] SetTdpState(MCG:CC%d):state(%d->%d)
Line 6853: [DRX] IPC for SCG end
Line 6896: [4G_DRDS]Add Scell: cid(%d), dl_earfcn(%d), ul_earfcn(%d), dl_bw(%d), ul_bw(%d)
Line 6925: [4G_DRDS] Remove Scell: cid(%d), dl_earfcn(%d)
Line 6938: [4G_DRDS] Num of Scell(CC%d): before(%d) => curr(%d)
Line 6980: [DRX] Simulate gL1LC_DrxControl.sleepFlag = TRUE
Line 6993: HALDRX_CheckUpperLayerFlag(Idle DRX skip)(AlpssCfg.IdleDrx_en:%d gDrxEmm_Flag:%d gDrxEsm_Flag:%d gDrxRrc_Flag=%d gSecStateFlag:T%dR%d HALTX_SleepOkFlag:%d)
Line 7017: [DRX] PagingDone!!
Line 7021: [DRX] L1LC_DrxProcSleepReq sleepState(%d)
Line 7044: [DRX] DRX_PAGING_INIT
Line 7050: [DRX] DRX_WAIT_MEAS_PAGING -> DRX_PAGING_DONE
Line 7059: [DRX] Paging/meas Done, Sleep start, DRX_WAIT_MEAS_PAGING
Line 7065: [DRX] Paging Done Meas Done, but didn't meet sleep condition, DRX_MEAS_DONE->DRX_PAGING_INIT
Line 7090: [DRX] Paging Done, Abnormal Case(%d) ->DRX_PAGING_INIT
Line 7153: [DRX] ResyncTime_SEF(MBSFN config): cinr(%d, %d), gDrxResync_cnt(%d)
Line 7157: [DRX] ResyncTime_SEF: cinr(%d, %d), gDrxResync_cnt(%d)
Line 7169: (HALDRX_ResyncTime_SEF)(change to 1)((%d->%d) CINR:%d(%d))
Line 7174: (HALDRX_ResyncTime_SEF)(change to 2)((%d->%d) CINR:%d(%d))
Line 7180: (HALDRX_ResyncTime_SEF)(change to 2 due to MBSFN)((%d->%d) CINR:%d(%d))
Line 7187: (HALDRX_ResyncTime_SEF)(change to 2 due to CDRX)((%d->%d) CINR:%d(%d))
Line 7245: [DRX] (RxAdaptation): SINR(%d, %d, %d, %d), rx_mode(%x -> %x)
Line 7256: [DRX] (RxAdaptation): Skip Rx adaptation due to good SINR(%d)
Line 7263: [DRX] (RxAdaptation): CycleCnt(%d), MonPeriod(%d), Rx monitoring is triggered!
Line 7269: [DRX] (RxAdaptation): CycleCnt(%d), MonPeriod(%d)
Line 7295: [DRX] Sleep Time : ST%d (Previous %d [100us])
Line 7304: [DRX] Sleep Time : ST%d (Current %d [100us])
Line 7327: [DRX] ActiveStackID(%d), hal_sleepTime(%d), gDrx_PowerDown(%d) gDrx_GnssWakeupTime(%d)
Line 7354: [DRX] Sleep time is small hal_sleepTime : (%d)
Line 7359: [DRX] ActiveStackID(%d), Lte_OHE.SleepTime(%d), DRX_SLEEP_MARGIN+time_diff/100(%d)
Line 7389: [DRX] SleepAbort will start after IRAT BPLMN Stop
Line 7435: [DRX] State(%d) Error in Abort
Line 7478: [DRX] Set SleepAbortFlag as TRUE.
Line 7492: [DRX] Stop ST%d DsdsWakeupIntrTmr before processing HALDRX_ProcWakeupIntr!
Line 7514: [DRX] SleepAbort is already tried
Line 7522: [DRX] SleepAbort is Failed (Modem is currently POWER ON)(%d, %d)
Line 7527: [DRX] Set SleepAbortFlag as TRUE.
Line 7541: [DRX] SleepAbort is Failed (Minimun Sleep Abort Allowable Time[ST: %d, %d, %d])
Line 7545: [DRX] SleepAbort is Failed (Minimun Sleep Abort Allowable Time[ST:%d, %d, %d])
Line 7562: [DRX] Set SleepAbortFlag as TRUE.
Line 7574: [DRX] Stop Current ST%d DsdsWakeupIntrTmr!
Line 7579: [DRX] Sleep Start Time : (Previous %d us) vs (Current %d us)
Line 7587: [DRX] Set Other ST%d DsdsWakeupIntrTmr!
Line 7601: [DRX] Stop ST%d DsdsWakeupIntrTmr before processing L1LC_ProcDsdsSWWakeupTimerExpired!
Line 7627: [DRX] SleepAbort (Early Wakeup Time is %d.%d ms)
Line 7697: [DRX] SleepAbort_nosync
Line 7722: [DRX] DisableIntr_Suspend
Line 7757: [DRX] HALDRX_DisableIntr_RFRelease
Line 7761: HALDRX_DisableIntr_RFRelease: Modem is not power on
Line 7783: [DRX] HALDRX_DisableIntr_RFRelease for SCG
Line 7787: HALDRX_DisableIntr_RFRelease: Modem is not power on
Line 7811: [DRX] HALDRX_SleepAbortOfSuspendNormal
Line 7833: [DRX] SleepAbort_suspend
Line 7865: [DRX] Other ST(%d)'s remaining time is %d (100us)
Line 7885: [DRX] Sleep Start Time : (Previous %d us) vs (Current %d us)
Line 7892: [DRX] Stop Other ST%d DsdsWakeupIntrTmr!
Line 7902: [DRX] Set Other ST%d H/W Intr : %d Slp Cnt
Line 7914: [DRX] Do nothing!There is no enough sleep time! Other ST [%d]'s remaining sleep time is %d!
Line 7921: [DRX] Do nothing!Timer is already expired! Other ST [%d] is waiting for GRANT!
Line 7925: [LTE DS]Start RetryTimer(ST: %d, %d ms)!!
Line 7935: [DRX] Stop Current ST%d DsdsWakeupIntrTmr!
Line 7947: [DRX] Stop Other ST%d DsdsWakeupIntrTmr!
Line 7953: [DRX] Add sleep Time (%d) for another ST: %d !
Line 7960: [DRX] Add Sleep Time is Failed (Minimun Sleep Abort Allowable Time[%d, %d])
Line 7969: [DRX] Set Other ST%d H/W Intr : %d [Slp Cnt]
Line 7976: [DRX] Do nothing!Waiting the expiry of DsdsWakeupIntrTmr (ST%d)
Line 7984: [DRX] Stop Current ST%d DsdsWakeupIntrTmr!
Line 8000: [DRX] Change RTG for other STACK LTE
Line 8020: [DRX] Do nothing!Other STACK status is ACTIVE
Line 8029: [DRX] Do nothing!LTE of other STACK is turned on because of Latch!
Line 8103: [DRX] Sleep Abort - OTDOA Measurement Ongoing!!!
Line 8108: [DRX] SleepStart_A start!!! sfn(%d), tti(%d), offset(%d)
Line 8162: [DRX] SLP CNT Start sleepTime(%d), PowerDown(%d)
Line 8184: [DRX] gDrx_SavedSFN(%d) gDrx_SavedTTI(%d)
Line 8197: [DRX] sleep start!!! sleepTime[%d:%d], margin:%d(%d)
Line 8198: [DRX] SleepStart_A end
Line 8260: [DRX] gDrx_PowerDown[%d][%d]
Line 8314: [DRX] ST%d Modem/HAL Parameter Saving
Line 8383: [DRX] (Before %s sleep start) Saved AGC Index(%d, %d)
Line 8411: [SC] SetTdpState(CC0): state(%d -> %d)
Line 8420: [DRX] UeState(%d) First Sleep Start
Line 8482: [4G_DRDS] ST%d Modem/HAL Parameter Saving, SCG CC(%d)
Line 8487: [DRX] Cell ID(%d), DL BW (%d), UL BW (%d), UL CP TYPE (%d)
Line 8531: [DRX] Set Sleep
Line 8542: [DRX] Sleep Start Time : (Previous %d.%d) vs (Current %d.%d) [100us]
Line 8546: [DRX] ST%d S/W Timer is Running
Line 8550: [DRX] SleepTime : Current %d vs Other %d [100us]
Line 8567: [4G_DR_STAT] set conflict(%d) - IDLE/IDLE
Line 8576: [DRX] Current ST%d SleepTime preponed by %d [100us]
Line 8586: [DRX] Other ST%d SleepTime preponed to %d [100us], MCG-SCG swap
Line 8597: [4G_DR_STAT] set conflict(%d) - IDLE/IDLE
Line 8605: [DRX] Other ST%d SleepTime preponed by %d [100us]
Line 8616: [DRX] Current ST%d SleepTime preponed to %d [100us], MCG-SCG swap
Line 8622: [DRX] 4G_DRDS feasibility for IDLE-IDLE after wakeup(%d)
Line 8631: [DRX] Current ST%d SleepTime is Shorter
Line 8640: [DRX] Set Current ST%d H/W Intr : %d [Slp Cnt]
Line 8644: [DRX] Other ST%d SleepTime is Shorter
Line 8648: [DRX] Stop Other ST%d DsdsWakeupIntrTmr
Line 8656: [DRX] Set Other ST%d H/W Intr : %d [Slp Cnt]
Line 8659: [DRX] Set Current ST%d DsdsWakeupIntrTmr : %d [100us]
Line 8665: [DRX] Current  ST%d Going to Sleep and Other ST%d wake timer expired 
Line 8669: [DRX] Set Current ST%d DsdsWakeupIntrTmr : %d [100us]
Line 8685: [DRX] Set Current ST%d H/W Intr : %d [Slp Cnt]
Line 8698: [DRX][Single SIM] Set Current ST%d H/W Intr : %d [100us]
Line 8722: [DRX] Release Resource during sleep
Line 8805: [DRX] %s Hard SleepStart start!!! sfn(%d), tti(%d), offset(%d)
Line 8858: [LTE L1LC DSL1RC] HALDRX_SleepStart : CpuPowerDownHolding( 0 )
Line 8868: [DRX] gDrx_PowerDown(%d)
Line 8889: [DRX] %s Hard SleepStart end!!! sleepTime(%d, %d), margin(%d, %d)
Line 9303: [DRX] ResetConnDrxParam
Line 9326: [DRX] PowerResetForReSync
Line 9358: [DRX]gDrx_ActiveRat_[0][1]=%d,%d (%d)
Line 9361: [DRX] Illegal Modem Access on POWER OFF (stackId: %d)
Line 9442: [DRX] HALDRX_SetModemPowerOnFlag Stack-1[%d], Stack-2[%d]
Line 9462: [DRX] HALDRX_SetModemPowerOnFlag Stack-1[%d], Stack-2[%d]
Line 9493: [DRX] InitPowerUpModemHW start
Line 9499: [DRX] Skip Modem/Dsp power on
Line 9568: [DRX] InitPowerUpModemHW end
Line 9583: [DRX] PowerOnResume
Line 9613: [DRX] PowerDownSuspend
Line 9635: EPT time diff %d ms, IsEarlyPauseFlag
Line 9646: Before RF powerdown, check dualsim(%d), call(%d), rf(%d), earlypause(%d), otherstack_rf(%d)
Line 9658: [DRX] Avoid RF power down.
Line 9685: [DRX] Modem is already off
Line 9723: [DRX] PowerOnIratMeas(%d) start
Line 9727: [DRX] PowerOnIratMeas: LTE power domain ON
Line 9774: [DRX] PowerOnIratMeas end
Line 9777: [DRX] LTE_InitLatchPowerUp
Line 9808: [DRX] PowerDownIratMeas(%d)
Line 9823: [DRX] Modem is already off, so do not power down
Line 9934: [SHORTMODE] wakeup_time(%d, %d), gDrxShortStableTime(%d)
Line 9950: [SHORTMODE] GAP: sfn(%d) tti(%d) length(%d)
Line 9959: [SHORTMODE] GAP: sfn(%d) tti(%d) length(%d) is too short
Line 10056: [DRX] CC0 SLO disable on CGI, scell_config_info CC(%d) dl_earfcn(%d)
Line 10069: [DRX] StoreSccInfo: mode(%d), scc_cnt(%d)
Line 10115: [DRX] StoreSCGInfo: mode(%d)
Line 10159: [DRX] CC0 SLO recovery on CGI, scell_config_info CC(%d) rf_band(%d) dl_earfcn(%d) dl_bw(%d)
Line 10263: [DRX] RestoreSccInfo: mode(%d), scc_cnt(%d)
Line 10289: [DRX] UpdateIdleRxMode: mode(%d), 1RxOffFlag(%d, %d)
Line 10303: [DRX] UpdateIdleRxMode: RxAdaptMode(%x)
Line 10570: [DRX] DrxConfirmInd: current_sfn_tti(%d), sleep_time_tti(%d)
Line 10589: [DRX] Sleep Calculation Considering Next PRS Occassion :: CurSfnTti(%d), PrsOcc(%d), PrsSfnOffset(%d)
Line 10596: [DRX] Do not sleep, RSTD measurement needs to happen, sleep_time_tti(%d), prsSfnOffset(%d)
Line 10604: [DRX] Sleep Time Modified to Wakeup early to measure RSTD. Updated Sleep time(%d)
Line 10619: [4G_DRDS] DrxConfirmInd: 4G_DRDS ongoing, Set CdrxRecoveryFlag(%d) Lte_OHE.eDV_Active(%d) Lte_OHE.eDV_AvailableforEPT(%d) 
Line 10630: [DRX] DrxConfirmInd: wrong DRX state(%d) gDrxRachStateFlag(%d) gHalDrx_State(%d) gL1LC_DRXinSibFlag(%d)
Line 10637: [DRX] Saved AGC Index(%d, %d)
Line 10645: [DRX] PBCH decode on-going, do not CDRX(PBCH Mode : %d) 
Line 10651: [DRX] Hand-over cell change is in progress, do not CDRX
Line 10674: [DRX] DrxConfirmInd: wrong UE state(%d)
Line 10803: [DRX] gDrx_GnssWakeupTime(%d) curtime(%d) remaintime(%d)
Line 10811: [DRX] gDrx_GnssWakeupTime is short
Line 10847: [DRX] gsleepTime_inSlowClk(%d) current_sleep_cnt(%d) remaintime(%d)
Line 10909: [DRX] CheckDRXinSIB (%d)
Line 11060: [4G_DRDS] UE_STATE [cur(%d)other(%d)], OHE_STATE [cur(%d)other(%d)]
Line 11102: [4G_DRDS] 4G_DRDS state Check done: Possible state: %d
Line 11130: [4G_DRDS] UE_STATE [cur(%d)other(%d)], OHE_STATE [cur(%d)other(%d)]
Line 11174: [4G_DRDS] HALDRX_PerformEdvStateCheckBeforeSleep : SleepTime [cur(%d)other(%d)conflict(%d)], DRX_SLEEP_MARGIN[cur:(%d),other:(%d)]
Line 11201: [4G_DRDS] 4G_DRDS state Check done(before sleep) : Possible state: %d
Line 11240: [4G_DRDS] 4G_DRDS band check status(%d)
Line 11268: [4G_DRDS] DR_ADDED state! 4G_DRDS is possible
Line 11273: [4G_DRDS] DR_BE_REMOVED state! 4G_DRDS is impossible
Line 11280: [4G_DRDS] DRDS_ENABLE Registry is FALSE
Line 11286: [4G_DRDS] Other stack is inactive, UE state of other stack (%d)
Line 11292: [4G_DRDS] On Other stack MBMS is on-going, MBMS stack cannot be SCG
Line 11301: [4G_DRDS] HALDRX_CheckEdvStackOrder : CC#0, Source Band[Stack:%d](%d), earfcn(%d)
Line 11310: [4G_DRDS] HALDRX_CheckEdvStackOrder : Scc#%d, Source Band[Stack:%d](%d), earfcn(%d)
Line 11320: [4G_DRDS] HALDRX_CheckEdvStackOrder : Target Band[Stack:%d](%d), earfcn(%d), MCG_NumCA_Source(%d), Lte_OHE.MCG_NumCA_Target(%d)
Line 11355: [4G_DRDS] HALDRX_CheckEdvStackOrder : RF return value is abnormal!! (%d)
Line 11374: [4G_DRDS] special case, agc diff check result (%d)
Line 11376: [4G_DRDS] HALDRX_CheckEdvStackOrder : status (%d), special_case(%d), special case MCG_CC(%d)
Line 11381: [4G_DRDS] HALDRX_CheckEdvStackOrder : status (%d), special_case(%d)
Line 11415: [4G_DRDS] 4G_DRDS is feasible for state(%d)
Line 11424: [4G_DRDS] 4G_DRDS is not feasible
Line 11463: [4G_DRDS] RemainPreponePagingTime [%u] MBMSEndTime [%u]
Line 11468: [LTE L1LC DSL1RC] Cell change done for BPLMN return. SINR : %d
Line 11481: [LTE L1LC DSL1RC] 4G_DRDS will be trigger after PBCH decoding! PBCH Mode[%u] IsBplmnReturn[%u]
Line 11519: [4G_DRDS] HALDRX_InitEDV
Line 11554: [4G_DRDS] Start pending procedure on other stack is case of suspend !!!
Line 11564: [4G_DRDS] Starting Measurement which got Pended due to EDV -PendingFromMeasReq[%d]!!!
Line 11589: [LTE L1LC DSL1RC] Saved RRM Message, process that first
Line 11620: [4G_DRDS] Starting Measurement which got Pended due to EDV -PendingFromMeasReq[%d]!!!
Line 11625: [4G_DRDS] !!! pNextMeasElem is NULL !!!
Line 11650: [4G_DRDS] %s
Line 11670: [4G_DRDS] Other stack is inactive, UE state of other stack (%d)
Line 11676: [4G_DRDS] Stack is in suspend state
Line 11681: [4G_DRDS] eDV_Available (%d)
Line 11685: [4G_DRDS] DRDS unavailable : reset EptCheckForARFC(%d)
Line 11694: [4G_DR_STAT] Add only LteDrdsTrialCnt(%d), conflict(%d), eDV_state(%d)
Line 11696: [4G_DR_STAT] reset conflict(%d)
Line 11701: [4G_DR_STAT] Not Add LteDrdsTrialCnt(%d), conflict(%d), eDV_state(%d)
Line 11708: [4G_DR_STAT] Add only LteDrdsTrialCnt(%d), eDV_state(%d)
Line 11711: [4G_DR_STAT] Not Add LteDrdsTrialCnt(%d), eDV_state(%d)
Line 11715: [4G_DRDS] OHE Status : CurrentStack (%d) OtherStack (%d)
Line 11716: [4G_DRDS] UE State : CurrentStack (%d) OtherStack (%d)
Line 11720: [4G_DRDS] 4G_DRDS is already activated (%d)
Line 11727: [4G_DRDS] Do not activate 4G_DRDS as Other stack is in sleep state(%d) or in measurement(curmode:%d iratcurmode:%d) state
Line 11734: [4G_DRDS] 4G_DRDS is not activated while sleep abort case (ST%d: %d, ST%d: %d)
Line 11741: [4G_DRDS] 4G_DRDS is not activated. IsForBplmn(%d), IsForResume(%d)
Line 11748: [4G_DRDS] 4G_DRDS is not activated. OtherStack(%d) sets PauseFlag(%d)
Line 11755: [4G_DRDS] 4G_DRDS is not activated. IsDuringScellConfig
Line 11769: [4G_DRDS] other stack's sleep time(%d)
Line 11785: [Debug] Is_Drx_check_ind = %d
Line 11787: [EnableDsdsMask] -> 0x%x (0x%x)
Line 11802: [4G_DRDS] ACTIVATED (IDLE-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), Lte_OHE.SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
Line 11817: [4G_DRDS] Can not enable 4G_DRDS because CC = (%d) NoOfScell = (%d)
Line 11832: [Debug] Is_Drx_check_ind = %d
Line 11834: [EnableDsdsMask] -> 0x%x (0x%x)
Line 11840: [4G_DRDS] ACTIVATED (CDRX-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), Lte_OHE.SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
Line 11854: [4G_DRDS] Can not enable 4G_DRDS(Conn -Idle) as RFband was not added in RFbandlist
Line 11865: [4G_DRDS] Can not enable 4G_DRDS because CC = (%d) NoOfScell = (%d)
Line 11872: [4G_DRDS] EPT was checked before, Set AIT to SCG : EptCheckForARFC(%d)
Line 11878: [4G_DRDS] ARFC(or Signalling) case, Set AIT to MCG : EptCheckForARFC(%d)
Line 11885: Do not enable 4G_DRDS(Active-Idle-Idle) as BPLMN on-going(%d, %d)
Line 11910: [4G_DRDS] eDV_AvailableforEPT(%d -> %d)
Line 11922: [Debug] Is_Drx_check_ind = %d
Line 11924: [EnableDsdsMask] -> 0x%x (0x%x)
Line 11938: [4G_DRDS] ACTIVATED (CONN-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), Lte_OHE.SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
Line 11943: [4G_DRDS] ACTIVATED (ACTIVE IDLE-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), Lte_OHE.SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
Line 11951: [4G_DRDS] ======= 4G_DRDS CANNOT BE ACTIVATED =======
Line 11972: [4G_DRDS] Stop SCG Stack(%d)'s Retry Timer !
Line 11979: [LTE L1LC DSL1RC] 4G_DRDS is activated hence free HAL_L1LC_WAKEUP_START_IND for SCG stack
Line 12011: HALDRX_ProcEdvDeactive
Line 12019: ST%d Is_Drx_check_ind = FALSE. So, last paging is first
Line 12046: RTG(ST:%d) is saved: SFN(%d), TTI(%d) RTGoffset(%d), ReleasePalTime(%d)
Line 12058: [4G_DRDS] Modem is in power-on state
Line 12079: Remove Scell: cid(%d), dl_earfcn(%d)
Line 12091: Num of Scell(CC%d): before(%d) => curr(%d)
Line 12101: [4G_DRDS] Modem is in power-down state. Clear Scell config
Line 12117: Remove Scell: cid(%d), dl_earfcn(%d)
Line 12129: Num of Scell(CC%d): before(%d) => curr(%d)
Line 12384: [4G_DRDS] Proc HALDRX_CheckCdrxIdleEdvAvailable
Line 12402: [4G_DRDS](conflict) Current ST%d SleepTime(CONN) = %d . Other ST%d(IDLE) SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
Line 12406: [4G_DRDS] 4G_DRDS (Cdrx - Idle) is not available. Go for 4G_DRDS (Conn - Idle)
Line 12412: [4G_DRDS] (No conflict) Current ST%d SleepTime(CONN) = %d . Other ST%d(IDLE) SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
Line 12443: [4G_DRDS] Proc HALDRX_CheckConnEdvAvailable
Line 12453: [4G_DR_STAT] set conflict(%d) - CDRX/IDLE
Line 12458: [4G_DRDS] Available2(CASE1)
Line 12459: [4G_DRDS] Current IDLE ST%d SleepTime = %d . Other CONN ST%d() SleepTime = %d, other-current = %d, SLEEP_MARGIN+80 = %d
Line 12463: [4G_DRDS] Current ST%d SleepTime(IDLE) is Shorter but make Other ST%d(CONN) SleepTime shorter
Line 12466: [DRX] Stop Other ST%d DsdsWakeupIntrTmr and enable H/W wakeupintr for other ST%d 
Line 12476: [4G_DRDS] Set Other ST%d H/W Intr : %d [Slp Cnt], %d [100us]
Line 12479: [4G_DRDS] Set Current ST%d DsdsWakeupIntrTmr : %d [100us]
Line 12489: [4G_DR_STAT] set conflict(%d) - CDRX/IDLE
Line 12494: [4G_DRDS] Available2(CASE2)
Line 12495: [4G_DRDS] Current CONN ST%d SleepTime = %d . Other IDLE ST%d SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
Line 12501: [DRX] Current ST%d SleepTime preponed by %d [100us] => Current ST SleepTime(CONN) = %d
Line 12512: [4G_DRDS] Set Other ST%d H/W Intr : %d [Slp Cnt], %d [100us]
Line 12525: [4G_DR_STAT] set conflict(%d) - CDRX/IDLE
Line 12530: [4G_DRDS] Available2(CASE3)
Line 12531: [4G_DRDS] Current CONN ST%d SleepTime = %d . Other IDLE ST%d SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
Line 12535: [4G_DRDS] Other ST%d SleepTime(IDLE) is Shorter but make Current ST%d(CONN) SleepTime shorter
Line 12544: [4G_DRDS] Set Current ST%d H/W Intr : %d [Slp Cnt], %d [100us]
Line 12547: [4G_DRDS] Set Other ST%d DsdsWakeupIntrTmr : %d [100us]
Line 12556: [4G_DR_STAT] set conflict(%d) - CDRX/IDLE
Line 12562: [4G_DRDS] Available2(CASE4)
Line 12563: [4G_DRDS] Current IDLE ST%d SleepTime = %d . Other CONN ST%d SleepTime = %d, other-current = %d, SLEEP_MARGIN+80 = %d
Line 12571: [DRX] Otherstack ST%d SleepTime preponed by %d [100us] => Other ST SleepTime(CONN) = %d
Line 12575: [DRX] Stop Other ST%d DsdsWakeupIntrTmr and enable H/W wakeupintr for other ST%d 
Line 12585: [4G_DRDS] Set Other ST%d H/W Intr : %d [Slp Cnt], %d [100us]
Line 12588: [4G_DRDS] Set Current ST%d DsdsWakeupIntrTmr : %d [100us]
Line 12600: [4G_DRDS] Clear Lte_OHE dm values
