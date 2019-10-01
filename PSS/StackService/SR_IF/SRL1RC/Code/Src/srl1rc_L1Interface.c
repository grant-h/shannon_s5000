Line 162: rfOccupiedbyGSM is %d
Line 166: rfOccupiedbyWCDMA is %d
Line 193: %s: SUCCESS - SRL1RC interface module initialized
Line 239: %s: FAIL - NULL Registration message received
Line 244: %s: FAIL - RAT (%d:%s) is not supported by SRL1RC 
Line 252: %s: FAIL - Registration request is coming from DSWCDMA before Deregistering the Other client
Line 257: %s: FAIL - Registration request is coming from BPLMN client before Deregistering the Other client
Line 276: %s: FAIL - RAT(%d) is already registered with SRL1RC by ClientId(%d)
Line 332: %s: SUCCESS - RAT(%d), ClientId(%d), State(%d)
Line 352: %s: FAIL - RAT(%d) ResourceManager failed to register ClientId(%d)
Line 361: DS_WCDMA Client Registration failed
Line 365: %s: FAIL - RAT(%d) Registration failed, Max clients registered
Line 368: %s: No of client registered %u
Line 396: %s: FAIL - NULL DeRegistration message received
Line 401: %s: FAIL - Deregistering Invalid ClientId(%d)
Line 409:  %s: - NULL timeKeeper object
Line 414: %s: FAIL - RAT(%d) Unregistered ClientId(%d), State(%d)
Line 436: %s: BackUp ClientId(%d), nextEventStartTime(%u), nextWakeupCause(%d)
Line 449: %s: BackUp Restored ClientId(%d), nextEventStartTime(%u), nextWakeupCause(%d)
Line 460:  %s: - Event Passed nextEventStartTime(%u) currentTime(%u)
Line 467: %s: Normal De_Register
Line 470: %s: SUCCESS - RAT(%d), ClientId(%d), State(%d), isDeregForBPLMN(%d)
Line 485: %s: FAIL - RAT(%d) ResourceManager failed to deregister ClientId(%d), State(%d)
Line 552: %s: FAIL - Resource request received with NULL output pointer
Line 569: %s: FAIL - Resource request received with NULL input pointer
Line 574: %s: FAIL - Resource request received with Invalid ClientId(%d)
Line 579: %s: FAIL - Resource request received with Invalid request reason(%d)
Line 584: %s: FAIL - RAT(%d) ResourceRequest received from Unregistered ClientId(%d), State(%d)
Line 611: Dereferenced NULL pointer : timeKeeperObj
Line 639: SRL1RC REQ - Reset Scheduled event Info
Line 678: SRL1RC REQ - SUCCESS - RAT(%d), RequestReason(%d), currentTime(%u) MinResourceUseTime(%u)
Line 734: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), clientId(%d), clientAITSkipped(%d)
Line 748: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherClientRequestReason(%d), simInfo(%d), isAITSetNeeded(%d) 
Line 756: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherClientRequestReason(%d), simInfo(%d), AutoPauseTimerValue(%u) 
Line 767: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherClientRequestReason(%d), simInfo(%d), No AutoPause Info 
Line 851: %s: [PCA]requestRat=%d, peerRat=%d
Line 855: %s: [PCA]Paging conflict detected with peerRat=%d
Line 860: %s: Stack0 [PCA]firstPagingPagingConflictTime=%u, PagingConflictCnt=%d
Line 865: %s: Stack0 [PCA] New firstPagingPagingConflictTime=%u
Line 874: %s: Stack0 [PCA]Criteria of Conflict duration met (WCDMA). Diff time=%u, pagingGrant=%d, pagingReject=%d
Line 881: %s: FAIL - Failed to send message to URRC - StackId 0
Line 893: %s: Stack0 [PCA]Criteria of Conflict duration met (WCDMA). Diff time=%u, pagingGrant=%d, pagingReject=%d
Line 900: %s: FAIL - Failed to send message to URRC - StackId 0
Line 910: %s: Stack1 [PCA]ds_firstPagingPagingConflictTime=%u, PagingConflictCnt=%d
Line 915: %s: Stack1 [PCA] New firstPagingPagingConflictTime=%u
Line 924: %s: Stack1 [PCA]Criteria of Conflict duration met (DS_WCDMA). Diff=%u, pagingGrant=%d, pagingReject=%d
Line 931: %s: FAIL - Failed to send message to URRC - StackId 1
Line 943: %s: Stack1 [PCA]Criteria of Conflict duration met (DS_WCDMA). Diff=%u, pagingGrant=%d, pagingReject=%d
Line 950: %s: FAIL - Failed to send message to URRC - StackId 1
Line 966: SRL1RC REJ/WAIT/RETRY - RAT(%d), RequestReason(%d), Response(%d), ActiverClientRequestReason(%d), RejectCause(%d), RetryPeriod(%u) 
Line 969: ActiveClient Info - ActiveClientRAT(%d), ActiveClientRequestReason(%d), GrantTime(%u), LatestGrantTime(%u), GrantEndTime(%u)
Line 974: SRL1RC REJ/WAIT/RETRY -RAT(%d), RequestReason(%d), Response(%d), RejectCause(%d), RetryPeriod(%u) 
Line 994: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), simInfo(%d), AutoPauseTimerValue(%u) 
Line 1004: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), simInfo(%d), No AutoPause Info 
Line 1014: SRL1RC REJ/WAIT/RETRY - RAT(%d), RequestReason(%d), Response(%d), RejectCause(%d),RetryPeriod(%u) 
Line 1041: srl1rc_l1intfResourceRequest: FAIL - RAT(%d), ResourceManager failed to grant resources for ClientId(%d), RequestReason(%d), MinResourceUseTime(%u) Response(%d), RejectCause(%d), RetryPeriod(%u)
Line 1074: %s: FAIL - Pause Done received with NULL pointer
Line 1079: %s: FAIL - Pause Done received with Invalid ClientId(%d)
Line 1084: %s: FAIL - PauseDone received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 1106: %s: SUCCESS - RAT(%d), State(%d) MsgValid(%d)
Line 1129: %s: FAIL - ResourceManager failed to process PauseDone for ClientId(%d), RAT(%d), State(%d)
Line 1163: %s: FAIL - Resource request received with NULL output pointer
Line 1177: %s: FAIL - Resume ready received with NULL pointer
Line 1183: %s: FAIL - Resume ready received with Invalid ClientId(%d)
Line 1188: %s: FAIL - Resume ready received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 1227: %s: SUCCESS - RAT(%d), resumeNow(%d), startEarlyPauseTimer(%d), pauseTime(%u) 
Line 1254: %s: FAIL - ResourceManager failed to process ResumeReady for ClientId(%d), RAT(%d), State(%d)
Line 1308: %s: FAIL - Update Time received with NULL pointer
Line 1313: %s: FAIL - Update Time received with Invalid ClientId(%d)
Line 1318: %s: FAIL - UpdateTime received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 1325: %s: FAIL - UpdateTime received with Invalid Wakeup Cause(%d)
Line 1337: Dereferenced NULL pointer : timeKeeperObj
Line 1370:  %s GSM RF hogging prevention (TimeUpdate)(Allow 2G Paging): GSM reason(%u), lastPagingGrantTimeInPauseDone(%u), currentTime(%u), nextEventStartTime(%u)
Line 1385:  %s LTE MBMS Data ongoing
Line 1389:  %s MBMS RF hogging prevention (TimeUpdate): reason(%u), randValue(%u), TargetPercentage(%u), nextEventStartTime(%u)
Line 1392:  %s (Skip TimeUpdate: Time cause) MBMS RF hogging prevention (Autopause): RAT(%d), reason(%u), NextEventTime (%u)
Line 1419:  %s RF hogging prevention (TimeUpdate): Target Percentage changed to %d intentionally for scch order missed issue
Line 1424:  %s RF hogging prevention (TimeUpdate): reason(%u), randValue(%u), TargetPercentage(%u), Last2GRFPreventionTime(%u), nextEventStartTime(%u)
Line 1433:  %s Execute TimeUpdate due to previous update time: srl1rcLast4GUpdateTime (%u), nextEventStartTime (%u)
Line 1442:  %s (Skip TimeUpdate: Random event) RF hogging prevention (Autopause): reason(%u), LastTime (%u)
Line 1457:  %s (Skip TimeUpdate: Time cause) RF hogging prevention (Autopause): reason(%u), NextEventTime (%u), LastTime (%u)
Line 1466:  %s Update srl1rcLast4GUpdateTime: srl1rcLast2GRFPreventionTime (%u), srl1rcLast4GUpdateTime (%u)
Line 1493: %s: SUCCESS - RAT(%d), currentTime(%u),nextEventStartTime(%u), nextEventDuration(%u), nextWakeupCause(%d)  
Line 1496: %s: FAIL - ResourceManager failed to process UpdateTime for ClientId(%d), RAT(%d), State(%d)
Line 1531: %s: FAIL - PS Update Time received with NULL pointer
Line 1536: %s: FAIL - PS Update Time received with Invalid ClientId(%d)
Line 1541: %s: FAIL - PS UpdateTime received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 1546: %s: FAIL - PS UpdateTime received with non PS Cause(%d)
Line 1558: Dereferenced NULL pointer : timeKeeperObj
Line 1572: %s: SUCCESS - RAT(%d), currentTime(%u),nextEventStartTime(%u), nextEventDuration(%u), nextWakeupCause(%d)  
Line 1574: %s: FAIL - ResourceManager failed to process UpdateTime for ClientId(%d), RAT(%d), State(%d)
Line 1618: %s: FAIL - Resource Release received with NULL pointer
Line 1623: %s: FAIL - Resource Release received with Invalid ClientId (%d)
Line 1628: %s: FAIL - ResourceRelease received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 1642: Dereferenced NULL pointer : timeKeeperObj
Line 1657: Resource release with nextevent received with Invalid Wakeup Cause(%d)
Line 1692: %s: SUCCESS - RAT(%d) AgcDiff(%d)
Line 1697: %s: SUCCESS - RAT(%d), currentTime(%u),nextEventStartTime(%u), nextEventDuration(%u), nextWakeupCause(%u)  
Line 1724: %s: targetClientId %u 
Line 1744: %s: FAIL - RAT(%d), ResourceManager failed to process ResourceRelease
Line 1781: %s: FAIL - msg is NULL
Line 1793: Dereferenced NULL pointer : timeKeeperObj
Line 1802: %s: SUCCESS (Sent RES_RSP) - RAT(%d), StartEarlyPauseTimer(%d), EarlyPauseTime(%u), currentTime(%u)
Line 1809: %s: SUCCESS (Sent PAUSE) - RAT(%d)
Line 1817: %s: SUCCESS (Sent RESUME) - RAT(%d), StartEarlyPauseTimer(%d), EarlyPauseTime(%u), currentTime(%u) 
Line 1825: %s: SUCCESS (Sent START TIMER) - RAT(%d), EarlyPauseTime(%u), currentTime(%u) 
Line 1831: %s: SUCCESS (Sent RescheduleWakeupToPCH) - RAT(%d), currentTime(%u) 
Line 1837: %s: SUCCESS (Sent PICHNackNotification) - RAT(%d), currentTime(%u) 
Line 1844: %s:[PSPS] SUCCESS (Sent PsPsStatusInd) - RAT(%d), currentTime(%u) 
Line 1852: %s: SUCCESS (Sent SearcherResponse) - RAT(%d), currentTime(%u) 
Line 1858: %s: SUCCESS (Sent SearcherPause) - RAT(%d), currentTime(%u) 
Line 1864: %s: SUCCESS (Sent SearcherResume) - RAT(%d), currentTime(%u) 
Line 1871: %s: FAIL - Invalid msg Type %d
Line 1902: %s: FAIL - msg is NULL
Line 1907: %s: FAIL - srl1rcToUL1Msg is NULL
Line 1952: %s: FAIL - Invalid msg Type %s
Line 1963: %s: FAIL - Failed to send message to UL1
Line 1993: %s: FAIL - msg is NULL
Line 1998: %s: FAIL - srl1rcToGL1Msg is NULL
Line 2025: %s : FAIL - Invalid msg Type %s
Line 2035: %s: FAIL - Failed to send message to GL1
Line 2094: %s: FAIL - msg is NULL
Line 2098: %s: FAIL - srl1rcToUL1Msg is NULL
Line 2138: %s: FAIL - Invalid msg Type %s
Line 2146: %s: FAIL - Failed to send message to DS_UL1
Line 2162: %s: Stack%d FAIL - srl1rcToUrrcMsg is NULL
Line 2175: %s: FAIL - Wrong Stack Id in Dsl1rc to Urrc msg
Line 2179: %s: FAIL - Stack%d Failed to send message to URRC
Line 2182: %s: [PCA]Send CUPHY_PCH_CONFLICT_IND to URRC (Stack=%d)
Line 2195: %s: FAIL - Stack%d Failed to send message to URRC
Line 2198: %s: [PCA]Send CUPHY_PCH_CONFLICT_IND to URRC (Stack=%d)
Line 2224: %s: FAIL - this Pointer is NULL!!!
Line 2232: %s: FAIL - msg Pointer is NULL!!!
Line 2237: %s: FAIL - srl1rcToLteL1Msg Pointer is NULL!!!
Line 2269: %s :Invalid msg Type %d
Line 2275: %s: Sending IPC[0x%x] from SRL1RC to SR-IF...
Line 2284: %s: FAIL - Failed to send message to LTE L1 (SR-IF)
Line 2288: %s: SUCCESS - sent(%d)
Line 2318: %s: FAIL - msg is NULL
Line 2323: %s: FAIL - srl1rcToTL1Msg is NULL
Line 2346: %s: FAIL - Invalid msg Type %s
Line 2356: %s: FAIL - Failed to send message to TL1
Line 2386: %s: FAIL - msg is NULL
Line 2391: %s: FAIL - srl1rcToCDL1Msg is NULL
Line 2414: %s: FAIL - Invalid msg Type %s
Line 2456: %s: FAIL - msg is NULL
Line 2498: %s: FAIL - Failed to send message to GL1 - Client Id (%d)
Line 2503: %s: SUCCESS - ClientId(%d), RAT(%d), State(%d), MsgType(%s)
Line 2506: %s: FAIL - RAT(%d) Failed to create message 
Line 2518: %s: FAIL - Failed to send message to UL1 - Client Id (%d)
Line 2526: %s: FAIL - Failed to create UL1 message for clientId (%d) 
Line 2539: %s: FAIL - Failed to send message to DS UL1 - Client Id (%d)
Line 2544: %s: SUCCESS - DS_WCDMA_ClientID(%d), RAT(%d), State(%d), MsgType(%s)
Line 2549: %s: FAIL - DS UL1 RAT Failed to create message 
Line 2577: %s: FAIL - Failed to send message to LTE L1 - Client Id (%d)
Line 2582: %s: SUCCESS - ClientId(%d), RAT(%d), State(%d), MsgType(%d)
Line 2587: %s: FAIL - Failed to create  LTE L1 message for clientId (%d) 
Line 2602: %s: FAIL - Failed to send message to TL1 - Client Id (%d)
Line 2610: %s: FAIL - Failed to create TL1 message for clientId (%d) 
Line 2623: %s: FAIL - Failed to send message to CDL1 - Client Id (%d)
Line 2631: %s: FAIL - Failed to create CDL1 message for clientId (%d) 
Line 2639: %s: FAIL - Invalid RAT(%d) for ClientId (%d) 
Line 2701: srl1rc_l1intfGetGrantReasonForRAT: FAIL - Invalid RAT(%d)
Line 2706: srl1rc_l1intfGetGrantReasonForRAT: FAIL - Unregistered RAT(%d)
Line 2714: srl1rc_l1intfGetGrantReasonForRAT: RAT(%d), grantReason(%d)  
Line 2729: srl1rc_l1intfGetGrantReasonForClient: FAIL - Invalid clientId(%d)
Line 2733: srl1rc_l1intfGetGrantReasonForClient: FAIL - Unregistered Client(%d)
Line 2751: srl1rc_l1intfGetStateForClient: FAIL - Invalid clientId(%d)
Line 2755: srl1rc_l1intfGetStateForClient: FAIL - Unregistered Client(%d)
Line 2775: srl1rc_l1intfUpdatePICHRSN: FAIL - Invalid clientId(%d)
Line 2779: srl1rc_l1intfUpdatePICHRSN: FAIL - Unregistered Client(%d)
Line 2783: srl1rc_l1intfUpdatePICHRSN: FAIL - Not a WCDMA client
Line 2788: srl1rc_l1intfUpdatePICHRSN-Conflict resolution algo disabled by L1
Line 2824: srl1rc_l1intfGetPICHRSN: FAIL - Invalid clientId(%d)
Line 2828: srl1rc_l1intfGetPICHRSN: FAIL - Unregistered Client(%d)
Line 2832: srl1rc_l1intfGetPICHRSN: FAIL - Not a WCDMA client
Line 2890: RF Hogging STAT on PS: TotalRFRequestCnt %u, AvgSkipPercentage %u OverallSkipPercentage %u, ConsecRFSkipCnt %u
Line 2931: srl1rc_rfRejectStatsDMTrace: Rat (%d) RFRequestReason (%d) TotalRFRequest (%d)
Line 2933: srl1rc_rfRejectStatsDMTrace: SignallingRejectCnt (%d) L1HightPriorityRejectCnt (%d) SignallingRejectPerc (%d) L1HightPriorityRejectPerc (%d)
Line 2936: srl1rc_rfRejectStatsDMTrace: PagingRejectCnt (%d) SysInfoRejectCnt (%d)  PagingRejectPerc (%d) SysInfoRejectPerc (%d) 
Line 2939: srl1rc_rfRejectStatsDMTrace: CellSearchRejectCnt (%d) MeasurementRejectCnt (%d) PSCallRejectCnt (%d) CellSearchRejectPerc (%d)  MeasurementRejectPerc (%d) PSCallRejectPerc (%d)
Line 2956: [SRL1RC_DRDSDS_StatDbg] %s: PagingCntDrmode and PagingCntAbnormal are initialized. 
Line 2967: [SRL1RC_DRDSDS_StatDbg] %s: Invalid input
Line 2982: [SRL1RC_DRDSDS_StatDbg] %s: 3G DR-DSDS Available now, PCH-PCH count=%d, DrxCycle1=%d, DrxCycle2=%d
Line 2993: [SRL1RC_DRDSDS_StatDbg] %s: 3G DR-DSDS not Available due to AGC Diff(%d), PCH-PCH count=%d
Line 3052: %s: SRL1RC cleared All the memory
Line 3069: srl1rc_l1intfUpdateDRDb: FAIL - Invalid clientId(%d)
Line 3073: srl1rc_l1intfUpdateDRDb: FAIL - Unregistered Client(%d)
Line 3077: srl1rc_l1intfUpdateDRDb: FAIL - Not a WCDMA client
Line 3083:  %s: - clientDB object is NULL
Line 3103: srl1rc_l1intfIsDRImpossible: FAIL - Invalid clientId(%d)
Line 3107: srl1rc_l1intfIsDRImpossible: FAIL - Unregistered Client(%d)
Line 3111: srl1rc_l1intfIsDRImpossible: FAIL - Not a WCDMA client
Line 3151: %s: FAIL - Searcher request received with NULL output pointer
Line 3159: %s: FAIL - Searcher request received with NULL input pointer
Line 3164: %s: FAIL - Searcher request received with Invalid ClientId(%d)
Line 3169: %s: FAIL - RAT(%d) Searcher Request received from Unregistered ClientId(%d), State(%d)
Line 3178: %s: FAIL - dRManagerObj is NULL
Line 3185: Dereferenced NULL pointer : timeKeeperObj
Line 3192:  %s: - clientDB object is NULL
Line 3202: SRL1RC SEARCHER REQ - SUCCESS - RAT(%d), RequestReason(%d), currentTime(%u) MinSearcherUseTime(%u)
Line 3207: SRL1RC REQ - Reset Scheduled event Info
Line 3217: SRL1RC SEARCHER GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherDRClientRequestReason(%d)
Line 3222: SRL1RC SEARCHER GRANT - RAT(%d), RequestReason(%d), Response(%d)
Line 3228: SRL1RC SEARCHER REJ/WAIT/RETRY -RAT(%d), RequestReason(%d), Response(%d), RejectCause(%d)
Line 3239: %s: FAIL - RAT(%d), DR-Manager failed to grant resources for ClientId(%d), RequestReason(%d), MinResourceUseTime(%u), Response(%d), RejectCause(%d)
Line 3272: %s: FAIL - Searcher Pause Done received with NULL pointer
Line 3277: %s: FAIL - Searcher Pause Done received with Invalid ClientId(%d)
Line 3282: %s: FAIL - Searcher PauseDone received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 3291: %s: FAIL - dRManagerObj is NULL
Line 3300: %s: SUCCESS - RAT(%d), State(%d) MsgValid(%d)
Line 3308: %s: FAIL - DR-Manager failed to process PauseDone for ClientId(%d), RAT(%d), State(%d)
Line 3337: %s: FAIL - Searcher Resume ready received with NULL output pointer
Line 3344: %s: FAIL - Searcher Resume ready received with NULL pointer
Line 3349: %s: FAIL - Searcher Resume ready received with Invalid ClientId(%d)
Line 3354: %s: FAIL - Searcher Resume ready received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 3363: %s: FAIL - dRManagerObj is NULL
Line 3372: %s: SUCCESS - RAT(%d), resumeNow(%d)
Line 3376: %s: FAIL - DRManager failed to process ResumeReady for ClientId(%d), RAT(%d), State(%d)
Line 3410: %s: FAIL - Searcher Release received with NULL pointer
Line 3415: %s: FAIL - Searcher Release received with Invalid ClientId (%d)
Line 3420: %s: FAIL - Searcher Release received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 3428: %s: FAIL - dRManagerObj is NULL
Line 3435: Dereferenced NULL pointer : timeKeeperObj
Line 3446: %s: SUCCESS - RAT(%d)
Line 3453: %s: FAIL - RAT(%d), DR-Manager failed to process SearcherRelease
Line 3516: %s: SUCCESS - Initialization Complete 
