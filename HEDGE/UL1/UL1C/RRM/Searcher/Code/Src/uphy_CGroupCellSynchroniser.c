Line 214:  uphy_CGroupCellSynchroniser_free (groupCellSynchroniser_ptr=NULL)
Line 222:  uphy_CSchedulingManager_GetCampingDlUarfcn returns FALSE
Line 222:  uphy_CSchedulingManager_GetCampingDlUarfcn returns FALSE
Line 230: uphy_CGroupCellSynchroniser_free set gapScheduled
Line 230: uphy_CGroupCellSynchroniser_free set gapScheduled
Line 308:  multiPathInfo == NULL pointer
Line 308:  multiPathInfo == NULL pointer
Line 384:  uphy_CGroupCellSynchroniser_CpichMultiPathDoneMessage is NULL
Line 384:  uphy_CGroupCellSynchroniser_CpichMultiPathDoneMessage is NULL
Line 392: CpichDoneCheck pathIndex=%d numOfCpichRequest=%d numOfCpichReport
Line 392: CpichDoneCheck pathIndex=%d numOfCpichRequest=%d numOfCpichReport
Line 419: CpichDoneCheck Cell %d ScrCode=%d maxCpichIndex %d Magnitude=%d FrameOffset=%d
Line 419: CpichDoneCheck Cell %d ScrCode=%d maxCpichIndex %d Magnitude=%d FrameOffset=%d
Line 440: GroupCellSynchroniser: CpichScrCode=%d MATCHES one we are looking for PathIndex %d FrameOffset %d
Line 440: GroupCellSynchroniser: CpichScrCode=%d MATCHES one we are looking for PathIndex %d FrameOffset %d
Line 453:  maxCpichIndex=%d Array Index Out of bound
Line 453:  maxCpichIndex=%d Array Index Out of bound
Line 473: GroupCellSynchroniser %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 473: GroupCellSynchroniser %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 487: uphy_CGroupCellSynchroniser_ProcessCpichDoneCheck set gapScheduled
Line 487: uphy_CGroupCellSynchroniser_ProcessCpichDoneCheck set gapScheduled
Line 557: GroupCellSynchroniser[%d %d]  isTxDivValid=%d, txDivStatus=%d UptodateMpAgeThreshold %d
Line 557: GroupCellSynchroniser[%d %d]  isTxDivValid=%d, txDivStatus=%d UptodateMpAgeThreshold %d
Line 573: GroupCellSynchroniser[%d] %d %d Succeeded: Up to date info found
Line 573: GroupCellSynchroniser[%d] %d %d Succeeded: Up to date info found
Line 581: GroupCellSynchroniser[%d] %d %d: MPDB reads %d paths of Age %d in subState(%d)
Line 581: GroupCellSynchroniser[%d] %d %d: MPDB reads %d paths of Age %d in subState(%d)
Line 596:  GroupCellSynchroniser[%d %d] - oldFrameOffset=%d (age %d)
Line 596:  GroupCellSynchroniser[%d %d] - oldFrameOffset=%d (age %d)
Line 605:  OLD multipath information [%d %d] Not found
Line 605:  OLD multipath information [%d %d] Not found
Line 625:  OldMultiPathInfo found but it's too old. %d[ms]
Line 625:  OldMultiPathInfo found but it's too old. %d[ms]
Line 648:  Multipath information Not found (EUHalCellSetType_NonIdentified_Cpich)
Line 648:  Multipath information Not found (EUHalCellSetType_NonIdentified_Cpich)
Line 661: GroupCellSynchroniser[%d] %d %d: Begins guided search isDeadline=%d deadline=%d
Line 661: GroupCellSynchroniser[%d] %d %d: Begins guided search isDeadline=%d deadline=%d
Line 679: [FA2] GroupCellSynchroniser[%d] %d %d: MPDB reads %d paths of Age %d in subState(%d)
Line 679: [FA2] GroupCellSynchroniser[%d] %d %d: MPDB reads %d paths of Age %d in subState(%d)
Line 694: [FA2] GroupCellSynchroniser[%d %d] - oldFrameOffset=%d (age %d)
Line 694: [FA2] GroupCellSynchroniser[%d %d] - oldFrameOffset=%d (age %d)
Line 702: [FA2] OLD multipath information [%d %d] Not found
Line 702: [FA2] OLD multipath information [%d %d] Not found
Line 724: [FA3] GroupCellSynchroniser[%d] %d %d: MPDB reads %d paths of Age %d in subState(%d)
Line 724: [FA3] GroupCellSynchroniser[%d] %d %d: MPDB reads %d paths of Age %d in subState(%d)
Line 739: [FA3] GroupCellSynchroniser[%d %d] - oldFrameOffset=%d (age %d)
Line 739: [FA3] GroupCellSynchroniser[%d %d] - oldFrameOffset=%d (age %d)
Line 747: [FA3] OLD multipath information [%d %d] Not found
Line 747: [FA3] OLD multipath information [%d %d] Not found
Line 763:  Wrong cellSetType:Uarfcn(%d),Psc(%d): PrimaryId=%d,SubId=%d,OldCellType %d
Line 763:  Wrong cellSetType:Uarfcn(%d),Psc(%d): PrimaryId=%d,SubId=%d,OldCellType %d
Line 771: GroupCellSync Cell %d CellSetType = %d CellSyncType = %d
Line 771: GroupCellSync Cell %d CellSetType = %d CellSyncType = %d
Line 806: Wrong initial Group cell Synch State
Line 806: Wrong initial Group cell Synch State
Line 827:  uphy_CGroupCellSynchroniser_handlePschMeasurement is NULL
Line 827:  uphy_CGroupCellSynchroniser_handlePschMeasurement is NULL
Line 901:  uphy_CGroupCellSynchroniser_processPschMeasurementReport is NULL
Line 901:  uphy_CGroupCellSynchroniser_processPschMeasurementReport is NULL
Line 912: Request Psch[pschAccSlotCnt=%d, postAccLen=%d, RetCode=%d]
Line 912: Request Psch[pschAccSlotCnt=%d, postAccLen=%d, RetCode=%d]
Line 932:  pschReqMessage == NULL pointer
Line 932:  pschReqMessage == NULL pointer
Line 969: Group CellSynchroniser %d: Request Psch: isDeadline=%d, absDeadline=%d
Line 969: Group CellSynchroniser %d: Request Psch: isDeadline=%d, absDeadline=%d
Line 974: GroupCellSynchroniser %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 974: GroupCellSynchroniser %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 987: uphy_CGroupCellSynchroniser_processPschMeasurementReport set gapScheduled
Line 987: uphy_CGroupCellSynchroniser_processPschMeasurementReport set gapScheduled
Line 997:  GroupCellSynchroniser Error: Cant send Psch Req Message
Line 997:  GroupCellSynchroniser Error: Cant send Psch Req Message
Line 1015: GroupCellSynchroniser %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 1015: GroupCellSynchroniser %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 1022: uphy_CGroupCellSynchroniser_processPschMeasurementReport set gapScheduled
Line 1022: uphy_CGroupCellSynchroniser_processPschMeasurementReport set gapScheduled
Line 1047:  uphy_CCellSynchroniser_processPschMeasurementReport: Wrong CellSetType
Line 1047:  uphy_CCellSynchroniser_processPschMeasurementReport: Wrong CellSetType
Line 1065: :	  groupCellSynchroniser Paths: pathNumber=%d pathOffset %d magnitude %d
Line 1065: :	  groupCellSynchroniser Paths: pathNumber=%d pathOffset %d magnitude %d
Line 1092:  Group Cell Synchro %d %d: Failed in State NoInfo - failed psch measurement report
Line 1092:  Group Cell Synchro %d %d: Failed in State NoInfo - failed psch measurement report
Line 1133:  uphy_CGroupCellSynchroniser_processGroupCpichScrCodeMeasurementReport is NULL
Line 1133:  uphy_CGroupCellSynchroniser_processGroupCpichScrCodeMeasurementReport is NULL
Line 1139:  uphy_CGroupCellSynchroniser_processGroupCpichScrCodeMeasurementReport: message is NULL
Line 1139:  uphy_CGroupCellSynchroniser_processGroupCpichScrCodeMeasurementReport: message is NULL
Line 1165:  processGroupCpichScrCodeMeasurementReport [%d]: pathIndex %d outstandingGroupCpichScrCodeReq %d
Line 1165:  processGroupCpichScrCodeMeasurementReport [%d]: pathIndex %d outstandingGroupCpichScrCodeReq %d
Line 1184:  processGroupCpichScrCodeMsmtReport: Wrong CellSetType
Line 1184:  processGroupCpichScrCodeMsmtReport: Wrong CellSetType
Line 1238: GroupCpichScrCode Success Result cpichScrCode[%d] ScrCode %d frameOffset[%d] %d magnitude[%d] %d
Line 1238: GroupCpichScrCode Success Result cpichScrCode[%d] ScrCode %d frameOffset[%d] %d magnitude[%d] %d
Line 1251: GroupCellSynchroniser %d pathIndex %d
Line 1251: GroupCellSynchroniser %d pathIndex %d
Line 1255: GroupCpichScrCode Fail Result PrimaryScrCode[%d]=%d does not have returned CpichScrCode =%d 
Line 1255: GroupCpichScrCode Fail Result PrimaryScrCode[%d]=%d does not have returned CpichScrCode =%d 
Line 1276:  processGroupCpichScrCodeMeasurementReport [%d %d]: UPHY_MESSAGING_RETURN_CODE_FAILURE 
Line 1276:  processGroupCpichScrCodeMeasurementReport [%d %d]: UPHY_MESSAGING_RETURN_CODE_FAILURE 
Line 1284:  GroupCpichScrCodeFail [%d]: pathIndex %d should be less than numOfCpichRequest %d
Line 1284:  GroupCpichScrCodeFail [%d]: pathIndex %d should be less than numOfCpichRequest %d
Line 1329:  uphy_CGroupCellSynchroniser_CpichMultiPathDoneMessage is NULL
Line 1329:  uphy_CGroupCellSynchroniser_CpichMultiPathDoneMessage is NULL
Line 1359: Group CellSynchroniser %d %d: Rx Good Cpich MultiPath Msmt - Succeeded in State NoInfo
Line 1359: Group CellSynchroniser %d %d: Rx Good Cpich MultiPath Msmt - Succeeded in State NoInfo
Line 1370: uphy_CGroupCellSynchroniser_processGroupCpichMultiPathDoneMessage set gapScheduled
Line 1370: uphy_CGroupCellSynchroniser_processGroupCpichMultiPathDoneMessage set gapScheduled
Line 1406: GroupCellSynchroniser %d %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 1406: GroupCellSynchroniser %d %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 1419: uphy_CGroupCellSynchroniser_processGroupCpichMultiPathDoneMessage set gapScheduled
Line 1419: uphy_CGroupCellSynchroniser_processGroupCpichMultiPathDoneMessage set gapScheduled
Line 1423: Group Cpich MultiPath FAILED for U(%d) Psc(%d)
Line 1423: Group Cpich MultiPath FAILED for U(%d) Psc(%d)
Line 1457:  uphy_CGroupCellSynchroniser_CheckCompletionStatus[uarfcn=%d]: RetCode !=UPHY_MESSAGING_RETURN_CODE_SUCCESS
Line 1457:  uphy_CGroupCellSynchroniser_CheckCompletionStatus[uarfcn=%d]: RetCode !=UPHY_MESSAGING_RETURN_CODE_SUCCESS
Line 1478:  When uphy_CMultiPathDatabase_SeekCellMultiPathData [% d %d] does not fail multipathInfo must not be 0
Line 1478:  When uphy_CMultiPathDatabase_SeekCellMultiPathData [% d %d] does not fail multipathInfo must not be 0
Line 1534:  uphy_CGroupCellSynchroniser_Timeout - memory corruption: not Group Cell SynchroniserObject
Line 1534:  uphy_CGroupCellSynchroniser_Timeout - memory corruption: not Group Cell SynchroniserObject
Line 1540: GroupCellSynchroniser %d %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 1540: GroupCellSynchroniser %d %d: uphy_CSchedulingManager_GetCampingDlUarfcn = FALSE
Line 1548:  GroupCellSynchroniser [%d %d]: Timeout in Substate %d CampingUarfcn %d isOfflineUarfcn=%d offlineUarfcn=%d, numOfCells=%d
Line 1548:  GroupCellSynchroniser [%d %d]: Timeout in Substate %d CampingUarfcn %d isOfflineUarfcn=%d offlineUarfcn=%d, numOfCells=%d
Line 1568:  replyMessage == NULL pointer
Line 1568:  replyMessage == NULL pointer
Line 1621:  GroupCellSynchroniser Problem : Unexpected Requestor %d
Line 1621:  GroupCellSynchroniser Problem : Unexpected Requestor %d
Line 1662:  uphy_CGroupCellSynchroniser_CreateTimeoutToken but previous token exists - cancelling existing timeout
Line 1662:  uphy_CGroupCellSynchroniser_CreateTimeoutToken but previous token exists - cancelling existing timeout
Line 1676: GroupCellSynchroniser %d %d: Timeout started, due to expire at=%d run at rsn = %d
Line 1676: GroupCellSynchroniser %d %d: Timeout started, due to expire at=%d run at rsn = %d
Line 1739: GroupCellSynchroniser Error : Unexpected Requestor
Line 1739: GroupCellSynchroniser Error : Unexpected Requestor
Line 1748:  replyMessage == NULL pointer
Line 1748:  replyMessage == NULL pointer
Line 1767: GroupCellSynchroniser %d : sends positive cnf to controller(Id=%d, msg=%d, SubId=%d, TransactId=%d)
Line 1767: GroupCellSynchroniser %d : sends positive cnf to controller(Id=%d, msg=%d, SubId=%d, TransactId=%d)
Line 1774: GroupCellSynchroniser %d : sends negative cnf
Line 1774: GroupCellSynchroniser %d : sends negative cnf
Line 1806:  GroupCellSynchroniser Error: Cant send Ind Message
Line 1806:  GroupCellSynchroniser Error: Cant send Ind Message
Line 1851:  cpichGroupMultiPathReqMessage == NULL pointer
Line 1851:  cpichGroupMultiPathReqMessage == NULL pointer
Line 1886: [FA%d] GroupCpichMultipathRequest [%d] [%d %d] frameOffset=%d absDeadline=%d txDivStatus=%d
Line 1886: [FA%d] GroupCpichMultipathRequest [%d] [%d %d] frameOffset=%d absDeadline=%d txDivStatus=%d
Line 1900: [FA%d] GroupCpichMultipathRequest [%d] [%d %d] frameOffset=%d, absDeadline=%d, txDivStatus=%d
Line 1900: [FA%d] GroupCpichMultipathRequest [%d] [%d %d] frameOffset=%d, absDeadline=%d, txDivStatus=%d
Line 1913:  GroupCellSynchroniser Error: Cant send Cpich GroupMultiPath Req Message
Line 1913:  GroupCellSynchroniser Error: Cant send Cpich GroupMultiPath Req Message
Line 1927: Group CellSynchroniser Request Cpich Multipath Failed isDeadline=%d, absDeadline=%d 
Line 1927: Group CellSynchroniser Request Cpich Multipath Failed isDeadline=%d, absDeadline=%d 
Line 1955:  RF use is paused! Ignore uphy_CGroupCellSynchroniser_SubmitPschRequestSTF
Line 1955:  RF use is paused! Ignore uphy_CGroupCellSynchroniser_SubmitPschRequestSTF
Line 1959: SubmitGroupPschRequestSTF token %d
Line 1959: SubmitGroupPschRequestSTF token %d
Line 2014:  GroupCellSynchroniser[0] %d %d: PschState_Pending SubmitPschRequest  submit token %d  to wait for signal %d value %d
Line 2014:  GroupCellSynchroniser[0] %d %d: PschState_Pending SubmitPschRequest  submit token %d  to wait for signal %d value %d
Line 2030:  GroupCellSynchroniser %d %d no PschSignal
Line 2030:  GroupCellSynchroniser %d %d no PschSignal
Line 2045:  pschReqMessage == NULL pointer
Line 2045:  pschReqMessage == NULL pointer
Line 2078: Group CellSynchroniser Request Psch: uarfcn %d isDeadline=%d, absDeadline=%d
Line 2078: Group CellSynchroniser Request Psch: uarfcn %d isDeadline=%d, absDeadline=%d
Line 2086:  GroupCellSynchroniser Error: Cant send Psch Req Message
Line 2086:  GroupCellSynchroniser Error: Cant send Psch Req Message
Line 2128:  groupCellSynchroniser_ptr==NULL
Line 2128:  groupCellSynchroniser_ptr==NULL
Line 2156:  cpichGroupScrCodeReqMessage==NULL
Line 2156:  cpichGroupScrCodeReqMessage==NULL
Line 2207: GroupCpichScrCodeRequest: pathOffset %d, numOfCells %d, isDeadline=%d, absDeadline=%d
Line 2207: GroupCpichScrCodeRequest: pathOffset %d, numOfCells %d, isDeadline=%d, absDeadline=%d
Line 2226:  GroupCellSynchroniser Error: Cant Send CpichScrCode Req Message
Line 2226:  GroupCellSynchroniser Error: Cant Send CpichScrCode Req Message
Line 2269: GroupCpichScrCodeRequest: pathOffset %d, numOfCells %d, isDeadline=%d, absDeadline=%d
Line 2269: GroupCpichScrCodeRequest: pathOffset %d, numOfCells %d, isDeadline=%d, absDeadline=%d
Line 2288:  GroupCellSynchroniser Error: Cant Send CpichScrCode Req Message
Line 2288:  GroupCellSynchroniser Error: Cant Send CpichScrCode Req Message
Line 2316:  txDivCpichGroupScrCodeReqMessage == NULL pointer
Line 2316:  txDivCpichGroupScrCodeReqMessage == NULL pointer
Line 2369: txDivCpichGroupScrCodeReqMessage: pathOffset %d, numOfCells %d, isDeadline=%d, absDeadline=%d
Line 2369: txDivCpichGroupScrCodeReqMessage: pathOffset %d, numOfCells %d, isDeadline=%d, absDeadline=%d
Line 2388:  GroupCellSynchroniser Error: Cant Send CpichScrCode Req Message
Line 2388:  GroupCellSynchroniser Error: Cant Send CpichScrCode Req Message
