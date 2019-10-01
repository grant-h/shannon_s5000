Line 358: messageListArray[i]=0
Line 358: messageListArray[i]=0
Line 409:  Release storedCellSearcher (max %d, current %d)
Line 409:  Release storedCellSearcher (max %d, current %d)
Line 430:  FREE StoredCellSearcherer[%d] nStoredCellSearchers=%d
Line 430:  FREE StoredCellSearcherer[%d] nStoredCellSearchers=%d
Line 437:  nStoredCellSearchers > 0
Line 437:  nStoredCellSearchers > 0
Line 484: uphy_CSearcherController_releaseMidCellSynchroniser: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 484: uphy_CSearcherController_releaseMidCellSynchroniser: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 498:  uphy_CSearcherController_releaseMidGroupCellSynchroniser: theGroupCellSynchronisers[%d]->requestMsg = NULL
Line 498:  uphy_CSearcherController_releaseMidGroupCellSynchroniser: theGroupCellSynchronisers[%d]->requestMsg = NULL
Line 526: uphy_CSearcherController_releaseAllGroupCellSynchroniser: BCH or DCH Tranceiver is Active
Line 526: uphy_CSearcherController_releaseAllGroupCellSynchroniser: BCH or DCH Tranceiver is Active
Line 535: uphy_CSearcherController_releaseAllGroupCellSynchroniser: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 535: uphy_CSearcherController_releaseAllGroupCellSynchroniser: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 545: uphy_CSearcherController_releaseAllGroupCellSynchroniser: Request Msg is NULL
Line 545: uphy_CSearcherController_releaseAllGroupCellSynchroniser: Request Msg is NULL
Line 585:  uarfcn=%d
Line 585:  uarfcn=%d
Line 606: SetPschMultipathInfoState uarfcn=%d state=%d
Line 606: SetPschMultipathInfoState uarfcn=%d state=%d
Line 653: uphy_CSearcherController_GetPschMultipathInfoState UP TO DATE Stored State uarfcn=%d now=%d PschStored=%d TimeDiff=%d
Line 653: uphy_CSearcherController_GetPschMultipathInfoState UP TO DATE Stored State uarfcn=%d now=%d PschStored=%d TimeDiff=%d
Line 660: uphy_CSearcherController_GetPschMultipathInfoState TOO OLD Stored State uarfcn=%d now=%d PschStored=%d TimeDiff=%d
Line 660: uphy_CSearcherController_GetPschMultipathInfoState TOO OLD Stored State uarfcn=%d now=%d PschStored=%d TimeDiff=%d
Line 676: uphy_CSearcherController_GetPschMultipathInfoState  uarfcn=%d state=%d now=%d oldState=%d PschStored=%d
Line 676: uphy_CSearcherController_GetPschMultipathInfoState  uarfcn=%d state=%d now=%d oldState=%d PschStored=%d
Line 719: SetPschMultipathInfo uarfcn=%d state=%d now=%d
Line 719: SetPschMultipathInfo uarfcn=%d state=%d now=%d
Line 804:  uphy_CSearcherController_AllocatePschSignal: No free signals
Line 804:  uphy_CSearcherController_AllocatePschSignal: No free signals
Line 828:  AllocatePschSignal uarfcn=%d signal=%d value=%d
Line 828:  AllocatePschSignal uarfcn=%d signal=%d value=%d
Line 879:  uarfcn=%d
Line 879:  uarfcn=%d
Line 919:  uphy_CSearcherController_ReleasePschSignal none (probably timed out
Line 919:  uphy_CSearcherController_ReleasePschSignal none (probably timed out
Line 923:  uphy_CSearcherController_ReleasePschSignal: Dodgy signal %d
Line 923:  uphy_CSearcherController_ReleasePschSignal: Dodgy signal %d
Line 934:  uphy_CSearcherController_DoAndReleasePschSignal for uarfcn %d due to timeout finds step  state %d
Line 934:  uphy_CSearcherController_DoAndReleasePschSignal for uarfcn %d due to timeout finds step  state %d
Line 940: ReleasePschSignal uarfcn=%d signal=%d
Line 940: ReleasePschSignal uarfcn=%d signal=%d
Line 961:  theGroupCellSynchronisers Alloc failed!!
Line 961:  theGroupCellSynchronisers Alloc failed!!
Line 975:  theGroupCellSynchronisers already defined
Line 975:  theGroupCellSynchronisers already defined
Line 997:  theStoredCellSearchers Alloc failed!!
Line 997:  theStoredCellSearchers Alloc failed!!
Line 1010:  theStoredCellSearchers already defined
Line 1010:  theStoredCellSearchers already defined
Line 1037:  Invalid umts message
Line 1037:  Invalid umts message
Line 1333:  uphy_CSearcherController_isRfAvailableForUse : searcherController_ptr->rfState: %d
Line 1333:  uphy_CSearcherController_isRfAvailableForUse : searcherController_ptr->rfState: %d
Line 1353:  rfUseReqMsg == NULL pointer
Line 1353:  rfUseReqMsg == NULL pointer
Line 1374:  Cant send PSCH Request
Line 1374:  Cant send PSCH Request
Line 1377:  uphy_CSearcherController_RequestRfStf : sending RF use request. isBlindFreqScan = %d
Line 1377:  uphy_CSearcherController_RequestRfStf : sending RF use request. isBlindFreqScan = %d
Line 1397:  uphy_CSearcherController_RequestRfUse: Requesting RF Use. isBlindFreqScan = %d
Line 1397:  uphy_CSearcherController_RequestRfUse: Requesting RF Use. isBlindFreqScan = %d
Line 1401:  uphy_CSearcherController_RequestRfUse: Returning as RF is not currently available!!
Line 1401:  uphy_CSearcherController_RequestRfUse: Returning as RF is not currently available!!
Line 1408:  uphy_CSearcherController_RequestRfUse: Returning as RF is already requested and response is pending!!
Line 1408:  uphy_CSearcherController_RequestRfUse: Returning as RF is already requested and response is pending!!
Line 1415:  uphy_CSearcherController_RequestRfUse: Returning as RF use is currently paused: rfReqCnts : %d
Line 1415:  uphy_CSearcherController_RequestRfUse: Returning as RF use is currently paused: rfReqCnts : %d
Line 1420:  uphy_CSearcherController_RequestRfUse: RF is available for use
Line 1420:  uphy_CSearcherController_RequestRfUse: RF is available for use
Line 1423:  uphy_CSearcherController_RequestRfStf: rfReqCnts : %d
Line 1423:  uphy_CSearcherController_RequestRfStf: rfReqCnts : %d
Line 1444:  uphy_CSearcherController_sendRfUsePauseCnf: sending RF Use Pause Cnf
Line 1444:  uphy_CSearcherController_sendRfUsePauseCnf: sending RF Use Pause Cnf
Line 1455:  Failed to send RF pause cnf
Line 1455:  Failed to send RF pause cnf
Line 1485:  uphy_CSearcherController_sendRfUseRel: rfReqCnts : %d
Line 1485:  uphy_CSearcherController_sendRfUseRel: rfReqCnts : %d
Line 1488:  uphy_CSearcherController_sendRfUseRel: sending RF Use Rel
Line 1488:  uphy_CSearcherController_sendRfUseRel: sending RF Use Rel
Line 1499:  Failed to send RF Rel 
Line 1499:  Failed to send RF Rel 
Line 1538: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1538: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1548: uphy_CSearcherController_process: msgId=%d, srcPrimaryId=%d, srcSubId=%d, TransactId=%d
Line 1548: uphy_CSearcherController_process: msgId=%d, srcPrimaryId=%d, srcSubId=%d, TransactId=%d
Line 1568: MessageId=%d received in state=%d when is not expected this message to be received any more
Line 1568: MessageId=%d received in state=%d when is not expected this message to be received any more
Line 1580:  MessageId=%d  received in unexpeted state=%d and freed
Line 1580:  MessageId=%d  received in unexpeted state=%d and freed
Line 1600: MessageId=%d received in state=%d when is not expected this message to be received any more
Line 1600: MessageId=%d received in state=%d when is not expected this message to be received any more
Line 1616:  MessageId=%d  received in unexpeted state=%d and freed
Line 1616:  MessageId=%d  received in unexpeted state=%d and freed
Line 1646:  Unexpected msgId=%d
Line 1646:  Unexpected msgId=%d
Line 1683:  MessageId=%d  DestComponent=%d not valid
Line 1683:  MessageId=%d  DestComponent=%d not valid
Line 1955:  Searcher Refresh Psch Request received for camping uarfcn 
Line 1955:  Searcher Refresh Psch Request received for camping uarfcn 
Line 1972:  theBlindCellSearcher == NULL
Line 1972:  theBlindCellSearcher == NULL
Line 1979:  Invalid umts message
Line 1979:  Invalid umts message
Line 1989:  EUphySearcherMsgId_RfUseRsp
Line 1989:  EUphySearcherMsgId_RfUseRsp
Line 1998:  uphy_CSearcherController_process: Rf rsp received in abnornal rf state: %d
Line 1998:  uphy_CSearcherController_process: Rf rsp received in abnornal rf state: %d
Line 2006:  uphy_CSearcherController_process: rfReqCnts : %d
Line 2006:  uphy_CSearcherController_process: rfReqCnts : %d
Line 2011:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CBlindCellSearcher_processBlindFreqScanRequest
Line 2011:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CBlindCellSearcher_processBlindFreqScanRequest
Line 2021:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CBlindCellSearcher_processBlindCellSearchRequest
Line 2021:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CBlindCellSearcher_processBlindCellSearchRequest
Line 2036:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CStoredCellSearcher_processStoredCellSearchRequest
Line 2036:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CStoredCellSearcher_processStoredCellSearchRequest
Line 2068:  uphy_CSearcherController_process: Rf rsp received in abnornal rf state: %d Possibly timeout happened
Line 2068:  uphy_CSearcherController_process: Rf rsp received in abnornal rf state: %d Possibly timeout happened
Line 2080:  uphy_CSearcherController_process:Rf Re-request triggered! rfReqRetryCnts: %d
Line 2080:  uphy_CSearcherController_process:Rf Re-request triggered! rfReqRetryCnts: %d
Line 2117:  uphy_CSearcherController_process:Max Retries Over! rfReqRetryCnts: %d
Line 2117:  uphy_CSearcherController_process:Max Retries Over! rfReqRetryCnts: %d
Line 2120:  uphy_CSearcherController_process: Neg Indication for Blind Cell Searcher
Line 2120:  uphy_CSearcherController_process: Neg Indication for Blind Cell Searcher
Line 2130:  uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2130:  uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2151:  EUphySearcherMsgId_RfUsePauseReq
Line 2151:  EUphySearcherMsgId_RfUsePauseReq
Line 2167: S0  uphy_CSearcherController_sendRfUseRel: sending RF Use Rel
Line 2180: S0  Failed to send RF Rel 
Line 2188:  EUphySearcherMsgId_RfUseResumeReq
Line 2188:  EUphySearcherMsgId_RfUseResumeReq
Line 2192:  rfState is uphy_CSearcherController_rfState_paused
Line 2192:  rfState is uphy_CSearcherController_rfState_paused
Line 2200:  rfState with Searcher is %d
Line 2200:  rfState with Searcher is %d
Line 2215: SrchAbort CnfMsg NULL
Line 2231: SrchAbort send Cnf Msg fail
Line 2246: [DR-DSDS] Srch Ctrl:  DR srch response in wrong state
Line 2246: [DR-DSDS] Srch Ctrl:  DR srch response in wrong state
Line 2259: [DR-DSDS] Srch Ctrl:   DR srch pause in wrong state
Line 2259: [DR-DSDS] Srch Ctrl:   DR srch pause in wrong state
Line 2267:  Unexpected msgId=%d
Line 2267:  Unexpected msgId=%d
Line 2300:  blindCellSearcher == 0
Line 2300:  blindCellSearcher == 0
Line 2326:  Unable to resolve StoredCellSearcherId
Line 2326:  Unable to resolve StoredCellSearcherId
Line 2344: uphy_CSearcherController_notifyStoredCompleted: FREE StoredCellSearcherer[%d] StoredCellSearcherId=%d nStoredCellSearchers=%d
Line 2344: uphy_CSearcherController_notifyStoredCompleted: FREE StoredCellSearcherer[%d] StoredCellSearcherId=%d nStoredCellSearchers=%d
Line 2364:  Already FREED: StoredCellSearcherer[%d] nStoredCellSearchers=%d
Line 2364:  Already FREED: StoredCellSearcherer[%d] nStoredCellSearchers=%d
Line 2389:  Unable to resolve groupCellSynchroInstance
Line 2389:  Unable to resolve groupCellSynchroInstance
Line 2396: uphy_CSearcherController_notifyGroupCellSynchroCompleted %d  : FREE GroupCellSynchroniser[%d] GroupCellSynchoniserId=%d nGroupCellSynchronisers=%d
Line 2396: uphy_CSearcherController_notifyGroupCellSynchroCompleted %d  : FREE GroupCellSynchroniser[%d] GroupCellSynchoniserId=%d nGroupCellSynchronisers=%d
Line 2428: Instance created for stackId %d
Line 2428: Instance created for stackId %d
Line 2469:  uphy_CSearcherController_processPauseAllRequest: isOtherStackUsingRFForSignaling: %d
Line 2469:  uphy_CSearcherController_processPauseAllRequest: isOtherStackUsingRFForSignaling: %d
Line 2480: Reset RfRxUarfcnCmd: cmd_state should be idle but cmd_state=%d
Line 2480: Reset RfRxUarfcnCmd: cmd_state should be idle but cmd_state=%d
Line 2501: RfRxUarfcnCmd: cmd is not idle on other stack(cmd_state=%d)
Line 2501: RfRxUarfcnCmd: cmd is not idle on other stack(cmd_state=%d)
Line 2534:  uphy_CSearcherController_processResumeAllRequest
Line 2534:  uphy_CSearcherController_processResumeAllRequest
Line 2694: uphy_CSearcherController_processSearchAbort: SubId=%d, index = %d, bUmtsReq = %d
Line 2706: uphy_CSearcherController_processSearchAbort: bUmtsReq=%d
Line 2760:  Searcher Refresh Psch Request received for uarfcn %d in state %d
Line 2760:  Searcher Refresh Psch Request received for uarfcn %d in state %d
Line 2776: Unexpected psch State
Line 2776: Unexpected psch State
Line 2810:  nGroupCellSynchronisers (%d) >= maxGroupCellSynchronisers (%d)
Line 2810:  nGroupCellSynchronisers (%d) >= maxGroupCellSynchronisers (%d)
Line 2816:   : processGroupCellSynchroRequest [%d, %d]
Line 2816:   : processGroupCellSynchroRequest [%d, %d]
Line 2822:  numOfCells is out of bound
Line 2822:  numOfCells is out of bound
Line 2842:  Unable to locate free groupCellSynchro pointer when nGroupCellSynchronisers = %d
Line 2842:  Unable to locate free groupCellSynchro pointer when nGroupCellSynchronisers = %d
Line 2856: processGroupCellSynchroRequest [%d %d] numOfCells %d FA%d
Line 2856: processGroupCellSynchroRequest [%d %d] numOfCells %d FA%d
Line 2868: processGroupCellSynchroRequest [%d %d] isTxDivValid=%d txDivStatus=%d
Line 2868: processGroupCellSynchroRequest [%d %d] isTxDivValid=%d txDivStatus=%d
Line 2877:  numOfCells is out of bound
Line 2877:  numOfCells is out of bound
Line 2880: CREATE: groupcellSynchroniserIndex=%d instanceCounter=%d nGroupCellSynchronisers=%d
Line 2880: CREATE: groupcellSynchroniserIndex=%d instanceCounter=%d nGroupCellSynchronisers=%d
Line 2953:  uphy_CSearcherController_processBlindCellSearchRequest: Returning as RF is not currently available!!
Line 2953:  uphy_CSearcherController_processBlindCellSearchRequest: Returning as RF is not currently available!!
Line 3009: uphy_CSearcherController_processBlindFreqScanRequest: Returning as RF is not currently available!!
Line 3009: uphy_CSearcherController_processBlindFreqScanRequest: Returning as RF is not currently available!!
Line 3050:  Stored cell searcher is running. Discard it!!!
Line 3050:  Stored cell searcher is running. Discard it!!!
Line 3066:  msgDeadlineListInfo == NULL pointer
Line 3066:  msgDeadlineListInfo == NULL pointer
Line 3090:  searcherController_ptr->nStoredCellSearchers==searcherController_ptr->maxStoredCellSearchers->increase maxStoredCellSearchers!!
Line 3090:  searcherController_ptr->nStoredCellSearchers==searcherController_ptr->maxStoredCellSearchers->increase maxStoredCellSearchers!!
Line 3110:  Searcher Controller Error: Unable to locate free storedCellSearcher pointer when nStoredCellSearchers = %d
Line 3110:  Searcher Controller Error: Unable to locate free storedCellSearcher pointer when nStoredCellSearchers = %d
Line 3116: nStoredCellSearchers = %d storedCellSearcherCounter=%d
Line 3116: nStoredCellSearchers = %d storedCellSearcherCounter=%d
Line 3190:  uphy_CSearcherController_processStoredCellSearchRequest: Returning as RF is not currently available!!
Line 3190:  uphy_CSearcherController_processStoredCellSearchRequest: Returning as RF is not currently available!!
Line 3264: :   uphy_CSearcherController_LocateGroupCellSynchroComponent NOT FOUND: destComponent=%d
Line 3264: :   uphy_CSearcherController_LocateGroupCellSynchroComponent NOT FOUND: destComponent=%d
Line 3330:  Trying to checking valid dest component when maxStoredCellSearchers isn't set
Line 3330:  Trying to checking valid dest component when maxStoredCellSearchers isn't set
Line 3343:  Trying to checking valid dest component when maxGroupCellSynchronisers isn't set
Line 3343:  Trying to checking valid dest component when maxGroupCellSynchronisers isn't set
Line 3349:  No destination component found.
Line 3349:  No destination component found.
Line 3427:  UPHY Problem : No Camping Frequency set
Line 3427:  UPHY Problem : No Camping Frequency set
Line 3437:  UPHY rejects stored cell search : Bad Uarfcn %d when in dedicated mode and camped on %d
Line 3437:  UPHY rejects stored cell search : Bad Uarfcn %d when in dedicated mode and camped on %d
Line 3468: Warning: GroupCellSynchro message->payload.primaryScrCode[i] out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3523: Warning: PschReply message->payload.multipathInfo.pathOffset[i] out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3532:  Invalid Psch reply msg
Line 3532:  Invalid Psch reply msg
Line 3539:  Invalid Psch reply msg
Line 3539:  Invalid Psch reply msg
Line 3559: Warning: SschReply message->payload.scrCodeGroup out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3564: Warning: SschReply message->payload.frameOffset out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3584: Warning: GroupCpichScrCodeReply message->payload.primaryScrCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3605: Warning: CpichRscpReply message->payload.primaryScrCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3628: Warning: GroupCpichMultipathReply message->payload.primaryScrCode[i] out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3712:  Unexpected Requestor
Line 3712:  Unexpected Requestor
Line 3805:  Failed to send releaseAllCnf
Line 3805:  Failed to send releaseAllCnf
Line 3936: [DR-DSDS] Srch Ctrl: SearcherReqMsg == NULL pointer
Line 3936: [DR-DSDS] Srch Ctrl: SearcherReqMsg == NULL pointer
Line 3941: [DR-DSDS] Srch Ctrl: srch request for meas type %d
Line 3941: [DR-DSDS] Srch Ctrl: srch request for meas type %d
Line 3960: [DR-DSDS] Srch Ctrl: Searcher is already in use, so use directly
Line 3960: [DR-DSDS] Srch Ctrl: Searcher is already in use, so use directly
Line 3965: [DR-DSDS] Srch Ctrl: Searcher is in requested state
Line 3965: [DR-DSDS] Srch Ctrl: Searcher is in requested state
Line 3985: [DR-DSDS] Srch Ctrl:  Sending searcher Use Request to DR mngr Interface from Searcher controller for meas type %d
Line 3985: [DR-DSDS] Srch Ctrl:  Sending searcher Use Request to DR mngr Interface from Searcher controller for meas type %d
Line 3989: [DR-DSDS] Srch Ctrl:  Failed to send searcher Request from searcher controller
Line 3989: [DR-DSDS] Srch Ctrl:  Failed to send searcher Request from searcher controller
Line 4002: [DR-DSDS] Srch Ctrl: SearcherRelMsg == NULL pointer
Line 4002: [DR-DSDS] Srch Ctrl: SearcherRelMsg == NULL pointer
Line 4007: [DR-DSDS] Srch Ctrl: Searcher state not in Use, so no need to send release
Line 4007: [DR-DSDS] Srch Ctrl: Searcher state not in Use, so no need to send release
Line 4011: [DR-DSDS] Srch Ctrl: Sending  Searcher Use Rel to DR mngr Interface
Line 4011: [DR-DSDS] Srch Ctrl: Sending  Searcher Use Rel to DR mngr Interface
Line 4025: [DR-DSDS] Srch Ctrl: Failed to send searcher  Request
Line 4025: [DR-DSDS] Srch Ctrl: Failed to send searcher  Request
Line 4037: [DR-DSDS] Srch Ctrl: Searcher rsp received in abnornal searcher state: %d
Line 4037: [DR-DSDS] Srch Ctrl: Searcher rsp received in abnornal searcher state: %d
Line 4051: [DR-DSDS] Srch Ctrl: Searcher controller Searcher Grant
Line 4051: [DR-DSDS] Srch Ctrl: Searcher controller Searcher Grant
Line 4067: [DR-DSDS] Srch Ctrl: Searcher controller Searcher Reject
Line 4067: [DR-DSDS] Srch Ctrl: Searcher controller Searcher Reject
Line 4083: [DR-DSDS] Srch Ctrl:  uphy_CSearcherController_SearcherResponse: Neg Indication for Stored Cell Searcher %d
Line 4083: [DR-DSDS] Srch Ctrl:  uphy_CSearcherController_SearcherResponse: Neg Indication for Stored Cell Searcher %d
Line 4102: [DR-DSDS] Srch Ctrl: There are no messages to be processed 
Line 4102: [DR-DSDS] Srch Ctrl: There are no messages to be processed 
Line 4108: [DR-DSDS] Srch Ctrl: Unexpected DR mngr response
Line 4108: [DR-DSDS] Srch Ctrl: Unexpected DR mngr response
Line 4121: [DR-DSDS] Srch Ctrl: Searcher Pause 
Line 4121: [DR-DSDS] Srch Ctrl: Searcher Pause 
Line 4151: [DR-DSDS] Srch Ctrl: Searcher controller Handle Measurements, meastype %d 
Line 4151: [DR-DSDS] Srch Ctrl: Searcher controller Handle Measurements, meastype %d 
Line 4174: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage:msgDeadlineListInfo == NULL pointer
Line 4174: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage:msgDeadlineListInfo == NULL pointer
Line 4185: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage: ScrId: %d  Enqueued MsgId: %d to the Head
Line 4185: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage: ScrId: %d  Enqueued MsgId: %d to the Head
Line 4191: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage: Enqueued  ScrId: %d MsgId: %d to the Tail
Line 4191: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage: Enqueued  ScrId: %d MsgId: %d to the Tail
Line 4195: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage: Number of Queued Msgs:  %d meastype %d
Line 4195: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage: Number of Queued Msgs:  %d meastype %d
Line 4223: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_processQueuedMessage: Dequeued ScrId: %d MsgId: %d, meastype %d
Line 4223: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_processQueuedMessage: Dequeued ScrId: %d MsgId: %d, meastype %d
Line 4233: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_processQueuedMessage: Number of Queued Msgs:  %d
Line 4233: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_processQueuedMessage: Number of Queued Msgs:  %d
Line 4261: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_resetMessageQueue: Flushes queue msg ScrId: %d MsgId: %d
Line 4261: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_resetMessageQueue: Flushes queue msg ScrId: %d MsgId: %d
Line 4290: [DR-DSDS] Srch Ctrl:  No of elements in queue: %d 
Line 4290: [DR-DSDS] Srch Ctrl:  No of elements in queue: %d 
Line 4303: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_isSearcherInUse: searcher is currently in use or requested state
Line 4303: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_isSearcherInUse: searcher is currently in use or requested state
