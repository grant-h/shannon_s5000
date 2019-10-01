Line 173: 3G NCell list:
Line 179:  Index:%d Uarfcn:%d SCD:%d FDD:%d RSCP:%d Ec_No:%d
Line 208: ***********************************************************************
Line 210: Utran Monitor List - NumOfArfcn (%d)
Line 215:   (%d):uarfcn(%d):#SCD(%d):SCD(%d) / isBAList (%d)
Line 224:   (%d):TDD uarfcn(%d):#SCD(%d):SCD(%d) / isBAList (%d)
Line 230: Utran Neighbout Cell list 
Line 231: Utran Prev Neighbout Cell list 
Line 233: UtranReselUarfcn (%d)
Line 234:    %d %d %d %d
Line 235:    %d %d %d %d
Line 237:    %d %d %d %d
Line 238:    %d %d %d %d
Line 240: UtranReselUarfcnToScan (%d)
Line 241:  uarfcn  %d %d %d %d
Line 242:  scd  %d %d %d %d
Line 243: ***********************************************************************
Line 303: Invalid number of max band for 3G !!!! %d
Line 310: uarfcnIndex %d
Line 338: TDD Uarfcn %d found
Line 351: UARFCN range is OK %d - is3GBAList (TRUE)
Line 358: CELL SELECTION ON CHN REL -->> UTRAN TDD CELLS, %d
Line 366: Change DuplexMode to prev one -> %d
Line 376: CELL SELECTION ON CHN REL -->> UTRAN FDD CELLS, %d
Line 384: Change DuplexMode to prev one -> %d
Line 392: UARFCN range is INVALID !!! %d
Line 428: UTRAN_MEAS_CELLS_IND List 1 is corrupted (List1->NumUarfcns=%d) List1->NumUarfcns_TDD=%d 
Line 435: UTRAN_MEAS_CELLS_IND List 2 is corrupted (List2->NumUarfcns=%d) List2->NumUarfcns_TDD=%d
Line 444: UTRAN_MEAS_CELLS_IND List 1 is corrupted (List1->NumUarfcns=%d) 
Line 451: UTRAN_MEAS_CELLS_IND List 2 is corrupted (List2->NumUarfcns=%d) 
Line 484:  Uarfcn:%d SCD:%d isBaList %d
Line 514:  Uarfcn:%d SCD:%d isBaList %d
Line 558:  TDD Uarfcn:%d SCD:%d isBaList %d
Line 588:  TDD Uarfcn:%d SCD:%d isBaList %d
Line 660: [G2U][PRIO] rr_UtranConvertNcell: skip UARFCN:%d which has invalid or lower priority:%d
Line 674:  Uarfcn=%d is 3GBA(%d)
Line 697:  SCD=%d
Line 741:  TDD Uarfcn=%d is3GBA(%d)
Line 766:  SCD=%d
Line 839: [G2U][PRIO] rr_AddUtranReselUarfcns: skip UARFCN:%d which has invalid or lower priority:%d
Line 861:  Resel Uarfcn=%d isBaList %d
Line 873:   SCD=%d
Line 919:  Resel TDD Uarfcn=%d isBaList %d
Line 928:   SCD=%d
Line 974: Update 3G Monitor List (UtranListSent=%d)
Line 1011: Only QFRUarfcn %d is added for measurement
Line 1036: QFRUarfcn %d is added for measurement
Line 1045: NumUarfcn_TDD reached max value!!
Line 1053: NumUarfcn_TDD (%d) Num Cell(%d)
Line 1057: TotalNumCells(%d)
Line 1087: Only QFRUarfcn is already added for measurement
Line 1098: Check for deletions:
Line 1117: Check for additions:
Line 1133: Check for deletions: UtranMonitorListPrevNCL
Line 1162: UtranMonitorList Updated
Line 1169: 	(%d):uarfcn(%d):#SCD(%d):SCD(%d) isBaList (%d) 
Line 1177: 	(%d):TDD uarfcn(%d):#SCD(%d):SCD(%d) isBaList (%d) 
Line 1188: Monitor List is corrupted (rr_ServSupp.UtranMonitorList.NumUarfcns=%d)
Line 1195: Monitor List is corrupted (rr_ServSupp.UtranMonitorList.NumUarfcns_TDD=%d)
Line 1201: Monitor List contains:
Line 1204:  Uarfcn %d with %d Scrambling Codes
Line 1211: Monitor List contains:
Line 1214:  TDD Uarfcn %d with %d Scrambling Codes
Line 1221: Monitor List is empty
Line 1224: Utran Prev Neighbout Cell list before remve duplicates 
Line 1243: Utran Prev Neighbout Cell list after remove duplicates 
Line 1276: Update Prev 3G Monitor List (UtranListSent=%d)
Line 1279: rr_FDDSupported(%d) rr_UtranMeasState(%d) AUTONOMOUS_RESELECTION(%s)
Line 1298: Check for additions: UtranMonitorListPrevNCL
Line 1306: UtranMonitorListPrevNCL Updated
Line 1321: Previous 3GMonitor List is corrupted (rr_ServSupp.UtranMonitorList.NumUarfcns=%d)
Line 1331: Previous 3G Monitor List contains:
Line 1334:  Uarfcn %d with %d Scrambling Codes
Line 1340: TDD Uarfcn %d with %d Scrambling Codes
Line 1347: Previous 3G Monitor List is empty
Line 1372: UARFCN ScanReq: Fdd(%d),MeasState(%d),RR_IDLE(%d),RR_PKT(%d)
Line 1373: UARFCN ScanReq:AccessInPrg(%d),Reorg(%d),NCo(%d),GmmRdy(%d)
Line 1374: UARFCN ScanReq: rr_PostCsNonDrxPeriod(%d),rr_PostPsNonDrxPeriod(%d)
Line 1375: UARFCN ScanReq: RR_STATE_IS_CELL_SELECTION(%d),rr_ServSupp.page_mode(%d),CS_PAGING_ON_PCH(%d)
Line 1376: UARFCN ScanReq: rr_ServSupp.packet_page_mode(%d),rr_ServCell->OnPBCCH(%d)
Line 1377: UARFCN ScanReq: NbUtranReselUarfcnsToScan(%d),rr_MmDuplexMode(%d / 0:FDD 1:TDD 2:FDD&TDD)
Line 1381: Partial Search will be performed in PTM
Line 1390: ScanRequired(%d)
Line 1433: Request scan of UARFCN %d, FDD %d
Line 1436: UARFCN_SCAN_TRIGGERED
Line 1446: ScanNeeded(%d)
Line 1447: rr_MmDuplexMode(%d / 0:FDD 1:TDD 2:FDD&TDD)
Line 1453: UARFCN_SCAN_HOLD 2
Line 1492: UARFCN SCAN ABORT from GL1, Set UARFCN_SCAN_HOLD
Line 1508: MPH_UARFCN_SCAN_RSP for UARFCN %d, FDD %d
Line 1530:  TDD Scrambling Codes changed
Line 1538:  Number of TDD Scrambling Codes changed
Line 1552:  Scrambling Codes changed
Line 1560:  Number of Scrambling Codes changed
Line 1577: ERROR RtkGetMemory returned NULL
Line 1584:   SCD:%d
Line 1588: [TDD][G2U][SCAN] 3G NCELL [%d,%d]
Line 1596:    FOUND from the UtranReselUarfcnToScan list, preserve it
Line 1627: [G2U][SCAN] 3G NCELL [%d,%d]
Line 1635:    FOUND from the UtranReselUarfcnToScan list, preserve it
Line 1672:  rr_HandleUarfcnScanRsp: Set the FddRscpThreshold:%d
Line 1703:   No Scrambling Codes!
Line 1726:   Too many Scrambling Codes in message - %d !!!
Line 1769:  Max UARFCNs being monitored
Line 1786:   Remove UARFCN %d from scan list
Line 1791:   ERROR Scenario NbUtranReselUarfcnsToScan (%d)  
Line 1818: rr_HandleUarfcnScanRsp: ScanRequred(%d). ScanTimer(%d)
Line 1887: Update 3G Resel UARFCN List
Line 1906:  Don't handle Resel UARFCNs
Line 1918:  Don't handle Resel UARFCNs
Line 1978:  Remove UARFCN %d from scan list
Line 1983:   ERROR Scenario NbUtranReselUarfcnsToScan (%d)  
Line 2042:  Add Resel UARFCN %d to scan list
Line 2061:  Can't add Resel UARFCN %d to scan list as it's already full
Line 2097:  Add Resel TDD UARFCN %d to scan list
Line 2108:  Can't add Resel TDD UARFCN %d to scan list as it's already full
Line 2140:  Add NCell UARFCN %d to scan list
Line 2159:  Can't add NCell UARFCN %d to scan list as it's already full
Line 2186:  Add NCell TDD UARFCN %d to scan list
Line 2197:  Can't add NCell UARFCN %d to scan list as it's already full
Line 2287: AbsIndexStartEmr(%d)/ Nb 3G Meas(%d)
Line 2288: Check UtranMeasData in UtranNeighbourCellList
Line 2292: Meas Uarfcn:%d SCD:%d FDD:%d
Line 2323:   Cell found - Index %d
Line 2330: ReportType:%d, AbsIndEmr:%d,  Cell found - Index:%d
Line 2338: 3G cell Index:%d
Line 2374:    RepIdx:%d RSSI:%d RSCP:%d Ec_No:%d ValidMeasAge %d
Line 2402:   ReselUarfcn found
Line 2435:    RSCP:%d Ec_No:%d, ValidMeasAge %d
Line 2451:  TDD ReselUarfcn found
Line 2484:    RSCP:%d Ec_No:%d, ValidMeasAge %d
Line 2497:  Measurment not found in list
Line 2504:  Adding Partial list  of TDD cell: UARFCN:%d
Line 2508:  Adding Partial list  of TDD cell: index:%d
Line 2509:  Adding Partial list  of TDD cell: CPI:%d
Line 2530:  Adding Partial list  of TDD cell: NumScramblingCodes_TDD:%d
Line 2543: Check UtranMeasData in UtranPrevNeighbourCellList
Line 2551: Meas Uarfcn:%d SCD:%d FDD:%d
Line 2601:  Prev  RepIdx:%d RSSI:%d RSCP %d Ec_No:%d ValidMeasAge %d
Line 2641: MPH_UTRAN_MEAS_REPORT_IND(%d)
Line 2645: Ignore MPH_UTRAN_MEAS_REPORT_IND, rr_UtranMeasState %d
Line 2651: Ignore MPH_UTRAN_MEAS_REPORT_IND, rr_InterRatStatus = %d
Line 2664: [G2U][MEAS] 3G UARFCN [%d] RSSI = %ddBm / UtranMeasData->NbMeas:%d
Line 2683: [G2U][MEAS] 3G NCELL [%d,%d] RSCP = %ddBm, Ec/No = %ddB / UtranMeasData->NbMeas:%d
Line 2737: QFR: j-%d MeasResultList UARFCN:%d SCD:%d RSCP:%d
Line 2764: [TDD][G2U][MEAS] 3G UARFCN [%d] RSSI = %ddBm / UtranMeasData->NbMeas:%d
Line 2783: [TDD][G2U][MEAS] 3G NCELL [%d,%d] RSCP = %ddBm / UtranMeasData->NbMeas:%d
Line 2824: UtranNeighbourCellList:
Line 2827: UtranPrevNeighbourCellList:
Line 2865:   Check for 3G Cells with RSSI, UtranMeasData->NbMeas:%d, NoOfCellsReqd:%d, rr_3GCellAllowedToReport:%d
Line 2870:   Check for 3G Cells with RSCP/Ec_No, UtranMeasData->NbMeas:%d, NoOfCellsReqd:%d, rr_3GCellAllowedToReport:%d
Line 2876:   rr_3GCellAllowedToReport: FALSE
Line 2890:    Meas:%d Index:%d Uarfcn:%d SCD:%d RSCP:%d EcNo:%d
Line 2920:     Measurement discarded - Report below threshold
Line 2931:     Measurement discarded - Report below threshold
Line 2940: Forcing MR instead of EMR as rr_ForceNormalReporting
Line 2947:     Measurement discarded - Duplicate GSM Index
Line 2958:     Measurement discarded - Duplicate Index %d 
Line 2972:   Report  Index:%d ReportQuantity:%d NbMeas:%d
Line 2986: 3G Cells RSSI: %d,SCD: %d, transfer: %d 
Line 2992: 3G Cells no measurements 
Line 2996:    3G Cells selected: %d
Line 3022: Edge_Irat_Config:%x Mode=%d UTRAN_MEAS_REQ_START
Line 3026: rr_SelectUtranMeasReqMode: QSearch=%d RxLev=%d
Line 3064: [G2U][PRIO] rr_SelectUtranMeasReqMode: CurrentMode:%d ThreshPrioritySearch:%d, NumHighPrioUarfcn:%d
Line 3071: [G2U][PRIO] Since High priority UARFCN are there, keep CurrentMode:%d
Line 3078: [G2U][PRIO] Since no High priority UARFCN are there and IgnoreLowPriority is TRUE, Mode is set to UTRAN_MEAS_REQ_STOP
Line 3083: [G2U][PRIO] Since IgnoreLowPriority is FALSE, keep CurrentMode:%d
Line 3092: Triggering measurements only for QFR
Line 3096: rr_SelectUtranMeasReqMode End: Mode=%d 
Line 3126: UTRAN_MEAS_REQ_STOP after IRAT Resel
Line 3130: No Need to Stop IRAT Meas %d %d 
Line 3162: rr_UtranMeasTrigger: FDD not Supported && rr_UtranMeasState == UTRAN_MEAS_REQ_STOP  
Line 3166: MODE_UPDATED_TDD(StackId) is true , rr_FDDSupported force set to TRUE
Line 3171: MODE_UPDATED_TDD is false
Line 3177: rr_UtranMeasTrigger: rr_InterRatStatus %d,  rr_State%d
Line 3179:  QSearchP %d,  QSearchI %d, rr_UtranMeasState %d
Line 3182: QSearchP_PMO_PCCO (%d)
Line 3187: rr_UtranMeasTrigger: QSearchI will be used for QSearchP (%d)
Line 3192: rr_UtranMeasTrigger: QSearchP_PMO_PCCO will be used for QSearchP (%d)
Line 3235: 3G measurement is blocked by Qsearch_P(%d). Use Qsearch_I(%d)
Line 3272: Stopping IRAT measurements in rr_PlmnState: %d
Line 3279: Stopping IRAT measurements in rr_InterRatStatus: %d
Line 3287: rr_FDDSupported %d
Line 3300: UTRAN_MEAS_REQ_START
Line 3304: UTRAN_MEAS_REQ_STOP
Line 3370: Error!!! Out Of Range(Type:%d,Val:%d)
Line 3687: Error!!! Out Of Range rr_ConvertToMeasuredValue(Type:%d,Val:%d)
Line 3799: Error!!! Invalid Type rr_ConvertToReportedValue(Type:%d,Val:%d)
Line 3854: [TDD] UtranNeighbourCellList[%d] assign 3G NCELL [%d,%d] into UtranReselList.Cell_Tdd[%d]
Line 3869: [FDD] UtranNeighbourCellList[%d] assign 3G NCELL [%d,%d] into UtranReselList.Cell[%d]
Line 3905: [FDD] UtranReselUarfcnToScan[%d] assign 3G NCELL [%d,%d] into UtranReselList.Cell[%d]
Line 3933: [TDD] UtranReselUarfcnToScan[%d] assign 3G NCELL [%d,%d] into UtranReselList.Cell_Tdd[%d]
Line 3973: [FDD] UtranPrevNeighbourCellList[%d] assign 3G NCELL [%d,%d] into UtranReselList.Cell[%d]
Line 3988: [TDD] UtranPrevNeighbourCellList[%d] assign 3G NCELL [%d,%d] into UtranReselList.Cell_Tdd[%d]
Line 4016: NoOfCells == UtranReselList.NoOfCells
Line 4021:  UtranReselList.NoOfCells FDD:%d, TDD:%d
Line 4053: All 3G Resel Params Cleared
Line 4157: Release All 3G Prio Lists 
Line 4196:   3GHighPrioReselList (%d) 3GLowPrioReselList (%d) 3GReselGSMList(%d)
Line 4247: Finding Freq and SCD in Prio IRAT LIST: F(%d) SCD (%d)  Elem(%d)
Line 4252: Elem (%d) SCD (%d)  : F(%d) 
Line 4255: Address of Elem returned is (%d):
Line 4312: Adding  in Reselection Q Freq  (%d) Cell (%d)  Prio (%d) SNonServ(%d) 
Line 4333: Start list with  %d
Line 4348: ERROR RtkGetMemory returned NULL
Line 4365: Meas already in  Reselection Q Freq  (%d) Cell (%d)  Prio (%d) SNonServ(%d) 
Line 4373:  Reselection Q Freq  (%d) Cell (%d)  Prio (%d) SNonServ(%d) 
Line 4432: rr_sortQueueForG2UReselection: numEutranCell(%d)
Line 4453:  Before sorting 3G NCELL [%d,%d] [Priority(%d) SNONserving(%d) ReselIndex(%d)]
Line 4469:  After sorting on Priority 3G NCELL [%d,%d] [Priority(%d) SNONserving(%d) ReselIndex(%d)]
Line 4489:  After sorting on Snonserving 3G NCELL [%d,%d] [Priority(%d) SNONserving(%d) ReselIndex(%d)]
Line 4500: rr_sortQueueForG2UReselectionGSM: numUtranCell(%d)
Line 4521:  Before sorting 3G NCELL [%d,%d] [Priority(%d) SNONserving(%d) ReselIndex(%d)]
Line 4533:  After sorting on Snonserving 3G NCELL [%d,%d] [Priority(%d) SNONserving(%d) ReselIndex(%d)]
Line 4570: [G2U][PRIO][EVAL] 2G SCELL [%d,%d] [C1:%d GERAN_PRIORITY:%d THRESH_GSM_low:%d H_PRIO:%d]
Line 4585: 3G NCELL [%d,%d] Reset T_ReselCount to zero, UtranMeasAge:%d
Line 4618: 3G NCELL [%d,%d] no valid priority or threshold is provided
Line 4629: 3G NCELL [%d,%d] %s Priority:%d S_UTRAN:%d RSCP:%d
Line 4634:  QRXLEVMIN:%d(%d) THRESH_UTRAN_high:%d(%d) THRESH_UTRAN_low:%d(%d)
Line 4643: 3G NCELL [%d,%d] Utran_priority(%d) is invalid or duplicated with GERAN or E-UTRAN
Line 4650: 3G NCELL [%d,%d] [%c][Ec_No (%d) >= FDD_Qmin - FDD_Qmin_Offset (%d)]
Line 4660: Utran_priority(%d) is greater than GeranPriority (%d)
Line 4663: Check for 1st Resel criteria for Uarfcn (%d) SCD (%d) SNonServMeas (%d)
Line 4666: 3G NCELL [%d,%d] [%c][RSCP (%d) > THRESH_UTRAN_high + UTRAN_QRXLEVMIN (%d)]
Line 4676: SNonServMeas(%d) > ConvertedThreshUtranHigh(%d)
Line 4686: Higher priority 3G cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 4697: T_ReselCountHigh (%d) should be more than (%d) sec
Line 4705: Add Uarfcn(%d) to PriorityQ T_ReselCountHigh (%d)
Line 4714: 1st Resel criteria not satisfied SNonServMeas (%d) < ConvertedThreshUtranHigh (%d)
Line 4720: Check for 2nd Resel criteria for Uarfcn (%d) SCD (%d) SNonServMeas (%d)
Line 4729: 3G NCELL [%d,%d] [%c][RSCP (%d) > C1 + H_PRIO + QRXLEVMIN (%d)]
Line 4736: 1-SNonServMeas (%d) >  C1+H_PRIO=(%d) 
Line 4745: Higher priority 3G cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 4756: 1-T_ReselCountGSM (%d) should be more than (%d) sec
Line 4764: Add Uarfcn(%d) to PriorityQ T_ReselCountGSM (%d)
Line 4774: 2nd Resel criteria not satisfied SNonServMeas (%d) is less than C1+HPRIO (%d)
Line 4782: 3G NCELL [%d,%d] [X][SCELL+NCELL C1 < THRESH_GSM_low (%d)]
Line 4798: Utran_priority(%d) is less than GeranPriority (%d)
Line 4803: Check 1st Resel Criteria for low priority UARFCN (%d)  SCD(%d)
Line 4806: 3G NCELL [%d,%d] [%c][RSCP (%d) > THRESH_UTRAN_low + UTRAN_QRXLEVMIN (%d)]
Line 4822: Higher priority 3G cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 4838: Add Uarfcn(%d) to PriorityQ T_ReselCountLow (%d)
Line 4845: 1st Resel criteria not satisfied for LP cells SNonServMeas (%d) < ConvertedThreshUtranLow (%d)
Line 4851: Check 2nd Resel Criteria for low priority UARFCN (%d)  SCD(%d)
Line 4854: 3G NCELL [%d,%d] [%c][RSCP (%d) > C1 + H_PRIO + QRXLEVMIN (%d)]
Line 4865: 2-SNonServMeas (%d) >  C1+H_PRIO=(%d)
Line 4874: Higher priority 3G cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 4885: 2-T_ReselCountGSM (%d) should be more than (%d) sec
Line 4893: Add Uarfcn(%d) to PriorityQ T_ReselCountGSM (%d)
Line 4899: 2nd Resel criteria not satisfied SNonServMeas (%d) is less than C1+HPRIO (%d)
Line 4907: 3G NCELL [%d,%d] [X][SCELL+NCELL C1 < THRESH_GSM_low (%d)]
Line 4919: [G2U][PRIO][EVAL] 3G NCELL [%d,%d] HIGH(%d) LOW(%d) GSM(%d) TRESEL(%d)
Line 4928: 3G Cell Handicapped Uarfcn (%d) SCD (%d)
Line 4935: Num3GCellThreshUTRANHigh (%d) Num3GCellThreshUTRANLow (%d) Num3GCellThreshUTRANGSM (%d)
Line 4940: High Priority 3G cell avaliable for reselection in rr_3GHighPrioReselList
Line 4949: NO High Priority 3G cell avaliable in rr_3GHighPrioReselList
Line 4954: Low Priority 3G cell avaliable for reselection in rr_3GLowPrioReselList
Line 4963: NO Low Priority 3G cell avaliable in rr_3GLowPrioReselList
Line 4968: 3G cell avaliable for reselection in rr_3GReselGSMList
Line 4977: NO GSM Priority 3G cell avaliable in rr_3GReselGSMList
Line 5041: Tdd_Qoffset_in_dB %d
Line 5067: InBand panalty is added due to signal drop !!!!
Line 5083: [G2U][RANK][EVAL][INDIA] 3G NCELL [%d,%d] RSCP = %ddBm, Ec/No = %ddB, count:%d
Line 5103: [G2U][RANK][EVAL] 3G NCELL [%d,%d] RSCP = %ddBm, Ec/No = %ddB, count:%d, ValidMeasAge:%d
Line 5115:  Reset RscpAboveGsmCellCount to zero, UtranMeasAge:%d
Line 5135:  FDD_RSCPmin_in_dBm:%d, minValue:%d, FDD_RSCP_threshold_in_dBm:%d
Line 5161:  FDD_RSCPmin_in_dBm of Registry:%d, FDD_RSCP_threshold_in_dBm:%d
Line 5168:  FDD_RSCPmin_in_dBm of Registry:%d, FDD_RSCP_threshold_in_dBm:%d
Line 5180:  Rscp(%d) > (RxLev(%d)+Qoffset(%d)
Line 5185:      Rscp(%d) >= FDD_RSCP_threshold_in_dBm(%d)
Line 5205:      Ec_No(%d) >= FDD_Qmin(%d) - FDD_Qmin_Offset(%d) - InBandPenalty(%d) for Count:%d
Line 5217:      Ec_No(%d) < FDD_Qmin(%d) - FDD_Qmin_Offset(%d) - InBandPenalty(%d)
Line 5229:  Rscp(%d) < FDD_RSCP_threshold_in_dBm(%d)
Line 5240:  Rscp(%d) <= (RxLev(%d)+Qoffset(%d))
Line 5250: No 3G Signal Uarfcn:%d SCD:%d RSCP:%d EcNo:%d
Line 5274: [TDD][G2U][RANK][EVAL] 3G NCELL [%d,%d] RSCP = %ddBm, count:%d, ValidMeasAge:%d
Line 5286:  Reset RscpAboveTddQoffsetCount to zero, UtranMeasAge:%d
Line 5306:  RSCP_in_dBm(%d) >= Tdd_Qoffset_in_dB(%d) for RscpAboveTddQoffsetCount:%d
Line 5316:  RSCP_in_dBm(%d) < Tdd_Qoffset_in_dB(%d) for RscpAboveTddQoffsetCount:%d
Line 5326: No 3G Signal Uarfcn:%d SCD:%d RSCP:%d EcNo:%d
Line 5412: Wrong uarfcn. couldn't find right frequency BAND. default set to high band
Line 5497: Fast resel for 3G
Line 5501: InBand checking for gARFCN(%d) bandInd(%d), uARFCN(%d)
Line 5506: converted Freq : 2G(%d), 3G(%d)
Line 5510: Wrong ARFCNs for Inband checking
Line 5526: InBand detector is working !!!!
Line 5531: Normal evaluation !!!!
Line 5587: Find Suitable 3G Cell ,rr_InterRatStatus %d rr_ReselectionReason=%d rr_RlcSuspensionState =%d
Line 5594: 3G Cell Reselection is already going on
Line 5615: rr_3GPriorityParaPresent (%d) and  rr_GeranPriorityParaPresent (%d) present
Line 5633: rr_3GPriorityParaPresent (%d) and  rr_GeranPriorityParaPresent (%d) Not present..Use Rank based Algo
Line 5681: InBand panalty is added due to signal drop !!!!
Line 5715: 3G Cell or UARFCN Handicapped
Line 5735: [G2U][IMM][EVAL] Best 3G Cell Selected - [%d,%d]
Line 5743: Tdd_Qoffset %d Due to choosing best UTRAN TDD Cell
Line 5760: isInBand %d
Line 5769: [TDD][G2U][IMM][EVAL] 3G Cell Selected - [%d,%d]
Line 5801: [G2U][PRIO][EVAL] 3G NCELL is not selected
Line 5807: [G2U][PRIO][EVAL] Both UtranPrioReselCell[%d,%d] and UtranReselList[%d][%d,%d] should be equal
Line 5815: [G2U][PRIO][EVAL] 3G NCELL [%d,%d] is Handicapped
Line 5821: [G2U][PRIO][EVAL] 3G NCELL [%d,%d] T_ReselType(%d) T_ReselCount(%d) should be higher then TReselection(%d)
Line 5829: [G2U][PRIO][EVAL] 3G Cell Selected - [%d,%d] T_ReselType(%d) T_ReselCount(%d) TRESEL(%d)
Line 5865:  3G Cell check if Barred - Uarfcn:%d SCD:%d
Line 5874: 3G Cell Handicapped not checked for suitability
Line 5889: [G2U][RANK][EVAL] 3G Cell Selected - [%d,%d] count:%d durationForResel:%d NewMeasRxd:%d
Line 5900: [G2U][RANK][EVAL] 3G NCELL [%d,%d] Handicapped
Line 5937: [TDD][G2U][RANK][EVAL] 3G Cell Selected - [%d,%d] count:%d durationForResel:%d NewMeasRxd:%d
Line 5973: BPLMN: RET rr_Is3GcellSuitableToReselect as Manual Ongoing & C1: %d > %d
Line 5980: Abort 3G Evaluation by candidate cell in 4G
Line 5990: [G2U][PRIO] 3G Cell Found but hold on
Line 6010: [G2U][RANK] -----> SELECT 3G Cell <------
Line 6032: Avoid Reselection to 3G Cell as Wait timer is still Active
Line 6103: Reset Prev3GHistory
Line 6232: b4 Sort => Prev3GHistory: (%d) (%d)
Line 6282: Utran Prev Neighbout Cell list 
Line 6287: Index=%d,Uarfcn=%d,SCD=%d,FDD=%d,ValidMeasAge=%d
Line 6329: FDD Present
Line 6333: TDD Present, set 3GPriorityParaPresent to FALSE
Line 6350: UTRAN NCELL  Arfcn %d
Line 6374: Indice0=%d,NrOfCells=%d,NrOfCellsBits=%d
Line 6385: DecodeType == DECODE_3GNCELL_FOR_PSI3QUATER && NrOfCells == 0x1F
Line 6399: Too many Reselection UARFCNs in PSI3q!!!
Line 6405: NrOfCells == 0 || NrOfCells >= IndexMax
Line 6450: Arfcn %d NbCells %d isBAList %d isFDD %d
Line 6493: ArfcnList: UARFCN
Line 6518: CellInfoF[0] %d, CellInfoF[1] %d,CellInfoF[2] %d,CellInfoF[3] %d, NrOfCellsBits %d 
Line 6521: ArfcnList: UARFCN
Line 6528: Indice0 (%d): SCD 0 is part of the set
Line 6532: Indice0 (%d): SCD 0 is not part of the set
Line 6582: UARFCN %d, SCD %d
Line 6818: rr_Store3GNcellDesc: StartIndex %d
Line 6837: FDD Not Present
Line 6847: TDD Not Present
Line 6873: Default case: Do nothing
Line 6902: Update 3G Priority Param List - 3G priority Parameter Description
Line 6907:  Reconstruct 3G Priority Param List
Line 6922: Repeated UTRAN Priority Parameters[%d] of '3G Priority Parameters Description' in SI2Q[%d]
Line 6982: [PRIO] rr_Update3GPriorityParam: UARFCN:%d FreqIndex:%d UTRAN_PRIORITY:%d THRESH_UTRAN_high:%d THRESH_UTRAN_low:%d UTRAN_QRXLEVMIN:%d
Line 7009: Repeated UTRAN Priority Param is not present, NumHighPrioUarfcn(%d), NumLowPrioUarfcn(%d)
Line 7017: [PRIO] rr_Update3GPriorityParam: G2UPrioResel(%d), set 3GPriorityParaPresent to %d
Line 7024: [PRIO] rr_Update3GPriorityParam: UtranTddExist, set 3GPriorityParaPresent to %d
Line 7031: [PRIO] rr_Update3GPriorityParam: 3GPriorityParameter present, set 3GPriorityParaPresent to %d
Line 7057: Update 3G Freq List
Line 7075:  1) 3G NCL / FreqIndex:%d Uarfcn:%d
Line 7093:  2) SI2Q / FreqIndex:%d Uarfcn:%d
Line 7100: 3G Frequency List generation completed for SI2Q
Line 7104: 3G Frequency List generation with SI2Q is already completed in this cell
Line 7114: 3G Frequency List generation completed including SI2T
Line 7147: rr_ConvertToUtranFreqIndex Uarfcn:%d is matched with FreqIndex:%d
Line 7157: rr_ConvertToUtranFreqIndex DEFAULT_FREQ_INDEX will be used for Uarfcn:%d
Line 7184: Update 3G Cell List - NbInst:%d, NbCells:%d
Line 7200:  Reconstruct 3G Cell List
Line 7224:  2 - Index:%d
Line 7256:   Existing Index:%d Uarfcn:%d, Scd:%d, isBAList %d, FDD:%d
Line 7274:  3 - Index empty at :%d
Line 7300:   New Index:%d Uarfcn:%d, Scd:%d, isBaList:%d, is3gRssi:%d
Line 7315:  rr_Update3GCellList: Set the FddRscpThreshold:%d
Line 7333:   Invalid Index %d
Line 7384: rr_3GCellFddThresholdList: Increase Age, Uarfcn(%d),SCD(%d),FddRscpAge(%d)
Line 7411: rr_GetTReselCountType: Uarfcn:%d SCD:%d TReselType:%d
Line 7416: rr_UtranReselList: Uarfcn:%d SCD:%d
Line 7421:  UARFCN and SCD matched, Index %d, High %d, Low %d, GSM %d
Line 7440: Invalid TReselType %d
Line 7448: rr_GetTReselCountType: Uarfcn:%d SCD:%d not found
Line 7471: Abort Resel to Better 3G Cell
Line 7478: Filtering 3G Reselection during IRAT measurement in L1
Line 7485: EST msg is pended. Abort Resel to Better 3G Cell
Line 7490: QRB is running. Abort Resel to Better 3G Cell
Line 7497: CellLocking: Abort Resel to Better 3G Cell
Line 7506: BPLMN: Abort Resel to Better 4G Cell
Line 7513: Filtering 4G Reselection during IRAT measurement in L1
Line 7520: EST msg is pended. Abort Resel to Better 4G Cell
Line 7527: CellLocking: Abort Resel to Better 4G Cell
Line 7533: IratType(%d) is invalid
Line 7569: rr_CheckAllNcellC1LowerThen: 2G NCELL [%d,%d] C1:%d is not lower then threshHold:%d
Line 7625: rr_GetPrioParamForUarfcn: UARFCN:%d no valid priority or threshold is provided
Line 7650: rr_GetPrioParamForUarfcn: UARFCN:%d Type:%d ret:%d
Line 7706: rr_GetUarfcnTypeInfo ret FDD_MODE
Line 7714: rr_GetUarfcnTypeInfo ret TDD_MODE
Line 7719: rr_GetUarfcnTypeInfo ret %d
Line 7775: UTRANTDDMODE: NbMonFddUarfcns:%d NbMonTddUarfcns:%d RxMode:%d
Line 7791: UTRANTDDMODE: NewReq:%d Prev:%d
Line 7821: UTRANTDDMODE: New:%d Prev:%d
Line 7877: UTRAN_MEAS_CELLS_IND List 1 is corrupted (List1->NumUarfcns=%d) List1->NumUarfcns_TDD=%d 
Line 7884: UTRAN_MEAS_CELLS_IND List 2 is corrupted (List2->NumUarfcns=%d) List2->NumUarfcns_TDD=%d
Line 7893: UTRAN_MEAS_CELLS_IND List 1 is corrupted (List1->NumUarfcns=%d) 
Line 7900: UTRAN_MEAS_CELLS_IND List 2 is corrupted (List2->NumUarfcns=%d) 
Line 7917:  Total NumScramblingCodes(%d) > MAX_UMTS_MONITORED_CELLS(%d)
Line 7930:  UARFCN(%d) NumScramblingCodes(%d+%d) > MAX_UMTS_SCRAMBLING_CODE(%d)
Line 7950:  [TDD] Total NumScramblingCodes(%d) > MAX_UMTS_MONITORED_CELLS(%d)
Line 7963:  [TDD] UARFCN(%d) NumScramblingCodes(%d+%d) > MAX_UMTS_SCRAMBLING_CODE(%d)
