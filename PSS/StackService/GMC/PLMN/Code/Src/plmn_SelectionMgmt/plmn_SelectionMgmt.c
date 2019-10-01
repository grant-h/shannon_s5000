Line 666:    pPlmnSelectionDB->PlmnSavedFlag : %d -> %d 
Line 976:    pPlmnSelectionDB->Data.FirstPlmnInitFlag : %d -> %d 
Line 992:    pPlmnSelectionDB->PlmnState.PrevPlmnState : %d -> %d 
Line 1021:    pPlmnSelectionDB->Data.PlmnState : %s -> %s (%d)
Line 1050:    pPlmnSelectionDB->Data.PlmnSelectionState : %s -> %s (%d)
Line 1077:    pPlmnSelectionDB->PlmnState.PlmnSelStartedFlag : %d -> %d 
Line 1097:    pPlmnSelectionDB->PlmnState.FirstPlmnSelFlag : %d -> %d 
Line 1117:    pPlmnSelectionDB->PlmnState.PowerUpPlmnSelFlag : %d -> %d 
Line 1139:    pPlmnSelectionDB->Data.UserReqType : %d -> %d 
Line 1163:    pPlmnSelectionDB->Data.UserSelectedPlmnFlag : %d -> %d 
Line 1184:    pPlmnSelectionDB->Data.ManualPlmnSelRspNeededFlag : %d -> %d 
Line 1207:    pPlmnSelectionDB->Data.LOCFlag : %d -> %d 
Line 1228:    pPlmnSelectionDB->Data.TotalLOCFlag : %d -> %d 
Line 1250:    pPlmnSelectionDB->Data.RecoveryAbandonedFlag : %d -> %d 
Line 1273:    pPlmnSelectionDB->Data.RecoveryTimerNeededFlag : %d -> %d 
Line 1293:    pPlmnSelectionDB->Data.SkipOOSOptimization : %d -> %d 
Line 1315:    pPlmnSelectionDB->Data.AvailablePlmnListUpdateMethod : %d -> %d 
Line 1338:    pPlmnSelectionDB->Data.ListReqCause : %d -> %d 
Line 1363:    pPlmnSelectionDB->Data.ListReqFromNsFlag : %d -> %d 
Line 1385:    pPlmnSelectionDB->Data.ForcedListReqFromNsFlag : %d -> %d 
Line 1406:    pPlmnSelectionDB->Data.ListReqAllowedFlag : %d -> %d 
Line 1426:    pPlmnSelectionDB->Data.KeepAllListsFlag : %d -> %d 
Line 1444:    pPlmnSelectionDB->Data.ListUpdatedToUsatFlag : %d -> %d 
Line 1470:    pPlmnSelectionDB->Data.RatModeDefinedFlag : %d -> %d 
Line 1490:    pPlmnSelectionDB->Data.RatChangeNeededForRPlmnFlag : %d -> %d 
Line 1510:    pPlmnSelectionDB->Data.RatResumedFlag : %d -> %d 
Line 1522:    pPlmnSelectionDB->Data.SelectAnyPlmnEnabledFlag : %d -> %d 
Line 1529:    pPlmnSelectionDB->Data.TryAnyPlmnCount : %d -> %d 
Line 1539:    pPlmnSelectionDB->Data.TryAnyPlmnCause : %d -> %d 
Line 1551:    pPlmnSelectionDB->Data.SkipAnyPlmnSearchFlag : %d -> %d 
Line 1560:    pPlmnSelectionDB->Data.ForceAnyPlmnSearchFlag : %d -> %d 
Line 1571:    pPlmnSelectionDB->Data.PreventSendingLastPlmnFlag : %d -> %d 
Line 1580:    pPlmnSelectionDB->Data.PreventSendingLastPlmnEitherRatFlag : %d -> %d 
Line 1589:    pPlmnSelectionDB->Data.CheckHPlmnInAvailablePlmnListFlag : %d -> %d 
Line 1598:    pPlmnSelectionDB->Data.RPlmnInForbiddenListOrDeletedFlag : %d -> %d 
Line 1607:    pPlmnSelectionDB->Data.EmergencyPlmnAvailableFlag : %d -> %d 
Line 1646:    %s HedgePlmnSearch : = (%d)
Line 1683:    %s HedgeListSearch : = (%d)
Line 1694:    Set SkipSearchRatMode : %s -> %s
Line 1702:    Reset SkipSearchRatMode : %s 
Line 1705: [W]Invalid value for ctrl : %d 
Line 1717:    pPlmnSelectionDB->Data.MmeEmcSupported : %d -> %d 
Line 1726:    pPlmnSelectionDB->Data.LteVoPSSupportedFlag : %d -> %d 
Line 1735:    pPlmnSelectionDB->Data.ImsRegStatus : %d -> %d 
Line 1744:    pPlmnSelectionDB->Data.checkHplmnSearchFlag : %d -> %d 
Line 1752:    pPlmnSelectionDB->Data.AwaitingCellIndAfterPlmnSearchReqFlag : %d -> %d 
Line 1776:    pPlmnSelectionDB->TryHPlmnAfterRPlmnSearchFailFlag : %d -> %d 
Line 1798:    pPlmnSelectionDB->InternalModeChangeFlag : %d -> %d 
Line 1818:    pPlmnSelectionDB->TryRatModeUseFlag : %d -> %d 
Line 1835:    pPlmnSelectionDB->TryRatMode : %d -> %d 
Line 1859: [I]Already PLMN action is in progress No need to trigger again
Line 2060:    Sending forced manual PLMN selection response
Line 2092:    HPlmn Exists in List Given By RR
Line 2166:    %s : %s, %s
Line 2172:    Wait for RR Release Before Sending Requested Plmn
Line 2218:    %s : 
Line 2231:    PlmnSearch Deferred - MM state is not OK for PLMN(%06x) search 
Line 2244:    PlmnSearch Started - PLMN(%06x) search to %s 
Line 2278:    %s : %06x, %s
Line 2282: [I]Selected Plmn  : %06x (%s)
Line 2283: [I]Plmn State : %s (%s)
Line 2355:    %s :
Line 2356:    Special Check for H3G Fast Camping/Recovery
Line 2439:    H3G and 2G NRP Condition satisfied. Changing from 2G NRP (%06x) --> H3G PLMN (%06x) 
Line 2462:    H3G Condition satisfied. Changing from H3G PLMN (%06x) --> 2G NRP (%06x)
Line 2515:    %s : EutraDisableCause = %d 
Line 2554:    Received PlmnCountryCode = (%x), CurrentCountryCode = (%x)
Line 2652:    %s : Mode(%d) RatChangeNeeded(%d), TryAnyPlmnCount (%d)
Line 2718:    EmergencyCallPending , Do not continue further LIST_REQ. Initiating Emergency scan immediately
Line 2846: [I]Selected Plmn  : %06x (%s)
Line 2847:    RR(C) Plmn(%06x) vs Selected Plmn(%06x) same? %s
Line 2879:    Selected Plmn received in Search Fail Ind.Remove selected Plmn from the list
Line 2904:    %s : %s
Line 2937: [W]%s : In DUAL Mode And LteAvailablePlmnListRsp is FALSE
Line 2948: [!]It Should Not come here, some mismatch might happened
Line 2952:    Next RAT mode : %s
Line 3068:    %s : newPlmnSelectionState - %s -> %s (%d)
Line 3163:    %s : newPlmnSelectionState - %s (%d)
Line 3177:    In DUAL/TRI Mode so Check Same PLMN in Other Rat also  -- Manual Mode 
Line 3186:    In TRI Mode so Check Same PLMN in Other Rat also  -- Manual Mode 
Line 3194:    HPLMN present in list but not found at lower layers, try next  -- Manual Mode 
Line 3195:    Check for HPLMN in 2nd Rat -- Manual Mode 
Line 3203:    HPLMN not found, try next RAT  -- Manual Mode 
Line 3204:    Check for HPLMN in 3rd Rat -- Manual Mode 
Line 3212:    In TRI Mode User Selected PLMN 2nd RAT so Check User PLMN in Other Rat also  -- Manual Mode 
Line 3220:    In TRI Mode User Selected PLMN 3rd RAT so Check User Selected PLMN in Other Rat also  -- Manual Mode 
Line 3230:    Stored Freq Scan. Check Same PLMN in Other Rat also  -- Manual Mode 
Line 3239:    Stored Freq HPLMN Scan. Check Same PLMN in Other Rat also  -- Manual Mode 
Line 3252:    %s : newPlmnSelectionState - %s (%d)
Line 3278:    %s : %s -> %s (%d)
Line 3310:    %s : %s, RatChangeNeed=%d, %s 
Line 3317:    Scanning for PLMN List Requires a RAT Change
Line 3361: [I]Plmn State : %s (%s)
Line 3418:    %s : Result = %s
Line 3436:    Saved Plmn Empty or Not Suitable, Try Any PLMN
Line 3469:    %s
Line 3470: [I]Saved Plmn : %06x (%s)
Line 3476: [W]savedPlmnRat (%s) not supported !
Line 3478: [I]Saved Plmn : %06x (%s)
Line 3508: [I]Plmn State : %s (%s)
Line 3542:    %s
Line 3543: [I]Saved Plmn : %06x (%s)
Line 3566: [W]Saved Plmn(%06x) in ForbiddenPlmnList 
Line 3622:    %s : %06x, %s
Line 3660:    %s : Deferred - RAT Change in progress or Target RAT is not resumed
Line 3670:    %s : Deferred - MM state is not OK for HPLMN search 
Line 3675:    %s : Started - HPLMN(%06x) search to %s 
Line 3707:    %s : 
Line 3711: Plmn Selection is in Progress in LTE So Wait for Search to Complete
Line 3719: Plmn Selection for LTE is Started to come to LTE Immediately.
Line 3739: [W]Mode changed or CSFB Call End in Manual Mode, No RPLMN available
Line 3763:    %s
Line 3770:    a. Invalid SIM. Trying for any PLMN 
Line 3778:    b. Automatic mode
Line 3783:    Trying to Go back to Previous PLMN in Automatic Mode
Line 3790:    Trying to Go back to Previous PLMN in Automatic Mode
Line 3802:    Initiate HPLMN Search
Line 3811:    Lists Already Exists. Start selection using List
Line 3821:    c. Manual Mode
Line 3826:    Trying to Go back to RPLMN in Manual Mode
Line 3834:    Dont Have Any registered PLMN So Camp on to Limited Service
Line 3844:    RecoveryAbandoned: TRUE
Line 3872:    %s : Do power on optimization by releasing grant 
Line 3978:    It Should Not come here
Line 3999:    Starting Full scan search
Line 4011:    %s : next RAT = %s (RrPlmnListRsp = %x)
Line 4045: [W]It Should Not come here
Line 4049:    %s : %06x 
Line 4083: [W]It Should Not come here
Line 4087:    %s : %s 
Line 4123:    %s : 
Line 4126:    %s, RPlmnInForbiddenListOrDeletedFlag = %d
Line 4161:    EHPLMNId : NULL -> %06x
Line 4165:    EHPLMNId : NULL
Line 4179: [MZ] Stored RPLMN scan failed after Max Failure, trigger PLMN List request on all RATs
Line 4228:    %s : PlmnSearch Started on %06x, %s
Line 4266: [W]SIM READ RSP not received.
Line 4272: SIM INVALID. Try emergency
Line 4323:    %s : plmnSelectionCause %d,(MccProcedureNeeded: %d)
Line 4345: %s:: Entry 
Line 4358: [W]Plmn Selection is not triggered, Wrong plmnSelectionCause (%d) or Stack is not Initialized yet 
Line 4377:    [DSDS]: EUTRA Status: %d 
Line 4378:    [DSDS]: ServiceDomain: %d 
Line 4413: %s:: Exit 
Line 4642:    NORMAL Initialisation of <PlmnManagement>
Line 4726:    plmn_SingleDualModeOperation=%d, RatName=%s Selected
Line 4765:    Making PLMN Selection for Only  DUAL_MODE_OPERATION (GSM/UMTS)
Line 4771: [W]TELSTRA: Updating to LTE_HEDGE mode for limited camping
Line 4787:    Tech Menu Ordered PLMNs is LTE. In Hedge Mode, Set to UMTS for CMCC
Line 4806:    Initialising PLMN Module For LTE_UMTS Mode. EUTRA ENABLED
Line 4821:    Initialising PLMN Module For LTE_GSM Mode. EUTRA ENABLED
Line 4836:    Initialising PLMN Module For GSM Mode
Line 4842: [W]TELSTRA: Updating to LTE_GSM mode for limited camping
Line 4869:    Initialising PLMN Module For UMTS Mode
Line 4875: [W]TELSTRA: Updating to LTE_UMTS mode for limited camping
Line 4903:    Initialising PLMN Module For MultiMode. EUTRA ENABLED
Line 4913:    MMC_GLOBAL_MODE of <PlmnManagement>
Line 4981:    Invalid Mode received in GLOBAL MODE INITIALISATION
Line 5012: [W]Unknown Initialisation Type (0x%02X) in %s
