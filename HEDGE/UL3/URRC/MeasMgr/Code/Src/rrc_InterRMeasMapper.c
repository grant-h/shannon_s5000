Line 143: InterRMapper FREED
Line 181: TerminateMeasurement: MeasInstId is NULL
Line 197: [rrc_InterRMeasMapper_TerminateMeasurement]:InterRMeasMapper_p MID(%d) will be terminated
Line 198: [rrc_InterRMeasMapper_TerminateMeasurement]:InterRMeasMapper_p->ConfiguredMids = 0X%x
Line 203: [rrc_InterRMeasMapper_TerminateMeasurement]:InterRMeasMapper_p MID(%d) wasn't configured
Line 208: [rrc_InterRMeasMapper_TerminateMeasurement]:There is no MID to be terminated
Line 229: [rrc_InterRMeasMapper_TerminateMeasurement]:MID %d released at UPHY
Line 241: [rrc_InterRMeasMapper_TerminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 246: [rrc_InterRMeasMapper_TerminateMeasurement]: TID = 0 for FirstConfMID = %d
Line 267: [rrc_InterRMeasMapper_TerminateMeasurement]:First Configured MID Change [%d] -> [%d]
Line 275: [rrc_InterRMeasMapper_TerminateMeasurement]: No Cells to Config
Line 296: There is more MIDs(0x%X) left
Line 306: [rrc_InterRMeasMapper_TerminateMeasurement]: No Cells to Remove
Line 327: [rrc_InterRMeasMapper_DoMeasurement]: MID = %d 
Line 333: [rrc_InterRMeasMapper_DoMeasurement]:InterRMeasMapper_p MID(%d) will be modified
Line 338: [rrc_InterRMeasMapper_DoMeasurement]:InterRMeasMapper_p MID(%d) will be configured
Line 339: [rrc_InterRMeasMapper_DoMeasurement]:InterRMeasMapper_p->ConfiguredMids = 0X%x
Line 360:  FILTERED GSM REMOVE CELL[%d] = %d 
Line 380:  FILTERED GSM ADD CELL[%d] = %d 
Line 389: BSIC Verification is required from GSM MeasCtrl Modify
Line 394: BSIC Verification is still not required from GSM MeasCtrl Modify
Line 403: [Modify to Add] CellId[%d] ARFCN(%d), BSIC(Ncc: %d, Bcc: %d)
Line 411: [Modify to Remove] CellId[%d] ARFCN(%d), BSIC(Ncc: %d, Bcc: %d)
Line 432: [rrc_InterRMeasMapper_DoMeasurement]: No Cells to Modify
Line 437: [rrc_InterRMeasMapper_DoMeasurement]: ERROR: MeasInst [MID %d] is NULL
Line 464: [rrc_InterRMeasMapper_DoMeasurement]: No Cells to Config
Line 469: [rrc_InterRMeasMapper_DoMeasurement]: ERROR: MeasInst [MID %d] is NULL
Line 539: rrc_ss_AllocBuff failed for rrc_CUPHY_GsmMeasConf_REQ
Line 573: rrc_ss_AllocBuff failed for rrc_CUPHY_GsmMeasMod_REQ!!
Line 595: [rrc_InterRMeasMapper_DoMeasurementConfig]:InterRMeasMapper_p MID(%d) will be FIRST configured
Line 599: [rrc_InterRMeasMapper_DoMeasurementConfig]: FIRST configured MID(%d), CURRENT Configuring MID(%d)
Line 641: rrc_ss_AllocBuff failed for rrc_CUPHY_GsmMeasConf_REQ
Line 684: [rrc_InterRMeasMapper_NotifyReport]:MID(%d) is not existed, so removed from DB
Line 690: [rrc_InterRMeasMapper_NotifyReport][GSM_EVENT] Cell id %d Configured for MID %d
Line 699: MID[%d] Created InterRMeasInd(0x%X)
Line 735: rrc_InterRMeasMapper_NotifyReport : Inst Id is NULL !!
Line 758: [rrc_InterRMeasMapper_NotifyReport] MID %d was stopped
Line 801: [rrc_InterRMeasMapper_NotifyReport]:MID(%d) is not existed, so removed from DB
Line 807: [rrc_InterRMeasMapper_NotifyReport][GSM_PERIOD] Cell id %d Configured for MID %d
Line 817: MID[%d] Created InterRMeasInd(0x%X)
Line 854: rrc_InterReasMapper_NotifyReport : Inst Id is NULL !!
Line 876: [rrc_InterRMeasMapper_NotifyReport] MID %d was stopped
Line 908: rrc_InterRMeasMapper_ApplyGsmFilterCoeff : Inst Id is NULL !!
Line 963: rrc_InterRMeasMapper_ApplyUtranFilterCoeff : Inst Id is NULL !!
Line 1134: [rrc_InterRMeasMapper_GetReportingQuantities]: InterRatMeasQuantity for MID[%d] has modified !
Line 1157: [rrc_InterRMeasMapper_GetReportingQuantities]: InterRatMeasQuantity for MID[%d] has modified !
Line 1188: [rrc_InterRMeasMapper_AddCell]: Cell ID %d : FrequencyBand %d BcchArfcn %d already present : Appended MID %d : MidBitmap = 0X%x
Line 1194: [rrc_InterRMeasMapper_AddCell]: Cell ID %d : FrequencyBand %d BcchArfcn  %d No Previous MIDs Configured!!
Line 1201: [rrc_InterFMeasMapper_AddCell]: Cell ID %d :BcchArfcn MISMATCH !! DB FrequencyBand %d BcchArfcn  %d  CIL FrequencyBand %d BcchArfcn %d
Line 1214: [rrc_InterFMeasMapper_AddCell]: Cell ID %d : FrequencyBand %d BcchArfcn  %d newly added :  MidBitmap = 0X%x
Line 1221: [rrc_InterFMeasMapper_AddCell]: BcchArfcn	%d NOT added as Not found in CellInfo List
Line 1236: [rrc_InterRMeasMapper_RemoveCell]: MeasInstId is NULL
Line 1252: [rrc_InterRMeasMapper_RemoveCell]: FrequencyBand %d BcchArfcn %d still configured at UPHY:  MidBitmap = 0X%x
Line 1258: [rrc_InterRMeasMapper_RemoveCell]: FrequencyBand %d BcchArfcn %d is REMOVED from UPHY
Line 1278: [rrc_InterRMeasMapper_RemoveCell]:Cell Id %d -> Cell Id %d : FrequencyBand %d BcchArfcn %d is being REPLACED at UPHY
Line 1290: [rrc_InterRMeasMapper_RemoveCell]:Arcfn %d already Changed from Cell Id %d -> Cell Id %d
Line 1297: [rrc_InterRMeasMapper_RemoveCell]: BcchArfcn %d not Found in OLD Saved CIL 
Line 1301: [rrc_InterRMeasMapper_RemoveCell]: Cell Id %d : No Cell To Remove in DB/UPHY
Line 1305: [rrc_InterRMeasMapper_RemoveCell]: Cell Id %d : MISMATCH!! : DB FrequencyBand %d BcchArfcn %d , CIL FrequencyBand %d BcchArfcn %d
Line 1324: [rrc_InterRMeasMapper_RemoveCell]: FrequencyBand %d BcchArfcn %d is being replaced: REMOVE from UPHY
Line 1336: [rrc_InterRMeasMapper_RemoveCell]: Cell Id %d : No Cell To Remove in UPHY
Line 1340: [rrc_InterRMeasMapper_RemoveCell]: Cell Id %d : Cell Not Removed from UPHY : Old Cell already removed : DB(new) FrequencyBand %d BcchArfcn %d, CIL(old) FrequencyBand %d BcchArfcn %d
Line 1348: [rrc_InterRMeasMapper_RemoveCell]:  Cell Neither found in Cell Info List nor Measured for MID %d
Line 1360: [rrc_InterRMeasMapper_GetCellMidBitmap]: CellId %d MidBitmap = 0X%x
Line 1366: [rrc_InterRMeasMapper_GetCellMidBitmap]: Invalid CellNo %d
Line 1413: [rrc_InterRMeasMapper_GetAllPreviousCellInfoForMID]: MeasInstId is NULL
Line 1491: [rrc_InterRMeasMapper_UpdateCellInfoList] Measurement Instance for MID(%d) is NULL
Line 1513: [rrc_InterRMeasMapper_UpdateCellInfoList] CellId(%d) is found in CellsForMeas
Line 1520: [rrc_InterRMeasMapper_UpdateCellInfoList] CellId(%d) is not found in CellsForMeas
Line 1529: [rrc_InterRMeasMapper_UpdateCellInfoList] GsmCellId[%d] ARFCN(%d) BSIC(Ncc: %d, Bcc: %d) is already existed in InterRMeasMapperDB
Line 1540: [rrc_InterRMeasMapper_UpdateCellInfoList] updatedGsmCellsToAdd(%d) exceeded MAX(32)
Line 1549: [rrc_InterRMeasMapper_UpdateCellInfoList] GsmCellId[%d] ARFCN(%d) BSIC(Ncc: %d, Bcc: %d) is newly added
Line 1565: [rrc_InterRMeasMapper_InvalidateTid]: TID invalidate called for MID %d configured in UPHY
Line 1572: [rrc_InterRMeasMapper_InvalidateTid]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 1592: rrc_InterRMeasMapper_ApplyUtranFilterCoeff : Inst Id is NULL !!
