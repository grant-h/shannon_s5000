Line 162:    plmn_EmcCallStatusData[gStackId].EmcCallInNoSimFlag : %d -> %d 
Line 180:    plmn_EmcCallStatusData[gStackId].EmcCallRcvdBeforeMmInitCnfFlag : %d -> %d 
Line 202:    %s : 
Line 212: [W]Cant accept CM Request During a RAT CHANGE
Line 239: [W]RR init Req has been sent, NOT received Confirmation yet
Line 247:    RR init Req has been sent. 
Line 248:    Selecting Any Plmn For Emergency Use Only : EmcCallNoSimPlmnAction flag = %d 
Line 292:    HPPLMN search in progress -> return to saved PLMN or Try Any PLMN 
Line 341:    No HPPLMN search in progress -> normal PLMN selection 
Line 348:    Aborting PLMN_LIST_REQ (or Abandoning Waiting for User), and selecting any Plmn 
Line 365: Emergency Plmn Available -> %s
Line 386:    Any PLMN search is already in progress !
Line 389:    PLMN_GET_PLMN_TRY_ANYPLMN_CAUSE = %d
Line 395:    Cell Does Not Support CS calls or Emergency Calls, Trying ANY PLMN
Line 399:    Plmn Search Req Already In Progress, Send Another Plmn Search Req to override last one, Trying ANY PLMN
Line 410:    tryAnyPlmnCause = %d, Result = %d 
Line 542:    Start AnyPlmn Selection for Emergency Call 
Line 547:    Saved RPLMN before triggering AnyPlmn Selection
Line 610:    Sending dummy EMC RAT Info (%s) and waiting for CSFB call Request
Line 618:    NTT device, Do not disturb ongoing PLMN search !
Line 625: Trigger search for next RAT for TMO
Line 630: Any Plmn Search is already going on, wait for result to take further action
Line 643: LastEmcRat (%d) is different from the current RAT(%d), use current RAT for EMC 
Line 712:    Recovery to be started through deepsleep timer as its running/start/expiry in progress
Line 722:    No Action needed as PLMN state is %s !
Line 739:    OOS Recovery timer is running, and MM Non-Idle State, perform actions after IDLE and TIMER expiry
Line 746: [W]InValid SIM / Search is already going on so no need to try for Normal service
Line 747: [I]Plmn State : %s (%s)
Line 748: plmn_PlmnSelectionStarted -> %s
Line 776:    EMC Call ended and MCC procedure is Incomplete. Start MCC procedure 
Line 820:    AP Already has EMC_RAT_INFO %X !Not Performing any actions.
Line 836:    Stack initialisation ongoing!
Line 843:    Sending dummy EMC RAT Info and waiting for CSFB call Request
Line 850:    Wait for MCC procedure to complete
Line 854:    AP requested mmcActPrefRat : %s
Line 875:    %s : EmcRat = %s, ActiveRat = %s, %s
Line 916:    EMC Call skip -> PLMN Selection already going on, Wait for Response from the corresponding RAT
Line 922:    PLMN Search on LTE ongoing, suspend LTE and try on UMTS
Line 928:    Foreground LIST procedure is going on, ABORT and process EMC call
Line 936: EMC Call deferred -> after NEW_RAT_INITIAL_PLMN_ACTION
Line 943:    BPLMNEnabled = TRUE && BPLMN search == TRUE , Postponing EMC Call handling
Line 946: EMC Call deferred -> after BPLMN Abort 
Line 953:    Wait for MCC procedure to complete
Line 978:    Is Unregistered SIM card ? : %s , isUeInSK :%s
Line 1023:    VoPS is not supported. Prioritze CS call
Line 1034:    Enable EUTRA (and perform LTE search)
Line 1045:    Sending EMC RAT Info
Line 1049: [W]EmcRat == MMC_NONE_MODE !
Line 1074:    Sending dummy EMC RAT Info and waiting for CSFB call Request
Line 1127:    %s : EMC Call Status = %d, AttemptedRatType: %s, mmcActPrefRat: %s
Line 1138:    Single Mode operation and MMC_EMERGENCY_CALL_FAIL in current RAT, Treat as Call END 
Line 1139:    EMC Call Status %d -> %d
Line 1175: [!]Cause not handled in %s 
