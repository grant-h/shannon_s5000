Line 233: theFsm == NULL
Line 305: tphy_CCellSFNServer Instance mem allocation failed
Line 325: Received CellSFNServer message (ECellSfnServerMsgId_XXX) = %d from source = %d
Line 336: Received ECellSfnServerMsgId_Cancel from %d
Line 341: Received ECellSfnServerMsgId_BchConfigCnf from %d
Line 346: Received ECellSfnServerMsgId_BchReleaseCnf from %d
Line 351: Received ECellSfnServerMsgId_BchReleaseCnf from %d
Line 356: tphy_CCellSFNServer_process - unknown msgId
Line 394: CellSFNServer: STATE - Init, Event = 0
Line 405: CellSfnServer: State - Init, UARFCN = %d, midambleIdx = %d, eventId = %d
Line 422: Rl=%d exist but refCellInformation=0
Line 432: Rl=%d exists but refRl==TPHY_MAPPING_DATABASE_VALUE_NOT_FOUND
Line 442: CellSfnServer: isReferenceRlTrackingSfn %d 
Line 455: CellSfnServer: UARFCN =%d, midambleIdx =%d, Begins servicing request at CFN = %d
Line 459: CellSfnServer: RL does not already exist - no ref cell in mpdb
Line 464: CellSfnServer: UARFCN =%d, midambleIdx =%d, Begins servicing request at CFN = %d
Line 468: CellSfnServer:  RL does not already exist - ref cell in mpdb, UARFCN = %d, pScrCode = %d
Line 481: Invalid event Timeout in init state!
Line 501: BchReleaseDone received in Init state!
Line 507: Invalid event! has there been a ReleaseAll ?
Line 513: ETphyCellSFNServerEventId_BchReleaseDone in Init state: Event TransactId=%d SFN TransactId=%d
Line 535: Unknown Event %d in init state
Line 558: tphy_CCellSfnServer_bchConfigurationRequested_processEventFn : event=0
Line 562: Received event %d in state bchConfigurationRequested
Line 574: Timeout in bchConfigurationRequested state
Line 610: ETphyCellSFNServerEventId_BchReleaseDone in BchReleaseRequested state: Event TransactId=%d SFN TransactId=%d
Line 619: Invalid event! Has there been a releaseAll ?
Line 625: ETphyCellSFNServerEventId_BchReleaseDone in bchConfigurationRequested state: Event TransactId=%d SFN TransactId=%d
Line 641: Unknown Event %d in bchConfigurationRequested state
Line 663: tphy_CCellSfnServer_bchConfigDone_processEventFn : event=0
Line 667: Received event %d in state bchConfigDone
Line 683: CellSfnServer [%d %d] - Timeout in bchConfigDone state: this->currentSfnReqMsg->header.TransactId=%d
Line 704: Invalid event! has there been a releaseAll ?
Line 722: ETphyCellSFNServerEventId_BchReleaseDone in bchConfigDone state: Event TransactId=%d SFN TransactId=%d
Line 738: Unknown Event %d in bchConfigDone state
Line 759: tphy_CCellSfnServer_bchReleaseRequested_processEventFn : event=0
Line 763: Received event %d in state bchReleaseRequested
Line 774: Timeout in bchReleaseRequested state
Line 799: Invalid event cctrchInterrupt in BchReleaseRequested State
Line 812: ETphyCellSFNServerEventId_BchReleaseDone in BchReleaseRequested state: Event TransactId=%d SFN TransactId=%d
Line 829: Unknown Event %d in bchReleaseRequested state
Line 845: CellSFNServer: bchConfigurationRequest(), bchReqMsg = NULL
Line 871: tphy_CCellSfnServer_bchConfigurationRequest: unexpected eventId=%d
Line 873: tphy_CCellSfnServer_bchConfigurationRequest: unexpected eventId
Line 888: CellSFNServer: bchConfigurationRequest(), Unable to send BCH Req Msg
Line 964: msgDeadlineListInfo == NULL pointer
Line 980: CellSfnRequest queued: isDeadline %d, Deadline %d 
Line 1003: msg == NULL pointer
Line 1018: Unable to send Bch Release Msg
Line 1080: tphy_CCellSfnServer[%d,%d] GetSfnAndSendReleaseRequest: referenceSfn: %d, referenceCfn: %d, targetSfn %d
Line 1095: Set SMC SFN and CFN: Old SFN %d New SFN %d New CFN %d
Line 1132: CellSfnServer not sending Indication message as releaseAll has been requested
Line 1191: Unexpected msg queued
Line 1193: Unexpected msg queued
Line 1338: CellSfnServer[%d,%d]: Send Negative CNF msg 
Line 1346: message == NULL pointer
Line 1362: Unable to send SFN Nack Msg
Line 1383: message == NULL pointer
Line 1398: Unable to send Bch Release Leaving Rl Msg
Line 1433: tphy_CCellSfnServer_GetSfnIndMsgId - unknown msgId
Line 1484: CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework SFN %d, chipset [radio link %d]
Line 1499: CellSfnServer[%d,%d] Cell Sfn Server accepts good data with sfn %d at framework SFN %d, chipset [radio link %d] sfn %d
Line 1509: CellSfnServer[%d,%d] Cell Sfn Server accepts good data cont- trChinfo->chipOffset %d
Line 1536: msg == NULL pointer
Line 1551: CellSfnServer[%d,%d]SendSfnIndMessage
Line 1560: CellSfn negative ind msg: DestId=%d, TransactId=%d
Line 1567: Unable to send Sfn Ind Msg
Line 1593: cnfMsg == NULL pointer
Line 1608: Unable to send Sfn ReleaseAll Req
Line 1611: Send ReleaseAll Cnf Message
Line 1649: UserPlaneCallback TrCH ID %d SFN %d referenceRlSfn %d crc %d
