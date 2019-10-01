Line 181: Frequency: ResetCellList
Line 228: rrc_TddFrequency_free : Frequency_p->CandCellPtr 0x%X 
Line 321: UmtsCellSelectionMeasurement: Config message add cell: %s
Line 332: UmtsCellSelectionMeasurement: Config message No Cell Found:
Line 386: Created IntraFrequency (%d) instance from %d SibCellInfoList cells
Line 391: CellInfoPtr is NULL
Line 430: Created InterFrequency (%d) instance from %d SibCellInfoList cells
Line 554: [TddFrequency] current cell index %d
Line 571: [TddFrequency] Suitable Candidate
Line 578: [TddFrequency] Suitable Candidate (Any PLMN SEARCH: consider all cells)
Line 607: [TddFrequency] %d PlmnIds will be updated from BarredList
Line 680: [TddFrequency] freq %d is barred
Line 822: Frequency_p->CurrentCellIx is %d  and it is > 32
Line 863: Cpich (%i) already in Frequency (%i)
Line 872: CellInfoPtr is NULL in rrc_TddFrequency_AddCellTo
Line 906: Shared PLMN is not selectable
Line 910: Shared PLMN is Selectable, Hence Frequency can be camped on
Line 938: rrc_TddFrequency_isSelectableFreq - ARFCN %i FrequencySelected %i
Line 950: Overwriting existing cell entry
Line 966: UARFCN%i CellList (NumCells %d, InsertIx %d, CurrentCellIx %d)
Line 970: CellList[%i] - Cell Param Id %i 
Line 993: BuildCellListFromMeasInd[NON FATAL ERROR] Frequency_p->NumCells is greater than FREQUENCY_MAXCELLS
Line 1006: Setting measurements for (%i, %i): Rscp: %i = Rscp(%i) + delta Rscp(%i) dBm, EcN0: %i dB
Line 1050: Remove CellList[%d](ARFCN%i/Cell Param Id%i)
Line 1096: Frequency_p->NumCells is %d  and it is > 32
Line 1140: Loaded Intrafrequency cell (URRC_CELLSEL, %i) into index %i of NetPar IntraFreq array
Line 1186: Loaded Intrafrequency cell (URRC_CELLSEL, %i) into index %i of NetPar IntraFreq array
Line 1224: Requested Stored Cell Search on frequency: %i
Line 1233: ERROR Illegal State
Line 1290: ERROR Illegal State
Line 1332: ERROR Illegal State
Line 1338: No BPLMN activity
Line 1346: ERROR Illegal State
Line 1358: ERROR Illegal State
Line 1371: ERROR Illegal State
Line 1385: ERROR Illegal State
Line 1431: [rrc_TddFrequency::AwaitingStoredSearchInd_CuphyStoredCellSearchCnf] INFO - Negative confirmation
Line 1442: [rrc_TddFrequency::AwaitingStoredSearchInd_CuphyStoredCellSearchCnf] INFO - Positive confirmation
Line 1474: ERROR Illegal State
Line 1504: ERROR Illegal State
Line 1543: DefaultState_AbortStoredSearchOn : Abort Stored Cell Search Received in the Deafult State Sending Response
Line 1561: DefaultState_AbortCellSelectionOn : Abort Cell Selection Received in the Deafult State Sending Response
Line 1628: [rrc_TddFrequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Negative confirmation
Line 1639: [rrc_TddFrequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Positive confirmation
Line 1733: CheckingNextCandidate unexpected result %d 0x%X 
Line 1802: CheckingCellSuitability_AbortCellSelectionOn : Aborting CandCellPtr
Line 1807: ERROR Illegal State
Line 2082: [TddFrequency] Suitable candidate cell found (Freq %d, CellParamId %d)
Line 2094: ERROR Illegal State
Line 2099: [TddFrequency] No suitable candidate cell found on frequency: %i
Line 2126: [URRC SR_IF DSDS]Sending Abort Req to Tphy
Line 2133: ERROR Illegal State
Line 2186: ERROR Illegal State
Line 2223: [URRC SR_IF DSDS]Sending Abort Req to Tphy
Line 2230: ERROR Illegal State
Line 2357: rrc_TddFrequency_MapExtMsgIdToIntMsgId 
Line 2362: rrc_TddFrequency_MapExtMsgIdToIntMsgId 
Line 2377: Illegal rrc_TddFrequency_MapExtMsgIdToIntMsgId
Line 2422: ERROR Illegal State
Line 2445: BuildTddCellListFromMeasInd[NON FATAL ERROR] Frequency_p->NumCells is greater than FREQUENCY_MAXCELLS
Line 2465: Setting measurements for (%i, %i):Rscp: %i = Rscp(%i) + delta Rscp(%i) dBm
Line 2522: DynamicDuplexModeUpdate : %i
Line 2542: Serving Cell Param Id In DCH (%i, %i)
Line 2543: Target Cell Param Id (%i, %i)
Line 2561: Requested Uarfcn  : %i, Target Uarfcn :  %i
Line 2568: Cell Param Id : %i, Target Cell Param Id :	%i
Line 2579: Cell Param Id : %i, Target Cell Param Id :	%i
Line 2582: Best PccpchRscp : %i, Target PccpchRscp :  %i
Line 2628: Adding cellParamId %i to Frequency %i (Rscp: %i dBm Snr: %i)
Line 2635: Rejected Frequency %i, Cpich %i as a cell selection candidate due to low Cpich Rscp: %i dBm
Line 2707: Error: Cannot find SIB1 from SCellSysInfoIdx(%i)
Line 2720: Same LAI found (ARFCN%i/CellParamId%i)(Serving LAC 0x%x, Current LAC 0x%x)
Line 2727: LAI Not matched (ARFCN%i/CellParamId%i)(Serving LAC 0x%x, Current LAC 0x%x)
Line 2743: StoredCellSearch is in progress
