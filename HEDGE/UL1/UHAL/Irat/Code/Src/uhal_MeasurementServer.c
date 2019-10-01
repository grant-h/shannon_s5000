Line 124: Invalid LatchReqest
Line 136: uhal_UmtsRssiMeasurementReq: measurement_server is NULL
Line 167: Invalid LatchReqest
Line 179: uhal_UmtsInitialRscpEcNoMeasurementReq: measurement_server is NULL
Line 216: Invalid LatchReqest
Line 228: uhal_UmtsRscpEcNoUpdateMeasurementReq: measurement_server is NULL
Line 260: Invalid LatchReqest
Line 272: uhal_UmtsCellSearchReq: measurement_server is NULL
Line 302: Invalid Reqest
Line 314: uhal_UmtsPartialSearchReq: measurement_server is NULL
Line 366: MMC -> UMTS RSSI measurement
Line 371: Invalid uhal_MmcUmtsRssiMeasurementReq
Line 382: rssi_req_ptr is NULL in  uhal_MmcUmtsRssiMeasurementReq
Line 392: rssi_req_ptr->frequencyList is NULL in  uhal_MmcUmtsRssiMeasurementReq
Line 411: UmtsMeasurementServerReset fail
Line 416:  MMC -> UMTS RSSI Measurement Request
Line 422: MmcUmtsRssiMeasurementReq Msg is null
Line 447: Invalid uhal_MmcUmtsInitialRscpEcNoMeasurementReq
Line 455: [IRAT L2U] UmtsInitialRscpEcNoMeasurementReq Msg is too late !!! 
Line 469: rscp_req_ptr is NULL in  uhal_MmcUmtsInitialRscpEcNoMeasurementReq
Line 477: rscp_req_ptr->measurementList is NULL in uhal_MmcUmtsInitialRscpEcNoMeasurementReq
Line 510: UmtsMeasurementServerReset fail
Line 513: MMC -> UMTS Initial RSCP/EcNo Measurement Request
Line 521: MmcUmtsInitialRscpEcNoMeasurementReq Msg is null
Line 549: Invalid uhal_MmcUmtsRscpEcNoUpdateMeasurementReq
Line 557: [IRAT L2U] UmtsRscpEcNoUpdateMeasurementReq Msg is too late !!! 
Line 570: rscp_req_ptr is NULL in  uhal_MmcUmtsRscpEcNoUpdateMeasurementReq
Line 577: rscp_req_ptr->measurementList is NULL in uhal_MmcUmtsInitialRscpEcNoMeasurementReq
Line 591: rscp_req_ptr->measurementList is NULL in  uhal_MmcUmtsRscpEcNoUpdateMeasurementReq
Line 616: UmtsMeasurementServerReset fail
Line 619: MMC -> UMTS RSCP/EcNo Update Measurement Request
Line 627: MmcUmtsRscpEcNoUpdateMeasurementReq Msg is null
Line 655: Invalid uhal_MmcUmtsCellSearchReq
Line 663: [IRAT L2U] UmtsCellSearchReq Msg is too late !!! 
Line 675: srch_req_ptr is NULL in  uhal_MmcUmtsCellSearchReq
Line 685: srch_req_ptr->frequencyList is NULL in  uhal_MmcUmtsCellSearchReq
Line 704: UmtsMeasurementServerReset fail
Line 707:  MMC -> UMTS Cell Search Request
Line 714: MmcUmtsCellSearchReq Msg is null
Line 730: Invalid uhal_MmcUmtsPartialSearchReq
Line 738: [IRAT L2U] UmtsPartialSearchReq Msg is too late !!! 
Line 750: srch_req_ptr is NULL in  UmtsPartialSearchReq
Line 760: srch_req_ptr->frequencyList is NULL in  uhal_MmcUmtsPartialSearchReq
Line 785: UmtsMeasurementServerReset fail
Line 788:  MMC -> UMTS Partial Search Request
Line 795: UmtsPartialSearchReq Msg is null
Line 885: UHAL fails in making a MmcUmtsRssiMeasurementIndMsg
Line 919: NumberOfFrequencies is out of range
Line 926: UmtsRssiMeasurementInd Msg is NULL
Line 931: UMTS -> MMC RSSI Measurement Indication
Line 935: UHAL fails in sending a MmcUmtsRssiMeasurementIndMsg
Line 938: UHAL fails in freeing MmcUmtsRssiMeasurementInd Msg.
Line 965: Invalid LatchReqest
Line 990: UHAL fails in making a MmcUmtsInitialRscpEcNoMeasurementIndMsg
Line 1032: NumberOfCells is out of range
Line 1039: NumberOfFrequencies is out of range
Line 1047: UmtsInitialRscpEcNoMeasurementIndMsg is NULL
Line 1065: UMTS -> MMC INIT Measurement Indication
Line 1069: UHAL fails in sending a MmcUmtsInitialRscpEcNoMeasurementIndMsg
Line 1072: UHAL fails in freeing a MmcUmtsInitialRscpEcNoMeasurementIndMsg
Line 1098: Invalid LatchReqest
Line 1121: UHAL fails in making a MmcUmtsRscpEcNoUpdateMeasurementIndMsg
Line 1165: NumberOfCells is out of range
Line 1172: NumberOfFrequencies is out of range
Line 1180: UmtsInitialRscpEcNoMeasurementIndMsg is NULL
Line 1198: UMTS -> MMC Measurement Indication
Line 1202: UHAL fails in sending a MmcUmtsRscpEcNoUpdateMeasurementIndMsg
Line 1205: UHAL fails in freeing a MmcUmtsRscpEcNoUpdateMeasurementIndMsg
Line 1230: Invalid LatchReqest
Line 1254: UHAL fails in making a MmcUmtsCellSearchIndMsg
Line 1296: NumberOfCells is out of range
Line 1303: NumberOfFrequencies is out of range
Line 1311: UmtsCellSearchIndMsg is NULL
Line 1329: UMTS -> MMC Cell Search Indication
Line 1333: UHAL fails in sending a MmcUmtsCellSearchIndMsg
Line 1336: UHAL fails in freeing a MmcUmtsCellSearchIndMsg
Line 1357: UHAL fails in making a MmcUmtsPartialSearchIndMsg
Line 1401: NumberOfCells is out of range
Line 1408: NumberOfFrequencies is out of range
Line 1422: UmtsPartialSearchIndMsg is NULL
Line 1441: UMTS -> MMC Partial Search Indication (numOfPathes=%d)
Line 1445: UHAL fails in sending a MmcUmtsPartialSearchIndMsg
Line 1448: UHAL fails in freeing a MmcUmtsPartialSearchIndMsg
Line 1473: Invalid LatchReqest
Line 1500: Invalid Ind
Line 1523: UHAL fails in making a MmcUmtsCellSearchIndMsg
Line 1558: NumberOfFrequencies is out of range
Line 1566: srch_req is NULL
Line 1571: UMTS -> MMC Cell Search Dummy Indication ************
Line 1575: UHAL fails in sending a MmcUmtsCellSearchDummyIndMsg
Line 1578: UHAL fails in freeing a MmcUmtsCellSearchDummyIndMsg
Line 1589: SKIP power off after dummy indication due to RAT is resumed
Line 1607: UHAL fails in making a MmcUmtsPartialSearchIndMsg
Line 1643: NumberOfFrequencies is out of range
Line 1656: srch_req is NULL
Line 1661: UMTS -> MMC Partial Search Dummy Indication ************
Line 1665: UHAL fails in sending a Mmc_UmtsPartialSearchCnf
Line 1668: UHAL fails in freeing a Mmc_UmtsPartialSearchCnf
Line 1679: SKIP power off after dummy indication due to RAT is resumed
Line 1698: UHAL fails in making a MmcUmtsInitialRscpEcNoMeasurementIndMsg
Line 1734: NumberOfFrequencies is out of range
Line 1741: rscp_req is NULL
Line 1746: UMTS -> MMC INIT Measurement Dummy Indication *********
Line 1750: UHAL fails in sending a MmcUmtsInitialRscpEcNoMeasurementDummyIndMsg
Line 1753: UHAL fails in freeing a MmcUmtsInitialRscpEcNoMeasurementDummyIndMsg
Line 1764: SKIP power off after dummy indication due to RAT is resumed
Line 1784: UHAL fails in making a MmcUmtsRscpEcNoUpdateMeasurementDummyIndMsg
Line 1819: NumberOfFrequencies is out of range
Line 1826: UmtsInitialRscpEcNoMeasurementDummyIndMsg is NULL
Line 1831: UMTS -> MMC Measurement Dummy Indication *********
Line 1835: UHAL fails in sending a MmcUmtsRscpEcNoUpdateMeasurementDummyIndMsg
Line 1838: UHAL fails in freeing a MmcUmtsRscpEcNoUpdateMeasurementDummyIndMsg
Line 1849: SKIP power off after dummy indication due to RAT is resumed
Line 1883: activeStackId %d uhal_IratMeasurement_Timeout not performed due to activeRat %d l2uHOStarted %d
Line 1887: activeStackId %d uhal_IratMeasurement_Timeout
Line 1901: uhal_IratMeasurement_Abort : send dummy indication(3G RAT is suspended)
Line 1908: measRequestFromLte = %d
Line 1946: activeStackId %d UmodemStatus %d l2uHOStarted %d uhal_IratMeasurement_Timeout
Line 1968: uhal_IratMeasurement_Abort : send dummy indication(3G RAT is suspended)
Line 1976: measRequestFromLte = %d l2uHOStarted =%d
Line 1992: uhal_IratMeasurement_TimeoutStart: uhalIratMeasurementTimerCreated:%d 
Line 1997: uhalIratMeasurementTimer Created!
Line 2000: uhalIratMeasurementTimer Timing set OK!
Line 2005: uhalIratMeasurementTimer Timing set Failed!
Line 2010: uhalIratMeasurementTimer Creation Failed!
Line 2023: uhal_IratMeasurement_TimeoutCancel: uhalIratMeasurementTimerCreated:%d 
Line 2054: activeStackId %d Invalid LatchReqest
Line 2061: activeStackId %d measurement_server pointer is null
Line 2088: Invalid LatchReqest
Line 2121: measRequestFromLte %d gaplength %d
Line 2154: Gap0 Hisr: schedule StartSschSTF, currentRSN=%d, targetRSN=%d MeasureStart %d
Line 2159: cmsmt_server is NULL
