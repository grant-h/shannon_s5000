Line 131:    Plmn Given By RR Exists -> Copy to Selected Plmn Id
Line 137: [I]Selected Plmn  : %06x (%s)
Line 169:    %s : 
Line 176: [W]PlmnId = NULL, return False
Line 187: [W]Ignore Autonomous CELL_IND during SEARCH_REQ.
Line 198:    AwaitingCellIndAfterPlmnSearchReqFlag == TRUE
Line 205:    LRPLMSI is TRUE; Accept Cell_Ind
Line 211: [I]Selected Plmn  : %06x (%s)
Line 213:    Received PLMN ID is not in Eq PLMN list / USA SPEC Eq PLMN List / not equal to the Selected PLMN. Ignoring CELL_IND
Line 280:    RAT Change Cause Not 0 -> Save Plmn Given By RR(C) = %06x
Line 302:    User Plmn Selection Mode Change Requested
Line 363:    SIM INVALID ,Dont Start OOS Timer Camp on Limited Service 
Line 368: [!]RecoveryTimerNeeded = %s, So OOS Timer not started
Line 396:    UE registered on VPLMN, Restart HPPLMN Search timer with 2 mins
Line 404:    No need to start HPLMN Scan Timer; HPLMN Srch Prd is %d
Line 541:    %s : %d
Line 569:    CELL IND received in MMC REGISTERED state
Line 573:    CELL IND received -> Change to Registering
Line 598:    PLMN received in Cell Ind : %06x 
Line 599:    LastCampCountryCode (%x) , CurrPlmnCountryCode (%x)
Line 768:    Internal Mode Change Triggered or IMSI mode change is sent to AP
Line 818:    %s : CSG id = 0x%08X
Line 855:    PerfomActions->CsgSelStatus = FALSE in CSG_MANUAL_MODE, Roll back to saved PLMN
Line 898:    %s : EmergencyCallSupport = %d, ActiveRat = %s 
Line 899:    EmerCallPending = %d, RatModeChangeState = %d 
Line 916:    EMC Call being handled through CSFB.
Line 923:    Rat notified as 2G/3G, wait for CSFB request
Line 930:    for 3GPP2 mode, actions will be taken in GMSS
Line 938: [W]Emergency Call is Pending, but the current Cell does not support Emergency
Line 947:    Continue search on remaining RATs or Send notification to AP
Line 951:    Trigger any PLMN Selection 
Line 963: [W]AP is already notified with EMC_RAT_INFO with Rat (%d)
Line 985: [W]Invalid PlmnRat Mode (%d) for EmergencySupport Actions
Line 1118:    LTE and HEDGE suspended, Ignore Cell Ind
Line 1125:    Ignoring cell ind as it is not received from current RAT(%s)
Line 1159:    %s : %s(%d)
Line 1176:    %s : PLMN State Invalid (%s)
Line 1220: Special Case for TC 26.7.4.5.5.1 -- GRR doesn't detected PLMN on different bands with BPLMN
Line 1278:    Internal Mode Change is triggered
Line 1287:    Internal Mode Change is triggered
Line 1409:    Neighboring Cell Rat Info : %s , SkipRatMode : %s
Line 1517:    %s : Reject Cause[%d]
Line 1535: [I]Plmn State : %s (%s)
