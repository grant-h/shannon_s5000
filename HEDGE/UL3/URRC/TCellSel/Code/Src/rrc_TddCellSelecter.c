Line 285: Invalid CnxMgr Pending state: CellDch - using CellFach as the pending state instead
Line 393: ERROR Illegal State
Line 467: Failed to create TimerSCellMeasResultValid
Line 505: Failed to create T322
Line 524: Failed to create T325
Line 649: ERROR deleting TimerSCellMeasResultValid
Line 662: ERROR deleting T_322 timer
Line 674: ERROR deleting T_325 timer
Line 797: Poweron Add StoredFreqDb entry at Index[%d]: Freq[%d] PLMN[0x%X] from SIM2
Line 803: Poweron Add StoredFreqDb entry at Index[%d]: Freq[%d] PLMN[0x%X]
Line 863: NULL PLMN ID Passed: Freq[%d] not Added
Line 868: Freq[%d] not Supported BandId(%d)
Line 899: Old Stored freq: Sort
Line 908: Old Stored freq: Skip
Line 913: New Stored freq
Line 925: First Stored freq
Line 966: StoredFreq[%d] found for PLMN 0x%X, 0x%X, 0x%X
Line 980: Add TddLastManualScannedFreqs
Line 1010: Add InitialFreq
Line 1023: Add TddLastUsedFreq
Line 1057: Add LastUsedNeighborFreq
Line 1074: Add SCellCachedFreq
Line 1102: Add TddLastUsedFreq from other stack
Line 1111: Umts_access_mode %d is different from peer stack
Line 1115: current stack	%d peer stack %d
Line 1140: Target PLMN is HPLMN or in EPLMN list
Line 1152: Equivalent PlmnId 0x%X, 0x%X, 0x%X
Line 1176: Target PLMN is NULL
Line 1181: CellSelecter of Stack %d is NULL
Line 1228: TddMaxBand %d 
Line 1231: TddStoredBands[%d] %d 
Line 1262: FastHplmnFreq %d 
Line 1329: ERROR registering for State Change notificationwith CnxMgr
Line 1389: ERROR creating TPlmnSearchBackOff Timer
Line 1394: Failed to create TimerKeepBplmnOp
Line 1402: ERROR creating TimerOurOfService Timer
Line 1425: [DS_CELL_SEL] Failed to create T_SearchOn
Line 1430: [DS_CELL_SEL] Failed to create T_SearchOff
Line 1468: ERROR Illegal State
Line 1523: ERROR deleting TPlmnSearchBackOff timer
Line 1534: ERROR deleting TimerKeepBplmnOp
Line 1547: ERROR deleting TimerOurOfService timer
Line 1560: ERROR deleting T_SearchOn timer
Line 1572: ERROR deleting T_SearchOff timer
Line 1686: AllBandSearchValue- %d 
Line 1690: Building PlmnList Ind
Line 1733: Num Unique PLMN Id's is: %d and it is > 64
Line 1751: Num Unique PLMN Id's is: %d and it is > 64
Line 1801: Num Unique PLMN Id's is: %d and it is > 64
Line 1807: Added currently selected PlmnId: 0x%02X, 0x%02X, 0x%02X with RxLev: %d to head of list
Line 1817: PlmnList Ind built - %d unique PlmnIds found
Line 1833: Num Unique PLMN Id's is: %d and it is > 64
Line 1854: Failed to move to AwaitingNasRequest state
Line 1910: Num Unique PLMN Id's is: %d and it is > 64
Line 1928: Num Unique PLMN Id's is: %d and it is > 64
Line 1952: Num Unique PLMN Id's is: %d and it is > 64
Line 1985: ERROR Illegal State
Line 2129: add FastHplmnFreq (freq %d)
Line 2147: Old freq: Sort
Line 2155: Old freq: Skip
Line 2161: New freq
Line 2170: First freq
Line 2186: Get TddLastUsedFreq Band A freq %d)
Line 2190: Get TddLastUsedFreq Band F freq %d)
Line 2203: Input Band (%d) is greater than TDD_MAX_BAND (%d)
Line 2208: Input Band (%d) is invalid
Line 2213: Input Frequency(%d) is not supported
Line 2233: Old freq: Sort :: (band %d, freq %d)
Line 2238: Old freq: Skip
Line 2244: New freq:: (band %d, freq %d)
Line 2250: First freq
Line 2765: Input Band (%d) is greater than TDD_MAX_BAND (%d)
Line 2771: Input Band (%d) is invalid
Line 2791: Old freq: Sort :: (band %d, freq %d)
Line 2796: Old freq: Skip
Line 2802: New Manual Scanned freq:: (band %d, freq %d)
Line 2808: First freq
Line 2841: BestRscpOnInterFreq is set to %d (%d dBm)
Line 2859: ERROR stopping TimerSCellMeasResultValid
Line 2870: Keep current CellParamIdInDCH & MeasResult(Cell Param Id %d)
Line 2874: Add CellParamIdInDCH (Idx 0, Cell Param Id %d)
Line 2887: ERROR stopping TimerSCellMeasResultValid
Line 2902: [Last SCell Meas Result] Update :: Freq %d, CPI %d (rscp %ddBm, ts0Sinr %ddB, dpchSir %ddB)
Line 2910: ERROR stopping TimerSCellMeasResultValid
Line 2919: ERROR starting TimerSCellMeasResultValid
Line 2923: TimerSCellMeasResultValid Started (TmId=%d) : %i msec
Line 2929: [Last SCell Meas Result] Wrong CPI Info :: CellSelecter(Freq %d, CPI %d) vs New(Freq %d, CPI %d)
Line 2962: [Last SCell Meas Result] reusable :: Rscp %ddBm (> -70) & Ts0Sinr %ddB (> 4), DpchSir %ddB (don't care)
Line 2967: [Last SCell Meas Result] reusable :: Rscp %ddBm (-70 ~ -80) & DpchSir %ddB (> 20) & Ts0Sinr %ddB (> 4)
Line 2972: [Last SCell Meas Result] reusable :: Rscp %ddBm (-80 ~ -90) & DpchSir %ddB (> 18) & Ts0Sinr %ddB (> 4)
Line 2977: [Last SCell Meas Result] reusable :: Rscp %ddBm (> -90) & DpchSir %ddB (> 8) & Ts0Sinr %ddB (> 2)
Line 2981: [Last SCell Meas Result] Not reusable :: Low RSCP or SIR (Rscp %ddBm, DpchSir %ddB, Ts0Sinr %ddB)
Line 2986: [Last SCell Meas Result] Not reusable :: Freq %d, NumCpi %d, Cpi %d
Line 2997: TddCellSelecter_p == NULL
Line 3009: Remove CellParamIdInDCH (Idx %d, Cell Param Id %d)
Line 3026: NumCellParamIdInDch is already zero
Line 3034: CellParamId is not in CellParamIdInDCH
Line 3040: [rrc_TddCellSelecter_RemoveCellInDch] TddCellSelecter_p->NumCellParamIdInDch(%d) > Asn_maxDPCH_DLchan(%d)
Line 3111: Could not start T322(%d ms)
Line 3116: Could not start T322(%d ms)
Line 3149: rrc_TddCellSelecter_ClearPriorityInfoList:: CLEARED
Line 3164: rrc_TddCellSelecter_SetPriorityInfo_Utra:: Priority(%d) - UARFCN(%d)
Line 3173: rrc_TddCellSelecter_SetPriorityInfo_Utra:: Priority(%d) - UARFCN(%d)
Line 3178: rrc_TddCellSelecter_SetPriorityInfo_Utra:: Priority(%d) or numFreqCount(%d) - Out of bound 
Line 3196: TddCellSelecter_p->PriorityInfoList[Priority].choice_RAT = %d and priority = %d
Line 3208: UtraPriorityInfo.UtraFreqList[freqIdx] = %d, UtraFreq = %d
Line 3234: rrc_TddCellSelecter_SetPriorityInfo_Eutra:: Priority(%d) - EARFCN(%d)
Line 3239: rrc_TddCellSelecter_SetPriorityInfo_Eutra:: Priority(%d) or numFreqCount(%d) - Out of bound 
Line 3253: Timer T325 stopped
Line 3257: Error in stopping timer T325
Line 3268: rrc_TddCellSelecter_StartT325 : start T325(%d min)
Line 3272: Could not start T325(%d min)
Line 3277: Could not start T325(%d min)
Line 3298: rrc_TddCellSelecter_DePrioReset!!
Line 3327: rrc_TddCellSelecter_T325Expiry : CurrentRule = %d
Line 3346: rrc_TddCellSelecter_T325Expiry : Cannot refresh current EutraMeas(NOTACTIVE)
Line 3351: rrc_TddCellSelecter_T325Expiry : Cannot referesh current EutraMeas(Not Support or Reselecter is NOTACTIVE
Line 3371: rrc_TddCellSelecter_IsDePrioritisedFreq: Current DeprioType is URRC_DEPRIO_TYPE_EUTRA(%d), return TRUE
Line 3381: rrc_TddCellSelecter_IsDePrioritisedFreq: Given Freq(%d) found at DePrioritiseInfoList[%d], return TRUE
Line 3389: FATAL_ERROR: Current DeprioType is URRC_DEPRIO_TYPE_EUTRA(%d) eventhough TddCellSelecter_p->DePrioritiseStatus is DEPRIORITY_ACTIVE, return FALSE
Line 3406: TddCellSelecter_p->PriorityInfoList[Priority].choice_RAT = %d and priority = %d
Line 3419: EutraPriorityInfo.UtraFreqList[freqIdx] = %d, UtraFreq = %d
Line 3490: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 3495: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 3618: Update Tdd Network Cache with the Serving Cell Retested Band SelectedBandId = %d,selected uarfcn = %d
Line 3672: Update Fdd Network Cache with the Serving Cell Retested Band SelectedBandId = %d, SelectedUarfcn = %d
Line 3769: Entering Upation of Forbidden LA (URRC_FLAI_LIST %d, NAS_FLAI_LIST %d)
Line 3779: URRC_FLAI_LIST[%d] -> LAI %d
Line 3793: NAS_FLAI_LIST[%d] -> LAI %d
Line 3832: Asking all cells to be deleted for LAI %d
Line 3903: SetSelectionCriteria: Wrong PLMN_SEARCH type!!! Setting to FULL SCAN
Line 3908: SetSelectionCriteria: PLMN_SEARCH_REQ - Search Type(%d)
Line 3997: [URRC_FREQ_AID][Default_NasLCSFreqAidReq] FreqAidRequest start(%d) rat(%d) tcxo_type(%d)
Line 4016: [URRC_FREQ_AID][Default_NasLCSFreqAidReq]TddCellSelecter Status is not available for Frequency Aiding
Line 4053: [URRC_FREQ_AID][Default_NasLCSFreqAidCnf] TriggeringMsg->AuxData.RetCode = %d
Line 4055: [URRC_FREQ_AID][Default_NasLCSFreqAidCnf] Payload->status(%d)
Line 4066: [URRC_FREQ_AID][Default_NasLCSFreqAidCnf] FreqAidCnf->status : FREQ_AID_STATUS_FAILED
Line 4073: [URRC_FREQ_AID][Default_NasLCSFreqAidCnf] FreqAidCnf->status : FREQ_AID_STATUS_LOCKED
Line 4078: [URRC_FREQ_AID][Default_NasLCSFreqAidCnf] FreqAidCnf->status : FREQ_AID_STATUS_UNLOCKED
Line 4092: [URRC_FREQ_AID]LcsFreqAidCnf status = %d (0:Unlocked 1:Locked 2:Aborted 3:Faied)
Line 4121: TDD :AwaitingInitialRequest_NasPlmnSearchReq
Line 4142: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 4164: AwaitingNasRequest_NasPlmnSearchReq: PlmnSearchReq rcvd for different plmn in connected mode
Line 4167: AwaitingNasRequest_NasPlmnSearchReq()-ReleaseCnx MsgNotSent
Line 4212: ERROR Illegal State
Line 4244: Updating the Manual Scanned Freqs and Clear It
Line 4264: Stored Info network parameters read - doing a Stored Search
Line 4272: No USIM network parameters read - doing a Stored Search
Line 4279: No USIM network parameters read - doing a Blind Search
Line 4304: No Stored Freq available
Line 4317: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 4322: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 4328: ERROR Illegal State
Line 4342: ERROR Illegal State
Line 4390: AwaitingInitialRequest_NasInitialPlmnSearchReq Trigger a Blind Search
Line 4437: ERROR Illegal State
Line 4462: Default_ReDirectToUtranReqFromLte : RedirectToUtranReqFromLte cannot be handled at current status!!!
Line 4468: NumSysInfoContainer is not 0
Line 4507: AwaitingInitialRequest_ReDirectToUtranReqFromLte
Line 4526: Wrong Redirection Frequency from LTE
Line 4532: Overwrite the redirection freq ( 0 -> %d)
Line 4536: MRU not available
Line 4550: FrequencyIsValid is FALSE
Line 4559: Update Fdd Network Cache with the Serving Cell Retested Band SelectedBandId = %d
Line 4573: CSFB is Triggered: Set ForcedSib11Sib12Skipping
Line 4595: Set ForcedSib11Sib12Skipping in case of SI tunneling
Line 4615: ServingCellInst == NULL
Line 4620: Rel9 is not supported
Line 4650: ERROR Illegal State
Line 4678: ERROR Illegal State
Line 4697: ERROR Illegal State
Line 4778: ERROR stopping TimerKeepBplmnOpIRAT
Line 4786: ERROR stopping TimerKeepBplmnOp
Line 4830: TDD NasSelectingPlmn_NasPlmnSearchReq
Line 4838: Nirmala: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 4888: ERROR Illegal State
Line 4916: Nirmala: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 5041: ERROR Illegal State
Line 5057: ERROR Illegal State
Line 5095: Classname:TddCellSelecter: ERROR Illegal State
Line 5102: Classname:TddCellSelecter: ERROR Illegal State
Line 5106: NasSelectingPlmn_SelectableCellFound:PendingState %d
Line 5140: Classname:TddCellSelecter: ERROR Illegal State
Line 5172: RedirectBandId received invalid BandId(%d) from LTE so last stored Band(%d) will be replaced
Line 5290: failed to find a cell in the redirection freq => start Blind Cell Search
Line 5325: ERROR Illegal State
Line 5394: No USIM network parameters read - doing a Blind Search
Line 5416: No Stored Freq available
Line 5429: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 5434: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 5440: ERROR Illegal State
Line 5488: Band is %d, RXlev is %d,index is %d
Line 5513: Num Unique PLMN Id's is: %d and it is > 64
Line 5533: Band is %d, RXlev is %d,index is %d
Line 5539: Num Unique PLMN Id's is: %d and it is > 64
Line 5568: Num Unique PLMN Id's is: %d and it is > 64
Line 5585: Num Unique PLMN Id's is: %d and it is > 64
Line 5597: PlmnSearchFail Ind built - %d unique PlmnIds found
Line 5612: Num Unique PLMN Id's is: %d and it is > 64
Line 5623: PlmnSearchFail_IND cannot be created
Line 5637: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 5642: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 5675: ERROR Illegal State
Line 5686: TDD Stored search (USIM)done, Going for BLIND SEARCH
Line 5696: Detected Network Pointer Present and Band Search Status is TRUE for Band %d
Line 5727: Band is %d, RXlev is %d,index is %d
Line 5742: Num Unique PLMN Id's is: %d and it is > 64
Line 5760: Num Unique PLMN Id's is: %d and it is > 64
Line 5783: Band is %d, RXlev is %d,index is %d
Line 5788: Num Unique PLMN Id's is: %d and it is > 64
Line 5798: checking band search status and Maxband: Band %d. Max band=%d
Line 5908: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 5985: ERROR Illegal State
Line 6033: Classname:TddCellSelecter: ERROR Illegal State
Line 6040: Classname:TddCellSelecter: ERROR Illegal State
Line 6129: GenMsg is NULL
Line 6166: checking band search status and Maxband: Band %d. Max band=%d
Line 6238: CELL REJECT CAUSE = %d
Line 6256: ERROR Illegal State
Line 6337: ERROR Illegal State
Line 6360: ERROR Illegal State
Line 6375: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 6380: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 6421: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 6426: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 6432: NoCellIndPtr cannot be created
Line 6438: ERROR Illegal State
Line 6443: InterRatReselectingCell_DetectiON-ABORTed: sending rrc_URRC_GRR_CellReselectionToUtranFailed
Line 6476: ERROR unexpected return code: %i from cell suitability check
Line 6486: ERROR Illegal State
Line 6510: G2U_resel:%d, G2U_redir:%d, G2U_resel_fail:%d, G2U_redir_fail:%d
Line 6546: Saved Foreground Search
Line 6556: Classname:TddCellSelecter: ERROR Illegal State
Line 6572: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 6577: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 6797: ERROR Illegal State
Line 6924: Add TddLastUsedFreq
Line 7027: AwaitingRrcRequest_RrcSelectPlmn 
Line 7030: ERROR Illegal State
Line 7089: Frequency %d, Redirected %d
Line 7128: ERROR Illegal State
Line 7136: ERROR StoredNetworkPtr is NULL
Line 7142: ERROR TddHandoverFreqPtr is NULL
Line 7167: HandoverFreq(%d) is not supported in this manual band selection mode
Line 7172: ERROR TddStoredNetworkPtr is NULL
Line 7185: ERROR TddHandoverFreqPtr is NULL
Line 7191: ERROR Illegal State
Line 7272: HandoverFreq(%d) is not supported in this manual band selection mode
Line 7277: ERROR TddStoredNetworkPtr is NULL
Line 7290: ERROR TddHandoverFreqPtr is NULL
Line 7297: ERROR Illegal State
Line 7375: Checking BarredList for Cell(UARFCN %d/ CellParamID %d)
Line 7387: Cell/Freq is barred!!! Cannot Select this Cell(UARFCN %d/ CellParamID %d)
Line 7392: Classname:CellSelecter: ERROR Illegal State
Line 7397: Cell(UARFCN %d/ CellParamID %d) is not barred!!! go for checking suitability
Line 7430: ERROR Illegal State
Line 7494: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 7574: No USIM network parameters read - doing a Stored Search
Line 7582: No USIM network parameters read - doing a Blind Search
Line 7606: No Stored Freq available
Line 7613: ERROR Illegal State
Line 7632: ERROR Illegal State
Line 7672: ----- BackGround PLMN search is not handled in this state -----
Line 7703: ERROR stopping TimerKeepBplmnOp
Line 7739: ----- ForeGround PLMN search is being handled -----
Line 7744: Automatic search requested
Line 7759: ERROR Illegal State
Line 7763: ERROR Illegal ManualAutomatic value: %i
Line 7830: Nirmala: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 7895: AwaitingRrcRequest_NasSearchReq()-ReleaseCnx MsgNotSent
Line 7903: ERROR Illegal State
Line 7977: AwaitingRrcRequest_NasPlmnListReq: INTERNALAMRELREQ MsgNotSent
Line 7981: ----- BackGround PLMN search is not handled in CnxMgr_IsConnectedState(%d) send SCRI first in Manual Search Case -----
Line 8000: ----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 8040: [BPLMN] BPLMN Handler created (Single Rat Search Requested %d)
Line 8053: [BPLMN] Updating the DetecteNetworkPointer
Line 8061: [BPLMN] No detectedNetworkPointer
Line 8073: ERROR Illegal State
Line 8080: [BPLMN] Usim is not accessible, Initiating BPLMN search Request.
Line 8092: ERROR Illegal State
Line 8100: ERROR Illegal State
Line 8113: NumFastHplmnFreq is Zero
Line 8127: [BPLMN] Initiating the BPLMN search for FastHplmnFreq
Line 8139: [BPLMN] ERROR Illegal State
Line 8146: [BPLMN] Initiating the BPLMN search for Manual request
Line 8164: [BPLMN] ERROR Illegal State
Line 8176: ----- BPLMN request rejected from DSRC, sending Fail_ind to NAS-----
Line 8183: [DSDS] BPLMN Waiting for Resource Response
Line 8212: ----- ForeGround PLMN search is being handled -----
Line 8235: ERROR Illegal State
Line 8260: AwaitingRrcRequest_NasPlmnListReq()-ReleaseCnx MsgNotSent
Line 8266: ERROR Illegal State
Line 8281: ERROR stopping TimerKeepBplmnOp
Line 8387: Add TddLastUsedFreq
Line 8456: ERROR Illegal State
Line 8504: Classname:TddCellSelecter: ERROR Illegal State
Line 8528: ----- BackGround PLMN search is not handled in this state -----
Line 8561: ERROR stopping TPlmnSearchBackOff Timer
Line 8579: ----- ForeGround PLMN LIST REQ reposted to TddCellSelecter -----
Line 8598: Classname:TddCellSelecter: ERROR Illegal State
Line 8605: Classname:TddCellSelecter: ERROR Illegal State
Line 8649: No network data in USIM - stored TddNetwork instance not created
Line 8681: [ConnectedOOSSelectingPlmn_SelectableCellNotFound] rrc_Class_TddBplmnHandler_GenerateAbort is NULL Returned
Line 8734: checking band search status and Maxband: Band %d. Max band=%d
Line 8798: CELL REJECT CAUSE = %d
Line 8816: ERROR Illegal State
Line 8821: Unsupported Reject Cause
Line 8828: Pending State is not Idle, ignoring Cell Reject Cause = %d
Line 8849: ----- BackGround PLMN search is not handled in this state -----
Line 8865: ERROR stopping TimerKeepBplmnOp
Line 8874: ----- ForeGround PLMN search is handled in ConnectedOOSSelectingPlmn state -----
Line 8972: ----- BackGround PLMN search is not handled in this state -----
Line 8989: ERROR stopping TimerKeepBplmnOp
Line 9047: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 9054: Critical => No PLMN List Req from NAS
Line 9099: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 9148: ERROR stopping TPlmnSearchBackOff Timer
Line 9154: ERROR stopping TPlmnSearchBackOff Timer
Line 9181: ERROR stopping TPlmnSearchBackOff Timer
Line 9187: ERROR stopping TPlmnSearchBackOff Timer
Line 9218: ERROR stopping TPlmnSearchBackOff Timer
Line 9262: ERROR Illegal State
Line 9311: PlmnSearchFail Ind built - %d unique PlmnIds found
Line 9330: Num Unique PLMN Id's is: %d and it is > 64
Line 9348: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 9353: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 9444: ERROR stopping TPlmnSearchBackOff Timer
Line 9529: Add TddLastUsedFreq
Line 9596: ERROR Illegal State
Line 9603: save RrcSelectPlmn Request (%d)
Line 9665: ERROR stopping TimerKeepBplmnOp
Line 9671: Classname:TddCellSelecter: ERROR Illegal State
Line 9684: Classname:TddCellSelecter: ERROR Illegal State
Line 9692: [BPLMN] ERROR Illegal State
Line 9701: Classname:TddCellSelecter: ERROR Illegal State
Line 9761: No network data in USIM - stored TddNetwork instance not created
Line 9800: [IdleOOSSelectingPlmn_SelectableCellNotFound] rrc_Class_TddBplmnHandler_GenerateAbort is NULL Returned
Line 9824: [IdleOOSSelectingPlmn_SelectableCellNotFound] rrc_Class_Scnx_GenerateamEstReject is NULL Returned
Line 9838: [IdleOOSSelectingPlmn_SelectableCellNotFound] rrc_Class_Scnx_GenerateamEstReject is NULL Returned
Line 9851: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 9856: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 9892: checking band search status and Maxband: Band %d. Max band=%d
Line 9971: ERROR Illegal State
Line 9991: ERROR Illegal State
Line 10012: Debug Print: UE stuck Issue Reproduced
Line 10056: HandoverFreq(%d) is not supported in this manual band selection mode
Line 10066: ERROR Illegal State
Line 10074: ERROR TddHandoverFreqPtr is NULL
Line 10078: Classname:TddCellSelecter: ERROR Illegal State
Line 10118: HandoverFreq(%d) is not supported in this manual band selection mode
Line 10128: ERROR Illegal State
Line 10136: ERROR TddHandoverFreqPtr is NULL
Line 10140: Classname:TddCellSelecter: ERROR Illegal State
Line 10216: Serving Cell Rejected. Cause=%d
Line 10220: SIB1 or MIB is NULL
Line 10231: CELL REJECT CAUSE = %d
Line 10269: ERROR Illegal State
Line 10295: CELL REJECT CAUSE = %d
Line 10335: ERROR Illegal State
Line 10374: ----- BackGround PLMN search is not handled in this state -----
Line 10405: ERROR stopping TimerKeepBplmnOp
Line 10439: Automatic search requested
Line 10452: ERROR Illegal State
Line 10457: ERROR Illegal ManualAutomatic value: %i
Line 10537: [BPLMN] We already have a BPLMN Handler. Reuse it
Line 10569: ----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 10608: [BPLMN] BPLMN Handler created (Single Rat Search Requested %d)
Line 10621: [BPLMN] Updating the DetecteNetworkPointer
Line 10629: [BPLMN] No detectedNetworkPointer
Line 10641: ERROR Illegal State
Line 10648: [BPLMN] Usim is not accessible, Initiating BPLMN search Request.
Line 10660: ERROR Illegal State
Line 10668: ERROR Illegal State
Line 10681: NumFastHplmnFreq is Zero
Line 10695: [BPLMN] Initiating the BPLMN search for FastHplmnFreq
Line 10709: [BPLMN] ERROR Illegal State
Line 10717: [BPLMN] Initiating the BPLMN search for Manual request
Line 10735: [BPLMN] ERROR Illegal State
Line 10747: ----- BPLMN request rejected from DSRC, sending Fail_ind to NAS-----
Line 10754: [DSDS] BPLMN Waiting for Resource Response
Line 10766: Unable to action PlmnList request since Cell Reselection is in progress
Line 10816: ----- ForeGround PLMN search is being handled -----
Line 10831: ERROR Illegal State
Line 10837: ERROR Illegal ManualAutomatic value: %i
Line 10851: ERROR stopping TimerKeepBplmnOp
Line 10905: ERROR Illegal State
Line 10914: ERROR Illegal State
Line 10925: ERROR Illegal State
Line 10974: ERROR Illegal State
Line 11016: ERROR Illegal State
Line 11132: ERROR Illegal State
Line 11242: NasTriggeredMCCDetection_PlmnIdReadSuccess: UniquePLMN's is 0.. something wrong
Line 11266: ERROR Illegal State
Line 11279: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 11284: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 11304: AllBandSearchValue- %d 
Line 11334: ERROR Illegal State
Line 11350: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 11355: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 11391: ERROR Illegal State
Line 11419: Nirmala: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 11510: No USIM network parameters read - doing a Stored Search
Line 11559: No Stored Freq available
Line 11566: ERROR Illegal State
Line 11577: ERROR Illegal State
Line 11761: Redirection from GSM
Line 11776: TddCellSelecter_p->TddDetectedNetworkPtr is NULL
Line 11804: Not Suported Band %d  
Line 11810: Not Suported Band %d 
Line 11818: Frequency %d is barred 
Line 11841: Cell Freq %d PSC %d is barred 
Line 11852: Redirection Candidate: Cell Freq %d PSC %d
Line 11860: Redirection Candidate: Cell Freq %d
Line 11878: ERROR Illegal State
Line 11936: ERROR Illegal State
Line 11965: ERROR Illegal State
Line 11982: QFR Resel from GSM. 2g has not measured any 3g cells
Line 11997: TddCellSelecter_p->TddDetectedNetworkPtr is NULL
Line 12025: Not Suported Band %d  
Line 12031: Not Suported Band %d 
Line 12039: Frequency %d is barred 
Line 12044: Redirection Candidate: Cell Freq %d
Line 12075: ERROR Illegal State
Line 12089: ERROR Illegal State
Line 12137: ERROR Illegal State
Line 12147: Waiting for DSRC response for IRATResel
Line 12185: FrequencyIsValid is FALSE
Line 12199: Update Fdd Network Cache with the Serving Cell Retested Band SelectedBandId = %d
Line 12231: Received QFR Cell Reselection Req
Line 12241: Classname:TddCellSelecter: ERROR Illegal State
Line 12251: Received RemainingBarredTime = %d sec
Line 12261: ERROR Illegal State
Line 12281: G2U_resel:%d, G2U_redir:%d, G2U_resel_fail:%d, G2U_redir_fail:%d
Line 12320: ERROR Illegal State
Line 12332: Waiting for DSRC response for IRATResel
Line 12358: AwaitingInitialRequest_CellReselToUtranReqFromLte
Line 12359: Received UARFCN = %d
Line 12360: Received PSC = %d
Line 12364: NumberOfCells = %d
Line 12380: Classname:TddCellSelecter: ERROR Illegal State
Line 12385: NumberOfCells = %d
Line 12448: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 12453: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 12473: Classname:TddCellSelecter: ERROR Illegal State
Line 12504: Classname:TddCellSelecter: ERROR Illegal State
Line 12529: InterLteRatReselectingCell_SelectableCellNotFound : RetCode(%d)
Line 12542: InterLteRatReselectingCell_SelectableCellNotFound : MONITOREDCELL_WRONG_CSGID(%d)
Line 12562: ERROR unexpected return code: %i from cell suitability check
Line 12573: ERROR Illegal State
Line 12635: ERROR unexpected return code: %i from cell suitability check
Line 12645: ERROR Illegal State
Line 12723: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 12728: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 12734: ERROR Illegal State
Line 12737: Could not camp on to cells on Redirection freq
Line 12770: ERROR Illegal State
Line 12781: InterRatReselectingCell_SelectableCellNotFound: sending rrc_URRC_GRR_CellReselectionToUtranFailed
Line 12834: ERROR unexpected return code: %i from cell suitability check
Line 12846: ERROR Illegal State
Line 12867: G2U_resel:%d, G2U_redir:%d, G2U_resel_fail:%d, G2U_redir_fail:%d
Line 12896: CandidateCellPtr is NULL
Line 12918: CandidateCellPtr is NULL
Line 12944: ERROR unexpected return code So CellReselToUtranFailMsgPtr = NULL 
Line 12973: ERROR unexpected return code So CellReselToUtranCnfFromLteMsgPtr = NULL 
Line 13021: Classname:TddCellSelecter: ERROR Illegal State
Line 13048: Classname:TddCellSelecter: ERROR Illegal State
Line 13071: Classname:TddCellSelecter: ERROR Illegal State
Line 13222: UL3.Etc.tdd max_band = %d
Line 13225: UL3.Etc.Storing tdd Last Camped Bands = {%d, %d, %d, %d, %d}
Line 13229: TddCellSelecter_p->TddMaxBand = %d
Line 13232: TddCellSelecter_p->TddStoredBands = {%d, %d, %d, %d, %d}
Line 13265: ERROR Illegal State
Line 13300: Nirmala: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 13388: ReadingUsimNetPar_NetworkParameterReadDone[NON FATAL ERROR] ReadRspIlmId = NULL
Line 13432: [BPLMN] Freqs found in SIM = %d
Line 13437: [BPLMN] Freqs to be scanned = %d
Line 13443: [BPLMN] No network data in USIM.
Line 13445: [BPLMN] Initiating BPLMN search Request.
Line 13457: ERROR Illegal State
Line 13465: ERROR Illegal State
Line 13508: ERROR Illegal State
Line 13523: ERROR Illegal State
Line 13539: ERROR Illegal State
Line 13545: No network data in USIM - stored TddNetwork instance not created
Line 13551: ERROR Illegal State
Line 13590: Classname:CellSelecter: ERROR Illegal State
Line 13597: Classname:CellSelecter: ERROR Illegal State
Line 13645: ERROR Illegal State
Line 13652: TddCellSelecter: ERROR Illegal State: %d
Line 13678: TddCellSelecter: ERROR Illegal State: %d
Line 13731: ERROR Illegal State
Line 13757: ERROR Illegal State
Line 13814: ----- BackGround PLMN search is not handled in this state -----
Line 13819: [DSDS] BPLMN Waiting for Resource Response
Line 13868: -----  BackGround PLMN search is not handled in this state -----
Line 13873: [DSDS] BPLMN Waiting for Resource Response
Line 13908: ERROR Illegal State
Line 13920: GenMsg is NULL
Line 13946: ERROR Illegal State
Line 13958: GenMsg is NULL
Line 13989: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 13996: ERROR Illegal State
Line 14001: No BPLMN Handler
Line 14017: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 14025: ERROR Illegal State
Line 14063: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 14068: ERROR Illegal State
Line 14107: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 14114: ERROR Illegal State
Line 14128: ERROR Illegal State
Line 14158: ERROR Illegal State
Line 14186: ERROR Illegal State
Line 14211: ERROR Illegal State
Line 14290: CellSelecter: ERROR Illegal State: %d
Line 14299: ERROR Illegal State
Line 14315: ERROR stopping TimerKeepBplmnOp
Line 14355: ERROR stopping TimerKeepBplmnOp
Line 14391: CellSelecter: ERROR Illegal State: %d
Line 14400: ERROR Illegal State
Line 14432: ERROR stopping TimerKeepBplmnOp
Line 14468: CellSelecter: ERROR Illegal State: %d
Line 14477: ERROR Illegal State
Line 14543: Successfully started TimerKeepBplmnOp(%d sec)
Line 14547: Could not start TimerKeepBplmnOp(%d sec)
Line 14555: No BPLMN Handler
Line 14563: CellSelecter: ERROR Illegal State: %d
Line 14572: ERROR Illegal State
Line 14611: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 14641: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 14689: GenMsg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 14696: ERROR Illegal State
Line 14744: ----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 14799: GenMsg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 14806: ERROR Illegal State
Line 14854: ----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 14908: ERROR stopping TimerKeepBplmnOp
Line 14929: [BPLMN] BPLMN Handler created
Line 14938: [BPLMN] ERROR Illegal State
Line 14949: [DSRC REJECT]----- BackGround PLMN search is not handled in this state -----
Line 14954: [DSDS] BPLMN Waiting for Resource Response
Line 14964: ----- PCH not configured. BackGround PLMN search is not handled in this state -----
Line 15005: [BPLMN] BPLMN Handler created
Line 15014: [BPLMN] ERROR Illegal State
Line 15025: [DSRC Reject]----- BackGround PLMN search is not handled in this state -----
Line 15028: ----- DrxUpdateReq is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 15035: [DSDS] BPLMN Waiting for Resource Response
Line 15046: ----- BackGround PLMN search is not handled in this state -----
Line 15049: ----- DrxUpdateReq is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 15084: GenMsg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 15091: ERROR Illegal State
Line 15139: ----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 15168: GenMsg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 15175: ERROR Illegal State
Line 15222: ----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 15275: [BPLMN] BPLMN Handler created
Line 15291: [DSRC Reject]----- BackGround PLMN search is not handled in this state -----
Line 15296: [DSDS] BPLMN Waiting for Resource Response
Line 15306: ----- PCH not configured. BackGround PLMN search is not handled in this state -----
Line 15351: [BPLMN] BPLMN Handler created
Line 15367: [DSRC Reject]----- BackGround PLMN search is not handled in this state -----
Line 15372: [DSDS] BPLMN Waiting for Resource Response
Line 15382: ----- PCH not configured. BackGround PLMN search is not handled in this state -----
Line 15397: re-post the saved RrcSelectPlmn Request (%d)
Line 15412: re-post the saved RrcSelectPlmn Request (%d)
Line 15504: Ignore RetestBarredCellFreq (Freq %d) : No CheckingCellSuitabilityInProgress
Line 15510: Ignore RetestBarredCellFreq (Freq %d) : No DetectedNetwork
Line 15568: ERROR stopping TimerKeepBplmnOp
Line 15649: ERROR Illegal State
Line 15684: ----- ForeGround PLMN LIST REQ reposted to TddCellSelecter -----
Line 15723: Band is %d, RXlev is %d,index is %d
Line 15748: Num Unique PLMN Id's is: %d and it is > 64
Line 15775: Band is %d, RXlev is %d,index is %d
Line 15800: Num Unique PLMN Id's is: %d and it is > 64
Line 15820: Band is %d, RXlev is %d,index is %d
Line 15826: Num Unique PLMN Id's is: %d and it is > 64
Line 15852: Num Unique PLMN Id's is: %d and it is > 64
Line 15869: Num Unique PLMN Id's is: %d and it is > 64
Line 15881: PlmnList Ind built - %d unique PlmnIds found
Line 15896: Num Unique PLMN Id's is: %d and it is > 64
Line 15905: PlmnListIndPtr cannot be created
Line 15920: NoCell built - %d unique PlmnIds found
Line 15935: Num Unique PLMN Id's is: %d and it is > 64
Line 15947: NoCellIndPtr cannot be created
Line 15966: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 15971: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 15977: ERROR Illegal State
Line 16031: [DS_CELL_SEL] ERROR Illegal State in RrcSelectingCell_PauseSearchReq
Line 16039: [DS_CELL_SEL] ERROR Illegal State in RrcSelectingCell_PauseSearchReq
Line 16099: [DS_CELL_SEL] %s
Line 16103: [DS_CELL_SEL] ERROR Illegal State in SelectingPlmn_PauseSearchReq
Line 16115: [DS_CELL_SEL] T_SearchOff Started
Line 16119: [DS_CELL_SEL] Failed to Start T_SearchOff
Line 16166: [DS_CELL_SEL] T_SearchOff Started
Line 16170: [DS_CELL_SEL] Failed to Start T_SearchOff
Line 16181: [DS_CELL_SEL] ERROR Illegal State in RrcSelectingCell_PauseSearchReq
Line 16209: [DS_CELL_SEL] ERROR Illegal State in RrcSelectingCell_PauseSearchReq
Line 16217: [DS_CELL_SEL] ERROR Illegal State in RrcSelectingCell_PauseSearchReq
Line 16228: [DS_CELL_SEL] T_SearchOff Started
Line 16232: [DS_CELL_SEL] Failed to Start T_SearchOff
Line 16314: [DS_CELL_SEL] T_SearchOff Started
Line 16318: [DS_CELL_SEL] Failed to Start T_SearchOff
Line 16332: [DS_CELL_SEL] ERROR Illegal State in DetectingPlmnIds_PauseSearchReq
Line 16339: [DS_CELL_SEL] ERROR Illegal State in DetectingPlmnIds_PauseSearchReq
Line 16387: [DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
Line 16394: [DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
Line 16437: [DS_CELL_SEL] T_SearchOn Started
Line 16441: [DS_CELL_SEL] Failed to Start T_SearchOn
Line 16449: [DS_CELL_SEL] Time sliced search is aleady ongoing
Line 16454: [DS_CELL_SEL] Ignore TimeSlicedSearchOn is non Discrete CellSearch (%d)
Line 16481: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 16486: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 16515: [DS_CELL_SEL] T_SearchOff Started
Line 16519: [DS_CELL_SEL] Failed to Start T_SearchOff
Line 16527: [DS_CELL_SEL] Time sliced search is aleady ongoing
Line 16532: [DS_CELL_SEL] ignore TimeSlicedSearchOn is non Discrete CellSearch (%d)
Line 16560: GenMsg is NULL
Line 16581: [DS_CELL_SEL] T_SearchOn Started
Line 16585: [DS_CELL_SEL] Failed to Start T_SearchOn
Line 16617: [DS_CELL_SEL] T_SearchOff Started
Line 16621: [DS_CELL_SEL] Failed to Start T_SearchOff
Line 16707: [DS_CELL_SEL] ERROR Illegal State in Ready_PauseSearchReq
Line 16742: [DS_CELL_SEL] ERROR Illegal - CandidateCellPtr is NULL
Line 16748: [DS_CELL_SEL] ERROR Illegal State in Ready_PauseSearchReq
Line 16757: [DS_CELL_SEL] BCH was open when paused
Line 16766: ERROR Illegal State
Line 16771: [DS_CELL_SEL] Serious Coding Error
Line 16776: [DS_CELL_SEL] Serious Coding Error : PausedScanProc (%d)
Line 16786: [DS_CELL_SEL] T_SearchOn Started
Line 16790: [DS_CELL_SEL] Failed to Start T_SearchOn
Line 16865: [DS_CELL_SEL] SelectableCellFound in unexpected state: (%s) 
Line 16883: [DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
Line 16910: [DS_CELL_SEL] SelectableCellFound in unexpected state: (%s) 
Line 16964: [DS_CELL_SEL] SelectableCellNotFound in unexpected state: (%s) 
Line 16992: [DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
Line 17027: [DS_CELL_SEL] SelectableCellNotFound in unexpected state: (%s) 
Line 17067: [DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
Line 17074: [DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
Line 17119: PlmnSearchReq rcvd for ANY_PLMN, nastrigerredanyplmnsearch is true
Line 17142: PlmnSearchReq rcvd for ANY_PLMN, nastrigerredanyplmnsearch is true
Line 17203: [DS_CELL_SEL] Serious Coding Error : CellSelecter's State (%d)
Line 17210: [DS_CELL_SEL] ERROR Illegal State in Ready_PauseSearchReq
Line 17242: [DS_CELL_SEL] Serious Coding Error : CellSelecter's State (%d)
Line 17269: [DS_CELL_SEL] Serious Coding Error : CellSelecter's State (%d)
Line 17297: [DS_CELL_SEL] T_SearchOff Started
Line 17301: [DS_CELL_SEL] Failed to Start T_SearchOff
Line 17309: [DS_CELL_SEL] Time sliced search is aleady ongoing
Line 17314: [DS_CELL_SEL] Ignore TimeSlicedSearchOn is non Discrete CellSearch (%d)
Line 17325: [DS_CELL_SEL] Abort Cell detection processed
Line 17350: GenMsg is NULL
Line 17381: [DS_CELL_SEL] ScanOperation : PAUSE
Line 17384: [DS_CELL_SEL] ScanOperation : ABORT
Line 17895: rrc_TddCellSelecter_MapExtMsgIdToIntMsgId: 
Line 18011: [Dedicated Priority Info received from other RAT] PLMN ID(0x%X, 0x%X, 0x%X), Start Time(%d ms), Duration(%d min)
Line 18079: UMTS TDD(%d) - Not supported
Line 18084: GERAN(%d) - Not supported
Line 18097: T322 validity check failed, so URRC ignores all the Dedicated Priority Info
Line 18124: DePrioritise Info is present
Line 18143: DeprioType: %d, T325_duration : %d
Line 18155: DePrioritise : CellSelecter_p->DePrioritiseStatus set to %d
Line 18160: DePrioritise : Fails to start T325
Line 18179: DePrioritiseInfoList[%d]: EARFCN %d
Line 18186: DePrioritise : CellSelecter_p->DePrioritiseStatus set to %d
Line 18191: DePrioritise : Fails to start T325
Line 18204: Unknown DeprioType(%d) NumDeprioFreq(%d) !!!
Line 18232: Start time(%d ms), Duration(%d min), Current time(%d ms)
Line 18247: No proper T322 duration, so Clear the Dedicated Priority Info
Line 18252: T322 Duration is 0, so Dedicated Priority Info is valid until the next Update
Line 18257: No proper T322 information, it can't be started
Line 18280: No proper T322 information, it can't be started
Line 18299: Plmn Selection Complete received - no action taken
Line 18323: LCSFREQAIDREQ to TddCellSelecter
Line 18413: ERROR Unexpected State Change Notification
Line 18426: CnxMgr indicates active state transition to Cell_Fach - reenabling interFrequency Cell Reselection
Line 18432: ERROR Unexpected State Change Notification
Line 18497: ERROR Illegal State
Line 18549: ERROR Illegal State
Line 18601: RecvCheckCellSuitableReq: UARFCN %d PSC %d IsCellBarred(%d) RemainingBarredTime = %d sec
Line 18677: [SyncInfoAvailable] %d -> %d
Line 18684: [SyncInfoAvailable] %d
Line 18696: rrc_Class_TddPlmnSelecter_GetInstanceId: 
Line 18733: CELL REJECT CAUSE = %d
Line 18751: ERROR Illegal State
Line 18772: CELL REJECT CAUSE = %d
Line 18790: ERROR Illegal State
Line 18824: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 18840: ERROR Illegal State
Line 18871:  SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 18887: ERROR Illegal State
Line 19009: UrrcMruReset for [SIMID %d]
Line 19100: Equivalent PlmnId 0x%X, 0x%X, 0x%X added to list
Line 19120: Target PlmnId 0x%X, 0x%X, 0x%X added to list
Line 19138: Target PlmnId is NULL or Target PlmnId is same as Selected PlmnId
Line 19186: First MRU Frequency %d
Line 19234: Band is %d, RXlev is %d,index is %d
Line 19259: Num Unique PLMN Id's is: %d and it is > 64
Line 19279: Band is %d, RXlev is %d,index is %d
Line 19285: Num Unique PLMN Id's is: %d and it is > 64
Line 19311: Num Unique PLMN Id's is: %d and it is > 64
Line 19328: Num Unique PLMN Id's is: %d and it is > 64
Line 19338: PlmnList Ind built - %d unique PlmnIds found
Line 19353: Num Unique PLMN Id's is: %d and it is > 64
Line 19362: PlmnListIndPtr cannot be created
Line 19371: NoCell built - %d unique PlmnIds found
Line 19386: Num Unique PLMN Id's is: %d and it is > 64
Line 19400: NoCellIndPtr cannot be created
Line 19406: ERROR Illegal State
Line 19422: ERROR Illegal State
Line 19506: SIM %d supports PS, do not reuse serving of peer SIM
Line 19512: Peer SIM (%d) access mode is different
Line 19523: Peer SIM's(%d) rrc_CnxMgr_p OR  ServingCell_p OR PeerSelectedPlmnInstId OR TddServingCellSelReselInfo_p is NULL
Line 19530: Peer SIM (%d) is not in right state to reuse serving cell
Line 19537: Peer SIM (%d)Rscp < -80
Line 19543: Peer SIM (%d) is not suitably camped
Line 19554: Peer SIM Cell's LAI(%x) found in Forbidden list
Line 19568: Peer SIM (%d) PLMN is not equivalent to target PLMN
Line 19581: Peer SIM (%d) serving cell is in barred list (%d, %d)
Line 19593: Trying Same Cell Selection (%d, %d) from SIM(%d) [0x%x]
