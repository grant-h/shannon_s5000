Line 770: ALLOC:LteRrm_AllocFreqInfoBuf(%d, 0x%x)
Line 920: Free:LteRrm_FreeFreqInfoBuf(%d, RAT:%d, Freq:%d, Addr:0x%x)
Line 950: LteRrm_AllocCellInfoBuf FULL
Line 977: ALLOC: CellInfoBufNum(%d)
Line 1147: FREE: CellInfoBufNum(%d), earfcn(%d), cell_id(%d)
Line 1213: UTRAN FreqInfo NUM(%d)
Line 1277: GERAN FreqInfo NUM(%d)
Line 1298: LteRrm_AddCdmaFreqInfoToList
Line 1302: FreqInfo is Null(%d, %d)
Line 1348: CDMA FreqInfo NUM(%d)
Line 1431: LteRrm_AddFreqInfoToList : pNewElem NULL
Line 1437: AddFreqInfoToList - pFreqList is empty : Add pNewElem as the Last element 
Line 1457: AddFreqInfoToList - pFreqList isn't empty : Sorting InterFreq
Line 1497: EUTRAN Inter FreqInfo NUM(%d)
Line 1520: LteRrm_RemoveFreqInfoFromList(earfcn:%d)
Line 1587: Wrong input: RAT_type(%d) is not for LteRrm_RemoveFreqInfoFromScellList
Line 1593: LteRrm_RemoveFreqInfoFromScellList(earfcn:%d)
Line 1599: Scell freq(%d) is removed.(ScellFreqNum:%d)
Line 1820: Scell(%d, %d) is not removed
Line 1860: Scell(%d, %d) is not removed
Line 1901: Scell(%d, %d) is not removed
Line 1985: LTE cell(earfcn:%d, PCID:%d, setType:%d,) is modified in listed set.
Line 1995: Scell(earfcn:%d, PCID:%d, setType:%d) is not removed
Line 2002: LTE cell(earfcn:%d, PCID:%d, setType:%d) is moved to ID_DETECTED set
Line 2009: LTE cell(earfcn:%d, PCID:%d, setType:%d) is moved to CANDI_DETECTED set
Line 2089: UMTS cell(arfcn:%d, scrCode:%d, setType:%d,) is modified in listed set.
Line 2172: GSM cell(arfcn:%d, setType:%d,) is modified in listed set.
Line 2232: Scell(%d, %d) is not removed
Line 2283: LteRrm_GetMatchedCellInfo warning!!! - RAT_type:%d, CellId:%d
Line 2312: LteRrm_GetMatchedCellInfo : Cell %d is empty in the set %d freq %d
Line 2453: pMatchedFreqInfo is NULL (pFreqList:0x%x, pFreqInfo:0x%x
Line 2562: No UTRA Freq Info so far
Line 2619: No GERAN Freq Info so far
Line 2664: LteRrm_GetMatchedGeranCellInfo : Cell %d is empty in the set %d freq %d
Line 2737: No CDMA Freq Info so far
Line 2819: Invalid CC mode(%d)
Line 2863: pNewServingCellInfo->cell_ID != LTERRM.Set.pPrimaryCell->cell_ID
Line 2914: Intra-Freq blind HO
Line 2945: Inter-frequency cell
Line 3045: Inter-Freq blind HO
Line 3077: IntraFreq NULL
Line 3116: pNewServingCellInfo is NULL
Line 3125: SameCellRevisit:%d
Line 3129: prevServCellId:%d, newServCellId:%d
Line 3132: SameCellRevisit:%d
Line 3151: IRAT HO ServingCellInfo Update
Line 3176: IntraFreq NULL
Line 3183: PrimaryCell NULL
Line 3202: IntraFreq NULL
Line 3254: Pcell Qoffset (%d -> %d)
Line 3260: Pcell IndOff (%d -> %d)
Line 3296: Listed cell (PCID:%d, Qoffset/IndOff:%d, set_type:%d)
Line 3321: Listed cell (PCID:%d, Qoffset/IndOff:%d, set_type:%d)
Line 3326: Cell info is NULL
Line 3368: Blacklisted cell detected (earfcn : %d, cell ID : %d)
Line 3408: ServCellID but different CP => Ignore search_result->Candidate[%d] (Cell(%d), CP(%d))
Line 3455: Listed cell detected but ignore it(%d, type:%d),[%d, %d], %d
Line 3472: Invalid set_type(%d) : cell ID=%d, cp=%d
Line 3487: No neighbor cell update : earfcn(%d), cell ID(%d), time_offset(%d), search_position(%d)
Line 3543: pWeakestCell m0(%d), m1(%d), m0_m1(%d)
Line 3553: pWeakestCell freed but not still exist : earfcn=%d, cell ID=%d
Line 3827: PrimaryCell=0x%x, IntraFreq=0x%x
Line 3842: EARFCN : %d, (max_m0 = %d, max_m1 = %d),(MaxM0 : %d, MaxM1 : %d)
Line 3852: SRCH Result[%d]: Cell_Id(%d) CpType(%d) frame_position(%d) CurPcellPos(%d)
Line 3884: [TDD only] primary cell(%d), neighbor cell(%d) - removed
Line 3899: SCell time offset Not Update(Primary:%d, Old:%d, New:%d, Diff:%d)
Line 3918: [CHECK] LteRrm_UpdateDetectedCellInfo_Scell is NULL(earfcn=%d, index:%d)
Line 3942: SCell time offset Update(Primary:%d, Old:%d, New:%d, Diff:%d)
Line 3964: [RRM TEST][SEARCH] Found Target Cell(earfcn:%d, cell id:%d, index:%d)
Line 3970: [RRM TEST][SEARCH] NOT Found Target Cell(earfcn:%d, cell id:%d, index:%d)
Line 3974: [RRM TEST][SEARCH] Cell Search Success Rate:%d (Total Cnt:%d, Fail Cnt:%d)
Line 3983: pFreqInfo is NULL
Line 3992: EARFCN : %d, (max_m0 = %d, max_m1 = %d),(MaxM0 : %d, MaxM1 : %d)
Line 4031: Warning! BlackList includes SCell(earfcn:%d, pci:%d) --> Not removed from cell buffer
Line 4080: LteRrm_UpdateAltTttCellList
Line 4092: - %d. cellIndex(%d) startPCI(%d) rangePCI(%d)
Line 4104: alt-TTT cellList numGroup(%d) numTotalCells(%d)
Line 4200: Blacklisted cell ignored (earfcn : %d, cell ID : %d)
Line 4232: alternative-TTT cell detected (earfcn(%d) cell ID(%d) cellIndex(%d))
Line 4291: LteRrm_ResetCsgReservedList
Line 4337: This is CSG Reserved List Cell (EARFCN : %d, Cell ID : %d)
Line 4379: LteRrm_UpdateCsgCellList(), EARFCN:%d
Line 4434: LteRrm_UpdateCsgProximityCellList(), EARFCN:%d
Line 4499: LteRrm_UpdateCsgProximityUtraCellList(), UARFCN:%d
Line 4563: This is CSG Cell (EARFCN : %d, Cell ID : %d)
Line 4588: LteRrm_ResetCsgCellList(), EARFCN:%d
Line 4641: This is CSG Cell (EARFCN : %d, Cell ID : %d)
Line 4666: LteRrm_RemoveCsgMeasList
Line 4675: Remove CSG Meas Request Intra EARFCN : %d
Line 4687: Remove CSG Meas Request Inter EARFCN : %d
Line 4711: Remove CSG Meas(ONLY) Request Inter EARFCN : %d
Line 4740: LteRrm_RemoveCsgUtraMeasList
Line 4750: Remove CSG Meas Request UARFCN : %d
Line 4775: Remove CSG Meas(ONLY) Request UARFCN : %d
Line 4804: LteRrm_UpdateCSGBarredList: EUTRA_List(%d),UTRA_List(%d), Restore List(%d)
Line 4844: Restore cell list(i): RAT_Type(%d), (E)ARFCN(%d), Cell_ID(%d)
Line 4856: Unsupported RAT Type:(%d)
Line 4892: Initialized Pcell Qoffset (%d -> 0)
Line 4902: num of intRA F n: %d
Line 4916: num of intRA F black: %d
Line 4941: Warning : pSIB4->csg_pci_range_present = %d
Line 4985: InterFreq: earfcn(%d) q_rxlevmin(%d) t_resel(%d) thresh_x_high(%d) thresh_x_low(%d) qoffset_freq(%d)
Line 4988: cell_resel_prio_present(%d) cell_resel_prio(%d) resel_sub_priority_present(%d) resel_sub_priority(%d)
Line 4992: q_qualmin_present(%d) q_qualmin(%d) thresh_x_Q_present(%d) thresh_x_Q(%d)
Line 4998: This Freq is not support(eNB error)(Earfcn:%d)
Line 5009: ERROR: Freq in SIB5 is same as Serv Freq (eNB error)
Line 5021: pFreqInfo NULL
Line 5034: pFreqInfo NULL
Line 5113: SIB5: q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d), q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
Line 5148: num of inter Freq : %d
Line 5162: num of inter Freq black : %d
Line 5201: Buffer overflow: TempNewNeighFreq buffer size is 8(LTE_RRC_MAX_FREQ)
Line 5234: SIB6 NTF: Start UTRA FDD Config
Line 5240: UtraFreq FDD: arfcn(%d) q_rxlevmin(%d) q_qualmin(%d) thresh_x_high(%d) thresh_x_low(%d) cell_resel_priority(%d)(present:%d)
Line 5245: qthresh_x_Q_present(%d) thresh_x_Q(%d)
Line 5262: pFreqInfo NULL
Line 5271: Cannot Allocate FreqInfo buffer
Line 5339: UtraFreq TDD: arfcn(%d) q_rxlevmin(%d) thresh_x_high(%d) thresh_x_low(%d) cell_resel_priority(present:%d)(%d)
Line 5356: pFreqInfo NULL
Line 5365: Cannot Allocate FreqInfo buffer
Line 5514: Arfcn(%d), Band_Indicator(%d), AccessTechIndex(%d), Band_Supported(%d)
Line 5539: UnSupported GSM Band(%d), Set Default Pmax(%d)
Line 5567: SIB7 NTF: Start GERAN Config
Line 5578: ( %d)[%s] SupportBand(%d), PowerClass(%d)
Line 5586: GeranFreq: band(%d) starting_arfcn(%d) num_of_arfcns(%d) q_rxlevmin(%d) thresh_x_high(%d) thresh_x_low(%d)
Line 5589: cell_resel_priority(present:%d)(%d)
Line 5607: pFreqInfo NULL
Line 5616: Cannot Allocate FreqInfo buffer
Line 5701: pCellInfo is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 5759: SIB8 NTF: Start CDMA HRPD Config
Line 5763: SIB8 Ptr is NULL
Line 5787: Bandclass is empty(%d)
Line 5795: Cdma(HRPD) Freq: band(%d) arfcn(%d) thresh_x_high(%d) thresh_x_low(%d)
Line 5798: cell_resel_priority(present:%d)(%d)
Line 5816: pFreqInfo NULL
Line 5826: Cannot Allocate FreqInfo buffer
Line 5874: num of CDMA HRPD neighbor: %d
Line 5892: NULL HRPD info in SIB8
Line 5915: Bandclass is empty(%d)
Line 5923: Cdma(1xRTT) Freq: band(%d) arfcn(%d) thresh_x_high(%d) thresh_x_low(%d)
Line 5926: cell_resel_priority(present:%d)(%d)
Line 5944: pFreqInfo NULL
Line 5954: Cannot Allocate FreqInfo buffer
Line 6001: num of CDMA 1xRTT neighbor: %d
Line 6019: NULL 1xRTT info in SIB8
Line 6058: CSG Freq: earfcn(%d) cell_resel_prio(%d) q_rxlevmin(%d) q_qualmin(%d)
Line 6065: num of IntraFreq(earfcn:%d) CSG Cell: %d
Line 6103: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 6143: pFreqInfo NULL
Line 6199: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 6238: CSG Meas Req: Start CSG UTRA FDD Config
Line 6244: UtraFreq: arfcn(%d) cell_resel_priority(%d) q_rxlevmin(%d) q_QualMin(%d)
Line 6253: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 6296: Cannot Allocate FreqInfo buffer
Line 6341: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 6384: LteRrm_SortRsrpToList : pNewSortedCellInfo is NULL
Line 6466: LteRrm_SortRsrqToList : pNewSortedCellInfo is NULL
Line 6529: LteRrm_SortRssiToList : pNewSortedCellInfo is NULL
Line 6612: LteRrm_InitGrayCellList
Line 6651: Not gray cell : earfcn = %d, cell id = %d
Line 6657: LteRrm_RemoveGrayCellList[%d]:earfcn(%d) cell_id(%d) cause(%d) startTime(%d) lastTime(%d)
Line 6821: Invalid cell : earfcn = %d, cell id = %d
Line 6830: LteRrm_FindGrayCellList[%d][cnt:%d]:earfcn(%d) cell_id(%d) cause(%d) startTime(%d) lastTime(%d)
Line 6865: Not gray cell : earfcn = %d, cell id = %d
Line 6888: LteRrm_CheckGrayCellList(EXIST MR)[%d]:earfcn(%d) cell_id(%d) cause(%d) startTime(%d) lastTime(%d)
Line 6896: LteRrm_CheckGrayCellList(EXIST)[%d]:earfcn(%d) cell_id(%d) cause(%d) startTime(%d) lastTime(%d)
Line 6904: LteRrm_CheckGrayCellList(NO TIME OUT)[%d]:earfcn(%d) cell_id(%d) cause(%d) startTime(%d) lastTime(%d)
Line 6937: gray cell index error
Line 6947: LteRrm_ReArrangeGrayCellList(%d)
Line 7124: Cell(Freq:%d, PCID:%d, L1_filter_length:%d) is not included in RSRP sorted list
Line 7137: Cell(Freq:%d, PCID:%d, L1_filter_length:%d) is not included in RSRQ sorted list
Line 7263: NCC for GERAN cell(Arfcn:%d, BSIC:%d, RSSI:%d) is not permitted.(Set Freq:%d, ncc_permitted:0x%X)
Line 7274: HRPD Cell(Freq:%d, PCID:%d, RSRP:%d) is removed in RRM RSRP sorted list
Line 7284: 1xRTT Cell(Freq:%d, PCID:%d, RSRP:%d) is removed in RRM RSRP sorted list
Line 7295: Cell(PCID:%d, RSRP:%d) is removed in RRM RSRP sorted list.(Freq:%d, best RSRP:%d)
Line 7304: LteRrm_ArrangeSortedList - default RAT(%d)
Line 7347: Cell(PCID:%d, RSRP:%d) is removed in RRM RSRQ sorted list.(Freq:%d, best RSRP:%d)
Line 7533: IDLE_S(%d)(%d) %d , (%d %d), %d, (RSRQ: %d)
Line 7539: IDLE_S(%d)(%d) %d , (%d %d), %d, (RSRQ: %d)
Line 7548: CONN_S(%d)(%d) %d , (%d %d), %d, (RSRQ: %d)
Line 7554: CONN_S(%d)(%d) %d , (%d %d), %d, (RSRQ: %d)
Line 7562: %s State (%d)(%d) %d , m0(%d), TO:%d, (RSRQ: %d)
Line 7568: %s State (%d)(%d) %d , m0(%d), TO:%d, (RSRQ: %d)
Line 7640: [%s] SORTED LIST(%d)
Line 7728: (PCID:%d) (RSRP:%4d), to:%d, (RSRQ: %4d)
Line 7733: (PSC:%d) (RSCP:%4d), to:%d, (EcNo: %4d)
Line 7738: (PSC:%d) (RSCP:%4d), to:%d
Line 7743: (arfcn:%d) (BI:%d) (BSIC:%d), (RSSI:%d), To:%d
Line 7749: (BC:%d) (BSID:%d), (PN_Strength:%d), (PN_Phase:%d)
Line 7755: (BC:%d) (BSID:%d), (PN_Strength:%d), (PN_Phase:%d)
Line 7809: [%s] SORTED LIST(%d)
Line 7816: (PCID:%d) (RSRP:%4d), to:%d, (RSRQ: %4d)
Line 7821: (PSC:%d) (RSCP:%4d), to:%d, (EcNo: %4d)
Line 7826: (PSC:%d) (RSCP:%4d), to:%d
Line 7831: (arfcn:%d) (BI:%d) (BSIC:%d), (RSSI:%d), To:%d
Line 7837: (BC:%d) (BSID:%d), (PN_Strength:%d), (PN_Phase:%d)
Line 7843: (BC:%d) (BSID:%d), (PN_Strength:%d), (PN_Phase:%d)
Line 8105: EARFCN(%d)
Line 8122: N pos change(sleep):(%d) %d -> %d
Line 8162: S pos change(sleep) : %d
Line 8171: PrimaryCell is NULL
Line 8192: SCell(earfcn=%d) timing change(sleep) : %d
Line 8217: Inter(earfcn=%d) timing change(sleep) : %d
Line 8339: Updated MRU(%d) : %d
Line 8352: Invalid EARFCN(0x%x) received, Don't update MRU table
Line 8582: LteRrm_GetDlBand: NOT Supported DL_EARFCN %d!!!
Line 8726: LteRrm_GetUlBand: NOT Supported UL_EARFCN %d!!!
Line 8793: SupportEarfcnList[%d] = %d
Line 8807: gLteRrm_SupportPci = %d
Line 8834: LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d!!!
Line 8862: HALEXP_CheckRFBandValid: NOT Supported DL_EARFCN %d!!!
Line 8879: gLteRrm_SupportEarfcnList: NOT Supported DL_EARFCN %d!!!
Line 8887: LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d!!!
Line 8914: PCID(%d) could not found in LteRrm_FindEutranSCellInfo
Line 8969: Cannot Allocate MeasList buffer
Line 8981: Cannot Allocate MeasList buffer
Line 8995: Cannot Allocate MeasList buffer
Line 9066: serving cell : earfcn(%d), band(%d), PCID(%d), DL(%d), UL(%d)
Line 9086: Eutran(intra:%d) : PCID(%d), RSRP(%d), RSRQ(%d)
Line 9135: Eutran(inter:%d) : earfcn(%d) PCID(%d), RSRP(%d), RSRQ(%d)
Line 9195: Utran(%d) : uarfcn(%d) PSC(%d), RSCP(%d), EcNo(%d)
Line 9254: Geran(%d) : arfcn(%d) BSIC(%d), RSSI(%d)
Line 9319: CDMA(%d) : channel(%d) PilotPnOffset(%d), PilotPnPhase(%d), PilotStrength(%d), Band(%d)
Line 9566: LteRrm_InitServCellInfo
Line 9585: ServCellInfo: bNormalCell(%d), earfcn(%d), pcid(%d)
Line 9604: Set ServCellInfo.startTime(%d)
Line 9605: mobility history Tmr START
Line 9624: Set ServCellInfo.lastTime(%d)
Line 9655: Set ServCellInfo.spentTime(%d) - bSpentTimeMax(%d)
Line 9683: Update plmn-id, cell-id in ServCellInfo
Line 9696: Monitor ServCellInfo
Line 9697: - CGI:%8x, MCC:%d, MNC:%d%x, EARFCN:%d
Line 9700: - pcid:%d, startTime:%d, lastTime:%d
Line 9720: NumVisitedCell would be %d > 16 (Max size)
Line 9726: - removed an oldest cell(earfcn:%d, pcid:%d)
Line 9730: NumVisitedCell(%d)
Line 9748: First camp-on: bFirstVisitedCell changes (1->0)
Line 9752: Add current cell to VisitedCellList
Line 9763: - added cell(earfcn:%d, pcid:%d)
Line 9764: - NumVisitedCell++: %d->%d
Line 9788: VisitedCellList(Num:%d) ---
Line 9793: %d. Earfcn:%d
Line 9794: - cellId:%d
Line 9795: - Mcc:%d, Mnc:%d%x
Line 9797: - GlobalCID:%8x
Line 9798: - spentTime:%d
Line 9840: LteRrm_InitVisitedCellList
Line 9863: LteRrm_FreeVisitedCellList
Line 9929: bNormalCell(%d)
Line 9930: - NULL information is stored in ServCellInfo
Line 9934: Error: bNormalCell(%d) in UpdateVisitedCellList out of range
Line 9977: Same cell revisit: no update for visitedCellList
Line 10000: LTERRM.Set.pVisitedCellList is NULL
Line 10027: Suspend cause(%d)
Line 10039: Suspend cause(%d) is out of range
Line 10077: - Visited Cell list index(%d) out of range
Line 10160: Warning! pFreqInfo is NULL
Line 10166: Warning! pci(%d) out of range
Line 10234: LteRrm_UpdateGapFaInfo : search_result is NULL
