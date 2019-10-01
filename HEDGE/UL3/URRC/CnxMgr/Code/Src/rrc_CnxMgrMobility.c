Line 243: Serious Problem , could not do state initialisation
Line 404: Security Reconfiguration in Process
Line 418: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 427: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 474: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 483: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 540: Security Reconfiguration in Process
Line 554: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 563: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 601: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 610: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 662: Security Reconfiguration in Process
Line 676: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 685: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 732: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 741: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 771: Transition To Idle From Connected-Mobility-State Initiated
Line 808: rrc_CnxMgrMobility_TransitToIdleForExceptionalHandling
Line 904: Establishment Cause = %d
Line 932: Cell Update: TVI set
Line 936: Cell Update: TVI Not set
Line 941: Cell Update Cause != UL data Tx
Line 1015: Create and Send CellUpdate, wait for CompleteToBuildMsg 
Line 1030: rrc_CnxMgrMobility_CreateAndSendUraUpdate
Line 1127: Response Message sent in the Uplink.
Line 1131: Serious Problem, Couldnt create resonse message
Line 1223: NextUpdate Message sent, wait for CompleteToBuildMsg 
Line 1242: T302ExpiryOrCellReselection Occurred 
Line 1262: RadioLinkFailure Scenario, Both T314&315 have expired, Wait for ResMgr event AllRabsReleased 
Line 1302: V302check failed, preparing to Enter Idle 
Line 1324: Remove ServingCellCacheInfo for this cell(UARFCN%d,PSC%d) because N300 exceed and SIB5 need to be read again
Line 1347: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 1356: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 1425: Tx-CURLC_REDIRECTION_STATUS_IND
Line 1432: FatalError : RedirectionType is unknown(%d)
Line 1446: ConnectionRelease Process failure 
Line 1472: Protocol Error %d detected in connectionrelease 
Line 1480: Hit a Default case which is not currently handled
Line 1488: Serious Problem, Error Occurance, Error Resolution Failure
Line 1514: RRC ConnectionReleasecomplete sent in the uplink , waiting for L2-ACK 
Line 1616: Received UraUpdateconfirm needs a response in uplink 
Line 1650: CellUpdateConfirm needs a response in the uplink 
Line 1697: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 1702: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 1713: [Mobility >> Reselection] No Progress => start to configure DCH from FACH
Line 1753: Failure sending msg to CnxMgr
Line 1787: V302 check passed , Another Update Possible 
Line 1792: V302 check failed , no-more update possible 
Line 1838: C-rnti check failed , there can be another update 
Line 1849: vl_rrcState returned from rrc_DlMsgInitialProcess_getRrcState is NULL
Line 1869:  isSrns=%d 
Line 1870:  isPdcpEmpty=%d 
Line 1871:  isCipherMode=%d 
Line 1878: Need to wait for L2-ack for the uplink message 
Line 1883: No Need to wait for the L2-ack for the uplink message
Line 2081: SecurityMgr is NULL
Line 2102: Establishment Cause = %d
Line 2109: rrc_CnxMgrMobility: Update process initiated
Line 2137: Cell-selection occurred while waiting for the Confirm message 
Line 2158: RadioLinkFailure Scenario , Both T314&315 have expired, Wait for ResMgr event AllRabsReleased 
Line 2192: V302check failed , preparing to Enter Idle
Line 2283: Connection release received on DCCH , send Release Complete
Line 2290: Connection release on CCCH , no response needed 
Line 2315: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 2324: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 2427: RrcConnectionEstablishment Succeed on Uarfcn(%d) Cpich(%d) which TxFailParam Validity Timer is running!
Line 2435: [TxFailParam]rrc_Features.SuppTxFailParam(%d) is disabled
Line 2458: CellUpdateConfirm, Transition to CELL_DCH
Line 2470: CellUpdateConfirm, HHO, Transition to CELL_FACH
Line 2502: Due to second cellupdate ,only configure RBs
Line 2534: Happy-CellUpdateConfirm.
Line 2570: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 2579: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 2607: CellUpdateConfirm to CellPch
Line 2613: CellUpdateConfirm to UraPch
Line 2623: T302ExpiryOrCellReselection
Line 2666: Happy CellUpdateConfirm
Line 2697: unsupported RrcState Enum
Line 2703: vp_state returned from rrc_DlMsgInitialProcess_getRrcState is NULL
Line 2711: In TDD, NFreq is set to FALSE due to CellUpdateConfirm failure
Line 2735: Errorneous CellUpdateConfirm Recived with %d Prot-Error 
Line 2752: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 2761: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 2794: Erroneous CellUpdateConfirm, with FailureCause %d  
Line 2810: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 2819: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 2843: Failuer due to Physical Channel information missing 
Line 2859: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 2868: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 2896: Serious Problem CnxMgrMobility_p error %i is not handled 
Line 2922: Terminate RRC Connection from NAS received while waiting for CUConfirm
Line 3002: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 3011: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 3064: Default_OutOfService in %d state 
Line 3094: EvaluatingInterFreqCell received while waiting for CUConfirm 
Line 3148: CellReselectionToGsmInProgress received while waiting for CUConfirm
Line 3208: CellReselectionToEutraInProgress received while waiting for CUConfirm
Line 3266: ALL RABS Released 
Line 3279: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 3288: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 3365: UraUpdateCofirm Received , Trasnsition to CellPch
Line 3370: UraUpdateCofirm Received , Trasnsition to UraPch
Line 3404: Another UraUpdate Needed, may be due to Confirmation Error
Line 3490: Another UraUpdate due to Confirmation Error
Line 3502: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 3511: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 3536: CellDch Transition specified in UraUpdateConfirm
Line 3563: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 3572: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 3607: UraUpdateCofirm Received, Trasnsition to Cell FACH
Line 3618: UraUpdateCofirm Received , Sending Response Message
Line 3628: UraUpdateCofirm Received , No Response Needed
Line 3655: Not able to resolve the RRC state Specified
Line 3662: vp_state returned from rrc_DlMsgInitialProcess_getRrcState is NULL
Line 3685: Protocol Errror %d in UraUpdateConfirm 
Line 3701: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 3710: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 3742: InvalidConfiguration in UraUpdateConfirm Received
Line 3758: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 3767: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 3792: Should not end up here because Just specifying transition to Cell-DCH in a Ura Update cnf message leads to  CnxMgrMobility_p error, discuss with dl-msg
Line 3797: This Error cannot happen in UraUpdateCnf message refer 8.3.1.9a of 25.331 , but occurs
Line 3806: Configuration Unsupported cannot happen in UraUpdateCnf message , Read the comment in the code for more info
Line 3818: Serious Problem CnxMgrMobility_p error %i is not handled
Line 3855: [WaitingForUpdateConfirm] ASN.1 Encode Fail => T302 restarted. waiting for a next trial 
Line 3903: WaitingForUpdateConfirm_PreSuspendReq 
Line 3931: WaitingForUpdateConfirm_SuspendReqOnGsmDoneInd 
Line 3959: WaitingForUpdateConfirm_NonUmtsRatCnf 
Line 3976: GenMsg is NULL 
Line 3986: GenMsg is NULL in WaitingForUpdateConfirm_NonUmtsRatCnf
Line 4012: OutOfService when Selecting a Cell in CnxMgrMobility 
Line 4049: SelectingCell_NonUmtsRatCnf
Line 4068: GenMsg is NULL 
Line 4078: GenMsg returned from rrc_Class_CnxMgr_GenerateSuspendFromPreSuspend is NULL
Line 4104: SelectingCell_PreSuspendReq
Line 4125: SelectingCell_SuspendReqOnGsmDoneInd
Line 4189: TerminateRRCCnx Received
Line 4274: This stack is made to work even if it could not configure common resources
Line 4298: RecvMsgCellUpdateCnf in unexpected state !!!
Line 4304: RecvMsgCellUpdateCnf in unexpected state !!!
Line 4320: RecvMsgUraUpdateCnf in unexpected state !!!
Line 4326: RecvMsgUraUpdateCnf in unexpected state !!!
Line 4364: Could not roll back to the original status Cell-fach
Line 4395: Failure in configuration of RBs 
Line 4404: Serious Problem, ResMgr will not send any security related IEs to Security Manager in CnxMgrMobility_p scenario, but still the security reconfiguration occurs ?
Line 4433: Default case ,not handled
Line 4614: Could not configure common resources
Line 4669: Cellupdate/UraUpdate confirm message is NULL
Line 4705: ignore ReselectionAbortedDone
Line 4717: [ReselectionAbortedDone] wait for ReadSib7CancelledDone
Line 4765: Failure sending msg to CnxMgr
Line 4784: ignore ReselectionAbortedDone
Line 4807: ignore ReadSib7AbortedDone
Line 4819: [ReadSib7AbortedDone] wait for reselectionAbortedDone
Line 4867: Failure sending msg to CnxMgr
Line 4886: ignore ReadSib7AbortedDone
Line 4915: RLC UnrecoverableReset while Configuring DchLayers due to CellUpdateConfirm 
Line 5031: msg = NULL
Line 5041: ConfiguringDchLayers_ConfigDchLayersCnf[NON FATAL ERROR] CnxMgrMobility_p->CellUpdateCnfMsg = NULL
Line 5055: Cellupdate confirm message is NULL
Line 5079: msg = NULL
Line 5113:  %d Failure while Configuring DchLayers due to CellUpdateConfirm 
Line 5191: Serious disorder in the stack , assuming dch-connected instead of fach
Line 5195: Wrong return value ,not handled
Line 5296: Could not roll back to the original status Cell-fach
Line 5327: New Cfg Layer Fail when configuring Pch Layers 
Line 5336: Serious Problem, ResMgr will not send any security related IEs to Security Manager in CnxMgrMobility_p scenario, but still the security reconfiguration occurs ?
Line 5360: Default case ,not handled
Line 5596: Common configuration in Ura Pch failed, Nothing implemented for CnxMgrMobility_p case as of now
Line 5653: vl_asnstate returned from rrc_DlMsgInitialProcess_getRrcState is NULL
Line 5685: Could not roll back to the original status Cell-fach
Line 5692: CNX_NEW_CFG_LAYER_FAIL returned .
Line 5699: Security Reconfiguration in Process
Line 5743: Default case ,not handled
Line 5763: HHO Cell-selected 
Line 5799: HHO CellSelectionOn Specified freq failed , wait for any cell to be selected 
Line 5855: T307 which is MD, value is NULL
Line 5899: TerminateRrcCnx received 
Line 5922: SelectingHHOCell_NonUmtsRatCnf 
Line 5939: GenMsg is NULL 
Line 5949: GenMsg returned from rrc_Class_CnxMgr_GenerateSuspendFromPreSuspend is NULL
Line 5973: SelectingHHOCell_PreSuspendReq 
Line 5995: SelectingHHOCell_SuspendReqOnGsmDoneInd 
Line 6041: Negative-Acknowledgement for the Uplink-ResponseMessage in Cell-Dch 
Line 6058: Serious Error, Inconsistency , ResMgr doesnt send ilms to Security until complete config confirm message is sent by cnxmgr , transit to idle mode
Line 6106: RadioLinkFailure Occurred while waiting for the L2-ack
Line 6170: Cellupdate confirm message is NULL
Line 6216: Cellupdate confirm message is NULL
Line 6319: TerminateRRCCnx Received
Line 6380: Negative acknowledgement for Update-response in CellFach state 
Line 6467: Negative Acknowledgement for Update-response before transitioning to cellPch
Line 6518: vl_asnstate returned from rrc_DlMsgInitialProcess_getRrcState is NULL
Line 6544: SendingCellUpdateResponsePch_CompleteConfigCnf[NON FATAL ERROR] vl_state = NULL
Line 6593: Negative acknowledgement received for ura-update response 
Line 6674: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 6683: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 6772: Assumption is Ura-update doesnt put UE in CellFach state, CnxMgrMobility_p might change in Future.
Line 6791: Re-entering service area from FachOutOfService state 
Line 6853: T307 has expired in Fachoutofservice, will enter idle mode henceforth 
Line 6902: FachOutOfService_NonUmtsRatCnf 
Line 6917: GenMsg is NULL 
Line 6927: GenMsg returned from rrc_Class_CnxMgr_GenerateSuspendFromPreSuspend is NULL 
Line 6979: FachOutOfService_PreSuspendReq 
Line 7001: FachOutOfService_SuspendReqOnGsmDoneInd 
Line 7020: FachOutOfService_TerminateRrcCnx  in %d state 
Line 7097: Err: No Saved suspend request
Line 7284: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 7293: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 7335: SendingRrcCnxRelCompleteUMMode_RecvRrcCnxRelMsg Handling CnxMgrMobility_p message and Freed Dl Msg and Ignored
Line 7387: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 7396: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 7465: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 7474: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 7538: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 7547: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 7584: EvaluatingInterFreqCell received while waiting for CUConfirm 
Line 7661: EvaluatingInterFreqCell received while In Not Active State
Line 7682: CellReselectionToGsmInProgressreceived while waiting for SendingRelCompleteAmMode 
Line 7763: CellReselectionToEutraInProgressreceived while waiting for SendingRelCompleteAmMode 
Line 8021: [ReselectionAbortedDone] wait for ReadSib7AbortedDone
Line 8025: [ReselectionAbortedDone] Release ConnectedModeResourcesFromFach
Line 8034: ignore ReselectionAbortedDone
Line 8057: [ReadSib7AbortedDone] wait for reselectionAbortedDone
Line 8061: [ReadSib7AbortedDone] Release ConnectedModeResourcesFromFach
Line 8070: ignore ReadSib7AbortedDone
Line 8196: T307 value is NULL
Line 8221: Err: No Saved suspend request
Line 8255: [ReselectionAbortedDone] wait for ReadSib7AbortedDone
Line 8259: [ReselectionAbortedDone] start to Release SharedResources
Line 8267: ignore ReselectionAbortedDone
Line 8289: [ReadSib7AbortedDone] wait for reselectionAbortedDone
Line 8293: [ReadSib7AbortedDone] start to Release SharedResources
Line 8301: ignore ReadSib7AbortedDone
Line 8312: CompleteToBuildMsg : Transit to the saved state (%d)
Line 8333: Default_Sib7Expiry in %d state 
Line 8356: Default_Sib7Expiry in %d state 
Line 8364: SIB7 Timer Restarted
Line 8373: Failure to get SIB7Timer value Freq
Line 8383: Re-starting sib7 timer
Line 8403: Default_T307Expiry in %d state 
Line 8428: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 8437: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 8478: Default_OutOfService in %d state 
Line 8510: Default_TerminateRrcCnx  in %d state 
Line 8539: Default_RrcCnxRelease msg  in %d state 
Line 8571: RLC Unrecoverable Error: Update-response in CellFach state 
Line 8584: vl_activeInstance is null 
Line 8610: RLC Unrecoverable Error: Update-response in CellDch state 
Line 8627: Serious Error, Inconsistency , ResMgr doesnt send ilms to Security until complete config confirm message is sent by cnxmgr , transit to idle mode
Line 8676: RLC Unrecoverable Error: Update-response in CellPch state 
Line 8698: RLC Unrecoverable Error: URA pdate-response state 
Line 8716: [ReselectionAbortedDone] wait for ReadSib7CancelledDone
Line 8725: [ReselectionAbortedDone] start to Release ConnectedModeResFromFACH
Line 8733: ignore ReselectionAbortedDone
Line 8751: [ReadSib7AbortedDone] wait for reselectionAbortedDone
Line 8760: [ReadSib7AbortedDone] start to Release ConnectedModeResFromFACH
Line 8768: ignore ReadSib7AbortedDone
Line 8793: RadioLinkFailure Scenario , Both T314&315 have expired, Wait for ResMgr event AllRabsReleased
Line 8826: V302check failed , preparing to Enter Idle
Line 8882: Terminate RRC Connection from NAS received while waiting for SIB7
Line 8898: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 8907: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 8954: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 8963: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 8971: Default_OutOfService in %d state 
Line 9068: SIB7 read error - Null SIB7
Line 9077: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 9086: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 9109: SIB7 read error
Line 9118: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 9127: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 9148: SIB7-ReadError %d: ignored
Line 9164: WaitingForUpdateConfirm_PreSuspendReq 
Line 9176: Msg creation error
Line 9194: AwaitingDeactivateServingCell_Deactivated
Line 9210: AwaitingSib7_NonUmtsRatCnf
Line 9846: Fatal Error: Messsage Freed abnormally @ [State : %d] [Event : %d] 
Line 9886: UpdateCause: %d -> %d; Est Cause: %d -> %d 
Line 9981: Default_OutOfService in %d state 
