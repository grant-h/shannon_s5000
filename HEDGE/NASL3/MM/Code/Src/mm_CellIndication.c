Line 189: Initialisation of <Cell Indication>, InitType=%d
Line 411: DSAC State = %d in mm_SendGapiDsacStateInd()
Line 533: prev Band: %d, Current band: %d
Line 537: Band is changed
Line 558: PsDomainAccess PrevPSDA = %d, CurrentPSDA = %d
Line 569: CsDomainAccess PrevCSDA = %d, CurrentCSDA = %d, last_update_is_not_combined is  = %d
Line 633: CN Common SI (i.e. LAC) not present - using stored value
Line 638:  CnCommonNasInfo Absent !!!! PLMN Changed without LAC changing?! Msg ignored in  mm_DecodeRrCellIndMsg 
Line 676: CS domain specific SI (i.e. T3212 and ATT) not present - using stored values
Line 734: NetMode = %d
Line 760: Access Class is barred or not NMO1
Line 805: Previous Network mode is  = %s
Line 806: Current Network mode is  = %s
Line 828: RAU Needed Flag is Not set 
Line 834: RAU Needed Not set - NMO/Access barred not suitable 
Line 841: DSAC for CS and PS are not barred
Line 844: Previous update is not combined
Line 846: RAU Needed Flag is set 
Line 945: Clear MM_NETWORK_MODE_CHANG_FLG
Line 966: CSFB MO/MT Call pending So Making NMO as NMO2 Till we release the CS CALL 
Line 1057: Unit data Indication received after PSHO, releasing CS CALL Grant
Line 1065: CS procedure is not CS CALL, not expected
Line 1073: Putting MM DATA REQ message in Queue in order to process %s
Line 1127: Since DSAC is signalled, Access class is set to not barred
Line 1151: mm_NwModeChangeDueToAccessBarred == %d
Line 1181: CSFB MO/MT Call still pending So Making NMO as NMO2 again.. (NAS sysinfo PsDomainNasInfo[1] : %d 
Line 1226: URRC_MM_CELL_IND Received :  should ignore in PMM_CONNECTED state...
Line 1229: Discarded Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 1252: PagingRestriction %d, AccessClassBarred %d, DSAC_Signalled %d
Line 1346: LocationRegistrationRestriction %d, AccessClassBarred %d, DSAC_Signalled %d
Line 1455: Clear Cell Congestion flag, since there is a change of Cell in the GSM RAT
Line 1476: Change duplex mode
Line 1486:  SGSN Version updated (Pre99 ->R99+)... Encoding MSRAC!!!!! 
Line 1489: EncodedSizeinBits -> %d 
Line 1569: PACKET SERVICE TYPE : [ %d ] 
Line 1578: CellChange is set to FALSE.
Line 1585: CellChange is set to TRUE.
Line 1592:  RrCellInd.CellId -> [0] :%d , RrCellInd.CellId -> [1]:%d
Line 1595:  RrCellInd.Arfcn :%d
Line 1612: RR Cell Ind Rel Version of MSC : [ %d ] 
Line 1614: RR Cell Ind Rel Version of SGSN : [ %d ] 
Line 1639: Cell belongs to forbidden LAI list. So, not suitable for search!! 
Line 1645: ANY PLMN search case. CellNotSuitableForSearch [ %d ] 
Line 1689: mm_UrrcCellInd.BandId = %d
Line 1690: mm_UrrcCellInd.IsGSMRatListIncluded = %d, mm_GsmCapDisableFlag = %d
Line 1692: NasSysInfo.CsDomainNasInfoLen = %d
Line 1693: NasSysInfo.PsDomainNasInfoLen = %d
Line 1707: RAU needed flag is %d
Line 1711: Since DSAC is signalled, Access class is set to not barred
Line 1739: mm_NwModeChangeDueToAccessBarred == %d
Line 1762: mm_UrrcCellInd.CellId : 0x%08X
Line 1789: Cell belongs to forbidden LAI list. So, not suitable for search!! 
Line 1840:  %s  in Processing Cell indication message as UNIT DATA indication message since it is received in PMM Connected mode  
Line 1889: Operating Mode change is going.. New cell ind shall be ignored!!!
Line 1903: New cell ind shall be ignored, as there is a pending action from GMC for previous update reject and grant is with other stack!!!
Line 1925: CsCall is resumed when URRC_MM_CELL_IND comes
Line 1955: isCommercialCell =%d
Line 2014: Delay to send REG_STATUS_IND after LAU completed
Line 2034: Warning : Power-off detach is on-going, so not sending REG_STATUS_IND to NS
Line 2052: Cell Indication received after PSHO, releasing CS CALL Grant
Line 2060: CS procedure is not CS CALL, not expected
Line 2172: Delay to send REG_STATUS_IND after LAU completed
Line 2225: 
Line 2243: Putting MM DATA REQ message in Queue in order to process %s
Line 2265: 
Line 2272: 
Line 2289: DSDS: MM_DS_PERFORM_PROCEED_STACK_RESUMPTION
Line 2324:  Mesage Cross Over detected, Cell Ind Ignored in mm_DecodeRrCellIndMsg  
Line 2339: T323Availability  = %d
Line 2346:  Quick rollback is in progress, so processing MM cell ind further, if Quick rollback is failed 
Line 2350:  Quick rollback is in progress, so processing MM cell ind further, if QRB for G2L is failed 
Line 2366: LAU triggered because of CSFB call release
Line 2377: Periodic Location Update is triggered since 3312 was already expired
Line 2408: Received CELL IND After OOS So Reset All PLMN States In Connected Mode no Need to handle
Line 2438:  CnCommonNasInfo Absent !!!! PLMN Changed without LAC changing?! Msg ignored in  mm_DecodeRrCellIndMsg 
Line 2445:  PS Domain Info Also Present So Fill RAI and Nor For ANYPLMN
Line 2453:  PsDomainNasInfoLen Absent !!!! 
Line 2459:  ExitMmCellInd After mm_PerformCellIndGenPlmnActions %s   
Line 2464:  ExitMmCellInd After mm_CheckRecoveryFromLossOfCoverage %s   
Line 2501: IMSI detach request will now be processed by MM....
Line 2516:  Moved to a New LAI, or ATT Actions Not Allowed...-> Implicitly Detaching
Line 2549:  Moved to a New Cell, While Attempting to Detach. Proceed with Detach ...
Line 2566: Emergency Call Waiting...
Line 2598: No New LAI..
Line 2602: MM_REL_REQ is already received so don't retry CM SERVICE REQ again
Line 2644: Moved to New LAI. Start Location Update Procedure After RR Rel Cnf.
Line 2665: Cell Does not Support Voice, Terminating RR Connection.
Line 2696: No New LAI. Do nothing
Line 2714: Moved to New LAI. Start Location Update. Paging Abandoned
Line 2732: Cell Does not Support Voice, Terminating RR Connection.
Line 2762: Waiting For MM Connections to be Re-Established
Line 2782: Cell Does not Support Voice, Terminating RR Connection.
Line 2812: Urrc Unit Data Ind received during Call in progress
Line 2830: No New LAI. Do nothing
Line 2840: Moved to New LAI. Start Location Update. Paging Abandoned
Line 2856: Cell Does not Support CS Domain, Terminating RR Connection.
Line 2875: Set MM service state to NORMAL on CELL_IND after AUTH failure
Line 2884: No New LAI. Do nothing
Line 2892: Moved to New LAI. Start Location Update. MO call was Abandoned
Line 2948:  Found in the ForbiddenRoamingLaiList
Line 2954:  Found in the ForbiddenRegLaiList
Line 2962:  Found the Cell for Given Redirect Message 
Line 2994:  CELL IND comes in IDLE state, so abandon quick rollback procedure.
Line 3017:  Copying Cell Data Flags Only Since MM_RR_NO_SERVICE_CELL_FLG is TRUE
Line 3035:  Copying Cell Data Flags Only Since NO_IMSI or Forbidden Plmn, etc.
Line 3043:  Copying All of Cell Data Information
Line 3058: In roaming case, set CS_VOICE_PREF_IMS_VOICE_SEC
Line 3065: In roaming case, set CS VOICE Only for KDDI requirement
Line 3124:  If CCO, RESUME_DONE_IND will be sent after getting Result from RR
Line 3189:  Access Class is Barred in mm_ProcessMmCellIndMsg 
Line 3199:  SameRrConnexFailAction = %d
Line 3208: RAT Change Detected in mm_ProcessMmCellIndMsg
Line 3246: EST REJ TRY OTHER RAT Cause Detected. Changing MM State to %s in mm_ProcessMmCellIndMsg
Line 3259: Entered here because there was a LAI change after EST_REJ reselection during an ongoing call, Call will be done after LAU procedure
Line 3260: Resetting MM_RE_START_PROC_ON_OTHER_RAT_FLG as MM_LOC_UPD_REQ_1ST_MM_CON_FLG-> %d (or) mm_CallWasAttempted -> %d  
Line 3271:  Quick rollback is in progress, so processing MM cell ind further, if Quick rollback is failed 
Line 3285:  SameRrConnexFailAction = %d
Line 3379: GMM_FORBIDDEN_PLMN_GPRS_FLG
Line 3425: NO SERVICE in mm_CheckRrCellIndNoServiceState 
Line 3440: Ignoring No cell ind -> Message Crossover 
Line 3456: If T3213 is stopped due to NO_CELL_IND set LAU needed flag
Line 3501: LOSS_CVG: All contexts other than CC should be released
Line 3526: CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d
Line 3534: Discarding MM DATA REQ message due to NO SERVICE
Line 3540: Triggering silent redial ...
Line 3572: MM Connection Lost due to No service
Line 3694:  SameRrConnexFailAction = %d
Line 3704: Location update failed and PLMN PERFORM ACTIONS not sent before due to PS procedure on same RR connection and got NO_CELL_IND..Sending now.. 
Line 3737: Cell Does Not Support Voice Calls in mm_CheckRrCellIndNoServiceState 
Line 3741: Emergency Call Attempted, Must find a Cell Which supports CS & Emergency Calls...
Line 3770: Emergency Call Was Attempted....
Line 3775:  SameRrConnexFailAction = %d
Line 3781: Cell Supports Voice Calls in mm_CheckRrCellIndNoServiceState 
Line 3787: LGU device has EPS only mode in LTE side. So when UE camps on Hedge cell, it needs to enable CS/PS 
Line 3797: PS only mode in LTE side. If we dont set here, RAU will be sent first
Line 3830: Emergency Call Was Attempted....
Line 3870: But Cell Does NOT Support Voice or Emergency Call!!!!!
Line 3895: CSFB Emergency call is triggered: Orignial network mode is NMO1, Set combined RAU with IMSI flag 
Line 3903: CSFB Emergency call is triggered on same LAI, mm_SetLauAfterCsFallbackFlag() 
Line 3909: QRB is triggered about LTE emergnecy call..
Line 3956: SIM Absent, Ignore the message!!!!!
Line 3987:  In PS only support case, MM should send RESUME done indication to URRC  
Line 3999: On ANY PLMN in mm_CheckRrCellIndEmergCase....
Line 4012: In this case, BackGND PLMN_LIST will come when OOS timer expired
Line 4026: LAU has to be performed after Combined RAU rej #7,14 while manual PLMN selection is in progress
Line 4032: Forbidden Plmn Detected in mm_CheckRrCellIndEmergCase....
Line 4059: Forbidden LAI Detected in mm_CheckRrCellIndEmergCase....
Line 4065: Forbidden LAI Detected in << Forbidden Location Areas for Roaming >> Requesting RR(C) to Select Another Cell...
Line 4101: Forbidden LAI Detected in << Forbidden Location Areas for Roaming >>, We Are in an Area With Limited Service, No Cell Selection Necessary, Just Wait Until RR(C) Finds another Cell.... 
Line 4111:  SameRrConnexFailAction = %d
Line 4130: If UE is redirected or handover under UTRAN control any limitation shall be removed...
Line 4134: RR sent a Plmn MM did not ask for and it's not in the Equivalent Plmn List Either....!
Line 4194: MM is in MM_IDLE/NULL during Emerg
Line 4203: Implicitly Detaching
Line 4224:  Moved to Emergency Cell Only 
Line 4238: Different LAI, releasing RR connection
Line 4262: Same LAI but not emergency call so releasing RR connection
Line 4296:  Emeregency Cell Change in Dedicated Mode Not Possibe, FATAL ERROR 
Line 4304:  LU Running Moved to Emergency Cell Wait for Coverage 
Line 4338: Received a Cell Ind in connected Mode Not Allowed 
Line 4376:  SameRrConnexFailAction = %d
Line 4406: Service Available -> Update T3212 (Loc. Upd Period)
Line 4417: T3212 is 0 -> Do Not Run Location Update
Line 4423: T3212 > 0 -> Location Update Shall be Run
Line 4463:  Setting MsOperationMode to MM_MOBILE_CLASS_C on user's request-> %d  
Line 4468: GSM only, Mobile Class C_CS under DSDS configuration, LAU should be performed on NMO I
Line 4473:  GprsServiceAllowed -> %s  
Line 4479: Set GprsServiceAllowed to TRUE
Line 4493:  GprsServiceAllowed -> %s, PS is BARRED  
Line 4525: Changing Network Mode for CS Domain in mm_CheckRrCellIndNetwkMode.... 
Line 4582: Stopping Location Update Timers in Network Mode 1 in mm_CheckRrCellIndNetwkMode.... 
Line 4617:  RR connection for CS only Registration is pending and NMO 1 
Line 4633:  SameRrConnexFailAction = %d
Line 4675: Resetting Loc UPd Attempt Count -> Entering New Cell while in MM_ATTEMPTING_TO_UPDATE....[24.008]-4.4.4.5
Line 4743: mm_lastCsRegRatMode = %d ,mm_lte_Tin = %d
Line 4789:  RESEL_HOLD_REQ Sent to GRR, So not processing GMM Cell Data
Line 4795:  SameRrConnexFailAction = %d
Line 4823: User Has Not Requested To Attach to CS Domain in mm_CheckCellIndCsEnabled... 
Line 4836: User Has Already Requested To Attach to CS Domain in mm_CheckCellIndCsEnabled... 
Line 4841: But Mobile is Not Attached to CS Domain Yet in mm_CheckCellIndCsEnabled... 
Line 4847: Unit Data Ind received, In Attempting to update state when UE is waiting for Cell Ind 
Line 4868: Proceed with other functions because here the available CELL LAI is different than Prev Cell and CS is Allowed
Line 4890: After TAU reject (12,13,15) or (16,17 5times) cell LAI = sim LAI = prev LAI. LAU will be initiated in mm_ProcessMmCellIndMsgAreaReg. 
Line 4922: And Mobile is Already Attached to CS Domain in mm_CheckCellIndCsEnabled... 
Line 4980: Coverage Had Been Lost
Line 4984: We are on Any PLMN So need to Wait for PLMN Search Req Again 
Line 4993: We are Back in the Registered Plmn Area
Line 5003: SIM RAI == Cell Data RAI -> ON_PLMN
Line 5008: SIM RAI != Cell Data RAI -> NOT ON_PLMN
Line 5016: SIM LAI == Cell Data LAI -> ON_PLMN
Line 5021: SIM LAI != Cell Data LAI -> NOT ON_PLMN
Line 5077: We are NOT Back in the Registered Plmn Area
Line 5081: We are in an Equivalent Plmn...Must Perform Registration
Line 5094: CELL_IND came and Service State should be normal service state..
Line 5150: We Are in the Registered Area, i.e. Sim Lai == New Cell Data Lai in mm_ProcessMmCellIndMsgAreaReg 
Line 5158:  Loc Upd Attempt Count > 0 & T3211 is Running. Wait Until it Expires
Line 5172: Sim Lai == NewCellData Lai = CellData Lai, We have NOT Moved from the Registered Area, T3213 Running -> Random Access Failure -> Must enter a new LAI before doing Loc Upd [24.008]-4.4.4.9 Clause (c)
Line 5183:  (SimData == NewCellData) != CellData, We Have Moved Back into the Registered Area
Line 5187:  LocUpd Done after T3211 -> %s 
Line 5202: Either NOT UPDATED or T3213 Expired without doing Loc Upd, i.e. we have re-gained Coverage -> Perform Loc Upd.
Line 5229:  T3212 Timeout detected
Line 5264:  T3211 expired on unexpected condition and we are back in REG AREA
Line 5273:  MM regain coverage on the cell of registered LAI. [24.008]-4.4.4.9 (c)
Line 5385: MO/MT Call is Pending  
Line 5392: Cell Congestion flag is SET, Do not Send Paging Response
Line 5413: We Camp to the Same LA Cell Received From LTE , Proceed with Paging Responce 
Line 5423: UE is on HongKong Network 
Line 5448: We Camp to the Same LA Cell Received From LTE ,Mo Call is Pending Wait for MM EST REQ 
Line 5474: Update status is PLMN_NOT_ALLOWED or LAI_NOT_ALLOWED
Line 5513:  Registered Area NOT detected, i.e. Sim Lai != New Cell Data Lai in mm_ProcessMmCellIndMsgAreaNotReg 
Line 5520:  New cell Detected, Sim Lai != New Cell Lai, != Cell Lai  or first HEDGE cell (IsFromLte : %d)
Line 5541:  LAI Mimatch and after that there is a change of LA or UE was in LTE before, resetting LAI Mismatch Counter
Line 5545:  Start Normal Location Update 
Line 5558: New cell ind with change in parameters received during PS detach, invoke local detach
Line 5578:  No New Cell Detected...Sim Lai != New Cell Lai = Cell Lai 
Line 5588: T3211 RUNNING, Loc Upd Done After T3211 Expiry
Line 5644: AttemptCount > 0, LowerLayerFailCount > 0
Line 5674: Access Enabled in Same LAI, Do LAU/3122 Not Running
Line 5699: MM_CELL_CONG_WAIT_3122_EXP_FLG == TRUE
Line 5714:  T3212 Timeout detected
Line 5734: No LocUpd Done Until A differnt Cell is Entered or T3212 Expires !
Line 5766: Need to exit cell indication Processing, as RESEL_HOLD is triggered
Line 5777: First Cell Change Detected before T3213 Expiry Refer [1]-4.4.4.9 (c)
Line 5819: Access Enabled in Same LAI, Do LAU/3122 Not Running
Line 5847: MM_CELL_CONG_WAIT_3122_EXP_FLG == TRUE
Line 5988: Authentication Failed or Entered New Area. Iniitate Location Update...
Line 6011: Waiting for RRC EST CNF But cell change Occured,CELL Changed and Moved Back to Prev Cell SIM LAI == CELL LAI
Line 6043: Authentication Failed. RR Connection Already Released, Start Location Update Procedure
Line 6050: RR will throw away the EST REQ, MM Must send location update again
Line 6056: Loc Update After RR Rel Cnf
Line 6078: Authentication Failed. RR Connection Already Released. Nothing to do
Line 6082: Release RR Connection.
Line 6090: mm_GetRrMmRelReqSentFlag - FALSE
Line 6091: mm_GetDsDelayCsIdleEntry = %d
Line 6099: No Change of LAI but authentication failed on same LAI.
Line 6104: No Change of LAI
Line 6111:   New Cell Does not support Loc Upd IMSI Attach -> Abort Procedure
Line 6144: Boom: LAI Not changed ..... 
Line 6160: Even though LAI did not Change, RR will throw away the EST REQ, MM Must send it again
Line 6209: UE had initiated a combined attach procedure to update CS registration in network...and new cell does not operate in network operation mode I
Line 6224: UE had initiated a combined RAU procedure to update CS registration in network...and new cell does not operate in network operation mode I
Line 6258: ...IMSI attach required for registration in the CS domain
Line 6277: ...UE implicitly registered in the CS domain
Line 6291: ...normal LAU required for registration in the CS domain
Line 6322: MSG Contents: %s
Line 6324: LocUp -> %s
Line 6366: Requesting to NS to raise NTF
Line 6377: mm_MmServiceInd.PlmnAttribute -> %d
Line 6390:  mm_GmmNwDetReqFlag = %d
Line 6433: MM in MM_PLMN_SEARCH service state, MM_NORMAL_SERVICE indicated to NS because of CSFB call PLMN Search
Line 6535: PLMN ID= %x %x %x, PsType= %x in CellInfo, GsmDtmSupported = %d
Line 6586:  Plmn Id -> 0x%02X 0x%02X 0x%02X
Line 6604: mm_ps_service_type %d
Line 6609: mm_RegistrationStatusInd.CellId(GSM) %0x
Line 6615: mm_RegistrationStatusInd.CellId(UMTS) %0x
Line 6629: PS DETACH is done Locally
Line 6650: previous Sent Reg info & current Reginfo are same.Not sending info to NS
Line 6658: MM/GMM attach status = %d / %d
Line 6659: Current RAT = %d, Network mode =%d 
Line 6661:  Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 6734: mm_ps_service_type %d
Line 6778: MM/GMM attach status = %d / %d
Line 6779: Current RAT = %d, Network mode =%d 
Line 6780: RejType /RejCause = %d / %d
Line 6781: Attempt count = %d
Line 6783:  Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 6795: 
Line 6933: MSG contents: %s
Line 6964: No Cell Indication received after PSHO, releasing CS CALL Grant
Line 6972: CS procedure is not CS CALL, not expected
Line 6981: Operating Mode change is going.. No cell ind shall be ignored!!!
Line 7003: PLMN List Size in NO CELL IND = %d
Line 7277:  MM Registration Status Cause -> %s 
Line 7289:  GMM Registration Status Cause -> %s 
Line 7445: Cell Data Access Class -> %s 
Line 7457: Cell Data Access Class -> 1. Previous: %s, 2. New: %s 
Line 7471:  Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 7482: New Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 7500: Previous Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 
Line 7511: Cell Data LAI For Emergency Camping -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 7529: Previous Cell Data LAI For Emergency Camping-> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 
Line 7550: Cell Data MM_ATT_ALLOWED_CELL_FLG     -> %s
Line 7557: Cell Data MM_EMERG_CALL_BARRED_FLG    -> %s
Line 7564: Cell Data MM_CELL_CHANGE_CELL_FLG     -> %s
Line 7571: Cell Data MM_RR_NO_SERVICE_CELL_FLG   -> %s
Line 7578: Cell Data MM_DCS_BAND_BIT             -> %s
Line 7585: Cell Data MM_NECI_CELL_FLG            -> %s
Line 7592: Cell Data MM_CELL_SUPPORT_CS_CELL_FLG -> %s
Line 7599: Cell Data MM_CELL_SUPPORT_PS_CELL_FLG -> %s
Line 7607: Cell Data MM_PPAC_ALLOW_CS_PAGING -> %s
Line 7614: Cell Data MM_PPAC_ALLOW_PS_PAGING -> %s
Line 7620: Cell Data MM_ALLOW_CS_REGISTRATION -> %s
Line 7627: Cell Data MM_ALLOW_PS_REGISTRATION -> %s
Line 7634: Cell Data MM_CELL_INFO_VALID_FLG -> %s
Line 7641: Cell Data MM_CELL_DTM_SUPPORTED_FLG -> %s
Line 7648: Request to Display an Inavlid Flag -> 0x%02X in mm_DisplayCellDataFlag
Line 7663: --------------------- Displaying Cell Data Info. --------------
Line 7681:  mm_CellData.T3212 = %d,          mm_GetT3212TimedOutFlg() : %x  
Line 7689: ----------------------------------
Line 7701: 
Line 7705:  New Cell Data Plmn is NOT in any Forbidden Plmn Lists. 
Line 7711:  New Cell Data Plmn is Part of Forbidden Plmn List !! 
Line 7716:  New Cell Data Plmn is Part of GMM Forbidden Plmn List !! 
Line 7721:  New Cell Data Plmn is Part of Forbidden Lai List !! 
Line 7726:  New Cell Data Plmn is Part of Forbidden Regional Lai List !! 
Line 7731:  Plmn Selection Started 
Line 7735: 
Line 7737: Cell Data MM_ATT_ALLOWED_CELL_FLG          -> 1. Previous: %s, 2. New: %s
Line 7741: Cell Data MM_EMERG_CALL_BARRED_FLG          -> 1. Previous: %s, 2. New: %s
Line 7745: Cell Data MM_CELL_CHANGE_CELL_FLG          -> 1. Previous: %s, 2. New: %s
Line 7749: Cell Data MM_RR_NO_SERVICE_CELL_FLG          -> 1. Previous: %s, 2. New: %s
Line 7753: Cell Data MM_DCS_BAND_BIT          -> 1. Previous: %s, 2. New: %s
Line 7757: Cell Data MM_NECI_CELL_FLG          -> 1. Previous: %s, 2. New: %s
Line 7761: Cell Data MM_CELL_SUPPORT_CS_CELL_FLG          -> 1. Previous: %s, 2. New: %s
Line 7765: Cell Data MM_CELL_SUPPORT_PS_CELL_FLG          -> 1. Previous: %s, 2. New: %s
Line 7768: Cell Data MM_CELL_DTM_SUPPORTED_FLG          -> 1. Previous: %s, 2. New: %s
Line 7775: Cell Data MM_PPAC_ALLOW_CS_PAGING          -> 1. Previous: %s, 2. New: %s
Line 7779: Cell Data MM_PPAC_ALLOW_PS_PAGING          -> 1. Previous: %s, 2. New: %s
Line 7783: Cell Data MM_ALLOW_PS_REGISTRATION          -> 1. Previous: %s, 2. New: %s
Line 7787: Cell Data MM_ALLOW_CS_REGISTRATION          -> 1. Previous: %s, 2. New: %s
Line 7791: Cell Data MM_CELL_INFO_VALID_FLG          -> 1. Previous: %s, 2. New: %s
Line 7836: RejCause = %s
Line 7974: Network Release version: M.S.C -> %s,          S.G.S.N -> %s
Line 8146: LAI/RAI Changed so need to perform RAU then send CM SERV REQ
Line 8151: Cell Does not Support Voice, Terminating RR Connection.
Line 8161: Not Supported in this Case/It Can process RAU MM State is Fine
Line 8180: mm_CheckMmStatesForNmo1CellInd in State = %s
Line 8187: CS Dedicated Mode Not Expected CELL IND in this Case
Line 8331: 
Line 8355: Cause value received from LTE :  Cause -- NETWORK FAILURE / GmmProcedure : 
Line 8369: Set TIN to P-TMIS when ATTACH/TAU REJECT other than cause #18
Line 8451: mm_AddToForbiddenGmmPlmnList : 0x%x 0x%x 0x%x 
Line 8467: Sync Plmn State to MM_ON_ANY_PLMN as per LTE reject #11/13
Line 8523: Sync Plmn State to MM_ON_ANY_PLMN as per LTE reject #11/13
Line 8594: mm_DecodeCellInfoReqMsg 
Line 8613: MSG Contents: %s
Line 8657:  Restore MM CellData for recovery 
Line 8671:  Setting MM CellData for recovery 
Line 8880:  Cell Band is changed
Line 8887:  Cell Band is changed
Line 8893: The latest CELL MM received is not 2G.
Line 8942: prev Band: %d, Current band: %d
Line 8944:  mm_RrDediCellInd.Arfcn :%d
Line 8947:  mm_RrDediCellInd.CellId -> [0] :%d , mm_RrDediCellInd.CellId -> [1]:%d
Line 8964: Putting MM DATA REQ message in Queue in order to process %s
Line 8983: Keep previous mm_ps_service_type, mm_ps_service_type = %d
Line 8991: RR_DEDICELL_IND, DTM supported on new cell = %d, ps type = %d
Line 9017: RR_DEDICELL_IND, RAU will be initiated.. 
Line 9048: DEDICELL_IND after IRAT HO,  RAI -> %02X %02X %02X %02X %02X %02X
Line 9056: Gmm Service State = %d 
Line 9090: In %s , LAI part in mm_Cell data is changed, In turns it would change RAI, So setting LAU / RAU needed flag 
Line 9093: In %s , LAI part in mm_Cell data is changed setting LAU needed 
Line 9109: In %s , LAI part in mm_GmmCelldata is changed, So setting RAU needed flag 
Line 9128: Resetting TBF Release Actions
Line 9161: 2G DediCellInd.Lai -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 9222: Keep in-service display during abnormal LAU failure
Line 9248: GPRS reg status set to FALSE to prevent unexpected Roaming icon issue 
Line 9263: Set GprsStatus to TRUE during temp RAU failure (<=2)
Line 9289: mm_SetCsCallResumeInd = %d
Line 9307: GS46 Metric queried
Line 9320: PrevStatus =%d, CurrentStatus =%d
Line 9346: Reset data 
Line 9444: Information didn't be changed.
Line 9456: ucFieldValidity = 0x%02X
Line 9457: ucRAC = 0x%02X
Line 9458: ucAccessTech = 0x%02X
Line 9459: ucFreqBand =0x%02X
Line 9460: MCC = 0x%04d, MNC =0x%04d, LAC=0x%04X
Line 9462: CellId = 0x%04X, RNCId =0x%04X
Line 9497: Not supported Band
Line 9525: Not supported Band
Line 9578:  URRC_MM_UNIT_DATA_IND was processed.. It doesn't need to change it..
Line 9599:  URRC_MM_CELL_IND was changed into URRC_MM_UNIT_DATA_IND..
Line 9708:  Resetting Sent Reg Status
Line 9756: %d, %d
Line 9835: CSFB MO/MT Call pending So Making NMO as NMO2 Till we release the CS CALL 
Line 9854: GRR Traffic band ind received, CS connected: %d / PS connected: %d
Line 9891: Wrong Action =%d 
Line 9948:  CELL DB FLAG: %s               -> TRUE
