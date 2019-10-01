Line 530: Dch decoding started, reconfigurationType=%d
Line 530: Dch decoding started, reconfigurationType=%d
Line 552: generateSyncInd: CFN=%d, isFdpchConfigured=%d
Line 552: generateSyncInd: CFN=%d, isFdpchConfigured=%d
Line 585: Abnormal token!, releasing the token now.
Line 585: Abnormal token!, releasing the token now.
Line 615: Sync phase setting - uhal_Cmd_exec
Line 615: Sync phase setting - uhal_Cmd_exec
Line 651: S0 uphy_CDlDchProcessor_processTrBlkCrcInfo: Don't process as DCH is paused
Line 651: S0 uphy_CDlDchProcessor_processTrBlkCrcInfo: Don't process as DCH is paused
Line 675: S0  trchCrcListInfo did not found in the list: probably processTrBlkCrcInfo called when dedicated mode was released already
Line 675: S0  trchCrcListInfo did not found in the list: probably processTrBlkCrcInfo called when dedicated mode was released already
Line 691: S0  trchCrcListInfo for trcChId=%d did not found in the list: probably processTrBlkCrcInfo called when given trch was released already
Line 691: S0  trchCrcListInfo for trcChId=%d did not found in the list: probably processTrBlkCrcInfo called when given trch was released already
Line 728: S0  trchCrcListInfo == NULL pointer
Line 728: S0  trchCrcListInfo == NULL pointer
Line 757: S0  trchCrcListInfo for trcChId=%d did not found in the list: probably already released during modifications
Line 757: S0  trchCrcListInfo for trcChId=%d did not found in the list: probably already released during modifications
Line 883: Cfn %d: No Sync Report generated as less than 40ms since decoding started
Line 883: Cfn %d: No Sync Report generated as less than 40ms since decoding started
Line 899: In/Out Sync - uhal_Cmd_exec
Line 899: In/Out Sync - uhal_Cmd_exec
Line 923: S0  [TX-ON]InSync- uphy_CDlDchProcessor_provideSyncInd
Line 923: S0  [TX-ON]InSync- uphy_CDlDchProcessor_provideSyncInd
Line 929: syncPhase %d syncIndRequired %d rlStr %d isInSync %d inSyncStr %d outOfSyncStr %d
Line 929: syncPhase %d syncIndRequired %d rlStr %d isInSync %d inSyncStr %d outOfSyncStr %d
Line 946: EHalPhase0: syncIndRequired %d rlStr %d, dlDchProcessor_ptr->phaseTimeOutCnt %d
Line 946: EHalPhase0: syncIndRequired %d rlStr %d, dlDchProcessor_ptr->phaseTimeOutCnt %d
Line 963: Phy Out Of Sync based on poor DPCCH dlDchProcessor_ptr->isRfEnabled : %d, fingerRelockCount: %d 
Line 963: Phy Out Of Sync based on poor DPCCH dlDchProcessor_ptr->isRfEnabled : %d, fingerRelockCount: %d 
Line 973: S0  [TX-OFF]OutSync -uphy_CDlDchProcessor_provideSyncInd
Line 973: S0  [TX-OFF]OutSync -uphy_CDlDchProcessor_provideSyncInd
Line 983: Phy Out Of Sync based on poor Crc statistics
Line 983: Phy Out Of Sync based on poor Crc statistics
Line 993: Phy goes back in-sync after out-of-sync. Insync cnt is %d
Line 993: Phy goes back in-sync after out-of-sync. Insync cnt is %d
Line 1014: Bad Sync State
Line 1014: Bad Sync State
Line 1114: S0  uphy_CDlDchProcessor_SendSyncMessage: inSyncMsg=NULL
Line 1114: S0  uphy_CDlDchProcessor_SendSyncMessage: inSyncMsg=NULL
Line 1132: S0 Unable to Send Sync Indication
Line 1132: S0 Unable to Send Sync Indication
Line 1140: uphy_CDlDchProcessor_SendOutOfSyncMessage: outOfSyncMsg=NULL
Line 1140: uphy_CDlDchProcessor_SendOutOfSyncMessage: outOfSyncMsg=NULL
Line 1158: uphy_CDlDchProcessor_SendOutOfSyncMessage: isSirDropDetected	= sent to RRC
Line 1158: uphy_CDlDchProcessor_SendOutOfSyncMessage: isSirDropDetected	= sent to RRC
Line 1164: S0 uphy_CDlDchProcessor_SendSyncMessage: noOfConsecutiveOutOfSyncBitstring=%d
Line 1164: S0 uphy_CDlDchProcessor_SendSyncMessage: noOfConsecutiveOutOfSyncBitstring=%d
Line 1178: Unable to Send OutOfSync Indication
Line 1178: Unable to Send OutOfSync Indication
Line 1278: Invalid State
Line 1278: Invalid State
Line 1284: Rf Tx On/Off - uhal_Cmd_exec
Line 1284: Rf Tx On/Off - uhal_Cmd_exec
Line 1292: Uphy powers up(0)/down(1) : %d
Line 1292: Uphy powers up(0)/down(1) : %d
Line 1384: uphy_CDlDchProcessor_notifyDlTrChInfoChanged start decoding
Line 1384: uphy_CDlDchProcessor_notifyDlTrChInfoChanged start decoding
Line 1393: S0  Invalid nTrch (%d) returned
Line 1393: S0  Invalid nTrch (%d) returned
Line 1435: S0  DlDchProcessor detected a trch with 0 length CRC when btfd is used
Line 1435: S0  DlDchProcessor detected a trch with 0 length CRC when btfd is used
Line 1458: S0  DlDchProcessor detected UHAL inconsistancies in Ctfc table
Line 1458: S0  DlDchProcessor detected UHAL inconsistancies in Ctfc table
Line 1479: S0  DlDchProcessor failed to locate tfis: nTrch %d trchNr %d firstCtfc %d secondCtfc %d copyCtfc %d copyCtfc2 %d
Line 1479: S0  DlDchProcessor failed to locate tfis: nTrch %d trchNr %d firstCtfc %d secondCtfc %d copyCtfc %d copyCtfc2 %d
Line 1488: S0  Clear Power ratio BTFD flag(use CRC BTFD)
Line 1488: S0  Clear Power ratio BTFD flag(use CRC BTFD)
Line 1549: Cant locate uhal trch instance %d
Line 1549: Cant locate uhal trch instance %d
Line 1555: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1555: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1557: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1557: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1593: S0 In BTFD: Trch[%d] is ignored and nTrChsToIgnore %d
Line 1593: S0 In BTFD: Trch[%d] is ignored and nTrChsToIgnore %d
Line 1599: S0 nTrChsToIgnore exceeds the capacity of the array trChsToIgnore
Line 1599: S0 nTrChsToIgnore exceeds the capacity of the array trChsToIgnore
Line 1609: S0 In BTFD: Trch[%d] is ignored and nTrChsToIgnore %d
Line 1609: S0 In BTFD: Trch[%d] is ignored and nTrChsToIgnore %d
Line 1615: S0 nTrChsToIgnore exceeds the capacity of the array trChsToIgnore
Line 1615: S0 nTrChsToIgnore exceeds the capacity of the array trChsToIgnore
Line 1651: S0  Cant locate uhal trch instance %d
Line 1651: S0  Cant locate uhal trch instance %d
Line 1657: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1657: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1672: S0  Cant locate uhal trch instance %d
Line 1672: S0  Cant locate uhal trch instance %d
Line 1741: S0 During connected prev TargetSir = %d
Line 1741: S0 During connected prev TargetSir = %d
Line 1746: S0 prev_sF=%d, sf=%d, delta_sir %d, currentSirTarget %d, isFdpchConfigured %d
Line 1756: S0  DedicatedCommonConfig - uhal_Cmd_exec
Line 1756: S0  DedicatedCommonConfig - uhal_Cmd_exec
Line 1762: S0 ReconfigurationType=%d sf=%d very_init_sir=%d sir_dB_offseted_by_sf=%d
Line 1762: S0 ReconfigurationType=%d sf=%d very_init_sir=%d sir_dB_offseted_by_sf=%d
Line 1826: S0  GuidingTfiStatus == NULL pointer
Line 1826: S0  GuidingTfiStatus == NULL pointer
Line 1900: S0  Unable to Locate Guiding and Guided tfi for some ctfc
Line 1900: S0  Unable to Locate Guiding and Guided tfi for some ctfc
Line 1925: S0  nTrChs=%d Array Index Out of bound
Line 1925: S0  nTrChs=%d Array Index Out of bound
Line 1959: S0  uphy_CDlDchProcessor_SRBprotectionMode: SRB protection Mode triggered
Line 1959: S0  uphy_CDlDchProcessor_SRBprotectionMode: SRB protection Mode triggered
Line 2013: S0  crcInfoMessage == NULL pointer
Line 2013: S0  crcInfoMessage == NULL pointer
Line 2037: S0 adjustSirTarget: currentCfn=%d, currentSlot=%d, trChNr=%d, trChId=%d, numTrBlks=%d, numTrBlksBad=%d, tbSize=%d
Line 2037: S0 adjustSirTarget: currentCfn=%d, currentSlot=%d, trChNr=%d, trChId=%d, numTrBlks=%d, numTrBlksBad=%d, tbSize=%d
Line 2062: S0  Sir Target A - uhal_Cmd_exec
Line 2062: S0  Sir Target A - uhal_Cmd_exec
Line 2087: S0 Don't set qualityTarget when maxNumOfTrCH=%d and decodedNumOfTrCH=%d are different
Line 2087: S0 Don't set qualityTarget when maxNumOfTrCH=%d and decodedNumOfTrCH=%d are different
Line 2105: S0 During connected prev TargetSir = %d
Line 2105: S0 During connected prev TargetSir = %d
Line 2156: S0 trChNr %d, trChId %d, qualityTarget %d, tbSize %d, coding %d, tti %d
Line 2156: S0 trChNr %d, trChId %d, qualityTarget %d, tbSize %d, coding %d, tti %d
Line 2185: S0 Selected Target SIR trch = %d qualityTargetTrChId = %d
Line 2185: S0 Selected Target SIR trch = %d qualityTargetTrChId = %d
Line 2201: S0  No BLER Target Specified
Line 2201: S0  No BLER Target Specified
Line 2237: S0  array index out of bounds.qualityTarget=%d
Line 2237: S0  array index out of bounds.qualityTarget=%d
Line 2252: S0  dlDchProcessor_ptr->trBlkBadKeep Memory allocation Failed 
Line 2252: S0  dlDchProcessor_ptr->trBlkBadKeep Memory allocation Failed 
Line 2260: S0  dlDchProcessor_ptr->trBlkKeep Memory allocation Failed 
Line 2260: S0  dlDchProcessor_ptr->trBlkKeep Memory allocation Failed 
Line 2264: S0  dlDchProcessor_ptr->currentBlerWindowMeasureSize %d 
Line 2264: S0  dlDchProcessor_ptr->currentBlerWindowMeasureSize %d 
Line 2280: S0 Outer Loop mode %d, dlpcStepSize %d(dBx1000), MinSir %d (dBx1000), MaxSir %d (dBx1000), insync_upper %d (dBx1000), insync_lower %d (dBx1000)
Line 2280: S0 Outer Loop mode %d, dlpcStepSize %d(dBx1000), MinSir %d (dBx1000), MaxSir %d (dBx1000), insync_upper %d (dBx1000), insync_lower %d (dBx1000)
Line 2290: S0 StepUp for bad CRC %d (dBx1000), StepDown for Good CRC %d (dBx1000), NumOfStep %d
Line 2290: S0 StepUp for bad CRC %d (dBx1000), StepDown for Good CRC %d (dBx1000), NumOfStep %d
Line 2341: S0 Viterbi List ID for TrCh index :%d, TrCh Nr:%d
Line 2341: S0 Viterbi List ID for TrCh index :%d, TrCh Nr:%d
Line 2355: S0 Bad CRC processing(Before) : CRC Non-BTFD status:0x%x,List Vit ID: 0x%x, numTrBlksBad %d
Line 2355: S0 Bad CRC processing(Before) : CRC Non-BTFD status:0x%x,List Vit ID: 0x%x, numTrBlksBad %d
Line 2365: S0 Bad CRC processing(After) : numTrBlksBad %d
Line 2365: S0 Bad CRC processing(After) : numTrBlksBad %d
Line 2423: S0 Power ratio BTFD : numTrBlksBad %d , totalNumOfBadCrcs %d , numTrBlks %d 
Line 2423: S0 Power ratio BTFD : numTrBlksBad %d , totalNumOfBadCrcs %d , numTrBlks %d 
Line 2470: S0 TrchOfTarget=%d TrchId: %d dlDchProcessor_ptr->trBlkBadTotal %d dlDchProcessor_ptr->trBlkTotal %d BLER %d
Line 2470: S0 TrchOfTarget=%d TrchId: %d dlDchProcessor_ptr->trBlkBadTotal %d dlDchProcessor_ptr->trBlkTotal %d BLER %d
Line 2497: S0 Good CRC, BTFD, Non-zero ListID
Line 2497: S0 Good CRC, BTFD, Non-zero ListID
Line 2504: S0 Good CRC, BTFD, Zero ListID
Line 2504: S0 Good CRC, BTFD, Zero ListID
Line 2632: S0 Bad CRC: newSirTarget %d (dBx1000), currentSirTarget %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2632: S0 Bad CRC: newSirTarget %d (dBx1000), currentSirTarget %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2648: S0 Bad CRC: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d (dBx1000), measuredSir %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2648: S0 Bad CRC: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d (dBx1000), measuredSir %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2658: S0 Good CRC, but list viterbi ID is not 0. Treating the CRC as bad and invoking the stepup algorithm. (list viterbi : 0x%x)
Line 2658: S0 Good CRC, but list viterbi ID is not 0. Treating the CRC as bad and invoking the stepup algorithm. (list viterbi : 0x%x)
Line 2773: S0 newSirTarget %d (dBx1000), currentSirTarget %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2773: S0 newSirTarget %d (dBx1000), currentSirTarget %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2789: S0 newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d (dBx1000), measuredSir %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2789: S0 newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d (dBx1000), measuredSir %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2842: S0 Good CRC: newSirTarget %d (dBx1000), currentSirTarget %d, sirChange %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, dlDchProcessor_ptr->uphy_dlpc_mode=%d
Line 2842: S0 Good CRC: newSirTarget %d (dBx1000), currentSirTarget %d, sirChange %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, dlDchProcessor_ptr->uphy_dlpc_mode=%d
Line 2874: S0 Good CRC: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d, measuredSir %d
Line 2874: S0 Good CRC: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d, measuredSir %d
Line 2885: S0 No CRC: not changing target SIR from %d (dBx1000)
Line 2885: S0 No CRC: not changing target SIR from %d (dBx1000)
Line 2911: S0  uphy_CDlDchProcessor_adjustSirTarget: SRB protection Mode triggered dB Target SIR increase, dlDchProcessor_ptr->newSirTarget(%d)
Line 2911: S0  uphy_CDlDchProcessor_adjustSirTarget: SRB protection Mode triggered dB Target SIR increase, dlDchProcessor_ptr->newSirTarget(%d)
Line 2922: S0  uphy_CDlDchProcessor_adjustSirTarget: SRB protection Mode Ending =>dB Target SIR decrease, dlDchProcessor_ptr->newSirTarget(%d)
Line 2922: S0  uphy_CDlDchProcessor_adjustSirTarget: SRB protection Mode Ending =>dB Target SIR decrease, dlDchProcessor_ptr->newSirTarget(%d)
Line 2933: S0 newSirTarget %d (dBx1000x1000) is greater than MaxLimit %d (dBx1000x1000). Force to set MaxLimit
Line 2933: S0 newSirTarget %d (dBx1000x1000) is greater than MaxLimit %d (dBx1000x1000). Force to set MaxLimit
Line 2941: S0 newSirTarget %d (dBx1000x1000) is less than MinLimit %d (dBx1000x1000). Force to set MinLimit
Line 2941: S0 newSirTarget %d (dBx1000x1000) is less than MinLimit %d (dBx1000x1000). Force to set MinLimit
Line 2962: S0  Sir Target - uhal_Cmd_exec
Line 2962: S0  Sir Target - uhal_Cmd_exec
Line 2976: S0 Outerloop skipped : number of trch Block is %d
Line 2976: S0 Outerloop skipped : number of trch Block is %d
Line 3006: S0 sir_Gap %d, currentSirTarget %d (dBx1000), averageSir %d uphy_dlpc_insync_lower %d
Line 3006: S0 sir_Gap %d, currentSirTarget %d (dBx1000), averageSir %d uphy_dlpc_insync_lower %d
Line 3100: S0 >>>>>>> uhal_CommonData[stackId].OLPC_STATE %d: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), IsGood %d uhal_CommonData[stackId].Conv_timer %d
Line 3100: S0 >>>>>>> uhal_CommonData[stackId].OLPC_STATE %d: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), IsGood %d uhal_CommonData[stackId].Conv_timer %d
Line 3185: S0 [Good CRC] Condition Triggered for fast counter update (%d)
Line 3185: S0 [Good CRC] Condition Triggered for fast counter update (%d)
Line 3189: S0 SIR target too high and good BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3189: S0 SIR target too high and good BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3232: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3232: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3248: S0 SIR target too low and good BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3248: S0 SIR target too low and good BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3265: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3265: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3293: S0 [Bad CRC] Condition Triggered for fast counter update (%d)
Line 3293: S0 [Bad CRC] Condition Triggered for fast counter update (%d)
Line 3298: S0 SIR target too high and bad BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3298: S0 SIR target too high and bad BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3309: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3309: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3325: S0 SIR target too low and bad BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3325: S0 SIR target too low and bad BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3350: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3350: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3387: [uphy_CDlDchProcessor_ChangeQualityTarget] cctrchNr %d
Line 3387: [uphy_CDlDchProcessor_ChangeQualityTarget] cctrchNr %d
Line 3420: S0 changeQualityTarget: currentCfn=%d, qualityTargetTrChId=%d, qualityTarget=%d
Line 3420: S0 changeQualityTarget: currentCfn=%d, qualityTargetTrChId=%d, qualityTarget=%d
Line 3437: S0 targetTpcErrorRate Out of Bounds : targetTpcErrorRate=%d
Line 3437: S0 targetTpcErrorRate Out of Bounds : targetTpcErrorRate=%d
Line 3446: S0 targetTpcErrorRate=%d, fdpchSirTarget=%d
Line 3446: S0 targetTpcErrorRate=%d, fdpchSirTarget=%d
Line 3454: S0  Sir Target - uhal_Cmd_exec
Line 3454: S0  Sir Target - uhal_Cmd_exec
Line 3529: uphy_CDlDchProcessor_UhalTriggeredDpchSyncReportingp : Instance is Null 
Line 3529: uphy_CDlDchProcessor_UhalTriggeredDpchSyncReportingp : Instance is Null 
