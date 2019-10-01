Line 261: Set powerOffSkip flag
Line 267: Clear powerOffSkip flag
Line 273: [L2U]MmcUmtsPowerReq
Line 312: SKIP power off due to RAT is resumed
Line 346: Memory Allocation Error
Line 378: uhal_CMeasurementServer_init
Line 450: uhal_CMeasurementServer_free
Line 519: activeStackId %d UMTS RSSI Measurement Request
Line 520: activeStackId %d   UARFCN = %d
Line 521: activeStackId %d   Duration = %d,%d,%d
Line 522: activeStackId %d ==================================================
Line 588: activeStackId %d UMTS Initial RSCP/EcNo Measurement Request (%d %d)
Line 589: activeStackId %d   UARFCN = %d
Line 590: activeStackId %d   Duration = %d,%d,%d
Line 591: activeStackId %d   numOfRscpEcNoInfo = %d
Line 592: activeStackId %d   numPathsToCorrelate = %d
Line 597: activeStackId %d INIT_RSCP_REQ: gap_length = %d slots
Line 624: activeStackId %d INIT_RSCP_REQ: numPathsToCorrelate = 0, using default %d
Line 636: activeStackId %d   Cell %d: SCR Code = %d, Tx Diversity = %d
Line 643: activeStackId %d ==================================================
Line 656: activeStackId %d INIT_RSCP_REQ: Invalid numOfRscpEcNoInfo %d, maximum cells is %d
Line 702: activeStackId %d UMTS RSCP/EcNo Update Measurement Request
Line 703: activeStackId %d   UARFCN = %d
Line 704: activeStackId %d   Duration = %d,%d,%d
Line 705: activeStackId %d   numOfRscpEcNoInfo = %d
Line 718: activeStackId %d RSCP_UPDATE_REQ: gap_length = %d slots
Line 742: activeStackId %d   Cell %d: SCR Code = %d ; Tx Diversity = %d ; Frame Offset = %d
Line 750: activeStackId %d ==================================================
Line 762: activeStackId %d RSCP_UPDATE_REQ: Invalid numOfRscpEcNoInfo %d, maximum cells is %d
Line 820: activeStackId %d Memory Allocation Error
Line 828: activeStackId %d UMTS ->2G RSSI Measurement  Aborted, dummy indication sent
Line 854: activeStackId %d UMTS RSSI Measurement Indication
Line 855: activeStackId %d   UARFCN = %d
Line 856: activeStackId %d   RSSI = %ddBm
Line 857: activeStackId %d ==================================================
Line 951: activeStackId %d Memory Allocation Error
Line 959: activeStackId %d UMTS ->2G INITIAL RSCP Measurement  Aborted, dummy indication sent
Line 984: activeStackId %d UMTS Initial RSCP/EcNo Measurement Indication
Line 985: activeStackId %d   UARFCN = %d
Line 986: activeStackId %d   RSSI = %ddBm
Line 987: activeStackId %d   numOfRscpEcNoInfo = %d
Line 1083:   Cell %d: SCR Code = %d ; RSCP = %ddBm ; Ec/No = %ddB ; Frame Offset = %d
Line 1087: activeStackId %d ==================================================
Line 1186: activeStackId %d Memory Allocation Error
Line 1194: activeStackId %d UMTS ->2G Update RSCP Measurement  Aborted, dummy indication sent
Line 1219: activeStackId %d UMTS RSCP/EcNo Update Measurement Indication
Line 1220: activeStackId %d   UARFCN = %d
Line 1221: activeStackId %d   RSSI = %ddBm
Line 1222: activeStackId %d   numOfRscpEcNoInfo = %d
Line 1239: activeStackId %d !!! cell_valid is not TRUE !!!
Line 1282:   Cell %d: SCR Code = %d ; RSCP = %ddBm ; Ec/No = %ddB ; Frame Offset = %d
Line 1286: activeStackId %d ==================================================
Line 1345: activeStackId %d UMTS Cell Search Request
Line 1346: activeStackId %d   UARFCN = %d
Line 1347: activeStackId %d   Duration = %d,%d,%d
Line 1348: activeStackId %d ==================================================
Line 1362: CELL_SRCH_REQ: step1GapLength=%d slots, step2GapLength=%d slots, processingMargin=%d slots
Line 1371: activeStackId %d CELL_SRCH_REQ: gapLength %d should be longer than %d
Line 1439: activeStackId %d UMTS Partial Search Request (phase=%d)
Line 1440: activeStackId %d   UARFCN = %d
Line 1441: activeStackId %d   Duration = %d,%d,%d
Line 1442: activeStackId %d ==================================================
Line 1458: activeStackId %d PARTIAL_SRCH_REQ: gap_length = %d slots
Line 1504: activeStackId %d   pathIndex=%d: Path Offset (QC) = %d
Line 1507: activeStackId %d ==================================================
Line 1514: activeStackId %d PARTIAL_SRCH_REQ: Invalid numOfPathes=%d, max num of pathes is %d
Line 1596: activeStackId %d Memory Allocation Error
Line 1604: activeStackId %d UMTS ->Partial Search  Aborted, dummy indication sent
Line 1624: activeStackId %d UMTS Partial Search Indication
Line 1625: activeStackId %d   UARFCN = %d
Line 1626: activeStackId %d   PHASE = %d
Line 1627: activeStackId %d   RSSI = %ddBm
Line 1641: activeStackId %d   PATH INDEX = %d ; offset(QC) = %d
Line 1646: activeStackId %d   PATH NOT FOUND !!!
Line 1694:   SCR Code NOT FOUND ; RSCP = %ddBm ; Ec/No = %ddB
Line 1700:   SCR Code = %d ; RSCP = %ddBm ; Ec/No = %ddB ; Frame Offset = %d ; Tx Diversity = %d
Line 1705: activeStackId %d ==================================================
Line 1712: activeStackId %d srch_ind_fun is NULL !!!
Line 1720: activeStackId %d 3G modem OFF is skipped !!!
Line 1734: activeStackId %d 3G modem OFF is skipped
Line 1827: activeStackId %d Memory Allocation Error
Line 1835: activeStackId %d UMTS ->2G Cell Search  Aborted, dummy indication sent
Line 1861: activeStackId %d UMTS Cell Search Indication
Line 1862: activeStackId %d   UARFCN = %d
Line 1863: activeStackId %d   RSSI = %ddBm
Line 1919:   SCR Code NOT FOUND ; RSCP = %ddBm ; Ec/No = %ddB
Line 1925:   SCR Code = %d ; RSCP = %ddBm ; Ec/No = %ddB ; Frame Offset = %d ; Tx Diversity = %d
Line 1929: activeStackId %d ==================================================
Line 1972: UMTS Measurement Server Reset
Line 1973: ==================================================
Line 2008: uhal_CMeasurementServer_SetFreqIndex 	Array index out of bound %d 
Line 2044: IRAT MeasurementServer SetFreqIndex: index is larger than UHAL_IRAT_MAX_FREQUENCIES
Line 2105: IRAT MeasurementServer FSM: current_state=%u result=%d event=%d, next_state=%u
Line 2120: IRAT MeasurementServer FSM: current_state=%u result=%d event=%d, next_state=%u
Line 2254: uhal_CMeasurementServer_StopSschSTF: currentRSN=%d
Line 2272: uhal_CMeasurementServer pendingPowerOff = %d, measRequestFromLte = %d
Line 2276: measurement_server pointer is null
Line 2282: T9 HISR but power off ind is pended
Line 2339: uhal_CMeasurementServer isActiveRequestQueue = %d, t9HisrDoneStatus = %d
Line 2371: Que is empty but T9 HISR isn't generated
Line 2562: activeStackId %d Memory Allocation Error
Line 2593: activeStackId %d INIT_RSCP_REQ: Step1 found cells. Do the next step(step3 search)
Line 2601: activeStackId %d INIT_RSCP_REQ: Step1 found no cells. Send IND to GL1
Line 2669: Initial Scan: Buffering completed
Line 3109: activeStackId %d Memory Allocation Error
Line 3153: activeStackId %d Invalid Request Type=%d
Line 3174: activeStackId %d Invalid Request Type=%d
Line 3355: activeStackId %d uhal_CMeasurementServer_CellSearchProcessEvent: Request Step2 Search (Code Group ID = %d)
Line 3486: activeStackId %d Invalid Request Type=%d
Line 3546: activeStackId %d [IRAT] RF Rx ON command exec failure Error %d, Additional Error %d
Line 3587: activeStackId %d RF UARFCN Error %d, Additional Error %d
Line 3634: activeStackId %d Starting RF: uarfcn %d: current state %d
Line 3661: activeStackId %d Buffering Error %d, Additional Error %d
Line 3686: activeStackId %d PSCH Error %d, Additional Error %d
Line 3709: activeStackId %d Buffering Error %d, Additional Error %d
Line 3718: activeStackId %d uhal_CMeasurementServer_StartPsch: No buffering (req_type=%d)
Line 3808: activeStackId %d uhal_CMeasurementServer_StartSsch: Step2 Search Gap Length (slots) = %d
Line 3814: activeStackId %d SSCH Error %d, Additional Error %d
Line 3821: activeStackId %d uhal_CMeasurementServer_StartSsch: currentRSN=%d
Line 3849: activeStackId %d uhal_CMeasurementServer_StartSsch: Schedule StopSschSTF, currentRSN=%d, targetpRSN=%d
Line 3921: IRAT request Cpich ScrCode: path_count=%d, cell_count=%d, cell_index=%d
Line 3941: activeStackId %d CPICH SCR Code - no cells to check
Line 3968: activeStackId %d Wrong ScrCode Index = %d 
Line 4040: IRAT request Cpich ScrCode. pathOffset %d ScrCode[%d]=%d
Line 4052: activeStackId %d CPICH SCR Code Error %d, Additional Error %d
Line 4112: activeStackId %d CPICH SCR Code Error %d, Additional Error %d
Line 4200: activeStackId %d CPICH Multi-Path Error %d, Additional Error %d
Line 4276: activeStackId %d CPICH Multi-Path Error %d, Additional Error %d
Line 4400: activeStackId %d Starting RF: uarfcn %d: current state %d
Line 4423: activeStackId %d Buffering Error %d, Additional Error %d
Line 4489: uhal_CMeasurementServer_CellUpdated  magnitude = %d, num_paths = %d, isMpsRetried = %d
Line 4589: freqIndex=%d, uarfcn=%d, isNewFrequency=%d
Line 4615: Memory Allocation Error
Line 4654: UARFCN %d is already configued but its cell array is NULL. Recreate it.
Line 4660: Memory Allocation Error
Line 4680: INIT_RSCP_REQ: maxCellIndex=%d should be less than the allowed MAX CELL %d
Line 4701: INIT_RSCP_REQ: maxCellIndex=%d
Line 4725: Memory Allocation Error
Line 4761: UARFCN %d is already configued but its cell array is NULL. Recreate it.
Line 4767: Memory Allocation Error
Line 4787: RSCP_UPDATE_REQ: maxCellIndex=%d should be less than the allowed MAX CELL %d
Line 4798: RSCP_UPDATE_REQ: cellIndex=%d, SCR Code=%d
Line 4807: RSCP_UPDATE_REQ: SCR Code %d has not been initialised
Line 4832: Memory Allocation Error
Line 4875: UARFCN %d is already configued but its cell array is NULL. Recreate it.
Line 4881: Memory Allocation Error
Line 4936: Memory Allocation Error
Line 4978: UARFCN %d is already configued but its cell array is NULL. Recreate it.
Line 4984: Memory Allocation Error
Line 5023: Invalid Request %d
Line 5031: Queue empty
Line 5070: activeStackId %d Reset step1 searcher: cmd_status should be idle but cmd_status=%d
Line 5085: activeStackId %d Reset step2 searcher: cmd_status should be idle but cmd_status=%d
Line 5103: activeStackId %d Reset step3 searcher: cmd_status should be idle but cmd_status=%d
Line 5121: activeStackId %d Reset multipath searcher: cmd_status should be idle but cmd_status=%d
Line 5139: activeStackId %d Reset buffering: cmd_status should be idle but cmd_status=%d
Line 5291: Memory Allocation Error
Line 5301: UMTS RSSI Measurement Error Indication
Line 5315: Memory Allocation Error
Line 5325: UMTS Initial RSCP/EcNo Measurement Error Indication
Line 5339: Memory Allocation Error
Line 5349: UMTS RSCP/EcNo Update Measurement Error Indication
Line 5363: Memory Allocation Error
Line 5373: UMTS Cell Search Error Indication
Line 5380: Invalid Request %d
Line 5491: activeStackId %d RF settled for IRAT measurement
Line 5508: activeStackId %d Request type isn't supported : requestTyep %d
Line 5589: uhal_CMeasurementServer_CheckRRM: uhal_CMeasurementServer_RRM_flag %d: firstScrCode = %d 
Line 5621: uhal_CMeasurementServer_CheckRRM: arrayIndx = %d, ScrCode = %d 
Line 5656: uhal_CMeasurementServer_CheckRRM: uhal_CMeasurementServer_RRM_flag %d
Line 5683: uhal_IratMeasurement_Abort : No IRAT O2U going ON
Line 5696: uhal_IratMeasurement_Abort : 3G modem is ON
Line 5710: uhal_IratMeasurement_Abort : send dummy indication(3G RAT is suspended)
Line 5718: uhal_IratMeasurement_Abort : 3G modem already switched OFF
Line 5729: activeStackId %d mismatching with callerStackId %d, UMTS_IRAT_ONGOING_DS=%d
Line 5784: uhal_IratRFParametersReset() getting called
