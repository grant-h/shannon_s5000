Line 619: 
Line 627: 
Line 661: UNKNOWN DST MSG ENTITY  - %d 
Line 664: STACK ID - %d 
Line 870: Selected mode is %d
Line 932: QuickRollbackToLteAfterCsfb registry is recovered as (%d).
Line 936: QRBEnabledBySIMcard registry is initialized.
Line 992: QRBEnabledBySIMcard[0] = %d,  QRBEnabledBySIMcard[1] = %d 
Line 1002: Provider requirement , so U2L QRB is enabled
Line 1028: Provider requirement , so G2L QRB is enabled
Line 1031: U2L QRB is %d / G2L QRB is %d
Line 1098: mm_WatchDogMode = %d
Line 1109: mm_bplmnenabled = %d, mm_ensenabled = %d
Line 1118: %s : CSC is GCF -> Forcefully disable SamsungSOREnable Flag
Line 1253: MM_SINGLE_MODE_OPERATION (GSM RAT MODE) Selected...
Line 1260: MM_SINGLE_MODE_OPERATION (UMTS RAT MODE) Selected...
Line 1269: MM_DUAL_MODE_OPERATION Selected...
Line 1276: MM_SINGLE_MODE_OPERATION Selected...
Line 1283: MM_SINGLE_MODE_OPERATION Selected...
Line 1290: MM_SINGLE_MODE_OPERATION (NO RAT MODE) Selected...
Line 1294: Unknown mode is selected...
Line 1299: mm_SingleDualModeOperation(%d),mm_CompiledSelectedRatMode(%d)
Line 1348: Re-Initialising MM ..Type: %s
Line 1426: mm_GetSupportedCodecList OperationMode: %d	WB AMR enabled: %d	HDVoice on:%d
Line 1523: 
Line 1566: 3G  mode URRC_MM_STOP_CNF received
Line 1575: 2G  mode GRR_MM_STOP_CNF received
Line 1672: State MISMATCH in MM/GMM %s  
Line 1720: Current HPLMN -> 0x%02X 0x%02X 0x%02X
Line 1723: LastInsertedPLMN -> 0x%02X 0x%02X 0x%02X
Line 1728: writing HPLMN
Line 1772: (PREVENTION) EF_LOCI Update during Power off	 (20131231)
Line 1803: Sending MM Stop Req to AS
Line 1973: MmState: %d
Line 2059: INIT request cause: %d
Line 2064: IMEI from LTE
Line 2071: IMEI constructed in HEDGE
Line 2090: UEMode = %d , CsServicesSupport = %d
Line 2109: mm_UeNwCapRegData.uea0 -> %d, mm_UeNwCapRegData.uea1 -> %d, mm_UeNwCapRegData.uea2 -> %d
Line 2110: gMmUeNetworkCapability[3] -> %02X, gMmUeNetworkCapability[4]  -> %02X
Line 2145: MmInitReq.SimStatus -> %d, MmInitReq.StartFullService -> %d
Line 2189: UserSelectedMode: %d 
Line 2225: Network Lock Status - %d
Line 2233: Stack had been aleady initialized. But MM responds to INIT CNF without any action to avoid stuck
Line 2305: Receive Error -> CTLVMAND TLV PARAM MANDATORY ERROR
Line 2315: Receive Error -> (CMSGLEN|CTLVLEN|CTLVUNK) ERROR for Auth Req
Line 2344: Receive Error -> CTLVMAND TLV PARAM MANDATORY ERROR
Line 2485: ERROR -> Unknown group : 0x%x !!!, Ignoring Message
Line 2493: ERROR -> Unknown Msg or Error Case: %x !!! Ignoring Message
Line 2496: 
Line 2534: ERROR -> Msg 0x%04X too short, Header.Length = %d, MsgLen = %d, (Length - BodySize) = %d !!!
Line 2675: MSG already displayed!!!!
Line 2687: Message not parsed !!!: 0x%04X
Line 2738: Unknown mm msg type, Sending Status..
Line 2803: Unknown mm msg type, Sending Status..
Line 2810: MM_INTEGRITY_FLG                  -> %s
Line 2811: MsgNum %d not processed....
Line 2812: ....integrity protection not activated in CS domain.
Line 2905: Received Pointer-> %p
Line 2944: Unknown Gmm msg type, Sending Gmm Status..
Line 2951: MsgNum %d not processed....
Line 2952: ....integrity protection not activated in PS domain.
Line 3061: GS30: ucTransactionID = 0x%02X,  ucProtocol =%s
Line 3062: GS30: ucMessageType =0x%02X, ucChannel =0x%02X
Line 3063: GS30: Raw data length =%d
Line 3085: Unknown Gmm msg type, Sending Gmm Status..
Line 3309: Received Loc Upd Acc. Integrity Protected Signalling not Started Yet, but for Periodic Loc Upd, this is allowed.
Line 3338: Emergency call was accepted and Integrity Protected Signalling is unncessary until MM Connection is reset..
Line 3455: mm_GetDsDelayCsIdleEntry = %d
Line 3459: SIG Protection Variable was TRUE, Resetting it
Line 3917: LTE HEDGE EMR Mode, skip to send GMMSM_RELEASE_IND in case of HEDGE RAT resumed on emergency state
Line 4201: GMM READY , GSM RAT MODE and GMM_T3314 Timer is not running..... Starting the timer
Line 4287: Cause -> %s
Line 4348: Setting GMM_ATTEMPTING_TO_UPDATE state and T3302 is not running. Starting T3302 !
Line 4356: Setting GMM_ATTEMPTING_TO_UPDATE state and T3311 is not running. Starting T3311 !
Line 4368: Setting GMM_ATTEMPTING_TO_ATTACH state and T3302 is not running. Starting T3302 !
Line 4376: Setting GMM_ATTEMPTING_TO_ATTACH state and T3311 is not running. Starting T3311 !
Line 4532: ISR Status: %d
Line 4591: Protocol Discriminator -> %s
Line 4616: ERROR -> RtkQueue %x !!!
Line 4641: In mm_DiscardMmEstReqMsgInQueue(), required TI : %d, Call Type : %d
Line 4658: TI match! deleting..
Line 4671: Warning in mm_DiscardMmEstReqMsgInQueue() : Cannot put the MSG in the original queue (status : %x)!!!
Line 4677: Warning : there is null pointer saved in the queue !!!
Line 4682: Warning : cannot get the msg in estreq queue (status : %x) !!!
Line 4709: In mm_ClearMmEstReqMsgQueue()
Line 4723: Deleting EST Req with TI: %d and Call Type: %d
Line 4729: Warning : there is null pointer saved in the queue !!!
Line 4734: Warning : cannot get the msg in estreq queue (status : %x) !!!
Line 4744: [ERROR]Queue not cleared completely 
Line 4747: Cleared EST_REQ queue Que Size %d 
Line 4771: In mm_DiscardMmEstReqMsgInQueueUsingCallType(), Call Type : %d
Line 4788: CallType match! deleting Ti: %d..
Line 4802: Warning in mm_DiscardMmEstReqMsgInQueueUsingCallType() : Cannot put the MSG in the original queue (status : %x)!!!
Line 4808: Warning : there is null pointer saved in the queue !!!
Line 4813: Warning : cannot get the msg in estreq queue (status : %x) !!!
Line 4841: ERROR -> RtkQueueFirst 0x%x  !!!
Line 5569: GmmFunctionalState = %s
Line 5582: mm_State -> %s
Line 5594: mm_GmmState -> %s
Line 5646: mm_CheckIfTimerExpiryCanbeHandled = %s
Line 5817: Saving MMC resume Request manually
Line 5823: Retrieving MMC resume Rat Req and putting in to Main Queue
Line 6267: 
Line 6285: 
Line 6292: MM_SIM_PRESENT_FLG                -> TRUE
Line 6298: MM_SIM_REMOVAL_ACTION_FLG         -> TRUE
Line 6304: MM_CIPHERING_FLG                  -> TRUE
Line 6310: MM_LOC_UPD_REQ_1ST_MM_CON_FLG     -> TRUE
Line 6316: MM_LOC_UPD_REQ_IMSI_UNK_FLG       -> TRUE
Line 6322: MM_INTEGRITY_FLG                  -> TRUE
Line 6328: MM_IMSI_ATTACH_FLG                -> TRUE
Line 6334: MM_FOLLOW_ON_REQ_FLG              -> TRUE
Line 6340: MM_CELL_REJ_SENT_FLG              -> TRUE
Line 6346: MM_CS_ENABLED_FLG                 -> TRUE
Line 6352: MM_ABNORMAL_RR_CON_REL_CASES_D_TO_H_FLG -> TRUE
Line 6358: MM_RANDOM_ACCESS_FAIL_FLG         -> TRUE
Line 6364: MM_RE_START_PROC_ON_OTHER_RAT_FLG -> TRUE
Line 6370: MM_SAVE_FLASH_DATA_REQ_FLG        -> TRUE
Line 6376: MM_T3211_EXPIRED_NO_LOC_UPD_FLG   -> TRUE
Line 6382: MM_GPRS_ONLY_FLG                  -> TRUE
Line 6388: MM_NETWORK_MODE_CHANGE_FLG        -> TRUE
Line 6394: MM_CM_SERV_REJ_IMSI_UNK_FLG       -> TRUE
Line 6400: MM_RETRY_LAU_IN_NEW_CELL_FLG      -> TRUE
Line 6406: MM_CELL_RSP_NEEDED_FLG            -> TRUE
Line 6412: MM_IMSI_ATT_RETRY_REQ_FLG         -> TRUE
Line 6418: MM_REG_STATUS_IND_SENT_FLG        -> TRUE
Line 6424: MM_POWER_ON_CS_ACCESS_FLG         -> TRUE
Line 6430: MM_CS_PS_DETACH_AFTER_RR_REL_FLG  -> TRUE
Line 6436: MM_NORMAL_DETACH_AFTER_LAU_FLG    -> TRUE
Line 6441: MM_PS_SIGNALING_MSG_FLAG          -> TRUE
Line 6447: MM_CS_SIGNALING_MSG_FLAG          -> TRUE
Line 6453: MM_CELL_CONG_WAIT_3122_EXP_FLG     -> TRUE
Line 6459: MM_CELL_CONG_WAIT_3122_EXP_FLG     -> TRUE
Line 6466: MM_NEED_CELL_IND_AFTER_REL_IND_FLG-> TRUE
Line 6472: MM_CALL_WAS_ATTEMPTED_FLG         -> TRUE
Line 6478: MM_EMERG_CALL_WAS_ATTEMPTED_FLG   -> TRUE
Line 6484: MM_CC_CALL_ABORTED_FLG            -> TRUE
Line 6490: MM_CSFB_CALL_STATUS_FLG           -> TRUE
Line 6496: MM_CSFB_FOP_FLG                   -> TRUE
Line 6502: MM_EUTRAN_DISABLE_FLG             -> TRUE
Line 6508: MM_LAU_AFTER_CSFB_FLG	          -> TRUE
Line 6514: MM_LAU_AFTER_SRVCC_FLG	          -> TRUE
Line 6520: MM_TMSI_INVALID	                  -> TRUE
Line 6526: MM_TMSIOLD_VALID	              -> TRUE
Line 6532: MM_RR_REL_CNF_ACTION	          -> TRUE (ACTION : %d)
Line 6538: MM_BACK_GND_SRCH_FLG	          -> TRUE
Line 6544: MM_WAIT_UNTIL_RB_SETUP	          -> TRUE
Line 6550: MM_IS_CSFB_FLG	                  -> TRUE
Line 6556: MM_IS_SRVCC_FLG	                  -> TRUE
Line 6562: mm_USER_SELECTED_PLMN               -> TRUE
Line 6568: MM_CAMPED_FOR_EMERGENCY_SERVICES               -> TRUE
Line 6576: MM_QR_FOR_CSFB_STATUS		-> STANDBY
Line 6580: MM_QR_FOR_CSFB_STATUS		-> IN_PROGRESS
Line 6588: MM_G2L_QRB_FOR_CSFB_STATUS           -> TRUE
Line 6596: MM_QR_FOR_PDP_STATUS		-> STANDBY
Line 6600: MM_QR_FOR_PDP_STATUS		-> IN_PROGRESS
Line 6608: MM_FAST_RETURN_TO_LTE	-> TRUE
Line 6614: MM_FORCE_TO_STAY_IN_HEDGE_BY_NS	-> TRUE
Line 6620: MM_CC_REDIALING		-> TRUE
Line 6626: MM_MODE_CHANGE_IN_PROGRESS		-> TRUE
Line 6632: MM_MT_CALL_IN_PROGRESS		-> %d
Line 6639: mm_LauNeeded	-> TRUE
Line 6645: mm_T3212TimedOut	-> TRUE
Line 6651: mm_RegistrationStatusCause -> %s
Line 6657: mm_CsConnectedInUmts	-> TRUE
Line 6663: mm_RcvGrrCellInd	-> MM_ReceivedOnlyDediCell
Line 6669: Manual Search is going on -> TRUE
Line 6686: GmcInitCnfSent -> FALSE
Line 6692: Need Paging Rsp -> TRUE
Line 6698: Received NO GPRS IN THIS PLMN IN LTE-> TRUE
Line 6704: mm_SrvccCallForSequnceNum-> TRUE
Line 6710: LAI Mismatch Counter -- > %d
Line 6716: SequenceBits = %d
Line 6724: mm_UmtsMode = %d
Line 6731: Priority PLMN Search Ongoing -> TRUE
Line 6737: PS SIG RELEASED DUE TO PCH MOVEMENT -> TRUE
Line 6744: MM_CS_RB_STATUS -> TRUE
Line 6750: GRR initialization state: %s,  URRC initialization state: %s
Line 6762: CS Rejected Rat -> %s, CS Rej Type -> %d, CS Rej Cause -> %s
Line 6765:  LAI -> 0x%x 0x%x 0x%x 0x%x 0x%x
Line 6773: PS Rejected Rat -> %s, PS Rej Type -> %d, PS Rej Cause -> %s 
Line 6776:  RAI  -> 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x
Line 6783: LOC_UPD_ATTEMPT_COUNT 	-> %d
Line 6789: LOW_LAYER_FAIL_COUNT  -> %d
Line 6801: NeedCellAfterEstRej  -> TRUE
Line 6807: ModeUpdateBlockNewCellInd  -> TRUE
Line 6821: No Flags are Set !
Line 6838: 
Line 6845: GMM_CIPHERING_FLG                 -> TRUE
Line 6851: GMM_INTEGRITY_FLG                 -> TRUE
Line 6857: GMM_VALID_PTMSI_FLG               -> TRUE
Line 6863: GMM_FORCE_TO_STANDBY_FLG          -> TRUE
Line 6869: GMM_DETACH_STATUS_FLG             -> TRUE
Line 6875: GMM_IMSI_GPRS_DETACH_FLG          -> TRUE
Line 6881: GMM_DETACH_IN_REG_REQ_FLG         -> TRUE
Line 6887: GMM_CM_EST_CNF_FLG                -> TRUE
Line 6893: GMM_T3302_EXP_IN_SUSPENDED_FLG    -> TRUE
Line 6899: GMM_PERIODIC_RAU_REQD_FLG         -> TRUE
Line 6905: GMM_READY_TIMER_DEACTIVATED_FLG   -> TRUE
Line 6911: GMM_CELL_NOTIFICATION_FLG         -> TRUE
Line 6917: GMM_RAI_CHANGED_FLG               -> TRUE
Line 6923: GMM_NORMAL_DETACH_AFTER_RAU_FLG   -> TRUE
Line 6929: GMM_RETRY_RAU_IN_NEW_CELL_FLG     -> TRUE
Line 6935: GMM_GPRS_ATTACH_FLG               -> TRUE
Line 6941: GMM_POWER_OFF_FLG                 -> TRUE
Line 6947: GMM_RAU_AFTER_CS_CALL_FLG         -> TRUE
Line 6953: GMM_COMBINED_RAU_WITH_IMSI_ATTACH_FLG -> TRUE
Line 6959: GMM_PS_ENABLED_FLG                -> TRUE
Line 6965: GMM_ATTACH_ON_RELEASE_FLG         -> TRUE
Line 6971: GMM_SIG_CON_REEST_CAUSE_FLG       -> TRUE
Line 6977: GMM_RE_START_PROC_ON_OTHER_RAT_FLG-> TRUE
Line 6983: GMM_PERFORM_GMM_CELL_IND_FLG      -> TRUE
Line 6989: GMM_RAT_CHANGE_IN_SAME_RA_FLG     -> TRUE
Line 6995: GMM_SEND_REEST_RSP_TO_SNDCP_FLG   -> TRUE
Line 7001: GMM_RABM_REEST_REQ_AFTER_RAU_FLG  -> TRUE
Line 7007: GMM_READY_EXPIRY_CONNEX_ACTIVE_FLG -> TRUE
Line 7013: GMM_PERFORM_GPRS_DET_FLG -> TRUE
Line 7020: GMM_NEED_GMM_REL_IND	          -> TRUE
Line 7026: GMM_FOLLOW_ON_REQUESTED	          -> TRUE
Line 7032: GMM_PTMSI_INVALID	              -> TRUE
Line 7038: GMM_RB_STATUS	                  -> TRUE
Line 7044: GMM_RR_REL_CNF_ACTION	          -> %d
Line 7050: GMM_SM_ESTABLISHED		          -> TRUE
Line 7056: GMM_PS_VT_CALL_ON_PROGRESS		  -> TRUE
Line 7062: GMM_ATTACH_NEEDED		          -> TRUE
Line 7068: GMM_RAU_NEEDED		              -> TRUE
Line 7074: mm_GmmRegistrationStatusCause     -> %s
Line 7080: mm_L2UPSHO_trigger                -> %d
Line 7086: mm_PsConnectedInUmts	          -> TRUE
Line 7096: GMM_ATTACH_ATTEMPT_COUNT 	      -> %d
Line 7102: GMM_RAU_ATTEMPT_COUNT 	          -> %d
Line 7116: INTERNAL_LTE_DISABLED		      -> TRUE
Line 7122: No Flags are Set !
Line 7138: MM_CIPHERING_FLG                  -> %s
Line 7153: MM_INTEGRITY_FLG                  -> %s
Line 7168: MM_IMSI_ATTACH_FLG                -> %s
Line 7183: MM_FOLLOW_ON_REQ_FLG              -> %s
Line 7198: MM_CS_ENABLED_FLG                 -> %s
Line 7210: MM Service State -> %s
Line 7222: MM Message Count -> %d
Line 7441: Sending urrc sim present ind
Line 7546: Sending rr sim present ind
Line 7727: GMM_CIPHERING_FLG                 -> %s
Line 7742: GMM_INTEGRITY_FLG                 -> %s
Line 7757: GMM_FORCE_TO_STANDBY_FLG          -> %s
Line 7772: GMM_CELL_NOTIFICATION_FLG         -> %s
Line 7840: mm_GetEnsEnabled mm_ensenabled  %d
Line 7878: In mm_SendGapiStopNetworkRspMsg(): Cause = %d, GapiNetworkStopReq = %d
Line 8115: MM  Integrity Check Supported -> %s
Line 8127: GMM  Integrity Check Supported -> %s
Line 8147: 
Line 8161: %d. %s
Line 8165: %d. Unknown Timer (TimerID : %d)
Line 8170: %d. %s
Line 8492: Process GMM PENDING MESSAGES
Line 8498: mm_FlightMode -> %d      Is MM Release Req Triggered -> %d 
Line 8571: mm_State -> %s       MM Service State -> %s
Line 8577:  mm_UpdateStatus = %s 
Line 8582: in %s
Line 8587: mm_State -> %s   MM Service State -> %s   MM Update Status -> %s  in %s
Line 8600: mm_GmmState -> %s       GmmFunctionalState = %s       GmmServiceState = %s
Line 8606: GmmState -> %s   GmmFuncState = %s   GmmSvcState = %s   GmmUpdStatus = %s  in %s
Line 8643: Memory Allocation Failed
Line 8657: mm_GetSrvccRegistryValue mm_SrvccSupport  %d
Line 8723: mm_Tdscdma_Cal_Done is %d
Line 8726: 
Line 8745: MM already sent INIT CNF
Line 8759: PDP is active and RABM request can be processed
Line 8781: mm_HplmnExceptionEnabled is FALSE on other operators except LGU
Line 8802: mm_GetDelayRauDuringCsfbSetup mm_DelayRauDuringCsfbSetup  %d
Line 8929: mm_GetQuickRollbackToLteTimerEnabled mm_QuickRollbackToLteTimerEnabled  %d
Line 8951: mm_GetQuickRollbackToLtePdpEnabled mm_QuickRollbackToLtePdpEnabled  %d
Line 9016: OPT_CARRIER TYPE: %d, mm_CompiledProvider: %d
Line 9054: mm_CompiledSP-> %d
Line 9204: mm_CompiledFCI-> %d
Line 9336: mm_networkFeatureSupport-> %d
Line 9394: 
Line 9399: 
Line 9404: Invalid to handle(param:%d) in %d - %s, 
Line 9483: In mm_SetRejParamForDebug, MappedMmProcedure =%d RatMode =%d
Line 9495: In mm_SetRejParamForDebug, sending NW_REJ_Ind to NS Procedure = %d, RejCause = %d
Line 9531: Internal Reset Count- Total: %d, MM: %d, GMM: %d, URRC: %d, GRR: %d
Line 9675: mm_GetSorFeatureStaus mm_SorFeatureStatus  %d
Line 9705: mm_GetGsmDtmSupported mm_GsmDtmSupported  %d
Line 9764: mm_GetVamosSupported mm_VamosSupported  %d
Line 9790: TCS feature support ->  ISR: %d, SRVCC: %d, CSG: %d, AP_VOLTE_SRVCC: %d
Line 9793: TCS feature support ->  AUTORETRYCALL: %d, RSRVCC: %d, OMC: %d, RPLMN_QRB_CONTROL: %d
Line 9948: mm_CheckOperatorGroup One SKU :Enabled (0x%x)
Line 9953: [OMCv5] mm_CheckOperatorGroup One SKU :Enabled (0x%x)
Line 9997: MM is in NULL state, to avoid memory leaks it frees any pointer contents of a message = %d, when message is not handled
Line 10028: Index %d is Already NULL
Line 10040: mm_SimReadRspPtr is Already NULL
Line 10111: ERROR -> Unknown Stack ID..
Line 10125: Displaying Device Information [Service Provider]: %s [FCI]: %s [MAKE_TYPE]: %d 
