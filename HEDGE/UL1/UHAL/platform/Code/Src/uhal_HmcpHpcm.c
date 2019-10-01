Line 254: uhal_HmcpHpcm_ModemOnAfterRFGrant()
Line 287: [INFRA_3G] uhal_HmcpHpcm_ClkGating: RfctrlClk(0x%x), Front0Clk(0x%x), Front1Clk(0x%x), Demode3gClk(0x%x), RearClk(0x%x), MbusClk(0x%x), TurboClk(0x%x)
Line 306: [INFRA_3G]2G/3GF/4G/3GT front_modem_sel %d, rfctrl_modem_sel %d, demod_3g_modem_sel %d, rear_modem_sel %d, turbo_modem_sel %d
Line 320: activeStackId %d [Hmcp]%s - powerOnOffCmd : %d
Line 384: activeStackId %d powerOnSource %d powerOnRequested %d sleepMode %d [Sleep Hpcm]Umts Active Service now on
Line 545: activeStackId %d Do nothing: powerOnOffCmd = %d, prevPowerStatus = %d
Line 565: [INFRA_3G] ResetRake, UMTS_IRAT_ONGOING_DS %d, isHwWakeUp %d
Line 572: [INFRA_3G] ResetSearcher
Line 578: [INFRA_3G] ResetTx
Line 582: [INFRA_3G] ResetTxf
Line 587: [INFRA_3G] FRONT
Line 637: uhal_HmcpHpcm_GetUmtsModemStatus : ownmsk_hspa 0x%x, ownmsk_uhal 0x%x, status %d
Line 724: [HPCM] Domain %d State %d
Line 807: uhal_HmcpHpcm_CancleSleepWaitingToken
Line 828: uhal_HmcpHpcm_GetNonUmtsRatModeReq :: isNonUmtsRatModeReq %d ###
Line 866: activeStackId %d  ### uhal_HmcpModemSel_AfterSleep iratPowerOn %d ###
Line 912: 3G MODEM POWER ON [ %02d:%02d:%02d.%03d ]
Line 929: 3G MODEM POWER OFF [ %02d:%02d:%02d.%03d ]  |
Line 960: uhal_HmcpHpcm_IratMsmtRequest: iratPowerOn : %d
Line 1009: Set sleep mode = %d
Line 1089: uhal_HmcpHpcm_ClkGating: %d hspaCalibrationMode %d modemTestMode %d
Line 1110: uhal_HmcpHpcm_ClkGating: RfctrlClk(0x%x), Front0Clk(0x%x), Front1Clk(0x%x), Demode3gClk(0x%x), RearClk(0x%x), MbusClk(0x%x), TurboClk(0x%x)
Line 1115: Warning UmodemStatus False
Line 1124: activeStackId %d ****uhal_HmcpHpcm_GetLteTimeLatched = FALSE
Line 1130: activeStackId %d ****MODEM CLK ON
Line 1135: activeStackId %d ****MODEM CLK OFF
Line 1199: HW destination control(CommonBlock-on). BASE_ADDR 0x%x, END_ADDR 0x%x
Line 1219: *********DSP ON %d %d %d
Line 1235: *********DSP OFF
Line 1346: uhal_HmcpHpcm_SkipAntPathConfig : isInCMGap %d isFrequencySet %d
Line 1352: uhal_HmcpHpcm_SkipAntPathConfig : FourRxDivAlwaysOn %d FourRxDivEnable %d fourRxConf %d 
Line 1364: uhal_HmcpHpcm_SkipAntPathConfig : isAGCHold %d
Line 1378: uhal_HmcpHpcm_SkipAntPathConfig : isInit %d numOfAnt %d whichAnt %d
Line 1387: numOfAnt %d whichAnt %d activeStackId=%d
Line 1422:  This combination doesn't support : numOfAnt %d   whichAnt %d 
Line 1570: Invalid  whichAnt %d 
Line 1655: Invalid  whichAnt %d 
Line 1770: Invalid  whichAnt %d 
Line 1821: activeStackId %d ConfigureAntPath invalid 
Line 1824: activeStackId %d numOfAnt %d whichAnt %d 
Line 1846: activeStackId %d RxFilterConfigMode %d FA_Mode %d numOfRxAnt %d
Line 1861: isInit %d isInCMGap %d
Line 1867: Same as previous: numOfAnt %d whichAnt %d 
Line 1870: numOfAnt %d whichAnt %d activeStackId=%d
Line 1894: ConfigureAntPath Set to default. numOfAnt %d whichAnt %d 
Line 1897: Common RF Config Done for Main SIM and SUB SIM
Line 1914: ConfigureAntPath Set to default. numOfAnt %d whichAnt %d 
Line 1917: ConfigureAntPathDRDS activeStackId %d numOfAnt %d whichAnt %d FA_Mode %d
Line 1958: Invalid antenna selection (%d)
Line 1961: Diversity Info: numOfSelectedAnt=%d, selected2ndAnt=%d, diversityInfo=%d 
Line 1988: uhal_HmcpHpcm_MIF_Control config by AP[ST%d] : Changed to MIF_L01
Line 1993: uhal_HmcpHpcm_MIF_Control config by AP[ST%d]: Trying to Change to MIF_BASE
Line 2012: uhal_HmcpHpcm_CPU_CLK_Control_byHSPA config[ST%d] : Changed to CLK_DFS_SVC_PS, MIF_L01
Line 2018: uhal_HmcpHpcm_CPU_CLK_Control_byHSPA config[ST%d] : Trying to Change to MIF_BASE, CLK_DFS_SVC_CS
Line 2042: uhal_HmcpHpcm_CPU_CLK_Control_byIratMeas[ST%d] : Changed to CLK_DFS_SVC_PS, MIF_L01
Line 2048: uhal_HmcpHpcm_CPU_CLK_Control_byIratMeas[ST%d] : Changed to CLK_DFS_SVC_CS, MIF_BASE
Line 2072: uhal_HmcpHpcm_CPU_CLK_Control_byDrPaging : Changed to CLK_DFS_SVC_PS, MIF_L01
Line 2077: uhal_HmcpHpcm_CPU_CLK_Control_byDrPaging : Changed to CLK_DFS_SVC_CS, MIF_BASE
Line 2136: PALCheck Time	- estFrame: %d, estSlot %d, estChips %d
Line 2149: H/W sfn		- hw_sfn	 : %d  hw_slot: %d  hw_chip : %d 
Line 2161: ##**Chip Mismatch ....... TotalChipDiff: %d
Line 2169: ##**Critical Mismatch...Slot:%d, Chip :%d
Line 2185: activeStackId %d SetPowerOnRequest from %d
Line 2195: Service Callback during IRAT
Line 2209: activeStackId %d Umts Active Service now on (%d)
Line 2226: activeStackId %d Cannot happen! there is a error
Line 2235: activeStackId %d Umts Wrong Service 
Line 2250: activeStackId %d uhal_ServiceCallback: Service Not Available: Error = %i
Line 2268: uhal_HmcpHpcm_Client_Init : l1ps_3g_peri_client_id %d ul1ps_client_id %d
Line 2328: Is Pal Timer Running[T/F]=%d, TimerExpire=%d
Line 2343: activeStackId %d zzzz Sleeping: iWaitingTimer %d,  iWaitingDispatch %d, iWaitingSignal %d , iTaken %d
Line 2347: activeStackId %d zzzz Sleeping: SignalNum= %d ,SignalVal= %d
Line 2350: activeStackId %d zzzz Warning iTokensWaitingSignal - %d
Line 2361: activeStackId %d zzzz Sleeping: waitingTimer[ id = %d,Ts = %d, deadline= %d] , cRsn %d, cSFN %d
Line 2366: activeStackId %d zzzz Warning tokenCount - %d
Line 2375: activeStackId %d zzzz Sleeping: waitingDispatch[ id = %d,Ts = %d] , cRsn %d, cSFN %d
Line 2383: activeStackId %d zzzz Warning iTokensWaitingDispatch - %d
Line 2449: activeStackId %d UMTS_MODEM_ALREADY_ON %d UMTS_IRAT_ONGOING_DS %d uhalSleepWaitingTimer_TimerCallback
Line 2470: activeStackId %d uhalSleepWaitingTimer Created!
Line 2474: activeStackId %d uhalSleepWaitingTimer Timing set OK!
Line 2478: activeStackId %d uhalSleepWaitingTimer Timing set Failed!
Line 2483: activeStackId %d uhalSleepWaitingTimer Creation Failed!
Line 2486: activeStackId %d Waiting before modem off: 
Line 2498: Skip smc_EvtReset as UMTS_IRAT_ONGOING_DS = %d && CheckOtherStackPoweredOff(%d) = %d
Line 2523: Set lteTimelatchedFlag = %d
Line 2548: activeStackId %d Umts Active Service now starting,UmodemStatus %d
Line 2555: Not setting Already as this is Second Req from LteUMTS_IRAT_ONGOING_DS %d UMTS_MODEM_ALREADY_ON %d, sleepMode %d, bIrat %d
Line 2579: Reset RAKE
Line 2597: UMTS_IRAT_ONGOING_DS %d UMTS_MODEM_ALREADY_ON %d, sleepMode %d, bIrat %d
Line 2603: isIratModemOn=%d UmodemStatus %d
Line 2616: activeStackId %d uhal_HmcpHpcm_Umts_active_STF
Line 2629: activeStackId %d Freeing up TokenUmtsActiveSTF before issuing a new one
Line 2640: activeStackId %d uhal_HmcpHpcm_trigger_Umts_active_STF
Line 2649: release_Umts_active_STF : SleepDuration %d, bIrat %d
Line 2670: Free up TokenUmtsReleaseSTF before issuing a new one
Line 2682: trigger_release_Umts_active_STF : SleepDuration %d,bIrat %d 
Line 2693: Skip power off [%d %d %d]
Line 2718: Wrong modem status for modem off req
Line 2723: Skip power off IRAT Off without ON 
Line 2731: Skip power off Active RAT Modem OFF without ON 
Line 2739: Skip power off IRAT Off without ON 
Line 2750: Power off 3G modem after IRAT [%d %d %d]
Line 2754: Skip power off during G2U measurment
Line 2771: IRAT power off
Line 2776: uhalSleepWaitingTimer Created!
Line 2779: uhalSleepWaitingTimer Timing set OK!
Line 2783: uhalSleepWaitingTimer Timing set Failed!
Line 2788: uhalSleepWaitingTimer Creation Failed!
Line 2818: Skip smc_EvtReset as UMTS_IRAT_ONGOING_DS = %d && CheckOtherStackPoweredOff(%d) = %d
Line 2822: activeStackId %d [PS] DRX modem off: 
Line 2965: uhal_AsipDownload, UmodemStatus=%d
Line 2992: activeStackId=%d [Monitor] prevRxTime %d, currentPalTime %d, isOn %d, WcdmaRxModeTime %d
Line 3021: activeStackId=%d, [Monitor] txPower %d, prevTxTime %d, currentPalTime %d, isOn %d , WcdmaTxModeTime[%d] %d
Line 3052: [Monitor] WcdmaRxModeTime %d
Line 3068: [Monitor] txModeTime[0] %d,txModeTime[1] %d,txModeTime[2] %d,txModeTime[3] %d,txModeTime[4] %d
