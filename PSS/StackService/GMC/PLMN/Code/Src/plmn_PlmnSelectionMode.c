Line 157: [I]Plmn Selection Mode : %s
Line 183: Set PlmnSelectionMode : (%d)
Line 194: [W]Invalid value for ctrl : %d 
Line 224:    Set PlmnSelectionMode : %s -> %s(%d)
Line 236: [W]Invalid value for ctrl : %d 
Line 259:    pPlmnSelectionMode_DB->plmn_ModeChangePending : %d -> %d 
Line 326: [W]Invalid value for ctrl : %d 
Line 332:    Set plmn_userReselection flag : %d -> %d
Line 392:    %s : Write GMC_FLASH_PLMN_SEL_MODE from %s to %s(%d) (Current PlmnSelectionMode : %s)
Line 448:    Updated PLMN Selection Mode from %s to %s
Line 511:    PLMN List Size = %d
Line 517:    Checking for PLMN received in Search Fail List[%d] : %06x 
Line 527:    No S. Korean PLMN found in PLMN List
Line 576:    PLMN received in Cell Ind : %06x 
Line 577:    LastCampCountryCode (%x) , CurrPlmnCountryCode (%x)
Line 614:    %s : Cause = %d , LastCampCountryCode(%x)
Line 667: [W]Invalid Action !
Line 675:    UE back in S. Korea. PLMN Selection Mode changed from MANUAL to AUTO
Line 689:    UE Either Already in AUTO Mode or Still in Last Camped Country
Line 714:    %s : %s 
Line 715: [I]Plmn State : %s (%s)
Line 743:    Result = %d - Invalid SIM state
Line 782:    Result = %d - Wake from DeepSleep due to mode change Initiate Plmn Search %s
Line 788:    Result = %d - Continue with PLMN actions for mode change %s
Line 827:    Result = %d - After OOS Timer expiry, UE will restart PLMN selection 
Line 844:    Result = %d - User Request is high priority so ignoring old RAT Init Action
Line 865:    Result = %d - MCC procedure is ongoing. Do not take any action
Line 872:    Result = %d - Recovery Actions already running using BPLMN
Line 898:    Man to Man : %s 
Line 945:    HPLMN Timer Not Running, So not Starting it again
Line 962:    Awaiting User Input
Line 967:    User Manual PLMN Re-Selection, Awaiting User Input
Line 1004:    Man to Auto : %s 
Line 1021:    HPLMN Timer Not Running, So not Starting it again
Line 1111:    Already ON_PLMN, Nothing more to do
Line 1120:    PowerUp Routines in Progress. No need to take any action.
Line 1152:    Man to Man BG : %s 
Line 1187:    Already ON_PLMN or RAT change in progress - Plmn State = %s
Line 1220:    PowerUp Routines in Progress. No need to take any action.
Line 1226:    SIM is invalid. No need to take any action.
Line 1232: MCC is going on, mode change to auto action will be ignored.
Line 1238: Auto 2 Auto pre-condition OK
Line 1244:    Auto(Man BG) to Auto : %s 
Line 1309:    PLMN state: %s, plmn_HPPlmnSearch -> %s
Line 1405: %s:: Entry 
Line 1425: [W]Mode change request not supported. (un-supported mode or SIM is absent)
Line 1440: Man to Auto: CS Call Procedure in Progress, Proceed with user request
Line 1444: CS Call Procedure in Progress, reject user request
Line 1466: %s : New Mode = %s, Plmn State = %s
Line 1473:    #1. Pre-Processing - Check Pending PLMN_SEL_REQ, PLMN_SE_RSP 
Line 1479: Pending PLMN SEL REQ is not yet processed, mode changed to auto , delete the saved message
Line 1514:    #2a. New mode is Auto, set plmn_userReselection flag and start PLMN_AUTO_AUTO_RESEL_TIMER 
Line 1539: Already BPLMN List in Progress; Abort this & Start New List Req 
Line 1557:    #2b. New mode is Manual, Abort BPLMN 
Line 1580: Already BPLMN List in Progress; Abort this & Start New List Req 
Line 1596:    #2c. New mode is Manual Background mode 
Line 1600: MANUAL BACKGROUND MODE not expected when BPLMN scan running
Line 1608:    #3. Reconfig PLMN Selection Context 
Line 1665:    #4. Send PLMN Sel Mode Rsp 
Line 1677:    Mode Change Req is dummy for CSG Search in AT&T 
Line 1720:    #5. PLMN Sel Mode Change : %s -> %s 
Line 1786: Other stack was using resources due to which Manual PLMN Procedure failed, dont't need to force assert.
Line 1798:    PLMN Sel Mode Change Result - %d 
Line 1816:    #6. Update CSG Sel. Mode, and PLMN Sel. Mode 
Line 1844: %s:: Exit 
