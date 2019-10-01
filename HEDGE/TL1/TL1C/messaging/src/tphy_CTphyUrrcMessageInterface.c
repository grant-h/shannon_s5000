Line 284: MaxRetryLimit = %d, TokenDelay = %d
Line 287: [TPHY SAP] init() : tphy_TL1H_Ver = %d
Line 331: [PendMsgQ] Clear(): StoredTokenCancel (PendingMsgCnt= %d)
Line 343: [PendMsgQ] Clear(): %s(%d), MsgType= %d, StoredMsgCnt= %d
Line 393: [PendMsgQ] Free(): ProcessNode= 0x%X
Line 402: [PendMsgQ] Free(): Front_Node= 0x%X, Rear_Node= 0x%X
Line 407: [Warning][PendMsgQ] Free(): Msg is already freed
Line 479: [PendMsgQ] RemainingMsg Print(): %d. %s(%d), MsgType= %d
Line 552: [PendMsgQ] EnQueue(): %s(%d), MsgType=%d, TokenPtr=0x%X, new_node=0x%X, PendingMsgCount=%d
Line 562: [Warning][PendMsgQ] EnQueue(): FAILED
Line 603: [PendMsgQ] CheckGeneralMsgCondition(): Loop broken
Line 634: [PendMsgQ] Process(): MsgId= %d
Line 680: [PendMsgQ] DeQueue(): PendingMsgQueue is empty, ProcessType= %d, MsgType= %d
Line 685: [PendMsgQ] DeQueue(): MsgType= %d, ProcessType= %d, PendMsgCnt= %d
Line 727: [Warning][PendMsgQ] DeQueue(): Unexpected ProcessType is entered(%d)
Line 801: [Warning][PendMsgQ] CheckGsmReleaseToken(): Current Node is empty
Line 841: [TphyUrrcSap]SetT2GBlock(): Schedule T2G block token at %d
Line 1206: [TphyUrrcSap]process(): Request to lock Urrc Interface when its already locked
Line 1208: [TphyUrrcSap]process(): InterfaceLockReq
Line 1235: [TphyUrrcSap]process(): Request to unlock Urrc Interface when its already unlocked
Line 1237: [TphyUrrcSap]process(): InterfaceUnLockReq
Line 1245: [TphyUrrcSap]process(): CTPHY_CARRIER_FREQ_SEARCH_REQ send again after unlocked
Line 1253: [TphyUrrcSap]process(): CTPHY_CARRIER_FREQ_SEARCH_REQ send again after unlocked
Line 1261: [TphyUrrcSap]process(): CTPHY_INITIAL_CELL_SEARCH_REQ  send again after unlocked
Line 1307: [TphyUrrcSap]process(): RfUseRsp:isRfRequested: %d
Line 1318: [TphyUrrcSap]process(): Rf Access Granted
Line 1337: [TphyUrrcSap]process(): Rf rejected, RfReqRetry=%d, MaxRetry=%d 
Line 1346: [TphyUrrcSap]process(): RF retry count exhausted: RfReqRetry=%d, MaxRetry=%d 
Line 1358: [TphyUrrcSap]process():  rfReqToken is NULL as SIG STOP is received before RF Use Rsp!
Line 1368: [TphyUrrcSap]process(): Rf is not Requested(Invalid scenario)
Line 1380: [TphyUrrcSap]process(): Unknown MsgId %d for Urrc Interface
Line 1397: [TphyUrrcSap]process(): Urrc Message Transceiver doesnt send msg id %d to Urrc because interface is locked 
Line 1468: ##### TX::[ILM] %s (%d)
Line 1472: [TphyUrrcSap]process(): Unknown MsgId %d for Urrc Interface: Src %d Dest %d
Line 1611: AbnormalRatResume()
Line 1665: NULL == sib_array_ptr
Line 1669: MEMORY ALLOCATION HAS FAILED
Line 1710: SIB sib_rep_period = %08d, sib_offset = %08d, no_of_seg = %08d
Line 1741: NO OF SIBS ARE HIGH NOT ENOUGH TO STORE IN SIB ARRAY
Line 1785: ##### RX::[ILM] %s (%d), C(%d), L(%d)
Line 1800: [TphyUrrcSap] Signaling is not updated yet
Line 1813: [TphyUrrcSap] Sending Nack for (MsgId: %d) as the max retry is over and Sig Stop is not received!
Line 1874: [TphyUrrcSap] CTPHY_BPLMN INIT / BCH RELEASE PLACED IN HOLD LIST
Line 2116: [TphyUrrcSap] IsBatonHO %d CTPHY_BATONHO_IND
Line 2479: [TphyUrrcSap] GSM_MSMT_CFG_REQ isn't sent in DedicatedMode
Line 2709: [TphyUrrcSap] TDS Stack Id %d
Line 2815: [Warning][TphyUrrcSap] HpcmComponentCCmd failed
Line 2927: [TphyUrrcSap] Dummy msg received
Line 2932: [TphyUrrcSap] Unknown MsgId (%d) for Urrc Interface
Line 3019: [TphyUrrcSap] TDS Stack Id %d
Line 3137: [Warning][TphyUrrcSap] HpcmComponentCCmd failed
Line 3185: [TphyUrrcSap] Unknown MsgId (%d) for Urrc Interface
Line 3236: [TphyUrrcSap] Send Msg Id %d (orinal msgid %d) failed
Line 3246: [TphyUrrcSap] Send Msg Id %d (orinal msgid %d) failed
Line 3261: [TphyUrrcSap]sendAck(): Ack msg for OriginalMsgId=%d cannot be created. Check createUrrc_TphyConfirmMsg
Line 3314: [TphyUrrcSap]sendAck(): Unknown original msgId %d for Urrc Interface
Line 3347: ##### TX::[ILM][ACK] %s (%d)
Line 3367: [TphyUrrcSap]sendNack(): Nack msg for OriginalMsgId=%d cannot be created. Check createUrrc_TphyConfirmMsg
Line 3552: [TphyUrrcSap]sendNack(): Original msgId %d not in the list
Line 3596: ##### TX::[ILM][NACK] %s (%d)
Line 3614: TphyUrrcMessageInterface mem allocation failed
Line 3654: [TphyUrrcSap]SendCnfMessage(): lockedMsg == NULL pointer
Line 3669: [TphyUrrcSap]SendCnfMessage(): unlockedMsg == NULL pointer
Line 3677: [TphyUrrcSap]SendCnfMessage(): Unrecongniosed MsgId to confirm
Line 3700: [TphyUrrcSap]SendCnfMessage(): Cant send Interface Lock / Unlock Cnf
Line 3777: [TphyUrrcSap]scheduleDsl1rcRfAccess(): Unlikely Check why RfReqToken is still not NULL
Line 3791: [TphyUrrcSap]scheduleDsl1rcRfAccess(): scheduled after %d
Line 3801: [TphyUrrcSap]requestDsl1rcRfAccess(): rfUseReqMsg == NULL pointer
Line 3807: [TphyUrrcSap]requestDsl1rcRfAccess(): Rf already Requested! Waiting for Response
Line 3826: [TphyUrrcSap]requestDsl1rcRfAccess(): Cant send CUPHY_SIG_START_IND
Line 3836: [TphyUrrcSap]sendRfRelease(): sendRfRelease
Line 3839: [TphyUrrcSap]sendRfRelease(): rfUseRelMsg == NULL pointer
Line 3846: [TphyUrrcSap]sendRfRelease(): so dont release waitForSigStop: %d 
Line 3853: [TphyUrrcSap]sendRfRelease(): RF is not currently used!
Line 3871: [TphyUrrcSap]sendRfRelease(): Cant CUPHY_SIG_START_IND
Line 4031: [TphyUrrcSap] Activation Time Check: Unknown message (0x%X) !!!! 
Line 4035: [TphyUrrcSap] CurCfn=%d, UrrcActTime=%d, IsRfResume=%d
Line 4064: [TphyUrrcSap] Activation time is changed to =%d
Line 4073: tphy_CTphyUrrcMessageInterface_isRfReleaseForSignalingNeeded: CUPHY_NON_UMTS_RAT_MODE_REQ
Line 4077: tphy_CTphyUrrcMessageInterface_isRfReleaseForSignalingNeeded: CTPHY_DEDICATED_MODE_RELEASE_REQ
Line 4081: tphy_CTphyUrrcMessageInterface_isRfReleaseForSignalingNeeded: CTPHY_HSDSCH_RELEASE_REQ
Line 4085: tphy_CTphyUrrcMessageInterface_isRfReleaseForSignalingNeeded: CTPHY_PCH_RESOURCES_RELEASE_REQ
Line 4089: tphy_CTphyUrrcMessageInterface_isRfReleaseForSignalingNeeded: CTPHY_BCH_RESOURCES_RELEASE_REQ
Line 4093: tphy_CTphyUrrcMessageInterface_isRfReleaseForSignalingNeeded: CTPHY_FACH_RESOURCES_RELEASE_REQ
Line 4097: tphy_CTphyUrrcMessageInterface_isRfReleaseForSignalingNeeded: CTPHY_RACH_RESOURCES_RELEASE_REQ
Line 4101: tphy_CTphyUrrcMessageInterface_isRfReleaseForSignalingNeeded: RF Release for Signalling not needed: Msg Id: %x
