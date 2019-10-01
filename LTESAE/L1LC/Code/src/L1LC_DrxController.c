Line 384: Parameters related with Paging are incorrect!!!
Line 432: L1LC_UpdatePagingTimingInComparisionWithRef(Ref Timing - SFN:%d, TTI:%d) and update end timing(SFN:%d, TTI:%d)
Line 450: L1LC_DrxInit :: Reset gDrx_InvalidWakeupTime flag(%d) gDrx_DSDSPagingRcvIntrSkip(%d)
Line 455: L1LC_DrxStateInit
Line 524: L1LC_DrxInitToReady(%d)
Line 541: Invalid ueState(%d)
Line 565: L1LC_ShadeInit
Line 569: L1LC_DrxStateInit
Line 650: Invalid state %d
Line 654: L1LC_DrxStateChange (%s -> %s)
Line 698: L1LC_DrxStateShadeStart
Line 754: gDRXShort_Block=%d
Line 819: (L1LC_DrxUpdateConnDrxTime)(curTimeTti:%d gDrxWakeSFN:%d gDrxWakeTTI:%d drx->curSleepTime:%d gDrxShortModeFlag:%d gDrxResync_cnt:%d)
Line 823: (L1LC_DrxUpdateConnDrxTime)(curTimeTti:%d gDrxWakeSFN:%d gDrxWakeTTI:%d drx->curSleepTime:%d gDrxShortModeFlag:%d gDrxResync_cnt:%d)
Line 897: dsp_sleep_time=%d, rrm_sleep_time=%d, slink_slp_time=%d[ms]
Line 917: Invalid drx_T value is %d
Line 946: Change SleepTime : prev(%d), after(%d)!
Line 960: SIB SFN_tti(%d, %d), Paging SFN_tti(%d, %d), Wakeup_Time_tti(%d)!
Line 975: Paging occassion is nearby SIB occasion!
Line 990: SIB occassion is nearby paging occassion!
Line 1022: PF(%d)PO(%d)curTimeSFN(%d)curTimeTti(%d)reset_offset(%d)(%d)
Line 1024: sib_frame=%d, sib_offset=%d, pagingFrame=%d, paging_offset=%d, drx->state=%d, paging_slp_time=%d
Line 1039: drx->curSleepTime = %d, (%d, %d)
Line 1058: L1LC_DrxProcSlowClkEstComplete, state[%d][%d]
Line 1191: DRX spare timer start(%d), Curr=%d
Line 1196: DRX spare timer CANNOT start(paging_rcv_remain_time = %d), Curr=%d, Paging=%d
Line 1235: DRX spare time(%d), Curr=%d, Paging frame=%d
Line 1240: need more DRX spare time(paging_rcv_remain_time = %d), Curr=%d, Paging frame=%d
Line 1260: [DRX] L1LC_DrxCheckIdleOOS
Line 1284: [DRX] [%d]RLF(peak_value(%d) < thresh(%d))
Line 1330: [DRX] MsgPendingNum = %d.
Line 1339: L1LC_DrxCheckSleepStart[4GDS](NumOfQueueMsg[%d])
Line 1348: L1LC_DrxCheckSleepStart[4GDS] - skip (cum_drx_time[%d], Conn-Conn state[%d], longDRXcycle[%d])
Line 1357: [STAT]Drx Skip(common):gDrxMbsfnSiCount[%d] gDrxVocoderCount[%d] gDrxStateErrCount[%d] gDrxVolteCount[%d] gDrxHoldCount[%d]
Line 1362: [STAT]IdleDrx Skip : gDrxBplmnCount[%d] gDrxFlagCount[%d]
Line 1364: [STAT]Resync[%d] : SfnCount[%d] WakeupTimeCount[%d] ServigTimeCount[%d] PdmCount[%d] CinrCount[%d]
Line 1369: [STAT]ConnDrx Skip:gDrxRstdMeasCount[%d] gDrxRlfCount[%d] gDrxRepeaterCount[%d] gDrxAbnormalTimeCount[%d] gDrxLMacCount[%d] gDrxWaitIpcCount[%d] gDrxSiModCount[%d]
Line 1411: L1LC_DrxCheckSleepStart[comm](MBSFN DRX check)
Line 1421: L1LC_DrxCheckSleepStart[comm](Serving Cell mismatch-no skip)(%d, %d)
Line 1451: L1LC_DrxCheckSleepStart[comm](VoLTE is working)
Line 1462: L1LC_DrxCheckSleepStart[comm](gDrx_HoldFlag is TRUE)
Line 1473: L1LC_DrxCheckSleepStart[comm](DRX is not ready)(gL1LC_DrxControl.state:%d)
Line 1503: L1LC_DrxCheckSleepStart[idle(reinit)](Invalid SFN)
Line 1505: L1LC_DrxCheckSleepStart[idle(reinit)](Invalid SFN)
Line 1529: L1LC_DrxCheckSleepStart[idle(reinit)](Serving timing abnormal)
Line 1533: L1LC_DrxCheckSleepStart[idle(reinit)](Serving timing abnormal)(filtered_rsrp:%d)
Line 1543: L1LC_DrxCheckSleepStart[idle](Serving timing abnormal)
Line 1547: L1LC_DrxCheckSleepStart[idle](Serving timing abnormal)(filtered_rsrp:%d)
Line 1575: L1LC_DrxCheckSleepStart[idle(reinit)](PDM value abnormal)(gDrxPdmArray[0]:%d gDrxPdmArray[1]:%d)
Line 1577: L1LC_DrxCheckSleepStart[idle(reinit)](PDM value abnormal)(gDrxPdmArray[0]:%d gDrxPdmArray[1]:%d)
Line 1602: L1LC_DrxCheckSleepStart[idle(reinit)](OOS Event)
Line 1604: L1LC_DrxCheckSleepStart[idle(reinit)](OOS Event)
Line 1619: L1LC_DrxCheckSleepStart[idle](oos_result_cnt(%d) < gDrxOOSCriteria(%d))
Line 1636: (DSDS)L1LC_DrxCheckSleepStart[idle(reinit)](Wake-up time abonormal)
Line 1653: L1LC_DrxCheckSleepStart[idle(reinit)](Ongoing ReInitDrx)
Line 1655: L1LC_DrxCheckSleepStart[idle(reinit)](Ongoing ReInitDrx)
Line 1678: L1LC_DrxCheckSleepStart[idle](BPLMN Start)
Line 1703: L1LC_DrxCheckSleepStart[idle](HALDRX_CheckUpperLayerFlag)
Line 1710: IDLE DRX skip cus Meas ongoing.(curMode:%d, curIratMode:%d)
Line 1721: L1LC_DrxCheckSleepStart(NR SCG setup C-DRX skip)
Line 1731: (DSDS)L1LC_DrxCheckSleepStart[conn](LTE Paused)
Line 1741: (4G_DRDS)L1LC_DrxCheckSleepStart[conn](4G_DRDS Active)
Line 1754: L1LC_DrxCheckSleepStart[conn](SIB modification)
Line 1766: L1LC_DrxCheckSleepStart[conn](RSTD Measurement)
Line 1778: L1LC_DrxCheckSleepStart[conn](OutOfSync is found)(Out Sync Rate:%d)
Line 1790: L1LC_DrxCheckSleepStart[conn](AFC hold mode-long sleep)(afc_hold_mode_check:%d)(gHALSC_fast_srch_flag:%d)(gHALSC_fast_srch_offset:%d)
Line 1801: [ERR]L1LC_DrxCheckSleepStart[conn](UNEXPECTED SLEEP_TIME)(gL1LC_DrxControl.curSleepTime(%d) > DrxMaxCycle(25600)) 
Line 1815: L1LC_DrxCheckSleepStart[conn](LMAC Working)(tx:%d, rx:%d, gSRTriggered:%d HALTX_SleepOkFlag:%d)
Line 1837: L1LC_DrxCheckSleepStart[conn](gHalDrx_ConnDrxState = DRX_CONN_INIT, wait DSP Done)
Line 1873: L1LC_DrxProcSleepStart
Line 1885: UNEXPECTED SLEEP_TIME(%d)!!!!!!!!!!!!!!!!! 
Line 1889: L1LC_DrxUpdateLongDrxTime!!!!!!!!!!!!!!!!! 
Line 1940: gL1LC_DrxControl.curSleepTime = %d, DRX_SLEEP_MARGIN = %d
Line 1987: [DRX] L1LC_DrxProcSleepReq ue_state(%d), sleep_ready(%d), curstate(%d)
Line 2007: [DRX] L1LC_DrxProcSleepReq state=%s
Line 2028: [DRX] UpdateRfCause to SysRead for SCG
Line 2036: [DRX] skip SI command: current(%d) sib_start(%d) sib_end(%d)
Line 2055: [DRX] Meas Done, Don't Sleep, gHalDrx_PagingState = DRX_MEAS_DONE
Line 2100: [DRX] PagingRcvIntr already set due to prepone. Skip L1LC_DrxSetPagingRcvIntrForMeas
Line 2137: [DRX] Meas Done, gHalDrx_PagingState (%s) 
Line 2144: [DRX] Meas Done, Abnormal Case(%d) : gHalDrx_PagingState = DRX_PAGING_INIT
Line 2309: Conn DRX spare time(%d) is longer than Conn DRX cycle(%d)!!!
Line 2318: Conn DRX spare time(%d), MinRequiredTime=%d, cgi_returnTime=%d
Line 2323: need more Conn DRX spare time(%d), MinRequiredTime=%d, cgi_returnTime=%d
Line 2372: Change SleepTime : prev(%d), after(%d)!
Line 2384: remain time to paging(%d), MinRequiredTime(%d), ret_val(%d) 
Line 2502: LteMifFreq(%d) DrxLongSleepMargin(%d)
Line 2541: gL1LC_DrxControl.curSleepTime(%d) DRX_SLEEP_MARGIN(%d) DrxLongSleepMargin(%d) 
Line 2548: gL1LC_DrxControl.curSleepTime(%d) DRX_SLEEP_MARGIN(%d) DrxLongSleepMargin(%d) 
Line 2573: AFC hold mode...(short sleep) Sleep Pass...(afc_hold_mode_check:%d)(gHALSC_fast_srch_flag:%d)(gHALSC_fast_srch_offset:%d)
Line 2590: (L1LC_DrxProcConnShortSleepStart)(Sleep time is insufficient)(gL1LC_DrxControl.curSleepTime:%d gDrxShortStableTime(%d) DRX_SHORT_MODE_SLEEP_MARGIN(%d)
Line 2620: [DRX-MBSFN] L1LC_MbmsDrxCheck :: Mode (%s)  Start_Sfn = %d, Start_Tti = %d, End_sfn = %d, End_tti = %d
Line 2631: [DRX-MBSFN] mbsfn_sleep_time = %d, DRX_MARGIN = %d
Line 2656: Sleep time is insufficient : gDrxSleepTimeInTTI = %d
Line 2666: gL1LC_DrxControl.curSleepTime = %d, DRX_SLEEP_MARGIN = %d
Line 2676: [DRX-MBSFN] No Sleep for the whole DRX period
Line 2693: [DRX-MBSFN] Avoid Sleep Timer-1 Created = %d
Line 2735: [DRX-MBSFN] L1LC_DrxSleep,Sleep Mode = %s
Line 2752: [DRX] %s Soft SleepStart start!!!
Line 2755: [DRX] %s Sleep Start Time : (Previous %d.%d) vs (Current %d.%d) [100us]
Line 2766: [DRX] Set Current ST%d DsdsWakeupIntrTmr: %d [100us]
Line 2804: [DRX] Other ST(%d)'s remaining time is %d (100us)
Line 2818: [DRX] %s Soft SleepStart start!!!
Line 2821: [DRX] %s Sleep Start Time : (Previous %d.%d) vs (Current %d.%d) [100us]
Line 2831: [DRX] Set Current ST%d DsdsWakeupIntrTmr: %d [100us]
Line 3019: L1LC_DrxProcConnSleepReq :: DSP Status bitmap(Rach/ULG/SRI/CR(%x) RTT/RTX/IAT/ODT(%x) Paging/DediRach(%x)) gRACHflag(%d)
Line 3033: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 3052: [DRX] Meas Done, Don't Sleep, gHalDrx_ConnDrxState = DRX_CONN_MEAS_DONE
Line 3074: [DRX] Meas Done, Abnormal Case(%d) : gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 3098: CGI Measure Start (Don't Sleep)
Line 3117: CGI Measure didn't Start (need more spare time)
Line 3162: (L1LC_DrxProcConnSleepReq)(shortmode insufficient time case)(gDrxShortModeFlag:%d shortsleepflag:%d)
Line 3166: (L1LC_DrxProcConnSleepReq)(gDrxShortModeFlag:%d shortsleepflag:%d)
Line 3180: [DRX] Meas Done, gHalDrx_ConnDrxState = DRX_CONN_MEAS_DSP
Line 3191: IRAT CGI Measure Starts (LTE Modem remains sleep)
Line 3209: IRAT CGI Measure didn't Start (need more spare time)
Line 3229: [DRX] Meas Done, gHalDrx_ConnDrxState = DRX_CONN_MEAS_DONE, gHalDrx_SleepState = %d
Line 3234: [DRX] Don't Sleep, gHalDrx_ConnDrxState = %d, gHalDrx_SleepState = %d
Line 3284: (L1LC_ConnDrxUpdateDrxConfig)(CdrxConfig setup)
Line 3289: (L1LC_ConnDrxUpdateDrxConfig)(CdrxConfig diable)
Line 3322: HalDrxUpdate is maintained
Line 3343: L1LC_DrxUpdateDrxNewConfig (%d)
Line 3347: L1LC_DrxUpdateDrxConfig is maintained (%d)
Line 3370: (L1LC_ConnDrxUpdateDrxConfig)(onDurationTimer:%d drxInactivityTimer:%d drxRetransmissionTimer:%d)
Line 3371: (L1LC_ConnDrxUpdateDrxConfig)(longDRXCycle:%d longDRXCycle_offset:%d shortDRXCycle:%d drxShortCycleTimer:%d)
Line 3373: (L1LC_ConnDrxUpdateDrxConfig)(onDurationTimer:%d drxInactivityTimer:%d drxRetransmissionTimer:%d)
Line 3374: (L1LC_ConnDrxUpdateDrxConfig)(longDRXCycle:%d longDRXCycle_offset:%d shortDRXCycle:%d drxShortCycleTimer:%d)
Line 3409: L1LC_DrxConfig is Disabled
Line 3411: (L1LC_ConnDrxUpdateDrxConfig)(L1LC_DrxConfig is Disabled)
Line 3457: Diffent DRX !!!!!n PrevL1LC_DrxUpdatePagingConfig(drx_T:%d, PF:%d, PO:%d, nB:%d)
Line 3522: L1LC_DrxUpdatePagingConfig(drx_T:%d, PF:%d, PO:%d)
Line 3524: L1LC_DrxUpdatePagingConfig(drx_T:%d, PF:%d, PO:%d)
Line 3543: L1LC_DrxSuspendReq
Line 3548: MTM calibration is already working
Line 3555: LTE is already in test mode
Line 3562: L1 is already suspend mode(%d)
Line 3566: L1 is already power down
Line 3573: [L4GDS]Other LTE stack is not inactive
Line 3597: L1LC_DrxStateInit
Line 3613: [4GDS] Conn - Conn state is ended!!
Line 3705: Other LTE stack is actived(%d)
Line 3806: L1LC_DrxResumeReq
Line 3823: OtherST(%d) Active and CurrentST(%d) Resume-Req: L2BlockStatus -> FALSE!
Line 3849: [DRX] HW is not off actually
Line 3855: [DRX] gDrx_PowerOn_TimingLatch, Skip Modem/Dsp power on 
Line 3869: [DRX] gDrx_PowerOn_TimingLatch (Other ST: %d), Skip Modem/Dsp power on 
Line 3958: [DRX] Diff cellboundary is zero!
Line 4001: Paging Receive Intr is already set, Do not update again
Line 4039: Change SleepTime : prev(%d), after(%d)!
Line 4043: time_diff(%d)!
Line 4048: It seems that paging timing was passed already!
Line 4051: [Debug] Is_Drx_check_ind = %d
Line 4093: UNEXPECTED SLEEP_TIME(%d)!!!!!!!!!!!!!!!!! 
Line 4097: L1LC_DrxUpdateLongDrxTime!!!!!!!!!!!!!!!!! 
Line 4133: [DRX] Remaining Time for PagingRcvIntr is too small. Set PagingRcvIntr 1ms later
Line 4135: [DRX] Prepone not possible!!paging_frame=%d(%d), curTimeSFN=%d(%d)
Line 4141: [DRX] paging_frame=%d, paging_offset=%d, curTimeSFN=%d(%d)
Line 4228: TimeToExpiry(%u, (100us)) AbsTimeout(%x) pal_uptime(%x)! TimerState(%d)
Line 4298: time_diff(%d, (100us))!
Line 4326: [4G_DRDS] SCG Paging Receive Intr is already set, Do not update again!
Line 4363: Change SleepTime : prev(%d), after(%d)!
Line 4367: time_diff(%d)!
Line 4401: UNEXPECTED SLEEP_TIME(%d)!!!!!!!!!!!!!!!!! 
Line 4405: L1LC_DrxUpdateLongDrxTime!!!!!!!!!!!!!!!!! 
Line 4434: [DRX] Remaining Time for PagingRcvIntr is too small. Set PagingRcvIntr 1ms later
Line 4437: [DRX] Prepone not possible!!paging_frame=%d(%d), curTimeSFN=%d(%d)
Line 4446: [DRX] paging_frame=%d, paging_offset=%d, curTimeSFN=%d(%d)
Line 4526: ALL MEAS cycle - DRX spare time=%d(sf), Curr=%d(sf), Paging=%d(sf)
Line 4531: ALL MEAS cycle - Need more DRX spare time(=%d(sf)), Curr=%d(sf), Paging=%d(sf)
