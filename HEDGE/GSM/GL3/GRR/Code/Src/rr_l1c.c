Line 98: Start Discete Cell Search Timer
Line 133: arfcns_to_scan:%d
Line 144: scan_all_freqs:%d
Line 195:  !!!SISchArry OverFlow(SI1)
Line 213:  !!!SISchArry OverFlow(SI2)
Line 231:  !!!SISchArry OverFlow(SI2b)
Line 249:  !!!SISchArry OverFlow(SI2t_1)
Line 270:  !!!SISchArry OverFlow(SI2t_2)
Line 308:  !!!SISchArry OverFlow(SI2q_1)
Line 320: SI2Q(NORM) SI2qInd:%d
Line 338: SI2Q(EXTENDED) SI2qInd:%d
Line 352:  !!!SISchArry OverFlow(SI3)
Line 370:  !!!SISchArry OverFlow(SI4)
Line 388:  !!!SISchArry OverFlow(SI7)
Line 406:  !!!SISchArry OverFlow(SI8)
Line 424:  !!!SISchArry OverFlow(SI9)
Line 442:  !!!SISchArry OverFlow(SI13)
Line 454:  SI13(Ext)
Line 461:  SI13(Norm)
Line 483:  !!!SISchArry OverFlow(SI9Loop)
Line 517: useBand:%s
Line 561: BPLMN: useBand:%s
Line 593: BCCH_READ_REQ(%d) NededSI (0x%x):
Line 600:  !!!BcchReadReq NA
Line 613: PrevTime(%d), CurrTime(%d)
Line 626: Diff(%d)
Line 634: SKIP BCCH Reading - 4G data ongoing, diff time(%d)
Line 647: Cell Reselection or Selection is on-going. Do not skip BCCH
Line 690: SI3 rcvd New NededSI (0x%x) Low Prio SI(0x%x):
Line 694: SI3 rcvd New NededSI (0x%x) Low Prio SI(0x%x):
Line 699: SI1 rcvd New NededSI (0x%x) Low Prio SI(0x%x):
Line 702: SI1 rcvd New NededSI (0x%x) Low Prio SI(0x%x):
Line 719: rr_RlcSuspForNormalResel %d, read reason: L1_BETTER_NEIGHBOUR_DURING_PTM_DS
Line 733: rr_WaitSiAfterResel %d, bcch read reason: L1_CELL_SELECTION
Line 741: rr_WaitSiAfterResel %d, bcch read reason: L1_NETWORK_COMMANDED
Line 746: rr_GrrPsSupportedChanged & rr_GrrPsSupportedFlag = TRUE so set bcch read reason: L1_CELL_SELECTION
Line 753:  ReadReason:%x
Line 776: SIToRead: NededSI (0x%x) Low Prio SI(0x%x):
Line 786: BCCH_READ_REQ (%d)  Parallel rr_BcchReadArfcn (%d) NBcchReqSent (%d)  :
Line 793: Only rr_BcchReadArfcn (%d) NBcchReqSent (%d)  :
Line 800: Scell rr_BcchReadArfcn (%d) SBcchReqSent (%d)  :
Line 842:  ReadReason:%x
Line 853:  !!!SISchArry OverFlow(SI3)
Line 871:  !!!SISchArry OverFlow(SI4)
Line 898:  SIDatabase: sync_info_required (%d)
Line 936: BPLMN: Stopping any ongoing BCCH READ
Line 985: rr_StopOngoingBcch: RR is not in a proper state to handle this
Line 991: Cell selection is ongoing, pause cell search
Line 997:  Check for pending BCCH Read Response
Line 1005:  Stop N rr_BcchReadArfcn(%d)
Line 1012:  Stop S rr_BcchReadArfcn(%d)
Line 1020: No pending BCCH Scell %d Ncell %d Sent %d  :
Line 1046: StopBcchReadReq(%d)
Line 1070: StopBcchReadReq not sent
Line 1071: rr_IdleReqState(%d),rr_PktTransferState(%d), rr_ServCell->BcchFreq (%d), bplmnState(%d)
Line 1076: rr_ServCell is null
Line 1125: StopServBcchReadReq(%d)
Line 1147: StopBcchReadReq not sent
Line 1220: Suitable Cell timer is running in Dedicated mode. Stop it !!!
Line 1342: Prepare the channel assignment req message for later ..
Line 1351: CSD is supported
Line 1378: CSD channel mode(%d) is not supported!!
Line 1516: rr_DbgScell.TxPower = rr_DbgScell.CurrentTxPower (%d)
Line 1759: HO FAIL Cause: RR_PROT_ERR_UNSPE Cell not found in Sync
Line 1767: CSD is supported
Line 1786: HO FAIL Cause : CSD channel mode(%d) is not supported!!
Line 1823: HO FAIL Cause: RR_CHAN_MODE_KO Channel Mode:%d
Line 1849: HO FAIL Cause: RR_CHAN_MODE_KO Channel Mode:%d
Line 1859: HO: ARFCN(%d) NCC(%d) BCC(%d) BSIC(%x)
Line 1931: rr_DbgScell.TxPower = rr_DbgScell.CurrentTxPower (%d)
Line 1936: Arfcn(%d) not Supported by Carrier
Line 1940: HO FAIL Cause: RR_FREQ_NON_IMPL Cell->BcchFreq:%d
Line 1974: HO FAIL Cause: RR_FREQ_NON_IMPL
Line 1996: HO FAIL Cause: RR_FREQ_NON_IMPL
Line 2015: HO FAIL Cause: RR_CHAN_MODE_KO
Line 2054: HSN Received from NW (%d)
Line 2147: CBCH-Invalid Freq Hopping Band
Line 2341: CRITICAL ERROR, Value put of Range: t_avg_w:%d, force to MAX
Line 2346: CRITICAL ERROR, Value put of Range: t_avg_t:%d, force to MAX
Line 2351: CRITICAL ERROR, Value put of Range: alpha:%d, force to MAX
Line 2356: CRITICAL ERROR, Value put of Range: n_avg_i:%d, force to MAX
Line 2361: CRITICAL ERROR, Value put of Range: pc_meas_chan:%d, force to MAX
Line 2366: CRITICAL ERROR, gprspwrctrl valid:%d, force to Valid
Line 2376: ##########  NMO Mode CCCH IDLE  %d  and Page % in Scell Page %d 
Line 2458: Error Buffer overflow, array index of 'ma_index' may be out of bounds %d 
Line 2474: !!!MA 15 used for PCCCH!!!
Line 2517: PBCCH maio:%d hsn:%d
Line 2521: PBCCH NoOfFreqs:%d
Line 2526:  PBCCH HopFreq:%d
Line 2765: IdleReq not sent during reselection
Line 2776: IdleReq pending
Line 2799: MPH_PCCCH_IDLE_REQ(%d)
Line 2808: MPH_CCCH_IDLE_REQ(GPRS)(%d)
Line 2830: MPH_CCCH_IDLE_REQ(GSM)(%d)
Line 2967: [Cipher] key1: 0x%x 0x%x 0x%x 0x%x
Line 2974: [Cipher] key2: 0x%x 0x%x 0x%x 0x%x
Line 3001: MPH_ERROR_IND(cause %d) Dlci Status 0x%x
Line 3008: DTM: rr_SetDTMAccessStatusToRlc(F)
Line 3264: CSD is supported
Line 3289: [CHN MOD] VAMOS TSC set2, TCH/F
Line 3294: [CHN MOD] VAMOS TSC set2, TCH/H
Line 3315: CSD channel mode(%d) is not supported!!
Line 3433: [CHN MOD] tsc_set(%d) tsc(%d)
Line 3485:  PBCCH NoOfFreqs(%d)
Line 3490:   PBCCH Hop Freq(%d)
Line 3586: rr_CalculateFrequencyParams
Line 3592:  MA type(%d)
Line 3621: Exclude freqs in ARFCN index list
Line 3628: Freqs removed: 
Line 3641:  %d
Line 3650:  %d
Line 3662:  %d
Line 3705: NON_DRX_PERIOD, IDLE REQ not allowed
Line 3712: IDLE REQ not allowed, rr_MmRxvdPowerOffInd or ACCESS_IN_PROGRESS is on
Line 4004: StopPbcchReadReq(%d)
Line 4020: StopPBCCHReadReq not sent
Line 4130: rr_BcchSwapFreq = %d
Line 4265: Target cell = NULL !!
Line 4629: Incorrent IE length (%d) for number of codecs (%d)
Line 4643: Incorrent IE length (%d) for number of codecs (%d)
Line 4657: Incorrent IE length for number of codecs
Line 4674: Incorrent IE length (%d) for number of codecs (%d)
Line 4697: Incorrent IE length for number of codecs
Line 4764: Incorrent IE length (%d)
Line 4828: Set forceBandInd
Line 4868: Chan Val(%d) ChanDescr(%x %x)
Line 4877: TSC (%d)
Line 4936: Channel Desc-2 TSC Set value (%d), Subchannel(%d)
Line 5037: rr_BuildChanDesc FreqLists is not match Band, rr_BandInd:%d
Line 5050: Arfcn(%d) not Supported by Carrier
Line 5084: Arfcn(%d) not Supported by Carrier
Line 5586: Reset rr_suspendTbfforUarfcnScan to hold, Network request UE to move to Page Reorg mode.
Line 5765: MPH_CHANNEL_RELEASE (%d)
Line 5884: Pended bandInd change is handled: BandInd %d in SI6 doesn't match %d.
Line 6035: Error ARFCN Mismatch CGI ARFCN %d BCCH Arfcn %d
Line 6044: ANR BCCH_READ_REQ  BcchFreq %d Needed SI 0X%x bcch_type (%d)
Line 6083:  !!!SISchArry OverFlow(SI3)
Line 6102:  !!!SISchArry OverFlow(SI4)
Line 6121:  !!!SISchArry OverFlow(SI13)
Line 6133:  SI13(Ext)
Line 6140:  SI13(Norm)
Line 6178: BPLMN:Stop as BandToScan(%d) is invalid)
Line 6252: Supposed to scan one band!
Line 6278: scan_all_freqs = %d, useBand=%s
Line 6282: BPLMN: MPH_RXLEV_REQ Cause(%d) 
Line 6315: BPLMN: BCCH_READ_REQ %d
Line 6357:  !!!SISchArry OverFlow(SI3)
Line 6375:  !!!SISchArry OverFlow(SI4)
Line 6413: BPLMN: MPH_STOP_BCCH_READING_REQ(%d)
Line 6429: BPLMN:Error! Attempting to Stop reading Serving Cell(%d)
Line 6447: BPLMN: MPH_STOP_BCCH_READING_REQ not sent
Line 6486: FG: MPH_STOP_RXLEV_REQ
Line 6530: BPLMN: MPH_STOP_RXLEV_REQ(Cause: %d)
Line 6573: BPLMN: MPH_CONFIG_BPLMN_REQ cause=%d
Line 6607: Reselection In Progress, ignore DRX time
Line 6625: BPLMN: MPH_DRX_TIMER_IND. rr_Sleep_Time=%ld ms
Line 6631: BPLMN: Sleep_Time %d ms less than %d ms, Ignored!
Line 6637: BPLMN:Error: BPLMN State Mismatch!
Line 6638: BPLMN: Ignoring MPH_DRX_TIMER_IND. Sleep_Time =%d ms
Line 6666: BPLMN: MPH_CONFIG_BPLMN_CNF:%d
Line 6706: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 6744: BPLMN: MPH_STOP_RXLEV_CNF
Line 6749: BPLMN: in SUSPEND_NULL state 
Line 6810: [FAST_SYNC] Parallel ARFCN: %d, SYNC_REQ_SENT
Line 6869: BPLMN: rr_BFreqSyncPos %d, CurrentIndex %d
Line 6948: BPLMN: MPH_BPLMN_SYNC_REQ(n: %d, ARFCNs: %d, %d, %d)
Line 6969: BPLMN: rr_BFreqSyncPos %d, CurrentIndex
Line 6977: BPLMN: SYNC_REQ not sent 
Line 7007: BPLMN: MPH_BPLMN_SYNC_REQ(n: %d, ARFCNs: %d, %d, %d)
Line 7083: BandToScan: GSM850 MaxArfcnTry:%d
Line 7100: BandToScan: PCS1900 MaxArfcnTry:%d
Line 7117: BandToScan: GSM900 MaxArfcnTry:%d
Line 7125: BPLMN for 1800 band is kicked off (bandInd(PCS))
Line 7136: BandToScan: DCS1800 MaxArfcnTry:%d
Line 7160: BandToScan: GSM900 MaxArfcnTry:%d
Line 7177: BandToScan: DCS1800 MaxArfcnTry:%d
Line 7194: BandToScan: GSM850 MaxArfcnTry:%d
Line 7202: BPLMN for 1800 band is kicked off (bandInd(PCS))
Line 7213: BandToScan: PCS1900 MaxArfcnTry:%d
Line 7243: BandToScan: GSM900 MaxArfcnTry:%d
Line 7253: BandToScan: GSM850 MaxArfcnTry:%d
Line 7263: BandToScan: DCS1800 MaxArfcnTry:%d
Line 7273: BandToScan: PCS1900 MaxArfcnTry:%d
Line 7287: BandToScan: Error: Failed to find Band to Scan
Line 7294: rr_BplmnBandScanStatus: 850:%d 900:%d 1800:%d 1900:%d Ongoing:%s
Line 7342: DCS1800 BAND_SCAN_NOT_REQUIRED, rr_BandInd %d
Line 7347: PCS1900 BAND_SCAN_NOT_REQUIRED, rr_BandInd %d
Line 7361: rr_BplmnBandScanStatus: 850:%d 900:%d 1800:%d 1900:%d Ongoing:%s
Line 7391: SYNC_IND
Line 7408: SYNC_IND Cell(%d) Status(%d)
Line 7412: Error: INVALID_SYNC_INFO for ARFCN %d!
Line 7429: SYNC_NOT_FOUND Rxlev: %d of ARFCN:%d
Line 7444: Unexpected Error: rr_PowerMsg=NULL
Line 7451: [FAST_SYNC] MPH_SYNC_IND %d  ...
Line 7455: [FAST_SYNC] SYNC FOUND failed for ARFCN %d! ...
Line 7464: rr_FastSync.BcchFreq[%d] = INVALID_ARFCN ...
Line 7476: Rxd Sync_ind for ARFCN not in SyncList!
Line 7482: SET  Status  for  SYNC_IND Cell(%d) Status(%d) Count (%d)
Line 7487: FB failed Handicapping ARFCN %d Rxlev (%d)  
Line 7494: FB failed Handicapping ARFCN %d Rxlev (%d)  
Line 7500: SB failed for ARFCN %d! Handicapping...
Line 7525: BPLMN_SYNC_IND came in BPLMN IDLE state
Line 7532: BPLMN: BPLMN_SYNC_IND
Line 7536: BPLMN: SYNC_IND ARFCN:%d BSIC:%x Status:%d
Line 7540: BPLMN:Error: INVALID_SYNC_INFO for ARFCN %d!Status:%d
Line 7546: BPLMN: FB-SB failed for ARFCN %d!Status:%d
Line 7567: BPLMN: Include retrylist due to weak sig for ARFCN %d! Rxlev %d
Line 7571: BPLMN: Not retry due to strong sig for ARFCN %d! Rxlev %d
Line 7614: ARFCN %d BSIC:%x Found in BPlmnDb PLMN(%x,%x,%x)
Line 7668: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 7682: ARFCN %d BSIC:%x not found in DB!
Line 7708: [FAST_SYNC] Mode Error
Line 7770: MPH_HANDOVER_FAIL_REQ
Line 7818: MPH_LCS_FREQ_AID_CNF, Status = %d
Line 7838: MPH_LCS_FREQ_AID_CNF, Status = %d
Line 7860: MPH_BATT_CAPACITY_IND
Line 7890: Do not delete HO Cell:%d in rr_SendChangeBandIndToGL1
Line 7896: Do not delete HO Cell:%d in rr_SendChangeBandIndToGL1
Line 7902: Do not delete HO Cell:%d in rr_SendChangeBandIndToGL1
Line 7908: Do not delete HO Cell:%d in rr_SendChangeBandIndToGL1
Line 7936: ExtPg: Inform GL1 to Pretreat
Line 7958: Requested PageMode:%d PktPageMode:%d
Line 7977: Used PageMode:%d PktPageMode:%d
Line 8000:  Mem Alloc issue in SendNasSignalingIndToL1
Line 8008:  GRR=>L1 MPH_NAS_SIGNALING_IND Start Stop (%d) Type (%d) 
Line 8021:  Mem Alloc issue in rr_SendDiscreteCellSrchModeToGL1
Line 8026:  rr_SendDiscreteCellSrchModeToGL1: Mode (%d) 
Line 8036:  rr_GrrHandlePgReorgCnf: pgReorgCnfCause (%d) 
Line 8098: DS: Using Copied IdleReq Params
Line 8134: DRX: PS NonDrx Not allowed. NonDrx_Config:%d SingleSim:%d
Line 8161: DRX: PSNonDrxTime:%d NonDrx_Config:%d
Line 8186: DRX: CS NonDrx Not allowed. NonDrx_Config:%d SingleSim:%d
Line 8211: DRX: Attempt to Enter DRX Mode
Line 8233: MPH_SENSOR_STATE_REQ(%d, %d)
Line 8267: ### NewTrafficBand =  %d 
