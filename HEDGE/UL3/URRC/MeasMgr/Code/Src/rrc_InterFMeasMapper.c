Line 166: InterFMapper FREED
Line 238: TerminateMeasurement: MeasInstId is NULL
Line 241: [rrc_InterFMeasMapper_TerminateMeasurement]:	MID %d
Line 260: [rrc_InterFMeasMapper_TerminateMeasurement]:InterFMeasMapper_p MID(%d) will be terminated
Line 261: [rrc_InterFMeasMapper_TerminateMeasurement]:InterFMeasMapper_p->ConfiguredMids = 0X%x
Line 264: [rrc_InterFMeasMapper_TerminateMeasurement]:InterFMeasMapper_p->ServingFreqMidBitmap = 0X%x
Line 270: [rrc_InterFMeasMapper_TerminateMeasurement]:XInterFMeas will be terminated
Line 276: [rrc_InterFMeasMapper_TerminateMeasurement]:This MID(%d) is not configured in XIntraFMidBitMap(0x%x)
Line 285: [rrc_InterFMeasMapper_TerminateMeasurement]:InterFMeasMapper_p MID(%d) wasn't configured
Line 290: [rrc_InterFMeasMapper_TerminateMeasurement]:There is no MID to be terminated
Line 300: [rrc_InterFMeasMapper_TerminateMeasurement]:MID %d released at UPHY
Line 324: [rrc_InterFMeasMapper_TerminateMeasurement]: Remove Nfreq TID Failed , TID = %d FirstConfMID = %d
Line 329: [rrc_InterFMeasMapper_TerminateMeasurement]: isNfreqSet is FALSE
Line 338: [rrc_InterFMeasMapper_TerminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 343: [rrc_InterFMeasMapper_TerminateMeasurement]: TID = 0 for FirstConfMID = %d
Line 365: [rrc_InterFMeasMapper_TerminateMeasurement]:First Configured MID Change [%d] -> [%d]
Line 403: DlUarfcn(%d) is not listed on add-array bacause the array is full
Line 415: [rrc_InterFMeasMapper_TerminateMeasurement]: No Cells to Config
Line 439: There is more MIDs(0x%X) left
Line 477: DlUarfcn(%d) is not listed on remove-array bacause the array is full
Line 488: [rrc_InterFMeasMapper_TerminateMeasurement]: No Cells to Remove
Line 524: [rrc_InterFMeasMapper_DoMeasurement]:  MID %d
Line 530: [rrc_InterFMeasMapper_DoMeasurement]:InterFMeasMapper_p MID(%d) will be modified
Line 538: [rrc_IntraFMeasMapper_DoTddMeasurement]:XIntraFMeas(0x%x) will be modified
Line 542: [rrc_IntraFMeasMapper_DoTddMeasurement]: ServingFreq Needed -> MID(%d) is newly added into XIntraFMidBitmap
Line 549: [rrc_IntraFMeasMapper_DoTddMeasurement]: ServingFreq Not Needed -> MID(%d) is reset in XIntraFMidBitmap
Line 559: [rrc_InterFMeasMapper_DoMeasurement]:InterFMeasMapper_p MID(%d) will be configured
Line 560: [rrc_InterFMeasMapper_DoMeasurement]:InterFMeasMapper_p->ConfiguredMids = 0X%x
Line 566: [rrc_InterFMeasMapper_DoMeasurement]:MID %d set, InterFMeasMapper_p->ServingFreqMidBitmap = 0X%x
Line 582: [rrc_InterFMeasMapper_DoMeasurement]:  Before Filtering: REMOVE: uarfcn [%d] = %d, Cell[%d] = %d, Cpich%d 
Line 616: [rrc_InterFMeasMapper_DoMeasurement]: FILTERED FREQ TO REMOVE [%d] = UARFCN %d
Line 619: ####[rrc_InterFMeasMapper_DoMeasurement]: FILTERED CELL TO REMOVE [%d] = PSC[FDD] %d 
Line 626: [rrc_InterFMeasMapper_DoMeasurement]:  Before Filtering: ADD: uarfcn [%d] = %d, Cell[%d] = %d,Cpich[FDD]%d 
Line 660: [rrc_InterFMeasMapper_DoMeasurement]: FILTERED FREQ TO ADD [%d] = UARFCN %d
Line 663: ####[rrc_InterFMeasMapper_DoMeasurement]: FILTERED CELL TO ADD [%d] = PSC %d
Line 698: [rrc_InterFMeasMapper_DoMeasurement]: No Cells to Modify
Line 703: [rrc_InterFMeasMapper_DoMeasurement]: ERROR: MeasInst [MID %d] is NULL
Line 731: [rrc_InterFMeasMapper_DoMeasurement]: No Cells to Config
Line 736: [rrc_InterFMeasMapper_DoMeasurement]: ERROR: MeasInst [MID %d] is NULL
Line 749: [rrc_InterFMeasMapper_DoMeasurementModifyCMAlone] INFO.
Line 754: rrc_CUPHY_InterFreq_MeasMod_REQ:ILM Alloc Failed!
Line 797: [rrc_InterFMeasMapper_DoMeasurementModify] INFO.
Line 801:  RepInstId == NULL 
Line 810: [InterFMeasMapper] NFreq Configured
Line 819: [rrc_InterFMeasMapper_DoTddMeasurementModify] PFreqPresent
Line 824: RRC is trying to config IntraFMeas. So release MID 0 if there is any one
Line 827: [rrc_InterFMeasMapper_DoTddMeasurementModify] XIntraFMidBitmap = 0x%x
Line 832: [rrc_InterFMeasMapper_DoTddMeasurementModify] NonPFreqPresent
Line 845: [rrc_InterFMeasMapper_DoTddMeasurementModify] PFreqToRemovePresent
Line 853: [rrc_InterFMeasMapper_DoTddMeasurementModify] NonPFreqToRemovePresent
Line 955: [rrc_InterFMeasMapper_DoMeasurementConfig]:InterFMeasMapper_p MID(%d) will be FIRST configured
Line 959: [rrc_InterFMeasMapper_DoMeasurementConfig]: FIRST configured MID(%d), CURRENT Configuring MID(%d)
Line 964: rrc_CUPHY_IntraFreq_MeasConf_REQ:ILM Alloc Failed!
Line 975: [InterFMeasMapper] NFreq Configured
Line 982: RRC is trying to config IntraFMeas. So release MID 0 if there is any one
Line 986: [rrc_InterFMeasMapper_DoTddMeasurementConfig] PFreqPresent
Line 993: [rrc_InterFMeasMapper_DoTddMeasurementConfig] NonPFreqPresent
Line 1006: [ERR] rrc_CTPHY_IntraFreq_MeasConf_REQ: PFreqPresent:False for XIntraFMid. Check the Scneario
Line 1090: [rrc_InterFMeasMapper_NotifyReport]: UARFCN(%d) has no Cells
Line 1113: [rrc_InterFMeasMapper_NotifyReport]: MID(%d) is not existed, so removed from DB
Line 1119: [rrc_InterFMeasMapper_NotifyReport]:	UARFCN %d Cell %d :  Included in MID %d
Line 1128: MID[%d] Created InterFMeasInd(0x%X)
Line 1146: [rrc_InterFMeasMapper_NotifyReport]: interFreqResultsArray = NULL
Line 1157: [rrc_InterFMeasMapper_NotifyReport]: cellResultsArray = NULL
Line 1172: [rrc_InterFMeasMapper_NotifyReport]FreqInfo is NULL !!
Line 1201: [rrc_InterFMeasMapper_NotifyReport]: WARNING!! NumOfCells exceeding the limit for UARFCN(%d)
Line 1218: [rrc_InterFMeasMapper_NotifyReport]: cellResultsArray = NULL
Line 1233: [rrc_InterFMeasMapper_NotifyReport]FreqInfo is NULL !!
Line 1238: [rrc_InterFMeasMapper_NotifyReport]: WARNING!! NumOfFreqs exceeding the limit for MID %d
Line 1281: [rrc_InterFMeasMapper_NotifyReport]: WARNING!! NumOfFreqs exceeding the limit for MID %d
Line 1295: rrc_InterFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 1330: rrc_InterFMeasMapper_ApplyFilterCoeff:Instance is NULL !
Line 1357: [rrc_InterFMeasMapper_ApplyFilterCoeff] ERROR - Invalid InterFMeasQuantity type [%i].
Line 1556: rrc_InterFMeasMapper_DoTddMeasurementModify:Warning, MCM with Active Cell %d removal command
Line 1572: rrc_InterFMeasMapper_DoTddMeasurementModify:Warning, CFM exist. No need to add Active Cell %d to Mapper for MID %d
Line 1579: rrc_InterFMeasMapper_DoTddMeasurementModify:Warning, Active Cell %d moved to MID %d
Line 1607: [rrc_InterFMeasMapper_AddCell]: Cell ID %d : Uarfcn %d PSC  %d already present : Appended MID %d : MidBitmap = 0X%x
Line 1613: [rrc_InterFMeasMapper_AddCell]: Cell ID %d : Uarfcn %d PSC  %d No Previous MIDs Configured!!
Line 1620: [rrc_InterFMeasMapper_AddCell]: Cell ID %d :PSC MISMATCH !! DB Uarfcn %d PSC  %d  CIL Uarfcn %d PSC %d
Line 1632: [rrc_InterFMeasMapper_AddCell]: Cell ID %d : Uarfcn %d PSC  %d newly added :	MidBitmap = 0X%x
Line 1639: [rrc_InterFMeasMapper_AddCell]: PSC  %d NOT added as Not found in CellInfo List
Line 1653: rrc_MIDMapTable_GetMeasInstId is NULL returned
Line 1669: [rrc_InterFMeasMapper_RemoveCell]: Uarfcn %d PSC %d still configured at UPHY:  MidBitmap = 0X%x
Line 1675: [rrc_InterFMeasMapper_RemoveCell]: Uarfcn %d PSC %d is REMOVED from UPHY
Line 1692: [rrc_InterFMeasMapper_RemoveCell]:Cell Id %d -> Cell Id %d : Uarfcn %d PSC %d is being REPLACED at UPHY
Line 1701: [rrc_InterFMeasMapper_RemoveCell]:PSC %d already Changed from Cell Id %d -> Cell Id %d
Line 1708: [rrc_InterFMeasMapper_RemoveCell]: PSC %d not Found in OLD Saved CIL 
Line 1712: [rrc_InterFMeasMapper_RemoveCell]: Cell Id %d : No Cell To Remove in DB/UPHY
Line 1716: [rrc_InterFMeasMapper_RemoveCell]: Cell Id %d : PSC MISMATCH!! : DB Uarfcn %d PSC %d , CIL Uarfcn %d PSC %d
Line 1734: [rrc_InterFMeasMapper_RemoveCell]: Uarfcn %d PSC %d is being replaced: REMOVE from UPHY
Line 1745: [rrc_InterFMeasMapper_RemoveCell]: Cell Id %d : No Cell To Remove in UPHY
Line 1749: [rrc_InterFMeasMapper_RemoveCell]: Cell Id %d : Cell Not Removed from UPHY : Cell Already replaced: DB(new) Uarfcn %d PSC %d CIL(old) Uarfcn %d PSC %d
Line 1757: [rrc_InterFMeasMapper_RemoveCell]:  Cell Neither found in Cell Info List nor Measured for MID %d
Line 1775: [rrc_InterFMeasMapper_GetCellMidBitmap]: PSC %d MidBitmap = 0X%x
Line 1783: [rrc_InterFMeasMapper_GetCellMidBitmap]: Cell Id %d : PSC %d Not found in DB
Line 1788: [rrc_InterFMeasMapper_GetCellMidBitmap]: Cell Id %d : PSC MISMATCH!! DB: Uarfcn %d PSC %d, CIL Uarfcn %d PSC %d
Line 1803: [rrc_InterFMeasMapper_GetCellMidBitmap]: PSC %d Not found in CIL
Line 1804: [rrc_InterFMeasMapper_GetTddCellMidBitmap]: XIntraFMidBitmap for P-Freq = 0x%x
Line 1811: [rrc_InterFMeasMapper_GetCellMidBitmap]: PSC %d Not found in CIL
Line 1854: [rrc_InterFMeasMapper_GetAllPreviousCellInfoForMID]: MeasInstId is NULL
Line 1916: [rrc_InterFMeasMapper_InvalidateTid]: TID invalidate called for MID %d configured in UPHY
Line 1931: Remove Nfreq TID Failed , NTransactionId = %d FirstConfMID = %d
Line 1938: [rrc_InterFMeasMapper_InvalidateTid]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 1995: [rrc_InterFMeasMapper_NotifyReport]: UARFCN(%d) has no Cells
Line 1998: [rrc_InterFMeasMapper_NotifyReport]: UARFCN(%d) has no Cells ERROR Returning No Processing Here
Line 2023: [rrc_InterFMeasMapper_NotifyReport]: MID(%d) is not existed, so removed from DB
Line 2028: [rrc_InterFMeasMapper_NotifyReport]:  UARFCN %d Cell %d :  Included in MID %d
Line 2035: MID[%d] Created InterFMeasInd(0x%X)
Line 2052: [rrc_InterFMeasMapper_NotifyReport]: interFreqResultsArray = NULL
Line 2081: [rrc_InterFMeasMapper_NotifyReport]FreqInfo is NULL !!
Line 2146: [rrc_InterFMeasMapper_NotifyReport]FreqInfo is NULL !!
Line 2151: [rrc_InterFMeasMapper_NotifyReport]: WARNING!! NumOfFreqs exceeding the limit for MID %d
Line 2201: [rrc_InterFMeasMapper_NotifyReport]: Serving Cell found uarfcn =%d, cell param ID == %d
Line 2224: isNfreqset %d , found %d 
Line 2233: [rrc_InterFMeasMapper_NotifyReport]: No Need to start Internal Measurement
Line 2238: [rrc_InterFMeasMapper_NotifyReport]: WARNING!! NumOfFreqs exceeding the limit for MID %d
Line 2246: [rrc_InterFMeasMapper_UpdateIntraFreqMeasInd] INFO
Line 2264: [rrc_InterFMeasMapper_NotifyReport]: MID(%d) is not existed, so removed from DB
Line 2269: [rrc_InterFMeasMapper_NotifyReport]:  UARFCN %d Cell %d :  Included in MID %d
Line 2295: [rrc_InterFMeasMapper_UpdateIntraFreqMeasInd] INFO: 
Line 2322: [rrc_InterFMeasMapper_NotifyReport]: WARNING!! NumOfFreqs exceeding the limit for MID %d
Line 2346: rrc_InterFMeasMapper_NotifyReportTDD : Inst Id is NULL !!
Line 2362: SCell meas[DCH][L3FLT] UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %i dBm, D-Rscp:%d
Line 2369: Primary Frequency don't have any cell, numOfCells == 0 
Line 2387: [rrc_InterFMeasMapper_NotifyReport] MID %d was stopped
Line 2417: rrc_InterFMeasMapper_ApplyTddFilterCoeff:Instance is NULL !
Line 2452: [rrc_InterFMeasMapper_ApplyFilterCoeff] ERROR - Invalid InterFMeasQuantity type [%i].
Line 2458: [rrc_IntraFMeasMapper_AddCell]:Error:  NumOfTimeslotIscp = %d, Bound it to MAX(%d)
Line 2590: [rrc_InterFMeasMapper_TriggerIratUtranMeasInd] INFO
Line 2598: Freq found
Line 2612: Cell found
Line 2622: N-freq Serving Cells, RSCP = %d, CellParamId = %d
Line 2627: No cell in Freq %d
Line 2639: From N-freq S-Cell results: RSCP = %d, CellParamId = %d
Line 2652: MID(%d) is not existed, so removed from DB
Line 2657: MID(%d) is OtherType(%d) not InterRatMeasType, so removed from DB
Line 2662: [rrc_InterFMeasMapper_TriggerIratUtranMeasInd] [GSM E3A] AS Cell(CP%d, Rscp:%d): Included in MID %d
Line 2668: MID[%d] Created InterRMeasInd(0x%X)
Line 2680: To InterR Utran results: RSCP = %d, CellParamId = %d
Line 2698: rrc_InterFMeasMapper_TriggerIratUtranMeasIndTDD : Inst Id is NULL !!
Line 2715: [rrc_InterFMeasMapper_TriggerIratUtranMeasInd] MID %d was stopped
Line 2732: From N-freq S-Cell results: RSCP = %d, CellParamId = %d
Line 2745: MID(%d) is not existed, so removed from DB
Line 2750: MID(%d) is OtherType(%d) not EutraMeasType, so removed from DB
Line 2755: [rrc_InterFMeasMapper_TriggerIratUtranMeasInd] [EUTRA E3A] AS Cell(CP%d, Rscp:%d): Included in MID %d
Line 2761: MID[%d] Created EutraEventBasedUtranMeasInd(0x%X)
Line 2774: To Eutra Utran results: RSCP = %d, CellParamId = %d
Line 2791: rrc_InterFMeasMapper_TriggerIratUtranMeasIndTDD: Inst Id is NULL !!
Line 2808: [rrc_InterFMeasMapper_TriggerIratUtranMeasInd] MID %d was stopped
Line 2817: [rrc_InterFMeasMapper_TriggerIratUtranMeasInd] Error Case Freq could not be Found
Line 2855: [rrc_InterFMeasMapper_UpdateIntraFreqMeasInd] Freq = %i, numOfCells = %d
Line 2863: [rrc_InterFMeasMapper_UpdateIntraFreqMeasInd] Cell Param Id= %d,Rscp = %i
Line 2892: TerminateMeasurement: MeasInstId is NULL
Line 2896: [rrc_InterFMeasMapper_terminateMeasurement]:	MID %d
Line 2916: [rrc_InterFMeasMapper_terminateMeasurement]:InterFMeasMapper_p MID(%d) will be terminated
Line 2917: [rrc_InterFMeasMapper_terminateMeasurement]:InterFMeasMapper_p->ConfiguredMids = 0X%x
Line 2921: [rrc_InterFMeasMapper_terminateMeasurement]:InterFMeasMapper_p->ServingFreqMidBitmap = 0X%x
Line 2927: [rrc_InterFMeasMapper_TerminateMeasurement]:InterFMeasMapper_p MID(%d) wasn't configured
Line 2932: [rrc_InterFMeasMapper_TerminateMeasurement]:There is no MID to be terminated
Line 2944: [rrc_InterFMeasMapper_TerminateMeasurement]:MID %d released at UPHY
Line 2962: [rrc_InterFMeasMapper_TerminateMeasurement]: Remove Nfreq TID Failed , TID = %d FirstConfMID = %d
Line 2967: [rrc_InterFMeasMapper_TerminateMeasurement]: isNfreqSet is FALSE
Line 2976: [rrc_InterFMeasMapper_TerminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 2981: [rrc_InterFMeasMapper_TerminateMeasurement]: TID = 0 for FirstConfMID = %d
Line 3004: [rrc_InterFMeasMapper_TerminateMeasurement]:First Configured MID Change [%d] -> [%d]
Line 3035: NtUarfcn(%d) is not listed on add-array bacause the array is full
Line 3061: There is more MIDs(0x%X) left
Line 3094: NtUarfcn(%d) is not listed on remove-array bacause the array is full
Line 3111: [rrc_InterFMeasMapper_ResetXIntraFMidBitMap]: MID %d reset :  this->XIntraFMidBitmap = 0X%x
Line 3119: [rrc_InterFMeasMapper_SetXIntraFMidBitMap]: MID %d set :  InterFMeasMapper_p->XIntraFMidBitmap = 0X%x
