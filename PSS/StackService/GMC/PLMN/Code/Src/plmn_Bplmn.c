Line 162: [I]ResumeBplmnList (L-U-G): %d - %d - %d
Line 202: [I]Bplmn State: %s, Procedure: %s 
Line 224:    pPlmn_BplmnDb->IsEnabled : %d -> %d 
Line 313:    pPlmn_BplmnDb->BplmnState : %d -> %d 
Line 336:    pPlmn_BplmnDb->BplmnProc : %d -> %d 
Line 388:    BCKGND List Abort Cause : 0x%x, 0x%x -> 0x%x 
Line 449:    BCKGND Resume Rat Info : Flag, 0x%x -> 0x%x 
Line 490:    %s : unexpected req value : %d
Line 499:    pPlmn_BplmnDb->CandidatePlmn : %06x -> %06x 
Line 524:    pPlmn_BplmnDb->SearchingRat : %d -> %d 
Line 550:    plmn_PlmnRecovTimExpActionFlag[gStackId] : %d -> %d 
Line 576:    Bplmn procedure is going on !
Line 600:    %s : EMM State: %d , SRTimerType:%d
Line 626:    MO/MT call/Service Request/Detach triggered; abort BPLMN if running on other RATs
Line 655:    No BPLMN Action Taken. Wait for BPLMN_FAIL_IND from L-RRC
Line 661:    TAU or RA proc in progress; Start Recovery timer
Line 669:    Already BPLMN recovery timer running or abort initiated
Line 677:    No Action taken in EMM/MM State: %s
Line 682:    %s : BPlmnState = 0x%x 
Line 713:    LIST REQ aborted/to be aborted if collision case.
Line 743:    ABORT_REQ sent, Wait for ABORT_CNF to perform Recovery Actions
Line 763:    BPLMN already aborted. BPLMN Timer running /BPLMN operations set for actions after release
Line 773:    CELL LOST & BPLMN_RECOVERY_TMR not running, Send Abort
Line 783:    BPLMN scan was running on Active RAT, AS will perform internal Abort. Do PLMN abort confirm actions
Line 792:    ABORT_REQ sent, Wait for ABORT_CNF to perform Recovery Actions
Line 801:    ABORT not sent, perform Recovery Actions immediately
Line 809:    %s : %s (%d)
Line 843:    BPLMN state(%d) is NOT Active or candidate PLMN for BPLMN is Empty (%06x) 
Line 862:    Found candidate PLMN (%06x) in RR List -> Stop BPLMN AvailStatus : %d
Line 904:    Found equivalent PLMN in RR List, -> Stop BPLMN
Line 916:    %s : %s (%d)
Line 990:    BPLMN RAT for norrmal service : %s 
Line 1007:    %s: 
Line 1078:    %s :
Line 1153:    Select BPLMN List Search RAT : %s
Line 1172:    Select BPLMN List Search RAT for 2G/3G : current RAT - %s 
Line 1206:    BPLMN Not enabled or No Background search in progress
Line 1256: [!]BPLMN scan triggered for recovery in Manual / Manual Background when RPLMN is Empty. Setting candidate PLMN to HPLMN to Avoid Stuck
Line 1263: [I]Registered Plmn  : %06x (%s)
Line 1268: [!]Invalid Selection mode
Line 1279: [!]GMSS_HPPLMN_SCAN : Set Candidate PLMN to HPLMN
Line 1287:    %s - Candidate Plmn %06x, Rat %s
Line 1416:    %s, %s, %s
Line 1423:    Found Complete List for %s
Line 1463:    Search must be in foreground ( BPLMN Enabled : %s, Bplmn Searching: %s ) 
Line 1474:    Complete List not Found so Send List Req for Next Rat 
Line 1487:    Do not send DrxInfo IND to RRC since this is Internal Loopback optimization, so dummy list_ind will be sent to GMC internally 
Line 1491:    Sending IND to RRC:Start DrxInfo Ind
Line 1499:    Do not send BplmnSrchStopInd to GRR since this is Internal Loopback optimization
Line 1510:    List Req is sent on Act Rat; Send Stop if already sent StartDrxInd 
Line 1529:    HPlmn Exists in List Given By RR
Line 1557:    %s
Line 1635:    %s : AbortCause - 0x%x, RatChangeListReqBlock - %d
Line 1642: [W]Should not come here BPLMN search is %s
Line 1685:    Invalid RAT mode: %s, Should not come here!!!!
Line 1698:    Active RAT is %s and BPLMN search ongoing on other RAT (%s);
Line 1705:    BPLMN scan was running on Active RAT, AS will perform internal Abort. Do PLMN abort confirm actions
Line 1751:    Manual List Req pending, giving more priority to Manual PLMN list request
Line 1757:    Eutra Disabled. Perform EUTRA Disable actions
Line 1781:    Abort Cause: %d not handled; Not taking any actions
Line 1823:    BPLMN Flag on registry not set, so not setting Abort flags
Line 1837:    %s : CurrentRat : %s , AbortCause - 0x%x
Line 1938:    PLMN_BACKGND_ABORT_PAGE_IND and SavedOperatingMode != NONE 
Line 1947:    Performing Pending mode change
Line 1964:    Same Mode, Ignore Mode change request
Line 1971:    Stand by indication actions pending. Performing actions
Line 1985:    EMC call pending !
Line 2028:    Periodic HPLMN actions pending !
Line 2133:    After No Cell Ind & abort procedure without FAIL_IND Start PLMN Search
Line 2142:    Save available List Locally 
Line 2161:    Retreive the locally saved available List and update list 
Line 2201:    %s : AbortCause[0x%x], ListReqCause[0x%x], CsgListProg[%d]
Line 2206:    Invalid state to handle BplmnAbortCnf ! SEARCH_FLAG(%d) BACKGND_PLMN_LIST_REQ_CAUSE(%d)
Line 2252:    3GPP2 Mode -Abort BPLMN completely
Line 2280:    Invalid cause
Line 2315:    ABORT_DUE_TO_RESEL Pending Actions : %d
Line 2355:    Manual List Req pending, giving more priority to Manual PLMN list request
Line 2401:    BPLMN recovery failed in BPLMN, Ignore Foreground recovery actions.
Line 2449:    PS disabled during BPLMN procedures
Line 2522:    Wait for PLMN_LIST_REQ from GAPI.
Line 2645:    PLMN has all the available PLMN info, Reuse the List
Line 2651:    PLMN doesn't have all the available PLMN info, Continue BPLMN LIST !
Line 2686: [I]PlmnListReqCause : %s, CSGListReqCause : %d
Line 2687: [!]!!Invalid ListReqCause. For Recovery send List to user in manual mode
Line 2721:    %s
Line 2736:    ActiveRat -> %s, BplmnListRatMode -> %s
Line 2804:    %s
Line 2957:    LIST REQ in Progress on Other RAT :%s; Send Start to Active RAT:
Line 2963: [W]LIST REQ in Progress on Act RAT %s ; Dont send Start Ind
Line 2989: %s:: Entry 
Line 3064: [W]Reset BPLMN context as we are not registered
Line 3073: [W]Restarting PLMN_BPLMN_RECOVERY_TIMER since MM / PLMN states are not yet suitable
Line 3088:    BPLMN Scan for assisting Resel to LTE; Send StartDrxInfoShareInd
Line 3107: [W]Restarting PLMN_BPLMN_RECOVERY_TIMER since MM / PLMN states are not yet suitable
Line 3118:    ON_ANY_PLMN, CoverageLost = TRUE Need to Perform BPLMN Rec actions
Line 3129: [W]plmn state / BackGndPlmnListReqCause mismatch Reset BPLMN variables
Line 3139: [W]CsgListInProg == TRUE
Line 3167:    BPLMN Scan for assisting Resel to LTE; Send StartDrxInfoShareInd
Line 3211:    %s : Result=%d, uCase=%d 
Line 3212: %s:: Exit 
Line 3259: [W]Warning !! CSG BplmnSearchRat : %s
Line 3296:    %s 
Line 3319:    Special BPLMN Scan for assisting Resel to LTE; Send StartDrxInfoShareInd
Line 3326:    %s Failure ! Result = %d
Line 3349:    %s : Cause[0x%x] 
Line 3371:    PLMN_BCK_GND_LIST_FAIL_SIG_PROC_IN_PROGRESS
Line 3395:    PLMN_BCK_GND_LIST_FAIL_USER_DATA_IN_PROGRESS
Line 3428:    PLMN_BACKGND_ABORT_PAGE_IND
Line 3448:    PLMN_BACKGND_ABORT_DUE_TO_RESEL. RatChangeListReqBlock: %d 
Line 3454:    PLMN_BACKGND_ABORT_CELL_CHANGE
Line 3465:    PLMN_BACKGND_ABORT_LIST_NOCELL_IND
Line 3491:    PLMN_BACKGND_ABORT_RRC_GUARD_TIMER_EXP
Line 3499:    PLMN_BACKGND_ABORT_DSDS_FRESH_SCAN
Line 3506:    PLMN_BACKGND_ABORT_LIST_FAIL_EUTRA_DISABLED_TEMP
Line 3513:    PLMN_BACKGND_ABORT_LIST_FAIL_EUTRA_DISABLED_PERM
Line 3520: [W]Invalid cause
Line 3563:    BPLMN not enabled (or) Srch is in Fore-Ground
Line 3596:    Candidate PLMN not found in any of the RATs
Line 3627:    Backgnd Abort flag value = 0x%X
Line 3665: [W]Not handled Request Type(%d)
Line 3740: [W]Invalid RAT in plmn_RatSearched: %s
Line 3753:    Reading Plmn List Sent from %s 
Line 3834:    Abort Cnf from RR/RRC:Rat Searched - %d, 3G List Size - %d, 2G List size - %d
Line 3876: [W]Ignore Abort Cnf, Wrong plmn_PlmnState !
Line 3891:    Fail Ind from RR : Rat Searched - %d, 3G List size- %d, 2G List size - %d
Line 3929:    %s :
Line 3948:    Ignore PLMN_LIST_IND !! LTE PLMN List Rsp present!
Line 3994: %s:: Entry 
Line 3995: %s : %d, (%s , %s) 
Line 4029: [W]Ignore Plmn List Ind, Wrong plmn_PlmnState !
Line 4126:    %s : Result = 0x%x 
Line 4127: %s:: Exit 
Line 4189: [W]Unknown Bplmn Init Type (0x%02X)
