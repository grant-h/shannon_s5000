Line 835: EHalRfOnCmd exec() failed errCode %d addErrCode %d
Line 839: MTMCOMM_3GTask_dummyCallback 
Line 875: MTMCOMM_3GTask_RFOn!
Line 880: Rf Turning Onn
Line 886: FSM_RAKE_FAKE_SYNC: Error %d, Additional Error %d
Line 890: MTMCOMM_3GTask_RFOn Finished
Line 913: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 916: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 921: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 928: MTMCOMM_3GTask_fakeCellSync: sendResponseToUphyToken did not get time to run, so clear it
Line 944: EHalRfRxUarfcnCmd: success rxUarfcn =%d
Line 950: EHalRfRxUarfcnCmd: Error %d, Additional Error %d
Line 958: FAIL: MTMCOMM_3GTask_fakeSyncSetRl 
Line 982: EHalDlRlConfigCmd: Error %d, Additional Error %d
Line 1003: EHalDlFingerConfigCmd: Error %d, Additional Error %d
Line 1079: RXUARFCN=%d TXUARFCN=%d gTx_swap=%d RFBand=%d 
Line 1091: TestMode: call TX DC cal restore function..CurrentRfBandClass=%d
Line 1099: TestMode: ulChannel is created 
Line 1136: ERROR: 3GTask_TxPerStart modemTestMode %d 
Line 1138: TestMode: call TX DC cal restore function..CurrentRfBandClass=%d
Line 1156: TestMode: ulChannel is created 
Line 1177: gTx_swap=%d 
Line 1180: PaBias %d, bandInfo%d , paHighGain %d
Line 1183: DacCtrlVal %d, bandInfo%d , freqInfo %d
Line 1324: MTMCOMM_3GTask_SetTxpower_FixedVcc Txp : %d, %d refoffset : %d, %d
Line 1339: MTMCOMM_3GTask_SetTxpower_FixedVcc target : %d, RFIC index : %d DGC : %ddB [0x%x], offset : %d
Line 1349: SetTxpower Fail Warning !!!! paMode = 0x%x
Line 1359: SetTxpower Fail Warning !!!! point_APT_tx array index = 0x%x
Line 1372: Target : %d =>Band:%d, paMode: %d RFIC(idx) : %d, DGC(x10dB) : %d, Vcc : %d Bias : 0x%x
Line 1402: PA mode : %d (0:Low 2: High)  Bandindex : %d  Total index : %d
Line 1424: [APTUNE] MTMCOMM_3GTask_TuneAPTPower Rfix idx %d, stage %d, DGC val %d
Line 1453: Target : %d /%d  paMode: %d RFIC idx : %d, DGC(x10)dB : %d, Vcc : %d Bias : %d 
Line 1465: Ati_SetAPTTxIndex Fail Warning !!!! paMode = 0x%x
Line 1478: Ati_SetAPTTxIndex Fail Warning !!!! point_APT_tx array index = 0x%x
Line 1483: MTMCOMM_3GTask_Ati_SetAPTTxIndex: APTCalPtsAt : %d APTCalStartPt : %d paMode:%d,
Line 1498: Target : %d =>Band:%d, paMode: %d RFIC idx : %d, DGC(x10)dB : %d, Vcc : %d Bias : %d 
Line 1502: Measured TX Power(AT+HMSRDTXPOWER)= %d
Line 1525: MTMCOMM_3GTask_GetFBRx[%d] init : %d readVal : %d
Line 1529: MTMCOMM_3GTask_GetFBRx[%d] init : %d readVal : %d
Line 1554: MTMCOMM_3GTask_PDADC : Tx power is unstable. Try again[%d/7] index%d tempPDADC : %d lastPDADC : %d gap : %d
Line 1597: MTMCOMM_3GTask_SAPDFreqCalWrite::msrdPdVal[%d] = %d
Line 1617: Flag : %d 
Line 1628: TxP_dbm : %d pos:%d, PD pts:%d, PDADC:%d 
Line 1736: %s ERR : Undefined Band
Line 1741: %s ERR : No Attenuation Calibration!!!
Line 1762: [MTM] %s : bias_index[%d] measuredPDAGC[%d]
Line 1767: [MTM] %s : Overflowed!!!
Line 1776: [MTM] %s : exit by pdadc peak
Line 1785: [MTM] %s : exit by pdadc overflow
Line 1796: [MTM] %s : exit by pdadc peak
Line 1802: [MTM] %s : Cannot Saturate RFIC chip!!!
Line 1808: [MTM] %s : exit by using stable index
Line 1815: [MTM] %s : BAD PDADC, lock PD measure sequence
Line 1821: [MTM] %s : BAD PDADC, using unstable index
Line 1856: [MTM] %s : bias_index[%d] measuredPDADC[%d]
Line 1879: [MTM] %s : BAD PDADC, using unstable index
Line 1886: [MTM] %s : optimal_bias_index[%d] optimal_measuredPDADC[%d]
Line 2011: MTMCOMM_3GTask_MsrdInternalPDADC Stage : %d R: %d DCCAL : %d
Line 2018: %s ERR : No Attenuation Calibration!!!
Line 2023: [MTM] %s : atten[%d] measuredPDAGC[%d]
Line 2054: %s start
Line 2079: MTMCOMM_3GTask_MsrdInternalPDADC Stage : %d R: %d PDAGC : %d
Line 2107: MTMCOMM_3GTask_MsrdInternalPDADC Stage : %d R: %d DCCAL : %d
Line 2118: MTMCOMM_3GTask_MsrdInternalPDADC Stage : %d R: %d DCCAL : %d
Line 2131: MTMCOMM_3GTask_MsrdInternalPDADC ReadPDAGC : %d
Line 2136: %s Error - PDAGC Overflow : %d stage[%d]
Line 2141: %s END
Line 2148: APTCalStartPt : %d,APT_index:%d , Target_Pwr: %d Mesrd Pwr : %d Saved Pwr : %d
Line 2163: APT_index %d APTCalPt %d APTCAL_StartValue %d
Line 2171: gain mode  %d temp1 %d temp2 %d gap %d gapPALowGain %d
Line 2179: gainMode %d Measured power : %d Traget power :%d 
Line 2182: [%d] APTCAL_StartValue %d Now %d Msrd %d gap %d 
Line 2190: [%d] temp1 %d temp2 %d gap %d 
Line 2207: MTMCOMM_3GTask_SAMsrdAPTTxPower : pa_Mode : %d Startpts %d APT_index %d Target Pwr %d txPower %d 
Line 2214: Flag : %d 
Line 2220: TxP_dbm : %d pos:%d, PD pts:%d
Line 2234:  txPowerCalPtsAt:%d 
Line 2288: TxAPTBuild Fail Warning !!!! paMode = 0x%x
Line 2303: TX APT BUILD [2] targetPower %d
Line 2315: MTMCOMM_3GTask_TxAPTBuild LPM Target : %d
Line 2320: MTMCOMM_3GTask_TxAPTBuild LPM gap: %d 
Line 2329: MTMCOMM_3GTask_TxAPTBuild Gain : %d gap: %d 
Line 2347: MTMCOMM_3GTask_TxAPTBuild : TxP : %d, RF_Gain : %d  VCC : %d paMode %d
Line 2373: PA mode : %d (0:Low 2: High)  Band : %d  Total index [APT: %d] 
Line 2392: TX AGC APT [2] targetPower %d
Line 2416: Target Power : %d Require Tx Power(with fixed Vcc) : %d j=%d [APT: %d]
Line 2426: PAM_Bias_SetValue[%d/%d] : %d, %d, 
Line 2429: Frist Target : %d RF gain : %d Vcc : %d
Line 2445: paMode : %d bandArea:%d registryOffset:%d txPowerCalPtsAt:%d offset:%d 
Line 2466: MTMCOMM_3GTask_InternalBuildFBRX:: U_L1.Tx2CalOffset %d
Line 2477: MTMCOMM_3GTask_InternalBuildFBRX[%d]:: gap : %d FBPower: %d TxPower:%d 
Line 2503: MTMCOMM_3GTask_InternalBuildFBRX 0x%x %d
Line 2519: paMode : %d bandArea:%d registryOffset:%d txPowerCalPtsAt:%d 
Line 2578: MTMCOMM_3GTask_MsrdTonePower[%d/%d] :: Data %d
Line 2601: MTMCOMM_3GTask_Find_InternalTxRFICGain [%d/%d] :: txPower %d gap %d
Line 2630: InternalTxRFICindex FBRxGain[%d/%d] :: txPower %d FBgain (0x%x ; %d) gap %d
Line 2636: InternalTxRFICindex FBRxGain :: txPower_log %d FBgain (0x%x ; %d)
Line 2666: InternalTxRFICindex ToneAmp[%d] %d :: RFIC index %d  tonAmp %d txPower [%d / %d]gap %d 
Line 2675: InternalTxRFICindex ToneAmp[%d] :: txPower_log %d fbrxgain 0x%x tone %d
Line 2718: MTMCOMM_3GTask_InternalTxRFICindex:: Band[%d/%d] TxUarfcn[%d] maxGain : %d :: minFbrx %d
Line 2753: MTMCOMM_3GTask_InternalTxRFICindex:: [%d/%d] :: FBGain index %d Tone Amp %d dB(x10) Msrd value %d Msrd Power %d
Line 2829: MTMCOMM_3GTask_InternalTxRFICindex:: [%d/%d] :: FBGain index %d Tone Amp %d Ref Amp %d Msrd Power %d
Line 2852: HSPA_CAL_MSRFBRX : Calibration start fail
Line 2865: HSPA_CAL_MSRFBRX : MEM Alloc fail!!
Line 2931: PA mode : %d (0:Low 2: High)  Bandindex : %d  Total index : %d Start index : %d
Line 2958: MTMCOMM_3GTask_InternalTxAPTPower[i:%d] [trial : %d] Set power : %d PDAGC : %d Msrd Txp[%d] : %d wait : %d
Line 2972: MTMCOMM_3GTask_FBRX_measure error
Line 2981: MTMCOMM_3GTask_InternalTxAPTPower[i:%d] [trial : %d] Set power : %d FBRx : %d Msrd Txp : %d offset : %d
Line 2996: MTMCOMM_3GTask_InternalTxAPTPower[i:%d] [trial : %d] Set power : %d FBRx : %d Msrd Txp : %d offset : %d
Line 3109: MTMCOMM_3GTask_FBRX_measure error
Line 3127: MTMCOMM_3GTask_InternalTxFreq Uarfcn[%d] Set power : %d PDAGC : %d Msrd Txp : %d wait : %d
Line 3145: MTMCOMM_3GTask_txTransmissionSwitch
Line 3149: MTMCOMM_3GTask_txDcCalStart
Line 3190: MTMCOMM_3GTask_buildTxDcCalFinal::Wrong fci gain
Line 3192: Generated DC Cal value for gain(%d) = 0x%x(%d)
Line 3203: Received TX uarfcn = %d
Line 3242: numOfTxFreqCal %d uarfcn %d txPower %d paMode %d
Line 3274: idx, numOfTxMultiChCal %d uarfcn %d txPower %d paMode %d
Line 3284: numOfTxFreqCal %d 
Line 3310: numOfTxFreqCal %d 
Line 3325: registrationUhalWithMiniRouter excuted 
Line 3332: uhal_TmpDataHandler0 is called 
Line 3341: uhal_TmpDataHandler1 is called 
Line 3350: uhal_TmpDataHandler2 is called 
Line 3359: uhal_TmpDataHandler3 is called 
Line 3369: uhal_TmpDataHandler4 is called 
Line 3378: uhal_TmpDataHandler5 is called 
Line 3446: DoneCnt %d HwScrCode %d scCodeEng %d scrCodeFb %d
Line 3461: DoneCnt %d FoundPathCnt %d EcIo %d Rscp %d
Line 3467: pathNumber %d Offset %d Eng %d
Line 3495: MTMCOMM_3GTask_Searcher_Check_Result Cmd %d Clear Executed num_paths %d FoundPathCnt %d
Line 3503: MTMCOMM_3GTask_Searcher_Check_Result: Error %d, Additional Error %d
Line 3523: EHalDlPhychReleaseCmd: Error %d, Additional Error %d
Line 3534: EHalDlRlReleaseCmd: Error %d, Additional Error %d
Line 3596: Clear Searcher & Rake Cmd
Line 3617: RealCellSync rxUarfcn %d searcherPathOffset %d 
Line 3625: RealCellSync state %d
Line 3648: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 3651: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 3656: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 3663: MTMCOMM_3GTask_RealCellSync: sendResponseToUphyToken did not get time to run, so clear it
Line 3684: EHalRfRxUarfcnCmd: Error %d, Additional Error %d
Line 3697: RealCellSync state %d wating for rxlock and step1 start
Line 3711: STEP1 fail
Line 3722: RealCellSync state %d waiting for step1 & buffering start
Line 3727: CheckSTEP1  fail
Line 3732: step1 successl
Line 3735: SearcherBuffer fail
Line 3751: RealCellSync state %d waiting for buffering and step3 start
Line 3756: CheckSearcherBuffer  fail
Line 3763: STEP3 fail
Line 3779: RealCellSync state %d wating for step3 & MP search start
Line 3784: CheckSTEP3  fail
Line 3791:  MultiPath fail
Line 3809: RealCellSync state %d waiting for MP searcher & finger start
Line 3814: MultiPath  fail
Line 3825:  Scr Code=%d
Line 3841: EHalSrchCpichCmd: Error %d, Additional Error %d
Line 3878:  Start RL 0
Line 3910: Finger %d position set to %d
Line 3917: FingerConfig Failed
Line 3923:  Start Finger %d
Line 3946: RealCellSync state %d print rake state
Line 3968: FSM Finished::: So do nothing go happily :-)
Line 3992: downlinkRxCalPower %d  
Line 4066: read I %d, Q %d   
Line 4119: Wrong state %d
Line 4182: pathSupported 0x%x bypassLnaCalStatus 0x%x  
Line 4208:  GetRxAGC[%d]: read0 %d read1 %d read2 %d read3 %d 
Line 4209:  GetRxAGC[%d]: sumOfRx0 %d sumOfRx1 %d sumOfRx2 %d sumOfRx3 %d
Line 4234:  GetRxAGC: bandArea %d currentCalRxUarfcn %d downlinkRxCalPower %d measuredRxPowerRx0 %d measuredRxPowerRx1 %d 
Line 4296:  GetRxAGC: bandArea %d currentCalRxUarfcn %d downlinkRxCalPower %d measuredRxPowerRx0 %d measuredRxPowerRx1 %d 
Line 4344:  GetRxAGC: read1 %d sumOfRx1 %d
Line 4353:  GetRxAGC: bandArea %d currentCalRxUarfcn %d downlinkRxCalPower %d measuredRxPowerRx1 %d
Line 4369:  RX RSSI CAL result:  registry id %d num %d bandArea %d currentCalRxUarfcn %d
Line 4373: registry val %d
Line 4438:  RxAGCFreqCal: read0 %d read1 %d sumOfRx0 %d sumOfRx1 %d
Line 4439:  RxAGCFreqCal: read2 %d read3 %d sumOfRx2 %d sumOfRx3 %d
Line 4468: number of RxFreqCalPoints can't exceed available U_L1_RxFreq_SIZE %d
Line 4476: currentCalRxUarfcn %d bandArea %d numOfRxFreqCalPoints %d
Line 4477: retRxAgc1 %d retRxAgc2 %d retRxAgc3 %d retRxAgc4 %d 
Line 4566: RX Freq Cal Result: bandArea %d numOfRxFreqCalPoints %d currentCalRxUarfcn %d 
Line 4570: registry id %d num %d
Line 4574: registry val %d
Line 4590: RX Freq Cal Result: bandArea %d numOfRxFreqCalPoints %d currentCalRxUarfcn %d 
Line 4594: registry id %d num %d
Line 4598: registry val %d
Line 4630: [ET_Cal] MTMCOMM_3GTask_TXETCAL_UpdateResult band %d, cal type %d, tx type %d
Line 4637: [ET_Cal] Freq cnt : %d
Line 4643: [ET_Cal] Index[%d] Meas Freq[%d] Power[%d]
Line 4675: [RF ET] ETSAStart :: Tx_Type = %d, Cal_Type = %d, band_num = %d, ul_channel = %d, TPow = %d
Line 4708: CALTIMER_SA: timeRfSA_old %d slot_time %d
Line 4716: CALTIMER_SA: timeRfSA_new %d set_time %d
Line 4722: CALTIMER_SA: timeRfSA_new %d set_time2 %d
Line 4734: [RF ET] ETSAFreq :: band_num = %d, Cal_Type = %d, frequency = %d, target_Power = %d
Line 4741: [RF ET] ETSAFreq :: Slot time error
Line 4744: Applied frequency=%d txSmrtAllCurrentFreq(%d) txSmrtAllFreqStep(%d)
Line 4764: [RF ET] ETSA_FREQ :: Finish!
Line 4772: [RF ET] ETSASetup(parameter) :: band = %d, cal_type = %d, pdm0 = %d, set_freq = %d, tx_pwr = %d
Line 4773: [RF ET] ETSASetup(parameter) :: freq_start = %d, freq_stop = %d, freq_step = %d, T0 = %d, Tsetup = %d
Line 4780: [RF ET] ETSASetup :: tCalTimer Error
Line 4796: [RF ET] ETSASetup :: (before read) PA_Bias0 = 0x%x, PA_Bias1 = 0x%x
Line 4798: [RF ET] ETSASetup :: (after read) PA_Bias0 = 0x%x, PA_Bias1 = 0x%x
Line 4809: [RF_ET] ETSASetup :: Tsetup Error
Line 4826: [ET_Cal] MTMCOMM_3GTask_InternalETCAL
Line 4827: [ET_Cal] bandInfo %d step %d  targetPower %d  
Line 4828: [ET_Cal] freqStart %d   freqStop %d   freqStep %d    
Line 4834: [ET_Cal] Load RFIC/Pgain Cal data
Line 4848: [ET_Cal] Applied frequency=%d 
Line 4860: [ET_Cal] Applied frequency=%d 
Line 4869: [ET_Cal] PDADC = %d 
Line 4873: [ET_Cal] Gpadc2Txp operation Fail :%d 
Line 4926: [ET_Cal] MTMCOMM_3GTask_InternalETCAL calTargetTxPower is not valid!! : %d 
Line 4931: [ET_Cal] MTMCOMM_3GTask_InternalETCAL calFreq is not valid!! : %d
Line 4936: [ET_Cal] MTMCOMM_3GTask_InternalETCAL RFComm_InternalPD_Gpadc2Txp Fail!! : %d
Line 4945: [ET_Cal] msrdTxp %d = %d + (%d - %d) 
Line 4956: [ET_Cal] Channel deleted finished TX smart allignmentfor frequency calibration
Line 4959: [ET_Cal] CH: %d, Powmeas:%d 
Line 4984: [ET_Cal] MTMCOMM_3GTask_InternalETCALV2
Line 4985: [ET_Cal] bandInfo %d step %d  targetPower %d  
Line 4986: [ET_Cal] freqStart %d   freqStop %d   freqStep %d    
Line 4992: [ET_Cal] Load RFIC/Pgain Cal data
Line 5008: [ET_Cal] Applied frequency=%d 
Line 5020: [ET_Cal] Applied frequency=%d 
Line 5030: [ET_Cal] PDADC = %d 
Line 5034: [ET_Cal] Gpadc2Txp operation Fail :%d 
Line 5087: [ET_Cal] MTMCOMM_3GTask_InternalETCALV2 calTargetTxPower is not valid!! : %d 
Line 5092: [ET_Cal] MTMCOMM_3GTask_InternalETCALV2 calFreq is not valid!! : %d
Line 5097: [ET_Cal] MTMCOMM_3GTask_InternalETCALV2 RFComm_InternalPD_Gpadc2Txp Fail!! : %d
Line 5106: [ET_Cal] msrdTxp %d = %d + (%d - %d) 
Line 5115: [ET_Cal] Channel deleted finished TX smart allignmentfor frequency calibration
Line 5118: [ET_Cal] CH: %d, Powmeas:%d 
Line 5132: [ET_Cal] Applied frequency=%d 
Line 5143: [ET_Cal] Applied frequency=%d 
Line 5152: [ET_Cal] PDADC = %d 
Line 5156: [ET_Cal] Gpadc2Txp operation Fail :%d 
Line 5209: [ET_Cal] MTMCOMM_3GTask_InternalETCALV2 calTargetTxPower is not valid!! : %d 
Line 5214: [ET_Cal] MTMCOMM_3GTask_InternalETCALV2 calFreq is not valid!! : %d
Line 5219: [ET_Cal] MTMCOMM_3GTask_InternalETCALV2 RFComm_InternalPD_Gpadc2Txp Fail!! : %d
Line 5228: [ET_Cal] msrdTxp %d = %d + (%d - %d) 
Line 5237: [ET_Cal] Channel deleted finished TX smart allignmentfor frequency calibration
Line 5240: [ET_Cal] CH: %d, Powmeas:%d 
Line 5269: [ET_Cal] MTMCOMM_3GTask_InternalETCAL
Line 5270: [ET_Cal] bandInfo %d step %d  targetPower %d  
Line 5271: [ET_Cal] freqStart %d   freqStop %d   freqStep %d    
Line 5277: [ET_Cal] Load RFIC/Pgain Cal data
Line 5308: [ET_Cal] Applied frequency=%d 
Line 5319: [ET_Cal] Applied frequency=%d 
Line 5332: [ET_Cal] MTMCOMM_3GTask_FBRX_measure error
Line 5347: [ET_Cal] MTMCOMM_3GTask_InternalETCAL calFreq is not valid!! : %d
Line 5353: [ET_Cal] msrdTxp %d = %d + (%d - %d) 
Line 5362: [ET_Cal] Channel deleted finished TX smart allignmentfor frequency calibration
Line 5365: [ET_Cal] CH: %d, Powmeas:%d 
Line 5385: [SAPT_CAL] MTMCOMM_3GTask_InternalTxSAPTPower_FBRX
Line 5386: [SAPT_CAL] BandClass=%d wait=%d calPt=%d txUarfcn=%d
Line 5407: [SAPT_CAL] PA mode=%d(0:L,2:H) bandInfo=%d  aptCalPoint=%d StartPwr=%d StopPwr=%d calPt=%d
Line 5446: [SAPT_CAL] InternalTxSAPTPower :: PDAGC=%d targetTxp=%d msrdTxp=%d txRslt=%d wait=%d
Line 5485: [SAPT_CAL] MTMCOMM_3GTask_InternalTxSAPTFreq
Line 5486: [SAPT_CAL] bandInfo=%d targetPower=%d freqStart=%d freqStop=%d
Line 5539: [SAPT_CAL] InternalTxSAPTFreq :: tempFreqCal=%d msrdTxp=%d calTxpower=%d convTxpower=%d
Line 5547: [SAPT_CAL] InternalTxSAPTFreq :: Uarfcn[%d] PDADC=%d targetPower=%d msrdTxp=%d wait=%d count=%d
Line 5578: [SAPT_CAL] MTMCOMM_3GTask_InternalTxSAPTPower_FBRX
Line 5579: [SAPT_CAL] BandClass=%d wait=%d calPt=%d txUarfcn=%d
Line 5616: [SAPT_CAL] PA mode=%d(0:L,2:H) bandInfo=%d  aptCalPoint=%d StartPwr=%d StopPwr=%d calPt=%d
Line 5652: [SAPT_CAL] InternalTxSAPTPower :: measure error
Line 5659: [SAPT_CAL] InternalTxSAPTPower :: targetTxp=%d msrdTxp=%d txplog=%d calvalue=%d
Line 5699: [SAPT_CAL] MTMCOMM_3GTask_InternalTxSAPTFreq_FBRX
Line 5700: [SAPT_CAL] bandInfo=%d targetPower=%d freqStart=%d freqStop=%d
Line 5743: [SAPT_CAL] InternalTxSAPTFreq measure error
Line 5750: [SAPT_CAL] InternalTxSAPTFreq :: tempFreqCal=%d msrdTxp=%d txplog=%d calvalue=%d
Line 5772: [SAPT_CAL] InternalTxSAPTFreq :: calTxpower=%d convTxpower=%d
Line 5779: [SAPT_CAL] InternalTxSAPTFreq :: Uarfcn[%d] targetPower=%d msrdTxp=%d wait=%d count=%d
Line 5802: AT+SETMAXPOWERreceived
Line 5811: AT+SETMINPOWER received
Line 5822: Inside MTMCOMM_3GTask_msrSensitivity()
Line 5846: MTMCOMM_3GTask_configAndStartDL and State=%d(FSM_DL_CONFIG)
Line 5872: FAIL!!! MTMCOMM_3GTask_PhychRlConfig
Line 5881: FAIL!!! MTMCOMM_3GTask_TrchConfig
Line 5889: FAIL!!! MTMCOMM_3GTask_CctrchConfig
Line 5898: Inside MTMCOMM_3GTask_configAndStartDL and State  (FSM_DL_START_0)
Line 5903: Wrong phych_nr value %d
Line 5913: uhal_Test_DL: RlInfo D failed RL#%d %d
Line 5917: current_sfn %d test_info[0].max_tti %d, sfn mod 4=%d sfn mod 2=%d
Line 5922: decodingPosition is %d 
Line 5954: FAIL!!! EHalDlCctrchEnableCmd
Line 5963: Started/Enabled Cctrch0
Line 5990: counter %d num_iterations %d data_received %d
Line 6003: Good CRC: %d, Bad CRC:%d Total Tr Blk:%d decodingPosition %d numOfDecodingPositionChange=%d
Line 6065: FSM Finished::: So do nothing go happily :-)
Line 6142: DCH channel should have following charactersitics to decode properly
Line 6143: Chan Code:%d,Slot Format:EUmtsDlDpchSlotFormat_11,CRC:Asn_crc16,TTI:Asn_tti20
Line 6241: TRCH%d:   Trbk Received: %d   Good CRC: %d  Bad CRC: %d 
Line 6246: TrBlk %d,Bad Crc %d
Line 6248:  bler %d TrBlk %d,Bad Crc %d
Line 6249: Bit error counter %d Total bit %d
Line 6258: BER percentage %d  %d (x1000)
Line 6305: @@  InxCnt = (%5d, %5d), (S/W_SFN, H/W_SFN, RefSlot, RefChip)  = (%5d,%5d,%5d,%5d)
Line 6352: MTMCOMM_3GTask_PhychRlConfig: phych_nr %d ovsf %d multi_code_num=%d SF=%d Slot Format=%d
Line 6364: Phych config failed
Line 6388: MTMCOMM_3GTask_PhychRlConfig: offset_to_cpich=%d, sec_src_code_used=%d, scramblingCodeChange=%d 
Line 6402: MTMCOMM_3GTask_CctrchConfig: cctrch_nr=%d,dtx_pos_fixed=%d,cctrch_type=%d,btfd_active=%d,tfc_num=%d
Line 6458: MTMCOMM_3GTask_TrchConfig: trch_nr=%d,coding=%d,coding_rate=%d,crc_size=%d,rate_matching=%d,tti=%d,TF=%d 
Line 6471: Trch config failed 
Line 6499: uhal_ReceiveData cctrch_index %d lmac_int_src %d test_info[0].counter %d
Line 6504: uhal_ReceiveData cctrch_index %d lmac_int_src %d
Line 6527: uhal_ReceiveData:Array index out of bound num_trch=%d 
Line 6614: FAIL!!!! EHalDataCctrchDecodedInfoCmd  
Line 6659: data[%d] 0x%x pattern_ptr[%d] 0x%x 
Line 6695: SearcherStep1 
Line 6715: SearcherBuffer 
Line 6747: SearcherStep3 
Line 6775: SearcherComplete 
Line 6816: SearcherMP 
Line 6834: Slot time error!!! Tx power off
Line 6860: MTMCOMM_3GTask_InternalTxRFICTimer::Channel deleted finished TX smart allignment for gain sweep
Line 6874: Slot time error!!! Tx power off
Line 6904: MTMCOMM_3GTask_InternalTxPDPowerSetTimer::Channel deleted finished TX smart allignment
Line 6920: MTMCOMM_3GTask_InternalTxPDPowerSetTimer : Target_Power : %d, Stop_Power : %d 
Line 6933: MTMCOMM_3GTask_InternalTxPDPowerSetTimer::Channel deleted finished TX smart allignment
Line 6948: Slot time error!!! Tx power off
Line 6970: PD measure error!!! Error code : %d off
Line 6989: MTMCOMM_3GTask_InternalTxPDPowerTimer : Target_Power : %d, R_flag = %d Stop_Power : %d 
Line 7001: MTMCOMM_3GTask_InternalTxPDPowerTimer::Channel deleted finished TX smart allignment
Line 7006: MTMCOMM_3GTask_InternalTxPDFreqTimer:: %d txSmrtAllFreqStep %d
Line 7013: Slot time error!!! Tx power off
Line 7056: Channel deleted finished TX internal calibration for PD frequency calibration
Line 7071: Slot time error!!! Tx power off
Line 7080: MTMCOMM_3GTask_FBRX_measure error
Line 7084: MTMCOMM_3GTask_InternalTxFBRXPower:: [%d/5] RFIC index %d Rxgain 0x%x Msrdvalue %d 
Line 7093: Channel deleted finished TX internal calibration for PD frequency calibration
Line 7144: MTMCOMM_3GTask_TimerSet :: Timmer is already on!!
Line 7158: MTMCOMM_3GTask_TimerSet :: Timmer is already off!!
Line 7170: MTMCOMM_3GTask_StartTimer Timer : %d task : %d
Line 7230: MTMCOMM_3GTask_InternalTxPDPowerReady[err %d]:: stage%d, GPADC %d, TIA_R %d
Line 7269: MTMCOMM_3GTask_DynamicInternalPD : Target_Power : %d, R_flag = %d stage : %d TIA_R : %d num : %d GPADC : %d
Line 7285: MTMCOMM_3GTask_FBRX_measure error
Line 7289: MTMCOMM_3GTask_InternalTxFBRXPower:: [%d/5] RFIC index %d Rxgain 0x%x Msrdvalue %d 
Line 7303: @@@@@@@@@@@@@@@@@@@@MTMCOMM_3GTask_SATxGainSweep:Timer not deleted last time 
Line 7312: MTMCOMM_3GTask_SATxGainSweep:Not able create tCalTimer timer
Line 7322: RF locked and Tx Started rx uarfcn %d tx uarfcn 
Line 7345: MTMCOMM_3GTask_SATxGainSweep:Tsetup must be 0
Line 7359: Slot time error!!! Tx power off
Line 7375: MTMCOMM_3GTask_SATxGainSweepTimer::Channel deleted finished TX smart allignment for gain sweep
Line 7392: Slot time error!!! Tx power off
Line 7421: MTMCOMM_3GTask_SATxGainFullSweepTimer::Channel deleted finished TX smart allignment for gain sweep
Line 7428: @@@@@@@@@@@@@@@@@@@@MTMCOMM_3GTask_SATxGainFullSweep:Timer not deleted last time 
Line 7435: MTMCOMM_3GTask_SATxGainFullSweep:Not able create tCalTimer timer
Line 7472: MTMCOMM_3GTask_SAPDCal:Timer not deleted last time 
Line 7481: MTMCOMM_3GTask_SAPDCal:Not able create tCalTimer timer
Line 7490: RF locked and Tx Started rx uarfcn %d tx uarfcn 
Line 7509: MTMCOMM_3GTask_SAPDCal:Wrong Input
Line 7525: MTMCOMM_3GTask_SAPDCalTimer::Msrd GPADC= %d
Line 7540: MTMCOMM_3GTask_SAPDCalTimer::Channel deleted finished TX smart allignment
Line 7554: @@@@@@@@@@@@@@@@@@@@MTMCOMM_3GTask_SATxPowerCal:Timer not deleted last time 
Line 7563: MTMCOMM_3GTask_SATxPowerCal:Not able create tCalTimer timer
Line 7577: RF locked and Tx Started rx uarfcn %d tx uarfcn 
Line 7594: MTMCOMM_3GTask_SATxPowerCal:Tsetup must be 0
Line 7608: Slot time error!!! Tx power off
Line 7616: APT CAL4 : Target_Power_Start : %d,  Target_Power_Stop : %d 
Line 7630: MTMCOMM_3GTask_SATxPowerCalTimer::Channel deleted finished TX smart allignment
Line 7649: Slot time error!!! Tx power off
Line 7658: MTMCOMM_3GTask_SATxAPTCalTimer:: Gain mode %d 
Line 7670: MTMCOMM_3GTask_SATxAPTCalTimer:: i/j : %d/%d Tx_SA_msrdPts : %d Tx_SA_NowPts : %d Tx_SA_LastPts : %d comp : %d Tx_SA_TargetPower_Step : %d  
Line 7705: MTMCOMM_3GTask_SATxAPTCalTimer::Channel deleted finished TX smart allignment
Line 7712: @@@@@@@@@@@@@@@@@@@@MTMCOMM_3GTask_SATxPowerCal:Timer not deleted last time 
Line 7721: MTMCOMM_3GTask_SATxPowerCal:Not able create tCalTimer timer
Line 7760: MTMCOMM_3GTask_SATxFreqCal:Not able create tCalTimer timer
Line 7774: RF locked and Tx Started rx uarfcn %d tx uarfcn 
Line 7781: MTMCOMM_3GTask_SATxFreqCal 
Line 7800: MTMCOMM_3GTask_SATxFreqCal:Tsetup must be 0
Line 7817: Slot time error!!! Tx power off
Line 7840: Applied frequency=%d txSmrtAllCurrentFreq(%d) txSmrtAllFreqStep(%d)
Line 7856: Channel deleted finished TX smart allignmentfor frequency calibration
Line 7877: Slot time error!!! Tx power off
Line 7901: PD measure error!!! Error code : %d off
Line 7929: MTMCOMM_3GTask_SATxRFICPDCalTimer : Target_Power : %d, R_flag = %d Stop_Power : %d 
Line 7943: MTMCOMM_3GTask_SATxRFICPDCalTimer::Channel deleted finished TX smart allignment
Line 7950: @@@@@@@@@@@@@@@@@@@@MTMCOMM_3GTask_SATxPowerCal:Timer not deleted last time 
Line 7959: MTMCOMM_3GTask_SATxPowerCal:Not able create tCalTimer timer
Line 7994: MTMCOMM_3GTask_SATxMultiChCal:Not able create tCalTimer timer
Line 8003: RF locked and Tx Started rx uarfcn %d tx uarfcn 
Line 8010: MTMCOMM_3GTask_SATxMultiChCal 
Line 8029: MTMCOMM_3GTask_SATxMultiChCal:Tsetup must be 0
Line 8039: TxMultiChCal2 : txSmrtAllCurrentFreq: %d txSmrtAllFreqStep %d, tempFreqCal : %d 
Line 8049: Slot time error!!! Tx power off
Line 8056: Applied frequency=%d txSmrtAllCurrentFreq(%d) txSmrtAllFreqStep(%d)
Line 8057: Tx_SA_TargetPower_Start = %d
Line 8059: SA multi_ch idx = %d offset =%d
Line 8064: TxMultiChCal3 : txSmrtAllCurrentFreq: %d txSmrtAllFreqStep %d, tempFreqCal : %d 
Line 8077: Channel deleted finished TX smart allignmentfor frequency calibration
Line 8088: MTMCOMM_3GTask_LMTResponse msg %d lmtDrxOn %d
Line 8099: LMT_Uarfcn %d LMT_RSSI %d LMT_RSCP %d LMT_BER %d
Line 8114: msg memory allocation fail!!!!! 
Line 8134: LMTToken state %d Sync num %d freq %d numOfZeroState %d lmtDrxOn %d
Line 8143: Sync Failure
Line 8154: LMTToken state %d Sync Wait & TxStart num %d freq %d
Line 8157: reSyncUarfcn %d syncWaitCounter %d
Line 8160: Sync Failure try again
Line 8186: LMTToken state %d Measure RSSI & RSCP num %d freq %d
Line 8197: LMT_RSSI[%d] %d LMT_RSCP[%d] %d 
Line 8205: LMTToken state %d start to measure BER num %d freq %d
Line 8218: LMTToken state %d under measuring BER num %d freq %d
Line 8224: LMTToken state %d Done LMT_currentBER %d num %d freq %d
Line 8227: LMT_BER[%d ] %d
Line 8247: LMTToken state %d finish
Line 8271: LMTToken FSM Finished::: So do nothing go happily :-)
Line 8285: MTMCOMM_3GTask_SetUlUarfcn::rxUarfcn=%d txUarfcn=%d
Line 8301: EHalRfRxUarfcnCmd: Error %d, Additional Error %d
Line 8314: Load cal data called 
Line 8351: TxDCCal start bandInfo 0x%x (%d) 
Line 8360: dcCalBand %d 0x%x %d 
Line 8364: DC CAL ERROR : NO SUCH BAND %d Band_Class %d
Line 8369: S933 GSM TxDC_Cal index : BAND %d 
Line 8375: BAND %d DC cal and IQ Imbalance calibration start
Line 8383: TxDCCal end : digital gain original value is %d
Line 8387: MTMCOMM_3GTask_ActiveOnly selectedAnt %d lmtDrxOn %d
Line 8396: Parameter value %d is invalid.(0~3) 
Line 8415: testType %d txpower %d
Line 8439: EHalRfRxOnCmd: Error %d, Additional Error %d
Line 8445: SUB Emulation RX ON
Line 8464: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 8467: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 8472: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 8479: MTMCOMM_3GTask_fakeCellSync: sendResponseToUphyToken did not get time to run, so clear it
Line 8496: EHalRfRxUarfcnCmd: success rxUarfcn =%d
Line 8502: EHalRfRxUarfcnCmd: Error %d, Additional Error %d
Line 8521: EHalRfRxOffCmd: Error %d, Additional Error %d
Line 8527: SUB Emulation RX OFF
Line 8539: SubSim Prx rssi %d drx rssi %d
Line 8552: Rscp %d RAKE_RSCP_OFFSET %d
Line 8565: FingerInfo Failed
Line 8569: Finger 0 in state %d position %d raw=%d EcIo=%d RSCP=%ddBm isLocked %s isPowerLocked %s
Line 8593: FingerInfo Failed
Line 8601: GetRxRscpDRX - Finger 0 in state %d position %d raw=%d EcIo=%d RSSI=%d RSCP=%d
Line 8616: uhal_CHmcp_GetAtiPhycTest_sendMsg2Ati: val2 = %d
Line 8621: NS_UMTS_RSSI_SCAN_REQ : HSPA_CAL_HSPATMSTART
Line 8637: UmodemStatus=%d
Line 8640: UmodemStatus=%d
Line 8648: DSP Dead SO enable DSP!!!!!!!!!!  
Line 8656: ## Warning!! uhal_HmcpIpcGetDstStatus is False##
Line 8661: ul_ch_info 0 
Line 8671: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 8676: Antenna switched to UMTS
Line 8684: Error: modem is turned off 
Line 8703: NS_UMTS_RSSI_SCAN_REQ:: UL channel exists so delete it... 
Line 8709: DSP AliveSo Disable it.!!!!!!!!!!!!!  
Line 8718: DSP Dead So Do nothing!!!!!!!!!!  
Line 8723: [process debug] NS_UMTS_RSSI_SCAN_REQ: 3G off
Line 8731: NS_UMTS_RSSI_SCAN_REQ - UmodemStatus is OFF so bypass
Line 8745: NS_UMTS_RSSI_SCAN_REQ : MTMCOMM_3GTask_RssiScan_sendMsg2NS pal_MemAlloc fail
Line 8755: NS_UMTS_RSSI_SCAN_REQ : MTMCOMM_3GTask_RssiScan_sendMsg2NS length %d 
Line 8763: NS_UMTS_RSSI_SCAN_REQ : MTMCOMM_3GTask_RssiScan_sendMsg2NS pal_MemAlloc fail
Line 8795: Wrong rx frequency %d. couldn't convert right uarfcn. default set to high band rxUarfcn %d
Line 8823: Wrong rx frequency %d. couldn't convert right uarfcn. default set to high band rxUarfcn %d
Line 8900: Wrong uarfcn. couldn't find right frequency BAND. default set to high band rx_uarfcn %d
Line 8991: NS_UMTS_RSSI_SCAN_REQ : scanBand %d offset %d antennaSel %d scanMode %d samplingCnt %d
Line 9052: NS_UMTS_RSSI_SCAN_REQ : startFreq %d midFreq %d endFreq %d startUarfcn %d midUarfcn %d endUarfcn %d freqNum %d
Line 9168: NS_UMTS_RSSI_SCAN_REQ : uarfcn %d freq %d rssiMainMax %d rssiMain %d rssiSubMax %d rssiSub %d
Line 9173: NS_UMTS_RSSI_SCAN_REQ : Fail to send Msg to  pal_EMsgEntity_AS_SAP
Line 9175: NS_UMTS_RSSI_SCAN_REQ : Success to send Msg to  pal_EMsgEntity_AS_SAP
Line 9182: NS_UMTS_RSSI_SCAN_REQ : Message ID not correct
Line 9245: pal_TaskEntry_HSPA_CALIBRATION: NS_UMTS_RSSI_SCAN_REQ : Msg Id %d
Line 9257: pal_TaskEntry_HSPA_CALIBRATION: NULL messgae received
Line 9265: INFO:pal_TaskEntry_HSPA_CALIBRATION: Message received. Msg Id %d
Line 9269: Received msg id is HSPA_TEST_CAL_MSG
Line 9271: received frequency = %d (0x%x)
Line 9274: Received msg id is HSPA_CAL_DLCELLSYNC
Line 9276: received frequency = %d (Bandinfo %d)
Line 9283: Received msg id is HSPA_CAL_STORE_TARGET_DLPOWER
Line 9285: Received dl Power = %d 
Line 9292: Received msg id is HSPA_CAL_DRXCALON
Line 9294: HSPA_CAL_DRXCALON Mode(1:ON/0:OFF)= %d 
Line 9302: Received msg id is HSPA_CAL_GETRXAGC 
Line 9323: msg memory allocation fail!!!!! 
Line 9332: Received msg id is HSPA_CAL_GETRXAGC1 
Line 9347: msg memory allocation fail!!!!! 
Line 9352: Received msg id is HSPA_CAL_BUILDAGCTAB 
Line 9356: Received msg id is HSPA_CAL_HCalOffset 
Line 9360: Received msg id is HSPA_CAL_HRxOnlyDefaultCal 
Line 9367: Received msg id is HSPA_CAL_TXSTART=%d 
Line 9371: gTx_swap=%d 
Line 9375: PaBias %d, bandInfo%d , paHighGain %d
Line 9378: DacCtrlVal %d, bandInfo%d , freqInfo %d
Line 9385: Received msg id is HSPA_CAL_SETPDMVALUE
Line 9387: Received PDM = %d 
Line 9391: Received msg id is HSPA_CAL_SETTXPOWER
Line 9393: Received Tx power = %d 
Line 9398: Received msg id is HSPA_CAL_TXAGCBUILD 
Line 9404: Received msg id is HSPA_CAL_TXAPTBUILD 
Line 9412: Received msg id is HSPA_CAL_RXAGC_FREQCAL 
Line 9426: msg memory allocation fail!!!!! 
Line 9434: Received msg id is HSPA_CAL_RXAGC_FREQCAL1 
Line 9446: msg memory allocation fail!!!!! 
Line 9456: Received msg id is HSPA_CAL_RXAGC_FREQCAL4RX 
Line 9484: msg memory allocation fail!!!!! 
Line 9489: Received msg id is HSPA_CAL_RXFREQBUILD 
Line 9493: Received msg id is HSPA_CAL_RXFREQ1BUILD 
Line 9498: Received msg id is HSPA_CAL_TXSTARTFREQ=%d 
Line 9502: Received msg id is HSPA_CAL_SETTXFREQ
Line 9504: Received tx uarfcn = %d 
Line 9511: Received msg id is HSPA_CAL_SETTXMULTICHFREQ
Line 9513: Received tx uarfcn = %d 
Line 9515: multi_ch offset =%d paMode =%d 
Line 9522: Received msg id is HSPA_CAL_WRITETXPOWER
Line 9524: Received Tx power = %d 
Line 9529: Received msg id is HSPA_CAL_BUILDTXFREQ 
Line 9534: Received msg id is HSPA_CAL_BUILDTXFREQ 
Line 9540: Received msg id is HSPA_CAL_SETBANDPAMODE
Line 9542: Received PA value = %d 
Line 9549: Received msg id is HSPA_CAL_HSPARFCALSTART 
Line 9563: UmodemStatus=%d
Line 9566: UmodemStatus=%d
Line 9581: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 9586: Antenna switched to UMTS
Line 9595: Error: modem is turned off 
Line 9601: DSP Alive So stop ilpc compensation logic 
Line 9619: Received msg id is HSPA_CAL_HSPARFCALEND 
Line 9623: DSP Alive So Restore DSP Status from registry
Line 9641: Received msg id is HSPA_CAL_HSPARFCALEND:  UmodemStatus is OFF so bypass
Line 9658: Received msg id is HSPA_CAL_BUILDTXDCCALFINAL
Line 9660: Received Gain= %d 
Line 9673: msg memory allocation fail!!!!! 
Line 9680: Received msg id is HSPA_CAL_TXDCCALSTART
Line 9687: Received gain = %d indexInnerLoop=%d regPart=%d
Line 9711: Received msg id is HSPA_CAL_BUILDTXDCCAL:Band Info=%d
Line 9739: BAND %d DC cal and IQ Imbalance calibration done / TX SWAP %d 
Line 9748: S955 TxDC_Cal index : BAND 2
Line 9760: S955 TxDC_Cal index : BAND 5
Line 9781: TX2 DC cal and IQ Imbalance calibration bandInfo%d Tx2bandInfo%d 
Line 9799: BAND %d DC cal and IQ Imbalance calibration done / Tx2bandInfo %d TX SWAP %d 
Line 9805: All BAND DC cal and IQ Imbalance calibration done
Line 9815: Before Changing digital gain original value is %d
Line 9816: After Changing digital gain original value is %d
Line 9843: Received msg id is HSPA_CAL_IIP2CAL:Band Info=%d
Line 9856: Tx Uarfcn %d IIP2  calibration done
Line 9861: Return I_DAC %d , Q_DAC %d
Line 9873: Returnd Q *(u16 *)msg = %d, len = %d
Line 9887: Received msg id is HSPA_CAL_RXPOWER
Line 9889: Received dl Power = %d 
Line 9894: Received msg id is HSPA_CAL_PDMVALSET
Line 9896: Received Pdm = %d 
Line 9901: Received msg id is HSPA_CAL_SET_TX_GAIN_INDEX 
Line 9903: Received Tx Gain Index = %d 
Line 9911: Received msg id is HSPA_CAL_SET_APT_TX_INDEX 
Line 9912: Received Target power = %d 
Line 9919: Received msg id is HSPA_CAL_MSRDTXPOWER
Line 9921: Received Tx Power = %d 
Line 9927: Received msg id is HSPA_CAL_MSRDAPTTXPWR
Line 9932: Received msg id is HSPA_CAL_RetPdTable
Line 9949: Received msg id is AT+HRETPDSATABLE and Too many stage number %d
Line 9958: Received msg id is AT+HRETPDSATABLE and Too many index number %d
Line 10026: HSPA_CAL_GETFBRX : start!!!!
Line 10044: HSPA_CAL_MSRFBRX : MEM Alloc fail!!!!
Line 10061: HSPA_CAL_GETFBRX : end!!!!
Line 10069: Received msg id is HSPA_CAL_ReadPDGpadc
Line 10090: Received msg id is HSPA_CAL_SETPDPOWER Target_PDAGC : %d |Max_PDAGC : %d |TxP : %d | Stage : %d | R_flag : %d| wait : %d 
Line 10101: msg memory allocation fail!!!!! 
Line 10132: msg memory allocation fail!!!!! 
Line 10147: msg memory allocation fail!!!!! 
Line 10161: Received msg id is HSPA_CAL_HPDRETPWR
Line 10169: Received msg id is AT+HSETPDPOWER and Too many PD pts %d
Line 10189: Received msg id is HSPA_CAL_HPDSASTART setFreq : %d | Target_PDAGC : %d | Max_PDAGC : %d | Start_Txp : %d | wait : %d 
Line 10194: Received msg id is HSPA_CAL_TXPWRMSRDFREQCAL
Line 10196: Received Tx Power = %d 
Line 10201: Received msg id is HSPA_CAL_TXMULTICHPWRMSRD
Line 10203: Received Tx Power = %d 
Line 10209: Received msg id is HSPA_CAL_DLSYNC
Line 10211: received frequency = %d 
Line 10227: Received msg id is HSPA_CAL_GETRXRSSI 
Line 10239: Measured RSSI1=%d RSSI2=%d
Line 10252: msg memory allocation fail!!!!! 
Line 10263: Received msg id is HSPA_CAL_RXRSSIGET 
Line 10274: Measured RSSI1=%d RSSI2=%d
Line 10287: msg memory allocation fail!!!!! 
Line 10300: Received msg id is HSPA_CAL_GET4RXRSSI 
Line 10316: Measured RSSI1=%d RSSI2=%d RSSI3=%d RSSI4=%d
Line 10333: msg memory allocation fail!!!!! 
Line 10343: Received msg id is HSPA_CAL_GETRXRSSIPRXONLY 
Line 10352: Measured RSSI1=%d 
Line 10363: msg memory allocation fail!!!!! 
Line 10373: Received msg id is HSPA_CAL_GETRXRSSIDRXONLY 
Line 10383: Measured RSSI1=%d 
Line 10394: msg memory allocation fail!!!!! 
Line 10410: Received msg id is HSPA_CAL_GETRXRSSIACTIVEONLY %d 
Line 10434: Parameter value %d is invalid.(0~3) 
Line 10441: GETRXRSSIACTIVEONLY RSSI %d =%d 
Line 10452: msg memory allocation fail!!!!! 
Line 10461: Received msg id is HSPA_CAL_SETASTUNE
Line 10498: HSPA_CAL_SETASTUNE Mode(1:ON/0:OFF)= %d 
Line 10505: Received msg id is HSPA_CAL_SETTX2
Line 10508: HSPA_CAL_SETTX2 TX path (TX2) = %d 
Line 10517: Received msg id is HSPA_CAL_GETSENSE
Line 10519: Received iteration = %d 
Line 10526: Try Synchronization one more time with freq=%d
Line 10535: Synchronization failed 2nd time also So return BER as 100
Line 10545: Received msg id is HSPA_CAL_TXPERSTART
Line 10547: received frequency = %d 
Line 10551: TXPERSTART finish
Line 10555: Received msg id is HSPA_CAL_SETPOWER
Line 10557: Received Tx power = %d 
Line 10564: Received msg id is HSPA_CAL_SETMAXPOWER
Line 10566: Received Tx power = %d 
Line 10569: HSPA_CAL_SETMAXPOWER::DSP Alive!!!!!!!!!!!!!  
Line 10573: HSPA_CAL_SETMAXPOWER::DSP Dead!!!!!!!!!!  
Line 10580: SETMAXPOWER finish
Line 10584: Received msg id is HSPA_CAL_SETMINPOWER
Line 10586: Received Tx power = %d 
Line 10596: Received msg id is HSPA_CAL_TXFREQSETPDM
Line 10635: Received msg id is HSPA_CAL_TXMULTICHPDM
Line 10669: Received msg id is HSPA_CAL_DINSET_RFIC RFIC index : %d step : %d 
Line 10713: Received msg id is HSPA_CAL_TXTRANSSWITCH
Line 10723: Received msg id is HSPA_CAL_TXAPTSASETUP
Line 10740: i = %d gainMode = %d StartTxP = %d EndTxp= %d 
Line 10745: Received setFreq = %d mrsd_pts = %d gap = %d num_gainmode=%d Thold=%d 
Line 10767: HSPA_CAL_INBUILDRFIC::  Pa_mode=%d, Num_cal_pt=%d 
Line 10773: HSPA_CAL_INBUILDRFIC::  msrd_Pwr=%d 
Line 10781: HSPA_CAL_INBUILDRFIC::  HPM_Pwr=%d , offset[0] = %d
Line 10823: HSPA_CAL_INSTARTFBRX : start!! txUarfcn %d, iRfic %d, txSmartThold %d
Line 10834: HSPA_CAL_INBUILDFBRX : start!!
Line 10876: msg memory allocation fail!!!!! 
Line 10901: msg memory allocation fail!!!!! 
Line 10953: Received msg id is HSPA_CAL_BUILDFREQTX and Too many Cal Pointer %d
Line 11014: [SAPT_CAL] Received txUarfcn=%d wait=%d calPt=%d pdType=%d
Line 11058: [SAPT_CAL] Received targetPower=%d freqStart=%d freqStop=%d freqStep=%d pdType=%d
Line 11082: Received msg id is HSPA_CAL_INSTARTETCAL , pdType(%d)
Line 11101: Received bandInfo = %d step=%d txpower=%d
Line 11102: freqStart=%d,freqStop=%d,freqStep=%d
Line 11138: Received msg : HSPA_CAL_INSTARTETCALV2
Line 11139: band: %d cal type: %d
Line 11192: Received msg id is HSPA_ET_MTM_CAL_DATA_BACKUP, band_index(%d), tx_path(%d), NV_idx(%d)
Line 11238: Received msg id is HSPA_CAL_TXGSSASETUP
Line 11257: Received bandInfo = %d gainMode=%d pdm0=%d setFreq=%d,PowerStart=%d,PowerStop=%d,T0=%d,Tsetup=%d,Thold=%d
Line 11266: Received msg id is HSPA_CAL_TXFSSASETUP
Line 11289: Received bandInfo = %d gainMode=%d pdm0=%d setFreq=%d,setPdm=%d
Line 11290: freqStart=%d,freqStop=%d,freqStep=%d,T0=%d,Tsetup=%d,Thold=%d
Line 11300: Received msg id is HSPA_CAL_TXMULTICHSASETUP(Bandclass %d)
Line 11323: Received bandInfo = %d gainMode=%d pdm0=%d setFreq=%d,setPdm=%d
Line 11324: freqStart=%d,freqStop=%d,freqStep=%d,T0=%d,Tsetup=%d,Thold=%d
Line 11352: Received msg id is HSPA_CAL_HSPATMSTART
Line 11367: UmodemStatus=%d
Line 11370: UmodemStatus=%d
Line 11378: DSP Dead SO enable DSP!!!!!!!!!!  
Line 11385: ## Warning!! uhal_HmcpIpcGetDstStatus is False##
Line 11389: ul_ch_info 0 
Line 11397: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 11402: Antenna switched to UMTS
Line 11409: Error: modem is turned off 
Line 11413: HSPATMSTART finish
Line 11417: HSPA_CAL_HSPATMEND 
Line 11427: HSPA_CAL_HSPATMEND:: UL channel exists so delete it... 
Line 11432: DSP AliveSo Disable it.!!!!!!!!!!!!!  
Line 11441: DSP Dead So Do nothing!!!!!!!!!!  
Line 11445: [process debug] pal_TaskEntry_HSPA_CALIBRATION: 3G off
Line 11453: Received msg id is HSPA_CAL_HSPATMEND:  UmodemStatus is OFF so bypass
Line 11456: HSPA_CAL_HSPATMEND finish 
Line 11465: Received msg id is HSPA_CAL_LMT_PRX
Line 11467: Received msg id is HSPA_CAL_LMT
Line 11480: UmodemStatus=%d
Line 11483: UmodemStatus=%d
Line 11492: DSP Dead SO enable DSP!!!!!!!!!!  
Line 11505: Error: modem is turned off 
Line 11509: HSPATMSTART finish
Line 11520: LMT_berMeasureTime %d
Line 11526: LMT_txMaxPower [%d] %d
Line 11530: LMT_numOfFreq %d
Line 11535: LMT_Uarfcn [%d] %d
Line 11556: Received msg id is HSPA_CAL_HCHANGEMODE
Line 11558: Mode= %d 
Line 11566: Received msg id is HSPA_CAL_HSENDSPI
Line 11579: Received msg id is HSPA_CAL_HWRITESPI
Line 11590: Received msg id is HSPA_CAL_HREADSPI
Line 11602: HSPA_CAL_HREADSPI msg memory allocation fail!!!!! 
Line 11616: Received msg id is HSPA_CAL_mSPDYW 
Line 11621:  addr 0x%x data 0x%x
Line 11631: Received msg id is HSPA_CAL_mSPDYR 
Line 11634:  addr 0x%x data 0x%x
Line 11645: HSPA_CAL_HREADSPI msg memory allocation fail!!!!! 
Line 11652: HSPA_CAL_PHYCTEST_3GF val1 = %d
Line 11660: Received msg id is HSPA_CAL_HENDGAINCAL.BandInfo=%d, DigitalTargetTxPwr=%d.
Line 11673: Received msg id is HSPA_CAL_TXSPISASETUP
Line 11690: Received bandInfo = %d gainMode=%d spi0Index=%d setFreq=%d,T0=%d,Tsetup=%d,Thold=%d,endGainIndex=%d
Line 11693: Index[%d]=
Line 11716: HSPA_CAL_TXRFICSASETUP is Received Freq = %d #GainMode=%d Thold=%d 
Line 11725: Received msg id is HSPA_CAL_TXPDSASETUP
Line 11747: Received bandInfo = %d gainMode=%d pdm0=%d setFreq=%d,pdmStart=%d
Line 11748: Received pdmStop=%d,pdmStep=%d,T0=%d,Tsetup=%d,Thold=%d
Line 11757: Received msg id is HSPA_CAL_HGETTHERMISTORVAL 
Line 11781: Received msg id is HSPA_CAL_HLOADTHRTEMP 
Line 11796: Received msg id is HSPA_CAL_HTEMPCALFINISHED 
Line 11799: ThermistorVal=%d TemperatureVal=%d txPower=%d
Line 11802: After Sorting:: 
Line 11805: ThermistorVal=%d TemperatureVal=%d txPower=%d
Line 11835: Received msg id is HSPA_CAL_HSCANRSSI
Line 11838: scanBand=%d
Line 11845: UmodemStatus=%d
Line 11848: UmodemStatus=%d
Line 11881: HSPA_CAL_HSCANRSSI:uarfcn=%d,rssiAnt1=%d,rssiAnt2=%d
Line 11893: Received msg id is HSPA_CAL_HGETRSSISCANRESULT
Line 11895: bandInfo=%d
Line 11910: HSPA_CAL_HGETRSSISCANRESULT:bandStorage[%d]::uarfcn=%d,rssiAnt1=%d,rssiAnt2=%d len=%d
Line 11912: HSPA_CAL_HGETRSSISCANRESULT:Len=%d,noOfScanFreq=%d
Line 11924: band1Storage is NULL!!!!
Line 11933: Received msg id is HSPA_CAL_HILPC 
Line 11938: ilpcOption=%d & initTxPower=%d 
Line 11944: Received msg id is HSPA_CAL_HDELULCHAN 
Line 11951: Received msg id is HSPA_CAL_HGETRXRSCP 
Line 11953: Rscp=%d 
Line 11984: AT+HSPITEST received.spiData=0x%x,M=%d,K=%d,N=%d,readAddr=0x%x,reg1=%d,reg2=%d,
Line 11994: Read Result(address 0x%x)=0x%x 
Line 12015: AT+HSPITEST:Error Counter=%d 
Line 12018: [%d]:InnerLoopIndex=%d OuterLoopIndex=%d
Line 12026: Received msg id is HSPA_CAL_HSPITESTEND 
Line 12044: Received msg id is HSPA_CAL_MSRRXRSSI 
Line 12047: Measured whole  RSSI1=%d RSSI2=%d
Line 12113: HSPA_CAL_HRF2CALSTART: rfBoradTyep=%d
Line 12121: HSPA_CAL_HRF2CALEND
Line 12131: HSPA_CAL_HDLCELLSYNC2: rxuarfcn=%d
Line 12141: HSPA_CAL_HRXPOWER2: rxPower=%d
Line 12166: HSPA_CAL_HBUILDAGCTAB2: BUILD RX AGC TABLE
Line 12176: HSPA_CAL_HRXFREQSETUARFCN2: rxuarfcn=%d
Line 12201: HSPA_CAL_HRXFREQBUILD2: BUILD RX FREQ CAL TABLE
Line 12210: HSPA_CAL_HTXSTART2: txUarfcn=%d
Line 12219: HSPA_CAL_HTXSTART2: bandInfo=%d
Line 12231: HSPA_CAL_HGAINTABINDEX2: bandInfo=%d indexVal=%d
Line 12376: [ET_Cal] Load RFIC/Pgain Cal data
Line 12382: [RF ET] :3G Dynamic cal Start!:: Cal_Type : %d, BandClass = %d, Freq = %d, TxPower = %d
Line 12399: [ET_Cal] Load RFIC/Pgain Cal data
Line 12405: [RF ET] :3G Dynamic cal V2 Start!:: Cal_Type : %d, BandClass = %d, Freq = %d, TxPower = %d
Line 12412: Received msg id is HSPA_CAL_HTxETFreqSet
Line 12414: Received tx uarfcn = %d 
Line 12416: currentETFreqCalStep = %d 
Line 12423: Received msg id is HSPA_CAL_TXPWRMSRDFREQCAL
Line 12425: Received Tx Power = %d 
Line 12436: Received msg id is HSPA_CAL_BUILDTXFREQ 
Line 12446: Received msg id is HSPA_CAL_BUILDTXFREQV2 
Line 12462: Received msg id is HSPA_CAL_HTXETSASETUP
Line 12489: [ET_Cal] Load RFIC/Pgain Cal data
Line 12505: Received msg id is HSPA_CAL_HTXETSASETUP
Line 12532: [ET_Cal] Load RFIC/Pgain Cal data
Line 12553: Received msg id is HSPA_CAL_HTXETSARESULT, mode=%d
Line 12554: result_data first 3: size=%d, CH:(%d,%d,%d), Powmeas:(%d,%d,%d)
Line 12583: Received msg id is HSPA_CAL_HTXETSARESULT, mode=%d
Line 12584: result_data first 3: size=%d, CH:(%d,%d,%d), Powmeas:(%d,%d,%d)
Line 12617: HSPA_CAL_HSaBuildAPTTable::  num_PAmode=%d Pa_mode=%d, Num_cal_pt=%d 
Line 12622: HSPA_CAL_HSaBuildAPTTable::  msrd_Pwr=%d 
Line 12642: HSPA_CAL_HSaBuildRFICTable::  Pa_mode=%d, Num_cal_pt=%d 
Line 12648: HSPA_CAL_HSaBuildRFICTable::  msrd_Pwr=%d 
Line 12669: HSPA_CAL_HSaBuildRFICFullTable::  Pa_mode=%d, Num_cal_pt=%d 
Line 12687: Received msg id is HSPA_CAL_DSPSTOP
Line 12689: Force_TxRF_stop_DSP= %d 
Line 12705: Received msg id is HSPA_CAL_HTXAPTTUNE  DSP PD ctrl en state[%d]
Line 12732: [APTUNE] Cal Target power error !!
Line 12734: [APTUNE] RFComm_InternalPD_Gpadc2Txp error!! 
Line 12743: [APTUNE :: FreqCal] Index %d Freq %d PDval %d Msrd Txpower %d PD Tx Power %d PD comp offset %d
Line 12769: MTMCOMM_3GTask_FBRX_measure error
Line 12778:  [APTUNE :: PowerSet] Power err %d Setpower %d Msrd Txp %d dbg info %d
Line 12790: Received msg id is HSPA_CAL_HSENDMIPI
Line 12800: Received msg id is HSPA_CAL_HREADMIPI
Line 12810: msg memory allocation fail!!!!! 
Line 12818: Received msg id is HSPA_CAL_HSET_SMVCC
Line 12828: Received msg id is HSPA_CAL_HREAD_SM
Line 12838: msg memory allocation fail!!!!! 
Line 12852: Received msg id is HSPA_CAL_MIPIREAD
Line 12899: msg memory allocation fail!!!!! 
Line 12913: Received msg id is HSPA_CAL_MIPIWRITE
Line 12958: TDEBUGDUMP: debug_type=%d
Line 12983: Received msg id is TDD_CAL_TTXSTART
Line 12985: TDD_CAL_TTXSTART:received frequency = %d 
Line 12993: PLL LOCK :SPIword = %d, Loop variable  : %d  
Line 13001: PLL LOCK :SPIword = %d, But syncDoneTdd==FALSE so retry again
Line 13007: PLL LOCK :SPIword = %d, But syncDoneTdd==TRUE So break the loop
Line 13018: TDD_CAL_TTXSTART : PD Type[%d]
Line 13038: TDD_CAL_TTXDCIQCAL received bandInfo=%d
Line 13039: DCIQCAL: tdd_rf_board_type=%d
Line 13061: BAND34 DC cal and IQ Imbalance calibration done
Line 13081: BAND39 DC cal and IQ Imbalance calibration done
Line 13095: Received msg id is TDD_CAL_TDLCELLSYNC
Line 13097: received frequency = %d (0x%x)
Line 13107: PLL LOCK :SPIword = %d, Loop variable  : %d  
Line 13115: PLL LOCK :SPIword = %d, But syncDoneTdd==FALSE so retry again
Line 13121: PLL LOCK :SPIword = %d, But syncDoneTdd==TRUE So break the loop
Line 13183: TDD_CAL_TRXUARFCNSET: received frequency = %d 
Line 13241: TDD_CAL_TCHANGEMODE: spi mode = %d 
Line 13256: TDD_CAL_TGAINTABINDEX: bandInfo = %d 
Line 13277: TDD_CAL_TPGCTABINDEX: pgcIndex = %d 
Line 13288: TDD_CAL_TMSRDTXPOWER: msrdTxPwr = %d 
Line 13296: TDD_CAL_TTXPWRBUILD
Line 13307: TDD_CAL_TXFREQPGCIDX: pgcIndex = %d 
Line 13318: TDD_CAL_TXFREQUARFCN: received frequency = %d 
Line 13331: TDD_CAL_TTXPWRMSRDFREQCAL: msrdTxPwr = %d 
Line 13339: TDD_CAL_TBUILDTXFREQ
Line 13361: bandInfo=%d,calType=%d,lnaInfo=%d
Line 13375: bandInfo=%d,calType=%d,paInfo=%d
Line 13388: TDD_CAL_TPDSETPGCINDEX: pgcIndex = %d 
Line 13400: TDD_CAL_TPDMSRDTXPOWER: msrdTxPwr = %d 
Line 13409: TDD_CAL_TPDBUILD
Line 13418: Received msg id is TDD_CAL_TPAVCCSET 
Line 13420: Received msg id is TDD_CAL_TPAVCCSET vccVoltage=%d
Line 13473: Received msg id is TDD_CAL_TSENDSPI spiData= 0x%x 
Line 13484: Received msg id is TDD_CAL_TREADSPI 
Line 13487: Received msg id is TDD_CAL_TREADSPI spiaddr = 0x%x spiWord=0x%x
Line 13497: Received msg id is TDD_CAL_TALLSPIREAD 
Line 13501: SPI ADDR[0x%x]=SPI_WORD[0x%x] 
Line 13511: Received msg id is TDD_CAL_TTXGAINSA
Line 13532: Received bandInfo = %d gainMode=%d vcc=%d setFreq=%d,PowerStart=%d,PowerStop=%d
Line 13533: Received gainStep=%d T0=%d,Thold=%d
Line 13542: Received msg id is TDD_CAL_TTXFREQSA
Line 13565: Received bandInfo = %d gainMode=%d txGainIdx1=%d setFreq=%d txGainIdx2=%d
Line 13566: Received freqStart=%d freqStop=%d freqStep=%d T0=%d,Thold=%d
Line 13575: Received msg id is TDD_CAL_TTXPDSA
Line 13594: Received bandInfo = %d gainMode=%d  setFreq=%d,PowerStart=%d,PowerStop=%d
Line 13595: Received gainStep=%d T0=%d,Thold=%d
Line 13604: Received msg id is TDD_CAL_TTXAPTGAINSA
Line 13623: Received bandInfo = %d gainMode=%d  setFreq=%d,aptTabStart=%d,aptTabStop=%d
Line 13624: Received gainStep=%d T0=%d,Thold=%d
Line 13633: Received msg id is TDD_CAL_TTXGAINSABUILD
Line 13643: Received msg id is TDD_CAL_TTXFREQSABUILD
Line 13655: Received msg id is TDD_CAL_TTXPDSABUILD
Line 13662: TxPD : DataPD %d
Line 13663: TxPD2 : DataPD %d Data2 %d
Line 13677: Received msg id is TDD_CAL_TTXAPTGAINSABUILD
Line 13685: TxAPT : DataSPI %d
Line 13688: TxAPT : DGC %d
Line 13704: Received msg id : TDD_CAL_TTXSRFICPREPDSA : CAL_MODE(%d), Alg_Ver(%d), Band(%d), GPADC_Target(%d), TxPow(Start,Overlap)=(%d,%d), NPow_Stage[%d]
Line 13730: Received msg id : TDD_CAL_TTXSRFICPDSA : GPADC(Target,Max)=(%d,%d), TxPow(Start,End,Step,Overlap)=(%d,%d,%d,%d), NPow_Stage[%d]
Line 13734: TDD_CAL_TTXSRFICPDSA : PD Type[%d], Band[%d], SetUarfcn[%d] | Cal Mode[%d], Ver[%d]
Line 13754: Received msg id is TDD_CAL_TTXSRFICPDSABUILD
Line 13783: Received msg id is TDD_CAL_TDLFINALCELLSYNC
Line 13789: TDD_CAL_TDLFINALCELLSYNC:received uarfcn = %d 
Line 13792: PLL LOCK :SPIword = %d, Loop variable  : %d  
Line 13799: PLL LOCK :SPIword = %d, But syncDoneTdd==FALSE so retry again
Line 13804: PLL LOCK :SPIword = %d, But syncDoneTdd==TRUE So break the loop
Line 13832: Offset = %d, RSSI0  %d RSSI1 %d
Line 13847: FINAL CAL : RSCP = %d 
Line 13860: Received msg id is TDD_CAL_TGETSENSE
Line 13862: Received iteration = %d 
Line 13870: Try Synchronization one more time with freq=%d
Line 13879: Synchronization failed 2nd time also So return BER as 100
Line 13896: Received msg id is TDD_CAL_TTXPERSTART
Line 13898: TDD_CAL_TTXPERSTART:received Uarfcn = %d 
Line 13908: PLL LOCK :SPIword = %d, Loop variable  : %d  
Line 13916: PLL LOCK :SPIword = %d, But syncDoneTdd==FALSE so retry again
Line 13921: PLL LOCK :SPIword = %d, But syncDoneTdd==TRUE So break the loop
Line 13943: TDD_CAL_TSETTXPOWER: pgcIndex = %d 
Line 13945: TDD_CAL_TSETTXPOWER:gPrevRxUarfcn_TDD = %d bandInfo=%d,calType=2,paInfo=2
Line 13962: TDD_CAL_TSETMAXTXPOWER: pgcIndex = %d 
Line 13964: TDD_CAL_TSETMAXTXPOWER:gPrevRxUarfcn_TDD = %d bandInfo=%d,calType=2,paInfo=2
Line 13992: SA_Mode = %d Dynamic_Mode = %d Final_Cal = %d 
Line 14013: Message ID not correct
Line 14024: INFO:pal_TaskEntry_HSPA_CALIBRATION: Error in Message receiving!!!!
Line 14076: uhal_sendMsg2AtiTask:pal_MemAlloc fail
Line 14114: uhal_sendMsg2AtiTask:pal_MemAlloc fail
Line 14144: power_detector %d
Line 14147: power_detector %d
Line 14187: MTMCOMM_3GTask_hspaTmStart gpadc read en 
Line 14189: MTMCOMM_3GTaskConfigTM
Line 14196: MTMCOMM_3GTaskSetDSPTPC %d
