Line 501: init_processEventFn: event=0
Line 501: init_processEventFn: event=0
Line 509: init_processEventFn: transceiverId is %d, myIndex is %d
Line 509: init_processEventFn: transceiverId is %d, myIndex is %d
Line 515: [BCH for RefCell]: init_processEventFn: EUphyResourcesConfigurationEventId_Config received
Line 515: [BCH for RefCell]: init_processEventFn: EUphyResourcesConfigurationEventId_Config received
Line 522: DSDS: Event config received from controller %d 
Line 522: DSDS: Event config received from controller %d 
Line 573: received Rf use response event from controller= %d with grant/reject= %d
Line 573: received Rf use response event from controller= %d with grant/reject= %d
Line 580: Grant response from DSLRC message interface
Line 580: Grant response from DSLRC message interface
Line 595: Start MPDB update,Grant is received for transceiver %d
Line 595: Start MPDB update,Grant is received for transceiver %d
Line 599: MPDB update not started as BPLMN is ongoing.
Line 599: MPDB update not started as BPLMN is ongoing.
Line 634: Fach Retry timestamp=%d 
Line 634: Fach Retry timestamp=%d 
Line 638: resourcesConfigurationController_ptr->RfReqRetry= %d Max Retry %d  retryPeriod=%d timeSlotsToWait=%d rfRetryTimestamp=%d 
Line 638: resourcesConfigurationController_ptr->RfReqRetry= %d Max Retry %d  retryPeriod=%d timeSlotsToWait=%d rfRetryTimestamp=%d 
Line 669: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in init 
Line 669: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in init 
Line 685: Unexpected Pause request received in Init state(may be due to race condition btw release and pause) 
Line 685: Unexpected Pause request received in Init state(may be due to race condition btw release and pause) 
Line 690: RfPauseEnabled %d isrfrequested %d
Line 690: RfPauseEnabled %d isrfrequested %d
Line 699: DSDS: Reconfiguration requested from controller
Line 699: DSDS: Reconfiguration requested from controller
Line 755: Some channel configured at campingDlUarfcn=%d but new channel at another uarfcn=%d				- explicit release off all channels at the previous uarfcn must take place first
Line 755: Some channel configured at campingDlUarfcn=%d but new channel at another uarfcn=%d				- explicit release off all channels at the previous uarfcn must take place first
Line 810: ECF: requestDlUarfcnAccess function called and FSM set to DlUarfcnAccessRequested 
Line 810: ECF: requestDlUarfcnAccess function called and FSM set to DlUarfcnAccessRequested 
Line 826: 2nd Carrier: init_processEventFn, Primary carrier not configured, thus secondary carrier will not be configured.
Line 826: 2nd Carrier: init_processEventFn, Primary carrier not configured, thus secondary carrier will not be configured.
Line 837: [DC/3C-HSDPA] (init_processEventFn)  primary carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d
Line 837: [DC/3C-HSDPA] (init_processEventFn)  primary carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d
Line 845: [3C-HSDPA] (init_processEventFn)  st sec carrier:   prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, st sec. carrier IsDlSecondaryCellPresent is TRUE
Line 845: [3C-HSDPA] (init_processEventFn)  st sec carrier:   prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, st sec. carrier IsDlSecondaryCellPresent is TRUE
Line 850: [3C-HSDPA] (init_processEventFn)  st sec carrier:   prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, st sec. carrier IsDlSecondaryCellPresent is FALSE
Line 850: [3C-HSDPA] (init_processEventFn)  st sec carrier:   prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, st sec. carrier IsDlSecondaryCellPresent is FALSE
Line 857: [3C-HSDPA] (init_processEventFn)  2nd sec carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, 2nd sec. carrier IsDlSecondaryCellPresent is TRUE
Line 857: [3C-HSDPA] (init_processEventFn)  2nd sec carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, 2nd sec. carrier IsDlSecondaryCellPresent is TRUE
Line 862: [3C-HSDPA] (init_processEventFn)  2nd sec carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, 2nd sec. carrier IsDlSecondaryCellPresent is FALSE
Line 862: [3C-HSDPA] (init_processEventFn)  2nd sec carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, 2nd sec. carrier IsDlSecondaryCellPresent is FALSE
Line 887: [DC/3C-HSDPA] 2nd Carrier: init_processEventFn,   Primary carrier has changed from UARFCN %d to UARFCN %d.
Line 887: [DC/3C-HSDPA] 2nd Carrier: init_processEventFn,   Primary carrier has changed from UARFCN %d to UARFCN %d.
Line 888: [DC/3C-HSDPA] 2nd Carrier: init_processEventFn, Secondary carrier has changed from UARFCN %d to UARFCN %d.
Line 888: [DC/3C-HSDPA] 2nd Carrier: init_processEventFn, Secondary carrier has changed from UARFCN %d to UARFCN %d.
Line 892: [DC/3C-HSDPA] Additional 2nd Carrier: init_processEventFn, Additional Secondary carrier has changed from UARFCN %d to UARFCN %d.
Line 892: [DC/3C-HSDPA] Additional 2nd Carrier: init_processEventFn, Additional Secondary carrier has changed from UARFCN %d to UARFCN %d.
Line 917: 2nd Carrier: init_processEventFn,  Secondary carrier change failed.
Line 917: 2nd Carrier: init_processEventFn,  Secondary carrier change failed.
Line 980: ListenArfcnTranAck late - meanwhile Release or timeout expired
Line 980: ListenArfcnTranAck late - meanwhile Release or timeout expired
Line 987: ListenArfcnTranScConfigAck late - meanwhile Release or timeout expired
Line 987: ListenArfcnTranScConfigAck late - meanwhile Release or timeout expired
Line 1002: new TryLocking event sent[%d,%d] - meanwhile locking timeout expired or release or new config request
Line 1002: new TryLocking event sent[%d,%d] - meanwhile locking timeout expired or release or new config request
Line 1009: Uhal Config Callback in Init state
Line 1009: Uhal Config Callback in Init state
Line 1014: About to map and assign fingers - meanwhile Release
Line 1014: About to map and assign fingers - meanwhile Release
Line 1019: About to start - meanwhile Release
Line 1019: About to start - meanwhile Release
Line 1024: racing: URRCTransceiver sends release or config before StartStopDecoding object sends startDecoding
Line 1024: racing: URRCTransceiver sends release or config before StartStopDecoding object sends startDecoding
Line 1080: DSDS:Set isRfRequested to False  for TransId %d
Line 1080: DSDS:Set isRfRequested to False  for TransId %d
Line 1082: DSDS:Release is received in init state
Line 1082: DSDS:Release is received in init state
Line 1088: Reset isRfRequested flag for BCH controller 
Line 1088: Reset isRfRequested flag for BCH controller 
Line 1097: Release in init state - probably timeout expired or interratcoordinator release
Line 1097: Release in init state - probably timeout expired or interratcoordinator release
Line 1102: Probably some timeout did not stopped. See how you stop timeouts
Line 1102: Probably some timeout did not stopped. See how you stop timeouts
Line 1107: Imposible!!!
Line 1107: Imposible!!!
Line 1112: Recv Sttd detection Done:on Init
Line 1112: Recv Sttd detection Done:on Init
Line 1121: Unknown event
Line 1121: Unknown event
Line 1150: sttdDetectionRequested_processEventFn : event=0
Line 1150: sttdDetectionRequested_processEventFn : event=0
Line 1154: sttdDetectionRequested_processEventFn : eventId =%d
Line 1154: sttdDetectionRequested_processEventFn : eventId =%d
Line 1163: config canceled by new config[%d,%d]
Line 1163: config canceled by new config[%d,%d]
Line 1171: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1171: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1178: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in sttdDetection (ControllerId = %d)
Line 1178: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in sttdDetection (ControllerId = %d)
Line 1196: DSDS: RF use pause Requested in STTD state sttdTimeoutToken cancelled
Line 1196: DSDS: RF use pause Requested in STTD state sttdTimeoutToken cancelled
Line 1209: ListenArfcnTranAck - sttdDetectionRequested
Line 1209: ListenArfcnTranAck - sttdDetectionRequested
Line 1216: ListenArfcnTranScConfigAck late - meanwhile Release or timeout expired
Line 1216: ListenArfcnTranScConfigAck late - meanwhile Release or timeout expired
Line 1225: CellTrackingInd - sttdDetectionRequested
Line 1225: CellTrackingInd - sttdDetectionRequested
Line 1231: TryLocking event sent[%d,%d] - - sttdDetectionRequested
Line 1231: TryLocking event sent[%d,%d] - - sttdDetectionRequested
Line 1241: sttdDetectionRequested: Imposible!!!
Line 1241: sttdDetectionRequested: Imposible!!!
Line 1250: Not Released by interRatCoordinator
Line 1250: Not Released by interRatCoordinator
Line 1256: Released by interRatCoordinator
Line 1256: Released by interRatCoordinator
Line 1264: timeout in sttdDetectionRequested state
Line 1264: timeout in sttdDetectionRequested state
Line 1269: SttdDetectionRequested:Imposible!!!
Line 1269: SttdDetectionRequested:Imposible!!!
Line 1278: Unknown event
Line 1278: Unknown event
Line 1298: dlUarfcnAccessRequested_processEventFn : event=0
Line 1298: dlUarfcnAccessRequested_processEventFn : event=0
Line 1309: config canceled by new config[%d,%d]
Line 1309: config canceled by new config[%d,%d]
Line 1317: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1317: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1325: Change State to CellTrackingRequested on ControllerId = %d
Line 1325: Change State to CellTrackingRequested on ControllerId = %d
Line 1344: Cannot happen RfSettled event!!![%d,%d] 
Line 1344: Cannot happen RfSettled event!!![%d,%d] 
Line 1353: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in dlUarfcnAccess. rfSettledRequested = %d
Line 1353: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in dlUarfcnAccess. rfSettledRequested = %d
Line 1383: ECF: FSM set to Cell Tracking requested
Line 1383: ECF: FSM set to Cell Tracking requested
Line 1408: Waiting RF settle: currentDlUarfcn =%d, uarfcn=%d, ControllerId = %d
Line 1408: Waiting RF settle: currentDlUarfcn =%d, uarfcn=%d, ControllerId = %d
Line 1428: Remove the cell info [%d, %d]
Line 1428: Remove the cell info [%d, %d]
Line 1466: EUphyResourcesConfigurationEventId_TryLocking in DlUarfcnAccessRequested state
Line 1466: EUphyResourcesConfigurationEventId_TryLocking in DlUarfcnAccessRequested state
Line 1473: Uhal Config Callback in dlUarfcnAccessRequested state
Line 1473: Uhal Config Callback in dlUarfcnAccessRequested state
Line 1478: About to map and assign fingers - meanwhile Release
Line 1478: About to map and assign fingers - meanwhile Release
Line 1483: About to start - meanwhile Release
Line 1483: About to start - meanwhile Release
Line 1487: Imposible!!!
Line 1487: Imposible!!!
Line 1501: timeout in DlUarfcnAccessRequest state
Line 1501: timeout in DlUarfcnAccessRequest state
Line 1506: Imposible!!!
Line 1506: Imposible!!!
Line 1512: Recv Sttd detection Done:on DlUarfcnAccessRequested
Line 1512: Recv Sttd detection Done:on DlUarfcnAccessRequested
Line 1517: Unknown event
Line 1517: Unknown event
Line 1533: dlUarfcnAccessRequested_processEventFn : event=0
Line 1533: dlUarfcnAccessRequested_processEventFn : event=0
Line 1544: config canceled by new config[%d,%d]
Line 1544: config canceled by new config[%d,%d]
Line 1552: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1552: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1560: Change State to CellTrackingRequested on ControllerId = %d
Line 1560: Change State to CellTrackingRequested on ControllerId = %d
Line 1578: Cannot happen RfSettled event!!![%d,%d] 
Line 1578: Cannot happen RfSettled event!!![%d,%d] 
Line 1592: EUphyResourcesConfigurationEventId_ScUafcnSettled
Line 1592: EUphyResourcesConfigurationEventId_ScUafcnSettled
Line 1602: EUphyResourcesConfigurationEventId_TryLocking in DlUarfcnAccessRequested state
Line 1602: EUphyResourcesConfigurationEventId_TryLocking in DlUarfcnAccessRequested state
Line 1609: Uhal Config Callback in dlUarfcnAccessRequested state
Line 1609: Uhal Config Callback in dlUarfcnAccessRequested state
Line 1614: About to map and assign fingers - meanwhile Release
Line 1614: About to map and assign fingers - meanwhile Release
Line 1619: About to start - meanwhile Release
Line 1619: About to start - meanwhile Release
Line 1623: Imposible!!!
Line 1623: Imposible!!!
Line 1637: timeout rcvd in dlScUarfcnAccessRequested_processEventFn
Line 1637: timeout rcvd in dlScUarfcnAccessRequested_processEventFn
Line 1642: Imposible!!!
Line 1642: Imposible!!!
Line 1648: Recv Sttd detection Done:on DlUarfcnAccessRequested
Line 1648: Recv Sttd detection Done:on DlUarfcnAccessRequested
Line 1653: Unknown event
Line 1653: Unknown event
Line 1667: enDecodingEnabled_processEventFn : event=0
Line 1667: enDecodingEnabled_processEventFn : event=0
Line 1682: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1682: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1689: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in EnDecodingEnabled state!!!
Line 1689: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in EnDecodingEnabled state!!!
Line 1699: TryLocking in EnDecodingEnabled state
Line 1699: TryLocking in EnDecodingEnabled state
Line 1706: Imposible!!!
Line 1706: Imposible!!!
Line 1710: Imposible!!!
Line 1710: Imposible!!!
Line 1714: Imposible!!!
Line 1714: Imposible!!!
Line 1718: Imposible!!!
Line 1718: Imposible!!!
Line 1741: Imposible!!!
Line 1741: Imposible!!!
Line 1757: [3C-HSDPA] (dlScUarfcnReleaseRequested_processEventFn) uarfcn(%d) is not valid!! or isRfReconfigured %d: skip cell tracking...
Line 1757: [3C-HSDPA] (dlScUarfcnReleaseRequested_processEventFn) uarfcn(%d) is not valid!! or isRfReconfigured %d: skip cell tracking...
Line 1767: [3C-HSDPA] (dlScUarfcnReleaseRequested_processEventFn) cell tracking called
Line 1767: [3C-HSDPA] (dlScUarfcnReleaseRequested_processEventFn) cell tracking called
Line 1777: timeout rcvd in dlScUarfcnReleaseRequested_processEventFn
Line 1777: timeout rcvd in dlScUarfcnReleaseRequested_processEventFn
Line 1783: Imposible!!!
Line 1783: Imposible!!!
Line 1788: Recv Sttd detection Done:on EnDecodingEnabled
Line 1788: Recv Sttd detection Done:on EnDecodingEnabled
Line 1792: Unknown event
Line 1792: Unknown event
Line 1819: cellTrackingRequested_processEventFn : event=0
Line 1819: cellTrackingRequested_processEventFn : event=0
Line 1830: config canceled by new config[%d,%d]
Line 1830: config canceled by new config[%d,%d]
Line 1838: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1838: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1845: ListenArfcnTranAck in  EUphyResourcesConfigurationFSMStates_CellTrackingRequested
Line 1845: ListenArfcnTranAck in  EUphyResourcesConfigurationFSMStates_CellTrackingRequested
Line 1860: S0 requestCellTracking  freqHypoCnt %d  isFreqHypo=TRUE
Line 1865: S0 requestCellTracking  freqHypoCnt %d, isFreqHypo %d
Line 1871: S0, requestCellTracking  freqHypoCnt %d
Line 1880: cellTrackingRequested_processEventFn, isFailed %d, isCompleted %d
Line 1880: cellTrackingRequested_processEventFn, isFailed %d, isCompleted %d
Line 1894: [HSDPA] Warning !! Warning !! cellTrackingRequested_processEventFn, cell tracking not completed. isReleaseWhenSecCarrierIsConfigured %d
Line 1894: [HSDPA] Warning !! Warning !! cellTrackingRequested_processEventFn, cell tracking not completed. isReleaseWhenSecCarrierIsConfigured %d
Line 1904: [3C-HSDPA]  cellTrackingRequested_processEventFn, isReleaseWhenSecCarrierIsConfigured %d
Line 1904: [3C-HSDPA]  cellTrackingRequested_processEventFn, isReleaseWhenSecCarrierIsConfigured %d
Line 1980: uphy_CCellSFNServer is NULL
Line 1980: uphy_CCellSFNServer is NULL
Line 1999: [3C-HSDPA]  Warning !! Warning !! Cell Tracking Failed !! during secondary carrier configuration
Line 1999: [3C-HSDPA]  Warning !! Warning !! Cell Tracking Failed !! during secondary carrier configuration
Line 2006: [HSDPA] Warning !! 2nd Carrier: cellTrackingRequested_processEventFn, cell traking fail during config, cellTrackForScRelease is FALSE, secondaryCampingUarfcn is %d
Line 2006: [HSDPA] Warning !! 2nd Carrier: cellTrackingRequested_processEventFn, cell traking fail during config, cellTrackForScRelease is FALSE, secondaryCampingUarfcn is %d
Line 2019: [3C-HSDPA] Warning !! Despite cell tracking failure, we boldly go for secondary carrier release !!
Line 2019: [3C-HSDPA] Warning !! Despite cell tracking failure, we boldly go for secondary carrier release !!
Line 2026: [HSDPA] 2nd Carrier: cellTrackingRequested_processEventFn, cellTrackForScRelease is TRUE, secondaryCampingUarfcn is %d
Line 2026: [HSDPA] 2nd Carrier: cellTrackingRequested_processEventFn, cellTrackForScRelease is TRUE, secondaryCampingUarfcn is %d
Line 2041: config canceled[%d,%d] - tracking failed
Line 2041: config canceled[%d,%d] - tracking failed
Line 2043: config canceled[%d,%d] - tracking failed, cellTrackForScRelease %d
Line 2043: config canceled[%d,%d] - tracking failed, cellTrackForScRelease %d
Line 2056: EUphyResourcesConfigurationEventId_RfUsePauseReq requested incellTracking 
Line 2056: EUphyResourcesConfigurationEventId_RfUsePauseReq requested incellTracking 
Line 2067: EUphyResourcesConfigurationEventId_TryLocking in cellTrackingRequested state
Line 2067: EUphyResourcesConfigurationEventId_TryLocking in cellTrackingRequested state
Line 2074: Uhal Config Callback in CellTrackingRequested state
Line 2074: Uhal Config Callback in CellTrackingRequested state
Line 2079: About to map and assign fingers - meanwhile Release
Line 2079: About to map and assign fingers - meanwhile Release
Line 2084: About to start - meanwhile Release
Line 2084: About to start - meanwhile Release
Line 2088: Imposible!!!
Line 2088: Imposible!!!
Line 2118: [3C-HSDPA]  Warning !! Warning !! Cell Tracking Timeout !!
Line 2118: [3C-HSDPA]  Warning !! Warning !! Cell Tracking Timeout !!
Line 2127: [3C-HSDPA] Warning !! Despite cell tracking failure due to timeout, we boldly go for secondary carrier release !!
Line 2127: [3C-HSDPA] Warning !! Despite cell tracking failure due to timeout, we boldly go for secondary carrier release !!
Line 2135: [3C-HSDPA]  Timeout for cell tracking : cell tracking during secondary carrier configuration
Line 2135: [3C-HSDPA]  Timeout for cell tracking : cell tracking during secondary carrier configuration
Line 2164: timeout in CellTrackingRequested state
Line 2164: timeout in CellTrackingRequested state
Line 2170: Imposible!!!
Line 2170: Imposible!!!
Line 2175: Recv Sttd detection Done:on CellTrackingRequested
Line 2175: Recv Sttd detection Done:on CellTrackingRequested
Line 2179: Unknown event
Line 2179: Unknown event
Line 2198: tryToLockConfigurationForConfig_processEventFn : event=0
Line 2198: tryToLockConfigurationForConfig_processEventFn : event=0
Line 2209: config canceled by new config[%d,%d]
Line 2209: config canceled by new config[%d,%d]
Line 2217: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2217: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2224: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in tryToLockConfigurationForConfig state!!!
Line 2224: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in tryToLockConfigurationForConfig state!!!
Line 2242: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in tryToLockConfigurationForConfig 
Line 2242: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in tryToLockConfigurationForConfig 
Line 2291: Not in dedicated mode, so cancel cofig
Line 2291: Not in dedicated mode, so cancel cofig
Line 2306: config canceled[%d][%d]
Line 2306: config canceled[%d][%d]
Line 2312: Uhal Config Callback in TryToLockConfigurationForConfig state
Line 2312: Uhal Config Callback in TryToLockConfigurationForConfig state
Line 2317: About to map and assign fingers - meanwhile Release
Line 2317: About to map and assign fingers - meanwhile Release
Line 2322: About to start - meanwhile Release
Line 2322: About to start - meanwhile Release
Line 2326: Imposible!!!
Line 2326: Imposible!!!
Line 2333: release in TryToLockConfigurationForConfig state
Line 2333: release in TryToLockConfigurationForConfig state
Line 2338: timeout in TryToLockConfigurationForConfig state
Line 2338: timeout in TryToLockConfigurationForConfig state
Line 2343: Imposible!!!
Line 2343: Imposible!!!
Line 2348: Recv Sttd detection Done:on TryToLockConfigurationForConfig
Line 2348: Recv Sttd detection Done:on TryToLockConfigurationForConfig
Line 2352: Unknown event
Line 2352: Unknown event
Line 2367: uhalConfiguration_processEventFn : event=0
Line 2367: uhalConfiguration_processEventFn : event=0
Line 2379: config canceled by new config[%d,%d]
Line 2379: config canceled by new config[%d,%d]
Line 2386: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2386: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2393: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in uhalConfiguration state!!!
Line 2393: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in uhalConfiguration state!!!
Line 2413: EUphyResourcesConfigurationEventId_TryLocking in uhalConfiguration state!!!
Line 2413: EUphyResourcesConfigurationEventId_TryLocking in uhalConfiguration state!!!
Line 2416: configUhalInstances
Line 2416: configUhalInstances
Line 2435: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  uhalConfiguration 
Line 2435: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  uhalConfiguration 
Line 2442: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in uhalConfiguration 
Line 2442: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in uhalConfiguration 
Line 2456: RefOrNeighbourRlSetMappingsAndFingerAllocation is TRUE
Line 2456: RefOrNeighbourRlSetMappingsAndFingerAllocation is TRUE
Line 2473: EUphyResourcesConfigurationEventId_RefOrNeighbourRlSetMapAndAssignFingers in uhalConfiguration state!!!
Line 2473: EUphyResourcesConfigurationEventId_RefOrNeighbourRlSetMapAndAssignFingers in uhalConfiguration state!!!
Line 2478: EUphyResourcesConfigurationEventId_Start in uhalConfiguration state!!!
Line 2478: EUphyResourcesConfigurationEventId_Start in uhalConfiguration state!!!
Line 2482: Imposible!!!
Line 2482: Imposible!!!
Line 2499: release in UhalConfiguration state
Line 2499: release in UhalConfiguration state
Line 2510: release in UhalConfiguration state
Line 2510: release in UhalConfiguration state
Line 2517: timeout in UhalConfiguration state
Line 2517: timeout in UhalConfiguration state
Line 2522: Imposible!!!
Line 2522: Imposible!!!
Line 2527: Recv Sttd detection Done:on UhalConfiguration
Line 2527: Recv Sttd detection Done:on UhalConfiguration
Line 2531: Unknown event
Line 2531: Unknown event
Line 2547: refOrNeighbourRlSetMappingsAndFingerAllocation_processEventFn : event=0
Line 2547: refOrNeighbourRlSetMappingsAndFingerAllocation_processEventFn : event=0
Line 2558: config canceled by new config[%d,%d]
Line 2558: config canceled by new config[%d,%d]
Line 2566: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2566: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2573: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2573: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2589: EUphyResourcesConfigurationEventId_CellTrackingInd in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2589: EUphyResourcesConfigurationEventId_CellTrackingInd in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2594: EUphyResourcesConfigurationEventId_TryLocking in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2594: EUphyResourcesConfigurationEventId_TryLocking in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2599: Uhal Config Callback in refOrNeighbourRlSetMappingsAndFingerAllocation state
Line 2599: Uhal Config Callback in refOrNeighbourRlSetMappingsAndFingerAllocation state
Line 2622: map and assign fingers [%d %d] - legal for oustanding BCH for SFN_CFN after DCH is released
Line 2622: map and assign fingers [%d %d] - legal for oustanding BCH for SFN_CFN after DCH is released
Line 2633: setReferenceOrNeighbourRl [%d %d]
Line 2633: setReferenceOrNeighbourRl [%d %d]
Line 2659: map and assign fingers [%d %d] - legal for oustanding BCH for SFN_CFN after DCH is released
Line 2659: map and assign fingers [%d %d] - legal for oustanding BCH for SFN_CFN after DCH is released
Line 2684: map and assign fingers [%d %d] - legal for oustanding BCH for SFN_CFN after DCH is released
Line 2684: map and assign fingers [%d %d] - legal for oustanding BCH for SFN_CFN after DCH is released
Line 2695: setReferenceOrNeighbourRl [%d %d]
Line 2695: setReferenceOrNeighbourRl [%d %d]
Line 2710: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  refOrNeighbourRlSetMappingsAndFingerAllocation 
Line 2710: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  refOrNeighbourRlSetMappingsAndFingerAllocation 
Line 2717: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in refOrNeighbourRlSetMappingsAndFingerAllocation 
Line 2717: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in refOrNeighbourRlSetMappingsAndFingerAllocation 
Line 2726: EUphyResourcesConfigurationEventId_Start in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2726: EUphyResourcesConfigurationEventId_Start in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2732: Imposible!!!
Line 2732: Imposible!!!
Line 2747: release in refOrNeighbourRlSetMappingsAndFingerAllocation state
Line 2747: release in refOrNeighbourRlSetMappingsAndFingerAllocation state
Line 2752: timeout in refOrNeighbourRlSetMappingsAndFingerAllocation state
Line 2752: timeout in refOrNeighbourRlSetMappingsAndFingerAllocation state
Line 2757: Imposible!!!
Line 2757: Imposible!!!
Line 2762: Recv Sttd detection Done:on RefOrNeighbourRlSetMappingsAndFingerAllocation
Line 2762: Recv Sttd detection Done:on RefOrNeighbourRlSetMappingsAndFingerAllocation
Line 2766: Unknown event
Line 2766: Unknown event
Line 2782: start_processEventFn : event=0
Line 2782: start_processEventFn : event=0
Line 2793: config canceled by new config[%d,%d]
Line 2793: config canceled by new config[%d,%d]
Line 2800: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2800: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2807: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in start state!!!
Line 2807: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in start state!!!
Line 2827: EUphyResourcesConfigurationEventId_TryLocking in start state!!!
Line 2827: EUphyResourcesConfigurationEventId_TryLocking in start state!!!
Line 2832: Uhal Config Callback in Start state
Line 2832: Uhal Config Callback in Start state
Line 2837: EUphyResourcesConfigurationEventId_RefOrNeighbourRlSetMapAndAssignFingers in start state!!!
Line 2837: EUphyResourcesConfigurationEventId_RefOrNeighbourRlSetMapAndAssignFingers in start state!!!
Line 2846: hsupa_start
Line 2846: hsupa_start
Line 2866: hsupa_start
Line 2866: hsupa_start
Line 2895: start
Line 2895: start
Line 2927: start_processEventFn: transceiverId is %d, myIndex is %d
Line 2927: start_processEventFn: transceiverId is %d, myIndex is %d
Line 2933: [BCH for RefCell]: start_processEventFn, going to ConfigDone state
Line 2933: [BCH for RefCell]: start_processEventFn, going to ConfigDone state
Line 2954: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  start 
Line 2954: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  start 
Line 2961: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in start 
Line 2961: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in start 
Line 2969: Imposible!!!
Line 2969: Imposible!!!
Line 2984: release in start state
Line 2984: release in start state
Line 2989: timeout in start state
Line 2989: timeout in start state
Line 2994: Imposible!!!
Line 2994: Imposible!!!
Line 2999: Recv Sttd detection Done:on Start
Line 2999: Recv Sttd detection Done:on Start
Line 3003: Unknown event
Line 3003: Unknown event
Line 3018: afcCheck_processEventF : event=0
Line 3018: afcCheck_processEventF : event=0
Line 3033: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3033: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3040: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in afcCheck state!!!
Line 3040: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in afcCheck state!!!
Line 3057: EUphyResourcesConfigurationEventId_TryLocking in AfcCheck state
Line 3057: EUphyResourcesConfigurationEventId_TryLocking in AfcCheck state
Line 3065: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  AfcCheck 
Line 3065: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  AfcCheck 
Line 3072: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in AfcCheck 
Line 3072: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in AfcCheck 
Line 3081: Imposible!!!
Line 3081: Imposible!!!
Line 3085: Imposible!!!
Line 3085: Imposible!!!
Line 3089: Imposible!!!
Line 3089: Imposible!!!
Line 3093: Imposible!!!
Line 3093: Imposible!!!
Line 3111: Imposible!!!
Line 3111: Imposible!!!
Line 3119: AFC Check Failed
Line 3119: AFC Check Failed
Line 3132: Recv Sttd detection Done:on AfcCheck
Line 3132: Recv Sttd detection Done:on AfcCheck
Line 3136: Unknown event
Line 3136: Unknown event
Line 3158: tryToLockConfigurationForRelease_processEventFn : event=0
Line 3158: tryToLockConfigurationForRelease_processEventFn : event=0
Line 3168: new config in TryToLockConfigurationForRelease
Line 3168: new config in TryToLockConfigurationForRelease
Line 3174: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3174: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3181: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in tryToLockConfigurationForRelease state!!!
Line 3181: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in tryToLockConfigurationForRelease state!!!
Line 3258: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) isReleaseWhenSecCarrierIsConfigure : FALSE
Line 3258: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) isReleaseWhenSecCarrierIsConfigure : FALSE
Line 3263: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) only one secondary carrier release, secodaryCarrierReleaseMode=%d, next state is EnDecodingEnabled
Line 3263: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) only one secondary carrier release, secodaryCarrierReleaseMode=%d, next state is EnDecodingEnabled
Line 3268: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) secondary carrier config, secodaryCarrierReleaseMode=%d, next state is EnDecodingEnabled
Line 3268: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) secondary carrier config, secodaryCarrierReleaseMode=%d, next state is EnDecodingEnabled
Line 3273: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) All the secondary carriers release, secodaryCarrierReleaseMode=%d, next state is EUphyResourcesConfigurationFSMStates_Init
Line 3273: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) All the secondary carriers release, secodaryCarrierReleaseMode=%d, next state is EUphyResourcesConfigurationFSMStates_Init
Line 3290: testLogicModification = %d, isLocked = %d
Line 3290: testLogicModification = %d, isLocked = %d
Line 3298: testLogicModification [%d %d] [%d %d] for release failed - EUphyResourcesConfigurationEventId_TryLocking
Line 3298: testLogicModification [%d %d] [%d %d] for release failed - EUphyResourcesConfigurationEventId_TryLocking
Line 3307: Uhal Config Callback in TryToLockConfigurationForRelease state
Line 3307: Uhal Config Callback in TryToLockConfigurationForRelease state
Line 3312: About to map and assign fingers - meanwhile Release
Line 3312: About to map and assign fingers - meanwhile Release
Line 3317: About to start - meanwhile Release
Line 3317: About to start - meanwhile Release
Line 3321: Imposible!!!
Line 3321: Imposible!!!
Line 3330: release overides waiting config msg
Line 3330: release overides waiting config msg
Line 3336: Abnormal Release in tryToLockConfigurationForRelease state: source ID=%d
Line 3336: Abnormal Release in tryToLockConfigurationForRelease state: source ID=%d
Line 3359: Abnormal Release in tryToLockConfigurationForRelease state: two consequtive release_EVT. Do nothing
Line 3359: Abnormal Release in tryToLockConfigurationForRelease state: two consequtive release_EVT. Do nothing
Line 3367: timeout[%d,%d] in TryToLockConfigurationForRelease state - release have not done
Line 3367: timeout[%d,%d] in TryToLockConfigurationForRelease state - release have not done
Line 3374: Imposible!!!
Line 3374: Imposible!!!
Line 3379: Recv Sttd detection Done:on TryToLockConfigurationForRelease
Line 3379: Recv Sttd detection Done:on TryToLockConfigurationForRelease
Line 3383: Unknown event
Line 3383: Unknown event
Line 3397: configDone_processEventFn : event=0
Line 3397: configDone_processEventFn : event=0
Line 3406: New config request recieved in configDoneState
Line 3406: New config request recieved in configDoneState
Line 3412: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3412: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3424: DCHPauseReq requested in ConfigDone is3gHwRelReqd %d
Line 3424: DCHPauseReq requested in ConfigDone is3gHwRelReqd %d
Line 3430: DCHPauseReq requested in ConfigDone is3gHwRelReqd %d
Line 3430: DCHPauseReq requested in ConfigDone is3gHwRelReqd %d
Line 3438: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in ConfigDone 
Line 3438: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in ConfigDone 
Line 3448: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in configDone state!!!
Line 3448: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in configDone state!!!
Line 3465: TryLocking in ConfigDone state
Line 3465: TryLocking in ConfigDone state
Line 3472: Imposible!!!
Line 3472: Imposible!!!
Line 3476: Imposible!!!
Line 3476: Imposible!!!
Line 3480: Imposible!!!
Line 3480: Imposible!!!
Line 3495: Imposible!!!
Line 3495: Imposible!!!
Line 3500: Imposible!!!
Line 3500: Imposible!!!
Line 3505: Recv Sttd detection Done:on ConfigDone
Line 3505: Recv Sttd detection Done:on ConfigDone
Line 3510: Unknown event
Line 3510: Unknown event
Line 3532: enDecodingEnabled_processEventFn : event=0
Line 3532: enDecodingEnabled_processEventFn : event=0
Line 3546: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3546: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3553: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in EnDecodingEnabled state!!!
Line 3553: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in EnDecodingEnabled state!!!
Line 3563: TryLocking in EnDecodingEnabled state
Line 3563: TryLocking in EnDecodingEnabled state
Line 3570: Imposible!!!
Line 3570: Imposible!!!
Line 3574: Imposible!!!
Line 3574: Imposible!!!
Line 3578: Imposible!!!
Line 3578: Imposible!!!
Line 3583: Imposible!!!
Line 3583: Imposible!!!
Line 3597: uhal command exec failed
Line 3597: uhal command exec failed
Line 3618: Skipping CcTrCh Enable Since there is no valid TrCh
Line 3618: Skipping CcTrCh Enable Since there is no valid TrCh
Line 3654: In enDecodingEnabled_processEventFn: NON_UMTS_RAT_MODE = %d
Line 3654: In enDecodingEnabled_processEventFn: NON_UMTS_RAT_MODE = %d
Line 3680: [3C-HSDPA] before: primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d, isReleaseWhenSecCarrierIsConfigured=%d
Line 3680: [3C-HSDPA] before: primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d, isReleaseWhenSecCarrierIsConfigured=%d
Line 3709: [3C-HSDPA]  (enDecodingEnabled_processEventFn) UARCFN setting done    : primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d
Line 3709: [3C-HSDPA]  (enDecodingEnabled_processEventFn) UARCFN setting done    : primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d
Line 3713: [3C-HSDPA]  (enDecodingEnabled_processEventFn) UARCFN setting skipped : primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d
Line 3713: [3C-HSDPA]  (enDecodingEnabled_processEventFn) UARCFN setting skipped : primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d
Line 3722: [3C-HSDPA] (enDecodingEnabled_processEventFn) DcHsdpaPrvState=%d,  DcHsdpaCurrentState=%d,  st sec. release only
Line 3722: [3C-HSDPA] (enDecodingEnabled_processEventFn) DcHsdpaPrvState=%d,  DcHsdpaCurrentState=%d,  st sec. release only
Line 3729: [3C-HSDPA] (enDecodingEnabled_processEventFn) DcHsdpaPrvState=%d,  DcHsdpaCurrentState=%d,  2nd sec. release only
Line 3729: [3C-HSDPA] (enDecodingEnabled_processEventFn) DcHsdpaPrvState=%d,  DcHsdpaCurrentState=%d,  2nd sec. release only
Line 3738: [3C-HSDPA] (enDecodingEnabled_processEventFn) DcHsdpaPrvState=%d,  DcHsdpaCurrentState=%d,  All 2nd sec. release
Line 3738: [3C-HSDPA] (enDecodingEnabled_processEventFn) DcHsdpaPrvState=%d,  DcHsdpaCurrentState=%d,  All 2nd sec. release
Line 3742: [3C-HSDPA] secodaryCarrierReleaseMode=%d :config
Line 3742: [3C-HSDPA] secodaryCarrierReleaseMode=%d :config
Line 3745: [3C-HSDPA] after: primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d
Line 3745: [3C-HSDPA] after: primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d
Line 3890: Imposible!!!
Line 3890: Imposible!!!
Line 3895: Imposible!!!
Line 3895: Imposible!!!
Line 3900: Recv Sttd detection Done:on EnDecodingEnabled
Line 3900: Recv Sttd detection Done:on EnDecodingEnabled
Line 3904: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  enDecodingEnabled 
Line 3904: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  enDecodingEnabled 
Line 3911: Unknown event
Line 3911: Unknown event
Line 3921: isChangeOfDRToDSOrDSToDR: transceiverId %d currentMainSubSIMInfo %d, newMainSubSIMInfo %d (NO_SIM/MAIN_SIM/SUB_SIM/MAX_SIM_STATUS)
Line 3921: isChangeOfDRToDSOrDSToDR: transceiverId %d currentMainSubSIMInfo %d, newMainSubSIMInfo %d (NO_SIM/MAIN_SIM/SUB_SIM/MAX_SIM_STATUS)
Line 3948: enDecodingEnabled_processEventFn : event=0
Line 3948: enDecodingEnabled_processEventFn : event=0
Line 3954: S 3G3G DSDS : Config Message received in dsSuspend State
Line 3954: S 3G3G DSDS : Config Message received in dsSuspend State
Line 4005: 3G3G DSDS : RfUseResume received in dsSuspend State
Line 4005: 3G3G DSDS : RfUseResume received in dsSuspend State
Line 4015: 3G3G DSDS : TrasceiverId %d Channel Release in dsSuspend State although RF is available: Clear isDsRelease
Line 4015: 3G3G DSDS : TrasceiverId %d Channel Release in dsSuspend State although RF is available: Clear isDsRelease
Line 4025: 3G3G DSDS : Channel Release received in dsSuspend State
Line 4025: 3G3G DSDS : Channel Release received in dsSuspend State
Line 4029: Unknown event
Line 4029: Unknown event
Line 4048: dsReconfReq_processEventFn : event=0
Line 4048: dsReconfReq_processEventFn : event=0
Line 4062: dsReconfReq_processEventFn: currentMainSubSIMInfo %d, cctrchNr %d
Line 4062: dsReconfReq_processEventFn: currentMainSubSIMInfo %d, cctrchNr %d
Line 4086: Wrong SIM Information %d !!!
Line 4086: Wrong SIM Information %d !!!
Line 4119: dsReconfReq_processEventFn : BGPCH should not happen here
Line 4119: dsReconfReq_processEventFn : BGPCH should not happen here
Line 4125: dsReconfReq_processEventFn : currentMainSubSIMInfo %d, cctrchNr %d
Line 4125: dsReconfReq_processEventFn : currentMainSubSIMInfo %d, cctrchNr %d
Line 4149: Wrong SIM Information %d !!!
Line 4149: Wrong SIM Information %d !!!
Line 4162: Release Cctrch - uhal_Cmd_exec
Line 4162: Release Cctrch - uhal_Cmd_exec
Line 4173: Unknown event
Line 4173: Unknown event
Line 4296: resourcesConfigurationController_ptr->configMsgDeadlineInfo.msg == NULL
Line 4296: resourcesConfigurationController_ptr->configMsgDeadlineInfo.msg == NULL
Line 4299: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - INIT_ENTRY state
Line 4299: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - INIT_ENTRY state
Line 4359: [3C-HSDPA] initEntry, config Msg deallocated
Line 4359: [3C-HSDPA] initEntry, config Msg deallocated
Line 4362: DSDS:Deleted saved config message from resources configuration controller since RF pause is not enabled
Line 4362: DSDS:Deleted saved config message from resources configuration controller since RF pause is not enabled
Line 4375: DSDS:Deleted saved config message from resources configuration controller since message is not from URRC
Line 4375: DSDS:Deleted saved config message from resources configuration controller since message is not from URRC
Line 4403: Waiting config for preventing Tx Max Power
Line 4403: Waiting config for preventing Tx Max Power
Line 4467: DlCommonConfigCmd exec failure: ErrCode %d, AddErrCode %d
Line 4467: DlCommonConfigCmd exec failure: ErrCode %d, AddErrCode %d
Line 4507: isSfnServerConfigured was TRUE, now FALSE
Line 4507: isSfnServerConfigured was TRUE, now FALSE
Line 4611: unknown TTI
Line 4611: unknown TTI
Line 4628: l2uCandiCellInfo.numOfCells is %d,  ttiMod is %d
Line 4628: l2uCandiCellInfo.numOfCells is %d,  ttiMod is %d
Line 4634: CgiAcquisition detected,  ttiMod is %d
Line 4634: CgiAcquisition detected,  ttiMod is %d
Line 4649: Launch Endecoding Token Immediately: diffRSN=%d
Line 4649: Launch Endecoding Token Immediately: diffRSN=%d
Line 4651: Max_TTI is %d, isImmediateLaunch = %d, diffRSN=%d, firstMaxTTIAlignedCfn = %d
Line 4651: Max_TTI is %d, isImmediateLaunch = %d, diffRSN=%d, firstMaxTTIAlignedCfn = %d
Line 4712: unknown TTI
Line 4712: unknown TTI
Line 4756: getEndecodingEnableAbsoluteTimeStamp: firstMaxTTIAlignedCfn %d phychOffsetToCpich %d currentRSN=%d absoluteTimeStampRSN =%d
Line 4756: getEndecodingEnableAbsoluteTimeStamp: firstMaxTTIAlignedCfn %d phychOffsetToCpich %d currentRSN=%d absoluteTimeStampRSN =%d
Line 4789: unknown TTI
Line 4789: unknown TTI
Line 4827: launchRequestDsl1rcRfAccessforCTCHConfiguration: start FACH for CTCH configuration
Line 4827: launchRequestDsl1rcRfAccessforCTCHConfiguration: start FACH for CTCH configuration
Line 4872: DSDS:requestDslrcRfAccess : event=0
Line 4872: DSDS:requestDslrcRfAccess : event=0
Line 4913: DSDS: Unable to send RF request message to DSLRC
Line 4913: DSDS: Unable to send RF request message to DSLRC
Line 4918: DSDS: requestDslrcRfAccess sent to DSLRC interface from %d with cause %d and time %d
Line 4918: DSDS: requestDslrcRfAccess sent to DSLRC interface from %d with cause %d and time %d
Line 4943: requestDlUarfcnAccess : event=0
Line 4943: requestDlUarfcnAccess : event=0
Line 4964: send
Line 4964: send
Line 4995: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DL_UARFCN_ACCESS_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 4995: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DL_UARFCN_ACCESS_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 5029: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DL_SC_UARFCN_ACCESS_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 5029: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DL_SC_UARFCN_ACCESS_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 5072: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DL_SC_UARFCN_RELEASE_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d isDcSttdDetTried %d 
Line 5072: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DL_SC_UARFCN_RELEASE_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d isDcSttdDetTried %d 
Line 5104: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 5104: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 5108: uphy_CResourcesConfigurationController_getDlUarfcn : Primary DL Uarfcn is returned
Line 5108: uphy_CResourcesConfigurationController_getDlUarfcn : Primary DL Uarfcn is returned
Line 5113: uphy_CResourcesConfigurationController_getDlUarfcn : configMsg=0 for secondary HSDSCH controller
Line 5113: uphy_CResourcesConfigurationController_getDlUarfcn : configMsg=0 for secondary HSDSCH controller
Line 5118: uphy_CResourcesConfigurationController_getDlUarfcn : messageTransceiverId is not HsdschResourcesControllerId and configMsg=0
Line 5118: uphy_CResourcesConfigurationController_getDlUarfcn : messageTransceiverId is not HsdschResourcesControllerId and configMsg=0
Line 5147: uphy_CResourcesConfigurationController_getDlUarfcn - dlUarfcn = %d
Line 5147: uphy_CResourcesConfigurationController_getDlUarfcn - dlUarfcn = %d
Line 5157: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 5157: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 5161: uphy_CResourcesConfigurationController_getDlUarfcn : configMsg is %x, Primary DL Uarfcn is returned
Line 5161: uphy_CResourcesConfigurationController_getDlUarfcn : configMsg is %x, Primary DL Uarfcn is returned
Line 5190: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 5190: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 5196: controller type
Line 5196: controller type
Line 5236: getPrimaryScrCode : configMsg=0
Line 5236: getPrimaryScrCode : configMsg=0
Line 5317: controllerId=%d
Line 5317: controllerId=%d
Line 5354: controllerId=%d
Line 5354: controllerId=%d
Line 5373: uphy_CResourcesConfigurationController_getDSLRCresponse : configMsg=0
Line 5373: uphy_CResourcesConfigurationController_getDSLRCresponse : configMsg=0
Line 5387: uphy_CResourcesConfigurationController_getDSLRCresponse : BchResourcesControllerId
Line 5387: uphy_CResourcesConfigurationController_getDSLRCresponse : BchResourcesControllerId
Line 5395: uphy_CResourcesConfigurationController_getDSLRCresponse : RachResourcesControllerId
Line 5395: uphy_CResourcesConfigurationController_getDSLRCresponse : RachResourcesControllerId
Line 5403: uphy_CResourcesConfigurationController_getDSLRCresponse : PchAndDrxResourcesControllerId
Line 5403: uphy_CResourcesConfigurationController_getDSLRCresponse : PchAndDrxResourcesControllerId
Line 5411: uphy_CResourcesConfigurationController_getDSLRCresponse : FachResourcesControllerId
Line 5411: uphy_CResourcesConfigurationController_getDSLRCresponse : FachResourcesControllerId
Line 5419: uphy_CResourcesConfigurationController_getDSLRCresponse : HsdschResourcesControllerId
Line 5419: uphy_CResourcesConfigurationController_getDSLRCresponse : HsdschResourcesControllerId
Line 5427: uphy_CResourcesConfigurationController_getDSLRCresponse : DedicatedModeControllerId
Line 5427: uphy_CResourcesConfigurationController_getDSLRCresponse : DedicatedModeControllerId
Line 5431: Error in getDslrcResponse
Line 5431: Error in getDslrcResponse
Line 5436: uphy_CResourcesConfigurationController_getDSLRCresponse: currentMainSubSIMInfo %d newMainSubSIMInfo %d(NO_SIM/MAIN_SIM/SUB_SIM/MAX_SIM_STATUS)
Line 5436: uphy_CResourcesConfigurationController_getDSLRCresponse: currentMainSubSIMInfo %d newMainSubSIMInfo %d(NO_SIM/MAIN_SIM/SUB_SIM/MAX_SIM_STATUS)
Line 5531: controller type
Line 5531: controller type
Line 5585: controller type
Line 5585: controller type
Line 5619: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - Timeout: uarfcn=%d primaryScrCode=%d
Line 5619: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - Timeout: uarfcn=%d primaryScrCode=%d
Line 5651: event==0: uarfcn=%d, scrCode=%d
Line 5651: event==0: uarfcn=%d, scrCode=%d
Line 5659: configCanceled[%d,%d]: uarfcn=%d, scrCode=%d
Line 5659: configCanceled[%d,%d]: uarfcn=%d, scrCode=%d
Line 5683: send
Line 5683: send
Line 5695: [DC-HSDPA]releaseCanceled[%d,%d]: uarfcn=%d, scrCode=%d cellTrackForScRelease=%d
Line 5695: [DC-HSDPA]releaseCanceled[%d,%d]: uarfcn=%d, scrCode=%d cellTrackForScRelease=%d
Line 5839: configCanceledAndDeleteMsg : event=0
Line 5839: configCanceledAndDeleteMsg : event=0
Line 5851: msg is NULL
Line 5851: msg is NULL
Line 5873: configCanceledAndDeleteMsgWithReInit : event=0
Line 5873: configCanceledAndDeleteMsgWithReInit : event=0
Line 5885: msg is NULL
Line 5885: msg is NULL
Line 5913: sendConfirmationMsgAndDeleteMsgToConfirm : event=0
Line 5913: sendConfirmationMsgAndDeleteMsgToConfirm : event=0
Line 5926: msg is NULL
Line 5926: msg is NULL
Line 5961: configCanceledByNewConfig : event=0
Line 5961: configCanceledByNewConfig : event=0
Line 5968: event->msg==0
Line 5968: event->msg==0
Line 5971: configCanceledByNewConfig[%d,%d]: uarfcn=%d, scrCode=%d
Line 5971: configCanceledByNewConfig[%d,%d]: uarfcn=%d, scrCode=%d
Line 5990: send
Line 5990: send
Line 5995: controllerReleasedTransitionMsg is NULL
Line 5995: controllerReleasedTransitionMsg is NULL
Line 6012: send
Line 6012: send
Line 6018: controllerReleasedTransitionMsg is NULL
Line 6018: controllerReleasedTransitionMsg is NULL
Line 6055: unlockReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6055: unlockReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6062: event->msg==0
Line 6062: event->msg==0
Line 6090: unlockReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6090: unlockReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6096: event->msg==0
Line 6096: event->msg==0
Line 6126: unlockUnmapReleaseUhalAndConfigCanceledByRelease : event=0
Line 6126: unlockUnmapReleaseUhalAndConfigCanceledByRelease : event=0
Line 6133: event->msg==0
Line 6133: event->msg==0
Line 6163: unlockUnmapReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6163: unlockUnmapReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6170: event->msg==0
Line 6170: event->msg==0
Line 6200: unlockUnmapReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6200: unlockUnmapReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6206: event->msg==0
Line 6206: event->msg==0
Line 6238: unlockReleaseUhalAndConfigCanceledByRelease : event=0
Line 6238: unlockReleaseUhalAndConfigCanceledByRelease : event=0
Line 6245: event->msg==0
Line 6245: event->msg==0
Line 6297: Remove mpDB for CBS -uarfcn=%d primaryScrCode=%d
Line 6297: Remove mpDB for CBS -uarfcn=%d primaryScrCode=%d
Line 6327: Fingers already allocated Rl %d Finger %d
Line 6327: Fingers already allocated Rl %d Finger %d
Line 6374: configCanceledByRelease : event=0
Line 6374: configCanceledByRelease : event=0
Line 6380: configCanceledByRelease : event->msg==0
Line 6380: configCanceledByRelease : event->msg==0
Line 6385: configCanceledByRelease[%d,%d]: uarfcn=%d, scrCode=%d SrcId=%d
Line 6385: configCanceledByRelease[%d,%d]: uarfcn=%d, scrCode=%d SrcId=%d
Line 6407: send
Line 6407: send
Line 6412: controllerReleasedTransitionMsg is NULL
Line 6412: controllerReleasedTransitionMsg is NULL
Line 6429: send
Line 6429: send
Line 6434: controllerReleasedTransitionMsg is NULL
Line 6434: controllerReleasedTransitionMsg is NULL
Line 6592: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - Tx Div setting: uarfcn=%d DivStatus  %d msgId %d
Line 6592: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - Tx Div setting: uarfcn=%d DivStatus  %d msgId %d
Line 6598: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - CELL_TRACKING_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 6598: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - CELL_TRACKING_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 6652: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - TRY_TO_LOCK_CONFIGURATION_FOR_CONGIG_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 6652: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - TRY_TO_LOCK_CONFIGURATION_FOR_CONGIG_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 6690: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - UHAL_CONFIGURATION_ENTRY state: uarfcn=%d primaryScrCode=%d, isDsReconfig=%d
Line 6690: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - UHAL_CONFIGURATION_ENTRY state: uarfcn=%d primaryScrCode=%d, isDsReconfig=%d
Line 6776: uphy_CResourcesConfigurationController_ConfigUhalStf skipped as FSM is in DsSuspend State
Line 6776: uphy_CResourcesConfigurationController_ConfigUhalStf skipped as FSM is in DsSuspend State
Line 6823: rlInfoCommand uhal cmd exec failed
Line 6823: rlInfoCommand uhal cmd exec failed
Line 6860: Rl=%d number not changed but ref Rl=%d found as invalid(gotRefRl=FALSE) - probably DCH removed Rl and reconfigured again becuase modify is not supported yet : Configuration[%d %d] [%d %d]
Line 6860: Rl=%d number not changed but ref Rl=%d found as invalid(gotRefRl=FALSE) - probably DCH removed Rl and reconfigured again becuase modify is not supported yet : Configuration[%d %d] [%d %d]
Line 6890:  resourcesConfigurationController_ptr->configChangeInfo.numOfRls==0
Line 6890:  resourcesConfigurationController_ptr->configChangeInfo.numOfRls==0
Line 6905: Reference cell not set: neighbour Rl=%d has to be reused(gotNeighRl=%d), but ref and neigh scrCodes don't match
Line 6905: Reference cell not set: neighbour Rl=%d has to be reused(gotNeighRl=%d), but ref and neigh scrCodes don't match
Line 6912: Set neighbor RL(multi RL): uhalRlNr=%d currentNeighbourRl=%d
Line 6912: Set neighbor RL(multi RL): uhalRlNr=%d currentNeighbourRl=%d
Line 6917: neighbourRlConfigCmd - uhal_Cmd_exec
Line 6917: neighbourRlConfigCmd - uhal_Cmd_exec
Line 6933: Set neighbor RL: uhalRlNr=%d currentNeighbourRl=%d
Line 6933: Set neighbor RL: uhalRlNr=%d currentNeighbourRl=%d
Line 6938: neighbourRlConfigCmd - uhal_Cmd_exec
Line 6938: neighbourRlConfigCmd - uhal_Cmd_exec
Line 6948: [BCH for RefCell] Skip neighbor RL set, myIndex (%d)
Line 6948: [BCH for RefCell] Skip neighbor RL set, myIndex (%d)
Line 6961: uhal_Cmd_exec
Line 6961: uhal_Cmd_exec
Line 6973: Unable to set reference cell in multipath database
Line 6973: Unable to set reference cell in multipath database
Line 6985: Reference Rl=%d should be reused(gotRefRl=%d) as neighbour(ignored stays reference), but ref and neigh scrCodes don't match
Line 6985: Reference Rl=%d should be reused(gotRefRl=%d) as neighbour(ignored stays reference), but ref and neigh scrCodes don't match
Line 7000: uhal_Cmd_exec
Line 7000: uhal_Cmd_exec
Line 7017: Set neighbor RL: currentRefRl=%d currentNeighbourRl=%d
Line 7017: Set neighbor RL: currentRefRl=%d currentNeighbourRl=%d
Line 7021: neighbourRlConfigCmd - uhal_Cmd_exec
Line 7021: neighbourRlConfigCmd - uhal_Cmd_exec
Line 7032: uhal_Cmd_exec
Line 7032: uhal_Cmd_exec
Line 7046: uhal_Cmd_exec
Line 7046: uhal_Cmd_exec
Line 7153: [SW WA] Pass due to HICH release Ind
Line 7153: [SW WA] Pass due to HICH release Ind
Line 7200: [SW WA] [Index %d] found %d, ecNo %d, rscp %d, CandidateIndex[0] %d, CandidateIndex[] %d
Line 7200: [SW WA] [Index %d] found %d, ecNo %d, rscp %d, CandidateIndex[0] %d, CandidateIndex[] %d
Line 7207: [SW WA ERROR] MinEcNo[0] %d, MinEcNo[] %d, CandidateIndex[0] %d, CandidateIndex[] %d
Line 7207: [SW WA ERROR] MinEcNo[0] %d, MinEcNo[] %d, CandidateIndex[0] %d, CandidateIndex[] %d
Line 7231: HSUPA RlNr %d, PSC %d does not belong to WCDMA RL
Line 7231: HSUPA RlNr %d, PSC %d does not belong to WCDMA RL
Line 7248: [SW WA] [index %d] CandidateIndex[0] %d, CandidateIndex[] %d HsupaRlNr %d, isExisting %d, psc %d
Line 7248: [SW WA] [index %d] CandidateIndex[0] %d, CandidateIndex[] %d HsupaRlNr %d, isExisting %d, psc %d
Line 7254: [SW WA] WA_MoreEdchActiveSets buffer is full.. it shall not happen!!! B[0] = %d, B[] = %d, B[2] = %d, B[3] = %d
Line 7254: [SW WA] WA_MoreEdchActiveSets buffer is full.. it shall not happen!!! B[0] = %d, B[] = %d, B[2] = %d, B[3] = %d
Line 7260: [SW WA] Condition Met(i %d) psc %d will be stored in WA_MoreEdchActiveSets  & [index %d, isTRUE %d & psc[%d] ]
Line 7260: [SW WA] Condition Met(i %d) psc %d will be stored in WA_MoreEdchActiveSets  & [index %d, isTRUE %d & psc[%d] ]
Line 7270: [SW WA ERROR] This should not be happen 
Line 7270: [SW WA ERROR] This should not be happen 
Line 7282: No Free Rl for E-DCH Remaining Active Set On E-DCH Active Set
Line 7282: No Free Rl for E-DCH Remaining Active Set On E-DCH Active Set
Line 7298: wcdma RL %d, hsupa RL %d is still running
Line 7298: wcdma RL %d, hsupa RL %d is still running
Line 7307: GetPhychNum failed: returnedPhychNr(%d) should be greater than -
Line 7307: GetPhychNum failed: returnedPhychNr(%d) should be greater than -
Line 7320: wcdmaRlNr %d, hsupaRlNr %d, PSC %d, ErgchOffsetToCpich %d[chips], dpchOffsetToCpich %d, TTI %d
Line 7320: wcdmaRlNr %d, hsupaRlNr %d, PSC %d, ErgchOffsetToCpich %d[chips], dpchOffsetToCpich %d, TTI %d
Line 7342: E-HICH Phych Config Failed
Line 7342: E-HICH Phych Config Failed
Line 7363: E-HICH Rake Rl Phych Config Failed
Line 7363: E-HICH Rake Rl Phych Config Failed
Line 7378: Non Serving RLS: PSC %d, reset ErgchOffsetToCpich %d[chips], ServRlsRgCombInx %d, NonServRlsRgCombInx %d
Line 7378: Non Serving RLS: PSC %d, reset ErgchOffsetToCpich %d[chips], ServRlsRgCombInx %d, NonServRlsRgCombInx %d
Line 7396: E-RGCH Phych Config Failed
Line 7396: E-RGCH Phych Config Failed
Line 7417: E-RGCH Rake Rl Phych Config Failed
Line 7417: E-RGCH Rake Rl Phych Config Failed
Line 7431: UE get the E-RGCH release indicator on the radio link having no E-RGCH 
Line 7431: UE get the E-RGCH release indicator on the radio link having no E-RGCH 
Line 7436: UE get the E-RGCH release indicator on HSUPA NBR Configuration 
Line 7436: UE get the E-RGCH release indicator on HSUPA NBR Configuration 
Line 7441: UE get the E-HICH release indicator on the radio link when UE has no E-HICH, so Do Nothing!!! 
Line 7441: UE get the E-HICH release indicator on the radio link when UE has no E-HICH, so Do Nothing!!! 
Line 7445: UE get the E-HICH release indicator on HSUPA NBR Configuration 
Line 7445: UE get the E-HICH release indicator on HSUPA NBR Configuration 
Line 7454: UE have wrong configuration with nonzero NumOfSwActiveSet(%d)
Line 7454: UE have wrong configuration with nonzero NumOfSwActiveSet(%d)
Line 7488: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - REF_OR_NEIGHBOUR_RL_SET_MAPPINGS_AND_FINGER_ALLOCATION_ENTRY state: uarfcn=%d primaryScrCode=%d, isDsReconfig=%d
Line 7488: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - REF_OR_NEIGHBOUR_RL_SET_MAPPINGS_AND_FINGER_ALLOCATION_ENTRY state: uarfcn=%d primaryScrCode=%d, isDsReconfig=%d
Line 7599: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - START_ENTRY state: uarfcn=%d primaryScrCode=%d, isDsReconfig=%d
Line 7599: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - START_ENTRY state: uarfcn=%d primaryScrCode=%d, isDsReconfig=%d
Line 7703: AFC enable successfully.
Line 7703: AFC enable successfully.
Line 7708: AFC enable failed
Line 7708: AFC enable failed
Line 7737: [FH] afcCheckEntry: DLA enable rlStr=0x%x nRl=%d
Line 7737: [FH] afcCheckEntry: DLA enable rlStr=0x%x nRl=%d
Line 7741: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - AFC_CHECK_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 7741: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - AFC_CHECK_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 7829: [3C-HSDPA] (enDecodingEnabled_processEventFn) tryToLockConfigurationForReleaseEntry, Nothing done in terms of 2nd Carriers
Line 7829: [3C-HSDPA] (enDecodingEnabled_processEventFn) tryToLockConfigurationForReleaseEntry, Nothing done in terms of 2nd Carriers
Line 7847: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - TRY_TO_LOCK_CONFIGURATION_FOR_RELEASE_ENTRY state: uarfcn=%d primaryScrCode=%d isDsReconfig=%d
Line 7847: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - TRY_TO_LOCK_CONFIGURATION_FOR_RELEASE_ENTRY state: uarfcn=%d primaryScrCode=%d isDsReconfig=%d
Line 7898: uphy_CCellSFNServer is NULL
Line 7898: uphy_CCellSFNServer is NULL
Line 7919: Request disabling All Configured TGPS, Release in progress
Line 7919: Request disabling All Configured TGPS, Release in progress
Line 7943: Request disabling All Configured TGPS 
Line 7943: Request disabling All Configured TGPS 
Line 8036: rlStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8036: rlStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8080: Fingers already Running Rl %d Fingerstr %d
Line 8080: Fingers already Running Rl %d Fingerstr %d
Line 8117: Fingers already Configured Rl %d Fingerstr %d
Line 8117: Fingers already Configured Rl %d Fingerstr %d
Line 8123: Fingers already Idle Rl %d Fingerstr %d
Line 8123: Fingers already Idle Rl %d Fingerstr %d
Line 8150: [BCH for RefCell]: MyIndex(0 : BCH, 1 : BCH_FOR_REFCELL) %d
Line 8150: [BCH for RefCell]: MyIndex(0 : BCH, 1 : BCH_FOR_REFCELL) %d
Line 8155: rakeStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8155: rakeStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8178: cctrchStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8178: cctrchStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8196: start: DlPhych start failed 
Line 8196: start: DlPhych start failed 
Line 8204: start: CcTrch start failed
Line 8204: start: CcTrch start failed
Line 8265: edpchStartCommand exec failed: Err Code %d AddErrCode %d
Line 8265: edpchStartCommand exec failed: Err Code %d AddErrCode %d
Line 8288: PhyChNr=%d: HsupaDlPhychStartCmd exec failed: ErrCode %d AddErrCode %d
Line 8288: PhyChNr=%d: HsupaDlPhychStartCmd exec failed: ErrCode %d AddErrCode %d
Line 8309: PhyChNr=%d: HsupaDlPhychStartCmd exec failed: ErrCode %d AddErrCode %d
Line 8309: PhyChNr=%d: HsupaDlPhychStartCmd exec failed: ErrCode %d AddErrCode %d
Line 8353: rlStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8353: rlStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8367: Allocate Rake finger Success
Line 8367: Allocate Rake finger Success
Line 8421: Map failed because (RlNr, UARFCN, PSC)=(%d, %d, %d)
Line 8421: Map failed because (RlNr, UARFCN, PSC)=(%d, %d, %d)
Line 8427: mapped RL %d to PSC %d
Line 8427: mapped RL %d to PSC %d
Line 8452: Unmap failed because (RlNr, UARFCN, PSC)=(%d, %d, %d) not found in MappingDatabase. Check if already unmapped
Line 8452: Unmap failed because (RlNr, UARFCN, PSC)=(%d, %d, %d) not found in MappingDatabase. Check if already unmapped
Line 8458: Unmap successful for (RlNr, UARFCN, PSC)=(%d, %d, %d) from MappingDatabase
Line 8458: Unmap successful for (RlNr, UARFCN, PSC)=(%d, %d, %d) from MappingDatabase
Line 8464: PSC seek failed (RlNr, UARFCN, PSC)=(%d, %d, %d) not found in MappingDatabase. Check if already unmapped
Line 8464: PSC seek failed (RlNr, UARFCN, PSC)=(%d, %d, %d) not found in MappingDatabase. Check if already unmapped
Line 8488: uphy_CMappingDatabase_mapC
Line 8488: uphy_CMappingDatabase_mapC
Line 8493: Map TrCH ID to MappingDatabase: isRelease=%d, trChNr=%d, urrcTrchId=%d, uhalTrchId=%d
Line 8493: Map TrCH ID to MappingDatabase: isRelease=%d, trChNr=%d, urrcTrchId=%d, uhalTrchId=%d
Line 8502: uphy_CMappingDatabase_unmapE
Line 8502: uphy_CMappingDatabase_unmapE
Line 8507: Unmap TrCH ID to MappingDatabase: isRelease=%d, trChNr=%d, urrcTrchId=%d, uhalTrchId=%d
Line 8507: Unmap TrCH ID to MappingDatabase: isRelease=%d, trChNr=%d, urrcTrchId=%d, uhalTrchId=%d
Line 8521: ####Error: Map UlTrChMappingDatabase: urrcTrchId %d, uhalTrchId %d
Line 8521: ####Error: Map UlTrChMappingDatabase: urrcTrchId %d, uhalTrchId %d
Line 8527: Map UlTrChMappingDatabase: urrcTrchId %d, uhalTrchId %d
Line 8527: Map UlTrChMappingDatabase: urrcTrchId %d, uhalTrchId %d
Line 8536: ####Error:Unmap UlTrChMappingDatabase: , uhalTrchId %d
Line 8536: ####Error:Unmap UlTrChMappingDatabase: , uhalTrchId %d
Line 8542: Unmap UlTrChMappingDatabase: , uhalTrchId %d
Line 8542: Unmap UlTrChMappingDatabase: , uhalTrchId %d
Line 8588: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - CONFIG_DONE_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 8588: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - CONFIG_DONE_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 8597: configDoneEntry: transceiverId is %d, myIndex is %d
Line 8597: configDoneEntry: transceiverId is %d, myIndex is %d
Line 8601: configDoneEntry: skip  uphy_CConfigurationVerifier_LogicalConfigurationModification
Line 8601: configDoneEntry: skip  uphy_CConfigurationVerifier_LogicalConfigurationModification
Line 8613: LogicalConfigurationModification
Line 8613: LogicalConfigurationModification
Line 8638: configDoneEntry: transceiverId is %d, myIndex is %d, isBchConfigSfnRead is %d 
Line 8638: configDoneEntry: transceiverId is %d, myIndex is %d, isBchConfigSfnRead is %d 
Line 8658: DC-HSDPA : endecoding is delayed by 2 slots for secondary carrier
Line 8658: DC-HSDPA : endecoding is delayed by 2 slots for secondary carrier
Line 8670: Hsdsch enabling event sended at CFN %d
Line 8670: Hsdsch enabling event sended at CFN %d
Line 8675: BCH and NbrRl is configured => No need to be matched with TTI boundary
Line 8675: BCH and NbrRl is configured => No need to be matched with TTI boundary
Line 8709: BCH index %d is being configured, cg=%d
Line 8709: BCH index %d is being configured, cg=%d
Line 8722: DCH is configured => No need to be matched with TTI boundary
Line 8722: DCH is configured => No need to be matched with TTI boundary
Line 8726: BCH is configured => No need to be matched with TTI boundary
Line 8726: BCH is configured => No need to be matched with TTI boundary
Line 8737: Move to enDecoding immediately for FACH for CTCH
Line 8737: Move to enDecoding immediately for FACH for CTCH
Line 8747: BCH and CGI Mode Configured, enDecodingEnabled_processEventFn will be executed
Line 8747: BCH and CGI Mode Configured, enDecodingEnabled_processEventFn will be executed
Line 8779: Invalid maxTTI when trying to enable cctrch
Line 8779: Invalid maxTTI when trying to enable cctrch
Line 8831: [3C-HSDPA] ENDECODING_ENABLED_ENTRY,  %dst secondary carrier released, skipEndecoding=%d
Line 8831: [3C-HSDPA] ENDECODING_ENABLED_ENTRY,  %dst secondary carrier released, skipEndecoding=%d
Line 8836: [3C-HSDPA] ENDECODING_ENABLED_ENTRY,  %dst secondary carrier configured, skipEndecoding=%d
Line 8836: [3C-HSDPA] ENDECODING_ENABLED_ENTRY,  %dst secondary carrier configured, skipEndecoding=%d
Line 8849: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - ENDECODING_ENABLED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 8849: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - ENDECODING_ENABLED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 8858: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - ENDECODING_ENABLED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 8858: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - ENDECODING_ENABLED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 8887: DLA: enDecodingEnabledEntry: rlStr=0x%x nRl=%d
Line 8887: DLA: enDecodingEnabledEntry: rlStr=0x%x nRl=%d
Line 8908: enDecodingEnabledEntry: for Nbr BCH
Line 8908: enDecodingEnabledEntry: for Nbr BCH
Line 8923: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - ENDECODING_ENABLED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 8923: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - ENDECODING_ENABLED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 8956: DLA: enDecodingEnabledEntry: rlStr=0x%x nRl=%d
Line 8956: DLA: enDecodingEnabledEntry: rlStr=0x%x nRl=%d
Line 8977: enDecodingEnabledEntry: for Nbr BCH
Line 8977: enDecodingEnabledEntry: for Nbr BCH
Line 9039: Invalid maxTTI when trying to enable cctrch
Line 9039: Invalid maxTTI when trying to enable cctrch
Line 9073: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DS_SUSPEND_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 9073: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DS_SUSPEND_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 9101: rlInfoCmd exec failed: Err Code %d Add Err Code %d
Line 9101: rlInfoCmd exec failed: Err Code %d Add Err Code %d
Line 9119: No pause done for DBCH
Line 9119: No pause done for DBCH
Line 9194: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DS_RECONF_REQ_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 9194: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DS_RECONF_REQ_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 9272: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_release,  st secondary carrier IsDlSecondaryCellPresent is set as FALSE
Line 9272: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_release,  st secondary carrier IsDlSecondaryCellPresent is set as FALSE
Line 9278: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_release,  2nd secondary carrier IsDlSecondaryCellPresent is set as FALSE
Line 9278: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_release,  2nd secondary carrier IsDlSecondaryCellPresent is set as FALSE
Line 9281: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_release,  Release Msg is saved
Line 9281: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_release,  Release Msg is saved
Line 9336: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_config,  Config Msg is saved
Line 9336: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_config,  Config Msg is saved
Line 9488: [DC/3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) Action function: releaseUpdateVerifierAndUnlock,  release done
Line 9488: [DC/3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) Action function: releaseUpdateVerifierAndUnlock,  release done
Line 9586: send
Line 9586: send
Line 9592: controllerReleasedTransitionMsg is NULL
Line 9592: controllerReleasedTransitionMsg is NULL
Line 9624: [DC/3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) Action function: releaseUpdateVerifierAndUnlock,  release msg sent and deallocated
Line 9624: [DC/3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) Action function: releaseUpdateVerifierAndUnlock,  release msg sent and deallocated
Line 9653: clean rlNr=%d
Line 9653: clean rlNr=%d
Line 9660: RlReleaseCmd failure: errCode=%d, addErrCode=%d
Line 9660: RlReleaseCmd failure: errCode=%d, addErrCode=%d
Line 9683: clean phyChNr=%d
Line 9683: clean phyChNr=%d
Line 9690: PhyChReleaseCmd failure: errCode=%d, addErrCode=%d
Line 9690: PhyChReleaseCmd failure: errCode=%d, addErrCode=%d
Line 9806: send
Line 9806: send
Line 9811: controllerReleasedTransitionMsg is NULL
Line 9811: controllerReleasedTransitionMsg is NULL
Line 9826: send
Line 9826: send
Line 9831: controllerReleasedTransitionMsg is NULL
Line 9831: controllerReleasedTransitionMsg is NULL
Line 9878: [3C-HSDPA] (enDecodingEnabled_processEventFn) Exit function: enDecodingEnabledExit,  Nothing done in this function
Line 9878: [3C-HSDPA] (enDecodingEnabled_processEventFn) Exit function: enDecodingEnabledExit,  Nothing done in this function
Line 9933: enableEnDecodingTransition : event == NULL
Line 9933: enableEnDecodingTransition : event == NULL
Line 9944: enableEnDecodingTransition : BCH configuration
Line 9944: enableEnDecodingTransition : BCH configuration
Line 9962: enableEnDecodingTransition: enableEnDecoding is called directly after configDone state, transceiverId is %d
Line 9962: enableEnDecodingTransition: enableEnDecoding is called directly after configDone state, transceiverId is %d
Line 10015: Corrupt Hal: nPhyCh=0
Line 10015: Corrupt Hal: nPhyCh=0
Line 10025: Neighbor BCH CFG: phyChStr=0x%x, rlStr=0x%x. timingReset is not needed for neighbor.
Line 10025: Neighbor BCH CFG: phyChStr=0x%x, rlStr=0x%x. timingReset is not needed for neighbor.
Line 10030: Corrupt Hal: nRl=0
Line 10030: Corrupt Hal: nRl=0
Line 10039: uhal Cmd exec - UhalRlInfoCommand
Line 10039: uhal Cmd exec - UhalRlInfoCommand
Line 10050: RlTimingReset gotRefRl=FALSE
Line 10050: RlTimingReset gotRefRl=FALSE
Line 10069: uhal Cmd exec - RlTimingReset gotRefRl=%d refRl=%d
Line 10069: uhal Cmd exec - RlTimingReset gotRefRl=%d refRl=%d
Line 10146: refRlCellInfo is NULL
Line 10146: refRlCellInfo is NULL
Line 10199: [BCH for RefCell]: MyIndex(0 : BCH, 1 : BCH_FOR_REFCELL) %d
Line 10199: [BCH for RefCell]: MyIndex(0 : BCH, 1 : BCH_FOR_REFCELL) %d
Line 10218: Release RakePhyCh - uhal_Cmd_exec
Line 10218: Release RakePhyCh - uhal_Cmd_exec
Line 10245: ResourcesConfigurationController: EHalDlRlReleaseCmd exec failed. rlNr=%d, phyChStr=%d, errCode=%d, addErrCode=%d
Line 10245: ResourcesConfigurationController: EHalDlRlReleaseCmd exec failed. rlNr=%d, phyChStr=%d, errCode=%d, addErrCode=%d
Line 10252: ResourcesConfigurationController: SFN reset due to RlRelease. Be careful of SFN reset. rlNr=%d. transceiverId=%d
Line 10252: ResourcesConfigurationController: SFN reset due to RlRelease. Be careful of SFN reset. rlNr=%d. transceiverId=%d
Line 10270: Neigbour RL released =%d
Line 10270: Neigbour RL released =%d
Line 10302: AFC disable successfully isHHOTakingPlace %d
Line 10302: AFC disable successfully isHHOTakingPlace %d
Line 10308: AFC disable failed
Line 10308: AFC disable failed
Line 10340: Release Cctrch - uhal_Cmd_exec
Line 10340: Release Cctrch - uhal_Cmd_exec
Line 10409: Release RakePhyCh - uhal_Cmd_exec
Line 10409: Release RakePhyCh - uhal_Cmd_exec
Line 10426: Release RakePhyCh - uhal_Cmd_exec
Line 10426: Release RakePhyCh - uhal_Cmd_exec
Line 10448: rlPhyCh release failed
Line 10448: rlPhyCh release failed
Line 10462: Release TrCh - uhal_Cmd_exec
Line 10462: Release TrCh - uhal_Cmd_exec
Line 10479: Release Cctrch - uhal_Cmd_exec
Line 10479: Release Cctrch - uhal_Cmd_exec
Line 10507: dlUarfcn timeout was not started
Line 10507: dlUarfcn timeout was not started
Line 10537: dl Sc Uarfcn timeout was not started
Line 10537: dl Sc Uarfcn timeout was not started
Line 10565: dlUarfcn timeout was not started
Line 10565: dlUarfcn timeout was not started
Line 10604: cellTracking timeout was not started
Line 10604: cellTracking timeout was not started
Line 10631: locking timeout was not started
Line 10631: locking timeout was not started
Line 10660: locking timeout was not started
Line 10660: locking timeout was not started
Line 10671: [3C-HSDPA] (tryToLockConfigurationForReleaseEventFn) Exit function: tryToLockConfigurationForReleaseExit,  Nothing done in terms of 3C-HSDPA
Line 10671: [3C-HSDPA] (tryToLockConfigurationForReleaseEventFn) Exit function: tryToLockConfigurationForReleaseExit,  Nothing done in terms of 3C-HSDPA
Line 10785: launchSendEnableEndecodingEvt: currentRsnSubmit: %d, deadlineRsn: %d, timestampRsn: %d, maxTtiInSlots %d
Line 10785: launchSendEnableEndecodingEvt: currentRsnSubmit: %d, deadlineRsn: %d, timestampRsn: %d, maxTtiInSlots %d
Line 10841: sendEnableEndecodingEvtSTF: currentRsn: %d, deadlineRsn: %d, timestampRsn: %d, Rsn Diff: %d
Line 10841: sendEnableEndecodingEvtSTF: currentRsn: %d, deadlineRsn: %d, timestampRsn: %d, Rsn Diff: %d
Line 10883: event->msg==0
Line 10883: event->msg==0
Line 11090: Timing Indication Controller Index %d in Abnormal State %d
Line 11090: Timing Indication Controller Index %d in Abnormal State %d
Line 11171: DSDS: RF released not required HHO taking place DCH 
Line 11171: DSDS: RF released not required HHO taking place DCH 
Line 11185: DSDS: Unable to send RF request message to DSLRC
Line 11185: DSDS: Unable to send RF request message to DSLRC
Line 11198: DSDS: sendRfRelease sent to DSLRC interface with %d
Line 11198: DSDS: sendRfRelease sent to DSLRC interface with %d
Line 11217: DSDS: Unable to send RF request message to DSLRC
Line 11217: DSDS: Unable to send RF request message to DSLRC
Line 11221: DSDS: sendRfUsePauseDone sent to DSLRC interface with %d
Line 11221: DSDS: sendRfUsePauseDone sent to DSLRC interface with %d
Line 11229: 3G3G DSDS: Stop DLCcTrCh since pause received from other 3G client
Line 11229: 3G3G DSDS: Stop DLCcTrCh since pause received from other 3G client
Line 11232: 3G+3G DSDS: No CcTrCh associated with Transceiver %d
Line 11232: 3G+3G DSDS: No CcTrCh associated with Transceiver %d
Line 11242: Stop CcTrCh - uhal_Cmd_exec
Line 11242: Stop CcTrCh - uhal_Cmd_exec
Line 11247: DSDS: Stop DLCcTrCh since pause received from DSLRC
Line 11247: DSDS: Stop DLCcTrCh since pause received from DSLRC
Line 11271: 3G3G DSDS: pause DlPhych since pause received from other 3G client
Line 11271: 3G3G DSDS: pause DlPhych since pause received from other 3G client
Line 11277: 3G3G DSDS pauseDlPhych: PhyCH release: phych_nr = %d
Line 11277: 3G3G DSDS pauseDlPhych: PhyCH release: phych_nr = %d
Line 11284: Release RakePhyCh - uhal_Cmd_exec
Line 11284: Release RakePhyCh - uhal_Cmd_exec
Line 11299: Release AICH RakePhyCh
Line 11299: Release AICH RakePhyCh
Line 11303: Release AICH RakePhyCh - uhal_Cmd_exec
Line 11303: Release AICH RakePhyCh - uhal_Cmd_exec
Line 11320: 3G3G DSDS: startCctrch for DS reconfig
Line 11320: 3G3G DSDS: startCctrch for DS reconfig
Line 11324: 3G+3G DSDS: No CcTrCh associated with Transceiver %d
Line 11324: 3G+3G DSDS: No CcTrCh associated with Transceiver %d
Line 11340: 3G3G DSDS startCctrch: cctrchNr = %d
Line 11340: 3G3G DSDS startCctrch: cctrchNr = %d
Line 11344: cctrchStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 11344: cctrchStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 11356: 3G3G DSDS: CcTrch %d is not in proper state %d
Line 11356: 3G3G DSDS: CcTrch %d is not in proper state %d
Line 11370: 3G3G DSDS: startDlPhych in DS reconfig
Line 11370: 3G3G DSDS: startDlPhych in DS reconfig
Line 11374: 3G3G DSDS: startDlPhych, AICH will be started later for RACH
Line 11374: 3G3G DSDS: startDlPhych, AICH will be started later for RACH
Line 11393: 3G3G DSDS startDlPhych: phych_nr = %d
Line 11393: 3G3G DSDS startDlPhych: phych_nr = %d
Line 11405: 3G3G DSDS startDlPhych MyIndex(0 : BCH,  : BCH_FOR_REFCELL) %d
Line 11405: 3G3G DSDS startDlPhych MyIndex(0 : BCH,  : BCH_FOR_REFCELL) %d
Line 11410: rakeStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 11410: rakeStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 11423: 3G3G DSDS: DlPhych %d is not in proper state %d
Line 11423: 3G3G DSDS: DlPhych %d is not in proper state %d
Line 11497: mapChannelInfo : This is an error case
Line 11497: mapChannelInfo : This is an error case
Line 11543: mapChannelInfoToController : This is an error case
Line 11543: mapChannelInfoToController : This is an error case
Line 11576: DR-DSDS: uphy_CResourcesConfigurationController_updateDRDB Unable to send UpdateDrDb message to DSL1RC
Line 11576: DR-DSDS: uphy_CResourcesConfigurationController_updateDRDB Unable to send UpdateDrDb message to DSL1RC
Line 11580: DR-DSDS: uphy_CResourcesConfigurationController_updateDRDB: isDRImpossible %d transceiverId %d
Line 11580: DR-DSDS: uphy_CResourcesConfigurationController_updateDRDB: isDRImpossible %d transceiverId %d
Line 11598: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 11598: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 11608: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 11608: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 11613: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 11613: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 11620: stopRfIntAndClearUarfcnCmd: sendResponseToUphyToken did not get time to run, so clear it
Line 11620: stopRfIntAndClearUarfcnCmd: sendResponseToUphyToken did not get time to run, so clear it
Line 11657: [3C-HSDPA] (init_processEventFn) Entry function: st secondary info copied from previous msg to new msg
Line 11657: [3C-HSDPA] (init_processEventFn) Entry function: st secondary info copied from previous msg to new msg
Line 11682: [3C-HSDPA] (init_processEventFn) Entry function: 2nd secondary info copied from previous msg to new msg
Line 11682: [3C-HSDPA] (init_processEventFn) Entry function: 2nd secondary info copied from previous msg to new msg
Line 11686: [3C-HSDPA] (init_processEventFn) Entry function:No info copy need from previous msg to new msg
Line 11686: [3C-HSDPA] (init_processEventFn) Entry function:No info copy need from previous msg to new msg
Line 11706: uphy_CResourcesConfigurationController_updateDrImpBitMask  transceiverId = %d PrevStatus = %d, CurrentStatus = %d, bitpos = %d bitmask = %d bitStatus = %d
Line 11706: uphy_CResourcesConfigurationController_updateDrImpBitMask  transceiverId = %d PrevStatus = %d, CurrentStatus = %d, bitpos = %d bitmask = %d bitStatus = %d
Line 11730: uphy_CResourcesConfigurationController_sendDirectSearcherRequest: rValue %d transceiverId %d
Line 11730: uphy_CResourcesConfigurationController_sendDirectSearcherRequest: rValue %d transceiverId %d
Line 11744: [DR-DSDS]  Sending Searcher Use Release done  to DR mngr Interface transceiverId %d
Line 11744: [DR-DSDS]  Sending Searcher Use Release done  to DR mngr Interface transceiverId %d
Line 11757:   [DR-DSDS]- Failed to send RF Request
Line 11757:   [DR-DSDS]- Failed to send RF Request
Line 11793: DR-DSDS: uphy_CResourcesConfigurationController_initDrImpBitMask for transceived %d
Line 11793: DR-DSDS: uphy_CResourcesConfigurationController_initDrImpBitMask for transceived %d
