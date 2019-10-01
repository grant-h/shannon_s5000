Line 134: uhal_CHmcpHsdpaDlEqualizerConfig_free: SettleTImeToken set to NULL
Line 243: HicDataDescrambler: scr_pn_state=0x%x, eq_sinr_bit_sel=0x%x, mjt_gain_comp_off=0x%x iai_scal_comp_off=0x%x cross_ant_ic=0x%x addback_bitsel=0x%x maj_tap_gain_shift=0x%x
Line 256: HicPNState: PriServingScrCodeGenInitState 0x%x SecServingScrCodeGenInitState 0x%x
Line 345: activeStackId %d ##### HIC_enable %d #####
Line 352: [EQconfig] RxDiv=%d TxDiv=%d Reconfig=%d eqMode=%d SCscr=%d hsdpaDlRlNr=%d
Line 355: [EQconfig] PHY eq_init_flag=%d
Line 385: activeStackId %d [RxDiv][DSP] rxDivOn=%d preRxDiv=%d secondRfOffIndicator=0x%x
Line 390: activeStackId %d [RxDiv][DSP] Rx div off -> on secondRfOffIndicator=0x%x
Line 402: activeStackId %d [RxDiv][UHAL] Rf Settle Time Token start
Line 413: activeStackId %d [RxDiv][UHAL] Release in RF paused state, Don't launch RF settle Time Token
Line 423: activeStackId %d [RxDiv][DSP] Rx div on -> off secondRfOffIndicator=0x%x
Line 430: activeStackId %d [RxDiv][UHAL] RxDiv on ---->>>>> RxDiv off
Line 443: activeStackId %d [RxDiv][DSP] rxDivOn=%d preRxDiv=%d secondRfOffIndicator=0x%x
Line 450: activeStackId %d [RxDiv][DSP] Rx div off -> on secondRfOffIndicator=0x%x
Line 462: activeStackId %d [RxDiv][UHAL] Rf Settle Time Token start
Line 473: activeStackId %d [RxDiv][UHAL] Release in RF paused state, Don't launch RF settle Time Token
Line 484: activeStackId %d [RxDiv][DSP] Rx div on -> off secondRfOffIndicator=0x%x
Line 491: activeStackId %d [RxDiv][UHAL] RxDiv on ---->>>>> RxDiv off
Line 507: activeStackId %d [uhal_CHmcpHsdpaDlEqualizerConfig_request] fingersStr 0x%x, lockStatus 0x%x, UPHY eq_init_flag %d
Line 514: activeStackId %d [uhal_CHmcpHsdpaDlEqualizerConfig_request] fingersStr 0x%x, lockStatus 0x%x, UPHY eq_init_flag %d
Line 595: activeStackId %d [uhal_CHmcpHsdpaDlEqualizerConfig_request] rxDivEnable %d, only 2nd antenna fingers are locked : fingersStr 0x%x, lockStatus 0x%x
Line 759: activeStackId %d Adjust EQ position: eq_ref_postion = %d
Line 770: activeStackId %d eq_init_flag: %d
Line 1148: activeStackId %d eqType =  %d
Line 1161: [Type-3i] serving cell changed(prvServingCellScrCode=%d, servingCellScrCode=%d
Line 1172: ### HIC pri_scr_code_state %d pri_scr_code %d
Line 1179: pri_scr_code_state %d pri_scr_code %d sec_scr_code_state %d sec_scr_code %d
Line 1218: updateCnt=%d prvServingCellScrCode=%d servingCellScrCode=%d eq_init_flag=%d
Line 1244: txDivRscp=%d txDivMetric=%d txDivRscpForDc=%d txDivMetricForDc=%d isSecondaryCell=%d
Line 1259: FA2 SCH-IC is not yet measured: txDivRscp=%d txDivMetric=%d txDivRscpForDc=%d txDivMetricForDc=%d isSecondaryCell=%d
Line 1269: txDivRscp=%d txDivMetric=%d txDivRscpForDc=%d txDivMetricForDc=%d isSecondaryCell=%d
Line 1298: hsdpaEqualizerNr : %d, hclp_serving_pn_packp[%d]=0x%x, hclp_serving_pn_packp[%d]=0x%x 
Line 1325: hclp_serving_pn_packp[0]=0x%x hclp_serving_pn_packp[1]=0x%x hclp_serving_pn_packp[2]=0x%x hclp_serving_pn_packp[3]=0x%x
Line 1398: [IPC:IPC_CONSUMER_ACTION_ID_HS_DL_EQUALIZER_CONFIG_REQUEST] execution=%d
Line 1408: prvServingCellScrCode=%d, servingCellScrCode=%d, eq_init_flag=%d, dpchFrameOffset (256 chipset unit) = %d
Line 1560: [RxDiv][UHAL] RxDiv off ---->>>>> RxDiv on after RF Settle
Line 1582: activeStackId %d finger_update_flag = %d eq_init_flag %d So finger position is not transfered to DSP
Line 1655: fingersStr %d fingerInx=%d fingerEnergy=%d, fingerInfoPack=%d lockStatus=%d sceIdx=%d fingerPos=%d
Line 1818: SetEqCellInfo:  %d, isValidCell=%d, PscrCode=%d, cpichRscp=%d
Line 1825: SetEqCellInfo:  %d, isValidOffset=%d, mpOffset=%d, mpEng=%d
Line 1883: SetEqCellInfo FA2:  %d, isValidCell=%d, PscrCode=%d, cpichRscp=%d
Line 1890: SetEqCellInfo FA2:  %d, isValidOffset=%d, mpOffset=%d, mpEng=%d
Line 1948: SetEqCellInfo:  %d, isValidCell=%d, PscrCode=%d, cpichRscp=%d
Line 1955: SetEqCellInfo:  %d, isValidOffset=%d, mpOffset=%d, mpEng=%d
Line 2024: SetEqCellInfo FA2:  %d, isValidCell=%d, PscrCode=%d, cpichRscp=%d
Line 2031: SetEqCellInfo FA2:  %d, isValidOffset=%d, mpOffset=%d, mpEng=%d
Line 2088: SetEqCellInfo FA3:  %d, isValidCell=%d, PscrCode=%d, cpichRscp=%d
Line 2095: SetEqCellInfo FA3:  %d, isValidOffset=%d, mpOffset=%d, mpEng=%d
Line 2442: Invalid Configuration with configuredEqNum =  %d
Line 2711: Invalid Configuration with configuredEqNum =  %d
Line 2714: eqType =  %d
Line 2757: activeStackId %d ServingScrCodeGenInitState %d, ServingScrCodeGroup[index %d] = 0x%x, psc code %d
Line 2805: ### HIC [index %d] ServingScrCodeGenInitState 0x%x, psc code %d, hclp_serving_pn_pack[%d] 0x%x,hclp_serving_pn_pack[%d] 0x%x 
Line 2816: activeStackId %d ### hclp_dc_div_config %d, hclp_4c_div_config %d, hclp_schic_config %d
Line 2859: [index %d, ordered index %d] txDivRscp=%d txDivMetric=%d tempCpichSchPwr %d
Line 2873: [To consider rollback procedure]  PrimaryEqualizerConfig_ptr 0x%x
Line 2888: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	f_execution =	%d
Line 2889: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	f_group =	%d
Line 2935: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	cpc_drx_tau_dpch	=	%d
Line 2936: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_eq_init_release	=	%d
Line 2937: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_dc_div_config	=	%d
Line 2942: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_serving_pn_pack[NUM_SERVING_PN]	=	%d
Line 2945: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_schic_config	=	%d
Line 2946: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_fa0_schic_measure	=	%d
Line 2947: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_fa1_schic_measure	=	%d
Line 2952: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	cqi_gamma	=	%d
Line 2953: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	loopbackMode	=	%d
