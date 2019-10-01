Line 94: ERROR NewElement is NULL 
Line 254: PrivRemoveEntry: Curr is NULL
Line 291: rrc_VisitedCsgList_IsEmpty
Line 321: [rrc_VisitedCsgList_AddCell] SrcRat(%d) Srcfreq(%d) SrcCpich(%d) SrcCellId(%d) for TgtFreq(%d) TgtCpich(%d) TgtCsgId(%d) is added in Visted CSG list
Line 364: rrc_VisitedCsgList_UpdateVisitedCsgList : update_type is RRC_UPDATE_RAT_CHANGE(%d)
Line 375: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfTargetCellInfo(%d)
Line 380: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfSourceCell[%d] for TargetCellIdx[%d]
Line 385: rrc_VisitedCsgList_UpdateVisitedCsgList : DetectedCsgList Update
Line 386: rrc_VisitedCsgList_UpdateVisitedCsgList : This is DetectedCsgList[%d] CSGID(%d) CsgCellType(%d)
Line 389: SourCell RAT(UMTS) SourCell PlmnId(%x%x%x), SourCell Uarfcn(%d), SourceCell Cpich(%d), SourCell CellId(%d) SourceCell Lac(%d)
Line 397: TargetCell RatType(%d) TargetCell PlmnId(%x%x%x), TargetCell Arfcn(%d), TargetCell PhyCellId(%d), TargetCell CellId(%d)
Line 430: rrc_VisitedCsgList_UpdateVisitedCsgList : SourceCellIdx[%d] for TargetCellIdx[%d]
Line 468: rrc_VisitedCsgList_UpdateVisitedCsgList : update_type is RRC_UPDATE_CSG_SCANNED_RESULT(%d) during Background CSG ID Scan
Line 470: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfTargetCellInfo(%d)
Line 486: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfSourceCell[%d] for TargetCellIdx[%d]
Line 494: rrc_VisitedCsgList_UpdateVisitedCsgList : This is DetectedCsgList[%d] CSGID(%d) CsgCellType(%d)
Line 497: SourCell RAT(UMTS) SourCell PlmnId(%x%x%x), SourCell Uarfcn(%d), SourceCell Cpich(%d), SourCell CellId(%d) SourceCell Lac(%d)
Line 499: TargetCell RatType(%d) TargetCell PlmnId(%x%x%x), TargetCell Arfcn(%d), TargetCell PhyCellId(%d), TargetCell CellId(%d)
Line 532: rrc_VisitedCsgList_UpdateVisitedCsgList : SourceCellIdx[%d] for TargetCellIdx[%d]
Line 559: rrc_VisitedCsgList_UpdateVisitedCsgList : update_type is RRC_UPDATE_CSG_SCANNED_RESULT(%d)
Line 561: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfTargetCellInfo(%d)
Line 566: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfSourceCell[%d] for TargetCellIdx[%d]
Line 572: rrc_VisitedCsgList_UpdateVisitedCsgList : This is DetectedCsgList
Line 599: rrc_VisitedCsgList_UpdateVisitedCsgList : SourceCellIdx[%d] for TargetCellIdx[%d]
Line 627: Invalid UpdateVisitedCsgList size(%d)
Line 639: [rrc_VisitedCsgList_UpdateLastSourceCellInfo]: LastSourceCellPresent %d (rat_type %d, arfcn %d phy_cell_id %d lac %d cell_id %d)
Line 671: [rrc_VisitedCsgList_RemoveCSGIDFromVisitedCsgList]: REMOVE CSG ID %d (Uarfcn %d, Cpich %d) from VistedCsgList
Line 752: !!!!!!!! Current Cell is Source Cell - Source PLMN ID (0x%02X, 0x%02X, 0x%02X) CurrPlmnId (0x%02X, 0x%02X, 0x%02X)
Line 755: !!!!!!!! ----------------------------- Source-CellID (%d) Curr-CellID (%d) Source-Lac(%d) Curr-Lac(%d)
Line 757: !!!!!!!! ----------------------------- Source RatType(%d) Target RatType(%d) CSGID (%d) E/U-arfcn(%d) PhyCellId-Cpich(%d)
Line 765: !!!!!!!! Current Cell is not a Source Cell - PLMN ID (0x%02X, 0x%02X, 0x%02X) CellID (%d) CurrLac (%d)
Line 862: rrc_VisitedCsgList_getTargetVisitedCsgCellInfo_UMTS - RatType(%d) Source PLMNID (0x%02X, 0x%02X, 0x%02X) Source CellID (%d)
Line 864: rrc_VisitedCsgList_getTargetVisitedCsgCellInfo_UMTS - CSGID (%d) - Target E/U-Arfcn(%d) Target PhyCellId/Cpich(%d)
Line 897: rrc_VisitedCsgList_getVisitedCsgCellList - RatType(%d) Source PLMNID (0x%02X, 0x%02X, 0x%02X) Source CellID (%d)
Line 899: rrc_VisitedCsgList_getVisitedCsgCellList - CSGID (%d) - Target E/U-Arfcn(%d) Target PhyCellId/Cpich(%d)
Line 928: rrc_VisitedCsgList_isTargetCsgCellInfoPresent - TargetRatType(%d) Target PLMNID (0x%02X, 0x%02X, 0x%02X)
Line 930: rrc_VisitedCsgList_isTargetCsgCellInfoPresent - CSGID (%d) - Target E/U-Arfcn(%d) Target PhyCellId/Cpich(%d)
Line 949: rrc_VisitedCsgList_isTargetCsgFreqInfoPresent - TargetRat (%d) - Target E/U-Arfcn(%d)
Line 958: rrc_VisitedCsgList_isTargetCsgFreqInfoPresent - TargetRatType(%d) Target PLMNID (0x%02X, 0x%02X, 0x%02X)
Line 960: rrc_VisitedCsgList_isTargetCsgFreqInfoPresent - CSGID (%d) - Target E/U-Arfcn(%d)
Line 992: S-CellId(%d) S-UARFCN %d S-Cpich %d >>>> T-UARFCN %d T-Cpich %d
Line 1051: rrc_VisitedCsgList_isAlreadyHaveVisitedCsgCellInfo - Same VisitedCsgList is already existS-CellID (%d) T-CellId(%d) T-Uarfcn(%d) T-Cpich (%d)
Line 1070: rrc_VisitedCsgList_isAlreadyHaveVisitedCsgCellInfo - Same VisitedCsgList is already existS-CellID (%d) T-CellId(%d) T-Uarfcn(%d) T-Cpich (%d)
Line 1083: rrc_VisitedCsgList_isAlreadyHaveVisitedCsgCellInfo - Unknown List Type
Line 1086: rrc_VisitedCsgList_isAlreadyHaveVisitedCsgCellInfo - Same VisitedCsgList is already exist
Line 1097: rrc_VisitedCsgList_PrintCurrentVisitedCsgCellInfo - S-PLMN ID (0x%02X, 0x%02X, 0x%02X) S-CellID (%d) S-Lac(%d) for CSGID (%d)
Line 1100: rrc_VisitedCsgList_PrintCurrentVisitedCsgCellInfo - T-PLMN ID (0x%02X, 0x%02X, 0x%02X) T-CellID (%d) T-Uarfcn(%d) T-Cpich(%d)
Line 1121: T-CellId[%d] with T-RatType(%d) U-arfcn(%d) T-Cpich(%d) present in VisitedCsgList with CSGID (%d) 
Line 1140:  Target CSG Cells found: U-arfcn(%d) CsgId(%d) 
Line 1146: No Target CSG Cells found 
