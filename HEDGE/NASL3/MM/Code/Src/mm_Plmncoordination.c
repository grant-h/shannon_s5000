Line 444: Automatic Plmn Selction Mode Activated in mm_InitialisePlmnManagement
Line 448: Manual Plmn Selction Mode Activated in mm_InitialisePlmnManagement
Line 508: Reset  mm_RetryPlmn
Line 586: Ignoring PLMN Search Request. PLMN search is received when Reselection is ongoing
Line 625: mm_GsmCapDisableFlag = %d, IsThisUserSelected = %d,EplmnHasSelectedPlmn= %d
Line 629: mm_SelectedPLMN 0x%02x 0x%02x 0x%02x  
Line 630: mm_RetryPlmn 0x%02x 0x%02x 0x%02x  
Line 631: mm_RetryPlmn.RetryOnSamePlmn = %d
Line 648: User Selected PLMN so Update FLAI List  to RRC as zero to find the cell 
Line 683: Reset all attempt counters for retry LAU and PS attach on abnormal failed PLMN as per SoR requirement
Line 688: RetryOnSamePlmn = FALSE
Line 703: 
Line 741: MM will send dummy FAIL_IND because WE SHOULD NOT SEARCH 2G RAT
Line 757: 
Line 820: IsThisAutoToAutoResel = %d
Line 844: 
Line 856: 
Line 899: 
Line 904: 
Line 915: 
Line 929: 
Line 948: 
Line 963: 
Line 974: Save The Message and Process After REL  Cnf  
Line 1150: 
Line 1172: Received ActHplmn from PLMN
Line 1179: EF_ActHPLMN is not received from PLMN
Line 1230: 
Line 1232: Updating RR(C) ActHPLMN -> 0x%02X 0x%02X 0x%02X
Line 1260: Is CMCC PLMN %d, is User Selected PLMN %d
Line 1323: Triggering Priority PLMN Search 
Line 1346: Priority PLMN Search not needed
Line 1390: SearchCause =%d, 0: normal, 1: EM
Line 1428: 
Line 1430: Discarding Saved Cell Ind
Line 1432: Requesting RR(C) to Try This PLMN -> 0x%02X 0x%02X 0x%02X
Line 1435: Auto Selection -> %s
Line 1438: Setting mm_PlmnSearchCellIndFlag to PLMN_REQUESTED_SEARCH
Line 1476: Auto Selection -> %s
Line 1492: mm_BplmnSearchRatMode -> %s
Line 1495: mm_GetBPLMNEnabled -> %d
Line 1506: Intial values -> ListBuffIndex = %d, ArfcnBuffIndex = %d 
Line 1525: Arfcn_number = %d
Line 1538: Updated values -> ListBuffIndex = %d, ArfcnBuffIndex = %d 
Line 1554: MmListPtr->RatToSearch==>MM_UMTS_RAT_MODE
Line 1562: MmListPtr->FastHplmnScanRequested = %d
Line 1581: FastHplmnScanRequested -> %d
Line 1584: Back Gnd SearchType -> %s
Line 1589: PlmnReqForOldList -> %d
Line 1610: ListSize -> %d
Line 1622: List -> 
Line 1633: ServingPlmn -> 
Line 1649: BPlmnGsmCellDesc
Line 1658: LteRrcDetectFreqInfo.detectFreqNum = %d
Line 1665: ListReqBandNum = %d, BandList->
Line 1684: Back Gnd SearchType -> %s
Line 1689: SingleRatSearch -> %s
Line 1695: FastHplmnScanRequested -> %d
Line 1700: PlmnReqForOldList -> %d
Line 1718: ListSize -> %d
Line 1733: List -> 
Line 1761: LteRrcDetectFreqInfo.detectFreqNum = %d
Line 1767: ListReqBandNum = %d, BandList->
Line 1798: Back Gnd SearchType -> %s
Line 1805: PlmnReqForOldList -> %d
Line 1808: SingleRatSearch -> %s
Line 1813: ListSize -> %d
Line 1828: List -> 
Line 1842: ListReqBandNum = %d, BandList->
Line 1868: ListReq for RAT Mode MM_UMTS_RAT_MODE
Line 1887: ListReqBandNum = %d, BandList->
Line 1890: PlmnReqForOldList -> %d
Line 1893: LteRrcDetectFreqInfo.detectFreqNum = %d
Line 1903: ListReq for RAT Mode MM_GSM_RAT_MODE
Line 1920: ListReqBandNum = %d, BandList->
Line 1924: PlmnReqForOldList -> %d
Line 1947: 
Line 1949: Requesting (U)RRC to Send Available Plmn List ...
Line 2011: 
Line 2012: Requesting RRC to Try PLMN Search For CSCallResume..Try This PLMN -> 0x%02X 0x%02X 0x%02X
Line 2032: mm_GetServiceState = %d
Line 2064: Normal PLMN Search Fail Ind
Line 2072: PLMN SEARCH FAIL IND failCause = %d
Line 2090: 
Line 2123: 
Line 2126: 
Line 2283: NumberArfcn = %d,ArfcnLength =%d
Line 2339: ArfcnInfo
Line 2413: PLMN LIST IND failCause = %d
Line 2437: NumberArfcn = %d
Line 2496: ArfcnInfo
Line 3106: PLMN action delayed until GMM procedure completion in %s....
Line 3115: We have to Perfomr PLMN action Because we are in Idle Mode or Received No Service from RRC  
Line 3121: PLMN action delayed until PS signaling connection release... except OOS Case 
Line 3128: PLMN action delayed until RR connection release in %s 
Line 3155: GMM states are ready for list request processing 
Line 3160: PLMN action delayed until GMM procedure completion in %s 
Line 3204: Indicating as CLASS_C_PS always for PS only type devices, ex: VZW TAB 2
Line 3235: If cell data RAI and SIM RAI are different, indicate DEREGISTERED for GMC
Line 3258: Indicating PLMN that MM is ready to go back to LTE.
Line 3329: Plmn State = %s
Line 3409: HPlmn Search In Progress...
Line 3414: HPLMN search not initiated so proceed
Line 3440: Attempting to Add More than Allowed to mm_EquivalentPlmnList (%d) in mm_AddToEquivalentPlmnList 
Line 3453:  Deleting Equivalent Plmn List 
Line 3471: Equivalent Plmn List (%d)
Line 3475: %d> 0x%02X 0x%02X 0x%02X
Line 3491: %d> %02X -%02X
Line 3497: Equivalent Plmn List is Empty !
Line 3596: Copy EPLMN List : Count=%d
Line 3644: EPLMN List is not changed.. No update in Registry..
Line 3662: Deleting Forbidden LAI Lists...[24.008]-4.4.1
Line 3671: %d Hours Left to (Periodically) Delete the Forbidden LAI Lists...[24.008]-4.4.1 
Line 3729: 
Line 3852: 
Line 3921: 
Line 3983: mm_SimProvider = %d
Line 4110: Forbidden Plmn List (%d)
Line 4114: %d -> 0x%02x 0x%02x 0x%02x  
Line 4125: ForbiddenPlmnList is Empty !
Line 4142: Forbidden GMM Plmn List (%d)
Line 4146: %d > 0x%02X 0x%02X 0x%02X   
Line 4157: ForbiddenGmmPlmnList is Empty !
Line 4177: Manual Forbidden Regional Lai List (%d)
Line 4181: %d > 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 
Line 4194: Manual ForbiddenRegLaiList is Empty !
Line 4201: Forbidden Regional Lai List (%d)
Line 4205: %d > 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 
Line 4218: ForbiddenLaiList is Empty !
Line 4236: Forbidden Regional Lai List (%d)
Line 4240: %d > 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 
Line 4253: ForbiddenRegLaiList is Empty !
Line 4268: Removing Plmn 0x%02X 0x%02X 0x%02X From Equivalent Plmn List
Line 4314: PLMN Present in EHPLMN List. Not adding to FPLMN List
Line 4391: Removing Plmn 0x%02X 0x%02X 0x%02X From Forbidden Plmn List
Line 4421: Index is out of bounds, Index: %d, mm_ForbiddenPlmnCount: %d
Line 4572: Removing Lai 0x%02X 0x%02X From Manual Forbidden Regional Lai List
Line 4578: mm_PlmnState(Manual Mode) = %s
Line 4603: Removing Lai 0x%02X 0x%02X From Forbidden Regional Lai List
Line 4609: mm_PlmnState = %s
Line 4659: Removing Plmn 0x%02X 0x%02X 0x%02X From Forbidden Gmm Plmn List
Line 4705: PLMN Present in EHPLMN List. Not adding to FPLMN List
Line 4848: Removing Lai 0x%02X 0x%02X From Forbidden Lai List
Line 4877: Unable to Remove Lai from mm_PlmnCoordinationDb[MmStackId].mm_ForbiddenRoamingLaiList, Invalid Index (0x%02X)
Line 5281: We're in HPLMN
Line 5363: Invalid PlmnIndex used in mm_GetEquivalentPlmnListPlmn !
Line 5392: During manual mode we shall send Manual FLAI list to AS
Line 5398: During Auto mode we shall  send Auto FLAI list to AS
Line 5480: 
Line 5485: Send FLAI list in manual mode.
Line 5524: mm_PerformPlmnActions with Actions %s, Cause: %d
Line 5536:  SAME LA: CCO/Reselection in PS COnnected  is ongoing, dont trigger LOC_UPD perform action, LOC_UPD will be triggered on receiving RATMode change complete
Line 5567: Power off detach is pending, Further PLMN selection is not expected from PLMN
Line 5601: Reset  mm_RetryPlmn
Line 5691: PlmnSelNeeded is %d, TriggerGmmRelReq %d
Line 5700: Request 2G to stop IRAT reselection if it is on going
Line 5717: SoR Feature Status in registry == TRUE, SoR #17 reject action will be performed
Line 5722: Toggle RetryOnSamePlmn F -> T
Line 5727: Toggle RetryOnSamePlmn T -> F
Line 5752: Reset  mm_RetryPlmn
Line 5787: Request 2G to stop IRAT reselection if it is on going
Line 5792: Set MM state to limted service to block triggering LAU before CELL_IND/PLMN selection
Line 5802: SoR Feature Status in registry == TRUE, SoR #17 reject action will be performed
Line 5807: Toggle RetryOnSamePlmn F -> T
Line 5812: Toggle RetryOnSamePlmn T -> F
Line 5832: Reset  mm_RetryPlmn
Line 5846: Blocking PLMN selection for ATT requirement
Line 5853: Requesting URRC to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
Line 5888: Optional plmn selection for verizon PS only devices after max attempts
Line 5919: Optional plmn selection for verizon PS only devices after max attempts
Line 5954: EMERGENCY CALL, Making DSNC State to CS CALL Direcltly before sending PerformPlmnActions
Line 5961: Incorrect PLMN action %d
Line 5970: Resetting HOLD PLMN RSP for MM_NOT_AUTHORISED_FOR_CSG REJECT Cause 
Line 6000: NeighborBandNumber = %d
Line 6005: In Perform Cell indication actions for PLMN_REQUESTED_SEARCH, Resetting mm_PlmnSearchCellIndFlag to PLMN_AUTONOMOUS_SEARCH
Line 6010: In Perform Cell Indication actions for PLMN_AUTONOMOUS_SEARCH %d
Line 6016: FTaiLaiListFlag %d (0:FALSE, 1:TRUE)
Line 6039: NeighborBandNumber = %d
Line 6045: PlmnSelNeeded is %d 
Line 6064: CS call is not released yet. Ask PLMN to search current RAT
Line 6086: PLMN perform actions: PLMN list size  -> %d, PLMN list pointer -> %d 
Line 6091: 
Line 6097: 
Line 6130: ReleaseWithRedirection : %d
Line 6154: 
Line 6232: Entered to mm_DecodePlmnActionsRsp %d ,%d	
Line 6272: mm_CheckAndPerformPsRegActionsOnRelease: Attach not done now!! 
Line 6310: mm_PerformPlmnActionsRsp::Cause = %d
Line 6379: mm_PerformPlmnActionsRsp:: PLMN module tried search on both RATs Release the Emergency call if Pending 
Line 6383: mm_PerformPlmnActionsRsp:: Tried on both Rats no Suitable PLMN found and Release the call 
Line 6392: PerformPlmnActions for EMERGENCY CALL has failed (or) emergency call attempt already cleared. Release CSCALL grant..
Line 6423: mm_PerformPlmnActionsRsp:: Case %d , No Actions to be performed 
Line 6466: PLMN mismatch occured, Requesting URRC to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
Line 6471: PLMN mismatch occured, Requesting GRR to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
Line 6485: Entered to mm_DecodePlmnSelectRsp %d ,%d	
Line 6506: [23.122]-4.4.3.1 says that << At switch on, or following recovery from lack of coverage,
Line 6507: the MS selects the registered PLMN or equivalent PLMN...>> 
Line 6508: We are NOT in the Registered Plmn Area -> Must go back to Reg. Plmn.... Please Wait
Line 6522: No Action Taken in Recovery From Loss of Coverage
Line 6534: mm_ProcessPlmnSelectRsp :: UNKNOWN CASE %d ,%d	
Line 6547: Plmn State = %s in mm_PerformCellIndGenPlmnActions
Line 6565: Checking The selected PLMN/EqPLmn and CELL DATA LAI Are Not Matched
Line 6581: If UE is redirected under UTRAN control any limitation shall be removed...
Line 6589: In manual PLMN selection redirection failure will be informed...
Line 6603: Set PLMN State Recover Is Needed from PLMN Task
Line 6680: Checking to See if MM / GMM PRocedures are in Progress - MM_CheckMmGmmProcsInPlmnSelModeChange
Line 6695: Breaking GMM Connections in order to do Manual Plmn Selection...
Line 6727: Initiating RR Connection Release Due to Manual Plmn Selection By User. Selected Plmn Will be Sent to (U)RRC when MM is back in IDLE !!....
Line 6742: RR REL REQ already sent so wait till we get confirm
Line 6816: [GSM REDIRECTION INFO] ====> ARFCN(%d) BandInd(%d) NumOfArfcn(%d)
Line 6829: Foll Arfcn Info also Set
Line 6840: L2G CellInfoList Copied..
Line 6841:  CellInfoList : NumCellInfoList=%d 
Line 6910: ReSet MMC Redirect to 2G3G Info
Line 6966: mm_SendRrRedirectReqMsg  Redirect To -> %s
Line 6969: Auto Selection-> %s
Line 6975: Plmn = 0x%02X 0x%02X 0x%02X  in mm_SendRrRedirectReqMsg.
Line 6990: [3G Redirection]Requesting UArfcn -> %d
Line 7031: [DT Requirement for FastSearch For L2U CSFB is applied.
Line 7038: 2G neighbor cell exist in redirection info so 3G cell search time is within 5 seconds.
Line 7042: IsFastSearchForCSFB = %d 
Line 7094: L2G CellInfoList Sending to RR..
Line 7095:  CellInfoList : NumCellInfoList=%d 
Line 7102: [2G Redirection]Requesting Arfcn -> %d , Band Ind - %d
Line 7115: 
Line 7117: Requesting RR(C) to Rediret to this PLMN -> 0x%02X 0x%02X 0x%02X
Line 7150: Rat Mode Change state %s, MM Rat : %s, GMC Rat : %s, Rat Mismatch Count : %d
Line 7162: RAT Mismatch Identified for Maximum times MM Rat : %s, GMC Rat : %s
Line 7215: mm_UmtsMode: %d and mm_UmtsMode received from GMC: %d 
Line 7262: isCommercialPlmnId? (%d), mm_SimProvider? (%d), Iot? (%d)
Line 7280: While manual plmn selection is in progress, skip to sync up Plmn Attribute
Line 7284: After combined Attach reject for PS disable LAU is pended..
Line 7319: PLMN_RECOVERY_TIMER Started So send Indication to CM
Line 7324:  UpdateInfo.EutraCapbDisableState %d, UpdateInfo.EutraUpdatedCause: %d
Line 7331: Eutra enabling actions are pending, discard Eutra disable actions as enable is not done
Line 7349: QRB is triggered due to PS enabled in Global mode.
Line 7358: After Rel Cnf QRB will be triggered due to PS enabled in Global mode.
Line 7371: QRB is triggered due to PS enabled in Global mode and 2G RAT.
Line 7375:  GSM RatMode, MM not in Idle, QRB will be initiated after moving to Idle
Line 7444: Added New Received EF_ActHPLMN to HPLMN List
Line 7447: Displaying the New Act HPLMN
Line 7487: ENS Acting Plmn = 0x%02X 0x%02X 0x%02X
Line 7528: 
Line 7691: IsThisAutoToAutoResel = %d, BplmnSearchRat: %d, BPlmnListCause: %d
Line 7695: 
Line 7710: 
Line 7718: 
Line 7730: 
Line 7738: 
Line 7873: 
Line 7905: set mm_BplmnSearchRatMode: %d (0-NO_RAT; 1-2G; 2-3G)
Line 7925: Processing pending suspension which was received from GMC, as BPLMN is completed 
Line 7976: BPLMN_STOP_CNF: Process the saved PLMN_MM_RAT_CHANGE_REQ 
Line 7988: Current mm_BackGrndSearchFlag value: %d 
Line 8003: Updated mm_BackGrndSearchFlag value: %d (0:NO_BPLMN, 1: DRX_ONGOING, 2: LIST_ONGOING, 3: DRX+LIST_ONGOING)
Line 8054: set mm_PendingRatResumeAfterBplmn %d....
Line 8067: mm_PendingRatResumeAfterBplmn %d....
Line 8105: This is Re-try cause until 4 times
Line 8207: Reg status is saved.
Line 8223: Saved state : %d, %d, PLMN matching : %d
Line 8238: On the previous registering PLMN again, GMM reg status is retrieved now!!!
Line 8303: mm_CheckIfSkipGSM => Result =%d
Line 8340: 
Line 8345: 
Line 8355: 
Line 8362: 
Line 8386: CSG List Update Request sent ...
Line 8404: CSG Select Request mm_GsmCapDisableFlag = %d, IsThisUserSelected = %d
Line 8410: User Selected PLMN SoDelete and Update FLAI List  to RRC to find the cell 
Line 8429: 
Line 8459: 
Line 8516: 
Line 8566: GSM current RAT... CSG List Req not able send ...
Line 8586: GSM current RAT... CSG List Req not able send ...
Line 8626: mm_BplmnSearchRatMode -> %s
Line 8627: mm_GetBPLMNEnabled -> %d
Line 8675: Back Gnd SearchType -> %s
Line 8710: Back Gnd SearchType -> %s
Line 8735: MULTI_ BPLMN_SUPPORT CSG ListReq in MM_GSM_RAT_MODE
Line 8757: ListReq for RAT Mode MM_UMTS_RAT_MODE
Line 8788: No Multimode background CSG ListReq in MM_GSM_RAT_MODE
Line 8803: 
Line 8805: Requesting (U)RRC to Send Available Plmn List ...
Line 8828: CsgListCount -> %d, UiccCsgAwareness -> %d
Line 8872: 
Line 8954: 
Line 9051: 
Line 9101: mm_CsgRegistrationNeeded is %d
Line 9131: 
Line 9147: 
Line 9149: Requesting RR(C) to Try This PLMN -> 0x%02X 0x%02X 0x%02X
Line 9151: Setting mm_PlmnSearchCellIndFlag to PLMN_REQUESTED_SEARCH
Line 9162: GSM current RAT... CSG Search Req not able send ...
Line 9236: Memory Allocation failed
Line 9243: Visited CSG List byte size 0...
Line 9284: Wrong MSG type in mm_SendMmPlmnAbortCsgListCnf...
Line 9333: Memory Allocation failed
Line 9394: 
Line 9446: GSM current RAT... CSG List Req not able send ...
Line 9510: GSM current RAT... CSG Visisted List Ind not able send ...
Line 9567: MmSignalPendingInd.Cause: %d
Line 9582: unexpected received during != PMM CONNECTED state
Line 9614: Prev Rrc State: %d, Rrc_State: %d, in mm_UpdateGmmRrcState() 
Line 9618: RRC State was not changed.
Line 9627: State was changed to PCH
Line 9635: State was changed from PCH
Line 9707: 
Line 9716: 
Line 9749: Triggering saved PLMN list request after GRR_MM_RESEL_HOLD_CNF
Line 10013: EncodedSizeinBits -> %d 
Line 10113: MCC- - 0x%x 
Line 10138: mm_SendPlmnLteRplmnEarfcnScanReq -> %d s
Line 10175: DetectFreqNum - %d 
Line 10176: Result - %d 
Line 10185: arfcn - %d,rxlev - %d 
Line 10239: mm_CheckSilentResetCondition ConditionDomain - %d, Cause - %d, Operator - %d 
Line 10286: mm_CheckSilentResetCondition Unwanted REJ cause
Line 10412: mm_GprsNotAllowedInHPlmn = %d
Line 10445: Attempting to Add More than Allowed to mm_EHPLMNList (%d) in mm_AddToEHPLMNList 
Line 10494: GPRS NOT ALLOWED IN HPLMN restriction to the PLMN: 0x%02X 0x%02X 0x%02X , New Status: %d
Line 10519: EHPLMN Plmn List (%d)
Line 10523: %d -> 0x%02x 0x%02x 0x%02x, GPRS restriction: %d
Line 10535: EHPLMN is Empty !
Line 10574: EHPLMN is Empty !
Line 10816: Wrong Action =%d 
Line 10870: RPLMN_QRB_CONTROL feature is enabled
Line 10877: G2L QRB enabled in this RPLMN
Line 10888: U2L QRB enabled in this RPLMN
Line 10899: After RAU accpet during CSFB, Registered PLMN was changed Need to clear QRB flag.
Line 10909: RPLMN_QRB_CONTROL feature is disabled
