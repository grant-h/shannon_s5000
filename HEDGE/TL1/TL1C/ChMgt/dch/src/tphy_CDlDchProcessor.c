Line 154: trChCrcInfoList== NULL
Line 336: DlDchProcessor:_decodingStarted
Line 412: trchCrcListInfo did not found in the list: probably processTrBlkCrcInfo called when dedicated mode was released already
Line 427: trchCrcListInfo for trcChId=%d did not found in the list: probably processTrBlkCrcInfo called when given trch was released already
Line 463: trchCrcListInfo == NULL pointer
Line 491: trchCrcListInfo for trcChId=%d did not found in the list: probably already released during modifications
Line 651: In/Out Sync - thal_CCmd_exec
Line 676: syncPhase[%d] syncIndRequired[%d] isInSync[%d] inSync[%d] sbDetection[%d]
Line 687: Skip 2 non-gap TDM frames after Resume
Line 714: Cfn %d: No Sync Report generated
Line 740: Phy Out Of Sync based on poor DPCCH Quality
Line 750: Phy Sync Ind based on good DPCH quality statistics
Line 761: Phy goes back in-sync after out-of-sync. Insync cnt is %d
Line 767: Phy Sync Ind based on good CRC statistics
Line 785: Bad Sync State
Line 803: TestCrcInSync: [syncPhase %d timeOfLastGoodCrcState %d timeOfLastGoodCrc %d]
Line 813: TestCrcInSync: Phy  Sync Ind based on good Crc statistics
Line 822: TestCrcInSync: Phy  Sync Ind based on good Crc statistics 320 ms
Line 846: TestCrcInSync:dlDchProcessor_ptr->nCrcFailuresSinceGoodCrc : %d ,dlDchProcessor_ptr->timeOfLastGoodCrcState: %d, dlDchProcessor_ptr->timeOfLastGoodCrc: %d,dlDchProcessor_ptr->timeOfLastBadCrcState: %d ,dlDchProcessor_ptr->timeOfLastBadCrc: %d 
Line 847: lastGoodCrcCnt = %d
Line 856: TestCrcOutOfSync: Phy  Sync Ind based on bad Crc statistics 160 ms
Line 866: TestCrcOutOfSync: Phy  Sync Ind based on bad Crc statistics 320 ms
Line 890: tphy_CDlDchProcessor_SendSyncMessage: syncMsg=NULL
Line 903: tphy_CDlDchProcessor_SendSyncMessage: syncMsg=NULL
Line 911: Final sync decision = %d, isSirDropDetected = %d
Line 924: Unable to Send Sync Indication
Line 948: Low SB SIR or SB detection Probability is low: [OLPC] newSirTarget = %d (dBx1000), currentSirTarget = %d (dBx1000) 
Line 953: [OLPC] Setting SIR target to MaxLimit = %d (dBx1000)
Line 958: [OLPC] Setting SIR target to MinLimit = %d (dBx1000)
Line 970: [OLPC] THAL command execution failure
Line 1008: tphy_CHsdschResources == NULL
Line 1054: [DRX ONLY MODE ON] Rx Diversity : run_rxdiv = %d
Line 1066: tphy_CDlDchProcessor_ProcessRxDiversity, Rx Diversity enable/disable command failure
Line 1076: DCH Rx Diversity[%d]: AVG_SIR = %d, OLPC_CHECK = %d, IS_HS_SCCH_CONF = %d, ACT_CELL_RSCP = %d
Line 1131: DlDchProcessor: No BLER Target Specified
Line 1147: DlDchProcessor: BLER target = %d, Target SIR TrCh Id = %d
Line 1153: DedicatedCommonConfig - thal_CCmd_exec
Line 1173: DlDchProcessor: changeQualityTarget(), CFN = %d, TrCh Id = %d, BLER = %d
Line 1247: [OLPC] CRC Result = %d, Total TrBlks = %d, Total Bad TrBlks = %d, Total Good TrBlks = %d
Line 1282: Low SB power, so DPCH power will be increased
Line 1288: [OLPC] newSirTarget = %d (dBx1000), currentSirTarget = %d (dBx1000) 
Line 1294: [OLPC] Setting SIR target to MaxLimit = %d (dBx1000)
Line 1299: [OLPC] Setting SIR target to MinLimit = %d (dBx1000)
Line 1316: [OLPC] THAL command execution failure
