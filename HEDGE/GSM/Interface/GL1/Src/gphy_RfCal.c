Line 181: In l1c_rfcal_initialise - L1c state: %s
Line 183: [HWSORT] TESTMODE HWSORT = %d , TCU_RECOVERY = %d
Line 202: [HWSORT] In tmpRfint : %d
Line 206: [HWSORT] In tmpRfint HWsort
Line 211: [HWSORT] In tmpRfint SWsort
Line 256: l1c_rfcal_initialise
Line 293: Requesting SIM ID wrong. Check!
Line 314: START : l1c_testmode_initialise
Line 335: [HWSORT] In tmpRfint HWsort
Line 340: [HWSORT] In tmpRfint SWsort
Line 388: l1c_testmode_initialise
Line 485: l1c_txdc_self_auto_cal
Line 688: l1c_afc_auto_cal
Line 809: l1c_rf_cal_str (%d)
Line 876: l1c_rf_cal_str: tdma_fn(%d), p_l1_passive_chn_data(%d), p_l1_active_chn_data(%d)
Line 894: l1c_testmode_str
Line 979: L1C_rx_auto_cal
Line 1033: RxBand(%d), RxMod(%d), RxArfcn(%d), RSSI(%d)
Line 1057: RFCAL_AT : RfCalRpower(%d)
Line 1123: l1c_tx_auto_cal
Line 1206: l1c_rfcal_pam_gain_cal: PAM_gain_mode=%d 
Line 1220: l1c_rfcal_TX_SA_PAM_gain_cal: RfcalSACode(%d)
Line 1246: l1c_rfcal_tx_saallcode: RfcalSACode(%d)
Line 1257: l1c_rfcal_tx_allcorrect: RfcalSAArfcn(%d)
Line 1267: l1c_rfcal_tx_IntPD_Cal: RfcalSACode(%d)
Line 1278: HANS TXPWR : POWERLEVEL(%d)
Line 1337: l1c_rfcal_end (%d)
Line 1364: l1c_rssi_testmode
Line 1368: l1c_rx_testmode
Line 1433: TESTMODE RSSI: band(%d),arfcn(%d),rssi(%d)
Line 1441: TESTMODE RX: band(%d),arfcn(%d),gain_db(%d),gain_code(%d)
Line 1504: l1c_tx_testmode
Line 1541: TESTMODE : band(%d),arfcn(%d),BurstType(%d),DataType(%d)
Line 1567: l1c_pwr_testmode
Line 1603: l1c_pwr_testmode : PowerControl(%d),BurstPower[0](%d),BurstPower[1](%d),BurstPower[2](%d),BurstPower[3](%d)
Line 1652: l1c_reset_testmode Band(%d)
Line 1701: l1c_test_spi_write SPIWord(0x%08X)
Line 1708: l1c_test_spi_write SPIWord(0x%08X)
Line 1725: l1c_test_spi_read: Addr(0x%04X), Data(0x%08X)
Line 1745: l1c_test_spi_path_swap
Line 1787: l1c_test_LMT_GSM
Line 1814: ATI_MS_GSM_LMT_RSP
Line 1829: l1c_test_TX_PAM_GAIN_MOD
Line 1836: TX_PAM_CAL[0]:%d, TX_PAM_CAL[1]:%d, TX_PAM_CAL[2]:%d, TX_PAM_CAL[3]:%d
Line 1838: TxPamBias[0]:%d, TxPamBias[1]:%d, TxPamBias[2]:%d, TxPamBias[3]:%d
Line 1845: ATI_MS_GSM_PAM_GAIN_MOD_RSP 
Line 1860: l1c_test_TX_PAM_EXT_GAIN_MOD
Line 1874: ATI_MS_GSM_PAM_EXT_GAIN_MOD_RSP 
Line 1887: l1c_test_TX_Pwr_Gap
Line 1896: l1c_test_spi_TX_Pwr_Gap 
Line 1909: l1c_rssi_scan_testmode, Band(%d)
Line 1995: l1c_rssi_scan_testmode_sipc
Line 2203:  ARFCN = element_p->freqOffset%d, TestmodeArfcnWrite%d 
Line 2219: l1c_find_sb_testmode
Line 2300: HW Testmode : bcch_arfcn(%d),SynchFound(%d)
Line 2359: l1c_testmode_ber_early_det_running
Line 2447: PRASRAO test ber : CS(%d), TS(%d), tch_arfcn(%d), rssi(%d), PCL(%d)
Line 2497: l1c_testmode_ber_running
Line 2577: HANS test ber : CS(%d), TS(%d), tch_arfcn(%d), rssi(%d), PCL(%d)
Line 2786: [2G_RSSI_SCAN] SIL_SetRssiScanParam rssiScanStartArfcn=%d rssiScanEndArfcn=%d rssiScanNum=%d Offset=%d
Line 2824: [2G_RSSI_SCAN] SIL_SetRssiScanParam rssiScan3Arfcn=%d,%d,%d rssiScanNum=%d
Line 2858: [2G_RSSI_SCAN] SIL_ArfcnTestmodeForRssiScan ARFCN=%d Index=%d
Line 2938: [2G_RSSI_SCAN] SIL_ArfcnTestmodeForRssiScan ARFCN=%d Index=%d sampleCounterForNextArfcn=%d
Line 2989: [2G_RSSI_SCAN]: Invalid param !!! AntennaSel(%d)
Line 2992: [2G_RSSI_SCAN]: index(%d) prxRssi(%d)->RSSI(%d) drxRssi(%d)->RSSI2(%d)
Line 2997: [2G_RSSI_SCAN]: Rssi update exceed maximum scan number(%d) : %d !!!
Line 3022: [2G_RSSI_SCAN]: Invalid param !!! AntennaSel(%d) and SamplingCnt(%d) are not matched.
Line 3025: [2G_RSSI_SCAN]: index(%d) prxRssi(%d)->RSSI(%d) drxRssi(%d)->RSSI2(%d)
Line 3032: [2G_RSSI_SCAN]: New rssiScanPrxMax %d
Line 3038: [2G_RSSI_SCAN]: New rssiScanDrxMax %d
Line 3070: [2G_RSSI_SCAN]: Invalid param !!! AntennaSel(%d) and SamplingCnt(%d) are not matched.
Line 3080: [2G_RSSI_SCAN]: index(%d) prxRssi(%d)->RSSI Max(%d)Avg(%d)  drxRssi(%d)->RSSI2 Max(%d)Avg(%d)
Line 3125: [2G_RSSI_SCAN]: SIL_BandTestmodeForRssiScan band=%d -> %d
Line 3205: [2G_RSSI_SCAN] InitRssiScanInfo: cleared rssiScanPrx, rssiScanDrx
Line 3227: [2G_RSSI_SCAN] RssiScanResult[%d,%d] Index[%d] RSSI[%d] RSSI2[%d]
Line 3235: [2G_RSSI_SCAN] RssiScanResult[%d,%d] Index[%d] RSSI[%d]
Line 3243: [2G_RSSI_SCAN] RssiScanResult[%d,%d] Index[%d] RSSI2[%d]
Line 3254: [2G_RSSI_SCAN] RssiScanResult[%d~%d] Index[%d] RSSI Max[%d]Avg[%d] RSSI2 Max[%d]Avg[%d]
Line 3263: [2G_RSSI_SCAN] RssiScanResult[%d,%d] Index[%d] RSSI Max[%d]Avg[%d] RSSI2 Max[%d]Avg[%d]
Line 3272: [2G_RSSI_SCAN] RssiScanResult[%d,~%d] Index[%d] RSSI Max[%d]Avg[%d] RSSI2 Max[%d]Avg[%d]
Line 3300: [2G_RSSI_SCAN] RssiScanResult Band[0x%x] StartFreq[%d] MidFreq[%d] EndFreq[%d] ScanMode[%d] AntennaSel[%d]
Line 3319: [2G_RSSI_SCAN] MemAlloc failed !!!
Line 3327: [2G_RSSI_SCAN] RssiScanResult Band[0x%x] StartFreq[%d] EndFreq[%d] ScanMode[%d] AntennaSel[%d] SamplingCnt[%d]
Line 3350: [2G_RSSI_SCAN] MemAlloc failed !!!
Line 3355: [2G_RSSI_SCAN] RssiScanResult data len:%d
Line 3391: L1cMessageManager - l1c_rfcal_running
Line 3439: SIL_RFcal_TxPwr : arfcn(%d), powerLevel(%d)	powerCode(%d)  BandIndex(%d)  pam_gainmode(%d)	modulation(%d)
Line 3512: SIL_RFcal_TxPwr = arfcn(%d)  band(%d)  modulation(%d)  powerLevel(%d)  TxPwrCode8PSK(0x%x)  
Line 3666: SIL_TestMode_Txpwr = arfcn:%d band:%d RfCalCmd:%d powerLevel:%d TxPwrCode8PSK:%d
Line 3732: ScheduleTestModeTx - %d %d %d %d
Line 3754: BurstType(%d),  txModeIs8psk(%d), oldtxModeIs8psk(%d)
Line 3773: ScheduleTestModeTx - modulation(%d), slotCount(%d), timeslotNumber(%d)
Line 3803: ScheduleTestModeTx - Tx commad(%d), slotCount(%d), timeslotNumber(%d)
Line 3804: ScheduleTestModeTx - 8psk(%d) old8psk(%d) timeslotNumber(%d) slotTransition(%d)
Line 3840: VALUE newRfOutLevel(%x)
Line 4034:  RfCalCmd:%x, txSlotInfo_p->startTxTds_p->RfCalCmd:%x
Line 4046:  timeslotNumber >= 8.  Use NULL HANDLE 
Line 4050:  RfCalCmd:%x, txSlotInfo_p->startTxTds_p->RfCalCmd:%x
Line 4069:  RfCalCmd:%x, txSlotInfo_p->startTxTds_p->RfCalCmd:%x
