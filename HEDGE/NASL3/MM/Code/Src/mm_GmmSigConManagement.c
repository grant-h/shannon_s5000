Line 205:  mm_NeedCellIndAfterRelInd -> %d 
Line 232:  mm_NeedGmmRelInd -> %d 
Line 269:  Stopping Timers T3311, T3302 in order to do an Attach Immediately ...[24.008]-4.2.4.2.2
Line 309: Saving Msg for later as GMM is due to service a CELL_IND
Line 321: Msg Not Accepted in this Service State, Rejecting CM Req
Line 327: Saving Msg for later
Line 412: 
Line 417: Initiating GMM Service Req Procedure
Line 429: RAU before uplink signalling/data transmission following intersystem change between cells belonging to same RA
Line 445: Already in PMM_CONNECTED State -> Confirming CM Layer Est Req Immediately
Line 463: Invalid Functional State -> PMM_DETACHED
Line 470: Confirming CM Layer Est Req Immediately
Line 481: GMM_CM_EST_CNF_FLG was already set by (%s) or Nsapi (%d).
Line 543: Saving Msg for later
Line 548: Msg Not Allowed in this State, Rejecting CM Req
Line 622: Unable to Stop HPlmn Search Immediately -> Saving CM Layer Req Msg for Later Use
Line 639: Saving Msg for later
Line 652: Saving Msg for later: SCRI pending
Line 687: Saving Msg for later: Registration ongoing
Line 716: Saving Msg for later: SERVICE_REQ_INIT state
Line 760: URRC_GMM_EST_CNF Not Allowed in PMM_CONNECTED, Ignoring Msg
Line 797: Service_Request here is: %d
Line 801: Service_Request here is: %d
Line 824: EST CNF received in GMM DEREGISTERED State
Line 855: LAU triggered because of CSFB call release
Line 983: Network redirection to LTE is received, so need not process Same RR connection actions
Line 1118: GMM functional state is not matched with URRC, need to release current RRC connection once again
Line 1132: CS and PS both release, so quick rollback to LTE will be done Immediately
Line 1173: Checking release type : %d
Line 1181: RRC connection is still alive : Will not wait for CELL_IND
Line 1216: T3311 restarted to sync with T3211
Line 1249: Network redirection to LTE is received, so need not process Same RR connection actions
Line 1272: mm_PerformExtraMsgInSameRrFailAction should be reset 
Line 1293: mm_PerformExtraMsgInSameRrFailAction should be reset 
Line 1381: CS and PS both release, so quick rollback to LTE will be done Immediately
Line 1387: CS and PS both release, so quick rollback to LTE will be done Immediately
Line 1402: Message crossover: URRC_GMM_REL_IND ignored as GMM has already requested release, await URRC_GMM_REL_CNF
Line 1410: Message crossover: URRC_GMM_REL_IND in while in GSM RAT No Need to do Any Actions Keep it as it is
Line 1470: Network redirection to LTE is received, so need not process Same RR connection actions
Line 1592: CS and PS both release, so quick rollback to LTE will be done Immediately:
Line 1761: Not Expected in This State in mm_DecodeGmmAsRelCnfMsg:
Line 1776: CS and PS both release, so quick rollback to LTE will be done Immediately:
Line 1901: Power off detach is pending Hence discarding Attach retrails
Line 1964: Power off detach is pending Hence discarding RAU retrails
Line 2308: 
Line 2343: Fast Return is required to URRC in REL_REQ
Line 2355: Fast Return is required to URRC in REL_REQ
Line 2361: Send GMM REL REQ with REL_REQ_ALL_RESOURCES
Line 2446: Saving Msg for later
Line 2474: 
Line 2489: Update Status : GU1 But Cell RAI != SIM RAI
Line 2490: DataReq Not Allowed
Line 2497: RAU procedure 'interupts' service request procedure...
Line 2534: Service State is GMM_REG_ATTEMPTING_TO_UPDATE, SM will send Data after RAU is done
Line 2565: Data Req Received in incorrect State, Aborting Operations 
Line 2595: SR Triggered for Data Pending in PMM_CONNECTED
Line 2610: DataReq Not Allowed in This State, stored
Line 2733: entered mm_DecodeGmmAsDataCnfMsg   in State = %s
Line 2737: Sending Reject to RABM becaue SR has Failed
Line 2795: GMM Functional state is %s, so ignorning upper layer message 
Line 2843: Network Sent FOP False, But received UnitData Ind for SM So make this Flag False
Line 2861: Network Sent FOP False, But MOD_PDP_CONTEXT is sent by NW while CS call is in progress
Line 2875: Network Sent FOP False, But received UnitData Ind for SMS So make this Flag False
Line 2965: Ignoring GMM_PAGE_IND because MPLMN search is on-going
Line 3001: If GmmPageInd is received, T3346 shall be stopped.
Line 3011: If GmmPageInd is received with IMSI, T3346 shall be stopped.
Line 3099: Access allowed for Paging Since MM_PPAC_ALLOW_PS_PAGING is TRUE
Line 3105: Access NOT allowed for Paging Since MM_PPAC_ALLOW_PS_PAGING is FALSE
Line 3150: P-TMSI is Valid -> O.K...
Line 3155: P-TMSI is NOT Valid -> Paging Response Not Allowed
Line 3162: Paging Using IMSI  -> Paging Response Not Allowed
Line 3167: Neither P-TMSI Nor IMSI USed -> ...Paging Response Not Allowed
Line 3173: ServiceState != GMM_NORMAL_SERVICE && ServiceState != GMM_ATTEMPTING_TO_UPDATE_MM -> Paging Response Not Allowed.
Line 3177: Paging Using IMSI -> ...Paging Response Not Allowed.
Line 3182: Incorrect GMM Service State -> ...Paging Response Not Allowed.
Line 3188: GMM SIM State is NOT Valid -> Paging Response Not Allowed.
Line 3193: UpdateStatus == GMM_NO_IMSI_UPD_STATUS -> Paging Response Not Allowed.
Line 3198: Incorrect Plmn State, != MM_ON_PLMN -> Paging Response Not Allowed.
Line 3203: Current Mobile Operation Mode == MM_MOBILE_CLASS_C_CS -> Paging Response Not Allowed
Line 3208: Access Class Barred -> Paging Response Not Allowed.
Line 3213: PS Domain is Supported by Current Cell -> Paging Response Not Allowed.
Line 3218: We are Already in connected mode, So ignoring Paging indication.
Line 3229: Paging Using IMSI -> ...Paging Response Not Allowed.
Line 3234: Paging During GMM Specific Procedures -> ...Paging Response Not Allowed.
Line 3239: Incorrect GMM State -> ...Paging Response Not Allowed.
Line 3245: RAT suspension has been requested -> ...paging request ignored
Line 3250: Not Attached to PS Domain Yet -> Paging Response Not Allowed.
Line 3362: mm_SendGmmCmEstRejMsg() -> Source: %d, Cause: %d, DiscardStoredRequest: %d
Line 3682: Req Not Allowed ->  GmmServiceState Not Correct 
Line 3722: Req Not Allowed ->  GmmServiceState Not Correct 
Line 3804: Req Not Allowed ->  GmmServiceState Not Correct 
Line 3840: Access Allowed for Registration since MM_ALLOW_PS_REGISTRATION is TRUE 
Line 3846: Access Allowed for Registration since MM_ALLOW_PS_REGISTRATION is TRUE 
Line 3871: RAI NOT Part of Any Forbidden List  -> OK (9 of 9)
Line 3876: Req Not Allowed ->  RAI Part of Forbidden Lists
Line 3889: Req Not Allowed ->  GMM_PS_ACCESS_NOT_ALLOWED !
Line 3895: Req Not Allowed ->  GMM_RAT_CHANGE_IN_PROGRESS_ERR !
Line 3901: Req Not Allowed ->  GPRS Not Allowed in HPlmn
Line 3907: Req Not Allowed ->  GMM_NOT_REGISTERED_ERR 
Line 3913: Req Not Allowed ->  GMM_COVERAGE_LOST_ERR !
Line 3919: Req Not Allowed ->  GMM_SIM_CONSIDERED_INVALID_ERR 
Line 3925: Req Not Allowed ->  MM_ACCESS_BARRED 
Line 3931: Req Not Allowed ->  GMM_INCORRECT_STATE_ERR ! 
Line 3941: New Cell Data MM_RR_NO_SERVICE_CELL_FLG   -> %s - PS Domain Access Is Not Allowed
Line 4056: User PLMN will be retrieved after URRC_MM_REL_CNF
Line 4061: User PLMN will be retrieved after GRR_MM_RESEL_HOLD_CNF
Line 4080: SUSPEND REQ will be sent after URRC_MM_REL_CNF
Line 4101: 
Line 4111: 
Line 4132: MM is not IDLE handle perform LAU after moving to IDLE
Line 4285: GMM RR Release Cnf Action Name -> %s
Line 4332: GMM CM Layer Error Cause -> %s 
Line 4419: mm_GmmFollowOnRequested -> %d 
Line 4425: mm_GmmFollowOnRequested -> %d 
Line 4433: QuickRollbackStatus %d in mm_DecodeGmmAsReleaseIndMsg
Line 4440: CS and PS both release, so quick rollback to LTE will be done Immediately
Line 4446: CS and PS both release, so quick rollback to LTE will be done Immediately
Line 4452: WARNING : Fail to turn on FastReturn Status or MM/GMM state is not valid.. (MM state : %d, GMM Functional state : %d) 
Line 4461: RRC requested to stop Quick Rollback! Giving up to rollback to LTE..
Line 4475: Triggering RAU, because it was pended..
Line 4495: LAU triggered because of CSFB call release.
Line 4509: Entering here since LAU is needed due to 3312 expiry
Line 4518: Periodic Location Update is triggered since 3312 was already expired
Line 4527: QRB not ongoing!! Ignore..
Line 4539:  Quick rollback to LTE will be done, so discarding GMM CM request.
Line 4672: Wrong Action =%d 
Line 4700: Set mm_GmmCmReqInProgress = %d 
Line 4706: mm_GmmIntfManagementDb[%d].mm_GmmCmReqInProgress = %d 
Line 4712: mm_API_GetGmmCmReqInProgress StackID = %d 
