Line 266: Initialisation of <RatManagement>, InitType=%d
Line 335: State exceeds the limit
Line 343: RAT Change is Happening in Connected Mode from GSM to UMTS So we need to Map Connected Mode to State
Line 354: GMM Functional State set to %d
Line 392: State exceeds the limit
Line 428: mm_SetMmcLteHedgeRatChangeCause -> Cause = %d
Line 442: RAT Change is Necessary, Initiating RR Suspension / Resumption Procedures..
Line 454: RAT Suspension Requested..
Line 462: RAT Resumption Requested instead of Suspension Requested..
Line 499: When suspending RAT, QRB is stopped if RAT is 2G
Line 532: SUSPEND_RAT_REQ UnconditionalSuspend = TRUE due to detach
Line 538: SUSPEND_RAT_REQ UnconditionalSuspend = TRUE due to mode selection
Line 553: SUSPEND_RAT_REQ dsdsCallStatus= TRUE due to CS call on other stack
Line 558: SUSPEND_RAT_REQ dsdsCallStatus= FALSE
Line 574: mm_UnconditionalSuspend = %d
Line 577: %d message id
Line 594: Suspending due to CS call on other stack Resetting current stack SRNC states
Line 628: SUSPEND REQ ignored due to RAT CHANGE IN PROGRESS 
Line 649: %s  in  mm_DecodeRrSuspendRatCnfMsg
Line 717: Clearing Cell Congestion flag
Line 805: Old 
Line 817: MM is in LTE HEDGE EMC Mode 
Line 880: New 
Line 892: Stack Has Been Suspended...
Line 897: Sending Stop Network Rsp to NS.
Line 904: Sending MM Stop Req to AS
Line 919: SUSPEND_RAT_CNF Not Allowed in this mm_RatModeChageState !!!
Line 951: mm_HedgeRatResumeByMmc is %d, %d in mm_SendRrResumeRatReqMsg 
Line 1133: TLLI generation for GPRS suspension procedure
Line 1217: 
Line 1219: Lai = %02X %02X %02X %02X %02X 
Line 1227: Tlli = %02X %02X %02X %02X 
Line 1271: mm_HedgeRatResumeByMmc is %d and %d in mm_SendRrResumeRatReqMsg
Line 1456: Sending CS keys as 0xFF in RESUME_RAT
Line 1472: Sending PS keys as 0xFF in RESUME_RAT
Line 1493: UmtsMode = %d   0:FDD 1:TDD 2:FDD&TDD
Line 1496: isUsimPresent = %d
Line 1501: PS Support indication = %d, PDP Status %d 
Line 1505: PlmnSelectionMode(Auto) = %d
Line 1529: Entering mm_SendRrResumeRatReqMsg
Line 1544: Handle RR Resume Request after SIM CNF
Line 1558: Handle RR Resume Request after SIM CNF
Line 1573: Sending Reseume Rat Req (U)RRC...in mm_SendRrResumeRatReqMsg
Line 1599: 
Line 1619: RESUME_RAT_REQ Not Allowed in this mm_RatModeChageState !!!
Line 1645: %s  in  mm_DecodeRrResumeRatCnfMsg
Line 1688: Current HPLMN -> 0x%02X 0x%02X 0x%02X
Line 1691: Last Inserted HPLMN -> 0x%02X 0x%02X 0x%02X
Line 1699: NOTI what Sim changed to URRC
Line 1707: Last Umts HPLMN -> 0x%02X 0x%02X 0x%02X
Line 1744: Key is not updated, so let URRC use the old key!
Line 1777: New 
Line 1812: Setting GMM_STANDBY 
Line 1821: GmmState(%d)  FunctionalState(%d) 
Line 1830: NW gave different LAI in TAU_ACCEPT
Line 1892: 
Line 1897: 
Line 1911: 
Line 1965: GmmState(%d)  FunctionalState(%d) 
Line 2011: RESUME_RAT_CNF Not Allowed in this mm_RatModeChageState !!!
Line 2033: 
Line 2059: MM Had already started a Procedure.. Aborting All MM Procedures!!!! 
Line 2217: 
Line 2307: 
Line 2309: RabId            -> 0x%02X
Line 2310: CodecInfoPresent -> 0x%02X
Line 2311: NasSyncInd       -> 0x%02X
Line 2347: in  mm_UrrcRetransmitMessages
Line 2398: Unknown Message PD %d
Line 2442: 
Line 2445: NumOfMessagesToRetransmit -> %d
Line 2449: Message %d    -> ...
Line 2450: Message Size  -> %d
Line 2451: Message       -> ...
Line 2494: Saving UrrcRetransmitInd to be sent to CM Layer later
Line 2505: Protocol Descriminators for Unconfirmned Messages to be Re-transmitted....
Line 2655: U2G redirection blocked, Saved PLMN selection procedure will be initiated
Line 2664: MM sent CELL_REJ to URRC so Redirection is aborted.
Line 2672: Redirection is discarded during Hedge Rat suspension.
Line 2690: UMTS to GSM cell reselection in %s
Line 2695: MM Had already started a Procedure.. Aborting All MM Procedures!!!! 
Line 2749: URRC_MM_RAT_RESELECTION_TO_GSM_IND Ignored as MM has started a RAT Change !!!! 
Line 2783: G2U IRAT reselection UMTS MODE = %d
Line 2814: Blocking G2U reselection since CELL_REJ was sent and PLMN search will come.
Line 2834: MM Had already started a Procedure.. Aborting All MM Procedures!!!! 
Line 2882: GRR_MM_RAT_RESELECTION_TO_UMTS_IND Ignored as MM has started a RAT Change !!!! 
Line 2916: 
Line 2969: 
Line 2973: mm_SendGapiRatModeChangeIndMsg Cause : %d 
Line 3006: 
Line 3041: 
Line 3075: 
Line 3109: 
Line 3145: 
Line 3171: mm_SendRatCellChangeToUmtsRspMsg..Status(%d)
Line 3224: mm_SendRatReselectionToUmtsRspMsg..Status(%d)
Line 3312: mm_SendRatHandoverToUmtsRspMsg..Status(%d)
Line 3369: Rat Mode Change (Initiated by (U)RRC) was Successful 
Line 3429: 
Line 3434: 
Line 3445: 
Line 3450: 
Line 3458: In case of G2U HO, we might don't get UNIT_DATA_IND. So, at this point, MM should let NS and PLMN
Line 3541: RAT MODE CHANGE complete received, Triggering LOC_UPD perform actions
Line 3555: RAT MODE CHANGE complete received, Triggering LOC_UPD perform actions
Line 3578: URRC_MM_RAT_CHANGE_COMPLETE_IND Not Allowed in this mm_RatModeChageState !!!
Line 3658: Setting GMM Service states as %s
Line 3724: Rat Mode Change (Initiated by (U)RRC) Failed ! Reverting Back to Old Rat ..
Line 3736: Discarding Saved Cell Ind Msg ..
Line 3748: Discarding Saved Urrc Retransmit Ind Msg ..
Line 3763: URRC_MM_RAT_CHANGE_COMPLETE_IND Not Allowed in this mm_RatModeChageState !!!
Line 3782: 
Line 3786: RabId            -> 0x%02X
Line 3787: CodecInfoPresent -> 0x%02X
Line 3788: NasSyncInd       -> 0x%02X
Line 3809: GSM to UMTS Initialisation of <GMM Functional State>
Line 3821: UMTS to GSM Initialisation of <GMM Functional State>
Line 3850: MM RATMode : %s -> %s
Line 3935: RAT Mode is  %s
Line 4002: Attempt to write to mm_RatModeChangeState Using Invalid State (%d)
Line 4039: RatModeChangeState ->  %s
Line 4074: Rat Change Cause ->  %s
Line 4116: Invalid Cause in mm_SetReStartProcOnOtherRatCause
Line 4164: RAT Change Window State ->  %s
Line 4401: serving_access_type = %d
Line 4402: mm_UeSupportRATechType = %d
Line 4451: Result : %d 
Line 4467: mm_NwAndRadioCapsData.AccessTechInfo[%d] = %d
Line 4518: Network sends All Unsupported Bands in PUA MAC Message So send Default RA Type = %s 
Line 4547: Invalid BCCH Access Type  = %s 
Line 4557: mm_GmmPduCodecDb[MmStackId].mm_NwAndRadioCapsData.AccessTechInfo values are corrupted
Line 4560: mm_RacBandCheckProc:mm_UeSupportRATechType = %d 
Line 4684: Total Size Required for Encoding RA Capabilities  %d
Line 4688: Number of RA Capabilities for Encoding = %d
Line 4735: Num = %d
Line 4738: type[%d] = %d
Line 4741: available_size given by MAC %d
Line 4799: GMSK 900 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4809: GMSK 1800 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4819: GMSK 1900 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4838: 8PSK 900 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4848: 8PSK 1800 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4858: 8PSK 1900Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4868: 8PSK 850Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4888: LTE RAT : Our received mode is LTE_HEDGE_EMC_MODE_MM
Line 4911: Mode: Curr(%d) -> New(%d) 
Line 4912: RatMode(%d) EutranDisabled(%d)
Line 4929: Proceed with Mode Update procedure
Line 4941: When mode changes then UE capabilites gets changed, Encode MSRAC due to mode change
Line 4944: EncodedSizeinBits -> %d 
Line 4998: Entered Funtion mm_DecodeMmcMccReqMsg 
Line 5022: Call triggered on other stack when reselection/redirection/HO / CCO ongoing on current stack. Proceed with suspension.
Line 5042: Suspension is postponed until BPLMN procedure completion.
Line 5052: Entered Funtion mm_DecodeMmcSuspendReqMsg 
Line 5063: mm_SuspendReq_PowerDown = %d
Line 5077: Cross over of IRAT and MMC_SUSPEND_REQ occured, Ignore IRAT and proceed with SUSPENSION
Line 5085: We are already in Suspended state.  
Line 5105: MM_DSDS_DELAY_STACK_RESUMPTION Timer is still Running and we received a Suspension, So triggering suspend Cnf Back
Line 5114: MMC resume Request Pointer is NULL already 
Line 5158: Discarding MM DATA REQ message due to HEDGE suspension
Line 5241: Stack suspension requested due to CS call on other stack, Ignore REJECT action if waiting for release
Line 5248: Standby Request Not sent GRR
Line 5267: Set mm_PsConnectedInUmts and mm_CellCoverageLost
Line 5278: Changing GMM REL CNF action to LOCAL DETACH 
Line 5352:  gsm_valid_info: %d, umts_valid_info: %d
Line 5356: IsLimitedService: %d
Line 5362: Redirect UMTS RAT: %d
Line 5377:  RAT MODE: %d
Line 5444: Redirection Done So delete the Redirect Info received from MMC.
Line 5453: Sending MMC Redirection  Status = %d
Line 5470: Entered Funtion mm_DecodeMmcLteTo2G3GReselectionReqMsg 
Line 5478: IsLimitedService: %d
Line 5512: Resel UMTS RAT: %d
Line 5527: Number of Cells Given By MMC are Zero
Line 5531: Number of Cells Given By MMC = %d
Line 5532: ARFCN = %d
Line 5533: SC = %d
Line 5572: mm_HandleHedgeToLteIratSuccess: IratType = %d
Line 5663: Discarding MM DATA REQ message due to NO SERVICE
Line 5677: Warning: RAT Mode is LTE / Reselection Cnf received twice from LTE 
Line 5687: mm_HandleHedgeToLteIratFailure: IratType = %d, ResultCause = %d, t_barred = %d
Line 5776: Discard mm_DecodeMmc2G3GToLteReselectionCnfMsg as there is no context exists
Line 5783: mm_DecodeMmc2G3GToLteReselectionCnfMsg -> Result = %d, t_barred = %d 
Line 5811: Discard mm_DecodeMmc2G3GToLteRedirectionCnfMsg as there is no context exists
Line 5816: Entered Funtion mm_DecodeMmc2G3GToLteRedirectionCnfMsg, Result = %d 
Line 5837: Discard mm_DecodeMmc2G3GToLteCellChgCnfMsg as there is no context exists
Line 5842: Entered Funtion mm_DecodeMmc2G3GToLteCellChgCnfMsg: Result = %d 
Line 5896: MM Had already started a Procedure.. Aborting All MM Procedures!!!! 
Line 5916: Number of Cells Given By MMC are Zero
Line 5940: Stack Resumed After CS CALL, Stack is in GSM rat mode, Delay Resumption for 3 Seconds
Line 5958: 
Line 5965: RESUME with MMC_CPU_POWER_ON
Line 6009: Ignore the saved ATT_REQ during stack suspension
Line 6150: Number of UMTS Cells Given By MMC = %d
Line 6154: Number of Cells Given to URRC = %d
Line 6158: ARFCN = %d
Line 6159: SC = %d
Line 6164: ARFCN = %d
Line 6165: SC = %d
Line 6181: CELL_CHANGE_REQ_TO_GSM
Line 6192: NetworkColourCode : %d BaseStaionColourCode : %d
Line 6198: Arfcn : %d BandIndicator : %d
Line 6204: num_of_gsm_si_info : %d
Line 6208: Number of GSM Cells Given By MMC = %d
Line 6218: Number of Cells Given to GRR = %d
Line 6222: BSIC = %d
Line 6223: SC = %d
Line 6228: BSIC  = %d
Line 6229: ARFCN = %d
Line 6235: 
Line 6293: 
Line 6341: 
Line 6368: mm_SendRrCellReselToEUtranFailMsg : reason : %d, t_barred : %d 
Line 6385: 
Line 6392: 
Line 6399: 
Line 6404: 
Line 6413: mm_SendRrCellReselToEUtranFailMsg : reason : %d, t_barred : %d 
Line 6435: 
Line 6442: 
Line 6469: U2L Redirection Failed. NeedCellIndAfterRelInd is set to TRUE.
Line 6487: 
Line 6538: 
Line 6567: Not sending RrCellChgToEutranFailMsg : it is in 3G RAT
Line 6584: 
Line 6610: Entered Funtion mm_DecodeRrReselectionTo2G3GCnfMsg 
Line 6625: Received From URRC :: CSG Cell PlmnId -> 0x%x 0x%x 0x%x, CsgId = 0x%x
Line 6629: Received From URRC :: Reselection Status = %d, Btimer : %d, cause : %d
Line 6638: Received From GRR :: Reselection Status = %d, Btimer : %d, cause : %d
Line 6653: 
Line 6695: Critical Error: RAT=%d
Line 6725: CELL_CHANGE_CNF Result: %d Cause : %d
Line 6774: Entered Funtion mm_DecodeRrCellReselToEUtranMsg 
Line 6785: Power off detach is pending Hence discarding G2L RESELECTION
Line 6798: Hedge to EUTRAN inter RAT cell reselection happened while power off detach is in progress, discards it
Line 6816: QRB_G2L is aborted.. 
Line 6843: Discarding G2L since NS required not to go to LTE 
Line 6849: Discarding G2L since CELL_REJ was sent and PLMN search will come.
Line 6856: Discarding G2L since PLMN_RAT_CHANGE requested.(already sent GRR_SUSPEND_REQ)
Line 6906: Clearing Cell Congestion flag
Line 6917: earfcn from RRC=%d  PcellID = %d 
Line 6929: RR set wrong cause value in redirection info. MM handle it as normal redirection
Line 6941: Entered Funtion mm_DecodeRrCellChgToEUtranMsg 
Line 6947: Power off detach is pending Hence discarding G2L CCO
Line 6986: earfcn from RRC=%d  PcellID = %d 
Line 7006: Clearing Cell Congestion flag
Line 7018: Entered Funtion mm_DecodeUrrcCellReselToEUtranReqMsg 
Line 7027: Power off detach is pending Hence discarding U2L RESELECTION
Line 7064: Discarding U2L since NS required not to go to LTE or MO/MT call is on-progress 
Line 7074: earfcn from RRC=%d  PcellID = %d 
Line 7119: Entered Funtion mm_DecodeUrrcCellReDirectToEUtranReqMsg 
Line 7142: Power off detach is pending Hence discarding U2L
Line 7169: U2L redirection blocked, PLMN selection procedure will be initiated due to LAU or RAU reject
Line 7180: U2L redirection blocked by MM_BLOCK_IRAT_DURING_CELL_REJECT.
Line 7189: U2L redirection is discarded during Hedge Rat suspendion.
Line 7198: U2L redirection blocked, PLMN selection procedure will be initiated due to abnormal LAU failure
Line 7205: U2L redirection blocked, Saved PLMN selection procedure will be initiated
Line 7218: Discarding U2L since NS required not to go to LTE 
Line 7288: Invalid Cause : URRC_CR_CSG_CELL_BARRED, CSG NOT SUPPORTED
Line 7315: Sending MMC Reselection Status = %d, bar timer : %d
Line 7334: Sending MMC CSG Cell PlmnId -> 0x%x 0x%x 0x%x, CsgId = 0x%x
Line 7339: No CSG CELL info in Reselecion CNF message
Line 7380: Earfcn=%d   PcellID=%d 
Line 7383: Selected PlmnId = 0x%x 0x%x 0x%x,
Line 7385: Sending MMC Reselection Req for HEDGE to LTE 
Line 7467: Selected PlmnId = 0x%x 0x%x 0x%x, Num of Frequencies %d
Line 7468: IsQRB = %d
Line 7470: Sending MMC Redirection  Req from HEDGE to LTE 
Line 7507: Sending MMC Reselection Req for HEDGE to LTE 
Line 7531: Invalid Cause (0x%02X) in mm_SetRatChangeCause
Line 7580: mm_DecodeMmPlmnRatChangeReq
Line 7589: Ignoring RAT change received from GMC, Current resumed Rat is same as Requested Rat 
Line 7612: 
Line 7619: 
Line 7624: 
Line 7633: BPLMN procedure is ongoing, so save the RAT change
Line 7644: Cross over of IRAT and MMC_SUSPEND_REQ occured, Ignore IRAT and proceed with SUSPENSION
Line 7655: RatMode = %s
Line 7701: 
Line 7717: LAC = 0x  %x %x %x %x %x
Line 7775: Current cell is AT & T network
Line 7778: LAC Belong to AT&T FemtoCell
Line 7806: LTE info present in SIB 19 = %d in mm_DecodeUrrcMmLteRatInfoInd
Line 7813:  No LTE cell in neighbor. Giving up quick rollback to LTE..
Line 7830: In mm_SendRrMmLteStatusIndMsg .... EutranDisabled : %d, RAT : %d Block LTE Measurements %d
Line 7847: In mm_SendRrMmLteStatusIndMsg .... Block LTE Measurements %d
Line 7962: mm_RatChangeCauseForFailInd = %d
Line 8001: Entered Funtion mm_DecodeUrrcInitialPlmnCnfMsg 
Line 8017: MCC Response status =%d 
Line 8019:  PlmnId = 0x%x 0x%x 0x%x,
Line 8021: Sending MMC UrrcInitialPlmnCnfMsg 
Line 8035: Entered Funtion mm_DecodeRrInitialPlmnCnfMsg 
Line 8051: MCC Response status =%d 
Line 8053:  PlmnId = 0x%x 0x%x 0x%x,
Line 8055: Sending RrInitialPlmnCnfMsg 
Line 8075: Making MM to Ready for Switch Off
Line 8131: MCC : 0x%x, MNC : 0x%x
Line 8135: 2 digit
Line 8147: PlmnId : 0x%x
Line 8199: 
Line 8209: 
Line 8329: Ultra CSFB was triggered..
Line 8343: 
Line 8571: LAU needed flag : %d, Cause : %d:GmmState : %d
Line 8572: RAU needed flag : %d, Cause : %d, NMO: %d
Line 8591: 1. RAU needed flag : %d
Line 8598: Release PS signalling connection before RAU procedure initiation.
Line 8603: RAU procedure 'interupts' service request procedure...
Line 8614: 2. RAU needed flag : %d
Line 8639: Set LAU needed
Line 8648: CELL_IND is changed into UNIT_DATA_IND to perform RAU during PMM_Connected.
Line 8668: RegType : %d, CapaChange : %d
Line 8675: RegType After CS/PS Enabled Check : %d
Line 8743: [L2U] Dedicated Priority Info to URRC Duration=%d   StartTime=%d
Line 8745: num of GeranList=%d   num of Utra_tdd List=%d   num of Utra_fdd List=%d   num of EutraList=%d
Line 8804: [U2L] Dedicated Priority Info to MMC Duration=%d   StartTime=%d
Line 8806: num of GeranList=%d   num of Utra_tdd List=%d   num of Utra_fdd List=%d   num of EutraList=%d
Line 8822: Status = %d, TargetRat = %d in mm_DecodeUrrcMmRedirectionStatusInd
Line 8902: [SRVCC] L2G SRVCC Handover Start!!
Line 8908: [SRVCC] Invalid L2G Handover type!!
Line 8916: [SRVCC] L2U SRVCC Handover Start!!
Line 8922: [SRVCC] L2U SRVCC + PS Handover Start!!
Line 8927: [SRVCC] L2U PS Handover Start!!
Line 8943: [SRVCC] Invalid L2G Handover type!!
Line 8981: MM will not handle AS Info in LTE RAT mode!! in mm_DecodeRrMmSCellAsInfoInd
Line 8993: PreviousBandId = %d, CurrentBandId = %d
Line 8994: PreviousFrequencyInfo = %d, CurrentFrequencyInfo = %d in mm_DecodeRrMmSCellAsInfoInd
Line 8998: Band or Frequency info is changed
Line 9038: Updating CSFB registries in MM 
Line 9075: Disabling EUTRA capability
Line 9092: Error  Case : EutranDisable Flag is False
Line 9101: EUTRA is Enabled
Line 9187: NMO(%d)  CSDomainAllowedLau(%d) PSDomainAllowedrau(%d) PDPInProg(%d) 
Line 9191:  RATChgInProg(%d) SMInProgress(%d) 
Line 9200: ATT SIM and ENS enabled. Do not Perform CS/PS registration
Line 9239: NEW and Old Modes are same
Line 9255: Mode change request is saved
Line 9267: OldMode: %d -> NewMode: %d
Line 9305: mm_UpdateRatInitOrStopStatus: GRR initialization state: %s,  URRC initialization state: %s
Line 9405: ModeIndex: %d, RatMode: %d
Line 9413: mm_IsCurrentRatSupportedInMode: %d
Line 9456: mm_DecodeRrCandidateRplmnScanReq - %d s
Line 9462: mm_RedirectionStatusFromAS : %d
Line 9519: Wrong Action =%d 
Line 9539: mm_DecodeUrrcMmReadyForNasRequestInd Saved PlmnAction will be performed 
Line 9544: mm_DecodeUrrcMmReadyForNasRequestInd Saved PlmnAction was empty 
