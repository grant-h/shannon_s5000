Line 742: ALLOC:UeInfoBuf - numUeInfoBuf:%d
Line 773: ALLOC:RelayUeInfoBuf - numRelayUeInfoBuf:%d
Line 798: [Adjust Timing] SyncRef UE(SLSSID:%d) %d -> %d
Line 804: [Adjust Timing] monitoredUeList
Line 813:    >> (SLSSID:%d) %d -> %d
Line 827: [Adjust Timing] candiUeList
Line 836:    >> (SLSSID:%d) %d -> %d
Line 854: [Adjust Timing] discInterFreqUeList[%d] - earfcn:%d
Line 863:    >> (SLSSID:%d) %d -> %d
Line 894: [SL_WARN] pSlUeInfo:%s, numUeInfoBuf:%d!
Line 902: FREE:UeInfoBuf - numUeInfoBuf:%d
Line 924: FREE:RelayUeInfoBuf - numRelayUeInfoBuf:%d
Line 945: FREE:Dedicated CommTxConfig
Line 952: FREE:Dedicated DiscTxConfig
Line 975: FREE:SibCommConfig
Line 986: FREE::SibDiscConfig-discInterFreqList[%d] Monitored UE List
Line 993: [SL_WARN] sibDiscConfig->discInterFreqList[%d].monitoredUeList(%s) has some problem!
Line 998: FREE:SibDiscConfig
Line 1119: Triggered(%d) - LastTriggeredTime:%d, CurrTimeInMs:%d, Interval:%d, Cycle:%d
Line 1214: [SL_WARN] pSlUeInfo NULL!
Line 1276: [SL_WARN] FreqInfo for SL was incorrect! - SL_cc_idx:%d
Line 1311: Defer received RRC message(ID:%d) until SL SLSS return - SP:%s
Line 1336: LteRrmSl_CheckBandForOoc - band:%d
Line 1400: [SL_WARN] NOT supported band(%d) in SL OOC!
Line 1407:    >> MinSrsrp:%d[/100 dBm], MinSrsrpForSyncRefUe:%d[/100 dBm], syncRefMinHyst:%d[/100 dB]
Line 1509: Update SL UE Threshold Conditions (bImmediately:%s) - relay(%s -> %s), remote(%s -> %s)
Line 1576: Initializes a sidelink feature
Line 1580: ALLOC:Monitored UE List
Line 1587: ALLOC:Candidate UE List
Line 1594: ALLOC:Relay UE List
Line 1616: Initializes a UeList
Line 1652: Free UeList with SL when UE is power down.
Line 1731: ALLOC:SibCommConfig
Line 1754: ALLOC:SibDiscConfig
Line 1765: ALLOC:SibDiscConfig-discInterFreqList[%d] Monitored UE List
Line 1867: L3 filtering - PrevL3FilteredResult:%d[/100 dBm], LatestMeasResult:%d[/100 dBm], FilterCoefficient:(enum)%d, TimeDiffUs:%d[us]
Line 1907:    >> FilterAlpha:%d
Line 2054: LteRrmSl_SetMeasOngoingFlag - %s -> %s
Line 2172: | [%d](ue_type:%s, list_type:%s) earfcn:%d, slssid:%d, sync_offset:%d
Line 2178: |   >> priority_group:%d, time_offset:%d, SRSRP:%d[/100dBm], freq_offset:%d
Line 2208: | [%d]Relay UE - SelectType:%s
Line 2209: |   >> Relay Service Code:0x%2X%2X%2X
Line 2210: |   >> Relay UE ID:0x%2X%2X%2X, L3filtered_SDRSRP:%d[/100 dBm]
Line 2223: | [%d]candidated Relay UE
Line 2224: |   >> Relay Service Code:0x%2X%2X%2X
Line 2225: |   >> Relay UE ID:0x%2X%2X%2X, L3filtered_SDRSRP:%d[/100 dBm]
Line 2273: ===============================================================
Line 2274: |     SL_COMMON_DB (Interval:%d, Cycle:%d)
Line 2275: |----------------------------------------------------------------------------------
Line 2277: |--------------- General DB ---------------
Line 2278: | LTERRM.State.eCurState:%s, Activation:%s
Line 2279: | Pre-configuration:%s
Line 2280: | Comm(%s) - Use:%s, SIB18:%s, DedicatedTxConfig:%s, SyncTx:%s
Line 2283: | DISC(%s) - Use:%s, SIB19:%s, DedicatedTxConfig:%s, SyncTx:%s
Line 2289: |--------------- OOC DB ---------------
Line 2290: | Earfcn:%d, SyncTx:%s
Line 2294: |   >> (SyncTx) slssid:%d, sync_offset:%d
Line 2298: | SyncRef UE:%s
Line 2301: |   >> (ue_type:%s, list_type:%s) slssid:%d, sync_offset:%d
Line 2305: |   >> priority_group:%d, time_offset:%d, SRSRP:%d[/100 dBm], freq_offset:%d
Line 2312: |--------------- Monitored UE List ---------------
Line 2319: |--------------- Candidated UE List ---------------
Line 2329: |--------------- Monitored UE List (For inter freq. direct discovery:Idx %d) ---------------
Line 2335: |--------------- Relay DB ---------------
Line 2336: | SL UE Threshold Conditions - relay(%s), remote(%s)
Line 2340: | DiscConfigRelayIcPresent:%s, RelayUeReselInfoOocPresent:%s
Line 2347: |   >> discConfigRelayIc.BitMask:0x%X, Pcell RSRP:%d[/100 dBm]
Line 2353: |   >> RelayThreshHigh:%d[/100 dBm], RelayHystMax:%d[/100 dB]
Line 2359: |   >> RelayThreshLow:%d[/100 dBm], RelayHystMin:%d[/100 dB]
Line 2365: |   >> RemoteThreshHigh:%d[/100 dBm], RemoteHystMax:%d[/100 dB]
Line 2370: | RemoteUeOperation:%s
Line 2375: |   >> Relay ID:%d, Relay Service Code:0x%2X%2X%2X, Relay Ue:%s
Line 2381: |--------------- Relay UE List ---------------
Line 2386: ===============================================================
Line 2407: [SL_WARN] MoveUeInfoPallist error! - pUeInfoList:%s, pSlUeInfo:%s
Line 2428: SlUeInfo is moved to assigned list - ue_type:%s, list_type:%s, earfcn:%d, slssid:%d
Line 2471: Drop SlUeInfo - ue_type:%s, list_type:%s, earfcn:%d, slssid:%d, SRSRP:%d[/100 dBm], MinSrsrp:%d[/100 dBm]
Line 2572: Change ue_type of SlUeInfo - ue_type:%s, list_type:%s, earfcn:%d, slssid:%d
Line 2577: Remove SlUeInfo - ue_type:%s, list_type:%s, earfcn:%d, slssid:%d
Line 2626: Remove RelayUeInfo
Line 2627:    >> Relay Service Code:0x%2X%2X%2X
Line 2628:    >> Relay UE ID:0x%2X%2X%2X
Line 2696: Updates the preconfigured information for SL
Line 2701: [SL_WARN] Update for pre-configuration is cancelled! - LTERRM.State.eCurState:%s, SP:%s
Line 2708: ALLOC:PreConfig
Line 2717: ALLOC:RrmL1Lc_SlPreconfigNtf message
Line 2721: Cannot Allocate Message buffer
Line 2787:    >>[General] carrierFreq:%d, sl-bandwidth:(enum)%d, subframeAssignmentSL:(enum)%d, reserved:0x%X
Line 2791:    >>[Sync] syncCP-Len:(enum)%d, syncOffsetInd1:%d, syncOffsetInd2:%d
Line 2794:    >> filterCoefficient:(enum)%d, syncTxThreshOoc:%d(%d[/100 dBm])
Line 2797:    >> syncRefMinHyst:(enum)%d(%d[/100 dBm]), syncRefDiffHyst:(enum)%d(%d[/100 dB])
Line 2801:    >>[Pool] numCommPool:%d, numCommRxPool-r13:%d, numCommTxPool-r13:%d, numDiscRxPool-r13:%d, numDiscTxPool-r13:%d
Line 2813:    >>[Relay] q-RxLevMin:%d[/100 dBm], filterCoefficient:(enum)%d, minHyst:(enum)%d(%d[/100 dB])
Line 2827: FREE:RrmL1Lc_SlPreconfigNtf message
Line 2872: LteRrmSl_SetSib18ForDirectComm - numOfCommRxPool:%d, bCommTxPoolNormalConfig:%s, bCommTxPoolExceptionalConfig:%s, inCoverageSyncIndex:%d
Line 2957: commRxPool[%d] - resourcePoolType:%s, syncConfigIndex:%d, syncOffsetIndicator:%d, slssid:%d
Line 2960: RxParaPresent:%s, rxParamsNcell.physCellId:%d, SyncConfigPresent:%s, txParameters.syncTxThreshIC:%d
Line 2967: [SL_WARN] In commRxPool[%d], syncConfigIndex(%d) is incorrect!
Line 2971: ALLOC:RrmL1Lc_SlSib18UpdateNtf message
Line 2975: Cannot Allocate Message buffer
Line 3009: FREE:RrmL1Lc_SlSib18UpdateNtf message
Line 3060: LteRrmSl_SetSib19ForDirectDisc - inCoverageSyncIndex:%d, numOfRxPool:%d, numOfTxPool:%d, numOfRxPoolPs:%d, numOfTxPoolPs:%d
Line 3151: [SL_WARN] In discRxPool[%d], syncConfigIndex(%d) is incorrect!
Line 3154: discRxPool[%d] - resourcePoolType:%s, syncConfigIndex:%d, syncOffsetIndicator:%d, slssid:%d
Line 3157: RxParaPresent:%s, rxParamsNcell.physCellId:%d, SyncConfigPresent:%s, txParameters.syncTxThreshIC:%d
Line 3183: [SL_WARN] In TxResourcePool, txParameters is incorrect!
Line 3186: discTxPool[%d] - bConfigured:%s, poolSelection:%d(0:rsrpBase - threshLow:%d, threshHigh:%d, 1:random)
Line 3198: discInterFreqList[%d] - earfcn:%d
Line 3289: [SL_WARN] In discRxPoolPs[%d], syncConfigIndex(%d) is incorrect!
Line 3292: discRxPoolPs[%d] - resourcePoolType:%s, syncConfigIndex:%d, syncOffsetIndicator:%d, slssid:%d
Line 3295: RxParaPresent:%s, rxParamsNcell.physCellId:%d, SyncConfigPresent:%s, txParameters.syncTxThreshIC:%d
Line 3322: [SL_WARN] In TxResourcePoolPs, txParameters is incorrect!
Line 3325: discTxPoolPs[%d] - bConfigured:%s, poolSelection:%d(0:rsrpBase - threshLow:%d, threshHigh:%d, 1:random)
Line 3331: ALLOC:RrmL1Lc_SlSib19UpdateNtf message
Line 3335: Cannot Allocate Message buffer
Line 3359: discConfigRelay
Line 3369:    >> RelayThreshHigh:%d[/100 dBm], RelayHystMax:%d[/100 dB]
Line 3379:    >> RelayThreshLow:%d[/100 dBm], RelayHystMin:%d[/100 dB]
Line 3389:    >> RemoteThreshHigh:%d[/100 dBm], RemoteHystMax:%d[/100 dB]
Line 3397:    >>[reselInfoIC] q-RxLevMin:%d[/100 dBm], filterCoefficient:(enum)%d, minHyst:(enum)%d(%d[/100 dB])
Line 3404: FREE:RrmL1Lc_SlSib19UpdateNtf message
Line 3439: LteRrmSl_SetDedicatedConfig - SyncTxControl:%s, DiscConfig:%s, CommConfig:%s
Line 3450: DiscConfig - optionalFieldBitmap:0x%X (0th:discTxResources-r12, 1st:discTF-IndexList-v1260, 2nd:discTxResourcesPS-r13))
Line 3455: discTxResources-r12 - discCfgType:%s
Line 3462: ALLOC:Dedicated DiscTxConfig
Line 3468: Cannot Allocate discInfo.dediTxConfig buffer
Line 3486:    >> setupType:%s
Line 3506:    >> numOfPoolToReleaseList:%d, numOfPoolToAddList:%d
Line 3515:      ::ReleaseList[%d] - poolIdentity:%d
Line 3522:      ::AddList[%d] - poolIdentity:%d
Line 3547: [SL_WARN] Dedicated tx configuration for a direct discovery is incorrect! - optionalFieldBitmap:0x%01X, ue_SelectedResourceConfig_presentFlag:%s
Line 3553:      poolSelection:%d(0:rsrpBase - threshLow:%d, threshHigh:%d, 1:random)
Line 3559:    >> ue-Selected pool DB
Line 3565:      ::poolIdentity:%d, poolSelection:%d(0:rsrpBase - threshLow:%d, threshHigh:%d, 1:random)
Line 3572:      ::dediTxPoolNum:%d
Line 3585: discTxResourcesPS-r13 - discCfgType:%s
Line 3592: ALLOC:Dedicated DiscTxConfig
Line 3598: Cannot Allocate discInfo.dediTxConfig buffer
Line 3616:    >> setupType:%s
Line 3636:    >> numOfPoolToReleaseList:%d, numOfPoolToAddList:%d
Line 3645:      ::ReleaseList[%d] - poolIdentity:%d
Line 3652:      ::AddList[%d] - poolIdentity:%d
Line 3677: [SL_WARN] Dedicated tx configuration for a direct discovery is incorrect! - optionalFieldBitmap:0x%01X, ue_SelectedResourceConfig_presentFlag:%s
Line 3683:      poolSelection:%d(0:rsrpBase - threshLow:%d, threshHigh:%d, 1:random)
Line 3689:    >> ue-Selected pool DB
Line 3695:      ::poolIdentity:%d, poolSelection:%d(0:rsrpBase - threshLow:%d, threshHigh:%d, 1:random)
Line 3702:      ::dediTxPoolPsNum:%d
Line 3716: FREE:Dedicated DiscConfig
Line 3725: CommConfig - optionalFieldBitmap:0x%X (0th:commTxResources-r12, 1st:commTxResources-v1310))
Line 3730: commTxResources-r12 - commCfgType:%s
Line 3737: ALLOC:Dedicated CommTxConfig
Line 3743: Cannot Allocate commInfo.dediTxConfig buffer
Line 3760:    >> setupType:%s
Line 3773:    >> numOfPoolToReleaseList:%d, numOfPoolToAddList:%d
Line 3783:      ::ReleaseList[%d] - poolIdentity:%d
Line 3794:      ::AddList[%d] - poolIdentity:%d, bPriorityConfigured:%s
Line 3814: commTxResources-r13 - commCfgType:%s
Line 3821: ALLOC:Dedicated CommTxConfig
Line 3827: Cannot Allocate commInfo.dediTxConfig buffer
Line 3844:    >> setupType:%s
Line 3851:    >> numOfPoolToReleaseListExt:%d, numOfPoolToAddListExt:%d
Line 3861:      ::ReleaseListExt[%d] - poolIdentity:%d
Line 3872:      ::AddListExt[%d] - poolIdentity:%d, bPriorityConfigured:%s
Line 3886: FREE:Dedicated CommConfig
Line 3949: Change ue_type of SlUeInfo - ue_type:%s, list_type:%s, earfcn:%d, slssid:%d
Line 3964: Change ue_type of SlUeInfo - ue_type:%s, list_type:%s, earfcn:%d, slssid:%d
Line 3979: Add SlUeInfo - ue_type:%s, list_type:%s, earfcn:%d, slssid:%d
Line 4010: LteRrmSl_UpdateSidelinkMeasVariable
Line 4072: Update for the information for RRC timer - T300:%s, T310:%s
Line 4106: Activate status:%s, SL_COMM(enable:%s), SL_DISC(enable:%s)
Line 4111: Activate a sidelink - LTERRM.State.eCurState:%s, bForPsbch:%s
Line 4147: [SL_WARN] Invalid configuration! - preConfig:%s, currCandiUeInfo:%s
Line 4214: [SL_WARN] Sidelink of OOC can not be activated! - preConfig:%s
Line 4222:    >> earfcn:%d, bandwidth:%d, cp_type:%d, slssid:%d
Line 4224:    >> time_offset:%d, syncOffset:%d, subframeAssignmentSL:%d
Line 4253: Deactivate a sidelink (bInitUeList:%s)
Line 4269: LTERRM.State.eCurState transition - RRM_SL_OOC -> RRM_INIT
Line 4400: LteRrmSl_ProcReleaseRemoteUe(Type:%s)
Line 4413:    >> release Relay UE ID:0x%2X%2X%2X
Line 4432:      ::No match with candidated Relay UEs
Line 4453: LteRrmSl_ProcSetRemoteUe(CurrRemoteUeOperation:%s) - RelayServiceCode:0x%2X%2X%2X
Line 4566: [SL_WARN] In RxPool[%d], pSlUeInfo NULL! - physCellId:%d, slssid:%d
Line 4572: IC monitoredRxPool[%d] - resourcePoolType:%s, RxPoolIndex:%d
Line 4574:    >> physCellId:%d, slssid:%d, time_offset:%d, syncOffsetIndicator:%d
Line 4609: OOC monitoredRxPool[%d] - resourcePoolType:SERVING_POOL, RxPoolIndex:%d
Line 4615: [SL_WARN] Invalid LTERRM.State.eCurState:%s!
Line 4619: SetRxResourcePool - slRscSyncCfgMemType:%s, earfcn:%d, numOfMonitoredRxPool:%d
Line 4644: LteRrmSl_ProcSelectionRelayUe - relayType:%s, Relay ID:%d
Line 4648:    >> Relay UE ID:0x%2X%2X%2X
Line 4657: [SL_WARN] Selection for Relay UE is failed! - RELAY_SETUP_NONE(bRemoteUeOperation:%s, Relay ID:%d
Line 4674: [SL_WARN] Selection for Relay UE is failed! - REMOTE_COND_FAIL
Line 4686: [SL_WARN] Selection for Relay UE is failed! - RELAY_CFG_NONE
Line 4691: Relay UE selection - qRxlevMin:%d[/100 dBm], MinHyst:%d[/100 dB]
Line 4702: Candidated Relay UE
Line 4703:    >> Relay Service Code:0x%2X%2X%2X
Line 4704:    >> Relay UE ID:0x%2X%2X%2X, L3filtered_SDRSRP:%d[/100 dBm]
Line 4720: Candidated Relay UE[%d]
Line 4721:    >> Relay Service Code:0x%2X%2X%2X
Line 4722:    >> Relay UE ID:0x%2X%2X%2X, L3filtered_SDRSRP:%d[/100 dBm]
Line 4746: [SL_WARN] Selection for Relay UE is failed! - CANDI_RELAY_UE_NONE
Line 4751: Selected Relay UE
Line 4752:    >> Relay Service Code:0x%2X%2X%2X
Line 4753:    >> Relay UE ID:0x%2X%2X%2X, L3filtered_SDRSRP:%d[/100 dBm]
Line 4819: [SL_WARN] Invalid configuration for Rx resource pool! - sl_mode:%s, sibCommConfig:%s, sibDiscConfig:%s
Line 4874: [SL_WARN] Invalid LTERRM.State.eCurState:%s!
Line 4880: LteRrmSl_ProcSelectionRxResourcePool - sl_mode:%s, bUpdate:%s, bImmediately:%s
Line 4913: LteRrmSl_ProcSelectionTxResourcePool - sl_mode:%s, T300:%s, T310:%s
Line 5214: SetTxResourcePool - slRscSyncCfgMemType:%s, numOfTxPool:%d
Line 5218:    >> txPoolIndex[%d]:%d
Line 5242: [SL_WARN] currCandiUeInfo is NULL!
Line 5246: LteRrmSl_ProcPsbchDecodingReq - slssid:%d, time_offset:%d
Line 5293: LteRrmSl_ProcPsbchDecodingCnf - SP:%s, pbchMode:%s, bIsSuccess:%s
Line 5306: [SL_WARN] Mismatch in PSBCH Info.! - inCoverage:%s, SLSSID:%d
Line 5313:    >> PSBCH Info. - syncOffsetIndicator:%d, subframeAssignmentSL:%d, bandwidth:%d, syncInfoReserved:0x%X, inCoverage:%s
Line 5323:    >> priority group:%d
Line 5371:    >> priority group:%d
Line 5405: OocStartScenario: SyncRef UE selection and activation
Line 5410: PSBCH decoding for SyncRef UE was failed.
Line 5417: Finish PSBCH decoding for candidated UEs
Line 5452: LteRrmSl_ProcActivateControl - sl_mode:%s, sl_pwc_cmd:%s, use:%s, LTERRM.State.eCurState:%s
Line 5458: [SL_TEST_CODE] The use of SL is set to SL_USE_PS.
Line 5609: Update RelayUeInfoBuf
Line 5610:    >> Relay Service Code:0x%2X%2X%2X
Line 5611:    >> Relay UE ID:0x%2X%2X%2X
Line 5618:    >> L1_filter_cnt:%d, L1filtered_SDRSRP:%d[/100 dBm]
Line 5630:    >> L3filtered_SDRSRP:%d[/100 dBm]
Line 5648: [SL_WARN] In %s, AS condition(RemoteUeThreshCond:%s, pReselectionInfoRelay:%s) for a remote UE is failed!
Line 5664: Evaluation Relay UE selection/reselection - qRxlevMin:%d[/100 dBm], MinHyst:%d[/100 dB], MinSdrsrp:%d[/100 dBm]
Line 5672: Lost Relay UE
Line 5692: Relay UE[%d]
Line 5696: Candidated Relay UE[%d]
Line 5698:    >> Relay Service Code:0x%2X%2X%2X
Line 5699:    >> Relay UE ID:0x%2X%2X%2X, L3filtered_SDRSRP:%d[/100 dBm]
Line 5726: No available Relay UE
Line 5735: Reselection Relay UE
Line 5736:    >> Relay Service Code:0x%2X%2X%2X
Line 5737:    >> Relay UE ID:0x%2X%2X%2X, L3filtered_SDRSRP:%d[/100 dBm]
Line 5781: LteRrmSl_ProcEvaluationSyncTx - sl_mode:%s
Line 5839:    >> networkControlledSyncTx:%s, ServingCell RSRP:%d[/100 dBm], syncTxThresh:%d[/100 dBm]
Line 5883:    >> syncRef_UE:%s, syncOffsetIndicator1:%d, syncOffsetIndicator2:%d, syncTxThresh:%d[/100 dBm]
Line 5892:    >> syncRef_UE SRSRP:%d[/100 dBm]
Line 5897: [D2D_SYNC_TEST_MODE] Block SyncTx
Line 5916: [SL_WARN] Invalid LTERRM.State.eCurState:%s!
Line 5922:    >> slRscSyncCfgMemType:%s, slssid:%d, syncOffsetIndicator:%d, inCoverage:%s, syncInfoReserved:0x%X
Line 5926:    >> SetSyncTx:%s(CurrSyncTx:%s)
Line 5948:    >> Sync. configuration none
Line 5970: [SL_WARN] Pre-configuration for OOC is none!
Line 5974: LteRrmSl_ProcEvaluationSyncRefUe - SyncRef UE:%s, MinSrsrpForSyncRefUe:%d[/100 dBm], syncRefMinHyst:%d[/100 dB], syncRefDiffHyst:%d[/100 dB]
Line 5984: [D2D_SYNC_TEST_MODE] Block the evaluation of SyncRef UE
Line 5989: SyncRef UE evaluation - SLSSID:%d, priority_group:%d, SRSRP:%d[/100 dBm], bSyncRefUeLost_Ind:%s
Line 6000:    >> SyncRef UE shall be removed.
Line 6007:      ::Drop SlUeInfo - MinSrsrp:%d[/100 dBm]
Line 6053: SyncRef UE selection/reselection - SLSSID:%d, priority_group:%d, SRSRP:%d[/100 dBm]
Line 6060: [D2D_SYNC_TEST_MODE] Block the reselection of SyncRef UE
Line 6090: LTERRM.State.eCurState transition - RRM_INIT -> RRM_SL_OOC
Line 6160: Start OOC Scenario
Line 6164: [SL_WARN] OOC scenario has been ongoing!
Line 6173: [SL_WARN] Invalid configuration for SL OOC scenario! - LTERRM.State.eCurState:%s, preConfig:%s, SL_COMM:%s, SL_DISC:%s
Line 6194: LTERRM.State.eCurState transition - RRM_INIT -> RRM_SL_OOC
Line 6212: OocStartScenario: SL initial search - earfcn:%d
Line 6239: [SL_WARN] measMode(%s) invalid!
Line 6243: LteRrmSl_ProcSrsrpMeasReq - SP:%s, measMode:%s
Line 6257:    >> Meas Info. - earfcn:%d, cp_type:%d, syncOffsetIndicator:%d
Line 6277:    >> UE[0](SyncRef UE) - slssid:%d, time_offset:%d
Line 6287:    >> UE[%d] - slssid:%d, time_offset:%d
Line 6328: LteRrmSl_ProcSdRsrpMeasResult
Line 6332: [SL_WARN] RemoteUeOperation(%s) invalid!
Line 6350: SD-RSRP MeasResult
Line 6351:    >> Relay Service Code:0x%2X%2X%2X
Line 6352:    >> Relay UE ID:0x%2X%2X%2X
Line 6353:    >> SD-RSRP - M0:%d M1:%d L1filtered_SDRSRP:%d[/100 dBm]
Line 6357:      ::No match - relay service code of relay filter:0x%2X%2X%2X
Line 6398:      ::Add SlRelayUeInfo
Line 6426: [SL_WARN] Earfcn(%d) of search result is different from pre-configured earfcn(%d)!
Line 6435: syncResult - earfcn:%d, resultNum:%d
Line 6439:    >> syncResult[%d] - slssid:%d, time_offset:%d
Line 6473: Add SlUeInfo - ue_type:%s, list_type:%s, earfcn:%d, slssid:%d, time_offset:%d, sync_offset:%d
Line 6485: OocStartScenario: SL-PBCH decoding/SRSRP measurement
Line 6491: OocStartScenario: SyncRef UE selection and activation
Line 6526: LteRrmSl_ProcSlMeasureCnf - SP:%s, measMode:%s, timerExpired:%s
Line 6535: syncResult - earfcn:%d, resultNum:%d
Line 6541:    >> syncResult[%d] - slssid:%d, time_offset:%d
Line 6568:      ::SLSSID is overlapped with SyncRef UE.
Line 6575: [D2D_SYNC_TEST_MODE] Block the search of candidated UEs
Line 6590: Add SlUeInfo - ue_type:%s, list_type:%s, earfcn:%d, slssid:%d, time_offset:%d, sync_offset:%d
Line 6621: syncResult - earfcn:%d, resultNum:%d
Line 6650:    >> syncResult[%d](slssid:%d, time_offset:%d) is not included in UE list.
Line 6657:    >> syncResult[%d] - ue_type:%s, list_type:%s, slssid:%d, time_offset:%d
Line 6685: measResult - earfcn:%d, measured_cnt:%d
Line 6723:    >> measResult[%d](slssid:%d) is not included in monitored UE list.
Line 6729:    >> measResult[%d] - ue_type:%s, list_type:%s, slssid:%d, time_offset:%d, SRSRP:%d[/100 dBm]
Line 6758:    >> L1_filter_cnt:%d, L1filtered_SRSRP:%d[/100 dBm]
Line 6770:    >> L3filtered_SRSRP:%d[/100 dBm]
Line 6790: OocStartScenario: SyncRef UE selection and activation
Line 6801: [SL_WARN] measMode invalid!
Line 6841: LteRrmSl_ProcSlSyncrefueLost - target_slssid:%d
Line 6846: [SL_WARN] Target SLSS is not matched with SyncRef UE!
Line 6850:    >> oocInfo.bSyncRefUeLost_Ind:%s -> TRUE
Line 6872: [SL_WARN] Pre-configuration for OOC is none!
Line 6878: Start initial search for SL
Line 6894:    >> Search Info. - earfcn:%d, cp_type:%d, LTERRM.State.eCurState:%s
Line 6917: [SL_WARN] Parameter for PSBCH decoding is incorrect! - candiUeList:%s, SP:%s, mode:%s
Line 6923: Start PSBCH decoding for candidated UEs - SP:%s, mode:%s
Line 7004: Check schedule: Evaluation for SL SyncTx (bImmediately:%s)
Line 7030: Check schedule: SL search
Line 7039: Start scheduling: SL search
Line 7079: [SL_WARN] For SL search, LTERRM.State.eCurState(%s) invalid!
Line 7085:    >> Search Info. - measMode:%s, earfcn:%d, cp_type:%d, LTERRM.State.eCurState:%s
Line 7163: Check schedule: SL measurement
Line 7174: monitoredUeList(%s) empty / syncRef_UE(%s)
Line 7179: Start scheduling: SL measurement
Line 7212: SL measurement(SP:%s, OngoingFlag:%s) is ongoing!
Line 7219: StartSchedulingOperation
