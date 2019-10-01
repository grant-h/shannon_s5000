Line 392: thal_CHmcpTxNumPoint:BandA: bandAHighPaTxPwrNumOfCalPts=%d,bandAMidPaTxPwrNumOfCalPts=%d,bandALowPaTxPwrNumOfCalPts=%d,bandAHighPaTxFreqNumOfCalPts=%d bandATxPdNumOfCalPts=%d
Line 404: thal_CHmcpTxNumPoint:BandF: bandFHighPaTxPwrNumOfCalPts=%d,bandFMidPaTxPwrNumOfCalPts=%d,bandFLowPaTxPwrNumOfCalPts=%d,bandFHighPaTxFreqNumOfCalPts=%d bandFTxPdNumOfCalPts=%d
Line 445: ANT1 LNA Off(no ext LNA) Band A Freq Cal:Point [%d] rxUarfcn %d, rxAgc %d
Line 464: ANT1 LNA Off(no ext LNA) Band F Freq Cal:Point [%d] rxUarfcn %d, rxAgc %d
Line 503: Low Gain Mode Band A:Point [%d] txPower %d pdm %d
Line 512: Mid Gain Mode Band A:Point [%d] txPower %d pdm %d
Line 521: High Gain Mode Band A:Point [%d] txPower %d pdm %d
Line 530: High Gain Mode Band AFreq Cal:Point [%d] txFreq %d, txPower %d
Line 539: Band A PD Cal:Point [%d] txGpadcVal %d, txPower %d
Line 552: Low Gain Mode Band F:Point [%d] txPower %d pdm %d
Line 561: Mid Gain Mode Band F:Point [%d] txPower %d pdm %d
Line 570: High Gain Mode Band F:Point [%d] txPower %d pdm %d
Line 579: High Gain Mode Band F:Freq Cal:Point [%d] txFreq %d, txPower %d
Line 588: Band F PD Cal:Point [%d] txGpadcVal %d, txPower %d
Line 612: thal_CHmcpRfCal_TxLoadReg:band %d BandARefFreq=%d BandFRefFreq=%d
Line 647: !!!!!!!!!!!!!!!BAND A CAL DATA NOT LOADED..PLEASE LOAD CAL DATA!!!!!!!!
Line 685: !!!!!!!!!!!!!!!BAND F CAL DATA NOT LOADED..PLEASE LOAD CAL DATA!!!!!!!!
Line 870: THAL:RfCal Find2Points same %d
Line 877: THAL:RfCal Find2Points out of range %d %d
Line 1000: thal_CHmcpRfCal_RxPowerLoadInit BandARefFreq=%d BandFRefFreq=%d
Line 1123: Inside  thal_CHmcpRfCal_SaveRxCal
Line 1148: Band %d rxAnt: %d 
Line 1198:  Wrong Band Info  :%d
Line 1235:  Wrong Band Info  :%d
Line 1362: [RxUarfcn]SetRxFreqOffset=%d
Line 1389: [RxUarfcn]SetTxFreqOffset=%d
Line 1421: [CalOffset]offset=%d, Cal points=%d, BandArefFreq=%d, Request Freq=%d, y_val_BandA=%d
Line 1433: [CalOffset]offset=%d, Cal points=%d, BandFrefFreq=%d, Request Freq=%d, y_val_BandF=%d
Line 1438: Wrong band
Line 1475: Wrong band
Line 1664: CheckFrequencyBand(): PrevBandClass=%d, CurrBandClass=%d
Line 1725: thal_CHmcpRfCal_SendMsgtoSHM_PowerDetector_External:band %d BandARefFreq=%d BandFRefFreq=%d
Line 1737: thal_CHmcpRfCal_TxPDCalTabLoadtoDsp:BandA_TxPDCal[%d]=%d BandA_TxPDCal[%d]=%d
Line 1742: !!!!!!!!!!!!!!!BAND A PD CAL DATA NOT LOADED..PLEASE LOAD CAL DATA!!!!!!!!
Line 1756: thal_CHmcpRfCal_TxPDCalTabLoadtoDsp:BandF_TxPDCal[%d]=%d BandF_TxPDCal[%d]=%d
Line 1761: !!!!!!!!!!!!!!!BAND F PD CAL DATA NOT LOADED..PLEASE LOAD CAL DATA!!!!!!!!
Line 1816: Thal_SendMsgtoSHM_RfCal_PD_Internal : Stage[0] : idx[0], Pow[%d], GPADC[%d] |idx[%d], Pow[%d], GPADC[%d] |StageChangePow[%d]
Line 1825: Thal_SendMsgtoSHM_RfCal_PD_Internal : Stage[2] : idx[0], Pow[%d], GPADC[%d] |idx[%d], Pow[%d], GPADC[%d] |StageChangePow[%d]
Line 1831: Thal_SendMsgtoSHM_RfCal_PD_Internal : Not Supported Band[%d]
Line 1865: Thal_SendMsgtoSHM_RfCal_PD_Internal : Stage[0] : idx[0], Pow[%d], GPADC[%d] |idx[%d], Pow[%d], GPADC[%d] 
Line 1871: Thal_SendMsgtoSHM_RfCal_PD_Internal : Not Supported Band[%d]
Line 1921: [WARNING] Wrong Band return
Line 1932: MulticodeMPROffset Fail to  X value rx_freq %d pos1 %d pos2 %d
Line 1940: MultiCodeMPROffset Fail to  Y value
Line 1943: workingUarfcn %d tddMultiCodeMprOffset %d pos1 %d pos2 %d 
Line 1952: MulticodeMPROffset Fail to  X value rx_freq %d pos1 %d pos2 %d
Line 1960: MultiCodeMPROffset Fail to  Y value
Line 1963: workingUarfcn %d tddDpaMultiCodeMprOffset %d pos1 %d pos2 %d 
Line 1971: Edch16QamMPROffset Fail to  X value workingUarfcn %d pos1 %d pos2 %d
Line 1979: hsupaMPROffset Fail to  Y value
Line 1982: workingUarfcn %d tddEdch16QamMprOffset %d pos1 %d pos2 %d 
Line 2021: ETHalDataCctrchDecodedInfoCmd:Command executed
Line 2027: Dereferenceing NULL pointer
Line 2031: ETHalDataCctrchDecodedInfoCmd: CCTRCH_INDEX : %d
Line 2049: thal_CHmcpAutoCal_ReceiveData:Array index out of bound num_trch=%d 
Line 2052: Data_Received : %d  num_trch : %d  trch_info_ptr->NoTbs : %d
Line 2055: trch_info_ptr->CrcCheckRes[ %d ] : %d
Line 2057: trch_info_ptr->DlTrChType : %d trch_info_ptr->TrChId : %d trch_info_ptr->SizeOfTbs : %d 
Line 2061: Dereferenceing NULL pointer
Line 2067: pattern pointer=%d
Line 2148: ETHalDataCctrchDecodedInfoCmd:Command Not executed
Line 2176:  Channel Config command!!!
Line 2236:  PHY Channel Config command!!!
Line 2300: tfTable == NULL
Line 2312:  TRCH Channel Config command!!!
Line 2396:  CCTRCH Channel Config command!!!
Line 2425:  PHY Channel START Config command!!!
Line 2451:  CCTRCH Channel ENABLE command!!!
Line 2485: BER: Enabling DLPC and SB
Line 2494: BER : BLER target = %d, Target SIR TrCh Id = %d
Line 2500: DedicatedCommonConfig - thal_CCmd_exec
Line 2559: Release phyChNum = %d, phyChStr = 0x%x
Line 2564: Release PhyCh - cmd execution failure
Line 2581: Release CcTrCh - cmd execution failure
Line 2638: GetGripMaxTxPower: band %d GripBO %d 
Line 2678: GetWiFiHotSpotBO: band %d wifiHotSpotBO %d 
Line 2716: GetMCCBO: band %d mccBO %d 
Line 2756: modemTestMode %d GetRadMaxPowerOffset=0,TDD_RxUarfcn = %d 
Line 2807: amr_configured %d freq %d GetRadMaxPowerOffset %d pos1 %d pos2 %d, band %d 
Line 2855: ReadCalNV_SRFIC_PDCAL : Band[%d], Stage[%d], R[%d], DC[%d], Size[%d] | RegID[%d]
Line 2889: ReadCalNV_SRFIC_PDCAL : Band[%d], Size[%d] | RegID[%d]
Line 2897: ReadCalNV_FBRX_PDCAL : GPADC[%d], Power[%d]
Line 3155: OL AIT is not enabled: isSensorFeautre %d
Line 3171: [3GTDD]userCase %d
Line 3218: Wrong userCaseShift %d
Line 3279: %d AITUsecaseNumOfShiftTDD[%d] %d
Line 3283: SortAITUserCasePriority Fail  priorityPosition %d
Line 3310: modemTestMode return !!
Line 3345: TxTempOffset %d pos1 %d pos2 %d, band %d CurTempOffset %d RefTempOffset %d 
