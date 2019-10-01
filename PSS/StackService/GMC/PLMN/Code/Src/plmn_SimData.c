Line 660: [I]SIM LAI : %06x / 0x%04x 
Line 675: [I]SIM RAI : %06x / 0x%04x / 0x%02x
Line 690: [I]SIM TAI : %06x / 0x%04x 
Line 705: [I]MM SIM State -> %s
Line 719: [I]GMM SIM State -> %s
Line 739: [I]Displaying All MM SIM Data
Line 742: [I]SIM Type : %s
Line 747: [I]LocUpdateStatus : %s / %s / %s 
Line 754: [I]SimData MCC/MNC : %06x
Line 765: [I]--------------------------
Line 773: [I]SIM Type : %s
Line 782: [I]SimData MCC/MNC : %06x
Line 791: [I]LocUpdateStatus : %s / %s / %s 
Line 869:    SimProvider : %d -> %d
Line 1170: [I]SIM State : %s -> %s
Line 1176: [W]Sim State set fail! - Invalid new Sim State (%x)
Line 1218: [I]GMM SIM State : %s -> %s
Line 1224: [W]Gmm Sim State set fail! - Invalid new GmmSimState (%x)
Line 1260:    pPlmnSimData_DB->plmn_SimDataStatus.UsatRegisteredFlag : %d -> %d 
Line 1360:    pPlmnSimData_DB->plmn_SimDataStatus.HplmnCheckNeeded : %d -> %d 
Line 1406: [W]Accessing Invalid EPS update status (%x)
Line 1409:    EPSUpdateStatus : %s 
Line 1453: [W]Accessing Invalid Loc update status (%x)
Line 1456:    LocUpdateStatus : %s 
Line 1500: [W]Accessing Invalid RAU update status (%x)
Line 1503:    RAUUpdateStatus : %s 
Line 1588:    plmn_NumOfEfChanged : %d -> %d 
Line 1660:    %s : ListType %d
Line 1661:    SIM CSG DATA :: CsgType (%d), CsgCount (%d)
Line 1671:    PLMN ID :: %06x, CsgDisplayInd = %d
Line 1685:    CSG Info :: %08X (CSG ID), CsgTypeInd : %d HnbNameInd: %d
Line 1698: [W]Invalid ListType %d!!
Line 1736:    %s
Line 1746:    ACSGListPtr is NULL
Line 1757:    OCSGListPtr is NULL
Line 2389:    Received %s[%d] : %06x , AccTech: %s (0x%04x), %c
Line 2395:    EF_OPLMNwACT/EF_UPLMNwACT - Received %d PrefPlmnList, %d Added : 
Line 2421:    No HPLMN Search; Stopping Search Timer
Line 2442:    Received HPPlmnPeriod (SIM): 0x%02X, Fast First HPPLMN Enabled(%d)
Line 2508:    Received Forbidden Plmn List[%d] : %06x , %c 
Line 2576:    Received Plmn Selector List[%d] : 0x%06x , %c
Line 2581:    EF_PLMNsel - Received %d PLMNSelectorList, %d Added : 
Line 2616:    %s : HomePlmnCount(%d)
Line 2633:    found 460-00 (%d) times in the Home PLMN List
Line 2639:    460-00 is already in top of HOME_PLMN_L
Line 2663:    460-00 index(%d) is re-ordered to (%d) in HOME_PLMN_L
Line 2667:    460-00 index error(%d) / give up the re-ordering
Line 2674:    460-00 is not in the HOME_PLMN_L
Line 2726:    HPLMN code present in EF_HPLMNwAcT file, Copy the Access Technology into HPLMN list
Line 2742:    Received HPlmn List[%d] : %06x , AccTech: %s (0x%04x), %c
Line 2748:    EF_HPLMNwACT - Received %d HPlmnList, %d Added : 
Line 2818:    Start updating Home-PLMN-LIst with ef_HPLMNwAcT
Line 2835: [W]EHPLMN entry addition failed, current count of EHPLMN entries = %d
Line 2848:    Start updating Home-PLMN-LIst without ef_HPLMNwAcT
Line 2861: [W]EHPLMN entry addition failed, current count of EHPLMN entries = %d
Line 2878:    EF_EHPLMN - Received %d EHplmnList, %d Added : 
Line 3065:    EHPLMN list is supported. Trying to read EF_EHPLMN
Line 3071:    EHPLMN list is not supported. Not reading EF_EHPLMN
Line 3079:    HPLMN Count after reading EHPLMN: %d 
Line 3088:    HPLMN Count after processing EHPLMN and HPLMN Selector: %d 
Line 3185:    %s : MNCLength(%d)
Line 3227:    SIM MCC(%x) Indicates U.S.A subscription
Line 3235:    3rd Digit of MNC in SIM is 0, Copy 3rd digit of SIM MNC in HPlmn for now, check later
Line 3256:    3rd Digit of MNC in SIM is F !
Line 3260:    IMSI indicates that We have a 3 Digit MNC
Line 3271:    HPlmn Does Not Belong to U.S.A (%x) -> Use F as the 3rd Digit of MNC, Check later
Line 3287:    MNCLength not supported by SIM. Check later with Plmns that RR sends
Line 3326:    EF_ActHPLMN is Present
Line 3369:     EF_ActHPLMN is Not Present
Line 3373:    EF-CSP bit status : %d, EF-CSP bit value : %d PLMN Mode : %d
Line 3383:    EF-CSP plmn mode bit = 0, So modify Plmn Selection mode
Line 3384:    Flash value is Manual mode, EF-CSP is Auto So setting it to Auto
Line 3420:    EF_HPLMN - Received HPlmnPeriod -> 0x%02X
Line 3447:    Change PowerUpHPlmnSearchDlyElapsed to TRUE
Line 3516:    Received Forbidden Plmn List[%d] : %06x , %c
Line 3522:    EF_FPLMN - Received %d FPLMNList, %d Added : 
Line 3618:    EF_ActHPLMN - Received File Change Notification for ActHplmn 
Line 3652:    EF_RAT - EF_RAT(%d), SimData.RatMode(%d)
Line 3661:    =========================NOTICE======================
Line 3662:    =====================================================
Line 3663:    EF_RAT - Received REFRESH for EF_RAT. New EF_RAT: %s 
Line 3664:    =====================================================
Line 3668: [W]EF_RAT is not TRI MODE. Change SIM card or SIM profile to retest in TRI MODE
Line 3676:    EF_RAT - RAT mode is not changed -> Clear RefreshRatMode 
Line 3678: [W]%s : plmn_SimDataLocal.RefreshRatMode : %s -> %s 
Line 3773: [W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
Line 3774: [W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
Line 3775: [W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
Line 3776: [W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
Line 3777: [W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
Line 3905:    %s : AttCommercialSimCard(%d)
Line 3956:    %s : VzWCommercialSimCard(%d)
Line 4014:    Provider name: %d in plmn_SetSimProvNameFromAHPLMN 
Line 4064:    [LGU Roaming requirement]Search LTE first, when user enable LTE roaming: write RPlmnAccTech to LTE
Line 4150:    Compare Sim card ID with previous one : %d (1:SameID, 2:SameType 3:Diff)
Line 4185:    Clear RPLMN Access Tech. - IMSI changed 
Line 4227:    Original HPlmn extracted from IMSI : %06x
Line 4230:    HPlmn extracted from IMSI : %06x
Line 4232:    Is IMSI changed : %d
Line 4270:    SimProvider : %d
Line 4377:    Received Ehplmn_Indicator: %d
Line 4424:    Received RPlmn AccTech -> 0x%02X, 0x%02X
Line 4426:    SimRead EPS Tai received (0x%x) IsEpsLociValid (%d)
Line 4442:    SIM EPS LOCI is Absent, FlashRead EPS Tai received %06x and pPlmnSimData_DB->plmn_SimData.LteUpdateStatus: %d
Line 4453:    IMSI/SIM Card is changed or IsEpsLociValid EF is present, Updated pPlmnSimData_DB->plmn_SimData.Tai: %06x and pPlmnSimData_DB->plmn_SimData.LteUpdateStatus: %d
Line 4535: IMSI has changed (plmn_SimData.EfImsiChanged : %d), Deleting Flash CSG information !
Line 4557:    CSG Capable UE ( %s ), CSG Services on UICC ( %d ) 
Line 4568:    pPlmnSimData_DB->plmn_SimData.LastRPLMNSelInd (EF_LRPLMNSI): %d
Line 4576:    Setting plmn_TechMenuOrderedPlmns to MMC_LTE_MODE
Line 4602:    Setting plmn_TechMenuOrderedPlmns to MMC_LTE_MODE
Line 4612:    Setting plmn_TechMenuOrderedPlmns to MMC_UMTS_MODE
Line 4646:    Fast First HPPLMN Enabled = %d
Line 4726: [W]NO SIM PRESENT
Line 4738: [W]SIM IMSI Not an IMSI Type !!! Emergency Use Only !
Line 4746: [W]CMD_UNSUCCESSFUL_TEMP_ERR !
Line 4752: [W]CMD_UNSUCCESSFUL ! (0x%x)
Line 4781:    %s : Plmn State = %s
Line 4794: [W]Errors in Reading SIM Data...Select ANY Plmn
Line 4798: [W]SIM Returned CMD_UNSUCCESSFUL_TEMP_ERR
Line 4819: 
Line 4860:    %s : Read %d EF_FILE data in plmn_SimData and update PLMN&PLMN list data
Line 4871: [W]Read Failure for file : 0x%x 
Line 5016: [W]Unknown EF Element (0x%x) Received Ignore
Line 5081:    %s : Plmn State = %s
Line 5111:    OPPLMN files refreshed. Restart HPPLMN timer for smallest duration !
Line 5203:    %s : Plmn State = %s, %s  in state of plmn_UsatRegistered
Line 5265: [W] %s : CSG Not Supported. Ignoring the Msg
Line 5340: %s:: Entry 
Line 5422: %s:: Exit 
Line 5442:    %s : EF_HPLMNwAct, EF_EHPLMN, EF_PrefPLMNwAcT, EF_OPLMNwAcT
Line 5522: [W]%s : plmn_SimData.RatMode : %s -> %s 
Line 5524: [W]%s : plmn_SimDataLocal.RefreshRatMode : %s -> %s 
Line 5543:    %s : Type = %d
Line 5611: [W]%s : Unknown Initialisation Type (%x)
