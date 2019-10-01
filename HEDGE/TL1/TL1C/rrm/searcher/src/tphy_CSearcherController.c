Line 508: Srch Ctrl :releaseMidCellSynchroniser: Free CellSynchroniser[%d] Uarfcn[%d] Midamble[%d]  cellSynchroniserId=%d nCellSynchronisers=%d
Line 527: Srch Ctrl:releaseMidCellSynchroniser: theCellSynchronisers[%d]->requestMsg=NULL
Line 585: Srch Ctrl :theCellSynchronisers Alloc failed!!
Line 600: Srch Ctrl : theCellSynchronisers already defined
Line 635: Srch Ctrl : theIntraGroupCellSynchronisers already defined
Line 656: Srch Ctrl : theInterGroupCellSynchronisers Alloc failed!!
Line 670: Srch Ctrl : theInterGroupCellSynchronisers already defined
Line 693: Srch Ctrl :theInitialCellSearchers Alloc failed!!
Line 707: Srch Ctrl : theInitialCellSearchers already defined
Line 715: searcherController_ptr->rfState: %d
Line 735: rfUseReqMsg == NULL pointer
Line 752: ICS RequestReason changed to SysInfo during BPLMN: tdd_isBPLMN=%d, tdd_isBPLMN_Search_From_OtherRAT=%d
Line 769: Cant send PSCH Request
Line 772: Srch Ctrl RequestRfStf : sending RF use request
Line 786: token submit when modem off 
Line 795: Requesting RF Use
Line 799: Returning as RF is not currently available!!
Line 806: Returning as RF is already requested and response is pending!!
Line 813:  Returning as RF use is currently paused: rfReqCnts : %d
Line 818: RF is available for use
Line 821: rfReqCnts : %d
Line 841: sending RF Use Pause Cnf
Line 851: Failed to send RF pause cnf
Line 880:  rfReqCnts : %d
Line 883: sending RF Use Rel
Line 893: Failed to send RF Rel 
Line 1121: Srch Ctrl :process: msgId=%d, srcPrimaryId=%d, srcSubId=%d, TransactId=%d
Line 1171: Srch Ctrl :MessageId=%d received in state=%d
Line 1195: Srch Ctrl :MessageId=%d  received in unexpeted state=%d and freed
Line 1229: Srch Ctrl :Unexpected msgId=%d
Line 1267: Srch Ctrl :MessageId=%d  DestComponent=%d not valid
Line 1294: SrchAbort CnfMsg NULL
Line 1308: SrchAbort send Cnf Msg fail
Line 1795: ETphySearcherMsgId_RfUseRsp
Line 1809:  Rf rsp received in abnornal rf state: %d
Line 1817: Srch Ctrl process: rfReqCnts : %d
Line 1825:  CFS_processCarrierFreqScanRequest
Line 1851:  :ICS processInitialCellSearchRequest/BestCellSearchRequest: %x
Line 1859:  ICS processBestCellSearchRequest: %x
Line 1893:  RfUseRsp:tphy_CInitialCellSearcher_processInitialCellSearchRequest
Line 1907: Srch Ctrl process: Rf rsp received in abnornal rf state: %d Possibly timeout happened
Line 1918: Rf Re-request triggered! rfReqRetryCnts: %d
Line 1923: token submit when modem off 
Line 1946: ETphySearcherMsgId_RfUsePauseReq
Line 1967: ETphySearcherMsgId_RfUseResumeReq
Line 1971: rfState is tphy_CSearcherController_rfState_paused
Line 1979: rfState with Searcher is %d
Line 1992: Srch Ctrl :Unexpected msgId=%d
Line 2039: Srch Ctrl :Unable to resolve InitialCellSearcherId
Line 2061: Srch Ctrl :notifyStoredCompleted: FREE StoredCellSearcherer[%d] StoredCellSearcherId=%d nInitialCellSearchers=%d
Line 2094: Srch Ctrl :Unable to locate free storedCellSearcher pointer when nInitialCellSearchers = %d
Line 2171: cellParamId %d  rscp %d snr %d
Line 2177: ICS:Cant send Ind Message
Line 2220: Srch Ctrl :Unable to resolve CellSynchroInstance
Line 2268: Srch Ctrl :Unable to resolve Intra GroupCellSynchroInstance
Line 2306: Srch Ctrl :ReleaseIntraGroupCellSynchro
Line 2331: IntraGCS: Midamble= %d TotalRscp= %d UpdateCnt=%d avgRscp=%d
Line 2350: Intra Freq GCS: Dominant Midamble= %d RSCP =%d
Line 2406: Srch Ctrl :ReleaseInterGroupCellSynchro
Line 2427: Inter Freq GCS: Midamble= %d TotalRscp= %d ucUpdateCnt=%d avgRscp=%d
Line 2446: Inter Freq GCS: Dominant Midamble= %d RSCP =%d
Line 2476: Srch Ctrl :Unable to resolve Inter GroupCellSynchroInstance
Line 2525: tphy_CSearcherController instance mem allocation failed
Line 2557: isOtherStackUsingRFForSignaling: %d
Line 2615: Srch Ctrl :processResumeAllRequest
Line 2676:  isOtherStackUsingRFForSignaling %d
Line 2709: Srch Ctrl :Unable to resolve InitialCellSearcherId
Line 2754: cellParamId %d  rscp %d snr %d
Line 2760: ICS:Cant send Ind Message
Line 2834: Srch Ctrl process:Max Retries Over! rfReqRetryCnts: %d
Line 2839:  Neg Indication for CFS
Line 2852:  Neg Indication for Carrier Freq Scan
Line 2866:  Neg Ind for ICS %d
Line 2882:  Neg Indication for Best Cell Searcher %d
Line 2887: Srch Ctrl :Unable to resolve ICSId
Line 3305: Srch Ctrl:searcherController_ptr->nCellSynchronisers==searcherController_ptr->maxCellSynchronisers ->increase maxCellSynchronisers!!!
Line 3319: Srch Ctrl :Unable to locate free cellSynchro pointer when nCellSynchronisers = %d
Line 3370: mgm state not ETphyMgmMeasType_Intra so return
Line 3408: Srch Ctrl :searcherController_ptr->nIntraGroupCellSynchronisers==searcherController_ptr->maxIntraGroupCellSynchronisers ->increase maxIntraGroupCellSynchronisers!!!
Line 3421: Srch Ctrl :Unable to locate free IntraGroupCellSynchro pointer when nIntraGroupCellSynchronisers = %d
Line 3434: Srch Ctrl :Unable to Create a new Intra Group Cell Synchroniser object
Line 3472: mgm state not ETphyMgmMeasType_Inter so return
Line 3510: Srch Ctrl :searcherController_ptr->nInterGroupCellSynchronisers==searcherController_ptr->maxInterGroupCellSynchronisers ->increase maxInterGroupCellSynchronisers!!!
Line 3523: Srch Ctrl : Unable to locate free InterGroupCellSynchro pointer when nInterGroupCellSynchronisers = %d
Line 3535: Srch Ctrl : Unable to Create a new Inter Group Cell Synchroniser object
Line 3580: searcherController_ptr->theCarrierFreqSearcher==NULL
Line 3633: Returning as RF is not currently available!!
Line 3707: Srch Ctrl :processCarrierFreqSCANRequest: Returning as RF is not currently available!!
Line 3755: Srch Ctrl : CellSynchroniser Error : Unexpected Requestor
Line 3768: Srch Ctrl :replyMessage == NULL pointer
Line 3790: Srch Ctrl : Cant send Ind Message
Line 3821: Srch Ctrl : Unexpected Requestor
Line 3831: Srch Ctrl :replyMessage == NULL pointer
Line 3851: Srch Ctrl :Cant send Ind Message
Line 3882: Srch Ctrl :MultipathReqMessage == NULL pointer
Line 3908: Srch Ctrl :RscpValidateRequest : MP Buffering
Line 3915: Srch Ctrl :Cant send MP Searcher Request
Line 3951: Srch Ctrl :processRSCPValidateMPMeasurementReport: MultipathReqMessage == NULL pointer
Line 3978: Srch Ctrl :RscpValidateRequest MP RSCP Measurement 
Line 3985: Srch Ctrl :Cant send MP Searcher Request
Line 3990: Srch Ctrl :processRSCPValidateMPMeasurementReport: ReqMsg == NULL pointer
Line 4017: Srch Ctrl : processRSCPValidateMPMeasurementReport Error : Unexpected Requestor
Line 4030: Srch Ctrl :replyMessage == NULL pointer
Line 4052: Srch Ctrl : Cant send Ind Message
Line 4081: Srch Ctrl : Unexpected Requestor
Line 4091: Srch Ctrl :replyMessage == NULL pointer
Line 4111: Srch Ctrl :Cant send Ind Message
Line 4121: Srch Ctrl : Unknown MP_mode=%d or Unknown State =0x%x 
Line 4175: Srch Ctrl :searcherController_ptr->nInitialCellSearchers==searcherController_ptr->maxInitialCellSearchers->increase maxInitialCellSearchers!!!
Line 4189: Srch Ctrl :Unable to locate free storedCellSearcher pointer when nInitialCellSearchers = %d
Line 4242: tphy_CSearcherController_processInitialCellSearchRequest: Returning as RF is not currently available!!
Line 4291: SC  :Num of Freq is 0 = %d
Line 4299: Num Of Freq %d
Line 4302: Freq Info %d
Line 4338: Srch Ctrl:searcherController_ptr->nInitialCellSearchers==searcherController_ptr->maxInitialCellSearchers->increase maxInitialCellSearchers!!!
Line 4352: Srch Ctrl :Unable to locate free storedCellSearcher pointer when nInitialCellSearchers = %d
Line 4361: Srch Ctrl :Unable to locate free storedCellSearcher pointer when nInitialCellSearchers 
Line 4375: Srch Ctrl:processBestCellScanRequest: Requesting for RF
Line 4409: Srch Ctrl:processInitialCellSearchRequest: Returning as RF is not currently available!!
Line 4495: tphy_CSearcherController_processFreqCellSearchRequest: found cell (%d, %d), rscp=%d, delta_rscp=%d
Line 4520: tphy_CSearcherController_processFreqCellSearchRequest:Cant send Ind Message
Line 4675: Srch Ctrl :Trying to checking valid dest component when maxInitialCellSearchers isn't set
Line 4689: Srch Ctrl :Trying to checking valid dest component when maxCellSynchronisers isn't set
Line 4702: Srch Ctrl :Trying to checking valid dest component when maxIntraGroupCellSynchronisers isn't set
Line 4715: Srch Ctrl :Trying to checking valid dest component when maxInterGroupCellSynchronisers isn't set
Line 4728: Srch Ctrl :Unwanted destComponent
Line 4856: Srch Ctrl :Unexpected Requestor
Line 4903: Srch Ctrl :Unexpected Requestor to Intra Group Cell Synchroniser
Line 4942: Srch Ctrl :Unexpected Requestor to Inter Group Cell Synchroniser
Line 4983: SEND BPLMN MSG
Line 5015: BCSF :Cant send Ind Message
Line 5044: tphy_CSearcherController_sendFreqCellSearchFailure :Cant send Ind Message
Line 5084: Failed to send releaseAllCnf
Line 5093: Srch Ctrl :releaseGCSRequests
Line 5095: ST%d T_DSDS: Srch Ctrl :releaseGCSRequests: midIdentifier: %d
Line 5124: Srch Ctrl state: %d 
Line 5161: Srch Ctrl  state [%d]
Line 5181: Srch Ctrl:AFC_TT_MidambleConfig  Midamble Index[%d]
Line 5198: AFC_Tracking_Mode  uMidIndex %d uCurrentAfcMidamble %d 
Line 5210: Srch Ctrl: processMultipathMeasurementReport : MP_mode=[%d] 
Line 5216: Cell Database Updating Utility :ueServingCellMeas: UE did not camp to any frequency
Line 5239: Srch Ctrl:MpSearcherRequest: MultipathReqMessage == NULL pointer
Line 5267: Srch Ctrl: MpSearcherRequest: Cant send Multipath Request
Line 5272: ServcellInfo.bUpdateServCellInfo %d  ServcellInfo.midambleIndex %d
Line 5296: Srch Ctrl: MpSrch TargetCellpathControl
Line 5299: MpSrch Request but UE did not camp to any frequency
Line 5307: MpSrchRequest: MultipathReqMessage == NULL pointer
Line 5334: Srch Ctrl: MpSrchRequest: Cant send Multipath Request
Line 5348: Srch Ctrl:  MP_mode=[%d] 
Line 5355: Srch Ctrl : replyMessage == NULL pointer
Line 5360: Cell Database Updating Utility :ueServingCellMeas: UE did not camp to any frequency
Line 5375: Srch Ctrl:MpSrchRequest: MultipathReqMessage == NULL pointer
Line 5403: Srch Ctrl:MpSrchRequest: Cant send Multipath Request
Line 5426: Srch Ctrl : CellSynchroniser Error : Unexpected Requestor
Line 5436: Srch Ctrl :replyMessage == NULL pointer
Line 5453: Srch Ctrl : Cant send Ind Message
Line 5486: Srch Ctrl: DwptsReqMessage == NULL pointer
Line 5491: Srch Ctrl: TargetCellSynchroRequest
Line 5495: MpSrch Request but UE did not camp to any frequency
Line 5506: Srch Ctrl: DwptsReqMessage == NULL pointer
Line 5539: Srch Ctrl: Cant send S1 Srchr Req
Line 5556: MpSrchRequest: MultipathReqMessage == NULL pointer
Line 5583: Srch Ctrl: MpSrchRequest: Cant send Multipath Request
Line 5605: Srch Ctrl: processTargetCellSynchroDwptsMeasReport
Line 5609: Srch Ctrl : replyMessage == NULL pointer
Line 5615: Srch Ctrl:processTargetCellSynchroDwptsMeasReport: UE did not camp to any frequency
Line 5647: Srch Ctrl:processTargetCellSynchroDwptsMeasReport: MultipathReqMessage == NULL pointer
Line 5701: Srch Ctrl:processTargetCellSynchroDwptsMeasReport: Cant send Multipath Request
Line 5731: Srch Ctrl : Unexpected Requestor
Line 5741: Srch Ctrl:processTargetCellSynchroDwptsMeasReport : replyMessage == NULL pointer
Line 5758: Srch Ctrl : Cant send Ind Message
Line 5789: Srch Ctrl: processTargetCellSynchroMPMeasReport: MP_mode=[%d] 
Line 5793: Srch Ctrl: replyMessage == NULL pointer
Line 5798: Srch Ctrl:processTargetCellSynchroMPMeasReport: UE did not camp to any frequency
Line 5817: Srch Ctrl:processTargetCellSynchroMPMeasReport: MultipathReqMessage == NULL pointer
Line 5871: Srch Ctrl:processTargetCellSynchroMPMeasReport: Cant send Multipath Request
Line 5883: Srch Ctrl:processTargetCellSynchroMPMeasReport: Detected Midamble= %d
Line 5891: Srch Ctrl:processTargetCellSynchroMPMeasReport: MultipathReqMessage == NULL pointer
Line 5921: Srch Ctrl:processTargetCellSynchroMPMeasReport: Cant send Multipath Request
Line 5949: Srch Ctrl : Unexpected Requestor
Line 5959: Srch Ctrl processTargetCellSynchroMPMeasReport: replyMessage == NULL pointer
Line 5976: Srch Ctrl processTargetCellSynchroMPMeasReport: Cant send Ind Message
