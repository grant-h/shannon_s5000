Line 334: [DSDS] RFAPI_InitRFforDSDS (RF %d, path %d) starts!!!
Line 394: [DSDS] RFAPI_InitRFforDSDS: CA set, cc(%d)
Line 412: [DSDS] RFAPI_InitRFforDSDS: CA-4RX set, cc(%d) div_cc(%d) rx_mode(%d)
Line 427: [DSDS] RFAPI_InitRFforDSDS is finished!!!
Line 429: [DSDS] RFAPI_InitRFforDSDS is finished(gRF_loaded_RF_band:%d)
Line 453: RFAPI_InitRF starts!!!
Line 547: RFAPI_InitRF is finished!!!
Line 549: RFAPI_InitRF is finished(gRF_loaded_RF_band:%d)
Line 587: [IRAT] RFAPI_ReturnToLTE starts!!!
Line 592: [SC] HALRXF_ResetCdmaRxFilterReg
Line 613: [1-Rx] [RF SetToTargetBand] Turned on only Rx main path
Line 616: [1-Rx] [RF init] Turned on all Rx main path
Line 677: [IRAT] RFAPI_ReturnToLTE is finished!!!
Line 679: [IRAT] RFAPI_ReturnToLTE is finished(gRF_loaded_RF_band:%d)
Line 696: [IRAT] RFAPI_RestoreTxPath starts!!!
Line 700: [IRAT] RFAPI_RestoreTxPath is finished!!!
Line 783: RFAPI_InitFromSleepIdle starts!!!
Line 838: RFAPI_InitFromSleepIdle is finished!!!
Line 857: RFAPI_InitFromSleepIdle UE stat[%d] starts!!!
Line 1095: RFAPI_InitForRFBandSwitch(%d) starts!!!
Line 1179: RFAPI_InitForRFBandSwitch is finished!!!
Line 1181: RFAPI_InitForRFBandSwitch is finished(gRF_loaded_RF_band:%d)
Line 1214: RFAPI_InitForRFBandSwitch(CC%d) is finished!!!
Line 1258: [RF] PreInitForRFInterBandGAP: cc(%d), rf(%d), band(%d)
Line 1382: [RF] InitForRFInterBandGAP: cc(%d), rf(%d), mode(%d), band(%d), freq(%d), bw(%d)
Line 1441: [RF] PostInitForRFInterBandGAP:  cc(%d), rf(%d), mode(%d), band(%d)
Line 1470: RFAPI_InitFromShade starts!!!
Line 1566: RFAPI_InitFromShade is finished!!!
Line 1568: RFAPI_InitFromShade is finished(gRF_loaded_RF_band:%d)
Line 1597: RFAPI_InitForRssiScan starts!!! (Band:%d, Rx Freq:%d)
Line 1659: RFAPI_InitForRssiScan is finished!!! (Band:%d, Rx Freq:%d)
Line 1683: [RFAPI_SetDacConfig(CC%d)] DAC : %d
Line 1886: [RF] PowerOn(CC%d): rf(%d), band(%d), earfcn(%d)
Line 2009: [RF] >>>>>RFAPI_Disable_TxSwap
Line 2032: [RF] >>>>>PowerOnTxPath(CC%d): Invaild CC_index
Line 2062: [RF] >>>>>PowerOnTxPath(CC%d): rf(%d) UlCaStatus(%d) ul_freq(%d)
Line 2152: [RF] Cannot power off Tx path due to D2D
Line 2156: [RF] >>>>>PowerDownTxPath(CC%d): rf(%d)
Line 2249: [RF] >>>>>PowerOnRxPath(CC%d): rf(%d), Rxpath(%d)
Line 2286: [RF] >>>>>PowerDownRxPath(CC%d): rf(%d), Rxpath(%d)
Line 2322: [RF] >>>>>PowerOn4RxPath(CC%d): div(%d), Invalid RF path (%d, %d)
Line 2326: [RF] >>>>>PowerOn4RxPath(CC%d): div(%d), rf(%d, %d), rx_mode(%d)
Line 2361: [RF] >>>>>Init4RxPath(CC%d): Invalid RF path (%d)
Line 2580: [RF] SetChannelFrequency RX(%d)
Line 2586: [RF] SetChannelFrequency TX(%d)
Line 2615: [RF] SetChannelFrequency RX(%d)
Line 2619: [RF] SetChannelFrequency TX(%d)
Line 2646: [RF] SetReceivedULFrequency: rf(%d), freq(%d)
Line 2833: [RF] GetCalRsrpOffset(CC%d): rf(%d), earfcn(%d), agc_gain(%d, %d), RSRP Offset(%d, %d)
Line 2843: [RF] RSSI Offset(%d, %d), RSRP Freq Offset(%d, %d)
Line 3272: [RF] WriteTxFrequencyPowerOffsetToDspSHM: gDrx_ActiveRat(%d)
Line 3281: [RF] WriteTxFrequencyPowerOffsetToDspSHM: Freq (%d,%d)!!!
Line 3322: [RF] WriteTxGainTableToDspSHM(RF%d): gDrx_ActiveRat(%d)
Line 3373: [RF] SetRXUpdateModeOn(CC%d): rf(%d), dcr(%d)
Line 3409: [RF] SetRXUpdateModeOff(CC%d): rf(%d), dcr(%d), slo(%d)
Line 3695: [RF] CheckRFBandSwitch: RF Band Switch from [%d] to [%d]
Line 3699: [RF] CheckRFBandSwitch: Not supported RF band [%d].
Line 3725: [RF] CheckRFBandSwitch: This target is not calibrated for requested band [%d].
Line 4082: [RF] Antenna Conduction Status(CC%d): rf(%d), status(%d)
Line 4138: [RF] RFAPI_SPIRead : Addr:0x%x Data:0x%x
Line 4221: [RF] TuneRfCarrierFreq: Not supported RF band(%d), earfcn(%d)
Line 4234: [RF] TuneRfCarrierFreq: RF bands(LTE:%d, D2D:%d) are not matched!!!
Line 4266: [RF] TuneRfCarrierFreq: Not supported RF band(%d), earfcn(%d)
Line 4336: [RF] CheckCABand: support(%d), Rdb(%d), earfcn(%d), band(%d)
Line 4388: [RF] CheckNeedToRfSettingAfterGap: support(%d), band(%d), path_num(%d), path(%d %d %d)
Line 4412: [RF] CheckEdvCABand: Support(%d), Rdb(%d)
Line 4414: [RF] CheckEdvCABand: Source band:%d %d %d %d %d %d), Target band: %d
Line 4786: [RF] SetRfBandList: num_band(%d), band(%d, %d, %d, %d, %d)
Line 4844: [CA Info] RFAPI_SetCaConfigInfo: num_scell(%d)
Line 4848: [CA Info] RFAPI_SetCaConfigInfo: num_scell(%d)
Line 4856: [CA Info] RFAPI_SetCaConfigInfo: [%d] cell_id(%d) dl_earfcn(%d)
Line 4872: [CA Info] RFAPI_SetCaConfigInfo(CA_CFG state changed): Earjack Plug-In(%d>>>%d) CA_CFG(CC1:%d>>>%d,CC2:%d>>>%d)
Line 4881: [CA Info] RFAPI_SetCaConfigInfo(CA_CFG state changed): RF band(CC0:%d,CC1:%d,CC2:%d)
Line 4922: [CA Info] RFAPI_GetCaConfigInfo: CC%d CA configured (info idx:%d, earfcn:%d)
Line 4961: [AntSW] RFAPI_ReadEarJackDetector (%d)
Line 4989: [AntSW] (RF init) Earjack Plug-In(%d) NUM_CA(%d) RF band(CC0:%d,CC1:%d,CC2:%d)
Line 5019: [AntSW] (Periodic) [%d] NUM_CA(%d) CC%d CA_CFG flag(%d>>>%d)
Line 5034: [AntSW] (Periodic) [%d] NUM_CA(%d) CC%d CA_CFG flag(%d>>>%d)
Line 5054: [AntSW] (Periodic) Earjack Plug-In(%d>>>%d) CA_CFG(CC1:%d>>>%d,CC2:%d>>>%d)
Line 5063: [AntSW] (Periodic) RF band(CC0:%d,CC1:%d,CC2:%d)
Line 5078: [AntSW] (Periodic) No change: EJ(%d) CA_CFG(CC1:%d>>>%d,CC2:%d>>>%d)
Line 5343: [APETF] RFAPI_TX_GAIN_phase : Command Error - (%d)
Line 5395: [AS] RFAPI_GetAsMode: Fixed Antenna Mode (%d)
Line 5401: [AS] RFAPI_GetAsMode: AS enabled band (%d)
Line 5409: [AS] RFAPI_GetAsMode: AS Testmode enabled band (%d)
Line 5414: [AS] RFAPI_GetAsMode: AS disabled (%d)
Line 5572: [AS] OnlyTxSwap (SelectedANT:%d, gRF_tx_swap:%d, tx_swap:%d)
Line 5593: [AS] Skip... RF unavailable
Line 5597: [AS] RFAPI_ChangeAntennaSwitch (Band:%d, SelectedANT:%d(%d), ProxSensorState:%d)
Line 5604: [AS] TX antenna is switched successfully.
Line 5609: [AS] Tx swap is NOT support
Line 5618: [AS] Antenna is switched successfully.
Line 5623: [AS] Antenna is not switched (Not supported)
Line 5652: [AS] RFAPI_ChangeProxSensState_AS_Fixed (Band:%d, SelectedANT:%d, ProxSensorState:%d)
Line 5660: [AS] RFAPI_ChangeProxSensState_AS_Adapt (Band:%d, SelectedANT:%d(%d), ProxSensorState:%d)
Line 5672: [AS] RFAPI_ChangeProxSensState_AS: AS Test Mode OFF for current band (%d)
Line 5678: [AS] RFAPI_ChangeProxSensState_AS_Testmode (Band:%d, Operation Mode:%d, ProxSensorState:%d)
Line 5686: [AS] RFAPI_ChangeProxSensState_AS_Adapt (Band:%d, SelectedANT:%d(%d), ProxSensorState:%d)
Line 5899: [OL-AIT] (Skip) RFAPI_ControlOpenLoopAit: RF unavailable
Line 5912: [OL-AIT] RFAPI_ControlOpenLoopAit: MTM mode -> Disable OL-AIT control
Line 5942: [OL-AIT] CC#%d, RF Band(%d)
Line 5953: [OL-AIT] Volte is running. Use only AP event!
Line 6121: [OL-AIT] RFAPI_ControlOpenLoopAit Usecase:%d, CC:%d, UL earfcn:%d, Extendcase:%d, Testmode:%d, Prev4RxDcase:%d
Line 6142: [OL-AIT] RFAPI_ControlOpenLoopAit (Num CA:%d, RF band:%d %d %d %d %d %d)
Line 6184: [OL-AIT] RFAPI_ControlOpenLoopAit_Default (Usecase:%d, UL earfcn:%d, RF band(%d %d %d)
Line 6224: [AIT] XGND_ANTSW_TEST [%d][%d][%d][%d]
Line 6262: [AIT] TMN_Sweep_Set index [%d] value[%x]
Line 6283: [AIT] OLCL Get Flag [%d] 
Line 6304: [AIT] OLCL Set Flag [%d] 
Line 6458: [RF] RFAPI_SetIntraCaLna: cc(%d), NumOfCC(0x%x) agc_gain(%d, %d)
Line 6533: [HPUE RF] Need to check PowerClass -> set PowerClass 3
Line 6540: [HPUE RF] PC:%d pMax:%ddBm
Line 6606: RFAPI_ResetDcrIqcBlock rf(%d) band(%d)
