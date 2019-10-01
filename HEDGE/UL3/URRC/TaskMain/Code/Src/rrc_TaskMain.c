Line 458: ERR: initialising to INACTIVE
Line 504: DMM:SetRegistryVars umts_access_mode [%d]
Line 512: SimId is set as Sim2(%d)
Line 517: SimId is set as Sim1(%d)
Line 557: rrc_TaskMain_free 0x%x
Line 588: rrc_TaskMain_init 0x%x
Line 694: [Feature Control] FCI_Name = [%s]  SP_Name = [%s]
Line 1276: [URRC_Recovery_Handling_Enabled] %d
Line 1277: [RecoveryMode] %d (0: RecoveryMode, 1: CrashMode)
Line 1290: gTCS_SMP_LIB[TCS_FCN_OMC] is not DEFINED
Line 1308: SecMgrInst is NULL
Line 1384: ERR: stopping InternalWatcherTimer
Line 1389: >> Exception Ind from low layer: TakMain State %d
Line 1413: Stack ID %d NasSigStartReceived CS domain: %d, PS domain: %d
Line 1421: Exceptional Case: InternalWatcherTimer expired for Stack ID %d
Line 1422: Stack ID %d NasSigStartReceived CS domain: %d, PS domain: %d
Line 1430: InternalWatcherTimerExpired: No IntraFreqMeas -> Skip WD Operation
Line 1438: InternalWatcherTimerExpired: Other SIM CS Connected Established -> Skip WD Operation
Line 1444: InternalWatcherTimerExpired: Other SIM is doing BPLMN, USSD, SMS, etc. -> Skip WD Operation
Line 1452: RrcRecoveryHandlingEnabled(%d) rrc_DsrcMgr_IsPeerSimAbsent(%d) TaskMain_p->common.StateVar(%d) RecoveryMode(%d)
Line 1499: ERR: starting InternalWatcherTimer
Line 1503: InternalWatcherTimer started(TmId=%d): %i sec
Line 1509: InternalWatcherTimer Not created(TmId=%d, isUtranCommercialPlmnId=%d)
Line 1524: ERR: stopping InternalWatcherTimer
Line 1532: ERR: starting InternalWatcherTimer
Line 1536: InternalWatcherTimer started(TmId=%d): %i sec
Line 1542: InternalWatcherTimer Not created(TmId=%d, isUtranCommercialPlmnId=%d)
Line 1557: ERR: stopping InternalWatcherTimer
Line 1563: InternalWatcherTimer Not created(TmId=%d, isUtranCommercialPlmnId=%d)
Line 1583: ERROR stopping TimerKeepBplmnOpIRAT
Line 1590: Successfully started TimerKeepBplmnOpIRAT(%d msec)
Line 1594: Could not start TimerKeepBplmnOpIRAT(%d msec)
Line 1609: ERROR stopping TimerKeepBplmnOpIRAT
Line 1616: Successfully started TimerKeepBplmnOpIRAT(%d sec)
Line 1620: Could not start TimerKeepBplmnOpIRAT(%d sec)
Line 1634: rrc_TaskMain_KeepBplmnOpIRATTimerExpiry - Free Keeped Bplmn Operation
Line 1654: TimerKeepBplmnOpIRAT is still running
Line 1669: [rrc_TaskMain_MoveBplmnHandlerToCellSelecterFromTaskMain] Remaining TimerKeepBplmnOpIRAT (%d) msec
Line 1675: ERROR stopping TimerKeepBplmnOpIRAT
Line 1731: [RrcTaskStatus] %s -> %s
Line 1743: [RrcPlmnSearchStatus] %s -> %s
Line 1755: [RrcXRatTo3GStatus] %s -> %s
Line 1767: [Rrc3GToXRatStatus] %s -> %s
Line 1779: [RrcBplmnStatus] %s -> %s
Line 1944: >>>> RrcRecoveryCount: %d
Line 2719: GenMsg of ErrorStatusIndEvent  is NULL
Line 2728: >>>> Send ERRORSTATUSIND event to TaskMain
Line 2741: GenMsg of RecoveryCompleteInd  is NULL
Line 2749: >>>> Send RECOVERYCOMPLETEIND event to TaskMain
Line 2801: >>>> Send captured URRC_MM_RESUME_RAT_REQ to CNXMGR for Recovery
Line 2805: >>>> Fail to send captured URRC_MM_RESUME_RAT_REQ ( No caputured message)
Line 2820: TimerKeepBplmnOpIRAT is running and bplmn_handler exist
Line 2841: ERROR stopping TimerKeepBplmnOpIRAT
Line 2857: GenMsg of MmPlmnSearchReqForRecovery  is NULL
Line 2880: >>>> Send captured URRC_MM_PLMN_SEARCH_REQ to CELLSELECTER for Recovery
Line 2884: >>>> No captured URRC_MM_PLMN_SEARCH_REQ
Line 2885: >>>> Make a PLMN SEARCH_REQ: PLMN_ID %X, %X, %X 
Line 2936: >>>> Send FORCEDTOIDLEINEXCEPTIONALHANDLING to CNXMGR for Recovery
Line 2946: >>>> Send SUSPENDREQ to CNXMGR for Recovery
Line 3213: ERR: Invalid status response from rrc_ss_Receive
Line 3216: Unexpected message received [MsgId=%i]
Line 3221: ExternalMsg is NULL
Line 3295: *** %s [%s] : EventId %d(%s) from %s %s
Line 3300: *** %s [%s] : EventId %d(%s) %s
Line 3308: *** %s [%s] : EventId %d(%s) from %s %s
Line 3313: *** %s [%s] : EventId %d(%s) %s
Line 3431: Unspecified error processing internal message
Line 3440: [TASKMAIN] InternalQ transition to INACTIVE - flushing internal queue
Line 3471: Equipment mode:- %d
Line 3500: USIM is inserted
Line 3504: USIM is not inserted
Line 3531: URRC_MM_RESUME_RAT_REQ with PSSupport %d, PDPActive %d
Line 3537: URRC_MM_RESUME_RAT_REQ with Mode %d
Line 3541: URRC_MM_RESUME_RAT_REQ
Line 3546: ERR: moving from SUSPENDED to ACTIVE
Line 3627: TimerKeepBplmnOpIRAT is running and bplmn_handler exist
Line 3648: ERROR stopping TimerKeepBplmnOpIRAT
Line 3693: URRC_MM_PS_SUPPORT_IND with PSSupport %d, PDPActive %d
Line 3719: URRC_MM_SIM_READ_REQ
Line 3727: URRC_MM_SIM_READ_REQ
Line 3732: Sending Register Req to USIM and Triggering Reading of SIM Params
Line 3743: URRC_MM_STOP_REQ
Line 3780: USIM is not inserted so IratHandover msg will be created without Security Info
Line 3797: ERR: moving from SUSPENDED to ACTIVE
Line 3831: URRC_MM_BPLMN_LIST_REQ
Line 3835: ERR: moving from SUSPENDED to ACTIVE
Line 3858: ERROR stopping TimerKeepBplmnOpIRAT
Line 3886: ERROR stopping TimerKeepBplmnOpIRAT
Line 3918: ERROR stopping TimerKeepBplmnOpIRAT
Line 3945: ERROR stopping TimerKeepBplmnOpIRAT
Line 3983: [URRC_ANR]: MM_URRC_PREPARE_CGI_REQ received
Line 3987: [URRC_ANR]: ERR: moving from SUSPENDED to ACTIVE
Line 4028: URRC_MM_INIT_REQ in SUSPENDED
Line 4051: CUPHY_NON_UMTS_RAT_MODE_CNF in SUSPENDED
Line 4063: URRC_MM_UPDATE_DUPLEX_MODE_IND with Mode %d
Line 4071: LCSM_URRC_POS_CAP_RSP in SUSPENDED
Line 4086: Unexpected message in SUSPENDED [MsgId=%i]
Line 4116: Defer count reaches Qsize(%d) msgid(%d)
Line 4207: Unspecified error processing internal message FSM_Status(%d) DestInst(0x%x) EventId(%d)
Line 4224: [TASKMAIN] InternalQ transition to SUSPSENDED or INACTIVE - flushing internal queue
Line 4248: Equipment mode:- %d
Line 4330: GRR_URRC_READ_PRED_CONF_REQ ignored - only supported in SUSPENDED
Line 4379: ERR: Message from undefined layer %d received at URRC
Line 4389: %s
Line 4417: URRC_MM_INIT_REQ
Line 4421: PhyInitDone
Line 4426: ERR: moving from INACTIVE to SUSPENDED
Line 4440: DMM:SetRegistryVars umts_access_mode [%d]
Line 4452: ERR: creating InternalWatcherTimer
Line 4459: Failed to create TimerKeepBplmnOpIRAT
Line 4462: E-Call Feature: During MM_INIT_REQ, not reading SIM Params
Line 4464: Getting URRC_MM_INIT_REQ to Set RegistryVars
Line 4478: wait for PhyInitDon Ind
Line 4489: PhyInitDone
Line 4500: ERR: moving from INACTIVE to SUSPENDED
Line 4514: DMM:SetRegistryVars umts_access_mode [%d]
Line 4526: ERR: creating InternalWatcherTimer
Line 4533: Failed to create TimerKeepBplmnOpIRAT
Line 4536: E-Call Feature: During MM_INIT_REQ, not reading SIM Params
Line 4538: Getting CUPHY_INITDONE_IND to Set RegistryVars
Line 4554: Unexpected message in INACTIVE [MsgId=%i]
Line 4666: rrc_Recv_PSSupportInd: Message Creation Failed
Line 4672: rrc_Recv_PSSupportInd()-ReleaseCnx MsgNotSent
Line 4679: URRC_MM_PS_SUPPORT_IND with PSSupport %d, PDPActive %d
Line 6100: Getting MMPLMNUpdateReq to Set Registry Vars
Line 6142: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 6157: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 6166: TDD and FDD bplmn_handler is NULL. Cannot Signal AbortDetection to Bplmn
Line 6304: [TASKMAIN] ACTIVE to SUSPENDING as Uncoditional Suspend Req (IsConnected = %d)
Line 6312: ERR: moving from ACTIVE to SUSPENDING
Line 6327: ERR: moving from ACTIVE to SUSPENDING
Line 6418: ERR: moving from ACTIVE to SUSPENDING
Line 6435: ERR: moving from ACTIVE to SUSPENDING
Line 6447: %s
Line 6451: WatcherDetected (%d) is set to TRUE for MMSuspendReq
Line 6485: Active_MMResumeDoneGsmInd
Line 6489: ERR: MsgPtr is NULL
Line 6530: UpdateUsimParamsReq msg is NULL
Line 6536: ERR: moving to STOPPING
Line 6572: Stored BPLMN Search Info %d Uarfcn 
Line 6632: Poweroff Store StoredFreqDb SIM2 TDD at Index[%d]: Freq[%d] PLMN[0x%X]
Line 6643: Poweroff Store StoredFreqDb TDD at Index[%d]: Freq[%d] PLMN[0x%X]
Line 6665: Poweroff Store StoredFreqDb SIM2 at Index[%d]: Freq[%d] PLMN[0x%X]
Line 6676: Poweroff Store StoredFreqDb at Index[%d]: Freq[%d] PLMN[0x%X]
Line 6689: NumLastusedNeighborFreq %d is being updated to pal_ERegId_URRC_Tdd_last_used_neighbor_freq
Line 6708: NumLastusedNeighborFreq %d is being updated to pal_ERegId_URRC_last_used_neighbor_freq
Line 6804: Same as Registry: Registry is updated as StoredBands
Line 6807: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 6846: Not as same as Registry
Line 6849: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 6860: MaxBand(%d), MaxBandInReg(%d)
Line 6863: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 6891: MaxBand(%d), Adding BandId(%d)
Line 6895: BandId(%d) is not disabled
Line 6923: Same as Registry: Registry is updated as StoredBands
Line 6936: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 6941: Not as same as Registry
Line 6944: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 6955: MaxBand(%d), MaxBandInReg(%d)
Line 6958: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 6980: BPLMN: Deleting BPLMN inst
Line 6990: BPLMN: Deleting Tdd BPLMN inst
Line 7000: ERR: moving from SUSPENDING to SUSPENDED
Line 7026: BPLMN: Deleting BPLMN inst
Line 7035: BPLMN: Deleting Tdd BPLMN inst
Line 7074: UpdateUsimParamsReq msg is NULL
Line 7080: ERR: moving to STOPPING
Line 7158: ERR: wrong SavedState %d
Line 7187: ERR: moving from ACTIVE to ACTIVERECOVERY
Line 7332: ERR: moving from ACTIVERECOVERY to SUSPEND
Line 7346: ERR: moving from ACTIVERECOVERY to SUSPEND
Line 7357: ERR: moving from ACTIVERECOVERY to SUSPEND
Line 7368: ERR: moving from ACTIVERECOVERY to SUSPEND
Line 7471: ERR: moving from ACTIVERECOVERY to SUSPENDED
Line 7504: ERR: moving from ACTIVERECOVERY to SUSPENDED
Line 7525: ERR: moving from ACTIVERECOVERY to SUSPENDED
Line 7566: ERR: moving from ACTIVERECOVERY to ACTIVE
Line 7574: ERR: moving from ACTIVERECOVERY to ACTIVE
Line 7581: ERR: moving from ACTIVERECOVERY to ACTIVE
Line 7649: ERR: moving from ACTIVERECOVERY to ACTIVE
Line 7668: ERR: moving from ACTIVERECOVERY to ACTIVE
Line 7747: ERR: moving from SUSPENDED to SUSPENDEDRECOVERY
Line 7779: ERR: moving from SUSPENDEDRECOVERY to SUSPENDED
Line 7821: ERR: moving from SUSPENDING to SUSPENDINGRECOVERY
Line 7850: ERR: moving from SUSPENDINGRECOVERY to SUSPENDED
Line 7922: UpdateUsimParamsReq msg is NULL
Line 7928: ERR: moving to STOPPING
Line 7949: ERR: moving from SUSPENDING to SUSPENDED
Line 7968: ERR: moving from SUSPENDING to SUSPENDED
Line 7992: ERR: moving to INACTIVE
Line 8012: ERR: deleting InternalWatcherTimer
Line 8021: ERR: deleting TimerKeepBplmnOpIRAT
Line 8088: ERR: moving to INACTIVE
Line 8111: ERR: deleting InternalWatcherTimer
Line 8120: ERR: deleting TimerKeepBplmnOpIRAT
Line 8183: CNXMGRSuspendCNF is NULL
Line 8205: SuspendFromPreSuspend is NULL
Line 8222: UsimReadParamsDoneInd is NULL
Line 8239: UsimReadParamsDoneInd is NULL
Line 8262: InternalSuspendReq is NULL
Line 8286: MMResumeDoneGsmInd is NULL
Line 8308: StopReq is NULL
Line 8334: Request to LTE for the EUTRA UE Capabilty with NULL PLMN ID(0x%X, 0x%X, 0x%X)
Line 8354: UpdateCsgListReq for TddCellSelecter
Line 8362: UpdateCsgListReq for FddCellSelecter
Line 8371: UpdateCsgListReq for FddCellSelecter
Line 8433: SIM_RRC_UPDATE_RSP
Line 8438: SIM_RRC_UPDATE_PARAM_RSP
Line 8442: HandleUsimCnf: unexpected ExternalMsgId %d
Line 8451: HandleUsimCnf: msg is NULL
Line 8462: URRC_MM_QRB_MODE_UPDATE_IND with Mode %d
Line 8472: SupportOfQrbOmcValue %d
Line 8476: QRB is enabled as default
Line 8504: >> [Feature Control] REGISTRY base <<
Line 8508: [CPC][FDPCH] %d
Line 8510: [CPC][E-FDPCH] %d
Line 8512: [CPC][UlDtx] %d
Line 8514: [CPC][SlotFormat4] %d
Line 8518: [U2L HO][IratHoToEutra] %d
Line 8520: [U2L HO][EutraMeasReportInConnected] %d
Line 8522: [U2L HO][EutraMeasureInCellFach] %d
Line 8528: [ECFACH][EC-FACH] %d
Line 8530: [ECFACH][EC-FACH DRX] %d
Line 8537: >> [Feature Control] COMMON <<
Line 8541: [UTRAN APBCR] %d
Line 8545: [GNSS] %d
Line 8549: [CSG] %d
Line 8553: [AP VOLTE SRVCC] %d (Tcs only)
Line 8558: [MAC-ehs] %d (Reg only)
Line 8562: [MultiCell][MultiCellSupport] %d
Line 8567: [MultiCell] NumSupportedDlHsCells (%d)
Line 8568: [MultiCell][%dC-HSDPA] Supported 
Line 8573: [AGPS by AP] %d (Reg only)
Line 8581: [EUTRA MFBI] %d (Reg only)
Line 8584: [CPC][HS-SCCHLess] %d
Line 8588: [TxFailParam Handling] %d
Line 8592: [BlackList Handling] %d
Line 8596: [PConflict] %d (Reg only)
Line 8643: >> [OMC Feature Control Start] <<
Line 8644: After Updating OMC Feature Control Registry value to rrc_Features
Line 8649: [OMC][CPC][FDPCH] %d (tmpFeatureValue %d)
Line 8656: [OMC][CPC][E-FDPCH] %d (tmpFeatureValue %d)
Line 8664: [OMC][CPC][UlDtx] %d (tmpFeatureValue %d)
Line 8666: [OMC][CPC][SlotFormat4] %d (tmpFeatureValue %d)
Line 8673: [OMC][CPC][HS-SCCHLess] %d (tmpFeatureValue %d)
Line 8675: [OMC][CPC][HS-SCCHLess] HS-SCCHLess not supported in UE
Line 8681: [OMC][ECFACH][EC-FACH] %d (tmpFeatureValue %d)
Line 8688: [OMC][ECFACH][EC-FACH DRX] %d (tmpFeatureValue %d)
Line 8695: [OMC][U2L HO][IratHoToEutra] %d (tmpFeatureValue %d)
Line 8702: [OMC][U2L HO][EutraMeasReportInConnected] %d (tmpFeatureValue %d)
Line 8706: >> [OMC Feature Control End] <<
Line 8756: OMC_Registry[%i] %i
Line 8781: Asserted condition : (%s) ==>(%s,%d)
Line 8784: [rrc_Debug_Assert] result of function pal_SmIntDisable = %d
Line 8816: [CPR_URRC] Asserted condition : (%s) ==>(%s,%d)
Line 8817: [CPR_URRC][rrc_Debug_Assert] result of function
Line 8920: MMSUSPENDREQ is NULL
Line 8941: Request to LCSM for UE positioning Capabilty
Line 8988: WatcherDetected %d for NasPlmnSeareReq during peer stack NAS_SIGNALLING_ONGOING
Line 9001: [PConflict] StackPsSupport %d, IsPDPActive %d
Line 9008: [PConflict] PagingConflictApplied %d
Line 9015: [PConflict] PagingConflictApplied %d
Line 9054: Initialize Clear MRU Info from Runtime Variable at SIMID %d
Line 9091: Initialize StoredFreqDb SIM2 TDD at Index[%d]: Freq[%d] PLMN[0x%X]
Line 9098: Initialize StoredFreqDb TDD at Index[%d]: Freq[%d] PLMN[0x%X]
Line 9113: Initialize StoredFreqDb SIM2 at Index[%d]: Freq[%d] PLMN[0x%X]
Line 9120: Initialize StoredFreqDb at Index[%d]: Freq[%d] PLMN[0x%X]
Line 9130: pal_ERegId_URRC_Tdd_last_used_neighbor_freq is being initialized
Line 9147: pal_ERegId_URRC_last_used_neighbor_freq is being initialized
Line 9176: Adding Msg[%x] to Queue
Line 9213: UL Msg Queue being processed
Line 9222: FreeBuff failed in HandleMsgQ
Line 9224: Removing Ref Msg[%x] from Queue
Line 9243: FreeBuff failed in HandleMsgQ
Line 9245: Removing Ref Msg[%x] from Queue
Line 9264: Freeing Unfreed Msg[%x] from Queue
Line 9269: FreeBuff failed in EnteringIdle
