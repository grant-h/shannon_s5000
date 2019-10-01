Line 407: FD Support in Pre R8 and R8 (T323 absent)
Line 414: FD Support in MultiRAB
Line 422: FD Support in Rel8, T323
Line 435: Failed to create TimerQuickRollbackToLte
Line 440: Failed to create Timer RelReqAllResources
Line 445: Failed to create T323
Line 461: [DSDS] Failed to create T_DS_delaySigStop_timer
Line 467: [DSDS] Failed to create T_DS_SCRI_protection_timer
Line 473: Failed to create TimerEstReq
Line 476: SCNX Being Initialized
Line 481: Scnx_init: FailState
Line 577: Scnx_CallBackFunc: State(%d) is not acceptable for USER_DATA_REQ
Line 585: Scnx_CallBackFunc: No Scnx Instance was created
Line 600: Scnx_CallBackFunc: MsgNotSent
Line 644: Scnx_CallBackFunc: MM_URRC_DSDS_SIG_START_IND - Ps Scnx inst does not exist!!
Line 661: Scnx_CallBackFunc: MM_URRC_DSDS_SIG_START_IND(IMS) - Ps Scnx inst does not exist!!
Line 669: Scnx_CallBackFunc: MM_URRC_DSDS_SIG_START_IND %d
Line 677: Scnx_CallBackFunc: Invalid proc in MM_URRC_DSDS_SIG_START_IND %d
Line 703: Scnx_CallBackFunc: MM_URRC_DSDS_SIG_END_IND - Ps Scnx inst does not exist!!
Line 720: Scnx_CallBackFunc: MM_URRC_DSDS_SIG_END_IND(IMS) - Ps Scnx inst does not exist!!
Line 727: Scnx_CallBackFunc: Invalid proc in MM_URRC_DSDS_SIG_END_IND %d
Line 735: Scnx_CallBackFunc: InvalidMsgId
Line 741: Scnx_CallBackFunc: StatusMsgNotSent
Line 773: GetScnxInstId: Invalid CnDomain
Line 1194: [DM Update] EventType(RLF_OR_WEAK_SIGNAL %d), Cause(Timer-expired %d)
Line 1202: [DM Update] EventType(RLF_OR_WEAK_SIGNAL %d), Cause(Rlc-MaxNumberRetx %d)
Line 1207: MMAbort Cause(%d)
Line 1244: GetScnxStatus: InvalidCnDomain
Line 1285: GenerateUlMsgConfirm: InvalidRetVal
Line 1298: TID for RB Release Complete msg is set from %d to %d
Line 1362: [URRC DSDS] Est Req Rejected from Dsrc
Line 1369: ImsSigPendingOnDsrc was set . which is cleared
Line 1371: [URRC DSDS] Est Req Granted from Dsrc
Line 1397: Rel_EstReq: FailState
Line 1410: [URRC DSDS] Sending Sig Stop to be delayed
Line 1459: Rel_EstReq: Invalid CnDomain
Line 1474: Rel_EstReq: Invalid UE Id
Line 1490: Rel_EstReq: Invalid UE Id
Line 1496: Rel_EstReq: Invalid CnDomain
Line 1519: Rel_EstReq: Primary PLMN Id: MCC(%d%d%d) MNC(%d%d) set to IDT
Line 1533: CSFB Flag Set(%d)
Line 1552: DO not block cell reselection in equipment mode
Line 1567: QuickRollbackToLte(PsScnx) is forcedly set FALSE due to new CS call
Line 1575: ERROR Stopping TQuickRollbackToLte
Line 1579: TQuickRollbackToLte was running so it was stopped
Line 1585: RelReqAllResources(PsScnx) is forcedly set FALSE due to new CS call
Line 1593: ERROR Stopping TQuickRollbackToLte
Line 1597: TQuickRollbackToLte was running so it was stopped
Line 1617: Redirection is in Progress, Reject EstReq based on redirection Rat Type(%d)
Line 1631: RedirectionTypeToOtherRat is not valid(%d)
Line 1638: SRRC Client is not registered but redirection is not progressed. Just reject EST_REQ
Line 1663: [URRC DSDS] Est Req Rejected from Dsrc
Line 1670: ImsSigPendingOnDsrc was set . which is cleared
Line 1672: [URRC DSDS] Est Req Granted from Dsrc
Line 1702: Rel_EstReq: FailState
Line 1715: [URRC DSDS] Sending Sig Stop to be delayed
Line 1752: Rel_EstReq: Invalid CnDomain
Line 1767: Rel_EstReq: Invalid UE Id
Line 1783: Rel_EstReq: Invalid UE Id
Line 1789: Rel_EstReq: Invalid CnDomain
Line 1806: Rel_EstReq: Primary PLMN Id: MCC(%d%d%d) MNC(%d%d) set to IDT
Line 1824: CSFB Flag Set(%d)
Line 1842: DO not block cell reselection for equipment
Line 1857: QuickRollbackToLte(PsScnx) is forcedly set FALSE due to new CS call
Line 1865: ERROR Stopping TQuickRollbackToLte
Line 1869: TQuickRollbackToLte was running so it was stopped
Line 1875: RelReqAllResources(PsScnx) is forcedly set FALSE due to new CS call
Line 1883: ERROR Stopping TRelReqAllResources
Line 1887: TRelReqAllResources was running so it was stopped
Line 1907: Redirection is in Progress, Reject EstReq based on redirection Rat Type(%d)
Line 1921: RedirectionTypeToOtherRat is not valid(%d)
Line 1928: SRRC Client is not registered but redirection is not progressed. Just reject EST_REQ
Line 1977: Rel_ScnxEst: FailState
Line 1983: Ignore -> SignallingCnxEstablished is not intended except for HO (cause %d)
Line 2022: Fatal Error: Messsage Freed abnormally @ [State : %d] [Event : %d] 
Line 2118: Rel_EstReq: FailState
Line 2135: ImsSigPendingOnDsrc was set . which is cleared
Line 2146: T_DS_delaySigStop_timer Stopped
Line 2150: ERROR-Stopping T_DS_delaySigStop_timer
Line 2177: CSFB Flag Set(%d) for CM Service Request
Line 2186: Scnx_p->DtaNasMsgPtr : 0x%x
Line 2234: EstIdle_amDataReq: MsgNotSent
Line 2239: EstIdle_amDataReq: FailState
Line 2245: GenerateUplinkResourceReq MsgPtr is NULL
Line 2288: Rel_EstReq: FailState
Line 2302: EstIdle_UserDataReq: TotalULdata = %d bytes
Line 2309: EstIdle_UserDataReq: MsgNotSent
Line 2314: EstIdle_UserDataReq: MsgNotSent
Line 2357: EstablishedIdle_amRelReq(): MsgNotSent to CnxMgr
Line 2378: EstablishedIdle_RelReq: MsgNotSent
Line 2384: EstablishedIdle_RelReq: FailState
Line 2516: EstablishedIdle_amRelReq(): MsgNotSent to CnxMgr
Line 2537: EstablishedIdle_RelReq: MsgNotSent
Line 2543: EstablishedIdle_RelReq: FailState
Line 2582: DefaultState_EstRej: MsgNotSent
Line 2628: DefaultState_amEstReject: FailState
Line 2636: DefaultState_EstRej: MsgNotSent
Line 2686: AwaitingRrcCnx_EstRej: MsgNotSent
Line 2705: AwaitingRrcCnx_EstRej: MsgNotSent
Line 2712: AwaitingRrcCnx_EstRej: FailState
Line 2761: EstablishingWaitUlRes_EstRej: MsgNotSent
Line 2766: EstablishingWaitUlRes_EstRej: FailState
Line 2813: AwaitingRlcIdtCnf_EstRej: MsgNotSent
Line 2823: AwaitingRlcIdtCnf_EstRej: MsgNotSent
Line 2828: AwaitingRlcIdtCnf_EstRej: FailState
Line 2836: AwaitingRlcIdtCnf_EstRej: FailState
Line 2888: AwaitingRrcCnx_RelReq: MsgNotSent
Line 2893: AwaitingRrcCnx_RelReq: FailState
Line 2939: EstablishingWaitUlRes_RelReq: FailState
Line 2978: AwaitingRrcRel_RelReq: FailState
Line 3025: Rel_EstReq: FailState
Line 3045: EstablishedIdle_amRelReq(): MsgNotSent to CnxMgr
Line 3065: EstablishedIdle_RelReq: MsgNotSent
Line 3071: EstablishedIdle_RelReq: FailState
Line 3116: FailState
Line 3128: EstablishedIdle_PSNoDataReq: fdcause=DATAINACTIVITY
Line 3132: EstablishedIdle_PSNoDataReq: fdcause=PS_SIGNALING_RELEASE_FOR_QRB
Line 3138: EstablishedIdle_PSNoDataReq: fdcause=PS_SIGNALING_RELEASE_FOR_QRB, QrbRequired %d
Line 3158: MsgNotSent
Line 3163: FailState
Line 3169: CreateSCRIforFastDormancy returned FALSE
Line 3175: T323 is running
Line 3206: EstablishedIdle_PSNoDataReq: Invalid Cause
Line 3240: EstablishedWaitUlRes_PSNoDataReq: fdcause=DATAINACTIVITY
Line 3244: EstablishedWaitUlRes_PSNoDataReq: fdcause=PS_SIGNALING_RELEASE_FOR_QRB
Line 3250: EstablishedWaitUlRes_PSNoDataReq: fdcause=PS_SIGNALING_RELEASE_FOR_QRB, QrbRequired %d
Line 3272: Failed to create SCRI for DATAINACTIVITY
Line 3294: EstablishedWaitUlRes_PSNoDataReq: Invalid Cause
Line 3328: AwaitingRlcUlDtCnf_PSNoDataReq: fdcause=DATAINACTIVITY
Line 3332: AwaitingRlcUlDtCnf_PSNoDataReq: fdcause=PS_SIGNALING_RELEASE_FOR_QRB
Line 3338: AwaitingRlcUlDtCnf_PSNoDataReq: fdcause=PS_SIGNALING_RELEASE_FOR_QRB, QrbRequired %d
Line 3378: AwaitingRlcUlDtCnf_PSNoDataReq: MsgNotSent
Line 3387: Error is starting T_DS_SCRI_protection_timer timer
Line 3402: AwaitingRlcUlDtCnf_PSNoDataReq: MsgNotSent
Line 3409: Waiting for DSRC Response for sending SCRI
Line 3428: AwaitingRlcUlDtCnf_PSNoDataReq: FailState
Line 3467: AwaitingRlcUlDtCnf_PSNoDataReq: Invalid cause
Line 3502: EstablishedIdle_amRelReq(): MsgNotSent to CnxMgr
Line 3523: EstablishedIdle_RelReq: MsgNotSent
Line 3529: EstablishedIdle_RelReq: FailState
Line 3598: AwaitingRlcScriAndUlDtCnf_DataReq: MsgNotSent
Line 3626: AwaitingRlcScriAndUlDtCnf_EstReq
Line 3731: EstablishedIdle_amRelReq(): MsgNotSent to CnxMgr
Line 3753: AwaitingRlcScriAndUlDtCnf_RelReq: MsgNotSent
Line 3759: AwaitingRlcScriAndUlDtCnf_RelReq: FailState
Line 3784: AwaitingRlcScriAndUlDtCnf_RlcAmDataAck: SCRI Ack Received
Line 3803: AwaitingRlcScriAndUlDtCnf_RlcAmDataAck: FailState
Line 3811: AwaitingRlcScriAndUlDtCnf_RlcAmDataAck: FailState
Line 3848: AwaitingRlcScriAndUlDtCnf_RlcAmDataNack: SCRI Ack Received
Line 3862: AwaitingRlcScriAndUlDtCnf_RlcAmDataNack: FailState
Line 3870: AwaitingRlcScriAndUlDtCnf_RlcAmDataNack: FailState
Line 3934: waitingRlcScriAndUlDtCnf_RrcCnxRel: FailState
Line 3940: AwaitingRlcScriAndUlDtCnf: Implicit Scnx Release -> Ignored
Line 3974: waitingRlcScriAndUlDtCnf_UlResourcesGranted
Line 4002: AwaitingRlcScriAndUlDtCnf_UlResourcesRejected
Line 4011: AwaitingRlcScriAndUlDtCnf_UlResourcesRejected: FailState
Line 4094: waitingRlcScriAndUlDtCnf_RlcReest: MsgNotSent
Line 4136: waitingRlcScriAndUlDtCnf_RlcRB2Reest: FailState
Line 4144: waitingRlcScriAndUlDtCnf_RlcRB2Reest: FailState
Line 4175: waitingRlcScriAndUlDtCnf_UserInactivity: FailState
Line 4224: EstablishedIdle_amRelReq(): MsgNotSent to CnxMgr
Line 4244: EstablishedIdle_RelReq: MsgNotSent
Line 4250: EstablishedIdle_RelReq: FailState
Line 4335: EstablishedWaitUlRes_amRelReq(): MsgNotSent to CnxMgr
Line 4356: EstablishedWaitUlRes_RelReq: MsgNotSent
Line 4362: EstablishedWaitUlRes_RelReq: FailState
Line 4399: EstablishedWaitUlRes_amUserDataReq: FailState
Line 4410: EstablishedWaitUlRes_amUserDataReq : USER_DATA_REQ(%d) not acceptable
Line 4466: AwaitingRlcUlDtCnf_amRelReq(): MsgNotSent to CnxMgr
Line 4486: EstablishedWaitUlRes_RelReq: MsgNotSent
Line 4492: EstablishedWaitUlRes_RelReq: FailState
Line 4525: AwaitingRrcCnx_RrcCnxEst: MsgNotSent
Line 4530: AwaitingRrcCnx_RrcCnxEst: FailState
Line 4586: No PagingInd Inst
Line 4592: AwaitingRrcCnx_RrcCnxRej: FailState
Line 4782: ERROR starting Timer TQuickRollbackToLte
Line 4787: Releasing_MsgDlScnxRel: FailState
Line 4802: ERROR starting Timer TRelReqAllResources
Line 4807: Releasing_MsgDlScnxRel: FailState
Line 4821: Releasing_MsgDlScnxRel: FailState
Line 4846: Fatal Error: Messsage Freed abnormally @ [State : %d] [Event : %d] 
Line 4866: Send URRC_MM_SECURITY_IND at reception of IDT ACK
Line 4872: Send URRC_MM_SECURITY_IND at reception of IDT ACK
Line 4883: AwaitingRlcIdtCnf_RlcAmDataAck: Invalid Domain
Line 4904: AwaitingRlcIdtCnf_RlcAmDataAck: FailState
Line 4935: Send URRC_MM_SECURITY_IND at reception of IDT ACK
Line 4941: Send URRC_MM_SECURITY_IND at reception of IDT ACK
Line 4952: AwaitingRlcIdtCnf_RlcAmDataAck: Invalid Domain
Line 4974: AwaitingRlcIdtCnf_RlcAmDataAck: FailState
Line 5041: AwaitingRlcIdtCnf_RlcAmDataNack: FailState
Line 5069: AwaitingRlcUlDtCnf_RlcAmDataAck: FailState
Line 5104: AwaitingRlcUlDtCnf_RlcAmDataNack: FailState
Line 5166: EstablishingWaitUlRes_UlResGranted: MsgNotSent
Line 5171: EstablishingWaitUlRes_UlResGranted: FailState
Line 5207: EstablishedWaitUlRes_UlResGranted: MsgNotSent
Line 5238: EstablishedWaitUlRes_UlResGranted: MsgNotSent
Line 5247: Error is starting T_DS_SCRI_protection_timer timer
Line 5264: EstablishedWaitUlRes_UlResGranted: MsgNotSent
Line 5271: Waiting for DSRC Response for sending SCRI
Line 5296: EstablishedWaitUlRes_UlResGranted: FailState
Line 5304: EstablishedWaitUlRes_UlResGranted: FailState
Line 5315: EstablishedWaitUlRes_UlResGranted: FailState
Line 5343: %d SCRIs sent but no L2Ack/Nack received so SCNX will be terminated
Line 5351: [RELEASING state] SCRI count(%d)
Line 5357: Releasing_UlResGranted: MsgNotSent
Line 5406: EstablishingWaitUlRes_UlResRej: FailState
Line 5473: V316 (%d), UserV316 (%d)
Line 5483: EstablishedWaitUlRes_UlResRej: FailState
Line 5536: Releasing_amUlResourcesRejected()-Fail to change the state
Line 5548: Releasing_amUlResourcesRejected()-Fail to change the state
Line 5558: Releasing_UlResRej
Line 5606: Releasing_UlResRej: FailState
Line 5629: AwaitingRrcCnx_TerminateReq
Line 5649: EstablishingWaitUlRes_TerminateReq
Line 5669: AwaitingRlcIdtCnf_TerminateReq
Line 5693: Send URRC_MM_SECURITY_IND at reception of IDT ACK
Line 5699: Send URRC_MM_SECURITY_IND at reception of IDT ACK
Line 5710: AwaitingRlcIdtCnf_RlcAmDataAck: Invalid Domain
Line 5734: AwaitingRlcIdtCnf_SignallingCnxEstablished: FailState
Line 5740: Ignore -> SignallingCnxEstablished is not intended except for Delayed L2ACK (cause %d)
Line 5794: Rel_EstReq: FailState
Line 5882: EstablishedIdle_amRelReq(): MsgNotSent to CnxMgr
Line 5903: EstablishedIdle_RelReq: MsgNotSent
Line 5910: EstablishedIdle_RelReq: FailState
Line 5950: AwaitingRrcCnx_EstReq
Line 5969: EstablishingWaitUlRes_EstReq
Line 5987: AwaitingRlcIdtCnf_EstReq
Line 6007: EstablishedIdle_EstReq
Line 6026: EstablishedWaitUlRes_EstReq
Line 6045: AwaitingRlcUlDtCnf_EstReq
Line 6060: AwaitingRlcUlDtCnf_UlResGranted
Line 6074: waitingRlcUlDtCnf_UlResRej
Line 6081: waitingRlcUlDtCnf_UlResRej: FailState
Line 6101: waitingRrcRel_EstReq
Line 6156: AwaitingRrcCnx_RrcCnxRel: FailState
Line 6203: EstablishingWaitUlRes_RrcCnxRel: FailState
Line 6258: AwaitingRlcIdtCnf_RrcCnxRel: FailState
Line 6295: EstablishingWaitUlRes_MsgDlScnxRel: FailState
Line 6333: EstablishingWaitUlRes_MsgDlScnxRel: FailState
Line 6364: EstablishingWaitUlRes_UserInactivity: FailState
Line 6401: AwaitingRrcRel_RrcCnxRel: FailState
Line 6410: AwaitingRrcRel_RrcCnxRel: FailState
Line 6454: EstablishedIdle_RrcCnxRel: FailState
Line 6460: EstablishedIdle: Implicit Scnx Release -> Ignored
Line 6522: EstablishedWaitUlRes_RrcCnxRel: FailState
Line 6528: EstablishedWaitUlRes: Implicit Scnx Release -> Ignored
Line 6567: AwaitingRlcUlDtCnf_RrcCnxRel: FailState
Line 6573: AwaitingRlcUlDtCnf: Implicit Scnx Release -> Ignored
Line 6624: ERROR Starting TQuickRollbackToLte
Line 6629: Releasing_RrcCnxRel
Line 6654: ERROR Starting TRelReqAllResources
Line 6659: Releasing_RrcCnxRel
Line 6700: Releasing_RrcCnxRel: FailState
Line 6735: ERROR Starting TQuickRollbackToLte
Line 6740: Releasing_RlcAmDataAck: FailState
Line 6755: ERROR Starting TRelReqAllResources
Line 6760: Releasing_RlcAmDataAck: FailState
Line 6791: Releasing_RlcAmDataAck: MsgNotSent
Line 6800: Releasing_RlcAmDataAck: FailState
Line 6817: Releasing_RlcAmDataNack: Failed to send SCRI (Releasing->Released: IDLE)
Line 6857: Releasing_RlcAmDataNack: FailState
Line 6866: Releasing_RlcAmDataNack: Failed to send SCRI (Releasing->Releasing: NON-IDLE)
Line 6871: Releasing_RlcAmDataNack: Failed to generate SCRI (Releasing->Releasing: NonIDLE)
Line 6895: Releasing_RlcAmDataNack: MsgNotSent
Line 6928: AwaitingRlcIdtCnf_RlcReset: MsgNotSent
Line 6934: AwaitingRlcIdtCnf_RlcReset: FailState
Line 6940: AwaitingRlcIdtCnf_RlcReset: IdtMsgInstId = NULL
Line 7016: AwaitingRlcUlDtCnf_RlcReest: MsgNotSent
Line 7048: Releasing_RlcRB2Reest: Failed to send SCRI (Releasing->Released: IDLE)
Line 7087: Releasing_RlcRB2Reest: FailState
Line 7112: Releasing_RlcRB2Reest: MsgNotSent
Line 7146: TQuickRollbackToLte Timer stopped
Line 7150: Error: Stopping TQuickRollbackToLte
Line 7169: TRelReqAllResources Timer stopped
Line 7173: Error: Stopping TRelReqAllResources
Line 7186: ReleasingWaitCnxRel_RrcCnxRel: FailState
Line 7208: WaitCnxRel : Ignore Scnx Release
Line 7256: AwaitingBplmnAbortCnf_amRelReq()
Line 7265: AwaitingBplmnAbortCnf_amRelReq()
Line 7329: AwaitingBplmnAbortCnf_amTerminateReq()
Line 7341: AwaitingBplmnAbortCnf_amTerminateReq()
Line 7352: AwaitingBplmnAbortCnf_amTerminateReq()
Line 7435: AwaitingBplmnAbortCnf: Implicit Scnx Release -> Ignored
Line 7448: AwaitingBplmnAbortCnf_amRrcCnxReleased()
Line 7527: AwaitingBplmnAbortCnf_amMsgDlScnxRel()
Line 7591: AwaitingBplmnAbortCnf_BplmnAborted: FailState
Line 7633: AwaitingBplmnAbortCnf_BplmnAborted: FailState
Line 7770: [DSDS] T_DS_delaySigStop_timer running, ignoring sig_stop from NAS
Line 7791: [DSDS] Failed to Start T_DS_delaySigStop_timer
Line 7801: [DSDS] Failed to Start T_DS_delaySigStop_timer
Line 7841: [URRC DSDS] IMS Signaling Rejected from Dsrc
Line 7847: [URRC DSDS] IMS Signaling Granted from Dsrc
Line 7866: SigStart handled for already IMS_signalling state
Line 7872: Nas_signalling request for PS domain is already pending on DSRC
Line 7921: Nas_signalling request for PS domain is already pending on DSRC
Line 7965: [URRC DSDS] CUPHY_SIG_START not sent,UPHY already intialised
Line 7971: [URRC DSDS] CUPHY_SIG_STOP not sent, Signaling mode:, PS(%d), PS_IMS(%d)
Line 8002: [URRC DSDS] CUPHY_SIG_START not sent,UPHY already intialised
Line 8008: [URRC DSDS] CUPHY_SIG_STOP not sent, Signaling mode:, CS(%d), PS_IMS(%d)
Line 8029: [URRC DSDS] CUPHY_SIG_START not sent,UPHY already intialised
Line 8034: [URRC DSDS] CUPHY_SIG_START not sent for IMS. CS is in Signaling mode
Line 8067: [URRC DSDS] CUPHY_SIG_STOP not sent,Signaling already stopped
Line 8072: [URRC DSDS] CUPHY_SIG_STOP not sent,UPHY already intialised
Line 8079: [URRC DSDS] CUPHY_SIG_STOP not sent, Signaling mode:, PS(%d), PS_IMS(%d)
Line 8104: [URRC DSDS] CUPHY_SIG_STOP not sent,Signaling already stopped
Line 8109: [URRC DSDS] CUPHY_SIG_STOP not sent,UPHY already intialised
Line 8116: [URRC DSDS] CUPHY_SIG_STOP not sent, Signaling mode: CS(%d), PS(%d), PS_IMS(%d)
Line 8135: [URRC DSDS] Handling delay time expiry
Line 8150: T_DS_delaySigStop_timer Stopped
Line 8154: ERROR-Stopping T_DS_delaySigStop_timer
Line 8166: ERROR: Msg creation failed
Line 8186: UMTS INIT/NON UMTS RAT MODE happens, Send Sig Stop
Line 8190: UMTS INIT/NON UMTS RAT MODE happens, Signaling already stopped
Line 8235: UMTS RAT MODE happens, Send Sig Start
Line 8281: [URRC DSDS] CUPHY_SIG_START not sent,UPHY already intialised
Line 8286: [URRC DSDS] CUPHY_SIG_START not sent. PS is in Signaling mode
Line 8314: [URRC DSDS] CUPHY_SIG_START not sent,UPHY already intialised
Line 8319: [URRC DSDS] CUPHY_SIG_START not sent. CS is in Signaling mode
Line 8337: [URRC DSDS] CUPHY_SIG_START not sent,UPHY already intialised
Line 8342: [URRC DSDS] CUPHY_SIG_START not sent. CS is in Signaling mode
Line 8375: [URRC DSDS] CUPHY_SIG_STOP not sent,Signaling already stopped
Line 8380: [URRC DSDS] CUPHY_SIG_STOP not sent,UPHY already intialised
Line 8386: [URRC DSDS] CUPHY_SIG_STOP not sent. PS is in Signaling mode
Line 8408: [URRC DSDS] CUPHY_SIG_STOP not sent,Signaling already stopped
Line 8413: [URRC DSDS] CUPHY_SIG_STOP not sent,UPHY already intialised
Line 8419: [URRC DSDS] CUPHY_SIG_STOP not sent. CS is in Signaling mode
Line 8432: [URRC DSDS] Handling delay time expiry
Line 8472: rrc_UnRegister_CnxMgr_StateChange FAILED
Line 8506: T_DS_delaySigStop_timer Stopped
Line 8510: ERROR-Stopping T_DS_delaySigStop_timer
Line 8520: Error in stopping T_DS_SCRI_protection_timer
Line 8553: rrc_UnRegister_CnxMgr_StateChange FAILED
Line 8564: Could not start TimerEstReq(%d s)
Line 8569: TimerEstReq is already running
Line 8600: CallbackTimerEstReqExpiry: MsgNotSent
Line 8605: CallbackTimerEstReqExpiry: FailState
Line 8616: Could not stop TimerEstReq(Timer Id %d)
Line 8659: [SendNasRelInd] ReleaseType %d
Line 8758: CalcRpBasedOnIdScope: Invalid IdScope
Line 8800: CalcRpBasedOnEstCause: Invalid IMSI
Line 8831: CalcRpBasedOnEstCause: Invalid UE Id
Line 8859: CalcRpBasedOnEstCause: Invalid IMSI
Line 8891: CalcRpBasedOnEstCause: Invalid UE Id
Line 8909: CalcRpBasedOnEstCause: Invalid IMEI
Line 8914: CalcRpBasedOnEstCause: Invalid EstCause %d
Line 8958: ChangeState: FailState
Line 8978: ChangeState: MsgNotSent
Line 8998: Camp On Acceptable cell -> Acceptable cell is not HPLMN/EPLMN/Acting PLMN
Line 9004: Camp On Acceptable cell -> Acceptable cell is not H-PLMN/E-PLMN
Line 9017: ChangeState: MsgNotSent
Line 9022: FailState-Rrc_Cnx_Established
Line 9033: FailState-Rrc_Cnx_Established
Line 9040: ChangeState: MsgNotSent
Line 9048: FailState-Rrc_Cnx_Releasing
Line 9058: FailState-Rrc_Cnx_Establishing
Line 9063: ChangeState: Invalid CnxMgrState
Line 9098: SetLocalTmsiRoutingPar: Invalid TMSI
Line 9130: SetLocalPtmsiRoutingPar: Invalid PTMSI
Line 9166: SetSamePlmnTmsiRoutingPar: Invalid TMSI
Line 9199: SetSamePlmnPtmsiRoutingPar: Invalid PTMSI
Line 9233: SetDiffPlmnTmsiRoutingPar: Invalid TMSI
Line 9266: SetDiffPlmnPtmsiRoutingPar: Invalid TMSI
Line 9285: T323 Stopped
Line 9289: ERROR-Stopping T323
Line 9309: Scnx_StartT323: T323 (%d)Ms Started
Line 9312: Failed to Start T323
Line 9334: GenMsg is NULL
Line 9349: Clear CSFB Flag
Line 9368: Clear QrbRequired Flag
Line 9426: CreateSCRIforFastDormancy: V316 (%d), UserV316 (%d)
Line 9429: Creating SCRI for DATAINACTIVITY
Line 9490: EstablishedTerminate: MsgNotSent
Line 9496: EstablishedTerminate: FailState
Line 9526: ReleasingTerminate: MsgNotSent
Line 9537: ReleasingTerminate: FailState
Line 9576: EstablishingTerminate: FailState
Line 9678: MsgDownlinkRel: FailState
Line 9722: HandoverToGsmCompl: WARNING! Received in PS Domain(%d)
Line 9793: HandoverToGsmCompl: Invalid Domain
Line 9882: UlDtMsgInst Not Found in LinkList
Line 9922: UlDtMsgInst Not Found in LinkList
Line 9957: CnxMgr requested to initiate Cell Update for UL Data Tx
Line 9962: No need to worry about CnxMgr Active changes in Scnx_p Scnx state
Line 9966: Scnx Not interested in Scnx_p CnxMgr Active State Change
Line 9980: Awaiting IDT Cnf or Awaiting SCRI Cnf (%d): Transition to PCH
Line 9984: Scnx Not interested in CnxMgr Pending State Changes
Line 10147: SetBlockIratResel blockIratReselInFach set to TRUE
Line 10159: ResetBlockIratResel blockIratReselInFach set to FALSE
Line 10186: There is already same MsgId(%x): Replace it
Line 10202: SavedMsgCount(%d) is MAX_SAVED_MSG(%d) - This new msg cannot be saved. Discard MsgId(%x)
Line 10207: Save an CurrentMsg(%x) at SavedMsgPtr[%d]
Line 10218: [State : %d] Save CurrentState
Line 10232: Re-post SavedMsgPtr[%d] MsgId(%x)
Line 10241: SavedMsgCount is %d, no saved msg so repost is not needed
Line 10283: Fatal Error: Messsage Freed abnormally @ [State : %d] [Event : %d] 
Line 10305: PLMN ID is not available
Line 10320: FD req is ignored in Cell_PCH and Ura_PCH by requirement
Line 10325: FD req is ignored in RadiolinkFailure
Line 10375: EstablishedWaitUlRes_UlResGranted: MsgNotSent
Line 10385: Error is starting T_DS_SCRI_protection_timer timer
Line 10402: EstablishedWaitUlRes_UlResGranted: MsgNotSent
