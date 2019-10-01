Line 847: Change cell ID : %d -> %d
Line 852: Change Downlink BW : %d -> %d
Line 871: [SC] SetDlSystemInfo: mode(%d), [CID, BW, CP]([%d, %d, %d] -> [%d, %d, %d])
Line 1123: HALSC_SetTdpState Modem(skip)
Line 1135: assert condition : Current state is wrong
Line 1143: HALSC_SetTdpState Modem(skip), RF unavailable: %d
Line 1171: [SC] SetTdpState(CC%d): state(%d -> %d)
Line 1210: [SC] SetRxMode(CC%d): mode(%x)
Line 1285: [SC] SetFePathIdx(CC%d): Not supported path(%d)
Line 1290: [SC] SetFePathIdx(CC%d): path(%d), idx(%d)
Line 2412: [SC] IratFreqChangeInGap: Earfcn(%d), AGC(%d, %d), BW(%d)
Line 2438: [SC] IratInitFaInfo: AGC(%d, %d)
Line 2479: [SC] IratStoreFaInfo: AGC(%d, %d)
Line 2514: [SC] IratConfigGapInIdle: gDrx_ActiveRat(%d), PD_LTE_STATUS(%d)
Line 2518: [SC] (IRAT config) sfn(%d), tti(%d), offset(%d)
Line 2519: [SC] (IRAT gap_start) sfn(%d), tti(%d), offset(%d)
Line 2520: [SC] (IRAT gap_end) sfn(%d), tti(%d), offset(%d)
Line 2590: [SC] IratConfigGapInSuspend: gDrx_ActiveRat(%d), PD_LTE_STATUS(%d)
Line 2594: [SC] (IRAT config) sfn(%d), tti(%d), offset(%d)
Line 2595: [SC] (IRAT gap_start) sfn(%d), tti(%d), offset(%d)
Line 2596: [SC] (IRAT gap_end) sfn(%d), tti(%d), offset(%d)
Line 2660: [SC] IratConfigGapInConn
Line 2680: [SC] Gap timing(%d): sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
Line 2757: [SC] IratConfigUmtsStartSignal: sfn(%d), tti(%d), offset(%d)
Line 2787: [SC] IratClearUmtsStartSignal: umtsStartSig(%d)
Line 2820: [SC] IratInitLteRF: earfcn(%d), rf_band(%d)
Line 2873: [SC] IratInitLteRFInGap: earfcn(%d), rf_band(%d), pdm(%d)
Line 2902: [SC] InitSync
Line 2940: [SC] SetServingCell: CID(%d), CP(%d), POS(%d)
Line 3079: [SC] MIB false alarm : All Zero
Line 3117: [SC] Invalid SHM.cnt(%d)
Line 3135: [SC] MIB false alarm : Ant num error(0x%x)
Line 3147: [SC] MIB false alarm : BW ERROR(%d)
Line 3199: [SC] Serv(CC%d) MIB: bch_dec_idx[%d], pbch_trial_cnt[%d], idx+cnt[%d]
Line 3207: [SC] Serv(CC%d) MIB: DL_BW[%d], PHICH.Resource[%d], PHICH.Duration[%d], NG[%d], SFN[%d], AntNum[%d]
Line 3219: [%4d, %3d] MasterInformationBlock : dl-SystemBandwidth %d, phich-Duration %d, phich-Resource %d, systemFrameNumber 0x%02X, ant_num: %d
Line 3272: [SC] HeNB(CC%d) MIB: DL_BW[%d], PHICH.Resource[%d], PHICH.Duration[%d], NG[%d], SFN[%d], AntNum[%d]
Line 3304: [SC] ITF(CC%d) MIB: DL_BW[%d], PHICH.Resource[%d], PHICH.Duration[%d], NG[%d], SFN[%d], AntNum[%d]
Line 3342: [SC] D2D(CC%d) MIB: DL_BW[%d], SFN[%d], TTI[%d], SA[%d], IC[%d], RES[%d]
Line 3356: [SC] Invalid PBCH mode(%d)
Line 3584: [SC] Measure(CC%d): rx_mode(%x), bw(%d), agc_gain(%d, %d, %d, %d)
Line 3597: [SC] [%4d] (%3d) M0 %6d %6d %6d %6d %6d
Line 3598: [SC] [%4d] (%3d) M1 %6d %6d %6d %6d %6d
Line 3599: [SC] [%4d] (%3d) M2 %6d %6d %6d %6d %6d
Line 3600: [SC] [%4d] (%3d) M3 %6d %6d %6d %6d %6d
Line 3629: [SC] [%4d] (%3d) MEASURE RESULT VALID (%d)
Line 3634: [SC] MEASURE RESULT VALID CNT (%d -> %d)
Line 3645: PDM value periodic update(CONN)
Line 3697: [SC] HAL_GetIqcCoefValue(%d): TAP(0), I(%x), Q(%x)
Line 3698: [SC] HAL_GetIqcCoefValue(%d): TAP(1), I(%x), Q(%x)
Line 3699: [SC] HAL_GetIqcCoefValue(%d): TAP(2), I(%x), Q(%x)
Line 3823: HALSC_ProcSync10msHisr(LABS(afc_angle):%d cnt:%d afc_pdm:%d)
Line 3827: HALSC_ProcSync10msHisr(on holding)(LABS(afc_angle):%d cnt:%d afc_pdm:%d)
Line 3833: HALSC_ProcSync10msHisr(current_time.sfn:%d current_time.tti:%d)
Line 3839: HALSC_ProcSync10msHisr(After AFC HOLD STOP afc_pdm: %d)
Line 3840: [SC] (After AFC HOLD STOP afc_pdm: %d)
Line 3859: HALSC_ProcSync10msHisr(current_time.sfn:%d current_time.tti:%d)
Line 3860: HALSC_ProcSync10msHisr(AFC HOLD)afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
Line 3861: [SC] (afc_pdm: %d HALSC_FirstAfcPdmStored: %d)
Line 3868: HALSC_ProcSync10msHisr(No Action due to any srchoffset but no pdmoffset) afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
Line 3877: HALSC_ProcSync10msHisr(Start FastSrch) afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
Line 3883: HALSC_ProcSync10msHisr(NO ACT due to ongoing FS)afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
Line 3973: [MTM] gHALSC_AgcIndexForMtm8960(%d, %d)
Line 3977: [MTM] ProcSync10msIntr: Abnormal AGC Index(%d, %d)
Line 3995: [MTM] gHALSC_AgcIndexForMtm8960[%d][%d] = %d
Line 4000: [MTM] 8960_Average_AGC(%d, %d)
Line 4004: [MTM] rsrp_offset(%d, %d), dB_diff(%d)
Line 4042: [SC] EnablePagingIntr: intr_time(%d, 0), paging_time(%d, %d), current_time(%d, %d), remain_time(%d), gDrxResync_cnt(%d)
Line 4053: [SC] EnablePagingRcvIntr: intr_time(%d, %d, 0)
Line 4410: [SC] (SFN:%d) Out Sync Rate = %d (str:%d, thr:%d) rsrp(%d) rsrq(%d)
Line 4419: [SC] SINR(%d, %d)
Line 4430: [SC] In Sync Rate = %d (str:%d, thr:%d)
Line 4444: [SC] Out Sync Rate = %d (str:%d, thr:%d)
Line 4446: Out Sync Rate = %d (str:%d, thr:%d)
Line 4584: [SC] SetTdpBeforeInterHOStep1: AGC OFF(%d, %d), AFC HOLD(%d)
Line 4586: [SetTdpBeforeInterHOStep1] AGC OFF(%d %d), AFC_HOLD(%d)
Line 4615: [SC] SetTdpBeforeInterHOStep2: AGC Index = (%d, %d)
Line 4656: [SC] SetTdpBeforeBlindHoSrch: Saved AFC value(%d)
Line 4734: [SC] SetTdpBeforeIntraHO: Saved AFC value(%d)
Line 4736: [SetTdpBeforeIntraHO] HALSC_SavedAfcValue:%d
Line 4776: [SC] SetTdpAfterHOStep1: AGC gain(%d, %d)
Line 4834: [SC] SetTdpAfterHOStep2: Restored AFC value(%d)
Line 4836: [SetTdpAfterHOStep2] Use HALSC_AfcPdmStored : %d
Line 4854: [SC] SetTdpAfterHOStep3
Line 4934: [SC] SetTdpBeforeBplmnScanStep2(InterANR): AGC(TD-ASYNC) ON
Line 4938: [SC] SetTdpBeforeBplmnScanStep2: AGC(TD-ASYNC) ON
Line 5116: [SC] ProcGapAHisr: Unknown GAP state(%d), mode(%d, %d)
Line 5129: [SC] ProcGapAHisr(end): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 5206: [SC] --- Default Interrupt
Line 5214: [SC] --- Default DMTC Interrupt
Line 5224: [SC] ProcGapBHisr: Unknown GAP state(%d), mode(%d, %d)
Line 5244: [SC] ProcGapBHisr(end): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 5247: [SC] InterFreq/IRAT GapA Time: %d [us], Inner Gap Time : %d [us], GapB Time : %d [us]
Line 5382: [SC] ProcGapCHisr: Unknown GAP state(%d), mode(%d, %d)
Line 5395: [SC] ProcGapCHisr(end): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 5456: [SC] GetNextGapBoundary(%d): cur_sfn_tti(%d), gap_sfn_tti(%d)
Line 5461: [SC] GetNextGapBoundary(%d): Invalid!!! cur_sfn_tti(%d), gap_sfn_tti(%d) GapPeriod(%d)
Line 5497: [SC] CheckNextGapBoundary: Gap is disabled
Line 5516: [SC] CheckNextGapBoundary(GAP,DMTC both configured margin + 4ms)(diffRTG:%d): Gap timing: sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
Line 5520: [SC] CheckNextGapBoundary(diffRTG:%d): Gap timing: sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
Line 5552: [SC] GetNextDmtcBoundary(%d): cur_sfn_tti(%d), dmtc_sfn_tti(%d)
Line 5557: [SC] GetNextGapBoundary(%d): Invalid!!! cur_sfn_tti(%d), dmtc_sfn_tti(%d) DmtcPeriod(%d)
Line 5601: [SC] ConfigGapInterrupt: earfcn(%d), bw(%d)
Line 5608: [SC] GapLevelState(%d), AgcOvr(%d, %d), PschPwr(%d, %d, %d), SrchResultValid(%d)
Line 5614: assert condition : fa_info is NULL
Line 5651: [SC] Gap timing(%d): sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
Line 5754: ConfigDefaultGapInterrupt
Line 5808: ConfigDefaultDmtcInterrupt
Line 5826: MeasDurationInd - SGapB enabled (sfn:%d, tti%d)
Line 5885: [SC] Measurement Scheduling (meas_enable:%d, meas_period:%d, gap_enable:%d, dmtc_enable:%d)
Line 5901: [SC] GAP Scheduling Start, sfn = %d, tti = %d
Line 5911: [SC] GAP Scheduling Stop, sfn = %d, tti = %d
Line 5922: [SC] DMTC Scheduling Start, sfn = %d, tti = %d
Line 5931: [SC] DMTC Scheduling Stop, sfn = %d, tti = %d
Line 5957: [SC] GAP Scheduling Stop
Line 5999: [SC] Measurement Scheduling Stop
Line 6003: [SC] GAP Scheduling Stop
Line 6007: [SC] Dmtc Scheduling Stop
Line 6033: [SC] Do not disable Connected Schedule Interrupt
Line 6221: [SC] SetAntennaMode: op_mode(%d), rx_mode(%x -> %x)
Line 6276: [SC] ConfigAntenna: Not supported antenna config(%d)
Line 6428: [SC] InitforDRX
Line 6485: [SC] ConfigRTG: time_offset(%d), RTG(%d, %d, %d, %d)
Line 6527: [SC] ConfigRTGforIRAT: meas_bw(%d), cell_id(%d), time_offset(%d)
Line 6716: [SC] SwReset
Line 6743: [SC] ReInitSync !!!
Line 6745: ReInitSync
Line 6820: [SC] FaSelectReady: Invalid FA selection state(%d)
Line 6849: [SC] EnableSync: mode(%d), earfcn(%d)
Line 7281: [SC] EnablePbch: cc(%d), mode(%d)
Line 7353: [SC] DisablePbch: cc(%d), mode(%d)
Line 7377: [SC] EnableMeas: Invalid measure cnt(%d)
Line 7384: [SC] RSTD: PRS Measurement Ongoing, Delay CRS Measurement Request
Line 7403: [SC] DMTC EnableMeas(CC%d): start(%d), end(%d), bw(%d), dmtc_config(%d)!
Line 7464: [SC] EnableMeas(CC%d): mode(%d), cnt(%d), serv_bw(%d)!
Line 7521: [SC] DisableMeas
Line 7708: [DSDS] Modem is power down state, DsdsConnScheduleIntr handling is abnormal
Line 7712: [DSDS] Conn Schedule Interrupt [%d]
Line 7726: [DSDS] Conn Schedule Interrupt Invaild input
Line 8132: [DSDS] Do not disable GAP Intr as RF is with other stack
Line 8167: RF not available hence do not disable interrupt of other stack
Line 8171: Force disable Interrupt!! because RF release or pause
Line 8193: Force disable Interrupt SCG!!
Line 8423: [SC] InitialSyncDone
Line 8450: HALSC_HoldTdpBlockDsdsPause
Line 8484: [SC] HoldTdpBlock: PDM(%d), AGC(%d, %d) AGC_MODE(%d) 
Line 8516: HALSC_HoldTdpBlockDsdsPauseSCG
Line 8567: [SC] HoldTdpBlock: PDM(%d), AGC(%d, %d) AGC_MODE(%d) 
Line 8600: UE in DRX Sleep. Skipping TDP restore!!!
Line 8647: [DRX] [Before AGC start] Turned on Rx diversity paths according to the current Rx mode(%x)
Line 8652: [DRX] (Adaptation): Changed to 4Rx for monitoring
Line 8667: [DRX] AGC gain recovery(%d, %d)
Line 8680: [SC] RestoreTdpBlock: UeState(%d), PDM(%d), AGC(%d, %d) AGC MODE(%d)
Line 8742: [SC] HoldTdpBlock: PDM(%d), AGC(%d, %d)
Line 8812: [SC] RestoreTdpBlock: UeState(%d), PDM(%d), AGC(%d, %d)
Line 8828: [SC] RestoreLteCommonBlockAfterUmtsCgiAcq: start
Line 8845: [SC] RestoreLteCommonBlockAfterUmtsCgiAcq: finish
Line 9018: [SC] ProcSync10msIntr: Skip Activating pal_Sync10msHCB HISR(gDrxShortModeFlag == TRUE)
Line 9027: [SC] ProcSync10msIntr: Skip Activating pal_Sync10msHCB HISR(gHALSC_IdleGapOnGoing == TRUE)
Line 9118: [SC] ProcConnScheduleIntr: Invalid state(%d, %d)
Line 9161: [SC] Ignore ProcConnScheduleIntr: meas_mode(HALSC_MEAS_CONFIG_CONN_DRX) GapStartFlag(%d)
Line 9191: [SC] ProcConnScheduleIntr: effective_ready_sfn(%d), current_time.sfn(%d)tti(%d)
Line 9204: [SC] ProcConnScheduleIntr: New GapStartSfn(%d), effective_ready_sfn(%d)
Line 9237: [SC] ProcConnScheduleIntr(DMTC): effective_ready_sfn(%d), current_time.sfn(%d)tti(%d)
Line 9250: [SC] ProcConnScheduleIntr: New DmtcStartSfn(%d), effective_ready_sfn(%d)
Line 9265: [SC] (Scheduling request, DMTC configured: %d) sfn = %d, subframe num = %d, offset = %d
Line 9278: [SC] (Scheduling request, GAP configured: %d) sfn = %d, subframe num = %d, offset = %d
Line 9292: [SC] (RSTD Preponed Meas Schedule request, GAP configured: %d) sfn = %d, subframe num = %d, offset = %d
Line 9304: [SC] (Scheduling request) sfn = %d, subframe num = %d, offset = %d
Line 9365: [SC] ProcSGapAIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 9423: [SC] ProcSGapBIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 9483: [SC] ProcSGapCIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 9541: [SC] ProcHGapAIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 9599: [SC] ProcHGapBIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 9656: [SC] ProcHGapCIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 9813: [SC] ProcSysTimeCommonIntr: status(0x%x)
Line 9892: [SC] SRCH AGC0[0-4]: %08x %08x %08x %08x %08x
Line 9893: [SC] SRCH AGC1[0-4]: %08x %08x %08x %08x %08x
Line 9894: [SC] SRCH AGC0[5-9]: %08x %08x %08x %08x %08x
Line 9895: [SC] SRCH AGC1[5-9]: %08x %08x %08x %08x %08x
Line 9917: [SC] [%d]SFN[%d], Cell ID[%d], CP Type[%d] UL BW[%d] Position[%d] 
Line 9963: [SC] HALSC_UpdateAfcPdmBySrchFO: HALSC_AfcPdmSrchFO(%d, %dHz) HALSC_AfcPdmStored(%d) HALSC_AfcPdmCal(%d)
Line 9999: HALSC_ResetAfcPdmValue(use cal data due to PowerON)(HALSC_AfcPdmStored:%d)
Line 10005: HALSC_ResetAfcPdmValue(return due to Modem PD)(HALSC_AfcPdmStored:%d)
Line 10014: HALSC_ResetAfcPdmValue(use HALSC_AfcPdmStored)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 10033: HALSC_ResetAfcPdmValue(use HALSC_AfcPdmSrchFO)(HALSC_AfcPdmSrchFO:%d(%dHz) HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 10041: HALSC_ResetAfcPdmValue(use HALSC_AfcPdmCal)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 10049: HALSC_ResetAfcPdmValue(use HALSC_AfcPdmDefault)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 10058: HALSC_ResetAfcPdmValue(use 4G CAL DATA)(4G:%d HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 10067: HALSC_ResetAfcPdmValue(use default due to large pdm offset)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 10074: HALSC_ResetAfcPdmValue(use HALSC_AfcPdmStored)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 10080: HALSC_ResetAfcPdmValue(find Y value)(HALSC_AfcPdmStored:%d afc_pdm:%d pdm_offset[%d]:%d, gL1LC_pdm_control_value:%d)
Line 10083: HALSC_ResetAfcPdmValue(find Y value)(HALSC_AfcPdmStored:%d afc_pdm:%d pdm_offset[%d]:%d, gL1LC_pdm_control_value:%d)
Line 10244: HALSC_StoreAfcDefaultPdmValue(2G Cal update due to AFC HOLD)(HALSC_AfcPdmDefault:%d )
Line 10265: HALSC_StoreAfcDefaultPdmValue(2G Cal update due to limit)(HALSC_AfcPdmDefault:%d )
Line 10271: HALSC_StoreAfcDefaultPdmValue(normal update)(HALSC_AfcPdmDefault:%d )
Line 10377: HALSC_StoreAfcPdmValue(Not update SW PDM due to AFC HOLD)(current_AfcPdm:%d)
Line 10386: HALSC_StoreAfcPdmValue(force_update)(HALSC_AfcPdmStored:%d )
Line 10397: HALSC_StoreAfcPdmValue(due to limitation)(afc_pdm:%d HALSC_AfcPdmStored:%d LABS(afc_angle):%d)
Line 10404: Store HALSC_AfcPdmStored(%d)(%d) : %d
Line 10411: Not Store HALSC_AfcPdmStored During BPLMN or CGI: %d, PREV:%d (%d)
Line 10502: HALSC_GetAfcPdmValue(Not get SW PDM due to AFC HOLD)(afc_pdm:%d HALSC_AfcPdmStored:%d)
Line 10517: HALSC_GetAfcPdmValue(limit due to large offset(afc_pdm:%d HALSC_AfcPdmStored:%d LABS(afc_angle):%d)
Line 10522: HALSC_GetAfcPdmValue(get PDM)(get afc_pdm:%d HALSC_AfcPdmStored:%d)
Line 10554: [SC] GetAfcPdmValue: afc_pdm(%d), HALSC_AfcPdmStored(%d)
Line 10584: HALSC_UpdateAfcPdmValueInFlash(update Y value)(HALSC_AfcPdmStored:%d)
Line 10643: HALSC_ConversionFrom2GCalValue(cal_voltage:%d afcPdmValue:%d Cal_slope:%d Cal_offset:%d range_idx:%d)
Line 10644: HALSC_ConversionFrom2GCalValue(recal_AFC_DAC:%d cal_voltage:%d DAC_slope:%d DAC_offset:%d range2_idx:%d)
Line 10649: HALSC_ConversionFrom2GCalValue(Use 2G cal recal_AFC_DAC:%d)
Line 10697: [SC] GetAfcPdmValueInFlash: AFC CAL DATA(%d)
Line 10699: Get HALSC_AfcPdmStored From CAL DATA: %d
Line 10724: HALSC_CheckAfcBypassmode(AFC HOLD STOP)(afc_pdm:%d HALSC_AfcPdmStored:%d)
Line 10728: HALSC_CheckAfcBypassmode(normal status)(afc_pdm:%d HALSC_AfcPdmStored:%d)
Line 11351: [SC] SINR: CC0(%3d, %3d), CC1(%3d, %3d), CC2(%3d, %3d)
Line 11362: [SC] SINR: CC3(%3d, %3d), CC4(%3d, %3d), CC5(%3d, %3d)
Line 11382: [SC] SINR: CC6(%3d, %3d), CC7(%3d, %3d), CC8(%3d, %3d)
Line 11391: [SC] SINR: CC9(%3d, %3d)
Line 11480: [SC] STR: %4d %6d (InSyncRate:%3d, OutSyncRate:%3d)
Line 11490: [SC] [%d]STR: %4d %6d
Line 11540: [SC] STR(offset): CC0(%d, %d), CC1(%d, %d), CC2(%d, %d), RND(%03x)
Line 11552: [SC] STR(power): CC0(%d, %d), CC1(%d, %d), CC2(%d, %d), RMS(%06x)
Line 11566: [SC] STR(offset): CC3(%d, %d), CC4(%d, %d), CC5(%d, %d), RND(%03x)
Line 11578: [SC] STR(power): CC3(%d, %d), CC4(%d, %d), CC5(%d, %d), RMS(%06x)
Line 11594: [SC] STR(offset): CC6(%d, %d), CC7(%d, %d), RND(%03x)
Line 11603: [SC] STR(power): CC6(%d, %d), CC7(%d, %d), RMS(%06x)
Line 11660: [SC] AFC: PDM(%4d), ANGLE(CC0:%d, CC1:%d, CC2:%d, CC3:%d, CC4:%d, CC5:%d)
Line 11674: [SC] AFC: PDM(%4d), ANGLE(CC6:%d, CC7:%d)
Line 11735: [PHY] STAT-ERR(id,val): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 11738: [PHY] STAT(mcs/rb/grant): %d, %d, %d, %d, %d, %d, %d
Line 11741: [PHY] STAT(rank4/256q/layer): %d, %d, %d, %d, %d, %d, %d
Line 11744: [PHY] STAT-HARQ(diffTbs/maxRetx/a2n): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 11747: [PHY] STAT-TX(): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 11750: [PHY] STAT-CYCLE: 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 11753: [PHY] STAT-CCH(): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 11756: [PHY] STAT-DEMOD(dse/dop): %d, %d, %d, %d, %d, %d, %d
Line 11809: [SC] SetMeasInfoUpdate: Invalid meas mode(%d)
Line 11825: [SC] SetMeasInfoUpdate: Not found available CC for earfcn(%d)
Line 11910: [SC] SetMeasInfoUpdate(csi-rs): csi_rs_id(%d), scrambling_id(%d), resource_config(%d), subframe_offset(%d)
Line 11940: [SC] SetMeasInfoUpdate: earfcn(%d), cell_info(%d, %d, %d), cc(%d), frame_pos(%d), period(%d)
Line 12013: [SC] NgapDurationStart(%d): AGC serving(%d, %d) -> target(%d, %d)
Line 12094: [SC] NgapDurationEnd(%d): AGC target(%d, %d) -> serving(%d, %d)
Line 12123: [SC] --- IRAT(LTE Sync) Start Interrupt
Line 12131: [SC] --- IRAT(LTE Meas) Start Interrupt
Line 12139: [SC] --- IRAT(LTE Sync GAP) Start Interrupt
Line 12149: [SC] --- IRAT(LTE Meas GAP) Start Interrupt
Line 12159: [SC] --- UMTS Sync/Meas Start Interrupt
Line 12167: [SC] --- TDSCDMA Sync/Meas Start Interrupt
Line 12175: [SC] --- GSM Sync/Meas Start Interrupt
Line 12181: [SC] --- UMTS SI ACQUISITION Start Interrupt
Line 12189: [SC] --- CDMA Meas Start Interrupt
Line 12196: [SC] --- Invalid GAP Start Interrupt
Line 12214: [SC] --- IRAT(LTE Sync) End Interrupt
Line 12220: [SC] --- IRAT(LTE Meas) End Interrupt
Line 12224: [SC] --- IRAT(LTE Sync GAP) End Interrupt
Line 12236: [SC] --- IRAT(LTE Meas GAP) End Interrupt
Line 12253: [SC] --- UMTS Sync/Meas End Interrupt
Line 12266: [SC] --- TDSCDMA Sync/Meas End Interrupt
Line 12279: [SC] --- GSM Sync/Meas End Interrupt
Line 12292: [SC] --- UMTS SI ACQUISITION End Interrupt
Line 12307: [SC] --- CDMA Meas End Interrupt
Line 12320: [SC] --- Invalid GAP End Interrupt
Line 12373: [SC] not update the agc because next measure elem are exist(%d , %d)
Line 12382: [SC] MEAS AGC: GAIN(%d, %d) -> (%d, %d), dBPow(%d, %d)
Line 12472: [SC] SRCH AGC: GAIN(%d, %d) -> (%d, %d), pos(%d, %d, %d)
Line 12499: [SC] DMTC AGC0[0-5]: %02x %02x %02x %02x %02x %02x
Line 12500: [SC] DMTC AGC1[0-5]: %02x %02x %02x %02x %02x %02x
Line 12530: [SC] SRCH AGC0[0-5]: %08x %08x %08x %08x %08x %08x
Line 12531: [SC] SRCH AGC1[0-5]: %08x %08x %08x %08x %08x %08x
Line 12535: [SC] SRCH AGC0[0-4]: %08x %08x %08x %08x %08x
Line 12536: [SC] SRCH AGC1[0-4]: %08x %08x %08x %08x %08x
Line 12537: [SC] SRCH AGC0[5-9]: %08x %08x %08x %08x %08x
Line 12538: [SC] SRCH AGC1[5-9]: %08x %08x %08x %08x %08x
Line 12587: [SC] SetAgcGainUpdateForMeas: pos_diff(%d), start_time(%d, %d), margin(%d), intr(%d, %d, %d)
Line 12643: [SC] CheckGapSrchResultValid: EARFCN(%d), AgcValidCheck(TRUE), AGC(%d, %d)->(%d, %d)
Line 12648: [SC] CheckGapSrchResultValid: EARFCN(%d), AgcValidCheck(FALSE), AGC(%d, %d)->(%d, %d)
Line 12718: [SC] SetSFN: sfn(%d)
Line 12771: [SC] ProcPbchDecIntr: Unknown interrupt!!!
Line 12848: [SC] ProcMeasIntr!
Line 13022: Remaining time until Gap start (%ums)
Line 13109: [SC] HALSC_IratLteTimingDifferenceRtg : startRtgUnit(%d) endRtgUnit(%d)
Line 13362: HALSC_IratCdmaTimingMoveByRtg : start is NULL
Line 13367: (HALSC_IratCdmaTimingMoveByRtg) systemTime clock(High: 0x%x  Low: 0x%x)
Line 13489: calculated sfn(%d), tti(%d), offset(%d)
Line 13745: [SC] IratGetLatchInfo: SFN(%d), TTI(%d), OFFSET(%d)
Line 13819: [SC] IRAT Timing Update: newSFN(%d), Count(%d), deltaRtg(%d)
Line 13820: [SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
Line 13821: [SC] IRAT Timing(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
Line 13822: [SC] IRAT Timing(GSM): frameNumber(%d), Qb(%d)
Line 13825: [SC] IRAT Timing(CDMA): CDMASystemTime(High: 0x%x  Low: 0x%x)P(High: 0x%x  Low: 0x%x)Diff(%d)
Line 13875: [SC] Post IRAT Reference Time(LTE): SFN(%d), TTI(%d), OFFSET(%d)
Line 13876: [SC] IRAT LTE Side Latch Reference Timing Update: deltaRtg(%d)
Line 13877: [SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
Line 13883: [SC] Post IRAT Reference Time(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
Line 13884: [SC] IRAT Timing(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
Line 13890: [SC] Post IRAT Reference Time(GSM): frameNumber(%d), Qb(%d)
Line 13891: [SC] IRAT Timing(GSM): frameNumber(%d), Qb(%d)
Line 13899: [SC] Post IRAT Reference Time(CDMA: RAT %d): systemTime(High: 0x%x  Low: 0x%x)
Line 13900: [SC] IRAT Timing(CDMA: RAT %d): systemTime(High: 0x%x  Low: 0x%x)
Line 13957: [SC] IRAT Timing Change: Count(%d), deltaRtg(%d)
Line 13958: [SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
Line 13959: [SC] IRAT Timing(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
Line 13960: [SC] IRAT Timing(GSM): frameNumber(%d), Qb(%d)
Line 13961: [SC] IRAT Timing(CDMA): CDMASystemTime(High: 0x%x  Low: 0x%x)
Line 13991: [SC] Error sfn_gap(%d) tti_gap(%d), 
Line 14017: HALSC_CalDiffFL1RcvAndCdmaEndWindow : sfn_gap(%d), tti_gap(%d), bRefer_Next_Sfn(%d)
Line 14083: [SC] Error timeDiff(<=0): %d, 
Line 14151: [SC] abnormal bRefer_Next_Sfn : %d, 
Line 14164: [SC] HALSC_IratCdmaRefTimingUpdate: gSiWindowEnd_Info.sfn(%d), gSiWindowEnd_Info.tti(%d), gL1SiRcv_Info.sfn(%d), gL1SiRcv_Info.tti(%d), gL1SiRcv_Info.offset(%d)
Line 14167: [SC] cdmaSysTime(High: 0x%x  Low: 0x%x)
Line 14168: [SC] IRAT Timing(CDMA): Ref CDMASystemTime(High: 0x%x  Low: 0x%x)
Line 14170: [SC] updateCnt(%d), deltaRtg(%d)
Line 14171: [SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
Line 14172: [SC] IRAT Timing(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
Line 14173: [SC] IRAT Timing(GSM): frameNumber(%d), Qb(%d)
Line 14337: [SC] MonitorTest: Current TDP state[%s]
Line 14341: [SC] MonitorTest: Invalid TDP state[%x]
Line 14373:  PaPb_update: %d, gPaPb_Control_dB: %d, gRSRP_Control_dB : %d
Line 14422: [SC] UpdateAgcRmsFromPaPb: Invalid PA, PB value(%d, %d)
Line 14446: [SC] UpdateAgcRmsFromPaPb: Invalid PA, PB value(%d, %d)
Line 14462: [SC] UpdateAgcRmsFromPaPb: Invalid PA, PB value(%d, %d)
Line 14471: [SC] Pa: %d, Pb : %d
Line 14472: [SC] Pa_dB: %d, Pb_dB : %d
Line 14473: [SC] Rho_a_rx: %d, Rho_b_rx : %d
Line 14476:  Pa: %d, Pb : %d, EnbAntNum : %d
Line 14477:  Pa_dB: %d, Pb_dB : %d
Line 14478:  Rho_a_rx: %d, Rho_b_rx : %d
Line 14553: HALSC_CheckSpiForAgc(%d, %d)
Line 14560: Please Check spi
Line 14636: [SC] SetSyncMode(%d -> %d)
Line 14670: [SC] SetMeasMode(%d -> %d)
Line 14720: [SC] SRCH AGC0[0-4]: %08x %08x %08x %08x %08x
Line 14721: [SC] SRCH AGC1[0-4]: %08x %08x %08x %08x %08x
Line 14722: [SC] SRCH AGC0[5-9]: %08x %08x %08x %08x %08x
Line 14723: [SC] SRCH AGC1[5-9]: %08x %08x %08x %08x %08x
Line 14780: [SC] GetCellSearchResult: Activate CC index(%d) Cid(%d) Candi_id(%d)
Line 14784: [SC] GetCellSearchResult: Activate cell search done cc(%d)(%d) candi(%d)
Line 14800: [SC] GetCellSearchResult: DRS Position Calculate is Wrong DMTC(%d) CUR(%d)
Line 14824: [SC] GetCellSearchResult: PSSS is not valid!!! num_candi(%d -> %d)
Line 14854: [SC] GetCellSearchResult: PSS is not valid!!! num_candi(%d -> %d)
Line 14919: [SC] SetMeasInputList: Not supported CC index(%d), earfcn(%d)
Line 14966: [SC] rsrp_temp_offset(%d), measBitShift(%d)
Line 15040: [SC] Not supported CC index(%d)
Line 15096: [SC] Not supported CC index(%d)
Line 15396: [SC] SetPCellInfo: [%4d] Cell ID[%d] CP[%d] POS[%d] RSRP[%d]
Line 15511: [SC] Previous MeasConfig(%d), New MeasConfig(%d)
Line 15724: [RSTD] Remove Abrupt Fap: fapAvg[%d], fapMedian[%d], fapMin[%d] fapMax[%d] fapWinMin[%d] fapWinMax[%d]
Line 15738: [RSTD] Remove Abrupt Fap: Discard TTI[%d], Fap[%d]
Line 15799: [RSTD] Eliminate Invalid Fap: FAP1[THR:%d, Fap:%d Peak:%d], FAP2[THR:%d, Fap:%d Peak:%d]
Line 15847: ----------------------------------RSTD THR TEST-----------------------------------
Line 15942: [RSTD] PRS BW:%d, Discard the TTI[0] Results, bitmap[0x%X], prsTti[%d], start_tti[%d], tti_idx[%d], numFapDiscarded[%d]
Line 15965: [RSTD] prsTti[%d] Outside Gap Boundary[%d to %d], numFapDiscarded[%d]
Line 15973: [RSTD] CELL ID[%d] THR TEST/CELL/TTI[%03d] : MAX_VAL[%d] > THR[%d], MAX_IDX[%d], FAP20/FAP10[%d] FAP[%d]
Line 15977: [RSTD] FAP10[%d] FAP11[%d] FAP20[%d] FAP21[%d]
Line 15982: [RSTD] CELL ID[%d] THR TEST/CELL/TTI[%03d] : MAX_VAL[%d] > THR[%d], MAX_IDX/FAP2/FAP1[%08d] EARLY/LATE PATH[%04d] FAP[%d]
Line 16021: -----------------------------------------------------------------------------------
Line 16056: [RSTD] EnableRstdScheduleIntr: state(%d) sfn(%d), tti(%d), offset(%d)
Line 16125: [RSTD] ProcRstdScheduleIntr: sfn(%d), tti(%d), offset(%d)
Line 16159: [RSTD] EnableRstdDoneIntr
Line 16229: [RSTD] MEASUREMENT DONE INTERRUPT - CURRENT SFN [%d] TTI [%d] OFFSET[%d]
Line 16260: [RSTD] ProcRstdScheduleHisr: state(%d) sfn(%d), tti(%d), offset(%d)
Line 16291: [RSTD] ProcRstdScheduleHisr: Invalid RSTD state
Line 16346: [RSTD] ProcRstdMeasureHisr: sfn(%d), tti(%d), offset(%d)
Line 16351: [SC] RSTD: PRS Measurement Completed, Re-Enable CRS Measurement Request
Line 16401: [RSTD] Reference Cell FAP Update with NEW Results - OLD[Fap_Results = %d, peak_value = %d] --> NEW[Fap_Results = %d, peak_value = %d]
Line 16413: [RSTD] Reference Cell FAP Keep OLD Results - OLD[Fap_Results = %d, peak_value = %d] , NEW[Fap_Results = %d, peak_value = %d]
Line 16436: [RSTD] Reference FAP: Total[%d], CurFap[%d], numSample[%d], peak_value[%d]
Line 16444: [RSTD] Serving Index[%d] REF_CELL_FAP[%d] CELL0_FAP[%d], CELL1_FAP[%d], CELL2_FAP[%d], CELL3_FAP[%d]
Line 16481: [RSTD] RSTD0::[%d], RSTD1::[%d], RSTD2::[%d], RSTD3::[%d]
Line 16484: -----------------------------------------------------------------------------------
Line 16513: [RSTD] HAL Schedule State Changed [%d -> %d]
Line 16557: [RSTD] RstdConfigPRS: CC%d: EN[%d] PRS START TTI[%d] PRS SIZE [%d] PRS BW [%d]
Line 16619: [RSTD] StopRstdMeasure
Line 16767: [RSTD] Best Rx: SINR1[%d, 0x%X], SINR2[%d,  0x%X]
Line 16931: [RSTD] DSP Config - cell_idx[%d], CC/CP/ANT/NPRS[%04d], PrsStartTti[%d], Offset[%d], rxfDelay[%d], BitMap[0x%X],fft_bw[%d]
Line 16939: [RSTD] DSP DeConfig(coliding Cell) - cell_idx[%d], CC/CP/ANT/NPRS[%04d], PrsStartTti[%d], Offset[%d], rxfDelay[%d], BitMap[0x%X],fft_bw[%d]
Line 16957: [RSTD] DSP FFT Config: Cell Cnt[%d] CC[%d], Duplex[%d], Num Rx[%d], Rx Bitmap[0x%X]
Line 16970: [SC] RSTD: PRS Measurement Starting, Disable CRS Measurement Request
Line 17051: [SC] ConfigAgapInterrupt: state(%d)
Line 17132: [A-GAP] current Hw Time sfn[%d], tti[%d] offset[%d]!
Line 17133: [A-GAP] GAP_SET configured at sfn[%d], tti[%d]! phich_ng:%d phich_duration:%d 
Line 17164: [SC] UpdateAgapInterrupt: state(%d)
Line 17219: [A-GAP] current Hw Time sfn[%d], tti[%d] offset[%d]!
Line 17220: [A-GAP] GAP_SET configured at sfn[%d], tti[%d]!
Line 17243: [SC] ConfigAgapMibDec: cell_id(%d), frame_position(%d)
Line 17297: [SC] ConfigAgapSibDec: cell_id(%d), bw(%d), frame_position(%d)
Line 17336: [A-GAP] Error! Agap already active!
Line 17343: [A-GAP] Target Cell info: Cell_id [%d] Earfcn [%d], cp_type[%d], frame_Pos[%d]
Line 17344: [A-GAP] Serving Cell Info: Cell_id [%d] Earfcn [%d], cp_type[%d], frame_Pos[%d]
Line 17372: [A-GAP] Target Cell Earfcn[%d] Serving Cell Earfcn [%d]
Line 17401: [SC] DisableAgap
Line 17447: [SC] StopAgap
Line 17556: [SC] Enable HeNB MIB Decoding
Line 17565: [SC] Enable HeNB SIB1 Decoding
Line 17684: [A-GAP] Timer expired! in dec_mode(%d): count(%d)
Line 17712: [SC] HENB SIB-1 Enabled
Line 17729: [SC] HENB SIB-1 Disabled
Line 17752: [SC] CC%d: earfcn(%d), resv/type(%02d), pair_cc(%02x), tdp_state(%d), rx_mode(%x), rf_path(%x)
Line 17955: [ConfigSingleLO]SetTdpState(CC%d):state(%d->%d)
Line 18017: [SC] ConfigSingleLO: Not found available CC for earfcn(%d)
Line 18223: [SC] ConfigSingleLO(CC%d): Unknown command(%d)
Line 18228: [SC] ConfigSingleLO(CC%d): cmd(%d), slo0(%d, %d), slo1(%d, %d), rf(%d)
Line 18272: [SC] Config4RxMode: MTM running... so skip!!!
Line 18324: [Config4RxMode]SetTdpState(CC%d):state(%d->%d)
Line 18364: [SC] Config4RxMode: CC(%d) is already paired with CC(%d), type(%d)
Line 18370: [SC] Config4RxMode: Not supported RF band (earfcn: %d) for 4Rx
Line 18383: [SC] Config4RxMode: Not found available CC for 4Rx, cc(%d), div_cc(%d)
Line 18484: [Config4RxMode]SetTdpState(CC%d):state(%d->%d)
Line 18518: [SC] Config4RxMode: Enable 4Rx for CC(%d), RF band(earfcn: %d)
Line 18523: [SC] Config4RxMode(CC%d): Unknown command(%d)
Line 18528: [SC] Config4RxMode(CC%d): cmd(%d)
Line 18588: [4G_DRDS] DRDS is impossible due to MIMO!!!
Line 18918: [SC] ConfigScc: SCC info is NULL
Line 19039: [SC] ConfigScc: SCC info is NULL
Line 19148: [SC] Wait %dus for UL SLO setting
Line 19152: [SC] ConfigScc(UL CA Setting): curr_time(%x), act_time(%d), target_tti(%d), diff_time(%d)
Line 19190: [SC] ConfigScc: SCell SISO test_mode(%x)
Line 19376: [SC] ConfigScc: SCC info is NULL
Line 19457: [SC] ConfigScc: SCC info is NULL
Line 19564: [SC] ConfigScc(CC%d): Invalid cmd(%d)
Line 19570: [SC] ConfigScc(CC%d): cmd(%d), act_time(%d, %d), current_time(%d, %d, %d)
Line 19658: [SC] SetSccRfForMeas: CC(%d) is already in use for earfcn(%d), type(%d)
Line 19711: [SC] SetSccRfForMeas: Not found available CC for earfcn(%d)
Line 19719: [SC] SetSccRfForMeas(CC%d): status(%d), flag(%d), earfcn(%d), bw(%d)
Line 19800: [SC] SetSccRfForMeas: Single LO slave CC(%d) is already in use
Line 19870: [SC] SetSccRfForMeas(CC%d): Not supported HW state(%d)
Line 19931: [SC] ChangeUeAntennaConfig: test_mode(%x)
Line 19943: [SC] ChangeUeAntennaConfig(skip): cc(%d), rx_mode(%x)
Line 19969: [ChangeUeAntennaConfig]SetTdpState(CC%d):state(%d->%d)
Line 19974: [SC] ChangeUeAntennaConfig(skip): 4Rx is not supported on CC(%d)
Line 19984: [SC] ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x)
Line 19990: [SC] ChangeUeAntennaConfig(skip), RF unavailable(%d)
Line 20010: [SC] ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x) : Stop AS operation!!!
Line 20020: [SC] ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x) : Start AS operation!!!
Line 20034: [SC] ChangeUeAntennaConfig: rx_mode(0x%x -> 0x%x) 4RxD Status(0x%x) Changed 
Line 20040: [SC] ChangeUeAntennaConfig: rx_mode(0x%x -> 0x%x) 4RxD Status(0x%x) Changed 
Line 20045: [SC] ChangeUeAntennaConfig: rx_mode(0x%x -> 0x%x) 4RxD Status(0x%x) NOT Changed 
Line 20075: [SC] update ant_bitmap(0x%x->0x%x) for IntraBand-nonContiguous CC(%d, 0x%x) band(%d) state(%d)
Line 20125: [SC] Update ExtLna Ctrl for SLO & 4Rx: cc(%d) div_cc(%d) div_rf(%d) div_dcr(%d) div_rx_mode(%d)
Line 20192: ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x)
Line 20195: [SC] ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x)
Line 20205: [ChangeUeAntennaConfig]SetTdpState(CC%d):state(%d->%d)
Line 20235: [SC] ChangeUeAntNum(skip): num_ant(%d), rx_mode(%x)
Line 20247: [SC] ChangeUeAntNum: Not supported UE antenna number(%d)
Line 20294: [SC] ChangeSCellTiming: Not found activated CC for earfcn(%d)
Line 20301: [SC] ChangeSCellTiming: Wrong cell_id(%d, %d)
Line 20324: [SC] ChangeSCellTiming: Time diff is too big!!! time_offset(%d, %d)
Line 20350: [SC] ChangeSCellTiming: dl_earfcn(%d), cell_id(%d), cp_type(%d), time_offset(%d, %d)
Line 20378: [SC] GetSCellTiming: cc(%d), frame_pos(%d), rtg_timing(%d)
Line 20513: [RSSISCAN][MAIN] dl_earfcn: %d, agc_db_power: %d, agc_gain: %d, cal_rsrp_offset: %d, rsrp_temp_offset: %d
Line 20529: [RSSISCAN][SUB] dl_earfcn: %d, agc_db_power: %d, agc_gain: %d, cal_rsrp_offset: %d, rsrp_temp_offset: %d
Line 20594: [SC] SetDmixerFreqOffset: cc(%d), temp_dmxr_freq_offset(%d)
Line 20649: [SC] EnableSlTimeTracking: Sync mode(%d) is not NONE!!!
Line 21336: [SC] SetCpuClkControl: Changed to MIF_L01, CLK_DFS_SVC_4G_REL12
Line 21347: [SC] SetCpuClkControl: Changed to CLK_DFS_SVC_IDLE, MIF_BASE
Line 21375: [4G_DRDS] SetEdvCpuClkControl: Changed to CLK_DFS_SVC_4G_REL11 (Stack_status : ST1(%d), ST2(%d)
Line 21383: [4G_DRDS] SetEdvCpuClkControl: Changed to CLK_DFS_SVC_IDLE (Stack_status : ST1(%d), ST2(%d)
Line 21412: [SC] RestoreOnGapSrchDone: SyncMode(%d) MeasMode(%d) IdleGapOnGoing(%d) GapStartFlag(%d)
Line 21442: [SC] ProcGapBHisr(end): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 21445: [SC] InterFreq/IRAT GapA Time: %d [us], Inner Gap Time : %d [us], GapB Time : %d [us]
