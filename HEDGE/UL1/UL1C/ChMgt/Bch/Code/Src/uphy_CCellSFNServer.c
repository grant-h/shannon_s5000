Line 388: messageListArray[i]=0
Line 388: messageListArray[i]=0
Line 442: Instance created for stackId %d
Line 442: Instance created for stackId %d
Line 479: Received ECellSfnServerMsgId_SfnRequest from %d
Line 479: Received ECellSfnServerMsgId_SfnRequest from %d
Line 486: S0  FSM should be idle before FACH CFG (source ID %d). Reset CellSfnServer FSM
Line 486: S0  FSM should be idle before FACH CFG (source ID %d). Reset CellSfnServer FSM
Line 495: Received ECellSfnServerMsgId_SfnForMsmtRequest from %d
Line 495: Received ECellSfnServerMsgId_SfnForMsmtRequest from %d
Line 499: Received ECellSfnServerMsgId_Cancel from %d
Line 499: Received ECellSfnServerMsgId_Cancel from %d
Line 503: Received ECellSfnServerMsgId_BchConfigCnf from %d
Line 503: Received ECellSfnServerMsgId_BchConfigCnf from %d
Line 507: Received ECellSfnServerMsgId_BchReleaseCnf from %d
Line 507: Received ECellSfnServerMsgId_BchReleaseCnf from %d
Line 511: Received ECellSfnServerMsgId_ReleaseAll from %d
Line 511: Received ECellSfnServerMsgId_ReleaseAll from %d
Line 516: S0  Reset CellSfnServer FSM.
Line 516: S0  Reset CellSfnServer FSM.
Line 523: Received EUphyCellSFNServerEventId_SfnReadCompleteorBchReleased from %d
Line 523: Received EUphyCellSFNServerEventId_SfnReadCompleteorBchReleased from %d
Line 528: process - unknown msgId
Line 528: process - unknown msgId
Line 591: S0  uphy_CCellSfnServer_init_processEventFn : event=0
Line 591: S0  uphy_CCellSfnServer_init_processEventFn : event=0
Line 609: CellSfnServer[%d,%d] init processEventFn: eventId %d isDeadline %d absDeadline %d boundaryRsn %d
Line 609: CellSfnServer[%d,%d] init processEventFn: eventId %d isDeadline %d absDeadline %d boundaryRsn %d
Line 634: S0  Rl=%d exist but refCellInformation=0
Line 634: S0  Rl=%d exist but refCellInformation=0
Line 644: S0  Rl=%d exists but refRl==UPHY_MAPPING_DATABASE_VALUE_NOT_FOUND
Line 644: S0  Rl=%d exists but refRl==UPHY_MAPPING_DATABASE_VALUE_NOT_FOUND
Line 662: CellSfnServer[%d,%d] begins servicing request at CFN=%d Rl %d already exists . Mpdb thinks ref RL pScr Code %d which is using Rl %d phychStr %d
Line 662: CellSfnServer[%d,%d] begins servicing request at CFN=%d Rl %d already exists . Mpdb thinks ref RL pScr Code %d which is using Rl %d phychStr %d
Line 673: CellSfnServer: isReferenceRlTrackingSfn %d 
Line 673: CellSfnServer: isReferenceRlTrackingSfn %d 
Line 718: CellSfnServer: No SFN tracking for this RL : Sent Release to BCH controller to Release URRC BCH config 
Line 718: CellSfnServer: No SFN tracking for this RL : Sent Release to BCH controller to Release URRC BCH config 
Line 730: CellSfnServer: CellSFNRequest skipped due to no mapped RL at RACH controller  
Line 730: CellSfnServer: CellSFNRequest skipped due to no mapped RL at RACH controller  
Line 737: CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - no ref cell in mpdb
Line 737: CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - no ref cell in mpdb
Line 746: CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - ref cell in mpdb uarfcn %d pSrcCode %d
Line 746: CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - ref cell in mpdb uarfcn %d pSrcCode %d
Line 759: CellSfnServer: RlMapping not found : Sent Release to BCH controller to Release URRC BCH config 
Line 759: CellSfnServer: RlMapping not found : Sent Release to BCH controller to Release URRC BCH config 
Line 781: S0  Rl=%d exist but refCellInformation=0
Line 781: S0  Rl=%d exist but refCellInformation=0
Line 817: S0 CellSfnServer[%d,%d] begins servicing request at CFN=%d Rl %d already exists . Mpdb thinks activeSet RL pScr Code %d which is using isActiveRl %d phychStr %d
Line 817: S0 CellSfnServer[%d,%d] begins servicing request at CFN=%d Rl %d already exists . Mpdb thinks activeSet RL pScr Code %d which is using isActiveRl %d phychStr %d
Line 834: S0 CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - no ref cell in mpdb
Line 834: S0 CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - no ref cell in mpdb
Line 843: S0 CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - ref cell in mpdb uarfcn %d pSrcCode %d
Line 843: S0 CellSfnServer[%d,%d] begins servicing request at CFN %d Rl doesnt already exist - ref cell in mpdb uarfcn %d pSrcCode %d
Line 859: S0  Invalid event Timeout in init state!
Line 859: S0  Invalid event Timeout in init state!
Line 875: S0  BchReleaseDone received in Init state!
Line 875: S0  BchReleaseDone received in Init state!
Line 881: S0  Invalid event! has there been a ReleaseAll ?
Line 881: S0  Invalid event! has there been a ReleaseAll ?
Line 891: S0  EUphyCellSFNServerEventId_BchReleaseDone in Init state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchReleaseRequestTransactId=%d
Line 891: S0  EUphyCellSFNServerEventId_BchReleaseDone in Init state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchReleaseRequestTransactId=%d
Line 924: S0  Invalid event! 
Line 924: S0  Invalid event! 
Line 934: S0  Unknown Event %d in init state
Line 934: S0  Unknown Event %d in init state
Line 959: S0  uphy_CCellSfnServer_bchConfigurationRequested_processEventFn : event=0
Line 959: S0  uphy_CCellSfnServer_bchConfigurationRequested_processEventFn : event=0
Line 963: S0 Received event %d in state bchConfigurationRequested
Line 963: S0 Received event %d in state bchConfigurationRequested
Line 976: S0  Timeout in bchConfigurationRequested state
Line 976: S0  Timeout in bchConfigurationRequested state
Line 1015: S0  EUphyCellSFNServerEventId_BchReleaseDone in BchReleaseRequested state 								- must be BCHConfigCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchConfigRequestTransactId=%d
Line 1015: S0  EUphyCellSFNServerEventId_BchReleaseDone in BchReleaseRequested state 								- must be BCHConfigCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchConfigRequestTransactId=%d
Line 1025: S0  Invalid event! Has there been a releaseAll ?
Line 1025: S0  Invalid event! Has there been a releaseAll ?
Line 1034: S0  EUphyCellSFNServerEventId_BchReleaseDone in bchConfigurationRequested state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchReleaseRequestTransactId=%d
Line 1034: S0  EUphyCellSFNServerEventId_BchReleaseDone in bchConfigurationRequested state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchReleaseRequestTransactId=%d
Line 1050: S0  Invalid event! 
Line 1050: S0  Invalid event! 
Line 1056: S0  Unknown Event %d in bchConfigurationRequested state
Line 1056: S0  Unknown Event %d in bchConfigurationRequested state
Line 1082: S0  uphy_CCellSfnServer_bchConfigDone_processEventFn : event=0
Line 1082: S0  uphy_CCellSfnServer_bchConfigDone_processEventFn : event=0
Line 1086: S0 Received event %d in state bchConfigDone
Line 1086: S0 Received event %d in state bchConfigDone
Line 1112: S0  CellSfnServer [%d %d] - Timeout in bchConfigDone state: cellSFNServer_ptr->currentSfnReqMsg->header.TransactId=%d
Line 1112: S0  CellSfnServer [%d %d] - Timeout in bchConfigDone state: cellSFNServer_ptr->currentSfnReqMsg->header.TransactId=%d
Line 1133: S0  Invalid event! has there been a releaseAll ?
Line 1133: S0  Invalid event! has there been a releaseAll ?
Line 1154: S0  EUphyCellSFNServerEventId_BchReleaseDone in bchConfigDone state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d bchReleaseRequestTransactId=%d
Line 1154: S0  EUphyCellSFNServerEventId_BchReleaseDone in bchConfigDone state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d bchReleaseRequestTransactId=%d
Line 1170: S0  Invalid event! 
Line 1170: S0  Invalid event! 
Line 1176: S0  Unknown Event %d in bchConfigDone state
Line 1176: S0  Unknown Event %d in bchConfigDone state
Line 1201: S0  uphy_CCellSfnServer_bchReleaseRequested_processEventFn : event=0
Line 1201: S0  uphy_CCellSfnServer_bchReleaseRequested_processEventFn : event=0
Line 1205: S0 Received event %d in state bchReleaseRequested
Line 1205: S0 Received event %d in state bchReleaseRequested
Line 1217: S0  Timeout in bchReleaseRequested state
Line 1217: S0  Timeout in bchReleaseRequested state
Line 1242: S0  Invalid event cctrchInterrupt in BchReleaseRequested State
Line 1242: S0  Invalid event cctrchInterrupt in BchReleaseRequested State
Line 1258: S0  EUphyCellSFNServerEventId_BchReleaseDone in BchReleaseRequested state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchReleaseRequestTransactId=%d
Line 1258: S0  EUphyCellSFNServerEventId_BchReleaseDone in BchReleaseRequested state 								- must be BCHReleaseCnf of the previous message - timeout happened for previous configuration in BCHConfigurationRequested state - just swallow it 								: transactionId=%d cellSFNServer_ptr->bchReleaseRequestTransactId=%d
Line 1275: S0  Invalid event! 
Line 1275: S0  Invalid event! 
Line 1281: S0  Unknown Event %d in bchReleaseRequested state
Line 1281: S0  Unknown Event %d in bchReleaseRequested state
Line 1307: S0  uphy_CCellSfnServer_wait_processEventFn : event=0
Line 1307: S0  uphy_CCellSfnServer_wait_processEventFn : event=0
Line 1311: S0 Received event %d in state Wait
Line 1311: S0 Received event %d in state Wait
Line 1324: S0  Timeout event! %d in wait state
Line 1324: S0  Timeout event! %d in wait state
Line 1337: S0  Invalid event! %d in wait state
Line 1337: S0  Invalid event! %d in wait state
Line 1345: S0  Invalid event! 
Line 1345: S0  Invalid event! 
Line 1351: S0  Invalid event! %d in wait state
Line 1351: S0  Invalid event! %d in wait state
Line 1373: S0  Unknown Event %d in bchConfigurationRequested state
Line 1373: S0  Unknown Event %d in bchConfigurationRequested state
Line 1396: S0  uphy_CCellSfnServer_bchConfigurationRequest: bchReqMsg==NULL 
Line 1396: S0  uphy_CCellSfnServer_bchConfigurationRequest: bchReqMsg==NULL 
Line 1425: S0  uphy_CCellSfnServer_bchConfigurationRequest: unexpected eventId=%d
Line 1425: S0  uphy_CCellSfnServer_bchConfigurationRequest: unexpected eventId=%d
Line 1443: S0  Unable to send Bch Req Msg
Line 1443: S0  Unable to send Bch Req Msg
Line 1454: S0 Set HHO mode as %d
Line 1454: S0 Set HHO mode as %d
Line 1482: S0  UE did not camp to any frequency - ?DCH released
Line 1482: S0  UE did not camp to any frequency - ?DCH released
Line 1490: S0  cannot found psc for rl %d
Line 1490: S0  cannot found psc for rl %d
Line 1511: S0  txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 1511: S0  txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 1527: S0  FingerInfoCmd failed
Line 1527: S0  FingerInfoCmd failed
Line 1544: S0  Invalid finger position (-) is read
Line 1544: S0  Invalid finger position (-) is read
Line 1561: S0  no multipath information [%d %d]
Line 1561: S0  no multipath information [%d %d]
Line 1568: S0  no cell information [%d %d]
Line 1568: S0  no cell information [%d %d]
Line 1601: S0  [TM ADJ] Boundary condition 4: targetChipCnt=%d chs_tm_chip=%d chCfn=%d
Line 1601: S0  [TM ADJ] Boundary condition 4: targetChipCnt=%d chs_tm_chip=%d chCfn=%d
Line 1628: S0 CFN-SFN DIFF(%d):chs_tm_chip(%d) txTiming(%d) targetCpichChips(%d) cfn(%d)	targetSfn(%d) targetchipCnt(%d)
Line 1628: S0 CFN-SFN DIFF(%d):chs_tm_chip(%d) txTiming(%d) targetCpichChips(%d) cfn(%d)	targetSfn(%d) targetchipCnt(%d)
Line 1652: S0 [OFF Adjust] OFF(before %d, after %d), tm %d, phyChOffset %d
Line 1652: S0 [OFF Adjust] OFF(before %d, after %d), tm %d, phyChOffset %d
Line 1677: S0  cannot find off for [%d %d]
Line 1677: S0  cannot find off for [%d %d]
Line 1686: S0  cannot find old off for [%d %d]
Line 1686: S0  cannot find old off for [%d %d]
Line 1705: S0 CFN-SFN DIFF(%d): off(%d)
Line 1705: S0 CFN-SFN DIFF(%d): off(%d)
Line 1710: S0  NO dedicated mode config msg !!!
Line 1710: S0  NO dedicated mode config msg !!!
Line 1735: S0 CellSfnServer isReqMsgForMsmt %d setCfnInFramework %d
Line 1735: S0 CellSfnServer isReqMsgForMsmt %d setCfnInFramework %d
Line 1784: S0  txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 1784: S0  txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 1821: S0  FingerInfoCmd failed
Line 1821: S0  FingerInfoCmd failed
Line 1838: S0  Invalid finger position (-) is read
Line 1838: S0  Invalid finger position (-) is read
Line 1855: S0  no multipath information [%d %d]
Line 1855: S0  no multipath information [%d %d]
Line 1862: S0  no cell information [%d %d]
Line 1862: S0  no cell information [%d %d]
Line 1881: S0 CFN-SFN DIFF: tm(%d)
Line 1881: S0 CFN-SFN DIFF: tm(%d)
Line 1898: S0 CFN-SFN DIFF(%d):chs_tm_chip(%d) txTiming(%d) targetCpichChips(%d) cfn(%d)  targetSfn(%d) targetchipCnt(%d)
Line 1898: S0 CFN-SFN DIFF(%d):chs_tm_chip(%d) txTiming(%d) targetCpichChips(%d) cfn(%d)  targetSfn(%d) targetchipCnt(%d)
Line 1920: S0  txTimingCommand exec failed in uphy_CCellSfnServer_GetSfnOfReferenceRlTrackingSfnSendAckAndDeleteCfgMsg
Line 1920: S0  txTimingCommand exec failed in uphy_CCellSfnServer_GetSfnOfReferenceRlTrackingSfnSendAckAndDeleteCfgMsg
Line 1948: S0 CellSfnServer[%d,%d] GetSfnOfReferenceRlTrackingSfnSendAckAndDeleteCfgMsg: Framework sfn %d cfn %d slot %d, Chipset [radio link 0] sfn %d slot %d
Line 1948: S0 CellSfnServer[%d,%d] GetSfnOfReferenceRlTrackingSfnSendAckAndDeleteCfgMsg: Framework sfn %d cfn %d slot %d, Chipset [radio link 0] sfn %d slot %d
Line 1961: S0 CellSfnServer[%d,%d] GetSfnOfReferenceRlTrackingSfnSendAckAndDeleteCfgMsg
Line 1961: S0 CellSfnServer[%d,%d] GetSfnOfReferenceRlTrackingSfnSendAckAndDeleteCfgMsg
Line 2037: S0  bchResources is Null
Line 2037: S0  bchResources is Null
Line 2064: S0  msgDeadlineListInfo == NULL pointer
Line 2064: S0  msgDeadlineListInfo == NULL pointer
Line 2107: S0  msg == NULL pointer
Line 2107: S0  msg == NULL pointer
Line 2124: S0  Unable to send Bch Release Msg
Line 2124: S0  Unable to send Bch Release Msg
Line 2153: S0  Removing queued msg for transceiver id=%d
Line 2153: S0  Removing queued msg for transceiver id=%d
Line 2298: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] MultipathInfo=0
Line 2298: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] MultipathInfo=0
Line 2323: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] No multipath Info
Line 2323: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] No multipath Info
Line 2341: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Reference Cell [%d %d] No multipath Info
Line 2341: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Reference Cell [%d %d] No multipath Info
Line 2378: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] MultipathInfo=0
Line 2378: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] MultipathInfo=0
Line 2403: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] No multipath Info
Line 2403: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] No multipath Info
Line 2425: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: RefCell not found
Line 2425: S0 uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: RefCell not found
Line 2456: S0 CellSfnServer[%d,%d]: Allowed for possibility of reference cell sfn changing by time CellSfn server processes data- sfnChange=%d, quaterChipsTOff %d, quaterChipsIntoFrame %d, sfn=%d
Line 2456: S0 CellSfnServer[%d,%d]: Allowed for possibility of reference cell sfn changing by time CellSfn server processes data- sfnChange=%d, quaterChipsTOff %d, quaterChipsIntoFrame %d, sfn=%d
Line 2466: S0 CellSfnServer[%d,%d]: Allowed for possibility of reference cell sfn changing by time CellSfn server processes data cont- chipsetSfn %d, trChInfo->sfn %d, boundaryFrameworkSfn %d, boundaryFrameworkCfn %d
Line 2466: S0 CellSfnServer[%d,%d]: Allowed for possibility of reference cell sfn changing by time CellSfn server processes data cont- chipsetSfn %d, trChInfo->sfn %d, boundaryFrameworkSfn %d, boundaryFrameworkCfn %d
Line 2497: S0 CellSfnServer[%d,%d] sets up framework Sfn and Cfn: OldSfn %d New Sfn %d NewCfn %d
Line 2497: S0 CellSfnServer[%d,%d] sets up framework Sfn and Cfn: OldSfn %d New Sfn %d NewCfn %d
Line 2509: S0 CellSfnServer[%d,%d] updates framework Sfn: OldSfn %d New Sfn %d
Line 2509: S0 CellSfnServer[%d,%d] updates framework Sfn: OldSfn %d New Sfn %d
Line 2524: S0 uphy_CCellSfnServer[%d,%d] GetSfnAndSendReleaseRequest: isReqMsgForMsmt=FALSE: referenceSfn: %d, referenceCfn: %d, targetSfn %d
Line 2524: S0 uphy_CCellSfnServer[%d,%d] GetSfnAndSendReleaseRequest: isReqMsgForMsmt=FALSE: referenceSfn: %d, referenceCfn: %d, targetSfn %d
Line 2573: S0  FingerInfoCmd failed
Line 2573: S0  FingerInfoCmd failed
Line 2590: S0  Invalid finger position (-) is read
Line 2590: S0  Invalid finger position (-) is read
Line 2608: uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] MultipathInfo=0
Line 2608: uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d] MultipathInfo=0
Line 2616: S0  uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d]: No multipath Info
Line 2616: S0  uphy_CCellSfnServer_GetSfnAndSendReleaseRequest: Target Cell [%d %d]: No multipath Info
Line 2636: S0  txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 2636: S0  txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 2660: S0  FingerInfoCmd failed
Line 2660: S0  FingerInfoCmd failed
Line 2673: S0  CFN-SFN DIFF rxTxTimeDiffChips %d, dpchFrameOffsetChips %d, referenceRlDpchPosition %d
Line 2673: S0  CFN-SFN DIFF rxTxTimeDiffChips %d, dpchFrameOffsetChips %d, referenceRlDpchPosition %d
Line 2690: S0 rlNr %d hwSfn %d sfn(trChinfo) %d
Line 2690: S0 rlNr %d hwSfn %d sfn(trChinfo) %d
Line 2705: S0  [TM ADJ] Boundary condition 4 : targetChipCnt=%d chs_tm_chip=%d cfn=%d
Line 2705: S0  [TM ADJ] Boundary condition 4 : targetChipCnt=%d chs_tm_chip=%d cfn=%d
Line 2715: S0 CFN-SFN DIFF(%d):chs_tm_chip(%d) txTiming(%d) targetCpichChips(%d) cfn(%d)  targetSfn(%d) targetchipCnt(%d)
Line 2715: S0 CFN-SFN DIFF(%d):chs_tm_chip(%d) txTiming(%d) targetCpichChips(%d) cfn(%d)  targetSfn(%d) targetchipCnt(%d)
Line 2751: S0 SFN-SFN DIFF:targetSfn(%d), referenceSfn(%d), chipsTOff(%d), tm(%d), targetChipCnt(%d), referenceCpichChips(%d), targetCpichChips(%d)
Line 2751: S0 SFN-SFN DIFF:targetSfn(%d), referenceSfn(%d), chipsTOff(%d), tm(%d), targetChipCnt(%d), referenceCpichChips(%d), targetCpichChips(%d)
Line 2796: S0 uphy_CCellSfnServer [%d %d] getSfnAndSendReleaseRequest FACH: for Msmt - refCellInfo->multiPathInfo=0
Line 2796: S0 uphy_CCellSfnServer [%d %d] getSfnAndSendReleaseRequest FACH: for Msmt - refCellInfo->multiPathInfo=0
Line 2805: S0 uphy_CCellSfnServer [%d %d] getSfnAndSendReleaseRequest FACH: for Msmt - refCellInfo=0
Line 2805: S0 uphy_CCellSfnServer [%d %d] getSfnAndSendReleaseRequest FACH: for Msmt - refCellInfo=0
Line 2814: S0 CellSfnServer[%d,%d] GetSfnAndSendReleaseRequest isReqMsgForMsmt=TRUE, DPCH or SCCPCH meanwhile released
Line 2814: S0 CellSfnServer[%d,%d] GetSfnAndSendReleaseRequest isReqMsgForMsmt=TRUE, DPCH or SCCPCH meanwhile released
Line 2911: countCSFNHigh refSfn %d refCfn %d valid %d countC %d countCCfn %d
Line 2911: countCSFNHigh refSfn %d refCfn %d valid %d countC %d countCCfn %d
Line 2944: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustemnt: targetCpichChips-referenceCpichChips<=UMTS_HALF_FRAME_CHIPS : cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 2944: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustemnt: targetCpichChips-referenceCpichChips<=UMTS_HALF_FRAME_CHIPS : cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 2959: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - ADJUSTMENT: targetCpichChips-referenceCpichChips>UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 2959: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - ADJUSTMENT: targetCpichChips-referenceCpichChips>UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 2971: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustemnt: targetCpichChips-referenceCpichChips>UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 2971: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustemnt: targetCpichChips-referenceCpichChips>UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 2987: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustement: referenceCpichChips-targetCpichChips>=UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 2987: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustement: referenceCpichChips-targetCpichChips>=UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3002: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - ADJUSTMENT: referenceCpichChips-targetCpichChips<UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3002: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - ADJUSTMENT: referenceCpichChips-targetCpichChips<UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3014: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustemnt: referenceCpichChips-targetCpichChips<UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3014: S0 CellSfnServer[%d,%d] isTimeStampAdjustment - no adjustemnt: referenceCpichChips-targetCpichChips<UMTS_HALF_FRAME_CHIPS: cfnOrSfn %d, slot %d referenceCpichChips %d targetCpichChips %d
Line 3090: S0  Release Rl - uhal_Cmd_exec
Line 3090: S0  Release Rl - uhal_Cmd_exec
Line 3101: S0  Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 3101: S0  Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 3105: S0  Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 3105: S0  Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 3111: S0  Unable to locate Rl
Line 3111: S0  Unable to locate Rl
Line 3141: S0 CellSfnServer not sending Indication message as releaseAll has been requested
Line 3141: S0 CellSfnServer not sending Indication message as releaseAll has been requested
Line 3235: S0  Unexpected msg queued
Line 3235: S0  Unexpected msg queued
Line 3257: S0  BCH Release received from URRC, cancel restoring BCH : storedBchReleasePendToken 0x%x
Line 3257: S0  BCH Release received from URRC, cancel restoring BCH : storedBchReleasePendToken 0x%x
Line 3301: S0  uphy_CCellSfnServer_sfnReadWait_Entry
Line 3301: S0  uphy_CCellSfnServer_sfnReadWait_Entry
Line 3430: S0  uphy_CCellSfnServer_sfnReadWait_Exit
Line 3430: S0  uphy_CCellSfnServer_sfnReadWait_Exit
Line 3497: S0 CellSfnServer[%d,%d]: Send Negative CNF msg 
Line 3497: S0 CellSfnServer[%d,%d]: Send Negative CNF msg 
Line 3518: S0  activationTimeTokenPtr is not NULL
Line 3526: S0  message == NULL pointer
Line 3526: S0  message == NULL pointer
Line 3546: S0  Unable to send SFN Nack Msg
Line 3546: S0  Unable to send SFN Nack Msg
Line 3568: S0  message == NULL pointer
Line 3568: S0  message == NULL pointer
Line 3584: S0  Unable to send Bch Release Leaving Rl Msg
Line 3584: S0  Unable to send Bch Release Leaving Rl Msg
Line 3623: S0 Unknown SFN Requester
Line 3687: S0  Rl Info rlNr=%d- uhal cmd exec
Line 3687: S0  Rl Info rlNr=%d- uhal cmd exec
Line 3712: S0 CellSfnServer[%d,%d] Cell Sfn Server receives data for rl=%d when REFERENCE RL DOES NOT EXIST: framework CFN %d, trChinfo->cfn=%d
Line 3712: S0 CellSfnServer[%d,%d] Cell Sfn Server receives data for rl=%d when REFERENCE RL DOES NOT EXIST: framework CFN %d, trChinfo->cfn=%d
Line 3733: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework SFN %d, chipset [radio link %d] refRlChipsetSfn %d refRlChipsetSlot %d  - chipsetRefRl=%d
Line 3733: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework SFN %d, chipset [radio link %d] refRlChipsetSfn %d refRlChipsetSlot %d  - chipsetRefRl=%d
Line 3746: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework SFN %d, chipset [radio link %d]
Line 3746: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework SFN %d, chipset [radio link %d]
Line 3759: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework CFN %d, rl=%d refRl=%d trChinfo->cfn=%d
Line 3759: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework CFN %d, rl=%d refRl=%d trChinfo->cfn=%d
Line 3772: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework CFN %d, rl=%d trChinfo->cfn=%d
Line 3772: S0 CellSfnServer[%d,%d] Cell Sfn Server rejects dud data at framework CFN %d, rl=%d trChinfo->cfn=%d
Line 3792: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data with sfn %d at framework SFN %d, chipset [radio link %d] sfn %d
Line 3792: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data with sfn %d at framework SFN %d, chipset [radio link %d] sfn %d
Line 3804: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data cont- refRlChipsetSfn %d refRlChipsetSlot %d refRl=%d trChinfo->chipOffset %d
Line 3804: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data cont- refRlChipsetSfn %d refRlChipsetSlot %d refRl=%d trChinfo->chipOffset %d
Line 3816: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data cont- trChinfo->chipOffset %d
Line 3816: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data cont- trChinfo->chipOffset %d
Line 3826: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data with sfn %d at framework CFN %d, radio link %d trChinfo->cfn %d
Line 3826: S0 CellSfnServer[%d,%d] Cell Sfn Server accepts good data with sfn %d at framework CFN %d, radio link %d trChinfo->cfn %d
Line 3870: S0  msg == NULL pointer
Line 3870: S0  msg == NULL pointer
Line 3896: S0  activationTimeTokenPtr is not NULL
Line 3909: S0 CellSfnServer[%d,%d]SendSfnIndMessage isReqMsgForMsmt=FALSE: targetSfn %d refSfn %d refCfn %d
Line 3909: S0 CellSfnServer[%d,%d]SendSfnIndMessage isReqMsgForMsmt=FALSE: targetSfn %d refSfn %d refCfn %d
Line 3946: S0 CellSfnServer[%d,%d] SendSfnIndMessage isReqMsgForMsmt=TRUE, CELL_DCH: isReferenceCell=%d  targetSfn %d targetCpichChips %d
Line 3946: S0 CellSfnServer[%d,%d] SendSfnIndMessage isReqMsgForMsmt=TRUE, CELL_DCH: isReferenceCell=%d  targetSfn %d targetCpichChips %d
Line 3955: :S0     cfn %d txTimingChips %d rxTxTimeDiffChips %d dpchFrameOffsetChips %d referenceSfn %d
Line 3955: :S0     cfn %d txTimingChips %d rxTxTimeDiffChips %d dpchFrameOffsetChips %d referenceSfn %d
Line 3973: S0 CellSfnServer[uarfcn=%d,primaryScrCode=%d] GetSfnAndSendReleaseRequest isReqMsgForMsmt=TRUE, CELL_DCH: isReferenceCell=%d targetSfn %d targetCpichChips %d referenceSfn: %d, refCpichChips %d
Line 3973: S0 CellSfnServer[uarfcn=%d,primaryScrCode=%d] GetSfnAndSendReleaseRequest isReqMsgForMsmt=TRUE, CELL_DCH: isReferenceCell=%d targetSfn %d targetCpichChips %d referenceSfn: %d, refCpichChips %d
Line 3995: S0  CellSfn negative ind msg: DestId=%d, TransactId=%d
Line 3995: S0  CellSfn negative ind msg: DestId=%d, TransactId=%d
Line 4001: S0  Unable to send Sfn Ind Msg
Line 4001: S0  Unable to send Sfn Ind Msg
Line 4034: S0  cnfMsg == NULL pointer
Line 4034: S0  cnfMsg == NULL pointer
Line 4049: S0  Unable to send Sfn ReleaseAll Req
Line 4049: S0  Unable to send Sfn ReleaseAll Req
Line 4051: S0 Send ReleaseAll Cnf Message
Line 4051: S0 Send ReleaseAll Cnf Message
Line 4055: Do noting
Line 4055: Do noting
Line 4061: S0 Request Resubmit advanceCellSynchroRequests
Line 4061: S0 Request Resubmit advanceCellSynchroRequests
Line 4100: S0 UserPlaneCallback TrCH ID %d SFN %d referenceRlSfn %d crc %d
Line 4100: S0 UserPlaneCallback TrCH ID %d SFN %d referenceRlSfn %d crc %d
Line 4128: S0 SfnUpdateCallback TrCH ID %d SFN %d referenceRlSfn %d crc %d
Line 4128: S0 SfnUpdateCallback TrCH ID %d SFN %d referenceRlSfn %d crc %d
Line 4294: S0  CellSFNServer cant Request Bch Release for controller %d bchid %d
Line 4294: S0  CellSFNServer cant Request Bch Release for controller %d bchid %d
Line 4305: S0  cellSFNServer bchRelease msg is NULL
Line 4305: S0  cellSFNServer bchRelease msg is NULL
