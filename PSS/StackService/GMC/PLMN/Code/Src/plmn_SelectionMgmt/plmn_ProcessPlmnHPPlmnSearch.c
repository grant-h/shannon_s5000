Line 190:    plmn_HPPlmnSearchData[gStackId].HPPlmnTimerActionPendingFlag : %d -> %d 
Line 210:    plmn_HPPlmnSearchData[gStackId].HPPlmnSearchFlag : %d -> %d 
Line 230:    plmn_HPPlmnSearchData[gStackId].UseFastHPlmnSearch : %d -> %d 
Line 238: [I]----------------------- Displaying HPPLMN Search -------------------------------------------
Line 239: [I]HPPlmnSearchFlag : %d, UseFastHPlmnSearch : %d, Pending : %d  
Line 241: [I]----------------------------------------------------------------------------------------
Line 284:    HPlmn Search In Progress
Line 297:    plmn_HPPlmnSearch=TRUE in MANUAL PLMN SELECTION MODE
Line 329:    Received HPPLMN Search STOP Req After PLMN_SEARCH_REQ, Must wait for Cell-Ind and then ReturnToSavedPlmn
Line 383:    %s :
Line 422:    Stopping HPlmn Search : %s(%d) 
Line 464:    Aborting BPLMN completely, Next HPPLMN actions will be taken after HPLMN timer expiry !
Line 558: %s:: Entry 
Line 628:    No Higher Priority Plmn Found..Aborting HPlmn Search Procedure
Line 635:    Initiating Periodic Higher Priority PLMN Search
Line 664: [I]Plmn State : %s (%s)
Line 711: [W]Unknown Plmn Search Method (0x%02X),Aborting HPlmn Search Procedure..
Line 717: %s:: Exit (%d)
Line 739:    Checking HPlmn Search Conditions
Line 771:    #1 Emergency PDN is connected
Line 778:    #2 Search Delay After Power Up not Elapsed Yet
Line 784:    #3 Can only be done in PLMN_AUTO_PLMN_SEL_MODE !!
Line 791:    #4 BPLMN due to G2L Resel Ongoing, Restart HPLMN Timer for short duration until abort current procedure
Line 811:    #5 Special case, Restart HPLMN Timer for short duration
Line 820:    #6 H3G HPLMN Timer expired when Action is already ongoing
Line 832: [W]$7 Incorrect PlmnState/Loss of Cov: plmn_PlmnCoverageLost = %s
Line 833: [I]Plmn State : %s (%s)
Line 834: [I]RatModeChangeState -> %s
Line 858:    #8 Camped on HPLMN but not yet registered.
Line 866:    #9 Already High Priority Plmn(Home/Equivalent/Pref/OPref PLMN !!
Line 875:    #10 Refresh_RatMode change pending, Start HPLMN Short Timer
Line 882:    #11 RR Release action is already set to PLMN_SEND_HPLMN_LIST_REQ_RR_REL.
Line 888:    #12 Can only be done in PLMN_IDLE
Line 889: [I]RatModeChangeState -> %s
Line 904:    #13 ATT Manual CSG Search in progress!
Line 911:    #14 CSG Mode is CSG Manual !
Line 921:    #15 BPLMN Procedure for CSG is on -going, abort and process HPLMN actions 
Line 933:    Periodic HP-PLMN search Not Initiated.
Line 951:    %s: HPPlmnSearchConditions -> %d
Line 1010: [W]PDP context is activated.
Line 1028:    Special case, Restart for short duration
Line 1134: [W]WARNING !!Check states at this point !! HighPrioPlmnFromSimRatMode(%d) RrPlmnListRsp (%d), Sending LIST REQ to active RAT (%d) 
Line 1141:     BplmnSearchRat -> %s, ( HighPrioPlmnFromSimRatMode(%s) RrPlmnListRsp (%d), ActiveRat (%s) ) 
Line 1192:    List Update method is Current RAT or High Priority RAT not present in SIM
Line 1236:    High Priority RAT is LTE 
Line 1262:    AvailablePlmnListUpdateMethod : %s 
Line 1263:    BplmnSearchRat -> %s, sel=%d 
Line 1284: %s:: Entry 
Line 1285: %s : BPLMN %s 
Line 1298:    HPPlmnSearchConditions %s -> %d
Line 1316: H3G Hack, do not send HO end notification
Line 1332:    Abort Higher Priority PLMN search 
Line 1426:    Defer HPLMN list req action after RR connection release
Line 1476: [I]Plmn State : %s (%s)
Line 1477:    bplmn enabled = %d, ENS enabled = %d
Line 1478:    Starting BPLMN Search on RAT: %s 
Line 1499:    Pref RAT != Current RAT; Send StartDrxInfoShareInd
Line 1506:    Special HPLMN search to be done in UMTS RAT mode; Send StartDrxInfoShareInd
Line 1517: %s:: Exit (%d)
