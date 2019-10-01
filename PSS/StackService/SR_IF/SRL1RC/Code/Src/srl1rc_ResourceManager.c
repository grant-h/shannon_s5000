Line 321: *****%s: Invalid Event (%d) received in state (%s) from ClientId (%d), RAT(%d)*****
Line 330:  %s: - NULL timeKeeper object
Line 337: *****: srl1rc_rmProcess: EXECUTING STATE(%s) EVENT(%s) ClientId (%d) RAT(%d) currentTime (%u) isPsPsEnabled(%u)*****
Line 347: *****: srl1rc_rmProcess: EXECUTING STATE(%s) EVENT(%s) ClientId (%d) RAT(%d) currentTime (%u) isPsPsEnabled(%u)*****
Line 359:  %s: - NULL clientDBobject
Line 464:  %s: Invalid State(%s) event(%s) combination
Line 506:  %s: this pointer is NULL
Line 541:  %s: Scheduled event conflict found between clientId's [%d] and [%d]
Line 568:  %s: this pointer is NULL
Line 573:  %s: Invalid client Id %u
Line 579:  %s: str is NULL %p
Line 595:  %s: - conflictArray is initialised, Client [%u], noOfConflicts [%u]
Line 607:  %s: - client [%u] added in conflict array, No of Elements[%u]
Line 612:  %s: - idx[%u]
Line 614:  %s: - No. of Elements in Conflict Array [%u]
Line 638: %s: - this pointer is NULL
Line 644: %s: - resource request  is NULL
Line 652: %s: -Invalid client ID %d
Line 660: %s: -time keeper obj is NULL
Line 668: %s: -clientDB obj is NULL
Line 674:  %s: Received Resource request with invalid request reason %s
Line 681:  %s: Number of scheduled event received %d
Line 711:  %s: Requesting client added to clientEventInfoArr for checking conflict, Req Reason[%s], minResourceUseTime[%u]
Line 716:  %s: Number of elements in Conflict Arr[%u]
Line 724:  Scheduled event within[%u]ms time window. Time Diff[%u] 
Line 731:  %s: client %u, can not be added to autoPauseClintId array, request reason %u, event start time %u, current time %u
Line 737:  %s: client Id %u added to autoPauseCID array, request reason %u, event start time %u, current time %u
Line 742:  %s: Number eligible auto Pause clients %u
Line 747:  %s: No of conflict found[%u], No of eligibleAutoPauseClients[%u], No of Sch Events [%u], retVal[%u]
Line 753:  %s: Req Reason(%u), Conflict(%u) as Auto pause can not be triggered 
Line 773:  %s: Conflict found, as Early pause can not be triggered
Line 778:  %s: latestCid(%u), No conflict detected
Line 784:  %s: latestCid(%u), No conflict detected
Line 790:  %s: Conflict found, as Early pause can not be triggered
Line 796:  %s: Conflict found, as Early pause can not be triggered
Line 807: Early pause can be triggered, scheduledEventTime[%u] currentTime[%u]
Line 812:  %s: Invalid Latest ClientId[%u]
Line 819:  %s: No conflict found
Line 823:  %s: Is scheduled event conflict[%u]
Line 860: %s: client Id %u, nextEventStartTime %u, nextWakeupCause %u
Line 881: %s : this pointer is NULL
Line 887: %s : Invalid client Id %u
Line 896: %s : client Id %u found in array
Line 899: %s : retVal %u
Line 924:  %s: - this pointer is NULL
Line 929:  %s: - input pointer is NULL
Line 938:  %s: Client %u Registered, ret value (%u) 
Line 965:  %s: - this pointer is NULL
Line 970:  %s: - input pointer is NULL
Line 990:  %s: Client %u unregistered, ret value (%u) 
Line 1035:  %s: - this pointer is NULL
Line 1040:  %s: - input pointer is NULL
Line 1046:  %s: - Invalid Request Reason (%u)
Line 1058:  %s: - NULL client object
Line 1066:  %s: - NULL timeKeeper object
Line 1074:  %s: - resolver object is NULL
Line 1107:  TD-SCDMA is in cell search, so update time for SysInfo from GSM is not honoured
Line 1123: Ignore update time because next wakeup near to previous paging request.  nextEventStartTime(%u), pageDuration[%u] = %u
Line 1129:  Req Reason(%u) not paging, Update Time
Line 1132: Drx len Updated[%u]ms, SchEventReason[%u]
Line 1166:  %s: client %u added in auto pause array
Line 1175:  %s: Ignore autoPuase calculation as resolution was already done. 
Line 1178:  %s: scheduledEventTime %u, currentTime % u, activeTimeTrigger %u
Line 1183:  %s: scheduledEventTime %u, grantTime %u 
Line 1189:  %s: Invalid client ID %u 
Line 1211:  Condition not satisfied for AutoPause calculation
Line 1230:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 1245:  Auto pause passed = %u
Line 1249: Error: outgoingMsg is NULL: %u
Line 1254:  UpdateTime: Condition not satisfied for AutoPause:, requestReason %u, scheduledReason %u
Line 1259:  %s: state %s, clientObj state %u, ret %u, autoPauseClientId %u,  grantTime %u
Line 1265:  %s: state %s, clientObj state %u, ret %u 
Line 1301:  %s: In srl1rc_rmPSUpdateTime
Line 1304:  %s: - this pointer is NULL
Line 1309:  %s: - input pointer is NULL
Line 1316:  %s: - Invalid Request Reason (%d)
Line 1324:  %s: - NULL client object
Line 1330:  %s: - PS update time came from non LTE RAT: %d
Line 1338:  %s: - NULL timeKeeper object
Line 1353: clientRat(%d) otherClientRat(%d)
Line 1381:  %s Early pause for PSdata can be triggerred scheduledEventTime %u currentTime %u
Line 1389:  Auto pause passed for PSdata = %u
Line 1393: No outgoing Msg
Line 1398: requestReason(%d) scheduledReason(%d)
Line 1403: scheduledEventTime(%u) currentTime(%u) activeTimeTrigger(%u)
Line 1408: scheduledEventTime(%u) currentTime(%u)
Line 1413: scheduledEventTime(%u) grantTime(%u)
Line 1418: srl1rc state(%d) client state(%d) ret(%d)
Line 1535:  %s: - this pointer is NULL
Line 1540:  %s: - output pointer is NULL
Line 1545:  %s: - input pointer is NULL
Line 1558:  %s: - Invalid Request Reason (%u)
Line 1566:  %s: - clientDB object is NULL
Line 1579:  %s: - resolver object is NULL
Line 1610:  %s: - NULL timeKeeper object
Line 1638: %s: currentTime(%u), pageDuration[%u] = %u
Line 1643: %s: No back to back request, Do normal conflict resolution
Line 1648: %s: Ignore conflict resolution, as request is near to previous request by client
Line 1654: %s: Non paging request, Do normal conflict resolution
Line 1680:  %s: To give Reject due to remaining time for paging: (%u) < 5000  
Line 1693:  %s: grantRequest %u, isScheduledEventConflict %u 
Line 1716:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 1730:  Condition for auto pause calculation not satisfied
Line 1775:  %s Auto pause passed = %u
Line 1783:  %s Scheduled Conflict was already resolved, so Auto pause not passed
Line 1788:  %s Auto Pause condition for Signalling 3G3G is not passed
Line 1793:  %s: Auto pause not passed, not valid auto pause client Id %u
Line 1857:  %s [PCA]Rejected due to Req Paging (RAT=%u)-Schedule Paging (Reason=%u) conflict
Line 1943:  %s: - this pointer is NULL
Line 1948:  %s: - input pointer is NULL
Line 1959:  %s: -Invalid Client
Line 1965:  %s: - Client is Active
Line 1969:  %s: -client(%u) Unregistered
Line 2028:  %s: - this pointer is NULL
Line 2033:  %s: - output pointer is NULL
Line 2038:  %s: - input pointer is NULL
Line 2045:  %s: - Invalid Request Reason (%u)
Line 2064:  %s: - NULL client object
Line 2072:  %s: - NULL resolverObj object
Line 2080:  %s: - NULL timeKeeper object
Line 2111:  %s: - NULL active client object
Line 2136:  Reject given to active conflict because of scheduled event conflict
Line 2145:  Reject given to active SUB SIM because of transition to DR not available
Line 2155: REJECT in REL_PEND1, DR-DSDS Available because NbrBCH cannot be supported on SUB SIM
Line 2161: REJECT in REL_PEND1, DR-DSDS Available because only paging is allowed with signaling on other stack
Line 2166:  GRANT in REL_PEND1, DR-DSDS Available 
Line 2179:  %s RF hogging prevention (RelPend1 ResReq): ResReqRAT(%u), ActiveRATReason(%u), isScheduledEvent(%d)
Line 2194:  %s MBMS RF hogging prevention (RelPend1 ResReq by ILM): RAT(%d), reason(%u), randValue(%u)
Line 2198:  %s MBMS RF hogging prevention: No throttling for 2G cell search RAT(%d), reason(%u)
Line 2205:  %s (Skip RelPend1 ResReq by ILM: Random event) MBMS RF hogging prevention: RAT(%d), reason(%u)
Line 2235:  %s RF hogging prevention (RelPend1 ResReq by ILM): reason(%u), randValue(%u), TargetPercentage(%u)
Line 2242:  %s (Skip RelPend1 ResReq by ILM: Random event) RF hogging prevention: reason(%u)
Line 2247:  %s (Skip RelPend1 ResReq: Time cause) RF hogging prevention (Autopause): reason(%u), LastTime (%u), CurrentTime (%u)
Line 2268:  Reject due to no Autopause execution in REL_PEND1
Line 2280:  %s Reject due to too short RF request from release : reason(%u), LastReleaseTime (%u), CurrentTime (%u) rejectDueToProtection %u
Line 2289:  %s:[PSPS] Reject due to PS Protection. currentTime[%u], PSProtectionTime[%u]
Line 2304:  Reject given to active SUB SIM because of transition to DR not available
Line 2326:  %s: To give Reject due to remaining time for paging: (%u) < 5000  
Line 2332:  %s: grantToActiveClient %u, grantToNewClient %u, rejectToActiveClient %u, rejectDueToProtection %u
Line 2364:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 2380:  %s: Condition for Calculating Auto Pause not satisfied
Line 2413:  %s: Start EarlyPause Timer for WCDMA(%u)  
Line 2422:  %s: Start EarlyPause Timer for LTE(%u)  
Line 2427:  %s: Start EarlyPause Timer for GSM(%u)  
Line 2433:  %s: Start EarlyPause Timer for TD-SCDMA(%u)  
Line 2439:  %s: Start EarlyPause Timer for CDMA(%u)  
Line 2444:  %s: Start EarlyPause Timer for CID(%u) is (%u)  
Line 2449:  %s: Next Event start time(%u) is less than current time(%u)  
Line 2458:  %s: Condition for passing Auto Pause not satisfied. Req Res(%u), Sch Res(%u)
Line 2463:  %s: No auto pause info passed, autoPauseClintId %u
Line 2478:  %s: - Schedule conflict happens for Req Reason (%d) and Scheduled Reason (%d)
Line 2509: Assigning MAIN sim status as Active client is holding SUB Sim status
Line 2539: 2G Only Mode %d
Line 2543: G2X measurement request in Auto or HEDGE Mode %d
Line 2550:  %s:[PSPS] Pause Req sent to activeClientId[%u], resumeReadyPeriod[%u]
Line 2574: pauseDoneTimer set Failed.
Line 2579: %s: pauseDoneTimer Set. Expiry Time(%u), CurrentTime(%u)
Line 2591:  %s: - Schedule conflict happens for Req Reason (%d)
Line 2630:  %s: retryPeriod(%d), getGrantTime(%u), getGrantDuration(%u),CurrentTime(%u), GrantEndTime(%u), LatestGrantTime(%u)  
Line 2641:  %s: - Schedule conflict happens for paging and Rejected client (%d)
Line 2677:  %s: - NULL timeKeeper object
Line 2682:  %s: - this pointer is NULL
Line 2687:  %s: - input pointer is NULL
Line 2698:  %s: - NULL client object
Line 2703:  %s: - Pause done can come only from active clients clientId(%d) clientState(%d)
Line 2729:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 2733:  %s:[PSPS] Invalid OtherPsClientId[%d]
Line 2771:  %s: - this pointer is NULL
Line 2776:  %s: - input pointer is NULL
Line 2786:  %s: - NULL client object
Line 2791:  %s: - RES_REL received from Inactive client(%d)
Line 2799:  %s: - NULL timeKeeper object
Line 2805:  %s: - Release came from idle client, Ignore event
Line 2811:  %s: - setScheduledEvent Failed
Line 2836:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 2840:  %s:[PSPS] Invalid OtherPsClientId[%d]
Line 2944:  %s: - this pointer is NULL
Line 2949:  %s: - output pointer is NULL
Line 2954:  %s: - input pointer is NULL
Line 2985:  %s: - Invalid Request Reason (%d)
Line 3000:  %s: - NULL client object
Line 3005:  %s: - Request should come from the IDLE client clientId (%d)
Line 3013:  %s: - NULL timeKeeper object
Line 3021:  %s: - NULL Resolver object
Line 3025:  %s: autoPauseCID %d, clientId %d, Requesting client requestReason %d, paused client requestReason %d) 
Line 3029:  %s: - Scheduled Meas request received from 3G Client
Line 3034:  %s: - Reject for Unexpected Request received from 3G for Non-scheduled event in REL_PEND_1_PAUSE_DONE state
Line 3062:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 3078:  Condition for Calculating Auto Pause not satisfied.
Line 3089:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 3096:  %s Auto pause passed = %u
Line 3128: %s: pausedTimer set Failed.
Line 3133: %s: pausedTimer Set. Expiry Time(%u), CurrentTime(%u)
Line 3146:  %s: - Reject for %d(RAT %d) due to %d(RAT %d) 
Line 3169:  %s: - Resume sent to PausedClientId(%d). Scheduled Event from clientId(%d) delayed by [%u]
Line 3174:  %s: - outgoingMsg == NULL
Line 3179:  %s: - Wait for scheduled event request from ClientId %d
Line 3215:  %s: - this pointer is NULL
Line 3220:  %s: - input pointer is NULL
Line 3232:  %s: - NULL client object
Line 3238:  %s: - Release came from idle client, Ignore Event
Line 3244:  %s: - NULL timeKeeper object
Line 3287:  %s: - RES_REL should be received from paused client(%d) -> Go to RelPend1 state
Line 3297:  %s: - Invalid state: Client(%d) should be in Paused state -> Go to Idle state
Line 3306:  %s: - setScheduledEvent Failed
Line 3390:  %s: - this pointer is NULL
Line 3395:  %s: - input pointer is NULL
Line 3400:  %s: - output pointer is NULL
Line 3434:  %s: - NULL client object
Line 3439:  %s: - Resume ready should come from paused client clientId (%d)
Line 3452:  %s: - NULL timeKeeper object
Line 3460:  %s: - resolver object is NULL
Line 3483:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 3499:  Condition for Calculating Auto Pause not satisfied.
Line 3511:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 3525:  %s Auto pause passed = %u
Line 3570:  %s: - this pointer is NULL
Line 3575:  %s: - input pointer is NULL
Line 3586:  %s: -Invalid Client
Line 3592:  %s: - Client is Active/Paused
Line 3626:  %s: -client(%d) Unregistered
Line 3673:  %s: - this pointer is NULL
Line 3678:  %s: - input pointer is NULL
Line 3687:  %s: -Invalid Client
Line 3693:  %s: - Client is Active
Line 3696:  %s: -client(%d) Unregistered
Line 3725:  %s: - this pointer is NULL
Line 3730:  %s: - output pointer is NULL
Line 3735:  %s: - input pointer is NULL
Line 3749:  %s: - Invalid Client (%d)
Line 3798:  %s: - this pointer is NULL
Line 3803:  %s: - input pointer is NULL
Line 3808:  %s: - outgoingMsg pointer is NULL
Line 3813:  %s: - outgoingMsg pointer is (%x)
Line 3821:  %s: - Invalid clientId(%d)
Line 3853:  %s: - NULL timeKeeper object
Line 3861:  %s: - resolver object is NULL
Line 3864: Time taken to pause  = (%u) by RAT (%u)
Line 3889:  %s: clientId[%u] added to eligibleAutoPauseClients, noOfElements[%u]
Line 3907:  %s: - Process outgoingMsg
Line 3944:  %s Auto pause passed = %u
Line 3952:  %s Auto Pause condition for Signalling 3G3G is not passed
Line 3957:  %s: No auto pause info passed, autoPauseClintId %u
Line 3977: %s: pausedTimer set Failed.
Line 3982: %s: pausedTimer Set. Expiry Time(%u), CurrentTime(%u)
Line 3994:  %s: pauseDoneTimer Stopped
Line 4076:  %s: - this pointer is NULL
Line 4081:  %s: - input pointer is NULL
Line 4090:  %s: - Invalid clientId(%d)
Line 4120:  %s: - NULL client object
Line 4128:  %s: - NULL timeKeeper object
Line 4137:  %s: - resolver object is NULL
Line 4143:  %s: - Release came from idle client, Ignore Event
Line 4154:  %s: - RES_REL received from waiting client(%d) -> Go to srl1rc_rmFSMState_AwaitingPauseDone state
Line 4159:  %s: - setScheduledEvent Failed
Line 4189:  %s: clientId[%u] added to eligibleAutoPauseClients, noOfElements[%u]
Line 4242:  %s Auto pause passed = %u
Line 4250:  %s Auto Pause condition for Signalling 3G3G is not passed
Line 4255:  %s: Auto pause not passed, not valid auto pause client Id[%u]
Line 4266:  %s: - setScheduledEvent Failed
Line 4277:  %s: pauseDoneTimer Stopped
Line 4326:  %s: - this pointer is NULL
Line 4331:  %s: - input pointer is NULL
Line 4340:  %s: -Invalid Client
Line 4346:  %s: - Client is Active/Paused. First Pause_done or release should have been sent from the Active client
Line 4349:  %s: -client(%d) Unregistered
Line 4375:  %s: - this pointer is NULL
Line 4380:  %s: - output pointer is NULL
Line 4385:  %s: - input pointer is NULL
Line 4398:  %s: - Invalid Client (%d)
Line 4407:  %s: - Registered Client resource request in AWAITING_PAUSE_DONE state, retry after %d ms
Line 4414:  %s: - Active Client resource request in AWAITING_PAUSE_DONE state instead of Pause_done/Release. Request rejected
Line 4442:  %s: - this pointer is NULL
Line 4447:  %s: - input pointer is NULL
Line 4455:  %s: - Invalid clientId(%d)
Line 4463:  %s: - Release came from idle client, Ignore Event
Line 4468:  %s: - RES_REL can come only from active clients, Invalid event Multiple RES_REL from client clientId(%d) clientState(%d) Ignore event
Line 4475:  %s: - NULL timeKeeper object
Line 4483:  %s: - setScheduledEvent Failed
Line 4497:  %s: pauseDoneTimer Stopped
Line 4537:  %s: - this pointer is NULL
Line 4542:  %s: - input pointer is NULL
Line 4547:  %s: - outgoingMsg pointer is NULL
Line 4552:  %s: - outgoingMsg pointer is (%x)
Line 4560:  %s: - Invalid clientId(%d)
Line 4566:  %s: - Pause done can come only from active clients, Invalid event from client clientId(%d) clientState(%d)
Line 4573:  %s: - NULL timeKeeper object
Line 4580:  %s: - resolver object is NULL
Line 4619:  %s: pauseDoneTimer Stopped
Line 4627:  %s: - Process outgoingMsg
Line 4660:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 4674:  Condition for calculating auto pause did not satisfied
Line 4684:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 4710:  %s Auto pause passed = %u
Line 4717:  %s not valid auto pause cid = %u
Line 4728:  %s: pauseDoneTimer Stopped
Line 4820:  %s: - this pointer is NULL
Line 4825:  %s: - input pointer is NULL
Line 4834:  %s: -Invalid Client
Line 4840:  %s: - Client is Active
Line 4843:  %s: -client(%d) Unregistered
Line 4901:  %s: - this pointer is NULL
Line 4906:  %s: - output pointer is NULL
Line 4911:  %s: - input pointer is NULL
Line 4918:  %s: - Invalid Request Reason (%d)
Line 4929:  %s: - Invalid clientId(%d)
Line 4943:  %s: - NULL timeKeeper object
Line 4950: Invalid: Resource request came from paused client (%s)
Line 4995:  %s Request in REL_PEND_2 state when other client's signaling is paused. ResourceRequestRAT(%u),  ActiveRATReason(%u)
Line 5001:  %s 2G Measurement request in REL_PEND_2 state ResourceRequestRAT(%u),  ActiveRATReason(%u)
Line 5016:  %s MBMS RF hogging prevention (RelPend2 ResReq): RAT(%d), reason(%u), randValue(%u)
Line 5022:  %s (Skip RelPend2 ResReq) MBMS RF hogging prevention: RAT(%d) reason(%u)
Line 5055:  %s RF hogging prevention (RelPend2 ResReq): Target Percentage changed to %d intentionally for scch order missed issue
Line 5062:  %s RF hogging prevention (RelPend2 ResReq): reason(%u), randValue(%u), TargetPercentage(%u)
Line 5070:  %s (Skip RelPend2 ResReq) RF hogging prevention: reason(%u)
Line 5077: Reject due to RF hogging prevention in REL_PEND2. ReassignCount = %d
Line 5134:  Reject due to no Autopause execution in REL_PEND2
Line 5146:  %s Reject due to too short RF request from release : reason(%u), LastReleaseTime (%u), CurrentTime (%u) rejectDueToProtection %u
Line 5156:  %s: grantToActiveClient[%u], grantToNewClient[%u], rejectDueToProtection[%u]
Line 5176:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 5190: Condition for calculation auto pause does not satisfied
Line 5207:  %s: Start EarlyPause Timer for WCDMA(%u)  
Line 5212:  %s: Start EarlyPause Timer for LTE(%u)  
Line 5217:  %s: Start EarlyPause Timer for GSM(%u)  
Line 5223:  %s: Start EarlyPause Timer for TD-SCDMA(%u)  
Line 5229:  %s: Start EarlyPause Timer for CDMA(%u)  
Line 5234:  %s: Start EarlyPause Timer for CID(%u) is (%u)  
Line 5241:  %s: No auto pause info passed, autoPauseClintId %u
Line 5271:  %s:[PSPS] PSPS Start Ind set to client[%u], resumeReadyPeriod[%u]
Line 5289:  %s:[PSPS] -Auto pause time[%u] passed to Client[%u] with ResumeReadyPeriod[%u]
Line 5293:  %s:[PSPS] -Auto pase time not passed, as request reason[%u] is of higher priority
Line 5298:  %s:[PSPS] -Time Diff not sufficient to trigger Auto Pause[%u]
Line 5380:  %s: retryPeriod(%d), getGrantTime(%u), getGrantDuration(%u),CurrentTime(%u), GrantEndTime(%u), LatestGrantTime(%u)  
Line 5390:  %s: - Schedule conflict happens for paging and Rejected client (%d)
Line 5430:  %s: - this pointer is NULL
Line 5435:  %s: - input pointer is NULL
Line 5440:  %s: - output pointer is NULL
Line 5445:  %s: - outgoingMsg pointer is NULL
Line 5464:  %s: - NULL client object
Line 5470:  %s: - NULL activeClientObj object
Line 5477:  %s: - NULL resolverObj object
Line 5484:  %s: - NULL timeKeeper object
Line 5490:  %s: - Resume ready should come from paused client clientId (%d)
Line 5501:  %s:[PSPS] ActiveConflictResolution[%u]
Line 5537:  %s:[PSPS] Sending Pause Request to Client[%u]. ResumeReadyPeriod[%u]
Line 5577:  %s: - NULL timeKeeper object
Line 5582:  %s: - this pointer is NULL
Line 5587:  %s: - input pointer is NULL
Line 5593:  %s: - outgoingMsg pointer is NULL
Line 5608:  %s: - Invalid paused client[%u]
Line 5614:  %s: - NULL client object
Line 5619:  %s: - Pause done can come only from active clients clientId(%d) clientState(%d)
Line 5656:  %s:[PSPS] -Resume sent to Client[%u]. resumeReadyPeriod[%u], Auto Pause Time[%u]
Line 5666:  %s:[PSPS] -Resume sent to Client[%u]. AutoPauseTimer not sent because paused client requestReason is of higherPriority
Line 5672:  %s:[PSPS] -Resume sent to Client[%u]. Time Diff not sufficient to trigger Auto Pause[%u]
Line 5688:  %s:[PSPS] -Sending PSPS stop Ind to Client[%u]
Line 5702:  %s: pausedTimer Stopped
Line 5774:  %s: - this pointer is NULL
Line 5779:  %s: - input pointer is NULL
Line 5787:  %s: - Invalid Request Reason (%d)
Line 5794:  %s: - Invalid clientId(%d)
Line 5827:  %s: - NULL timeKeeper object
Line 5835:  %s: - NULL resolverObj object
Line 5840:  %s: - NULL client object
Line 5846:  %s: - NULL outgoingMsg
Line 5852:  %s: - Release came from idle client, Ignore event
Line 5892:  %s GSM RF hogging prevention (ReleaseReq)(Allow 2G Paging) : GSM reason(%u), lastPagingGrantTimeInPauseDone(%u), currentTime(%u), nextEventStartTime(%u)
Line 5908:  %s MBMS RF hogging prevention (ReleaseReq): RAT(%d), reason(%u), randValue(%u)
Line 5913:  %s (Skip ReleaseReq: Random event) MBMS RF hogging prevention: RAT(%d), reason(%u)
Line 5938:  %s RF hogging prevention (ReleaseReq) : Target Percentage changed to %d intentionally for scch order missed issue
Line 5943:  %s RF hogging prevention (ReleaseReq) : reason(%u), randValue(%u), TargetPercentage(%u), Last2GRFPreventionTime(%u), nextEventStartTime(%u)
Line 5950:  %s (Skip ReleaseReq: Random event) RF hogging prevention (Autopause): reason(%u), LastTime (%u)
Line 5959:  %s (Skip ReleaseReq: Time cause) RF hogging prevention (Autopause): reason(%u), NextEventTime (%u), LastTime (%u)
Line 5971:  %s: - setScheduledEvent Failed
Line 6018:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 6034:  Condition for calculating autopause not satisfied
Line 6047:  %s: pausedClientId %d, targetClientId %d
Line 6048:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 6058:  %s: pausedClientId %d, targetClientId %d
Line 6065:  %s Auto pause passed = %u
Line 6074:  Autopause not triggered due to less early pause time margin in REL_PEND2: scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 6081:  Invalid auto pause client Id %u, auto pause can not be triggered
Line 6098:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 6115:  %s:[PSPS] Early pause can be triggered scheduledEventTime[%u] currentTime[%u] Diff between currentTime and scheduledEventTime = [%u]
Line 6118:  %s:[PSPS] Auto pause passed = %u
Line 6127: [PSPS] Autopause not triggered due to PausedClient RfUseReason(%d) priority is greater than Active Client's reason(%d)
Line 6133: [PSPS] Autopause not triggered due to less early pause time margin: scheduledEventTime[%u] currentTime[%u] Diff between currentTime and scheduledEventTime[%u]
Line 6151:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 6154:  %s: Resource release came from paused client, Paused Client Id[%d], client Id[%d]
Line 6165:  %s: pausedTimer Stopped
Line 6232:  %s: - this pointer is NULL
Line 6237:  %s: - output pointer is NULL
Line 6242:  %s: - input pointer is NULL
Line 6250:  %s: - NULL resolverObj object
Line 6257:  %s: - Invalid Request Reason (%d)
Line 6264:  %s: - Invalid clientId(%d)
Line 6275:  %s: - NULL timeKeeper object
Line 6297:  %s: - NULL otherDRClientObjt
Line 6321:  %s: Start EarlyPause Timer(%u)  
Line 6334:  %s: - otherDRClientObj == NULL
Line 6432:  %s: - this pointer is NULL
Line 6437:  %s: - input pointer is NULL
Line 6443:  %s: - Invalid Request Reason (%d)
Line 6450:  %s: - Invalid clientId(%d)
Line 6460:  %s: - NULL timeKeeper object
Line 6465:  %s: - NULL client object
Line 6471:  %s: - Release came from idle client, Ignore event
Line 6477:  %s: - setScheduledEvent Failed
Line 6503:  %s: - NULL otherDRClient object
Line 6532:  DR Resume sent to ClientId %d
Line 6536: Error: outgoingMsg is NULL: %u
Line 6554:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 6559:  Auto pause passed = %u
Line 6565:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 6576:  Auto pause passed = %u
Line 6580: Error: outgoingMsg is NULL: %u
Line 6586: srl1rc_rmREL_PEND_2_DRDSDS_ResourceRelease: Condition not satisfied for AutoPause:, requestReason %u, scheduledReason %u
Line 6591: srl1rc_rmREL_PEND_2_DRDSDS_ResourceRelease: TimeMargin not sufficient for sending earlyPauseTimer to Active Client
Line 6596:  %s: Next Event start time(%u) is less than current time(%u)  
Line 6703:  %s:[PSPS] - this pointer is NULL
Line 6708:  %s:[PSPS] - input pointer is NULL
Line 6717:  %s:[PSPS] -Invalid Client
Line 6723:  %s:[PSPS] - Client is Active
Line 6726:  %s:[PSPS] -client(%d) Unregistered
Line 6753:  %s:[PSPS] - this pointer is NULL
Line 6758:  %s:[PSPS] - output pointer is NULL
Line 6763:  %s:[PSPS] - input pointer is NULL
Line 6780:  %s:[PSPS] - Invalid Client (%d)
Line 6784:  %s:[PSPS] - Request is rejected as SRL1RC is waiting for PauseDone
Line 6820:  %s:[PSPS] - this pointer is NULL
Line 6825:  %s:[PSPS] - input pointer is NULL
Line 6830:  %s:[PSPS] - output pointer is NULL
Line 6845:  %s:[PSPS] - NULL client object
Line 6850:  %s:[PSPS] - Resume ready should come from paused client clientId (%d)
Line 6876:  %s:[PSPS] - this pointer is NULL
Line 6881:  %s:[PSPS] - input pointer is NULL
Line 6886:  %s:[PSPS] - outgoingMsg pointer is NULL
Line 6891:  %s:[PSPS] - outgoingMsg pointer is (%x)
Line 6900:  %s:[PSPS] - Invalid clientId(%d)
Line 6909:  %s:[PSPS] - Pause done can come only from active clients, Invalid event from client clientId(%d) clientState(%d)
Line 6917:  %s:[PSPS] - NULL timeKeeper object
Line 6954:  %s:[PSPS] Early pause can be triggered scheduledEventTime[%u] currentTime[%u]. Diff between currentTime and scheduledEventTime[%u], ResumeReadyPeriod[%u]
Line 6957:  %s:[PSPS] Auto pause passed = %u
Line 6966:  [PSPS] Autopause not triggered due to less early pause time margin: scheduledEventTime[%u] currentTime[%u]. Diff between currentTime and scheduledEventTime[%u]
Line 7024:  %s:[PSPS] - this pointer is NULL
Line 7029:  %s:[PSPS] - input pointer is NULL
Line 7034:  %s:[PSPS] - outgoingMsg pointer is NULL
Line 7043:  %s:[PSPS] - Invalid clientId(%d)
Line 7055:  %s:[PSPS] - NULL timeKeeper object
Line 7060:  %s:[PSPS] - NULL client object
Line 7066:  %s:[PSPS] - Release came from idle client, Ignore Event
Line 7080:  %s:[PSPS] - RES_REL received from paused client(%d) -> Go to srl1rc_rmFSMState_AwaitingPauseDone state
Line 7089:  %s:[PSPS] - Process outgoingMsg
Line 7119:  %s: [PSPS] Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 7123:  %s:[PSPS] Auto pause passed = %u
Line 7132:  [PSPS]Autopause not triggered due to less early pause time margin: scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 7200:  %s: - this pointer is NULL
Line 7205:  %s: - input pointer is NULL
Line 7215:  %s: -Invalid Client
Line 7221:  %s: - Client is Active/Paused
Line 7255:  %s: -client(%d) Unregistered
Line 7289:  %s: - this pointer is NULL
Line 7294:  %s: - output pointer is NULL
Line 7299:  %s: - input pointer is NULL
Line 7310:  %s: - Invalid Request Reason (%d)
Line 7325:  %s: - NULL client object
Line 7330:  %s: - Request should come from the IDLE client clientId (%d)
Line 7338:  %s: - NULL timeKeeper object
Line 7346:  %s: - NULL Resolver object
Line 7350:  %s: autoPauseCID %d, clientId %d, Requesting client requestReason %d, paused client requestReason %d) 
Line 7382:  %s: - Reject for %d(RAT %d) due to %d(RAT %d) 
Line 7423:  %s: - this pointer is NULL
Line 7428:  %s: - input pointer is NULL
Line 7441:  %s: - NULL timeKeeper object
Line 7446:  %s: - NULL client object
Line 7452:  %s: - Release came from idle client, Ignore Event
Line 7458:  %s: - setScheduledEvent Failed
Line 7469:  %s: - Invalid pausedClientId(%u) 
Line 7488: Scheduled event of CID[%u] is at time Diff of[%u], moving to RelPend1_PauseDone
Line 7516:  %s: - RES_REL should be received from paused client(%d) -> Go to RelPend1 state
Line 7578:  %s: - this pointer is NULL
Line 7583:  %s: - input pointer is NULL
Line 7588:  %s: - output pointer is NULL
Line 7622:  %s: - NULL client object
Line 7627:  %s: - Resume ready should come from paused client clientId (%d)
Line 7638:  %s: - NULL timeKeeper object
Line 7647:  %s: - resolver object is NULL
Line 7670:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 7686: Condition for calculating Auto pause not satisfied
Line 7698:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 7712:  %s Auto pause passed = %u
Line 7771:  SRL1RC_Dbg %s:
Line 7773:  %s: - this pointer is NULL
Line 7778:  %s: - output pointer is NULL
Line 7783:  %s: - input pointer is NULL
Line 7799:  %s: - Invalid Client (%d)
Line 7843:  %s: - this pointer is NULL
Line 7848:  %s: - input pointer is NULL
Line 7853:  %s: - outgoingMsg pointer is NULL
Line 7858:  %s: - outgoingMsg pointer is (%x)
Line 7867:  %s: - Invalid clientId(%d)
Line 7880:  %s: - NULL timeKeeper object
Line 7884: Time taken to pause  = (%u) by RAT (%u)
Line 7887:  %s: - Process outgoingMsg
Line 7985:  %s: - this pointer is NULL
Line 7990:  %s: - input pointer is NULL
Line 7999:  %s: - Invalid clientId(%d)
Line 8011:  %s: - NULL timeKeeper object
Line 8016:  %s: - NULL client object
Line 8022:  %s: - Release came from idle client, Ignore Event
Line 8032:  %s: - setScheduledEvent Failed
Line 8042:  %s: - RES_REL received from waiting client(%d) -> Go to srl1rc_rmFSMState_AwaitingPauseDone2 state
Line 8051:  %s: - RES_REL received from paused client(%d) -> Go to srl1rc_rmFSMState_PausePend state
Line 8061: pauseDoneTimer set Failed.
Line 8066: %s: pauseDoneTimer Set. Expiry Time(%u), CurrentTime(%u)
Line 8154:  %s: - this pointer is NULL
Line 8159:  %s: - input pointer is NULL
Line 8170:  %s: -Invalid Client
Line 8176:  %s: - Client is Active/Paused. First Pause_done or release should have been sent from the Active client
Line 8180:  %s: -client(%d) Unregistered
Line 8227:  %s: - this pointer is NULL
Line 8232:  %s: - output pointer is NULL
Line 8237:  %s: - input pointer is NULL
Line 8253:  %s: - Invalid Client (%d)
Line 8262:  %s: - Registered Client resource request in AWAITING_PAUSE_DONE state, retry after %d ms
Line 8269:  %s: - Active Client resource request in AWAITING_PAUSE_DONE state instead of Pause_done/Release. Request rejected
Line 8311:  %s: - this pointer is NULL
Line 8316:  %s: - input pointer is NULL
Line 8346:  %s: - Invalid clientId(%d), Paused clientId %u
Line 8360:  %s: - NULL client object
Line 8366:  %s: - Release came from idle client, Ignore event
Line 8374:  %s: - NULL timeKeeper object
Line 8382:  %s: - resolver object is NULL
Line 8390:  %s: - setScheduledEvent Failed
Line 8397:  %s: - RES_REL received from paused client(%d) -> Go to srl1rc_rmFSMState_AwaitingPauseDone state
Line 8446:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 8462:  Condition for calculating auto pause not satisfied
Line 8475:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 8485:  %s: pausedClientId %d, targetClientId %d
Line 8492:  %s Auto pause passed = %u
Line 8501:  Autopause not triggered due to less early pause time margin in REL_PEND2: scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 8508: %s:  Invalid auto pause client Id %u, auto pause can not be triggered
Line 8558:  %s: - this pointer is NULL
Line 8563:  %s: - input pointer is NULL
Line 8568:  %s: - outgoingMsg pointer is NULL
Line 8573:  %s: - outgoingMsg pointer is (%x)
Line 8583:  %s: - Invalid clientId(%d)
Line 8590:  %s: - Pause done can come only from active clients, Invalid event from client clientId(%d) clientState(%d)
Line 8598:  %s: - NULL timeKeeper object
Line 8606:  %s: - resolver object is NULL
Line 8671:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 8687:  Condition for calculating Auto pause 
Line 8697:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 8719:  %s Auto pause passed = %u
Line 8727:  %s not valid auto pause cid = %u
Line 8740:  %s: - Process outgoingMsg
Line 8774:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 8790:  Condition for calculating Auto pause not satisfied
Line 8800:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 8822:  %s Auto pause passed = %u
Line 8829:  %s not valid auto pause cid = %u
Line 8862:  %s: - this pointer is NULL
Line 8867:  %s: - input pointer is NULL
Line 8878:  %s: -Invalid Client
Line 8884:  %s: - Client is Active
Line 8888:  %s: -client(%d) Unregistered
Line 8939:  %s: - this pointer is NULL
Line 8944:  %s: - output pointer is NULL
Line 8949:  %s: - input pointer is NULL
Line 8957:  %s: - Invalid Request Reason (%d)
Line 8964:  %s: - Invalid clientId(%d)
Line 8980:  %s: - NULL timeKeeper object
Line 8999: Reject due to RF hogging prevention in REL_PEND3. ReassignCount = %d
Line 9006:  %s 2G Measurement request in REL_PEND_3 state ResourceRequestRAT(%u),  ActiveRATReason(%u)
Line 9010:  %s Request came from non active cell in Rel_Pend_3, RAT %u, Reason %u)
Line 9051:  %s: - this pointer is NULL
Line 9056:  %s: - input pointer is NULL
Line 9061:  %s: - output pointer is NULL
Line 9076:  %s: - NULL client object
Line 9081:  %s: - Resume ready should come from paused client clientId (%d)
Line 9125:  %s: - this pointer is NULL
Line 9130:  %s: - input pointer is NULL
Line 9138:  %s: - Invalid Request Reason (%d)
Line 9146:  %s: - Invalid clientId(%d)
Line 9154:  %s: - NULL client object
Line 9160:  %s: - NULL timeKeeper object
Line 9168:  %s: - resolver object is NULL
Line 9174:  %s: - Release came from idle client, Ignore event
Line 9208:  %s: - Resume ClientId is Invalid, ResCid[%u]
Line 9235: setScheduledEvent Failed
Line 9255:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 9271: Condition for calculating auto pause not satisfied
Line 9284:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 9294:  %s: pausedClientId %d, targetClientId %d
Line 9301:  %s Auto pause passed = %u
Line 9310:  Autopause not triggered due to less early pause time margin in REL_PEND2: scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 9317: %s:  Invalid auto pause client Id %u, auto pause can not be triggered
Line 9323:  %s: Resource release came from paused client, Paused Client Id %d
Line 9355:  %s: - this pointer is NULL
Line 9386:  %s: - this pointer is NULL
Line 9415:  %s: - this pointer is NULL
Line 9454:  %s: - this pointer is NULL
Line 9462:  %s: - NULL client object
Line 9470:  %s: - NULL timeKeeper object
Line 9475:  %s: - outgoingMsg pointer is NULL
Line 9479:  %s: - rsp pointer is NULL
Line 9490:  Mode is not 3G3G ignore further computation
Line 9501:  3G3G Other client PICH RSN not available. Possible Non-IDLE mode or otherClientPICHRSN is in past
Line 9526:  3G3G diffPICH1PCH2 %d is greater than CT hence FCFS Scheme of resolution is best in this case
Line 9554:  3G3G diffPICH1PCH2 %d is lesser than CT hence RoundRobin Scheme of resolution is best in this case
Line 9580:  %s: - this pointer is NULL
Line 9588:  %s: - resolver object is NULL
Line 9610:  %s: - externalUpdation %d lastExternalUpdation %d ret %d isForced%d
Line 9631:  %s: - this pointer is NULL
Line 9639:  %s: - NULL timeKeeper object
Line 9655:  %s: - NULL resourceMgrObj object
Line 9662:  %s: - NULL timeKeeper object
Line 9669: %s: PausedTimer Expired at currentTime = %u
Line 9680:  %s: - NULL resourceMgrObj object
Line 9687:  %s: - NULL timeKeeper object
Line 9694: %s: PauseDoneTimer Expired at currentTime = %u
Line 9708:  %s: - this pointer is NULL
Line 9713:  %s: - input pointer is NULL
Line 9718: %s: - Invalid BandInfo(%d)
Line 9723: %s: - Invalid Channel(%d)
Line 9731:  %s: - NULL clientDB object
Line 9737:  %s: - NULL client object
Line 9742:  %s: clientId(%d) isDRImpossible(%d) bandInfo(%d) channelConfigured(%d)
Line 9756:  %s: - this pointer is NULL
Line 9761:  %s: - input pointer is NULL
Line 9769:  %s: - NULL clientDB object
Line 9775:  %s: - NULL client object
Line 9780:  %s: clientId(%d) isDRImpossible(%d)
Line 9804:  %s: SRL1RC Resource Manager Initialization
Line 9984:  SRL1RC_Dbg %s: RAT(%u), delta(%u)
Line 10017:  SRL1RC_Dbg %s: RAT(%u), delta(%u)
Line 10030: 3G3G:  RSN is in Past currentRSN= %d RSN = %d
Line 10048: 3G3G:  RSN2 is earlier than RSN1 currentRSN= %d RSN1 = %d RSN2 = %d
Line 10053: 3G3G:  RSN1 is earlier than RSN2 currentRSN= %d RSN1 = %d RSN2 = %d
Line 10065: SRL1RC SignallingUsagePlot(%d) 
Line 10068: SRL1RC L1HighUsagePlot(%d) 
Line 10071: SRL1RC PagingUsagePlot(%d) 
Line 10074: SRL1RC SysInfoUsagePlot(%d) 
Line 10077: SRL1RC MeasurementUsagePlot(%d) 
Line 10080: SRL1RC CellSearchUsagePlot(%d) 
Line 10083: SRL1RC PSUsagePlot(%d) 
Line 10086: Default SRL1RC UsagePlot(%d) 
Line 10088: SRL1RC UsagePlot(%d) 
Line 10094:  SRL1RC_Dbg %s:
Line 10208: Logging Invalid Message Type
