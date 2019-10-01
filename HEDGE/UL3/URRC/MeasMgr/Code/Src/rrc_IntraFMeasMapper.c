Line 215: IntraFMapper FREED
Line 267: TerminateMeasurement: MeasInstId is NULL
Line 278: [rrc_IntraFMeasMapper_TerminateMeasurement]:This MID(%d) will be terminated
Line 279: [rrc_IntraFMeasMapper_TerminateMeasurement]:IntraFMeasMapper_p->configuredMid = 0X%x
Line 285: [rrc_IntraFMeasMapper_TerminateMeasurement]:XInterFMeas will be terminated
Line 291: [rrc_IntraFMeasMapper_TerminateMeasurement]:This MID(%d) is not configured in XInterFMidBitMap(0x%x)
Line 300: [rrc_IntraFMeasMapper_TerminateMeasurement]:This MID(%d) wasn't configured
Line 323: [rrc_IntraFMeasMapper_TerminateMeasurement]:There is no MID to be terminated
Line 351: [rrc_IntraFMeasMapper_terminateMeasurement]:TDD MID %d released at UPHY
Line 364: [rrc_IntraFMeasMapper_terminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 369: [rrc_IntraFMeasMapper_terminateMeasurement]: TID = 0 for FirstConfMID = %d
Line 393: [rrc_IntraFMeasMapper_TerminateMeasurement]:MID %d released at UPHY
Line 407: [rrc_IntraFMeasMapper_TerminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 412: [rrc_IntraFMeasMapper_TerminateMeasurement]: TID = 0 for FirstConfMID = %d
Line 435: [rrc_IntraFMeasMapper_TerminateMeasurement]:First Configured MID Change [%d] -> [%d]
Line 455: [rrc_IntraFMeasMapper_TerminateMeasurement]: No Cells to Add
Line 477: Internal Measurement is still running
Line 482: IntraFMeasMapper was not freed: configuredMid(0x%X), InterFE2DFMidBitmap(0x%X), InterRE3ABitMap(0x%X), EutraE3ABitMap(0x%X)
Line 490: There is more MIDs(0x%X) left
Line 555: rrc_IntraFMeasMapper_DoMeasurement: MID 0 is running, so it will be released
Line 561: rrc_IntraFMeasMapper_DoMeasurement: MID is 0, so this operation will be skipped
Line 579: [rrc_IntraFMeasMapper_DoMeasurement]:This MID(%d) will be modified
Line 585: [rrc_IntraFMeasMapper_DoTddMeasurement]:XInterFMeas will be modified
Line 589: [rrc_IntraFMeasMapper_DoTddMeasurement]:This MID(%d) is not configured in XInterFMidBitMap(0x%x)
Line 600: [rrc_IntraFMeasMapper_DoMeasurement]:This MID(%d) will be configured
Line 601: [rrc_IntraFMeasMapper_DoMeasurement]:IntraFMeasMapper_p->configuredMid = 0X%x
Line 613: [rrc_IntraFMeasMapper_DoMeasurement]:Filtering Starts
Line 622: Before Filtering: ACTIVE SET TO REMOVE[%d] = PSC %d
Line 641: FILTERED ACTIVE SET TO REMOVE[%d] = PSC %d
Line 650: Before Filtering: MONITORED SET TO REMOVE[%d] = PSC %d
Line 668: FILTERED MONITORED SET TO REMOVE[%d] = PSC %d
Line 678: Before Filtering: DETECTED SET TO REMOVE[%d] = PSC %d
Line 762: rrc_IntraFMeasMapper_DoMeasurement: RepInstId is NULL
Line 776: FILTERED DETECTED SET TO REMOVE[%d] = PSC %d
Line 784: Before Filtering: ACTIVE SET TO ADD[%d] = PSC[FDD] %d CellParamId[TDD] %d
Line 802: FILTERED ACTIVE SET TO ADD[%d] = PSC[FDD] %d 
Line 810: Before Filtering: MONITORED SET TO ADD[%d] = PSC[FDD] %d
Line 828: FILTERED MONITORED SET TO ADD[%d] = PSC[FDD] %d 
Line 833: Before Filtering: DETECTED SET TO ADD[%d] = PSC %d
Line 858: rrc_IntraFMeasMapper_DoMeasurement: Alloc failed!!
Line 870: rrc_IntraFMeasMapper_DoMeasurement[Cleared MID %d detected set]: IsDetectedSetQuantities(%d), theDetectedSet[NumCells(%d)]
Line 877: FILTERED DETECTED SET TO ADD[%d] = PSC %d
Line 879: [rrc_IntraFMeasMapper_DoMeasurement]:Filtering Ends
Line 908: [rrc_IntraFMeasMapper_DoMeasurement]: No compressed mode configured
Line 911: [rrc_IntraFMeasMapper_DoMeasurement]: No Cells to Modify
Line 929: [rrc_IntraFMeasMapper_DoMeasurement]: No Cells to Configure
Line 966: [rrc_IntraFMeasMapper_DoMeasurementModify] INFO.
Line 970: rrc_IntraFMeasMapper_DoTddMeasurementModify:ILM Alloc Failed!
Line 977: [rrc_IntraFMeasMapper_DoTddMeasurementModify] NFreq Configured
Line 989: RRC is trying to config IntraFMeas. Release MID 0 if there is any one
Line 1016: [rrc_IntraFMeasMapper_DoMeasurementModifyCMAlone] INFO.
Line 1021: rrc_CUPHY_IntraFreq_MeasMod_REQ:ILM Alloc Failed!
Line 1126: rrc_IntraFMeasMapper_DoModifyMeasurementForIntraFHHO: Accumulator =NULL
Line 1193: rrc_IntraFMeasMapper_DoModifyMeasforActiveSetUpdate : Inst Id is NULL !!
Line 1220: rrc_IntraFMeasMapper_DoModifyMeasurementForActiveSetUpdate: CellInfoPtr=NULL
Line 1307: [Cpich %d] Detected Set -> Active Set(CellInfo borrowed from ActSet)
Line 1332: No of cells from Detected -> Active exceeds MaxDetected Cells
Line 1337: ActiveSetCellInfo was NULL returned
Line 1342: [Cpich %d] Detected Set -> Active Set but No available Cell Info in Active Set
Line 1351: [Cpich %d] Detected Set -> Active Set (CellInfo borrowed from MonSet)
Line 1375: No of cells from Detected -> Active exceeds MaxDetected Cells
Line 1396: rrc_IntraFMeasMapper_DoModifyMeasforActiveSetUpdate : Inst Id is NULL !!
Line 1439: rrc_IntraFMeasMapper_DoModifyMeasforActiveSetUpdate : Inst Id is NULL !!
Line 1462: rrc_IntraFMeasMapper_DoModifyMeasurementForActiveSetUpdate: Alloc failed!!
Line 1473: rrc_IntraFMeasMapper_DoModifyMeasurementForActiveSetUpdate[Cleared MID %d Detected Set]: IsDetectedSetQuantities(%d), theDetectedSet[NumCells(%d)]
Line 1527: [rrc_IntraFMeasMapper_DoMeasurementConfig]:This MID(%d) will be FIRST configured
Line 1531: [rrc_IntraFMeasMapper_DoMeasurementConfig]: FIRST configured MID(%d), CURRENT Configuring MID(%d)
Line 1537: [rrc_IntraFMeasMapper_DoMeasurementConfig]:This MID(%d) Active Set Count is Zero So need to debug
Line 1542: [rrc_IntraFMeasMapper_DoMeasurementConfig]: FIRST configured MID(%d), CURRENT Configuring MID(%d)
Line 1548:  RepInstId == NULL  
Line 1556: [TIntraFMeasMapper] NFreq configured: IntraFMeas -> InterFMeas
Line 1569: RRC is trying to config IntraFMeas. Release MID 0 if there is any one
Line 1608: rrc_CUPHY_IntraFreq_MeasMod_REQ:ILM Alloc Failed!
Line 1668: rrc_IntraFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 1764: MID(%d) is not existed, so removed from DB
Line 1769: MID(%d) is OtherType(%d) not IntraFreqMeasType, so removed from DB
Line 1775: [rrc_IntraFMeasMapper_NotifyReport]: AS Cell %d :  Included in MID %d
Line 1785: MID[%d] Created IntraFreqMeasInd(0x%X)
Line 1835: MID(%d) is not existed, so removed from DB
Line 1840: MID(%d) is OtherType(%d) not IntraFreqMeasType, so removed from DB
Line 1846: [rrc_IntraFMeasMapper_NotifyReport]:	MS Cell %d :  Included in MID %d
Line 1856: MID[%d] Created IntraFreqMeasInd(0x%X)
Line 1911: [rrc_IntraFMeasMapper_NotifyReport]: MID(%d) is not existed, so removed from DB
Line 1916: MID(%d) is OtherType(%d) not IntraFreqMeasType, so removed from DB
Line 1922: [rrc_IntraFMeasMapper_NotifyReport]:	DS Cell %d :  Included in MID %d
Line 1933: MID[%d] Created IntraFreqMeasInd(0x%X)
Line 1957: Measured Dset Cells PSC =%d, Measured Dset MID=%d
Line 1982: rrc_IntraFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 1999: [rrc_IntraFMeasMapper_NotifyReport] There is no configured IntraFreqMeas
Line 2005: [rrc_IntraFMeasMapper_NotifyReport] IntraFMeasMapper_p->InterFE2DFMidBitmap = 0X%x
Line 2028: MID(%d) is not existed, so removed from DB
Line 2033: MID(%d) is OtherType(%d) not InterFreqMeasType, so removed from DB
Line 2039: [rrc_IntraFMeasMapper_NotifyReport] [InterF E2DF] AS Cell %d :  Included in MID %d
Line 2048: MID[%d] Created InterFMeasInd(0x%X)
Line 2091: rrc_IntraFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 2130: MID(%d) is not existed, so removed from DB
Line 2135: MID(%d) is OtherType(%d) not InterRatMeasType, so removed from DB
Line 2141: [rrc_IntraFMeasMapper_NotifyReport] [GSM E3A] AS Cell %d :  Included in MID %d
Line 2149: MID[%d] Created InterRMeasInd(0x%X)
Line 2175: rrc_IntraFMeasMapper_NotifyReport: umtsActiveSetCellResultsArray = NULL
Line 2189: rrc_IntraFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 2230: MID(%d) is not existed, so removed from DB
Line 2235: MID(%d) is OtherType(%d) not EutraMeasType, so removed from DB
Line 2241: [rrc_IntraFMeasMapper_NotifyReport] [EUTRA E3A] AS Cell %d :	Included in MID %d
Line 2249: MID[%d] Created EutraMeasInd(0x%X)
Line 2275: rrc_IntraFMeasMapper_NotifyReport: umtsActiveSetCellResultsArray = NULL
Line 2290: rrc_IntraFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 2368: rrc_IntraFMeasMapper_getTheAFilterCoefficient: Invalid FilterCoefficient(%d)
Line 2393: rrc_InterRMeasMapper_ApplyUtranFilterCoeff : Inst Id is NULL !!
Line 2536: [rrc_IntraFMeasMapper_SetInterFE2DFBitMap]: MID %d set :	IntraFMeasMapper_p->InterFE2DFMidBitmap = 0X%x
Line 2549: [rrc_IntraFMeasMapper_ResetInterFE2DFBitMap]: MID %d reset :	this->InterFE2DFMidBitmap = 0X%x
Line 2559: Internal Measurement is still running
Line 2576: [rrc_IntraFMeasMapper_SetInterRE3ABitMap]: MID %d set :  IntraFMeasMapper_p->InterRE3ABitMap = 0X%x
Line 2589: [rrc_IntraFMeasMapper_ResetInterRE3ABitMap]: MID %d reset :  this->InterRE3ABitMap = 0X%x
Line 2599: Internal Measurement is still running
Line 2615: [rrc_IntraFMeasMapper_SetEutraE3ABitMap]: MID %d set :  IntraFMeasMapper_p->EutraE3ABitMap = 0X%x
Line 2628: [rrc_IntraFMeasMapper_ResetEutraE3ABitMap]: MID %d reset :  this->EutraE3ABitMap = 0X%x
Line 2638: Internal Measurement is still running
Line 2699: [rrc_IntraFMeasMapper_AddTddActiveCell] Tdd ActiveSet size Should Not be greater than one
Line 2720: [rrc_IntraFMeasMapper_AddActiveCell]: Active PSC	%d already present : Appended MID %d : MidBitmap = 0X%x
Line 2726: [rrc_IntraFMeasMapper_AddActiveCell]: Active PSC  %d NOT added DBCellID = %d AddedCell Id = %d
Line 2736: [rrc_IntraFMeasMapper_AddTddActiveCell] Tdd ActiveSet is already 1
Line 2754: [rrc_IntraFMeasMapper_AddActiveCell]: Active PSC	%d newly added :  MidBitmap = 0X%x
Line 2756: [rrc_IntraFMeasMapper_AddActiveCell]: Active PSC	%d newly added
Line 2761: [rrc_IntraFMeasMapper_AddActiveCell]: TABLE FULL : Active PSC	%d NOT added
Line 2782: [rrc_IntraFMeasMapper_RemoveActiveCell]: MID(%d) MeasInstId is NULL
Line 2813: [rrc_IntraFMeasMapper_RemoveActiveCell]: Active PSC %d still configured at UPHY:	MidBitmap = 0X%x
Line 2819: [rrc_IntraFMeasMapper_RemoveActiveCell]: Active PSC %d is being REMOVED at UPHY
Line 2837: [rrc_IntraFMeasMapper_RemoveActiveCell]: Cell Id %d -> Cell Id %d : Active PSC %d is being REPLACED at UPHY
Line 2848: [rrc_IntraFMeasMapper_RemoveActiveCell]: ERROR: DB ActivePSC %d DBCellId = %d OldCellId = %d CurrentCellId = %d
Line 2855: [rrc_IntraFMeasMapper_RemoveActiveCell]: Active PSC %d not configured in UPHY
Line 2883: [rrc_IntraFMeasMapper_AddMonitoredCell]: Cell ID %d :Monitored PSC  %d already present : Appended MID %d : MidBitmap = 0X%x
Line 2889: [rrc_IntraFMeasMapper_AddMonitoredCell]: Cell ID %d : Monitored PSC  %d No Previous MIDs Configured!!
Line 2895: [rrc_IntraFMeasMapper_AddMonitoredCell]: Cell ID %d :PSC MISMATCH !! DB PSC  %d  CIL PSC %d
Line 2907: [rrc_IntraFMeasMapper_AddMonitoredCell]: Cell ID %d : Monitored PSC  %d newly added :  MidBitmap = 0X%x
Line 2914: [rrc_IntraFMeasMapper_AddMonitoredCell]: Monitored PSC  %d NOT added as Not found in CellInfo List
Line 2934: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: MID(%d) MeasInstId is NULL
Line 2949: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Monitored PSC %d still configured at UPHY:  MidBitmap = 0X%x
Line 2955: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Monitored PSC %d is being REMOVED at UPHY
Line 2971: [rrc_IntraFMeasMapper_RemoveMonitoredCell]:Cell Id %d -> Cell Id %d : Monitored PSC %d is being REPLACED at UPHY
Line 2981: [rrc_IntraFMeasMapper_RemoveMonitoredCell]:Monitored PSC %d already Changed from Cell Id %d -> Cell Id %d
Line 2988: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: PSC %d not Found in OLD Saved CIL 
Line 2993: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Cell Id %d : No Cell To Remove in DB/UPHY
Line 2997: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Cell Id %d : PSC MISMATCH!! : Stored PSC %d Remove PSC %d
Line 3015: [rrc_IntraFMeasMapper_RemoveMonitoredCell]:Cell Id %d: Monitored PSC %d is being replaced: REMOVE from UPHY
Line 3025: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Cell Id %d : No Cell To Remove in UPHY
Line 3029: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Cell Id %d : Cell Not Removed from UPHY : OLD PSC already removed : New PSC %d Remove PSC %d
Line 3037: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Monitored Cell Neither found in Cell Info List nor Measured for MID %d
Line 3062: [rrc_IntraFMeasMapper_AddDetectedCell]: Detected PSC	%d already present : Appended MID %d : MidBitmap = 0X%x
Line 3078: [rrc_IntraFMeasMapper_AddDetectedCell]: Detected PSC	%d newly added :  MidBitmap = 0X%x
Line 3080: [rrc_IntraFMeasMapper_AddDetectedCell]: Detected PSC	%d newly added
Line 3085: [rrc_IntraFMeasMapper_AddDetectedCell]: TABLE FULL : Detected PSC	%d NOT added
Line 3109: [rrc_IntraFMeasMapper_RemoveDetectedCell]: Detected PSC %d still configured at UPHY:	MidBitmap = 0X%x
Line 3115: [rrc_IntraFMeasMapper_RemoveDetectedCell]: Detected PSC %d is being REMOVED at UPHY
Line 3126: [rrc_IntraFMeasMapper_RemoveDetectedCell]: Detected PSC %d not configured in UPHY
Line 3145: [rrc_IntraFMeasMapper_GetActiveCellMidBitmapByCpich]: Active PSC %d MidBitmap = 0X%x
Line 3150: [rrc_IntraFMeasMapper_GetActiveCellMidBitmapByCpich]: Active PSC %d not configured in UPHY
Line 3168: [rrc_IntraFMeasMapper_GetMontoredCellMidBitmapByCpich]: Cell Id : %d Monitored PSC %d MidBitmap = 0X%x
Line 3176: [rrc_IntraFMeasMapper_GetMonitoredCellMidBitmapByCpich]: Cell Id %d : PSC %d Not found in DB
Line 3180: [rrc_IntraFMeasMapper_GetMonitoredCellMidBitmapByCpich]: Cell Id %d : PSC MISMATCH!! PSC in DB: %d PSC in CIL %d
Line 3188: [rrc_IntraFMeasMapper_GetMonitoredCellMidBitmapByCpich]: PSC %d Not found in CIL
Line 3205: [rrc_IntraFMeasMapper_GetDetectedCellMidBitmapByCpich]: Detected PSC %d MidBitmap = 0X%x
Line 3210: [rrc_IntraFMeasMapper_GetDetectedCellMidBitmapByCpich]: ERROR CellIdx %d OutOfBound
Line 3624: [rrc_IntraFMeasMapper_GetAllPreviousCellInfoForMID]: MeasInstId is NULL
Line 3676: [rrc_IntraFMeasMapper_GetAllCellInfo]: PSC [%d] is not in CIL(Active)!!!
Line 3700: [rrc_IntraFMeasMapper_GetAllCellInfo]: PSC [%d] is not in CIL(Monitored)!!!
Line 3765: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement]: ERROR: MID %d : MeasInst/RepInst = NULL
Line 3771: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement]:MID %d released at UPHY
Line 3786: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement]: Remove TID Failed , TID = %d MID = %d
Line 3791: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement]: TID = 0 for MID = %d
Line 3855: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement] - ActiveSetCpichCount exceeds the limit 
Line 3859: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement] - Active cell can not be found in CIL. Add ActiveSet to ActiveSetListToAdd list temporariliy
Line 3863: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement] - PSC %d added to ActiveSetList[%d]
Line 3890: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement]: No Cells to Add
Line 3922: [rrc_IntraFMeasMapper_ReleaseInternalIntraFMeasurement]:Internal IntraF MID 0 released at UPHY
Line 3939: [rrc_IntraFMeasMapper_ReleaseInternalIntraFMeasurement]: Remove TID Failed , TID = %d MID =0
Line 3944: [rrc_IntraFMeasMapper_ReleaseInternalIntraFMeasurement]: TID = 0 for MID = 0
Line 3956: [rrc_IntraFMeasMapper_ReleaseInternalIntraFMeasurement] ERROR - No RepInstId for MID 0
Line 3965: [rrc_IntraFMeasMapper_ReleaseInternalIntraFMeasurement]: ERROR: InternalMID MeasInst = NULL
Line 4007: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: MID 0 Configured Newly
Line 4070: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: No Active Cells to Add
Line 4127: [rrc_IntraFMeasMapper_InvalidateTid]: TID invalidate called for MID %d configured in UPHY
Line 4134: [rrc_IntraFMeasMapper_InvalidateTid]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 4151: There is No Intra accumulatingInd
Line 4171: Copy result from Intra for 2D2F MID : %d
Line 4227: TerminateMeasurement: MeasInstId is NULL
Line 4238: [rrc_IntraFMeasMapper_TerminateMeasurement]:This MID(%d) will be terminated
Line 4239: [rrc_IntraFMeasMapper_TerminateMeasurement]:IntraFMeasMapper_p->configuredMid = 0X%x
Line 4245: [rrc_IntraFMeasMapper_terminateMeasurement]:This MID(%d) wasn't configured
Line 4258: [rrc_IntraFMeasMapper_terminateMeasurement]:There is no MID to be terminated
Line 4272: [rrc_IntraFMeasMapper_terminateMeasurement]:TDD MID %d released at UPHY
Line 4285: [rrc_IntraFMeasMapper_terminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 4290: [rrc_IntraFMeasMapper_terminateMeasurement]: TID = 0 for FirstConfMID = %d
Line 4306: [rrc_IntraFMeasMapper_terminateMeasurement]:TDD MID %d released at UPHY
Line 4319: [rrc_IntraFMeasMapper_terminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 4324: [rrc_IntraFMeasMapper_terminateMeasurement]: TID = 0 for FirstConfMID = %d
Line 4354: Internal Measurement is still running
Line 4359: IntraFMeasMapper was not freed: configuredMid(0x%X), InterFE2DFMidBitmap(0x%X), InterRE3ABitMap(0x%X), EutraE3ABitMap(0x%X)
Line 4367: There is more MIDs(0x%X) left
Line 4415: rrc_IntraFMeasMapper_NotifyReportTDD : Inst Id is NULL !!
Line 4439: Num Active Cells is Wrong
Line 4480: MID(%d) is not existed, so removed from DB
Line 4485: MID(%d) is OtherType(%d) not IntraFreqMeasType, so removed from DB
Line 4490: [rrc_IntraFMeasMapper_NotifyReport]: AS Cell %d :  Included in MID %d
Line 4496: MID[%d] Created TIntraFreqMeasInd(0x%X)
Line 4540: MID(%d) is not existed, so removed from DB
Line 4545: MID(%d) is OtherType(%d) not IntraFreqMeasType, so removed from DB
Line 4550: [rrc_IntraFMeasMapper_NotifyReport]:	MS Cell %d :  Included in MID %d
Line 4556: MID[%d] Created IntraFreqMeasInd(0x%X)
Line 4601: [rrc_IntraFMeasMapper_NotifyReport]: MID(%d) is not existed, so removed from DB
Line 4606: MID(%d) is OtherType(%d) not IntraFreqMeasType, so removed from DB
Line 4611: [rrc_IntraFMeasMapper_NotifyReport]:	DS Cell %d :  Included in MID %d
Line 4617: MID[%d] Created IntraFreqMeasInd(0x%X)
Line 4658: rrc_IntraFMeasMapper_NotifyReportTDD : Inst Id is NULL !!
Line 4673: SCell meas[DCH][L3FLT] UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %i dBm, D-Rscp:%d
Line 4692: [rrc_IntraFMeasMapper_NotifyReport] MID %d is stopped
Line 4702: [rrc_IntraFMeasMapper_NotifyReport] There is no TDD configured IntraFreqMeas
Line 4708: [rrc_IntraFMeasMapper_NotifyReport] IntraFMeasMapper_p->InterFE2DFMidBitmap = 0X%x
Line 4725: MID(%d) is not existed, so removed from DB
Line 4730: MID(%d) is OtherType(%d) not InterFreqMeasType, so removed from DB
Line 4735: [rrc_IntraFMeasMapper_NotifyReport] [InterF E2DF] AS Cell %d :  Included in MID %d
Line 4742: MID[%d] Created TInterFMeasInd(0x%X)
Line 4783: rrc_IntraFMeasMapper_NotifyReportTDD : Inst Id is NULL !!
Line 4799: [rrc_IntraFMeasMapper_NotifyReport] MID %d is stopped
Line 4821: Num of Active Cells = %d, RSCP = %d, CellParamId = %d
Line 4827: RSCP = %d, CellParamId = %d
Line 4841: MID(%d) is not existed, so removed from DB
Line 4846: MID(%d) is OtherType(%d) not InterRatMeasType, so removed from DB
Line 4851: [rrc_IntraFMeasMapper_NotifyReport] [GSM E3A] AS Cell(CP%d, Rscp:%d): Included in MID %d
Line 4857: MID[%d] Created InterRMeasInd(0x%X)
Line 4869: RSCP = %d, CellParamId = %d
Line 4887: rrc_IntraFMeasMapper_NotifyReportTDD : Inst Id is NULL !!
Line 4904: [rrc_IntraFMeasMapper_NotifyReport] MID %d is stopped
Line 4918:  EutraE3ABitMap : Num of Active Cells = %d, RSCP = %d, CellParamId = %d
Line 4925: RSCP = %d, CellParamId = %d
Line 4939: MID(%d) is not existed, so removed from DB
Line 4944: MID(%d) is OtherType(%d) not EutraMeasType, so removed from DB
Line 4949: [rrc_IntraFMeasMapper_NotifyReport] [EUTRA E3A] AS Cell(CP%d, Rscp:%d): Included in MID %d
Line 4955: MID[%d] Created EutraEventBasedUtranMeasInd(0x%X)
Line 4968:  RSCP = %d, CellParamId = %d
Line 4987: rrc_IntraFMeasMapper_NotifyReportTDD : Inst Id is NULL !!
Line 5004: [rrc_IntraFMeasMapper_NotifyReport] MID %d is stopped
Line 5014: [rrc_IntraFMeasMapper_NotifyReport] Tpayload is NULL
Line 5040: rrc_InterRMeasMapper_ApplyUtranFilterCoeff : Inst Id is NULL !!
Line 5069: [rrc_IntraFMeasMapper_AddCell]:Error:  NumOfTimeslotIscp = %d, Bound it to MAX(%d)
Line 5192: [rrc_IntraFMeasMapper_SetXInterFMidBitMap]: MID %d set :  IntraFMeasMapper_p->XInterFMidBitmap = 0X%x
Line 5204: [rrc_IntraFMeasMapper_ResetXInterFMidBitMap]: MID %d reset :  this->XInterFMidBitmap = 0X%x
Line 5278: ERR IntraMeasurement  not been Stopped
Line 5283: ERR IntraFMeasInstIdList[%d] == NULL..
Line 5288: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: IntraFMeasInstIdListSize %d,isIntraFMeasActive %d
Line 5302: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: IntraFMeas for N-freq was already configured. No need to config MID0
Line 5325: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: MID 0 Configured Newly
Line 5353: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: Invalid Pccpch info
Line 5385:  rrc_IntraFCellInfoList_AddCell called..  
Line 5404: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: No Active Cells to Add
Line 5448: Best IntraNCellFreq[DCH][L3FLT] A UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5452: IntraNCell A UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5459: Best IntraNCellFreq[DCH][L3FLT] B UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5463: IntraNCell B UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5470: Best IntraNCellFreq[DCH][L3FLT] C UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5474: IntraNCell C UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5481: Best IntraNCellFreq[DCH][L3FLT] D UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5485: IntraNCell D UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5492: Best IntraNCellFreq[DCH][L3FLT] E UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5496: IntraNCell E UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5503: Best IntraNCellFreq[DCH][L3FLT] F UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5507: IntraNCell F UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5514: Best IntraNCellFreq[DCH][L3FLT] G UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5518: IntraNCell G UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5525: Best IntraNCellFreq[DCH][L3FLT] H UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5529: IntraNCell H UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5536: Best IntraNCellFreq[DCH][L3FLT] I UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5540: IntraNCell I UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5547: Best IntraNCellFreq[DCH][L3FLT] J UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5551: IntraNCell J UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5558: Best IntraNCellFreq[DCH][L3FLT] K UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5562: IntraNCell K UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5569: Best IntraNCellFreq[DCH][L3FLT] L UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5573: IntraNCell L UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5580: Best IntraNCellFreq[DCH][L3FLT] M UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5584: IntraNCell M UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5591: Best IntraNCellFreq[DCH][L3FLT] N UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5595: IntraNCell N UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5602: Best IntraNCellFreq[DCH][L3FLT] O UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5606: IntraNCell O UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5613: Best IntraNCellFreq[DCH][L3FLT] P UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5617: IntraNCell P UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5624: Best IntraNCellFreq[DCH][L3FLT] Q UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5628: IntraNCell Q UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5635: Best IntraNCellFreq[DCH][L3FLT] R UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5639: IntraNCell R UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5646: Best IntraNCellFreq[DCH][L3FLT] S UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5650: IntraNCell S UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5657: Best IntraNCellFreq[DCH][L3FLT] T UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5661: IntraNCell T UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5668: Best IntraNCellFreq[DCH][L3FLT] U UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5672: IntraNCell U UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5679: Best IntraNCellFreq[DCH][L3FLT] V UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5683: IntraNCell V UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5690: Best IntraNCellFreq[DCH][L3FLT] W UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5694: IntraNCell W UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5701: Best IntraNCellFreq[DCH][L3FLT] X UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5705: IntraNCell X UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5712: Best IntraNCellFreq[DCH][L3FLT] Y UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5716: IntraNCell Y UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5723: Best IntraNCellFreq[DCH][L3FLT] Z UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5727: IntraNCell Z UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5734: Best IntraNCellFreq[DCH][L3FLT] AA UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5738: IntraNCell AA UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5745: Best IntraNCellFreq[DCH][L3FLT] AB UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5749: IntraNCell AB UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5756: Best IntraNCellFreq[DCH][L3FLT] AC UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5760: IntraNCell AC UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5767: Best IntraNCellFreq[DCH][L3FLT] AD UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5771: IntraNCell AD UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5778: Best IntraNCellFreq[DCH][L3FLT] AE UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5782: IntraNCell AE UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5789: Best IntraNCellFreq[DCH][L3FLT] AF UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5793: IntraNCell AF UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5798: INVALID no of NCells
Line 5812: INVALID no of NCells = %d
