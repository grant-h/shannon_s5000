Line 160:    Data = [%x], Length = [%d]
Line 229:    ServiceDomain to EMM: %d
Line 236:    DualSimStatus to EMM: %d
Line 241:    DDS to EMM: %d, ImsDDS : %d
Line 300:    %s : NewMode = %s 
Line 554: MMC_LTEMM_MOB_CMD_FROM_IRAT_REQ (G2L REDIRECTION) 
Line 558: MMC_LTEMM_MOB_CMD_FROM_IRAT_REQ  (U2L REDIRECTION)
Line 624: MMC_LTEMM_MOB_CMD_FROM_IRAT_REQ (G2L RESELECTION) 
Line 628: MMC_LTEMM_MOB_CMD_FROM_IRAT_REQ  (U2L RESELECTION)
Line 668:    MMC_LTEMM_RESEL_REQ : Num of cell:(%d) SourceRAT:(%d) PLMN_ID: %06x  earfcn:(%d)  Cell_ID:(%d) QRB:(%d)
Line 708: [W]CS2PS_HO_TO_LTE_FROM_UMTS - RSRVCC is not supported
Line 724: [W]CS2PS_HO_TO_LTE_FROM_GSM - RSRVCC is not supported
Line 737: [W]Invalid mobility type
Line 791:    U2L/G2L HO event is ready
Line 795:    U2L/G2L HO data contents is NULL
Line 798: MMC_LTEMM_MOB_CMD_FROM_IRAT_REQ : MobCmdType (%d), MOBFROMIRAT (%d)
Line 833: [W]%s: INCORRECT RAT. Cancel Sending Msg
Line 857: MMC_LTEMM_MOB_CMD_FROM_IRAT_REQ : MobCmdType (%d)
Line 978:    %s : (status = %d)
Line 1056: Add to Sync Queue : MMC_EMM_SUSPEND_REQ : Suspend mode =%d 
Line 1098: Add to Sync Queue : MMC_EMM_RESUME_REQ : ResumeReq mode =%d,LteRatStatus = %d 
Line 1261:    StartTime=%d, Duration=%d, PLMN -> %06x 
Line 1403:    MMC_ESM_SM_INFO_UPD_IND
Line 1409:    ForcedRegInfo = %d / SMLocalDeactFlag = %d
Line 1411:    State : %d  Nsapi : %d PrimNsapi : %d PdpType : %d PdpAddrLen : %d TftLen : %d ApnLen : %d
Line 1420:    TFT : %d, LinkedTi : %c, PacketFlowID : %d, AgbIuFlag : %d
Line 1426:    SourceStaticDes : %d, SignalingInd : %d , SID : %d, DualSid : %d
Line 1498: [!]Error : fail to allocate Memory
Line 1539:    MM -> EMM RegInfo: 
Line 1540:    LteRrcAvailSchedInfo = %d
Line 1542:    TMSI : 0x%08x, LAI : %06x / 0x%04x 
Line 1545:    LastRegRatMode = 0x%x, EutranDisabled = 0x%x, MmCksn=0x%x, MmUpdateStatus = 0x%x
Line 1551:    ImsiAttachState = 0x%x, EmmCombinedProc = 0x%x, CsSrvRejCause = 0x%x
Line 1556:    ISR Status on HEDGE = 0x%x
Line 1557:    TIN on HEDGE ==> 0x%x, ForcedRegInfo = %d 
Line 1558:    GmmState = 0x%x, GmmServiceState=0x%x, GmmProcedure=0x%x, GmmCause=0x%x
Line 1563:    cellId=0x%x, NumberOfEplmn = 0x%x
Line 1567:    PlmnId = %06x
Line 1570:    Equivalent Plmn List is==>
Line 1574:    Equivalent Plmn List is Empty
Line 1599:    %s : Source Rat=%d
Line 1624:    %s : Source Rat=%d
Line 1709:    CGI INFO received to MMC, LAC = %d ,RAC = %d , No PLMN = %d , CGI CELL ID = %d 
Line 1717:    CGI INFO received to MMC, LAC = %d ,RAC = %d ,CGI CELL ID = %d 
Line 1923:    %s : 
Line 1954:    Default case for Init_Cnf_Action
Line 1979:    Mode is 2G/3G/HEDGE 
Line 2022:    EUTRA STATUS from EMM - %d, ServiceDomain - %d
Line 2029:    [DSDS]: SET DISABLE EUTRA
Line 2255:    %s : 
Line 2265:    Emergency PDN Status = %s
Line 2284: EMM_MMC_REG_INFO_UPD_IND:pEplmnList
Line 2300: [!]RegInfoUpdInd Ignored at MMC, UE mode : %d, ForcedRegInfo = %d, Received EPLMN List Count = %d 
Line 2331:     %s : Process sib5 info from LTE : %d 
Line 2349:     Not PLMN_MAKE_TYPE2/F Device, ignore the indication 
Line 2380:    Process MCC RSP msg from LTE 
Line 2435:    %s :  Suspend Status = %s, Next Action = %s, MMC_STATE -> %s 
Line 2489:    %s : 
Line 2515:    %s : Resume Status = %s, Next Action = %s, MMC_STATE -> %s 
Line 2560: [!]%s : LTE is Suspended. Ignore IRAT result from EMM 
Line 2607:    %s : 
Line 2707:    %s : 
Line 2718:    MMC mode = %d ( REDIR_CNF (0) )
Line 2798:    %s : 
Line 2807:    MMC  mode = %d (RESEL_RSP (%d))
Line 2852:    %s : 
Line 2874: [!]Not Expected in This CSFB State -> Discard Received Msg
Line 2906:    %s : %s (0x%x)
Line 2913: [!]Not Expected in This CSFB State -> Discard Received Msg
Line 2959:    HEDGE_EMERGENCY_CALL Triggered
Line 3029:    %s : 
Line 3079:    %s : %s (0x%x)
Line 3099:    MT Call Fail: Move to Hedge , trigger PAGE RSP
Line 3114:    MT Call Ind: send Indication to NS/MM
Line 3121:    ID TYPE = %d 
Line 3151:    %s : 
Line 3161:    %s : 
Line 3214:    %s : 
Line 3236:    %s : 
Line 3263:     %s : 
Line 3280: [W] TargetRat Invalid : %d
Line 3287: [W] IratDualRat Invalid : %d
Line 3296: [W] TargetRat Invalid : %d
Line 3323:    %s : TargetRatBitMap(0x%x)
Line 3378: [W] TargetRatBitMap Invalid : 0x%02x
Line 3428:    %s : 
Line 3454:    SmInfoUpd Ignored at MMC, UE mode : %d, ForcedRegInfo = %d 
Line 3484:    %s : 
Line 3505:    %s : 
Line 3526:    %s : 
Line 3576:    %s :
