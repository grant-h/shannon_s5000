Line 200: rrc_Frequency_free : Frequency_p->CandCellPtr 0x%X 
Line 348: UmtsCellSelectionMeasConfig: Add cell: %s
Line 405: Created IntraFrequency (%d) instance from %d SibCellInfoList cells
Line 410: CellInfoPtr is NULL
Line 449: Created InterFrequency (%d) instance from %d SibCellInfoList cells
Line 542: BPLMN:  Cell %i is Serving, hence not Searched in Background
Line 624: %d PlmnIds will be updated from BarredList
Line 690: [rrc_Frequency_GetBestSelectionCandidateOn] freq %d is barred
Line 821: Frequency_p->CurrentCellIx is %d  and it is > 32
Line 861: Cpich (%i) already in Frequency (%i)
Line 867: CellInfoPtr is NULL in rrc_Frequency_AddCellTo
Line 955: Shared PLMN is not selectable
Line 959: Shared PLMN is Selectable, Hence Frequency can be camped on
Line 987: rrc_Frequency_isSelectableFreq - ARFCN %i FrequencySelected %i
Line 1010: Overwriting existing cell entry
Line 1024: UARFCN%i CellList (NumCells %d, InsertIx %d, CurrentCellIx %d)
Line 1041: BuildCellListFromMeasInd[NON FATAL ERROR] Frequency_p->NumCells is greater than FREQUENCY_MAXCELLS
Line 1055: Setting measurements for (%i, %i): Rscp: %i = Rscp(%i) + delta Rscp(%i) dBm, EcN0: %i dB
Line 1131: Adding Cpich %i to Frequency %i Rscp: %i dBm, DeltaRscp: %i dBm, EcN0: %i dB
Line 1138: Rejected Frequency %i, Cpich %i as a cell selection candidate due to low Cpich Rscp: %i dBm, DeltaRscp: %i dBm, EcN0: %i dB (Idx: %d)
Line 1156: Adding Cpich %i to Frequency %i Rscp: %i dBm, EcN0: %i dB
Line 1163: Rejected Frequency %i, Cpich %i as a cell selection candidate due to low Cpich EcIo: %i dBm
Line 1181: Remove CellList[%d](ARFCN%i/PSC%i)
Line 1213: [BPLMN] Build Cell List
Line 1234: Frequency_p->NumCells is %d  and it is > 32
Line 1271: Frequency_p->NumCells is %d  and it is > 32
Line 1335: Based on LAC[%d] match, moved the cell : Freq[%d] Cpich[%d] from ListIdx[%d] to top[%d] of the Sorted Cell List
Line 1340: PriortizeSameLACCells: Different LA Cell not prioritized: Cell LAC[%d] Cell Freq[%d] Cell Cpich[%d]
Line 1379: Frequency_p->NumCells is %d  and it is > 32
Line 1437: No Cell available
Line 1450: Invalid BandId of TargetCell (%d)
Line 1457: Uarfcn %d, Sir %d (Sir + BandOffset(%d))
Line 1462: Frequency_p->NumCells is %d  and it is > 32
Line 1494: Loaded Intrafrequency cell (URRC_CELLSEL, %i) into index %i of NetPar IntraFreq array
Line 1538: Loaded Interfrequency cell (URRC_CELLSEL, %i) into index %i of NetPar InterFreq array
Line 1576: Requested Freq Cell Search on frequency: %i
Line 1585: ERROR Illegal State
Line 1643: ERROR Illegal State
Line 1679: BPLMN Initiating Cell Search on : %i
Line 1687: ERROR Illegal State
Line 1692: No BPLMN activity
Line 1700: ERROR Illegal State
Line 1713: ERROR Illegal State
Line 1726: ERROR Illegal State
Line 1739: ERROR Illegal State
Line 1778: [rrc_Frequency::AwaitingFreqSearchInd_CuphyFreqCellSearchCnf] INFO - Negative confirmation
Line 1788: [rrc_Frequency::AwaitingFreqSearchInd_CuphyFreqCellSearchCnf] INFO - Positive confirmation
Line 1817: ERROR Illegal State
Line 1845: ERROR Illegal State
Line 1873: Build Cell List
Line 1923: DefaultState_AbortFreqSearchOn : Abort Stored Cell Search Received in the Deafult State Sending Response
Line 1939: DefaultState_AbortCellSelectionOn : Abort Cell Selection Received in the Deafult State Sending Response
Line 1988: [rrc_Frequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Negative confirmation
Line 1997: [rrc_Frequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Positive confirmation
Line 2080: CheckingNextCandidate unexpected result %d 0x%X 
Line 2135: CheckingCellSuitability_AbortCellSelectionOn : PlmnSearchAbortCause(PlmnSearchAbortForTimeout)! So, wait for this suitability checking results
Line 2156: CheckingCellSuitability_AbortCellSelectionOn : Aborting CandCellPtr
Line 2162: ERROR Illegal State
Line 2277: CheckingCellSuitability_AbortCellSelectionOn : Current Abort Cause - PlmnSearchAbortForTimeout. Wait for this results
Line 2505: ERROR Illegal State
Line 2510: No suitable cell selection candidates found on frequency: %i
Line 2536: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 2543: ERROR Illegal State
Line 2592: ERROR Illegal State
Line 2634: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 2641: ERROR Illegal State
Line 2826: ERROR Illegal State
Line 2841: StoredCellSearch is in progress
