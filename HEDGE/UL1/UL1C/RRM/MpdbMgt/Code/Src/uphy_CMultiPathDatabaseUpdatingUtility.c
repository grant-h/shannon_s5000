Line 258:   multiPathDatabaseUpdatingUtility_ptr->updatingToken = NULL
Line 258:   multiPathDatabaseUpdatingUtility_ptr->updatingToken = NULL
Line 419: uphy_CMultiPathDatabaseUpdatingUtility_GroupCellSynchroniserFree: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 419: uphy_CMultiPathDatabaseUpdatingUtility_GroupCellSynchroniserFree: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 429:   uphy_CMultiPathDatabaseUpdatingUtility_GroupCellSynchroniserFree: theGroupCellSynchronisers[%d]->requestMsg = NULL
Line 429:   uphy_CMultiPathDatabaseUpdatingUtility_GroupCellSynchroniserFree: theGroupCellSynchronisers[%d]->requestMsg = NULL
Line 532:   MPDB UpdateDatabase commencing new refresh cycle with %d outstanding requests
Line 532:   MPDB UpdateDatabase commencing new refresh cycle with %d outstanding requests
Line 584:   MPDB UpdateDatabase finds NULL cellData
Line 584:   MPDB UpdateDatabase finds NULL cellData
Line 589: MPDB UpdateDatabase has NO Active Cells
Line 589: MPDB UpdateDatabase has NO Active Cells
Line 608: MPDB UpdateDatabase has NO Identified Active Cells
Line 608: MPDB UpdateDatabase has NO Identified Active Cells
Line 634: MPDB UpdateDatabase not enabled
Line 634: MPDB UpdateDatabase not enabled
Line 650: MPDB UpdateDatabase single shot token complete
Line 650: MPDB UpdateDatabase single shot token complete
Line 658: MPDB UpdateDatabase CFN %d is compressed. Token will be submitted in the next frame
Line 658: MPDB UpdateDatabase CFN %d is compressed. Token will be submitted in the next frame
Line 663: MPDB UpdateDatabase CFN %d is in FMO. Token will be submitted in the next frame
Line 663: MPDB UpdateDatabase CFN %d is in FMO. Token will be submitted in the next frame
Line 674: MPDB UpdateDatabase single shot token complete
Line 674: MPDB UpdateDatabase single shot token complete
Line 721: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 721: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 751:   *******Clear BackUpFingers
Line 751:   *******Clear BackUpFingers
Line 769:   EUphyMultipathMgmtMsgId_StartAgingAndUpdating requested with active token.
Line 769:   EUphyMultipathMgmtMsgId_StartAgingAndUpdating requested with active token.
Line 770:   Are we waking up from snoozing?.
Line 770:   Are we waking up from snoozing?.
Line 782:  EUphyMultipathMgmtMsgId_StopUpdatingAndContinueAging
Line 782:  EUphyMultipathMgmtMsgId_StopUpdatingAndContinueAging
Line 795: uphy_CMultiPathDatabaseUpdatingUtility_process StopUpdating
Line 795: uphy_CMultiPathDatabaseUpdatingUtility_process StopUpdating
Line 818: [E-DRX Measurement] do not  set OutstandingCpichMultipathRequests 0 during Resync procedure
Line 818: [E-DRX Measurement] do not  set OutstandingCpichMultipathRequests 0 during Resync procedure
Line 825: [E-DRX Measurement] isHsDschDrxInCellFach=%d needResync=%d
Line 825: [E-DRX Measurement] isHsDschDrxInCellFach=%d needResync=%d
Line 830:  hsdschResourcesController is NULL
Line 830:  hsdschResourcesController is NULL
Line 840:   *******Clear BackUpFingers
Line 840:   *******Clear BackUpFingers
Line 846: uphy_CMultiPathDatabaseUpdatingUtility_process StartUpdating
Line 846: uphy_CMultiPathDatabaseUpdatingUtility_process StartUpdating
Line 866:   EUphyMultipathMgmtMsgId_StartUpdating requested with active token.
Line 866:   EUphyMultipathMgmtMsgId_StartUpdating requested with active token.
Line 891: uphy_CMultiPathDatabaseUpdatingUtility_process StartSingleUpdate for BPLMN CResourcesConfigurationController 0x%x
Line 891: uphy_CMultiPathDatabaseUpdatingUtility_process StartSingleUpdate for BPLMN CResourcesConfigurationController 0x%x
Line 904: uphy_CMultiPathDatabaseUpdatingUtility_process StartSingleUpdate
Line 904: uphy_CMultiPathDatabaseUpdatingUtility_process StartSingleUpdate
Line 949:  MPDB EUphyMultipathMgmtMsgId_GroupCpichMultipathCompleted; currently %d outstanding requests.
Line 949:  MPDB EUphyMultipathMgmtMsgId_GroupCpichMultipathCompleted; currently %d outstanding requests.
Line 955:  MPDB EUphyMultipathMgmtMsgId_GroupCpichMultipathCompleted; currently %d outstanding requests.
Line 955:  MPDB EUphyMultipathMgmtMsgId_GroupCpichMultipathCompleted; currently %d outstanding requests.
Line 1001: MPDB: Channel configuration is on going at CFN %d, so postpone finger assignment one frame later
Line 1001: MPDB: Channel configuration is on going at CFN %d, so postpone finger assignment one frame later
Line 1056: MPDB singleUpdate [%d]
Line 1056: MPDB singleUpdate [%d]
Line 1073:   MPDB process: no physical channel assigned
Line 1073:   MPDB process: no physical channel assigned
Line 1078:  MPDB Serious Problem : Cant locate cell info for PScrCode %d Uarfcn %d
Line 1078:  MPDB Serious Problem : Cant locate cell info for PScrCode %d Uarfcn %d
Line 1108:  MultipathUpdating received unknown msgid %d
Line 1108:  MultipathUpdating received unknown msgid %d
Line 1122: MPDB SearcherController returns Group Search Failure: %d outstanding requests
Line 1122: MPDB SearcherController returns Group Search Failure: %d outstanding requests
Line 1136:  Cfn %d Sfn %d: MultipathUpdating received failed response msg id %d
Line 1136:  Cfn %d Sfn %d: MultipathUpdating received failed response msg id %d
Line 1145: MultipathUpdating received failed; currently %d outstanding requests.
Line 1145: MultipathUpdating received failed; currently %d outstanding requests.
Line 1190: uphy_CMultiPathDatabaseUpdatingUtility_SubmitCpichMultipathRequest: cellData=0
Line 1190: uphy_CMultiPathDatabaseUpdatingUtility_SubmitCpichMultipathRequest: cellData=0
Line 1196: uphy_CMultiPathDatabaseUpdatingUtility_SubmitCpichMultipathRequest: cellData [%d %d] multipathInfo=0
Line 1196: uphy_CMultiPathDatabaseUpdatingUtility_SubmitCpichMultipathRequest: cellData [%d %d] multipathInfo=0
Line 1208:   cpichMultiPathReqMessage == NULL pointer
Line 1208:   cpichMultiPathReqMessage == NULL pointer
Line 1272: MPDB SubmitCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 1272: MPDB SubmitCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 1277: MPDB SubmitCpichMultipathRequest: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 1277: MPDB SubmitCpichMultipathRequest: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 1284:   unable to send Cpich MultiPath Req Message
Line 1284:   unable to send Cpich MultiPath Req Message
Line 1290: MPDB multi-path request for [%d, %d]; currently %d outstanding requests.
Line 1290: MPDB multi-path request for [%d, %d]; currently %d outstanding requests.
Line 1327:  MPDB Cfn %d Sfn %d: Timeout on uarfcn %d primary scr code %d; %d outstanding requests
Line 1327:  MPDB Cfn %d Sfn %d: Timeout on uarfcn %d primary scr code %d; %d outstanding requests
Line 1336: S0 MPDB timeOutCnt=%d 
Line 1340: S0 MPDB Clear OutstandingReq  timeOutCnt=%d
Line 1403: There are no cells in the active list after [%d, %d]
Line 1403: There are no cells in the active list after [%d, %d]
Line 1407: The cell [%d, %d] should not returned; if returned- it will add group cell search.(nonIdentified cell).
Line 1407: The cell [%d, %d] should not returned; if returned- it will add group cell search.(nonIdentified cell).
Line 1442:  Database Updating Utility: Inconsistency in NActiveCells as no first cell
Line 1442:  Database Updating Utility: Inconsistency in NActiveCells as no first cell
Line 1451:  The first active cell [%d, %d] is in the process of being updated
Line 1451:  The first active cell [%d, %d] is in the process of being updated
Line 1460:  The first active cell [%d, %d] is in the process of being updated
Line 1460:  The first active cell [%d, %d] is in the process of being updated
Line 1493:   stoppedMsg == NULL pointer
Line 1493:   stoppedMsg == NULL pointer
Line 1507:   startedMsg == NULL pointer
Line 1507:   startedMsg == NULL pointer
Line 1515: uphy_CMultiPathDatabaseUpdatingUtility_SendConfirmationMsg with unrecongniosed MsgId to confirm
Line 1515: uphy_CMultiPathDatabaseUpdatingUtility_SendConfirmationMsg with unrecongniosed MsgId to confirm
Line 1538:   Cant send Cnf
Line 1538:   Cant send Cnf
Line 1580:   uhal command exec failed
Line 1580:   uhal command exec failed
Line 1590: Finger %d(fingersStr 0x%x) is locked for uarfcn=%d, primaryScrCode=%d
Line 1590: Finger %d(fingersStr 0x%x) is locked for uarfcn=%d, primaryScrCode=%d
Line 1597: No finger(fingersStr 0x%x) is locked for uarfcn=%d, primaryScrCode=%d
Line 1597: No finger(fingersStr 0x%x) is locked for uarfcn=%d, primaryScrCode=%d
Line 1603: uphy_CMultiPathDatabaseUpdatingUtility_isLockedFinger cannot locate pScrCode %d in mapping table
Line 1603: uphy_CMultiPathDatabaseUpdatingUtility_isLockedFinger cannot locate pScrCode %d in mapping table
Line 1690:   cpichGroupMultiPathReqMessage == NULL pointer
Line 1690:   cpichGroupMultiPathReqMessage == NULL pointer
Line 1741: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 1741: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 1750: MPDB SubmitGroupCellSynchroRequestForBPLMNBchCell : isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d
Line 1750: MPDB SubmitGroupCellSynchroRequestForBPLMNBchCell : isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d
Line 1758:   MPDB UpdateDatabase finds NULL cellInformation
Line 1758:   MPDB UpdateDatabase finds NULL cellInformation
Line 1787:   unable to send Group Cpich MultiPath Req Message
Line 1787:   unable to send Group Cpich MultiPath Req Message
Line 1793: MPDB GroupCpichMultipathRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d, Outstanding requests=%d)
Line 1793: MPDB GroupCpichMultipathRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d, Outstanding requests=%d)
Line 1804:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: cellData=NULL
Line 1804:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: cellData=NULL
Line 1845:   GroupCellSynchroReqMsg == NULL pointer
Line 1845:   GroupCellSynchroReqMsg == NULL pointer
Line 1884:   MPDB UpdateDatabase finds NULL cellInformation
Line 1884:   MPDB UpdateDatabase finds NULL cellInformation
Line 1910:   Unable to send GroupCellSynchroReqMsg
Line 1910:   Unable to send GroupCellSynchroReqMsg
Line 1914: MPDB SubmitGroupCellSynchroRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d)
Line 1914: MPDB SubmitGroupCellSynchroRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d)
Line 1960:   cpichGroupMultiPathReqMessage == NULL pointer
Line 1960:   cpichGroupMultiPathReqMessage == NULL pointer
Line 2008:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: Overriding MP searcher Frame offset(%d) with Finger Table MCD(%d)
Line 2008:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: Overriding MP searcher Frame offset(%d) with Finger Table MCD(%d)
Line 2014: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2014: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2024: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2024: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2034: MPDB SubmitGroupCpichMultipathRequest without Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2034: MPDB SubmitGroupCpichMultipathRequest without Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2084: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2084: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2094: MPDB SubmitGroupCpichMultipathRequest without Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2094: MPDB SubmitGroupCpichMultipathRequest without Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2133:   unable to send Group Cpich MultiPath Req Message
Line 2133:   unable to send Group Cpich MultiPath Req Message
Line 2139: MPDB GroupCpichMultipathRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d, Outstanding requests=%d)
Line 2139: MPDB GroupCpichMultipathRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d, Outstanding requests=%d)
Line 2150:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: cellData=NULL
Line 2150:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: cellData=NULL
Line 2160: MPDB - The number of identified group cells is miscalculated
Line 2160: MPDB - The number of identified group cells is miscalculated
Line 2191:   GroupCellSynchroReqMsg == NULL pointer
Line 2191:   GroupCellSynchroReqMsg == NULL pointer
Line 2243: MPDB no multiPathInfo and locked finger found for uarfcn=%d, primaryScrCode=%d
Line 2243: MPDB no multiPathInfo and locked finger found for uarfcn=%d, primaryScrCode=%d
Line 2250:   MPDB UpdateDatabase finds NULL cellData
Line 2250:   MPDB UpdateDatabase finds NULL cellData
Line 2276:   Unable to send GroupCellSynchroReqMsg
Line 2276:   Unable to send GroupCellSynchroReqMsg
Line 2280: MPDB SubmitGroupCellSynchroRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d)
Line 2280: MPDB SubmitGroupCellSynchroRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d)
Line 2291:  The number of nonidentified group cells is miscalculated (Past=%d, Now=%d)
Line 2291:  The number of nonidentified group cells is miscalculated (Past=%d, Now=%d)
Line 2332: uphy_CMultiPathDatabaseUpdatingUtility_CancelTimeoutToken(UARFCN =%d, primaryScrCode=%d)
Line 2332: uphy_CMultiPathDatabaseUpdatingUtility_CancelTimeoutToken(UARFCN =%d, primaryScrCode=%d)
Line 2371: [DR-DSDS] MPDB: MpdbSearcherReqMsg == NULL pointer
Line 2371: [DR-DSDS] MPDB: MpdbSearcherReqMsg == NULL pointer
Line 2376: [DR-DSDS] MPDB: srch req meas type %d
Line 2376: [DR-DSDS] MPDB: srch req meas type %d
Line 2396: [DR-DSDS] MPDB: Searcher is already in use, so use directly
Line 2396: [DR-DSDS] MPDB: Searcher is already in use, so use directly
Line 2401: [DR-DSDS] MPDB: Searcher is in requested state
Line 2401: [DR-DSDS] MPDB: Searcher is in requested state
Line 2420: [DR-DSDS] MPDB: Sending searcher Use Request to DR mngr Interface for meas type %d
Line 2420: [DR-DSDS] MPDB: Sending searcher Use Request to DR mngr Interface for meas type %d
Line 2424: [DR-DSDS] MPDB: Failed to send RF Request from MPDB
Line 2424: [DR-DSDS] MPDB: Failed to send RF Request from MPDB
Line 2436: [DR-DSDS] MPDB: SearcherRelMsg == NULL pointer
Line 2436: [DR-DSDS] MPDB: SearcherRelMsg == NULL pointer
Line 2441: [DR-DSDS] MPDB:  Searcher state not in Use, so no need to send release 
Line 2441: [DR-DSDS] MPDB:  Searcher state not in Use, so no need to send release 
Line 2445: [DR-DSDS] MPDB:  Sending  Searcher Use Rel to DR mngr Interface from MPDB
Line 2445: [DR-DSDS] MPDB:  Sending  Searcher Use Rel to DR mngr Interface from MPDB
Line 2459: [DR-DSDS] MPDB:  Failed to send Searcher Request from MPDB
Line 2459: [DR-DSDS] MPDB:  Failed to send Searcher Request from MPDB
Line 2471: [DR-DSDS] MPDB: Searcher rsp received in abnornal searcher state: %d
Line 2471: [DR-DSDS] MPDB: Searcher rsp received in abnornal searcher state: %d
Line 2486: [DR-DSDS] MPDB:  MPDB Searcher Grant
Line 2486: [DR-DSDS] MPDB:  MPDB Searcher Grant
Line 2503: [DR-DSDS] MPDB: MPDB Searcher Reject
Line 2503: [DR-DSDS] MPDB: MPDB Searcher Reject
Line 2516: [DR-DSDS] MPDB: There are no messages to be processed 
Line 2516: [DR-DSDS] MPDB: There are no messages to be processed 
Line 2522: [DR-DSDS] MPDB: Unexpected DR mngr response
Line 2522: [DR-DSDS] MPDB: Unexpected DR mngr response
Line 2531: [DR-DSDS] MPDB: MPDB Searcher Pause 
Line 2531: [DR-DSDS] MPDB: MPDB Searcher Pause 
Line 2568: [DR-DSDS] MPDB: MPDB Handle Measurements, meastype %d 
Line 2568: [DR-DSDS] MPDB: MPDB Handle Measurements, meastype %d 
Line 2618:  [DR-DSDS] MPDB:  MPDB UpdateDatabase finds NULL cellData
Line 2618:  [DR-DSDS] MPDB:  MPDB UpdateDatabase finds NULL cellData
Line 2623: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO Active Cells
Line 2623: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO Active Cells
Line 2637: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO Identified Active Cells
Line 2637: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO Identified Active Cells
Line 2657: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO NonIdentified Active Cells
Line 2657: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO NonIdentified Active Cells
Line 2670: [DR-DSDS] MPDB: uphy_CMeasurementResources_queueMessage:msgDeadlineListInfo == NULL pointer
Line 2670: [DR-DSDS] MPDB: uphy_CMeasurementResources_queueMessage:msgDeadlineListInfo == NULL pointer
Line 2681: [DR-DSDS] MPDB: uphy_CMultiPathDB_queueMessage: ScrId: %d  Enqueued MsgId: %d to the Head
Line 2681: [DR-DSDS] MPDB: uphy_CMultiPathDB_queueMessage: ScrId: %d  Enqueued MsgId: %d to the Head
Line 2687: [DR-DSDS] MPDB: uphy_CMultiPathDB_queueMessage: Enqueued  ScrId: %d MsgId: %d to the Tail
Line 2687: [DR-DSDS] MPDB: uphy_CMultiPathDB_queueMessage: Enqueued  ScrId: %d MsgId: %d to the Tail
Line 2691: [DR-DSDS] MPDB: uphy_CMultiPathDB_queueMessage: Number of Queued Msgs:  %d meastype %d
Line 2691: [DR-DSDS] MPDB: uphy_CMultiPathDB_queueMessage: Number of Queued Msgs:  %d meastype %d
Line 2722: [DR-DSDS] MPDB: CMultiPathDB: Dequeued ScrId: %d MsgId: %d, meastype %d
Line 2722: [DR-DSDS] MPDB: CMultiPathDB: Dequeued ScrId: %d MsgId: %d, meastype %d
Line 2732: [DR-DSDS] MPDB: CMultiPathDB: Number of Queued Msgs:  %d
Line 2732: [DR-DSDS] MPDB: CMultiPathDB: Number of Queued Msgs:  %d
Line 2760: [DR-DSDS] MPDB: uphy_CMeasurementResources_resetMessageQueue: Flushes queue msg ScrId: %d MsgId: %d
Line 2760: [DR-DSDS] MPDB: uphy_CMeasurementResources_resetMessageQueue: Flushes queue msg ScrId: %d MsgId: %d
Line 2790: [DR-DSDS] MPDB:  No of elements in queue: %d, unqueue for meas type %d
Line 2790: [DR-DSDS] MPDB:  No of elements in queue: %d, unqueue for meas type %d
