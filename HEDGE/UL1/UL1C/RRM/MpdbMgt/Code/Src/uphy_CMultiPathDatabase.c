Line 216:   HashingTable Alloc failed!!
Line 216:   HashingTable Alloc failed!!
Line 253: uphy_CMultiPathDatabase_UpdateCellMultiPathData : Max Table Entries being set to default
Line 253: uphy_CMultiPathDatabase_UpdateCellMultiPathData : Max Table Entries being set to default
Line 259: uphy_CMultiPathDatabase_UpdateCellMultiPathData :					Hashing Table size being set to default
Line 259: uphy_CMultiPathDatabase_UpdateCellMultiPathData :					Hashing Table size being set to default
Line 273:   cellInformation not found in uphy_CMultiPathDatabase_UpdateCellMultiPathData
Line 273:   cellInformation not found in uphy_CMultiPathDatabase_UpdateCellMultiPathData
Line 316: UpdateCellMultiPathData[%d %d] : Add new cell without multiPathInfo
Line 316: UpdateCellMultiPathData[%d %d] : Add new cell without multiPathInfo
Line 320: UpdateCellMultiPathData[%d %d] : Add new cell with multiPathInfo
Line 320: UpdateCellMultiPathData[%d %d] : Add new cell with multiPathInfo
Line 324:  UpdateCellMultiPathData(new cell) [%d %d] : isUpdateTxDivInfo=%d, isTxDivValid=%d, txDivStatus=%d
Line 324:  UpdateCellMultiPathData(new cell) [%d %d] : isUpdateTxDivInfo=%d, isTxDivValid=%d, txDivStatus=%d
Line 331: UpdateCellMultiPathData[%d %d] : *** not added, nEntries=%d
Line 331: UpdateCellMultiPathData[%d %d] : *** not added, nEntries=%d
Line 335: UpdateCellMultiPathData[%d %d] : *** successfully added, nEntries=%d
Line 335: UpdateCellMultiPathData[%d %d] : *** successfully added, nEntries=%d
Line 364: UpdateCellMultiPathData: Saving Old Cell Info:for uarfcn %d pScrCode %d Into Old MultiPath Results
Line 364: UpdateCellMultiPathData: Saving Old Cell Info:for uarfcn %d pScrCode %d Into Old MultiPath Results
Line 379: UpdateCellMultiPathData [%d %d] : URRC State(%d),Removing oldMultiPathInfo as it is too old
Line 379: UpdateCellMultiPathData [%d %d] : URRC State(%d),Removing oldMultiPathInfo as it is too old
Line 392:   UpdateCellMultiPathData [%d %d] : Removing oldMultiPathInfo as it is too old
Line 392:   UpdateCellMultiPathData [%d %d] : Removing oldMultiPathInfo as it is too old
Line 455:   unable to cancel timeout token
Line 455:   unable to cancel timeout token
Line 461:  UpdateCellMultiPathData(cell ok) [%d %d] : isUpdateTxDivInfo =%d, isTxDivValid=%d, txDivStatus=%d
Line 461:  UpdateCellMultiPathData(cell ok) [%d %d] : isUpdateTxDivInfo =%d, isTxDivValid=%d, txDivStatus=%d
Line 512:   Unable to locate cell Info for UARFCN[%d], ScrCode[%d]
Line 512:   Unable to locate cell Info for UARFCN[%d], ScrCode[%d]
Line 580: uphy_CMultiPathDatabase_SetReferenceCell (%d: %d) Previous (%d: %d)
Line 580: uphy_CMultiPathDatabase_SetReferenceCell (%d: %d) Previous (%d: %d)
Line 592:   multiPathDatabase_ptr->ReferenceCell == NULL pointer
Line 592:   multiPathDatabase_ptr->ReferenceCell == NULL pointer
Line 637: Cell index=%d > UPHY_MAXIMUM_ACTIVE_CELLS=%d
Line 637: Cell index=%d > UPHY_MAXIMUM_ACTIVE_CELLS=%d
Line 765: uphy_CMultiPathDatabase_ModifyNPhyCh :				No active cells: Increment %d makes NPhyCh from %d
Line 765: uphy_CMultiPathDatabase_ModifyNPhyCh :				No active cells: Increment %d makes NPhyCh from %d
Line 791: uphy_CMultiPathDatabase_ModifyNPhyCh :						Increment %d makes NPhyCh from %d to negative
Line 791: uphy_CMultiPathDatabase_ModifyNPhyCh :						Increment %d makes NPhyCh from %d to negative
Line 818: uphy_CMultiPathDatabase_ModifyNPhyCh :				No cell Info in MPDB: [%d %d]
Line 818: uphy_CMultiPathDatabase_ModifyNPhyCh :				No cell Info in MPDB: [%d %d]
Line 853: Sfn %d MPDB Removes old cell uarfcn %d pScrCode %d
Line 853: Sfn %d MPDB Removes old cell uarfcn %d pScrCode %d
Line 890: Instance created for stackId %d
Line 890: Instance created for stackId %d
Line 957: UpdateCellMultiPathData[%d %d] : *** Removed, nEntries=%d
Line 957: UpdateCellMultiPathData[%d %d] : *** Removed, nEntries=%d
Line 1058:   newCellInformation == NULL pointer
Line 1058:   newCellInformation == NULL pointer
Line 1206:   uphy_CMultiPathDatabase_RemoveOldestCell Error : All %d cells 0 frames old or with outstanding requests or physical channels
Line 1206:   uphy_CMultiPathDatabase_RemoveOldestCell Error : All %d cells 0 frames old or with outstanding requests or physical channels
Line 1230:   CellInformation == NULL pointer
Line 1230:   CellInformation == NULL pointer
Line 1236:   ActiveCells list is corrupted: Already other active cell is at position %d
Line 1236:   ActiveCells list is corrupted: Already other active cell is at position %d
Line 1241: Active cell [UARCFN PSC]=[%d %d] NPhyCh %d at position %d
Line 1241: Active cell [UARCFN PSC]=[%d %d] NPhyCh %d at position %d
Line 1254:   The same active cell [%d %d] is already in ActiveCells
Line 1254:   The same active cell [%d %d] is already in ActiveCells
Line 1265:   Can not add a new active cell [%d %d] to ActiveCells list because NActiveCells %d is over Max Limit
Line 1265:   Can not add a new active cell [%d %d] to ActiveCells list because NActiveCells %d is over Max Limit
Line 1275: Add a new active cell [UARCFN PSC]=[%d %d] NPhyCh %d at position %d
Line 1275: Add a new active cell [UARCFN PSC]=[%d %d] NPhyCh %d at position %d
Line 1328:   Unable to locate Cell Infoirmation in list
Line 1328:   Unable to locate Cell Infoirmation in list
Line 1330: uphy_CMultiPathDatabase_RemoveCellFromActiveList Error:					Unable to locate Cell Infoirmation in list
Line 1330: uphy_CMultiPathDatabase_RemoveCellFromActiveList Error:					Unable to locate Cell Infoirmation in list
Line 1332: Already Active Cells are :
Line 1332: Already Active Cells are :
Line 1336: CellInformation %08x: uarfcn %d, Primary Scr Code %d, NPhyCh %d
Line 1336: CellInformation %08x: uarfcn %d, Primary Scr Code %d, NPhyCh %d
Line 1339: 
Line 1339: 
Line 1362:   Reset active set in MPDB: NActiveCells %d (should be 0)
Line 1362:   Reset active set in MPDB: NActiveCells %d (should be 0)
Line 1437:  SetCellTxDivStatus[%d %d] : isTxDivValid = %d, txDivStatus = %d
Line 1437:  SetCellTxDivStatus[%d %d] : isTxDivValid = %d, txDivStatus = %d
Line 1467:  GetCellTxDivStatus[%d %d] : isTxDivValid=%d txDivStatus=%d
Line 1467:  GetCellTxDivStatus[%d %d] : isTxDivValid=%d txDivStatus=%d
Line 1522:  SetDeltaCellkTm: No Cell Information (%d, %d)
Line 1522:  SetDeltaCellkTm: No Cell Information (%d, %d)
Line 1544:  GetDeltaCellkTm: uarfcn=%d, primaryScrCode=%d deltaCellkTm=%d
Line 1544:  GetDeltaCellkTm: uarfcn=%d, primaryScrCode=%d deltaCellkTm=%d
Line 1553:  GetDeltaCellkTm: isDeltaTmValid is not valid: uarfcn=%d, primaryScrCode=%d deltaCellkTm=%d
Line 1553:  GetDeltaCellkTm: isDeltaTmValid is not valid: uarfcn=%d, primaryScrCode=%d deltaCellkTm=%d
Line 1563:  GetDeltaCellkTm: No multipath Info: uarfcn=%d, primaryScrCode=%d deltaCellkTm=%d
Line 1563:  GetDeltaCellkTm: No multipath Info: uarfcn=%d, primaryScrCode=%d deltaCellkTm=%d
Line 1573:  GetDeltaCellkTm: No cell Info: uarfcn=%d, primaryScrCode=%d deltaCellkTm=%d
Line 1573:  GetDeltaCellkTm: No cell Info: uarfcn=%d, primaryScrCode=%d deltaCellkTm=%d
Line 1791: uphy_CMultiPathDatabaseUpdatingUtility_updateOldMPInfotimer() Enter:timer_reset(%d),start_frame_count(%d)
Line 1791: uphy_CMultiPathDatabaseUpdatingUtility_updateOldMPInfotimer() Enter:timer_reset(%d),start_frame_count(%d)
Line 1809: uphy_CMultiPathDatabaseUpdatingUtility_updateOldMPInfotimer() Exit:timer_reset(%d),start_frame_count(%d),SFN_diff(%d)
Line 1809: uphy_CMultiPathDatabaseUpdatingUtility_updateOldMPInfotimer() Exit:timer_reset(%d),start_frame_count(%d),SFN_diff(%d)
Line 1920:  [MPDB] SetCellId[%d %d] : cellId = %d, globalCellId = %d, old globalCellId = %d
Line 1920:  [MPDB] SetCellId[%d %d] : cellId = %d, globalCellId = %d, old globalCellId = %d
Line 1932:  [MPDB] SetCellId[%d %d] : MPDB globalCellId = %d
Line 1932:  [MPDB] SetCellId[%d %d] : MPDB globalCellId = %d
Line 1939:  [MPDB] SetCellId[%d %d] : There is no cell in MPDB, so can't update cell id (%d)
Line 1939:  [MPDB] SetCellId[%d %d] : There is no cell in MPDB, so can't update cell id (%d)
Line 1971:  [MPDB]GetCellId[%d %d] : cellId=%d globalCellId=%d
Line 1971:  [MPDB]GetCellId[%d %d] : cellId=%d globalCellId=%d
Line 2009:  Reset RscpEcNo[%d %d] : rscp = %d, ecNo = %d
Line 2009:  Reset RscpEcNo[%d %d] : rscp = %d, ecNo = %d
