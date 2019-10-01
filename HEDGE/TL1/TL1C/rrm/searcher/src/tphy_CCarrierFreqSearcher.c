Line 259: CFS:Timeout Count:%u
Line 262: CFS:Guard Timeout:Carrier Freq Srch
Line 267: CFS:Guard Timeout:MessageTransceiver send failed
Line 300: CFScan:Guard Timeout:
Line 306: CFScan:Guard Timeout:MessageTransceiver send failed
Line 318:  prcsCFSPauseReq: %x 
Line 392: prcsCFSResumeReq: %x 
Line 408: CFS: ============= Resume Pre Freq Scan ================
Line 425: ETphySearcherMsgId_CFS
Line 444: prcsCFSResumeReq->uarfcnToProcess: %d
Line 445: prcsCFSResumeReq->uarfcnProcesss: %d
Line 447: prcsCFSResumeReq ->uarfcnIndexCtr: %d
Line 484: CFS: CarrierFreqSearcher skip UARFCN=%d !!!
Line 508: Submit another DWPTS request: CarrierFreqSearcher_ptr->uarfcnIndexCtr %d 
Line 515: prcsCFSResumeReq:wrong state!!
Line 544: CFS: uarfcn %d energy %d
Line 548: CFS: uarfcn %d energy %d
Line 558:  CFSResumeReq:Cant send replyMessage 
Line 576: prcsCarrierFreqScanPauseReq: %x 
Line 622: prcsCarrierFreqScanResumeReq: %x 
Line 628:  ETphySearcherMsgId_CarrierFreqScan
Line 646: prcsCarrierFreqScanResumeReq->uarfcntoProcess: %d
Line 647: prcsCarrierFreqScanResumeReq->uarfcnProcessed: %d
Line 649: processCarrierFreqScanResumeReq ->uarfcnIndexCtr: %d
Line 660: Submit another DWPTS req: CarrierFreqSearcher_ptr->uarfcnIndexCtr %d 
Line 668: prcsCarrierFreqScanResumeReq:wrong state!!
Line 697: CFS: Scan uarfcn %d energy %d
Line 701: CFS: Scan uarfcn %d energy %d
Line 711: CFScanResumeReq:Cant send replyMessage 
Line 737: CFS Req: CFS mode =%d, Uarfcn Start =%d, Uarfcn End = %d
Line 856: CarrierFreqSearcher_ptr->replyMessage == NULL
Line 1024: CFS:prcsCFSReq:confirmMsg == NULL pointer
Line 1039: CFS:prcsCFSReq:Cant send Cnf Msg
Line 1063: CFS: ============= Start Pre Freq Scan ================
Line 1139: CFS_ptr->freqscan_replyMsg is NULL
Line 1179: Carrier Freq Scan list: %d
Line 1191: confirmMsg == NULL pointer
Line 1208: Cant send Cnf Msg
Line 1253: send rssiReqMsg FreqList[%d] = %d
Line 1312: CFS:prcsRssiMsmtRep: Error:Already processed index %d
Line 1327: CFS:prcsRssiMsmtRep:rssiReqMsg == NULL pointer
Line 1342: CFS:Cant send RSSI Request
Line 1368: CFS:tphy_CMsgTransceiver_send failed
Line 1423: CFScan:prcsRssiMsmtRep: Error:Already processed index %d
Line 1438: CFS:rssiReqMessage == NULL pointer
Line 1453: CFS:Cant send RSSI Request
Line 1479: CFS:CMessage Transceiver send failed
Line 1501: CFS: Dwpts Request
Line 1517: CFS:DwptsReqMsg == NULL pointer
Line 1539: CFS:Cant send Dwpts Request
Line 1574: CFS:DwptsReqMsg == NULL pointer
Line 1594: CFS:DwptsReqMsg : small winodow
Line 1601: CFS:DwptsReqMsg : full winodow
Line 1608: CFS:Cant send Dwpts Request
Line 1624: CFS: Dwpts Measurement Report
Line 1628: CFS: Ignore DwPts Rsp as Rf is Paused
Line 1708: CFS:DwptsReqToScheduler:Already processed index %d
Line 1745: Submit another DWPTS req CarrierFreqSearcher_ptr->uarfcnIndexCtr%d 
Line 1753: CFS: CarrierFreqSearcher skip UARFCN=%d !!!
Line 1773: Submit another DWPTS req CarrierFreqSearcher_ptr->uarfcnIndexCtr%d 
Line 1808: CFS: uarfcn %d energy %d
Line 1812: CFS: uarfcn %d energy %d
Line 1824: LatchEutraTimeByMsg: Cant send replyMessage 
Line 1852: CFScan: Ignore DwPts Rsp as Rf is Paused
Line 1859: freqscan_replyMessage Null
Line 1937: CFScan:DwptsReqToScheduler:Already processed index %d
Line 1985: CFScan: uarfcn %d energy %d
Line 1989: CFScan: uarfcn %d energy %d
Line 1999: CFScan prcs Msmt Rep: Cant send replyMessage 
Line 2016: CFS:RfSettling token:
Line 2034: Hal RSSI  = %d, RSSI_dBm= %d and RSSI reported to RRC = %d 
Line 2073: CFS: CarrierFreqSearcher skip UARFCN=%d !!!
Line 2121: CFS: uarfcn %d rssi %d
Line 2125: CFS: uarfcn %d rssi %d
Line 2137: CFS: Cant send replyMessage 
Line 2165: CFScan:RfSettling token:
Line 2183: Hal RSSI  = %d and RSSI reported to RRC = %d 
Line 2225: CFScan: uarfcn %d energy %d
Line 2229: CFScan: uarfcn %d energy %d
Line 2239: CFScan: Cant send replyMessage 
Line 2263: CFS: CarrierFreqSearcher is NULL !!!
Line 2271: CFS: uarfcn %d lastRequestedUarfcn %d 5msRssi %d
Line 2313: CFS: measuredUarfcn = 0
Line 2328: CFS: set uarfcn = %d
Line 2378: CFS: CarrierFreqSearcher is NULL !!!
Line 2389: CFS: ============= Start CFS with selected UARFCNs ================
Line 2394: CFS: maxUarfcnIndex=%d uarfcnIndexCtr=%d uarfcnToProcess=%d
Line 2418: CFS: highest power (uarfcn=%d) is too low (%d dBm) => start normal CFS for %d uarfcns !!!
Line 2430: CFS: preCfsResults[%d].uarfcn=%d
Line 2441: CFS: DwptsReq for %d !!!
Line 2446: CFS: CarrierFreqSearcher cannot schedule DwptsReq !!!
Line 2457: CFS: CarrierFreqSearcher cannot schedule DwptsReq !!!
Line 2470: CFS: CarrierFreqSearcher skip UARFCN=%d !!!
Line 2504: CFS: uarfcn %d rssi %d
Line 2508: CFS: uarfcn %d rssi %d
Line 2526: CFS: Cant send replyMessage 
Line 2582: CFS:PrcsMsgSendError:Message Transceiver send failed
Line 2618: CFScan:PrcsMsgSendError:MessageTransceiver send failed
Line 2660: CFS_SendNegCnf: sending Ind to RRC as LONG PAUSE is encountered
Line 2685: CFS Send Neg Cnf: no request msg to send cnf!
Line 2722: FreqScan SendNegCnf: sending Indication to RRC as LONG PAUSE is encountered
Line 2739: FreqScan SendNegCnf: no request msg to send cnf!
Line 2758: CFS:Timeout:Blind Cell Searcher Timeout
Line 2766: CFS:Timeout:MessageTransceiver send failed
Line 2795: CFScan:Timeout:Blind Cell Searcher Timeout
Line 2801: CFScan:Timeout:MessageTransceiver send failed
Line 2845: BPLMN: CFS:SendNegCnf as LONG PAUSE
Line 2855: BPLMN:  MessageTransceiver_send failed
Line 2877: no request msg to send cnf!
Line 2883:  BPLMN: CFS PauseRequest: %x 
Line 2955: BPLMN: CFS Resume Request %x 
Line 2971: CFS: ============= Resume Pre Freq Scan ================
Line 3006: BPLMN: CFS Resume Request->uarfcnToProcess: %d
Line 3007: BPLMN: CFS Resume Request->uarfcnProcesss: %d
Line 3009: BPLMN: CFS Resume Request ->uarfcnIndexCtr: %d
Line 3046: CFS: CarrierFreqSearcher skip UARFCN=%d !!!
Line 3072: BPLMN: CFS Resume:Submit another DWPTS request 
Line 3084: BPLMN: CFS Resume Request Submit another RSSI request if more are required : CarrierFreqSearcher_ptr->uarfcnIndexCtr %d 
Line 3093: BPLMN: CFS Resume Request:wrong state!!
Line 3122: BPLMN: CFS Resume  uarfcn %d rssi %d
Line 3126: BPLMN: CFS Resume  uarfcn %d rssi %d
Line 3143: CFS BPLMN: Cant send replyMessage 
Line 3173: BPLMN: CFS Req: CFS mode =%d, Uarfcn Start =%d, Uarfcn End = %d
Line 3201: BPLMN: CFS Req: uarfcnToProcess = %d ( >68)
Line 3217: BPLMN: CFS Req: uarfcnToPrcs is Negative Value
Line 3228: BPLMN: CFS Req: uarfcnToProcess = %d ( >68)
Line 3244: BPLMN: CFS Req: uarfcnToPrcs is Negative Value
Line 3255: BPLMN: CFS Req: uarfcnToProcess = %d ( >93)
Line 3271: BPLMN: CFS Req: uarfcnToProcess is Negative Value
Line 3282: BPLMN: CFS Req: uarfcnToProcess = %d ( >93)
Line 3288: BPLMN: CFS Req: uarfcnToProcess is Negative Value
Line 3299: BPLMN: CFS Req: uarfcnToProcess = %d ( >93)
Line 3305: BPLMN: CFS Req: uarfcnToProcess is Negative Value
Line 3316: BPLMN: CFS Req: uarfcnToProcess = %d ( >93)
Line 3322: BPLMN: CFS Req: uarfcnToProcess is Negative Value
Line 3333: BPLMN: CFS Req: uarfcnToProcess = %d ( >93)
Line 3339: BPLMN: CFS Req: uarfcnToProcess is Negative Value
Line 3350: BPLMN: CFS Req: uarfcnToProcess = %d ( >93)
Line 3356: BPLMN: CFS Req: uarfcnToProcess is Negative Value
Line 3374: BPLMN: CFS Req: Unknown CFS Mode =%d
Line 3382: BPLMN: CFS Req: replyMessage is NULL
Line 3397: BPLMN: CFS Req: rssiArray is NULL or uarfcnToProcess is ZERO
Line 3431: BPLMN: CFS:confirmMsg == NULL pointer
Line 3450: BPLMN: CFS:processCFSReq:Cant send Cnf Msg
Line 3471: CFS: ============= Start Pre Freq Scan ================
Line 3534: CFS:DwptsReqToScheduler:DwptsReqMessage == NULL pointer
Line 3556: CFS:DwptsReqToScheduler:Cant send Dwpts Request
Line 3652: CFS:DwptsReqToScheduler:Already processed index %d
Line 3689: CFS: DwptsReqToScheduler: Submit another DWPTS req CarrierFreqSearcher_ptr->uarfcnIndexCtr%d 
Line 3697: CFS: DwptsReqToScheduler: CarrierFreqSearcher skip UARFCN=%d !!!
Line 3717: CFSprocessDwptsMR Submit another DWPTS request if more are required CarrierFreqSearcher_ptr->uarfcnIndexCtr%d 
Line 3753: CFS: uarfcn %d RSSI %d
Line 3757: CFS: uarfcn %d RSSI %d
Line 3775: EutraTimeReference LatchEutraTimeByMsg: Cant send replyMessage 
Line 3801: CFS:RfSettling token:
Line 3821: Hal RSSI  = %d, RSSI_dBm= %d and RSSI reported to RRC = %d 
Line 3860: CFS:RfSettling CarrierFreqSearcher skip UARFCN=%d !!!
Line 3909: CFS: uarfcn %d rssi %d
Line 3913: CFS: uarfcn %d rssi %d
Line 3930: CFS: Cant send replyMessage 
Line 3959: BPLMN: CFS:BPLMN RSSI ReqTo Scheduler:rssiReqMessage == NULL pointer
Line 3975: BPLMN: CFS:Cant send RSSI Request
Line 4014: BPLMN:Hal RSSI  = %d and RSSI reported to RRC = %d 
Line 4019: BPLMN: CFS:prcsRssiMsmtRep: Error:Already processed index %d
Line 4059: BPLMN: CFS: uarfcn %d energy %d
Line 4061: BPLMN: CFS: uarfcn %d energy %d
Line 4073: BPLMN: CFS:prcsRssiMsmtRep:tphy_CMessageTransceiver_send failed
Line 4108: BPLMN: CFS:ProcessMessageSendError:tphy_CMessageTransceiver_send failed
Line 4128: BPLMN: CFS Timeout
Line 4131: BPLMN: CarrierFreqSearcher_ptr is NULL
Line 4156: BPLMN: CFS:Timeout:Message Transceiver send failed
