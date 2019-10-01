Line 326:  init: SysInfoMgr initialization problem - couldn't register with boundary
Line 333:  init: SysInfoMgr initialization problem - couldn't do state initialisation
Line 364:  free: releasing BCH / PCCPCH
Line 406: rrc_Class_SysInfoMgr_GetInstanceId: SysInfoMgr created at address: 0x%0.8x
Line 451: tmp_bch is NULL or msg->payload.bchId != tmp_bch->trChId
Line 561: CallbackBchConfigured: [error] - BCCHPAUSED transition failed
Line 568: CallbackBchConfigured: [error] -NACK received
Line 590:  BcchPaused_Am_ResumeBcch: deleting activeReaderQ->reader 0x%0.8x
Line 603: CallbackBchConfigured: [error] - WAITFORSUBSCRIPTION transition failed
Line 614: CallbackBchConfigured: [success] - ACK received, bcchReleased = FALSE
Line 659:  MapExtMsgIdToIntMsgId: Unknown CUPHY solicited message %i received 
Line 671:  MapExtMsgIdToIntMsgId: CTPHY solicited message %i received 
Line 677:  MapExtMsgIdToIntMsgId: Unknown CTPHY solicited message %i received
Line 687:  MapExtMsgIdToIntMsgId: Layer %d has sent unexpecting solicited message %i  
Line 715: WaitForSubscription_Am_SubscribeToMibIntraFreq: [received]
Line 745: WaitForSubscription_Am_SubscribeToSibsIntraFreq: message received
Line 751: WaitForSubscription_Am_SubscribeToSibsIntraFreq: [error] -no scheduling information present for SIBs being subscribed 
Line 785: WaitForSubscription_Am_SubscribeToSchInfoIntraFreq: [received]
Line 815: WaitForSubscription_Am_SubscribeToMibInterFreq: message received
Line 847: Am_SubscribeToSystemInfo: message received
Line 876: Am_UnsubscribeAll: [received]
Line 892: Am_UnsubscribeAll: [received]
Line 917: UphyBchResourceConfigReady: [received]
Line 927: WaitForSubscription_UphyBchResourceConfigReady Unavailable to config bch resources RetCode(%d)
Line 931: WaitForSubscription_UphyBchResourceConfigReady ReaderQ already NULL
Line 942:  WaitForSubscription_UphyBchResourceConfigReady: [error] -no active client present
Line 997: UphyBchResourceConfigReady: [error] - BCCHPAUSED transition failed
Line 1007: UphyBchResourceConfigReady: [error] - WAITFORBCHTOBECONFIGURED transition failed
Line 1029: Am_UnSubcribeSystemInfo: [received]
Line 1059: Am_UnSubcribeSystemInfo: nonactive readerQ not yet implemented 
Line 1085: WaitForBchToBeConfigured_Am_SubscribeToMibIntraFreq: [received]
Line 1110: WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [received]
Line 1115: WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [error] - no activeReaderQ present
Line 1122: WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [error] -no scheduling information present for SIBs being subscribed 
Line 1137: WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [error] - unable to subscribe SIBs
Line 1162: WaitForBchToBeConfigured_Am_SubscribeToSchInfoIntraFreq: [received]
Line 1187: WaitForBchToBeConfigured_Am_SubscribeToMibInterFreq: [received]
Line 1214: Am_SubscribeToSystemInfo: [received]
Line 1219: Am_SubscribeToSystemInfoSibs: no activeReaderQ present
Line 1234: Am_SubscribeToSystemInfo: unable to subscribe to SIBs
Line 1260: WaitForBchToBeConfigured_Am_BchResourceConfigured: [received]
Line 1272: WaitForActiveReaderToFinish_Am_PauseBcch: [error] - unable to release physical channel
Line 1285: Am_UnsubscribeAll: [error] - BCCHPAUSED transition failed
Line 1300: WaitForBchToBeConfigured_Am_BchResourceConfigured: [error] - WAITFORACTIVEREADERTOFINISH transition failed
Line 1359: Am_UnSubcribeSystemInfo: nonactive readerQ not yet implemented 
Line 1388: Am_ForcedUnsubscribeAll: [received]
Line 1399: Am_ForcedUnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
Line 1424: WaitForActiveReaderToFinish_Am_SubscribeToMibIntraFreq: [received]
Line 1449: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [received]
Line 1454: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [error] - no active reader present
Line 1461: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [error] -no scheduling information present for SIBs being subscribed 
Line 1476: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreqToSibsIntraFreq: [error] - unable to subscribe SIBs
Line 1483: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [error] - rrc_SIM_SysInfoReader_StartReading returns FALSE
Line 1487: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: deleting activeReaderQ->reader @ 0x0%x
Line 1498: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [success] - rrc_SIM_SysInfoReader_StartReading returns TRUE
Line 1524: WaitForActiveReaderToFinish_Am_SubscribeToSchInfoIntraFreq: [received]
Line 1549: WaitForActiveReaderToFinish_Am_SubscribeToMibInterFreq: [received]
Line 1575: Am_SubscribeToSystemInfo: [received]
Line 1580: Am_SubscribeToSystemInfo: no active reader present
Line 1595: Am_SubscribeToSystemInfo: unable to subscribe to SIBs
Line 1601: Am_SubscribeToSystemInfo: StartReading error - deleting activeReaderQ->reader
Line 1611: Am_SubscribeToSystemInfo: StartReading returns TRUE
Line 1637: am_FailureInd: [received]
Line 1643: am_FailureInd: releasing BCH / PCCPCH
Line 1648: am_FailureInd: [error] - unable to release physical channel
Line 1656: am_FailureInd: [error] - WAITFORBCHTOBERELEASED transition failed
Line 1681: am_FinishInd: [received]
Line 1707: am_FinishInd: releasing BCH / PCCPCH
Line 1712: am_FinishInd: [error] - unable to release physical channel
Line 1719: am_FinishInd: [error] - WAITFORBCHTOBERELEASED transition failed
Line 1725: am_FinishInd: not releasing the BCH
Line 1749: WaitForActiveReaderToFinish_SIR_am_RecvMibOrSib: [received]
Line 1775: Am_UnsubscribeAll: [received]
Line 1790: Am_UnsubscribeAll: releasing BCH / PCCPCH
Line 1795: Am_UnsubscribeAll: [error] - unable to release physical channel
Line 1805: Am_UnsubscribeAll: [error] - WAITFORBCHTOBERELEASED transition failed
Line 1812: Am_UnsubscribeAll: not releasing the BCH
Line 1820: The Active reader has not requested for Unsubscribe All, keeping the BCCH
Line 1830: Am_UnsubscribeAll: BCH / PCCPCH already released
Line 1840: Am_UnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
Line 1856: Am_ForcedUnsubscribeAll: [received]
Line 1868: Am_ForcedUnsubscribeAll: releasing BCH / PCCPCH
Line 1873: Am_ForcedUnsubscribeAll: [error] - unable to release physical channel
Line 1886: Am_UnsubscribeAll: [error] - WAITWAITFORSUBSCRIPTION transition failed
Line 1893: Am_ForcedUnsubscribeAll: not releasing the BCH
Line 1901: The Active reader has not requested for Unsubscribe All, keeping the BCCH
Line 1908: Am_ForcedUnsubscribeAll: BCH / PCCPCH already released
Line 1917: Am_UnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
Line 1935: [Default_Am_PauseBcch] bcchPauseRecvd = TRUE
Line 1956: [Default_Am_PauseBcch] bcchPauseRecvd = FALSE
Line 1978: WaitForActiveReaderToFinish_Am_PauseBcch: [error] - unable to release physical channel
Line 1995: Am_UnsubscribeAll: [error] - BCCHPAUSED transition failed
Line 2015:  BcchPaused_Am_ResumeBcch: deleting activeReaderQ->reader 0x%0.8x
Line 2028: Am_UnsubscribeAll: [error] - BCCHPAUSED transition failed
Line 2051: Am_SubscribeToSystemInfo: [received]
Line 2056: Am_SubscribeToSystemInfo: no active reader present
Line 2076: Am_SubscribeToSystemInfo: unable to subscribe to SIBs
Line 2081: Am_SubscribeToSystemInfo: HandleSubscription returns TRUE
Line 2159: Am_UnSubcribeSystemInfo: releasing BCH / PCCPCH
Line 2167: Am_UnSubcribeSystemInfo: [error] unable to release physical channel
Line 2173: Am_UnSubcribeSystemInfo: [error] - WAITFORBCHTOBERELEASED transition failed
Line 2183: Am_UnSubscribeSystemInfo: unsubscribe in nonactive readerQ not yet implemented 
Line 2210: Am_UnsubscribeAll: [received]
Line 2229: Am_ForcedUnsubscribeAll: [received]
Line 2238: Am_ForcedUnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
Line 2263: Am_BchResourceReleased: [received]
Line 2271: Am_BchResourceReleased: [error] - WAITFORSUBSCRIPTION transition failed
Line 2285: WaitForBchToBeReleased_Am_SubscribeToMibIntraFreq: [received]
Line 2296: WaitForBchToBeReleased_Am_SubscribeToSibsIntraFreq: [received]
Line 2305: WaitForBchToBeReleased_Am_SubscribeToSchInfoIntraFreq: [received]
Line 2316: WaitForBchToBeReleased_Am_SubscribeToMibInterFreq: [received]
Line 2327: WaitForBchToBeReleased_Am_SubscribeToSystemInfo: [received]
Line 2768: Avoiding DSRC update for BCCH read %d
Line 2774: Avoiding DSRC update for BCCH read for ANR/CGI Info
Line 2788: Avoiding DSRC update for BCCH read
Line 2834:  priv_HandleAmMessage: activeReaderQ created @ 0x%0.8x
Line 2843:  priv_HandleAmMessage: sending UphyBchResCfgReadyForSend to ResourceMgr
Line 2850:  priv_HandleAmMessage: error - UphyBchResCfgReadyForSend message not generated
Line 2860:  priv_HandleAmMessage: activeReaderQ freed
Line 2890: priv_HandleAmMessage: Pending Client is same as new request client,Merging
Line 2913: priv_HandleAmMessage: Waiting on DSRC : appending to pending Q
Line 2922:  priv_HandleAmMessage: active reader present, handling IntraFreqSibs
Line 2931:  priv_HandleAmMessage: [error] - unable to subscribe SIBs
Line 2953:  priv_HandleBackgroundResourceRelease: [error ]- THIS SHOULD NOT BE USED YET!
Line 2972:  priv_HandleBackgroundResourceRelease: priv_configureBcch() success
Line 2977:  priv_HandleBackgroundResourceRelease: priv_configureBcch() failure
Line 2990:  priv_HandleBackgroundResourceRelease: priv_configureBcch() success
Line 2995:  priv_HandleBackgroundResourceRelease: priv_configureBcch() failure
Line 3006:  priv_HandleBackgroundResourceRelease: mibInterFreq.retryCount is zero, hence going to terminate SI Reading
Line 3012:  priv_HandleBackgroundResourceRelease: error - no active Reader present
Line 3059:  priv_HandleUphyBchResourceConfigReady: handling a BackgroundResourceRelease message
Line 3067:  priv_HandleUphyBchResourceConfigReady: [error] - unable to subscribe SIBs
Line 3078:  priv_HandleUphyBchResourceConfigReady: deleting activeReaderQ->reader 0x%0.8x
Line 3106:  priv_HandleAmBchResourceConfigured: [error] - activeReaderQ == NULL
Line 3114:  priv_HandleAmBchResourceConfigured: [error] - rrc_SysInfoReader_StartReading returns FALSE
Line 3118:  priv_HandleAmBchResourceConfigured: deleting activeReaderQ->reader @ 0x%0.8x
Line 3129:  priv_HandleAmBchResourceConfigured: [success] - rrc_SysInfoReader_StartReading returns TRUE
Line 3154: SIM_priv_TerminateLastSubscription: activeReaderQ already NULL
Line 3163:  priv_HandleSirAmFailureInd: [error] -no active client present
Line 3168:  priv_HandleSirAmFailureInd: number of active clients = %d
Line 3175:  priv_HandleSirAmFailureInd: terminating pending requests for client
Line 3197:  priv_HandleSirAmFailureInd: [%s] callback function called
Line 3251:  priv_HandleBchResourceReleased: [error] -NACK received
Line 3256:  priv_HandleBchResourceReleased: ACK received
Line 3264:  priv_HandleClientCallbackForReleaseBch: %s callback function called
Line 3303: priv_HandleUnsubscribeAll: -internal message structure for "UnsubscribeAll" is NULL
Line 3330: DBCHR: SibId(%d) Cancelled
Line 3356:  priv_HandleUnsubscribeAll: number of active clients = %d
Line 3361:  priv_HandleUnsubscribeAll: activeReaderQ->client @ 0x%0.8x, pMsg->clientId = 0x%0.8x
Line 3393:  priv_HandleUnsubscribeAll: Pending requests for the client is not checked
Line 3398:  priv_HandleUnsubscribeAll: terminating pending requests for client
Line 3420:  priv_HandleSirAmRecvMibOrSib: received in state WaitForActiveReaderToFinish
Line 3440: received InfoBlockInstId is NULL 
Line 3448:  priv_HandleSirAmRecvMibOrSib: [error] - no active client present
Line 3463: received InfoBlockInstId is NULL 
Line 3477:  DBCHR : First MIB received : rep8 -> rep40
Line 3489:  DBCHR: [%s] : SIB type [%d] Received!!
Line 3501:  DBCHR: [%s] : SIB type [%d] Received!!
Line 3527:  priv_HandleSirAmRecvMibOrSib: [%s] - removed from activeReaderQ
Line 3532:  priv_HandleSirAmRecvMibOrSib: [%s] - passed to client %s
Line 3554:  priv_HandleSirAmRecvMibOrSib: [error] - SIB/MIB decoding failure returned to SysInfoMgr
Line 3558:  priv_HandleSirAmRecvMibOrSib: terminating pending requests for client
Line 3596: pMsg->InfoBlockInstId is NULL
Line 3621: rrc_SysInfoMgr_priv_HandleNACKBchConfigCnf: [error] -activeReaderQ is NULL
Line 3626:  priv_HandleNACKBchConfigCnf: [error] - no client in activeReaderQ!
Line 3631:  priv_HandleNACKBchConfigCnf: [error] - no callback function in activeReaderQ!
Line 3636:  priv_HandleNACKBchConfigCnf: [%s] callback function called with BCHREADERROR
Line 3654:  priv_HandleNACKBchConfigCnf: terminating pending requests for client
Line 3668:  priv_HandleNACKBchConfigCnf: number of active clients = %d
Line 3758: priv_HandleSubscription: SysInfoReader creation failed
Line 3763: priv_HandleSubscription: activeReaderQ->reader created @ 0x%0.8x
Line 3774: priv_HandleSubscription: [success] - MIB Block requested
Line 3781: priv_HandleSubscription: rrc_SysInfoReader_RequestMib call failed
Line 3792: priv_HandleSubscription: [success] - SchBlock requested
Line 3799: priv_HandleSubscription: rrc_SysInfoReader_RequestSchInfo call failed
Line 3814: priv_HandleSubscription: request IntraFreq SIBs failed
Line 3819: priv_HandleSubscription: [success] - request IntraFreqSIBs successful
Line 3838: priv_HandleSubscription: request MibSbSib_IntraFreq failed
Line 3843: priv_HandleSubscription: [success] - request MibSbSib_IntraFreq successful
Line 3853: priv_HandleSubscription: error in the choice field of ReaderQ
Line 3879:  priv_HandleBchConfigRequest: [fail] - no activeReaderQ
Line 3889:  priv_HandleBchConfigRequest: monitored and serving cells are same
Line 3900:  rrc_SysInfoMgr_priv_HandleBchConfigRequest TDDRequest: [success] - BCCH configured for MIB InterFreq
Line 3906:  rrc_SysInfoMgr_priv_HandleBchConfigRequest TDDRequest: [fail] - BCCH not configured for MIB InterFreq
Line 3918:  priv_HandleBchConfigRequest: [success] - BCCH configured for MIB InterFreq
Line 3924:  priv_HandleBchConfigRequest: [fail] - BCCH not configured for MIB InterFreq
Line 3945:  BPLMN BCH Request TDD: [success] - BCCH configured
Line 3950:  BPLMN : priv_HandleBchConfig Request TDD: [fail] - BCCH not configured
Line 3961:  priv_HandleBchConfig TDDRequest: [success] - BCCH configured
Line 3967:  priv_HandleBchConfig TDDRequest: [fail] - BCCH not configured
Line 3984:  BPLMN BCH Request: [success] - BCCH configured
Line 3989:  BPLMN : priv_HandleBchConfig Request: [fail] - BCCH not configured
Line 3999:  BPLMN BCH Request for AnrInfoReading : [success] - BCCH configured
Line 4004:  BPLMN : priv_HandleBchConfig Request for AnrInfOReading : [fail] - BCCH not configured
Line 4014:  priv_HandleBchConfigRequest: [success] - BCCH configured
Line 4020:  priv_HandleBchConfigRequest: [fail] - BCCH not configured
Line 4093: priv_HandleIntraFreqSibsReaderActive: appending Intrafrequency subscription
Line 4097: priv_HandleIntraFreqSibsReaderActive: deleting activeReaderQ->reader @ 0x%0.8x
Line 4112: priv_HandleIntraFreqSibsReaderActive: activeReaderQ->reader deleted
Line 4119: activeReaderQ->reader == NULL, just append entry to Q
Line 4126: priv_HandleIntraFreqSibsReaderActive: appending to pending Q. isResubscribReq[%d]
Line 4153:  priv_HandleClientCallback: [error] -internal message structure for "UnsubscribeAll" is NULL
Line 4161:  priv_HandleClientCallback: [error] -no client for callback function
Line 4167:  priv_handleClientCallback: [%s] has no callback function
Line 4175:  priv_HandleClientCallback: [%s] callback function called
Line 4204:  priv_HandleClientCallbackForReleaseBch: [error] -internal message structure for "UnsubscribeAll" is NULL
Line 4211:  priv_HandleClientCallbackForReleaseBch: [error] -no client for callback function
Line 4217:  priv_HandleClientCallbackForReleaseBch: [%s] has no callback function
Line 4227:  priv_HandleClientCallbackForReleaseBch: callback function already exists for %s
Line 4237:  priv_HandleClientCallbackForReleaseBch: [error] - can only have 2 callback clients
Line 4245:  priv_HandleClientCallbackForReleaseBch: storing callback function for %s
Line 4382:  DBCHR : Appending Sibs to same Active reader Q: Sending BCH Modify
Line 4428: priv_addEntryToQ: [SI_SubscribeToSchInfo_IntraFreq]
Line 4454: priv_addEntryToQ: [SI_SubscribeToMib_IntraFreq]
Line 4480: priv_addEntryToQ: [SI_SubscribeToMib_InterFreq]
Line 4517: priv_addEntryToQ: [SI_SubscribeToSibs_IntraFreq]
Line 4558: rrc_SysInfoMgr_priv_addEntryToQ: QEntry->u.sibIntraFreq.sibIds  is NULL
Line 4573: priv_addEntryToQ: [SI_SubscribeToMibSbSib_IntraFreq]
Line 4634: rrc_SysInfoMgr_priv_addEntryToQ: QEntry->u.sibIntraFreq.sibIds  is NULL
Line 4641: priv_addEntryToQ: [fail] - invalid subscription request not added to Q
Line 4650: priv_addEntryToQ: added request to Q with cellParamId = %d, DL UARFCN = %d, callback addr: 0x%0.8x
Line 4657: priv_addEntryToQ: added request to Q with CPICH = %d, DL UARFCN = %d, callback addr: 0x%0.8x
Line 4690: rrc_SysInfoMgr_priv_appendToPendingQ: newReaderQ is NULL
Line 4712:  priv_appendToPendingQ: subscribe to MIB/SIB request put on Queue by SysInfoMgr
Line 4776: Entry not empty since client %s is subscribed to SibId: %d
Line 4791: Invalid subscription type: %d
Line 4826:  priv_removeClientFromPendingQ: trying to remove client %s from pending Q
Line 5098:  priv_configureBcch: call to rrc_Bcch_getBch returns FAILURE
Line 5105:  priv_configureBcch: physical channel configuration successful
Line 5112:  priv_configureBcch: physical channel Configuration Failure
Line 5119:  priv_configureBcch: unable to configure BCCH due to null activeBcch instance
Line 5137:  rrc_SysInfoMgr_priv_TddconfigureBcch: call to rrc_Bcch_getBch returns FAILURE
Line 5144:  rrc_SysInfoMgr_priv_TddconfigureBcch: physical channel configuration successful
Line 5150:  rrc_SysInfoMgr_priv_TddconfigureBcch: physical channel Configuration Failure
Line 5157:  rrc_SysInfoMgr_priv_TddconfigureBcch: unable to configure BCCH due to null activeBcch instance
Line 5182:  priv_terminateLastSubscription: releasing BCH / PCCPCH
Line 5187:  priv_terminateLastSubscription: [fail] - unable to release physical channel
Line 5194:  priv_terminateLastSubscription: deleting activeReaderQ->reader @ 0x%0.8x
Line 5199:  priv_terminateLastSubscription: activeReaderQ->reader deleted
Line 5202:  priv_terminateLastSubscription: deleting activeReaderQ @ 0x%0.8x
Line 5210:  priv_terminateLastSubscription: activeReaderQ deleted
Line 5218:  priv_terminateLastSubscription: error - state transition to WAITFORSUBSCRIPTION failed
Line 5242:  priv_makePendingSubscriptionActive: pendingReaderQ is empty
Line 5249:  priv_makePendingSubscriptionActive: pendingReaderQ is not Empty
Line 5256: rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToSchInfo_IntraFreq]
Line 5264: rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToMib_IntraFreq]
Line 5273: rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToMib_InterFreq]
Line 5282: rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToSibs_IntraFreq]
Line 5291: rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToMibSbSib_IntraFreq]
Line 5300: priv_makePendingSubscription: [fail] - invalid subscription request not added to Q
Line 5333:  priv_validateIntraFreqSibSubscriptionReq: message is NULL
Line 5340:  priv_validateIntraFreqSibSubscriptionReq: mibPtr is NULL
Line 5397: Rx-ASN__MASTER_INFORMATION_BLOCK
Line 5413: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_%d
Line 5417: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__1
Line 5421: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__2
Line 5425: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__3
Line 5429: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__4
Line 5433: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_14
Line 5437: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15
Line 5441: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__1
Line 5445: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__2
Line 5449: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__3
Line 5453: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_16
Line 5457: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_17
Line 5461: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__4
Line 5465: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_18
Line 5469: Rx-ASN__SCHEDULING_BLOCK_1
Line 5473: Rx-ASN__SCHEDULING_BLOCK_2
Line 5477: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__5
Line 5481: Rx-ASN__MESSAGE_UNKNOWN
Line 5503:  priv_ReleaseBchPccpch: [fail] - no active BCCH
Line 5514:  priv_ReleaseBchPccpch: tmp_bch is NULL
Line 5519:  priv_ReleaseBchPccpch: [fail] - unable to release physical channel
Line 5548:  priv_terminateSIReading: pendingReaderQ = NULL, terminating last subscription
Line 5555:  priv_terminateSIReading: making pending subscription active
Line 5575:  priv_TerminateLastSubscription: activeReaderQ already NULL
Line 5580:  priv_TerminateLastSubscription: deleting activeReaderQ->reader @ 0x%0.8x
Line 5592:  priv_TerminateLastSubscription: deleting activeReaderQ @ 0x%0.8x
Line 5632: DBCHR: SibId(%d) Cancelled
Line 5648:  rrc_SysinfoMgr : CancelSubscription for Sib [%d] 
Line 5822: genMsg->pccpchInfo.cellParamId %d
Line 5826: genMsg->pccpchInfo.cellParamId = NULL
Line 5910:  DBCHR : rrc_SysInfoMgr_priv_ModifyMIBSiDb
Line 5930:  DBCHR : rrc_SysInfoMgr_priv_PopulateSiDb
Line 5954:  DBCHR : Client Resubscribed for a received SIB %d, ConfigStatus = %d,Send Modify again
Line 5981: DBCHR: VT [%d] 
Line 5989: DBCHR: SiDb[%d] : VT [%d] 
Line 5994: DBCHR: SiDb[%d] : SIBType [%d] 
Line 6006: DBCHR: SiDb[%d] : SegCount [%d] 
Line 6015: DBCHR: SiDb[%d] : SibRep 4
Line 6020: DBCHR: SiDb[%d] : SibRep 8
Line 6025: DBCHR: SiDb[%d] : SibRep 16
Line 6030: DBCHR: SiDb[%d] : SibRep 32
Line 6035: DBCHR: SiDb[%d] : SibRep 64
Line 6040: DBCHR: SiDb[%d] : SibRep 128
Line 6045: DBCHR: SiDb[%d] : SibRep 256
Line 6050: DBCHR: SiDb[%d] : SibRep 512
Line 6055: DBCHR: SiDb[%d] : SibRep 1024
Line 6060: DBCHR: SiDb[%d] : SibRep 2048
Line 6065: DBCHR: SiDb[%d] : SibRep 4096
Line 6069: DBCHR: rrc_SysInfoMgr_priv_PopulateSiDb: Invalid Repetition Factor
Line 6071: DBCHR: SiDb[%d] : SibPos[0] = %d
Line 6084: DBCHR: Ignore the rest of sib_PosOffsetInfo received in Scheduling info for SiDb[%d] as OffsetIndex[%d] is exceeding SegCount[%d]
Line 6140: DBCHR: SiDb[%d] : SibPos[%d] = %d
Line 6152: DBCHR: SiDb[%d] : SibPos[%d] = %d
Line 6157: DBCHR: SiDb[%d] : SibPos[%d] = %d
Line 6175: DBCHR: rrc_SysInfoMgr_priv_FreeSiDb
Line 6197: DBCHR: rrc_SysInfoMgr_priv_RollBackSiDb
Line 6204: DBCHR: SiDb[%d]->ConfigStatus = Configured -> PendingConfig
Line 6253: DBCHR: rrc_SysInfoMgr_PopSchInfoFromSiDb
Line 6383: DBCHR: [%s]: SegCount Mismatch :SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
Line 6388: DBCHR: [%s]: SegCount:SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
Line 6398: DBCHR: [%s]: SegCount Mismatch :SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
Line 6403: DBCHR: [%s]: SegCount Mismatch:SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
Line 6440: rrc_SysInfoMgr_NotifyClientRemoved ClientId  = %x
