Line 129: BPLMN Blind Cell Search!!!
Line 129: BPLMN Blind Cell Search!!!
Line 136: Normal Blind Cell Search!!!
Line 136: Normal Blind Cell Search!!!
Line 308:  uphy_CBlindCellSearcher_processBlindCellSearchPauseRequest: Neg Indication for Blind Cell Searcher as the other stack has requested RF for Signaling
Line 308:  uphy_CBlindCellSearcher_processBlindCellSearchPauseRequest: Neg Indication for Blind Cell Searcher as the other stack has requested RF for Signaling
Line 319: S0  uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 319: S0  uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 338:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: %x 
Line 338:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: %x 
Line 341:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: EUphySearcherMsgId_BlindCellSearch
Line 341:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: EUphySearcherMsgId_BlindCellSearch
Line 365:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: next uarfcn: %d
Line 365:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: next uarfcn: %d
Line 370:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: maxUarfcnIndex: %d
Line 370:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: maxUarfcnIndex: %d
Line 371:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: uarfcnIndex: %d
Line 371:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: uarfcnIndex: %d
Line 372:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: blindCellSearcher_ptr->uarfcnToProcess: %d
Line 372:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: blindCellSearcher_ptr->uarfcnToProcess: %d
Line 388:   rssiReqMessage == NULL pointer
Line 388:   rssiReqMessage == NULL pointer
Line 412:   Cant send RSSI Request
Line 412:   Cant send RSSI Request
Line 423:   Dereferenced NULL pointer : uphy_CBplmnSearchController_GetInstanceID
Line 423:   Dereferenced NULL pointer : uphy_CBplmnSearchController_GetInstanceID
Line 428:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: sent RSSI request for uarfcn: %d
Line 428:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: sent RSSI request for uarfcn: %d
Line 435:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: EUphySearcherMsgId_BlindFreqScan
Line 435:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest: EUphySearcherMsgId_BlindFreqScan
Line 460:   blindFreqResultArray[uarfcnIndex].rssi: %d
Line 460:   blindFreqResultArray[uarfcnIndex].rssi: %d
Line 466:   EUphySearcherMsgId_BlindFreqScan: maxUarfcnIndex: %d
Line 466:   EUphySearcherMsgId_BlindFreqScan: maxUarfcnIndex: %d
Line 467:   EUphySearcherMsgId_BlindFreqScan: uarfcnIndex: %d
Line 467:   EUphySearcherMsgId_BlindFreqScan: uarfcnIndex: %d
Line 468:   EUphySearcherMsgId_BlindFreqScan: blindCellSearcher_ptr->uarfcnToProcess: %d
Line 468:   EUphySearcherMsgId_BlindFreqScan: blindCellSearcher_ptr->uarfcnToProcess: %d
Line 478:   rssiReqMessage == NULL pointer
Line 478:   rssiReqMessage == NULL pointer
Line 503:   Cant send RSSI Request
Line 503:   Cant send RSSI Request
Line 513:   Dereferenced NULL pointer : uphy_CBplmnSearchController_GetInstanceID
Line 513:   Dereferenced NULL pointer : uphy_CBplmnSearchController_GetInstanceID
Line 519: send rssiReqMessage FreqList[%d] = %d
Line 519: send rssiReqMessage FreqList[%d] = %d
Line 526:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest:wrong state!!
Line 526:   uphy_CBlindCellSearcher_processBlindCellSearchResumeRequest:wrong state!!
Line 587: blindCellSearcher_ptr or theSearcherController is null
Line 587: blindCellSearcher_ptr or theSearcherController is null
Line 596: pchAndDrxResources is null
Line 596: pchAndDrxResources is null
Line 646: BlindCellSearcher: Additinal freq BAND for BPLMN request  %d
Line 646: BlindCellSearcher: Additinal freq BAND for BPLMN request  %d
Line 655:   blindCellSearcher_ptr->replyMessage pointer is null
Line 655:   blindCellSearcher_ptr->replyMessage pointer is null
Line 675: NORMAL BPLMN Request for BLIND cell search!!!
Line 675: NORMAL BPLMN Request for BLIND cell search!!!
Line 686:   blindCellSearcher_ptr->replyMessage pointer is null
Line 686:   blindCellSearcher_ptr->replyMessage pointer is null
Line 706: This is normal Blind scan lets determin the BAND !!!
Line 706: This is normal Blind scan lets determin the BAND !!!
Line 771:   confirmMsg == NULL pointer
Line 771:   confirmMsg == NULL pointer
Line 797:   Cant send Cnf Msg
Line 797:   Cant send Cnf Msg
Line 813:   FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 813:   FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 867:   rssiReqMessage == NULL pointer
Line 867:   rssiReqMessage == NULL pointer
Line 892: blindCellSearcher_ptr->theSearcherController is NULL
Line 892: blindCellSearcher_ptr->theSearcherController is NULL
Line 902:   Cant send RSSI Request
Line 902:   Cant send RSSI Request
Line 957:   blindCellSearcher_ptr->freqscan_replyMessage is NULL
Line 957:   blindCellSearcher_ptr->freqscan_replyMessage is NULL
Line 986: uphy_CSearcherController_process: Blind Freq Scan list: %d
Line 986: uphy_CSearcherController_process: Blind Freq Scan list: %d
Line 998:   confirmMsg == NULL pointer
Line 998:   confirmMsg == NULL pointer
Line 1016:   Cant send Cnf Msg
Line 1016:   Cant send Cnf Msg
Line 1124:   rssiReqMessage == NULL pointer
Line 1124:   rssiReqMessage == NULL pointer
Line 1150:   Cant send RSSI Request
Line 1150:   Cant send RSSI Request
Line 1161: send rssiReqMessage FreqList[%d] = %d
Line 1161: send rssiReqMessage FreqList[%d] = %d
Line 1193:   uphy_CBlindCellSearcher_processRssiMeasurementReport: Ignore RSSI Rsp
Line 1193:   uphy_CBlindCellSearcher_processRssiMeasurementReport: Ignore RSSI Rsp
Line 1205: Re-Attempting RSSI scan for previously attempted UARFCN
Line 1205: Re-Attempting RSSI scan for previously attempted UARFCN
Line 1240:   BlindCellSearcherError: Already processed index %d
Line 1240:   BlindCellSearcherError: Already processed index %d
Line 1268:   rssiReqMessage == NULL pointer
Line 1268:   rssiReqMessage == NULL pointer
Line 1296:   Cant send RSSI Request
Line 1296:   Cant send RSSI Request
Line 1343: Report Sent successfully after complete BPLMN scan  !!!!
Line 1343: Report Sent successfully after complete BPLMN scan  !!!!
Line 1362:   rssiReqMessage == NULL pointer
Line 1362:   rssiReqMessage == NULL pointer
Line 1389:   Cant send RSSI Request
Line 1389:   Cant send RSSI Request
Line 1427: NORMAL BLIND REPORT SENT  !!!!
Line 1427: NORMAL BLIND REPORT SENT  !!!!
Line 1454: S0  Ignore Freq scan report as rf not availble
Line 1491: uphy_CSearcherController_process: Blind Freq RSSI index Result: %d
Line 1491: uphy_CSearcherController_process: Blind Freq RSSI index Result: %d
Line 1498:   BlindCellSearcherError: Already processed index %d
Line 1498:   BlindCellSearcherError: Already processed index %d
Line 1514:   rssiReqMessage == NULL pointer
Line 1514:   rssiReqMessage == NULL pointer
Line 1541:   Cant send RSSI Request
Line 1541:   Cant send RSSI Request
Line 1593:   StoredCellSearch Ind msg == NULL pointer
Line 1593:   StoredCellSearch Ind msg == NULL pointer
Line 1608:   freqscan_replyMessage == NULL pointer
Line 1608:   freqscan_replyMessage == NULL pointer
Line 1616:   RetCode = %d
Line 1616:   RetCode = %d
Line 1630:   processBlindFreqFullScanReport: freqIndex=%d cellCtr=%d primaryScrCode=%d rscp=%d EcNo=%d deltaRscp=%d
Line 1630:   processBlindFreqFullScanReport: freqIndex=%d cellCtr=%d primaryScrCode=%d rscp=%d EcNo=%d deltaRscp=%d
Line 1635:   processBlindFreqFullScanReport: primaryScrCode=%d rscp=%ddBm EcNo=%ddB
Line 1635:   processBlindFreqFullScanReport: primaryScrCode=%d rscp=%ddBm EcNo=%ddB
Line 1660:   StoredCellSearchReqMsg == NULL pointer
Line 1660:   StoredCellSearchReqMsg == NULL pointer
Line 1687:   StoredCellSearchReqMsg send failure
Line 1687:   StoredCellSearchReqMsg send failure
Line 1700:   processBlindFreqFullScanReport: send to Stored cell search: uarfcnToProcess = %d, uarfcnIndexCtr = %d uarfcnProcessed = %d uarfcn = %d
Line 1700:   processBlindFreqFullScanReport: send to Stored cell search: uarfcnToProcess = %d, uarfcnIndexCtr = %d uarfcnProcessed = %d uarfcn = %d
Line 1710: complete: processBlindFreqFullScanReport: uarfcnToProcess = %d, uarfcnIndexCtr = %d uarfcnProcessed = %d uarfcn = %d
Line 1710: complete: processBlindFreqFullScanReport: uarfcnToProcess = %d, uarfcnIndexCtr = %d uarfcnProcessed = %d uarfcn = %d
Line 1855:   confirmMsg == NULL pointer
Line 1855:   confirmMsg == NULL pointer
Line 1874:   uphy_CBlindCellSearcher_SendNegCnf: sending EUphyUrrcMessageTransceiverMsgId_BlindFreqScanCnf
Line 1874:   uphy_CBlindCellSearcher_SendNegCnf: sending EUphyUrrcMessageTransceiverMsgId_BlindFreqScanCnf
Line 1878:   Cant send Cnf Msg
Line 1878:   Cant send Cnf Msg
Line 1927:   uphy_CBlindCellSearcher_SendNegCnf: no request msg to send cnf!
Line 1927:   uphy_CBlindCellSearcher_SendNegCnf: no request msg to send cnf!
Line 1943:   Blind Cell Searcher Timeout
Line 1943:   Blind Cell Searcher Timeout
Line 1968:   blindCellSearcher_ptr->replyMessage NULL
Line 1968:   blindCellSearcher_ptr->replyMessage NULL
Line 1980: Blind Cell Searcher Guard Timeout
Line 1980: Blind Cell Searcher Guard Timeout
Line 2005: blindCellSearcher_ptr->replyMessage NULL
Line 2005: blindCellSearcher_ptr->replyMessage NULL
Line 2021:   Blind Cell Searcher Timeout
Line 2021:   Blind Cell Searcher Timeout
Line 2043:   uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2043:   uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2055: blindCellSearcher_ptr->freqscan_replyMessage NULL
Line 2055: blindCellSearcher_ptr->freqscan_replyMessage NULL
Line 2069: Blind Cell Searcher Timeout
Line 2069: Blind Cell Searcher Timeout
Line 2091:   uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2091:   uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2103: blindCellSearcher_ptr->freqscan_replyMessage NULL
Line 2103: blindCellSearcher_ptr->freqscan_replyMessage NULL
Line 2114:   uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2114:   uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2135:   BlindCellSearch StopReq
Line 2135:   BlindCellSearch StopReq
Line 2160:   uphy_CBlindCellSearcher_bTimeout
Line 2160:   uphy_CBlindCellSearcher_bTimeout
Line 2255:   Failed to send timout report !!!!
Line 2255:   Failed to send timout report !!!!
Line 2261: uphy_CBlindCellSearcher_processBplmnStopReq:Sending Negative Indication!
Line 2261: uphy_CBlindCellSearcher_processBplmnStopReq:Sending Negative Indication!
Line 2270: Report Sent successfully after the timout  !!!!
Line 2270: Report Sent successfully after the timout  !!!!
Line 2284: Done processing processBplmnStopReq !!!!
Line 2284: Done processing processBplmnStopReq !!!!
Line 2290: Already processing processBplmnStopReq !!!!
Line 2290: Already processing processBplmnStopReq !!!!
