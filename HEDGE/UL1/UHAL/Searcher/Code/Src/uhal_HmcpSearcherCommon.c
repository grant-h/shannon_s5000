Line 1200: @@@@@Need to check Chipset version@@@@@
Line 1202: uhal_CHmcpSearcherReset is called domain 0x%x reset_flag 0x%x
Line 1218: activeStackId %d uhal_CHmcpResumePendingSearcher: GapType = %d (0: out of Gap, 1: FDD (bypass Gap) 2: FDD , 3: Gsm, 4: Eutra)
Line 1234: Warning! 3GF Modem is off
Line 1238: activeStackId %d uhal_CHmcpSearcher_StopControll: srch_status(0x%x)
Line 1246: activeStackId %d There is pending step1 searcher operation: status(0x%x)
Line 1250: activeStackId %d PSCH[isStarted %d StartInGap %d]
Line 1258: activeStackId %d step2 Srch Stop srch_status(0x%x) 
Line 1293: activeStackId %d uhal_HmcpGAP0_HISR: Step3 or MP Srch Stop srch_status(0x%x) 
Line 1312: There is pending step1 searcher operation (compressed): srch_status=0x%x. !!!
Line 1318: PSCH[isStarted %d StartInGap %d]
Line 1345: uhal_CHmcpSearcherSCDGetAntSelection ant_sel %d
Line 1353: uhal_CHmcpSearcherMPGetAntSelection ant_sel %d
Line 1366: activeStackId %d uhal_HmcpSearcherCommon_StopAll
Line 1372: activeStackId %d EHalSrchBuffCmd is ACTIVE. Reset command and its handler
Line 1383: activeStackId %d EHalSrchPschMultiPathOrBuffCmd is ACTIVE. Reset command and its handler
Line 1394: activeStackId %d EHalSrchSschScrCodeGroupCmd is ACTIVE. Reset command and its handler
Line 1405: activeStackId %d EHalSrchCpichCmd is ACTIVE. Reset command and its handler
Line 1417: activeStackId %d EHalSrchCpichMultiPathCmd is ACTIVE. Reset command and its handler
Line 1556: activeStackId %d No Searcher Ant Setting. Must check!!!
Line 1560: [uhal_CHmcpSearcher_SelectANT] bufferAntSel=%d, carrierInfo=%d, refAntIndex=%d, RxDiv=%d, RssiAntSel=%d, srch_ant_sel=%d RssiAntSignal %d
Line 1587: [SearcherSetRssi] refAntIndex %d RxDivStatus %d isOffline %d LockAntSel %d rssi_prx %d rssi_drx %d
Line 1599: Wrong RssiAntSel %d
Line 1609: [Dynamic Ant Sel] Ant is changed from 1 -> 0  RxDivStatus %d isOffline %d LockAntSel %d rssi_prx %d
Line 1640: [Dynamic Ant Sel] referenceRl %d fingersStr 0x%x ecio_array[0] %d ecio_array[1] %d rscp_array[0] %d rscp_array[1] %d
Line 1645: [Dynamic Ant Sel] rakeCombOut_array[0] %d rakeCombOut_array[1] %d 
Line 1652: Wrong RssiAntSel %d
Line 1659: Wrong RssiAntSel %d
Line 1662: [Dynamic Ant Sel] Ant is changed from %d -> %d
Line 1674: [Dynamic Ant Sel] Ant is changed from rscp[%d] %d -> rscp[%d] %d ecio %d
Line 1687: [Dynamic Ant Sel] Ant is changed from ecio[%d] %d -> ecio[%d] %d
Line 1703: [Dynamic Ant Sel] Ant is changed from ecio[%d] %d raw %d -> ecio[%d] %d raw %d
Line 1716: Wrong RssiAntSel %d
Line 1751: activeStackId %d uhal_CHmcpSearcherGetRssi: rssi is measured, NOT buffering time
Line 1778: activeStackId %d uhal_CHmcpSearcherGetRssi: rssi is measured, NOT buffering time
Line 1789: uhal_CHmcpSearcherGetRssi(%d) = %d, isOffline=%d, RssiAntSignal=%d
Line 1811: uhal_HmcpSearcherCommon_ClockOn: reg = 0x%x, read_reg = 0x%x
Line 1830: activeStackId %d AdaptiveAntSelect is not adapted: conduction = %d, LockAntSel = %d
Line 1842: activeStackId %d AdaptiveAntSelect: flag_enable=%d
Line 1868: AdaptiveAntSelect Radiation condition met RssiAntSignal %d loopback %d Ant1_detect %d RssiAntSel %d LockAntSel %d
Line 1883: activeStackId %d uhal_HmcpSearcher_LockAntSelect: LockAntSel %d isLock=%d
Line 1916: uhal_HmcpSearcher_GetRssiGap activeStackId %d ANT0 rssi(%d) is out of bound
Line 1922: uhal_HmcpSearcher_GetRssiGap activeStackId %d ANT1 rssi(%d) is out of bound
Line 1926: uhal_HmcpSearcher_GetRssiGap activeStackId %d ANT0_rssi(%d) ANT1_rssi(%d) rssiDiff = %d
