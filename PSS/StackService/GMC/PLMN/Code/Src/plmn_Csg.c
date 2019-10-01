Line 200: [I]plmn_CsgSelectionMode : %s
Line 216: [I]------------------------- Displaying CSG Data ----------------------------
Line 217: [I]CSG Aware UE : %s, CSG Aware UICC : %s
Line 218: [I]CSG Selected : %s, CSG ID : 0x%08X
Line 220: [I]CSG Selection in Progress : %s , CSG List in progress : %s CSGListReqCasue : %d 
Line 256: Saved Plmn Selection Mode : %s
Line 298: [!]Invalid Mode (%d) in %s
Line 303:    %s -> %s 
Line 399: [I]%s : CSG Feature Not Supported. Ignore the message
Line 424:    Emergency PDN is connected. Reject Manual CSG Selection
Line 430:    Rejecting GAPI CSG Selection due to User Plmn Action Already Saved, Awaiting RR Release
Line 436:    Rejecting GAPI PLMN Selection due to Sim State being PLMN_SIM_INVALID
Line 442:    Manual Selection Not Allowed in AUTO Mode !!!
Line 448:    PLMN LIST REQ is in Progress. No Manual PLMN selection Allowed !!!
Line 482:    pPlmn_CsgDb->SelectedCsgId : %d -> %d 
Line 510:    pPlmn_CsgDb->CsgSelectStatus : %d -> %d 
Line 530:    pPlmn_CsgDb->CsgSelectionInProg : %d -> %d 
Line 550:    pPlmn_CsgDb->CsgListInProg : %d -> %d 
Line 570:    pPlmn_CsgDb->CsgDisplayInd : %d -> %d 
Line 591:    pPlmn_CsgDb->SimCSGlistsUpdated : %d -> %d 
Line 611:    pPlmn_CsgDb->CsgListReqCause : %d -> %d 
Line 634:    pPlmn_CsgDb->UeCsgAwareness : %d -> %d 
Line 657:    pPlmn_CsgDb->UiccCsgAwareness : %d -> %d 
Line 685:    pPlmn_CsgDb->CsgType : %d -> %d 
Line 698:    pPlmn_CsgListDb->AvailCsgListDb.SpecPlmnTobeSearched : %d -> %d 
Line 708:    pPlmn_CsgListDb->OperatorCsgListCount : %d -> %d 
Line 718:    pPlmn_CsgListDb->AvailCsgListDb.AvailableCount : %d -> %d 
Line 728:    pPlmn_CsgListDb->AvailCsgListDb.RatSearched : %d -> %d 
Line 756: [I]%s : CSG Feature Not Supported. Do not Clear Selected CSG
Line 890: [I]%s : CSG Feature Not Supported. Do not Initialise CSG variables
Line 894:    %s
Line 1053:    %s with Result :- %s
Line 1058:    pPlmn_CsgDb->CsgListReqCause -> %d 
Line 1076:    AvailableCsgLists Before Sorting :: 
Line 1081:    AvailableCsgLists After Sorting :: 
Line 1127: [W]Invalid pPlmn_CsgDb->CsgListReqCause !!
Line 1147:    %s Found Complete CSG Lists Proceed with Combine Actions 
Line 1179:    %s Complete List not Found so Send List Req for Next Rat 
Line 1202:    CSG List going on in Active RAT
Line 1205:    SendStartDrxInfoShareInd : %s SendBplmnSrchStopInd : %s
Line 1215:    CSG was going on Non-Active RAT, Send BplmnSrchStopInd
Line 1221:    Sending IND to RRC:Start DrxInfo Ind
Line 1242:    %s
Line 1304: [I]RatMode -> %s
Line 1305: [!]Compiled for Single Mode Operation So perform Actions
Line 1327:    %s 
Line 1399: [W]ERROR: Should not come here in %s ; Plmn_CsgListDb.AvailCsgListDb.RatSearched : %d 
Line 1462: %s : ACSG Count = %d , OCSG count = %d
Line 1482:    ------Allowed CSG List ------
Line 1499:    PlmnId : %06x
Line 1507:    %d > 0x%08X : ACSGLCount(%d), allowed CsgIdCount(%d)
Line 1517:    ------Operator CSG List ------ (allowed CSG cnt(%d))
Line 1550:    Duplicate Entry not allowed in White List !!
Line 1557:    OCSG found in Forbidden CSG List
Line 1570:    PlmnId : %06x
Line 1576:    %d > 0x%08X 
Line 1631:    %s : ActiveRat - %s 
Line 1723: [W]WARNING : pPlmn_CsgListDb->AvailCsgListDb.RatSearched (%d) is not PLMN_CSG_LTE_DONE  in DUAL mode
Line 1780:    Initiating RAT Change Procedures
Line 1783: New Rat Initial Plmn Action is %s
Line 1792:    Wait for RR Release ,then request search
Line 1815: %s :: pPlmn_CsgDb->CsgListInProg = (%d),  
Line 1821:    CSG in background
Line 1829:    SelectedRat = %s
Line 1852:    CSG in Foreground
Line 1856:    SelectedRat = %s
Line 1923:    %s : 
Line 1990: %s : 
Line 1994: [W]ERROR ::  Available CSG Lists state -> PLMN_CSG_BOTH_DONE 
Line 2000:    CSG in background
Line 2003:    SelectedRat = %s
Line 2016:    CSG in Foreground
Line 2020:    SelectedRat = %s
Line 2051:    %s : 
Line 2085: [W]Old PLMN Selection Mode is not saved !!
Line 2204:    PerformPeriodicCsgScan not Initiated!! Plmn_CsgListDb.OperatorCsgListCount: %d
Line 2275:    %s
Line 2278:    Selected CSG Id : %X , CSG selected : %s, Csg cell Type : %d (none / closed / hybrid)
Line 2299:    CSG Cell Type is not Closed, Not adding in to ACSG list
Line 2336:    Selected CSG ID is already present in the White list
Line 2346: [W]Invalid CSG Selection Mode
Line 2371:    %s
Line 2375:    Selected CSG Id : %X , CSG selected : %s, Csg cell Type : %d (none /closed /hybrid)
Line 2411:    Selected CSG ID is not present in the White list
Line 2435: [I]%s : CSG Not Supported. Ignoring the Msg
Line 2443:    %s : Result = %s, CsgSelectionInProg = %s, CsgSelectStatus: %s 
Line 2459:    Sending CSG User Selection Response to GAPI
Line 2469:    HOLD RSP TRUE. Attach Accept might have received with SMSOnly/CSFB not preferred
Line 2509:    Already camped on same CSG ID / Rat mode combination
Line 2517:    Manual CSG Selection not allowed in this state.
Line 2526:    PLMN SEARCH is in Progress. GAPI_PLMN_CSG_SEL_REQ Msg Saved Until Later.
Line 2539:    For ATT, CSG mode cannot be changed to MANUAL
Line 2546:    Plmn_CsgListDb.OperatorCsgListCount = 0, Forceful CSG-SEL-REQ accepted
Line 2557:    pPlmn_CsgListDb->OperatorCsgListCount = 0, Not taking any actions
Line 2570:    CSG_SEL_REQ :: PLMN ID : %06x  CSG ID : 0x%X
Line 2599:    Perform CSG search for selected CSG id
Line 2747: [W]Unexpected value received from NS in CsgModeChangeReq
Line 2833:    Ignoring the CSG_LIST_RSP !!!!!! List Req Cause: %d 
Line 2849:    Reading Plmn List Sent by %s. Please Wait....
Line 2862:    Rejecting CSG_LIST_RSP, Wrong plmn_PlmnState !
Line 2940:    User Plmn Selection Mode Change Request processing from Queue Triggered
Line 2970:    %s :: TBD
Line 3021: [W]%s : CSG Feature Not Supported
Line 3025: %s:: Entry 
Line 3151: GMC_EV_PLMN_CSG_SAVE_CURRENT_CAMPED_CSG not Supported Yet
Line 3168: GMC_EV_PLMN_CSG_RETURN_TO_LAST_CAMPED_CSG not Supported Yet
Line 3179: %s:: Exit 
Line 3204: [I]%s : CSG Feature Not Supported
Line 3219:    CSG ID not found in 3G. Send SEL Response to NS and roll back to RPLMN, Enable EUTRA
Line 3235: MAnual CSG in progress and EUTRA is disabled. Search same CSG in 3G
