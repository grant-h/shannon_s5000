Line 191: SendCuphyBlindFreqScanReq
Line 435: measurements_intrafrequency_enabled disabled in registry
Line 473: measurements_interfrequency_enabled disabled in registry
Line 642: Ctphy Dedicated Config Send the CPI Update Ind 
Line 915: measurements_intrafrequency_enabled disabled in registry
Line 942: measurements_interfrequency_enabled disabled in registry
Line 969: measurements_quality_enabled disabled in registry
Line 1038: Current CFN: %d, Activation CFN: %d
Line 1053: DsrcMgr_p->T_Wait_ASSignaling failed
Line 1058: DsrcMgr_p->T_Wait_ASSignaling Started (TmId=%d)
Line 1063: Failed to start the AS Signaling Wait timer
Line 1184: Gsm Measurements disabled by registry: measurements_interrat_enabled = %i; RAT_MODE_OPERATION = %i
Line 1213: Gsm Measurements disabled by registry: measurements_interrat_enabled = %i; RAT_MODE_OPERATION = %i
Line 1242: EUTRA Measurements disabled by registry: measurements_interrat_enabled = %i; RAT_MODE_OPERATION = %i
Line 1271: EUTRA Measurements disabled by registry: measurements_interrat_enabled = %i; RAT_MODE_OPERATION = %i
Line 1301: EUTRA Measurements disabled by registry: measurements_interrat_enabled = %i; RAT_MODE_OPERATION = %i
Line 1331: measurements_ueinternal_enabled disabled in registry
Line 1358: measurements_quality_enabled disabled in registry
Line 1385: measurements_ueinternal_enabled disabled in registry
Line 1984: Tx-CTPHY_SIG_START_IND
Line 1990: Tx-CUPHY_SIG_START_IND
Line 2012: Tx-CTPHY_SIG_STOP_IND
Line 2018: Tx-CUPHY_SIG_STOP_IND
Line 2031: Tx-CUPHY_PS_SUPPORT_IND
Line 2037: Tx-CTPHY_PS_SUPPORT_IND
Line 2122: Negative response received [%s][0x%x], Tid = %d
Line 2144: UPHY TID TABLE
Line 2169: ERROR: rrc_BoundUphy_UphyToUrrcMsg MapExtMsgIdToIntMsgId failed for Msg %d
Line 2185: rrc_BoundUphy_UphyToUrrcMsg()-Unregistred %d Msg received
Line 2200: rrc_BoundUphy_UphyToUrrcMsg()-Unregistred %d Msg received
Line 2241: BoundUphy - Unable to register MessageId=%d
Line 2268: rrc_BoundUphy - Unable to de-register MessageId=%d
Line 2274: rrc_BoundUphy - RegistryTablePtr is NULL, MessageId=%d
Line 2293: BoundUphy - Tid %d removed by client
Line 2295: UPHY TID TABLE
Line 2301: BoundUphy - Unregistred or Invalid Tid=%d
Line 2321: BoundUphy - All Tids removed by client %s
Line 2323: UPHY TID TABLE
Line 2329: BoundUphy - Unable to remove all Tids by ClientInstId = %d
Line 2380: %s[0x%x], %s
Line 2416: UPHY TID TABLE
Line 2442: TX -Msg: %s [0x%x] Tid[%d]
Line 2563: Tx-CUPHY_GLOBALCELLID_UPDATE_REQ, %d
Line 2602: RX -Msg: %s [0x%x], TId: [%d]
Line 2697: %s[0x%x], %s
Line 2721: UPHY TID TABLE
Line 2991: SendCtphyFreqRssiScanReq
Line 3009: SendCtphyDetectedFreqScanReq
Line 3078: SendCtphyInterFreqReselInd
Line 3111: START ModifyRLInfo
Line 3113:     CellParamId = %d
Line 3115:     TSTDIndicator = %d
Line 3117:     SCTDindicator = %d
Line 3122:     SecondaryFreq = %d
Line 3126:     SecondaryFreq Not Present
Line 3130: START DL_TDPCHInfo
Line 3132: 	  numCCTrCHtoAdd = %d
Line 3142: 	  tfcsId = %d
Line 3144: 	  isTimeInfopresent = %d
Line 3146: 	  isActivationTimeInfo = %d
Line 3148: 	  ActivationTimeInfo = %d
Line 3150: 	  isdurationTimeInfo = %d
Line 3152: 	  durationTimeInfo = %d
Line 3154: 	  isCommonTSInfopresent = %d
Line 3156:     isTFCICoding = %d, isRepPeriod = %d, InterleavingMode = %d,TFCI_Coding = %d, RepPeriod = %d, RepLength = %d, PuncturingLimit = %d
Line 3162: 
Line 3169: 
Line 3176: 
Line 3184: 
Line 3195: 
Line 3205: 
Line 3213: 	  NumUlCCTrCh_TPC = %d
Line 3220: 
Line 3229: 	  numCCTrCHtoRemove = %d
Line 3233: 
Line 3238: END DL_TDPCHInfo
Line 3239: END ModifyRLInfo
Line 3262: -------------------------------------------------------
Line 3264: rrc_CTPHY_CtphyDedModModifyULDPCH_REQ
Line 3266: UL DPCH INFO :
Line 3268: START UlDpchInfo
Line 3270:     activationTime = %d
Line 3272: Uarfcn = %d,cellParamId = %d
Line 3276:     TimingAdv.stepSize = %d
Line 3278:     TimingAdv.Frequency = %d
Line 3280: TimingAdv.SynchronizationPrams.fpach_Info
Line 3282:     TimeSlot = %d
Line 3284:     ChannelisationCode= %d
Line 3286:     WT = %d
Line 3288:     MidambleShiftandBurst.MidambleAllocationMode = %d
Line 3290:     MidambleShiftandBurst.MidambleConfiguration = %d
Line 3292:     MidambleShiftandBurst.MidambleShift = %d
Line 3294:     isSyncUlProcPresent = %d
Line 3298:     powerRampStep = %d
Line 3300:     MaxSyncUlTrans = %d
Line 3303:     sync_UL_CodesBitmap = %d
Line 3304:     prxUpPCHdes = %i
Line 3308:     isUplinkDpchPowerControlInfo = %d
Line 3312:     UlDpchPowerControlInfo
Line 3314:         isBeaconPLEstPresent = %d
Line 3316:         tpc_StepSize_present = %d
Line 3320:         tpcStepSize = %d
Line 3323:         isUlTargetSIRpresent = %d
Line 3327:         ul_TargetSIR = %d
Line 3331:     numCCtrChCtfc = %d
Line 3335:     index1 %d
Line 3337:     numOfUlCtfc %d
Line 3340:     ulCtfcArray[%d] : %d
Line 3342:     TFCS_ID %d
Line 3346:     index2 %d
Line 3348:         gainFactorType = %d
Line 3350:         TFCIRef =  %d
Line 3352:         betaD = %d
Line 3356:     NumUlCCTrChToAdd = %d
Line 3361:     index1 %d
Line 3363:     tfcsId %d
Line 3365:     ul_TargetSIR %d
Line 3367:     TimeInfo isActivationTimeInfo%d
Line 3369:     TimeInfo ActivationTimeInfo %d
Line 3371:     TimeInfo isdurationTimeInfo %d
Line 3375:     TimeInfo durationTimeInfo %d
Line 3378:     CommonTimeSlotInfo isTFCICoding %d
Line 3380:     CommonTimeSlotInfo isRepPeriod %d
Line 3382:     CommonTimeSlotInfo InterleavingMode %d
Line 3386:     CommonTimeSlotInfo TFCI_Coding %d
Line 3391:     CommonTimeSlotInfo RepPeriod %d
Line 3394:     CommonTimeSlotInfo RepLength %d
Line 3396:     CommonTimeSlotInfo PuncturingLimit %d
Line 3398:     ul_CCTrCH_TimeslotsCodes dynamicSFusage %d
Line 3400:     firstIndividualTimeslotInfo timeslotNumber %d
Line 3402:     firstIndividualTimeslotInfo tfci_Existence %d
Line 3404:     firstIndividualTimeslotInfo MidambleAllocationMode %d
Line 3406:     firstIndividualTimeslotInfo MidambleConfiguration %d
Line 3408:     firstIndividualTimeslotInfo MidambleShift %d
Line 3410:     firstIndividualTimeslotInfo modulation %d
Line 3412:     firstIndividualTimeslotInfo ssTpcSymbols %d
Line 3414:     firstIndividualTimeslotInfo isAdditionalTPCsymbols %d
Line 3418:     firstIndividualTimeslotInfo AdditionalTPCsymbols %d
Line 3421:     ul_CCTrCH_TimeslotsCodes numFirstTSCodes %d
Line 3426:     index2 %d
Line 3428:     firstTimeslotCodeList isPlcch_infoPresent %d
Line 3430:     firstTimeslotCodeList ul_TS_Channelisation_Code %d
Line 3434:     firstTimeslotCodeList PlcchInfo plcchSequenceNumber %d
Line 3436:     firstTimeslotCodeList PlcchInfo timeslotNumber %d
Line 3438:     firstTimeslotCodeList PlcchInfo tpcCommandTargetRate %f
Line 3440:     firstTimeslotCodeList PlcchInfo channelisationCode %d
Line 3444: moreTimeslotInfo
Line 3446:     moreTimeslotInfo isconsecutiveTS %d
Line 3450:     moreTimeslotInfo consecutiveTS %d
Line 3453:     moreTimeslotInfo NumOfAdditionalTimeslots %d
Line 3459:     individualTimeslotInfo timeslotNumber %d
Line 3461:     individualTimeslotInfo tfci_Existence %d
Line 3463:     individualTimeslotInfo MidambleAllocationMode %d
Line 3465:     individualTimeslotInfo MidambleConfiguration %d
Line 3467:     individualTimeslotInfo MidambleShift %d
Line 3469:     individualTimeslotInfo modulation %d
Line 3471:     individualTimeslotInfo ssTpcSymbols %d
Line 3473:     individualTimeslotInfo isAdditionalTPCsymbols %d
Line 3477:     individualTimeslotInfo AdditionalTPCsymbols %d
Line 3481:     numTSCodes  %d
Line 3486:     index3 %d
Line 3488:     timeslotCodeList isPlcch_infoPresent %d
Line 3490:     timeslotCodeList ul_TS_Channelisation_Code %d
Line 3494:     timeslotCodeList PlcchInfo plcchSequenceNumber %d
Line 3496:     timeslotCodeList PlcchInfo timeslotNumber %d
Line 3498:     timeslotCodeList PlcchInfo tpcCommandTargetRate %f
Line 3500:     timeslotCodeList PlcchInfo channelisationCode %d
Line 3507: END rrc_CTPHY_CtphyDedModModifyULDPCH_REQ
Line 3509: -------------------------------------------------------
Line 3542: -------------------------------------------------------
Line 3544: rrc_CTPHY_DedMd_Conf_REQ
Line 3548: ACTIVATION TIME %d
Line 3552: ACTIVATION TIME NOT present
Line 3558: SecondaryFreq = %d
Line 3562: SecondaryFreq NOT present
Line 3574: UARFCN %d
Line 3577: START TRLCommonInfo
Line 3579:     dpchCommonInfo = %d
Line 3583: START DL_TDPCHCmnInfo
Line 3586:     timingIndication = %d
Line 3588:     isDlDpchPowerControlMode = %d
Line 3590:     tpcStepSize = %d
Line 3593: END DL_TDPCHCmnInfo
Line 3596:     TSTD_Indicator = %d
Line 3598:     isDOff = %d
Line 3602:     doff = %d
Line 3605: END TRLCommonInfo
Line 3608: UL DPCH INFO :
Line 3610: START UlDpchInfo
Line 3612:     isTimingAdvpresent = %d
Line 3618:     TimingAdv.stepSize = %d
Line 3620:     TimingAdv.Frequency = %d
Line 3622: TimingAdv.SynchronizationPrams.fpach_Info
Line 3624:     TimeSlot = %d
Line 3626:     ChannelisationCode= %d
Line 3628:     WT = %d
Line 3630:     MidambleShiftandBurst.MidambleAllocationMode = %d
Line 3632:     MidambleShiftandBurst.MidambleConfiguration = %d
Line 3634:     MidambleShiftandBurst.MidambleShift = %d
Line 3636:     isSyncUlProcPresent = %d
Line 3640:     powerRampStep = %d
Line 3642:     MaxSyncUlTrans = %d
Line 3646:     isUplinkDpchPowerControlInfo = %d
Line 3650:     UlDpchPowerControlInfo
Line 3652:         isBeaconPLEstPresent = %d
Line 3654:         tpc_StepSize_present = %d
Line 3658:         tpcStepSize = %d
Line 3661:         isUlTargetSIRpresent = %d
Line 3665:         ul_TargetSIR = %d
Line 3669:     numCCtrChCtfc = %d
Line 3673:     index1 %d
Line 3675:     numOfUlCtfc %d
Line 3678:     ulCtfcArray[%d] : %d
Line 3680:     TFCS_ID %d
Line 3684:     index2 %d
Line 3686:         gainFactorType = %d
Line 3688:         TFCIRef =  %d
Line 3690:         betaD = %d
Line 3694:     NumUlCCTrChToAdd = %d
Line 3699:     index1 %d
Line 3701:     tfcsId %d
Line 3703:     ul_TargetSIR %d
Line 3705:     TimeInfo isActivationTimeInfo%d
Line 3707:     TimeInfo ActivationTimeInfo %d
Line 3709:     TimeInfo isdurationTimeInfo %d
Line 3713:     TimeInfo durationTimeInfo %d
Line 3716:     CommonTimeSlotInfo isTFCICoding %d
Line 3718:     CommonTimeSlotInfo isRepPeriod %d
Line 3720:     CommonTimeSlotInfo InterleavingMode %d
Line 3724:     CommonTimeSlotInfo TFCI_Coding %d
Line 3729:     CommonTimeSlotInfo RepPeriod %d
Line 3732:     CommonTimeSlotInfo RepLength %d
Line 3734:     CommonTimeSlotInfo PuncturingLimit %d
Line 3736:     ul_CCTrCH_TimeslotsCodes dynamicSFusage %d
Line 3738:     firstIndividualTimeslotInfo timeslotNumber %d
Line 3740:     firstIndividualTimeslotInfo tfci_Existence %d
Line 3742:     firstIndividualTimeslotInfo MidambleAllocationMode %d
Line 3744:     firstIndividualTimeslotInfo MidambleConfiguration %d
Line 3746:     firstIndividualTimeslotInfo MidambleShift %d
Line 3748:     firstIndividualTimeslotInfo modulation %d
Line 3750:     firstIndividualTimeslotInfo ssTpcSymbols %d
Line 3752:     firstIndividualTimeslotInfo isAdditionalTPCsymbols %d
Line 3756:     firstIndividualTimeslotInfo AdditionalTPCsymbols %d
Line 3759:     ul_CCTrCH_TimeslotsCodes numFirstTSCodes %d
Line 3764:     index2 %d
Line 3766:     firstTimeslotCodeList isPlcch_infoPresent %d
Line 3768:     firstTimeslotCodeList ul_TS_Channelisation_Code %d
Line 3772:     firstTimeslotCodeList PlcchInfo plcchSequenceNumber %d
Line 3774:     firstTimeslotCodeList PlcchInfo timeslotNumber %d
Line 3776:     firstTimeslotCodeList PlcchInfo tpcCommandTargetRate %f
Line 3778:     firstTimeslotCodeList PlcchInfo channelisationCode %d
Line 3782: moreTimeslotInfo
Line 3784:     moreTimeslotInfo isconsecutiveTS %d
Line 3788:     moreTimeslotInfo consecutiveTS %d
Line 3791:     moreTimeslotInfo NumOfAdditionalTimeslots %d
Line 3797:     individualTimeslotInfo timeslotNumber %d
Line 3799:     individualTimeslotInfo tfci_Existence %d
Line 3801:     individualTimeslotInfo MidambleAllocationMode %d
Line 3803:     individualTimeslotInfo MidambleConfiguration %d
Line 3805:     individualTimeslotInfo MidambleShift %d
Line 3807:     individualTimeslotInfo modulation %d
Line 3809:     individualTimeslotInfo ssTpcSymbols %d
Line 3811:     individualTimeslotInfo isAdditionalTPCsymbols %d
Line 3815:     individualTimeslotInfo AdditionalTPCsymbols %d
Line 3819:     numTSCodes  %d
Line 3824:     index3 %d
Line 3826:     timeslotCodeList isPlcch_infoPresent %d
Line 3828:     timeslotCodeList ul_TS_Channelisation_Code %d
Line 3832:     timeslotCodeList PlcchInfo plcchSequenceNumber %d
Line 3834:     timeslotCodeList PlcchInfo timeslotNumber %d
Line 3836:     timeslotCodeList PlcchInfo tpcCommandTargetRate %f
Line 3838:     timeslotCodeList PlcchInfo channelisationCode %d
Line 3847:     uppchPositionInfo = %d
Line 3851:     isUppchPositionInfo = FALSE
Line 3854: END UlDpchInfo
Line 3857: DLRLInfo :
Line 3863: START RLInfo
Line 3865:     CellParamId = %d
Line 3867:     TSTDIndicator = %d
Line 3869:     SCTDindicator = %d
Line 3874:     SecondaryFreq = %d
Line 3878:     SecondaryFreq Not Present
Line 3882: START DL_TDPCHInfo
Line 3884: 	  numCCTrCHtoAdd = %d
Line 3894: 	  tfcsId = %d
Line 3896: 	  isTimeInfopresent = %d
Line 3898: 	  isActivationTimeInfo = %d
Line 3900: 	  ActivationTimeInfo = %d
Line 3902: 	  isdurationTimeInfo = %d
Line 3904: 	  durationTimeInfo = %d
Line 3906: 	  isCommonTSInfopresent = %d
Line 3908:     isTFCICoding = %d, isRepPeriod = %d, InterleavingMode = %d,TFCI_Coding = %d, RepPeriod = %d, RepLength = %d, PuncturingLimit = %d
Line 3914: 
Line 3921: 
Line 3928: 
Line 3936: 
Line 3947: 
Line 3957: 
Line 3965: 	  NumUlCCTrCh_TPC = %d
Line 3972: 
Line 3981: 	  numCCTrCHtoRemove = %d
Line 3985: 
Line 3990: END DL_TDPCHInfo
Line 3991: END RLInfo
Line 3993: DlInfo numDlCctrch = %d
Line 3997: DlInfo->CCTrCHTFCSArray[%d].numOfDlCtfc = %d
Line 3999: DlInfo->CCTrCHTFCSArray[%d].TFCS_ID = %d
Line 4004: DlCtfc[%d] = %d
Line 4008: NumDlTrChInfos = %d
Line 4014: DLTRCH[%d] = 
Line 4016: START DL_TrChInfo for TDD
Line 4017: trChId = %d
Line 4018: isBlerQualityTarget = %d
Line 4021: blerQualityTarget = %d
Line 4025: trChType = %s(%d)
Line 4029: trChType = Unknown(%d)
Line 4032: START TF_SemiStaticInfo
Line 4033:     tti = %d
Line 4034:     channelCoding = %d
Line 4035:     rateMatchingArgument = %d
Line 4036:     crcSize = %d
Line 4037:     codingRate = %d
Line 4038: END TF_SemiStaticInfo
Line 4042:     (%d*%d)
Line 4046:     Valid TTI=(%d)
Line 4050:     Not valid Dynamic TTI Info present
Line 4058: MaxUlTxPower = %d
Line 4062: MaxUlTxPower = Not present
Line 4065: NumUlTrChInfos = %d
Line 4070: ULTRCH[%d] = 
Line 4072:     trChId = %d
Line 4075:     trChType = %s(%d)
Line 4079:     trChType = Unknown(%d)
Line 4081: START UL TF_SemiStaticInfo
Line 4082:     tti = %d
Line 4083:     channelCoding = %d
Line 4084:     rateMatchingArgument = %d
Line 4085:     crcSize = %d
Line 4086:     codingRate = %d
Line 4087: END TF_SemiStaticInfo
Line 4089: numOfTfTableEntries = %d
Line 4093:     (%d*%d)
Line 4097:     Valid TTI=(%d)
Line 4101:     Not valid Dynamic TTI Info present
Line 4105: END TF_DynamicInfo
Line 4108: END rrc_CTPHY_DedMd_Conf_REQ
Line 4110: -------------------------------------------------------
Line 4132: START HSDSCHConfiguration
Line 4138:     hrnti = 0x%x
Line 4141:     servingHsdschRlPsc = %d
Line 4143:     isHsscchInfo = %d
Line 4147:     numOfHsscch = %d
Line 4155: hsscchInfo[%d].timeslotNumber = %d
Line 4157: hsscchInfo[%d].firstChannelisationCode = %d
Line 4159: hsscchInfo[%d].secondChannelisationCode = %d
Line 4161: hsscchInfo[%d].midambleShiftandBurst.MidambleAllocationMode = %d
Line 4163: hsscchInfo[%d].midambleShiftandBurst.MidambleConfiguration = %d
Line 4165: hsscchInfo[%d].midambleShiftandBurst.MidambleShift = %d
Line 4167: hsscchInfo[%d].blerTarget = %d
Line 4169: hsscchInfo[%d].hssichInfo.timeslotNumber = %d
Line 4171: hsscchInfo[%d].hssichInfo.channelisationCode = %d
Line 4173: hsscchInfo[%d].hssichInfo.midambleShiftandBurst.MidambleAllocationMode = %d
Line 4175: hsscchInfo[%d].hssichInfo.midambleShiftandBurst.MidambleConfiguration = %d
Line 4177: hsscchInfo[%d].hssichInfo.midambleShiftandBurst.MidambleShift = %d
Line 4181:     isPwrCtrlInfo = %d
Line 4189: hsdschUlPcInfo.ackNackPowerOffset = %d
Line 4191: hsdschUlPcInfo.pwrLevelHssich = %d
Line 4193: hsdschUlPcInfo.tpcStepSize = %d
Line 4195: hsdschUlPcInfo.pwrCtrlGap = %d
Line 4197: hsdschUlPcInfo.blerTarget = %d
Line 4199: hsdschUlPcInfo.isPathlossCompensationSwitch = %d
Line 4202:     isHarqInfo = %d
Line 4206:     numOfHarqProcesses = %d
Line 4210:     processMemorySize[%d] = %d
Line 4214:     harqFlushIndicator = %d
Line 4216:     hsdschL1Category = %d
Line 4218:     isMACEhsConfigured = %d
Line 4220:     hsdschL1CategoryExt = %d
Line 4222:     HSPDSCH MidambleAllocationMode = %d
Line 4223:     HSPDSCH MidambleConfiguration = %d
Line 4224:     HSPDSCH MidambleShift = %d
Line 4225: END HSDSCHConfiguration
Line 4245: -------------------------------------------------------
Line 4247: rrc_CTPHY_HSDSCH_Config_REQ
Line 4251: ACTIVATION TIME %d
Line 4255: ACTIVATION TIME NOT present
Line 4268: -------------------------------------------------------
Line 4289: -------------------------------------------------------
Line 4291: rrc_CTPHY_EDCH_Config_REQ
Line 4295: ACTIVATION TIME %d
Line 4299: ACTIVATION TIME NOT present
Line 4303: NewPrimaryErnti = 0x%x
Line 4309: HarqInfoForEdch = Urrc_UphyHarqRvConfiguration_rv0
Line 4313: HarqInfoForEdch = Urrc_UphyHarqRvConfiguration_rvTable
Line 4319: ErucchInfo Start:
Line 4321: 		T-RUCCH = %d  N-RUCCH = %d
Line 4323: 		T-WAIT = %d  T-SI = %d
Line 4327: 		Extended Estimation Window = %d
Line 4332: 		ASC Classes = %d
Line 4336: 		ASC[%d].AvailableSYNC_UlCodesIndics = %d
Line 4338: 			Subchannel size = %d
Line 4340: 			Subchannel = %d
Line 4346: 		sizeOfPerSclFacList = %d
Line 4350: 		PersistenceScalingFactor[%d] = %d
Line 4356: 		PRXUpPCHdes = %d  PowerRampStep = %d
Line 4358: 		MaxSYNC_ULTransmissions = %d  Mmax = %d
Line 4360: 		SYNC_ULcodesbitmap = %d
Line 4365: 		sizeOfPrachInfoList = %d
Line 4369: 	PrachInfo[%d].TimeslotNumbr = %d
Line 4371: 	prachCCListSize= %d
Line 4375: 				  PrachChanCodesList[%d] = %d
Line 4378: 			      MidambleAllocMode = %d
Line 4380: 				  MidambleConf = %d
Line 4382: 				  MidambleShift = %d
Line 4386: 	PrachInfo[%d].FpachInfo.TimeSlotNum = %d
Line 4388: 							ChannelisationCode = %d
Line 4390: 							MidambleAllocMode = %d
Line 4392: 							MidambleConf = %d
Line 4394: 							MidambleShift = %d
Line 4396: 				  FpachInfo.WT = %d
Line 4400: 	PrachInfo[%d].FpachInfo Not Presnt(OP)
Line 4407: 		uppchPositionInfo = %d
Line 4411: 		isUppchPositionInfo = FALSE
Line 4414: ErucchInfo End:
Line 4418: ErucchInfo Not Present:(OP)
Line 4423: EPuchInfo Start:
Line 4428: 	EtfcsInfo.QPSK[%d].RefCodeRate = %d  RefBeta = %d
Line 4434: 	EtfcsInfo.16QAM[%d].RefCodeRate = %d  RefBeta = %d
Line 4440: 	SnplReportType = %d
Line 4443: 	PrxDesBase = %d  BeaconPLEst = %d
Line 4445: 	TpcStepSize = %d  PebasePowerControlGAP = %d
Line 4447:  ULsynchPara: ulSyncStepsize = %d,ulSyncfreqency = %d	
Line 4449:  EpuchTsconfigistSize = %d
Line 4453: epuchTsConfigList[%d]:  TimeSlotNum = %d,midambleAllocMode = %d,midambleConfiguration = %d,midambleShift = %d
Line 4456: MinAllowedCrate = %d,MaxAllowedCrate = %d,MaxNumReTx = %d,ReTxTimerForSchdInfo = %d
Line 4458: EPuchInfo End:
Line 4462: EPuchInfo Not Present:(OP)
Line 4467: NonSheduledTransGrantInfo Start:
Line 4469: 	N_E-UCCH = %d  N_E-HICH = %d
Line 4471: 	TimeslotResourceInfo = %d  PowerResourceInfo = %d
Line 4473: 	ActivationTime = %d  SubframeNumber = %d
Line 4475: 	RepetitionPeriod = %d  RepetitionLength = %d
Line 4477: 	CodeResourceInfo = %d  SigSeqGroupIndex = %d
Line 4479: 	TimeslotNumber = %d  ChannelisationCode = %d
Line 4481: 	T_Si_Nst = %d
Line 4483: 	channelisationCode  = %d ,mAmblAllocMode =%d 
Line 4485: 	midambleConfig =%d ,midambleShift  = %d  
Line 4487: NonSheduledTransGrantInfo End:
Line 4491: NonSheduledTransGrantInfo Not Present:(OP)
Line 4497: PrimaryCCPCHInfoForServingCell Start:
Line 4499: 	cellParamId = %d  TSTDIndicator = %d  SCTDindicator = %d
Line 4501: PrimaryCCPCHInfoForServingCell End:
Line 4505: PrimaryCCPCHInfoForServingCell Not Present:(OP)
Line 4510: EAgchforTdd Start:
Line 4512: 	RdiIndicator = %d  TpcStepSize = %d  eAgchBlerTarget = %d
Line 4514: 	EagchSetConfig: %d Max
Line 4518:   TimeslotNumber = %d  FirstChannelisationCode = %d  SecondChannelisationCode = %d
Line 4520:   MAmbleAllocMode = %d  MidambleConfig = %d  MidambleShift = %d
Line 4523: EAgchforTdd End:
Line 4527: EAgchforTdd Not Present:(OP)
Line 4532: EHichforTdd Start:
Line 4534:   NE-HICH = %d ,maxNumEHICH = %d
Line 4538:   EhichSetConfig[%d]:
Line 4540:    EI = %d  TimeslotNumber = %d  ChannelisationCode = %d
Line 4542:    MAmblAllocMode = %d  MidambleConfig = %d  MidambleShift = %d
Line 4545: EHichforTdd End:
Line 4549: EHichforTdd Not Present:(OP)
Line 4559:  CTPHY BCH RES CONF REQ
Line 4560:     bchId= %d
Line 4561:     uarfcn= %d
Line 4562:     cellParamId= %d
Line 4563:     SCTDindicator= %d
Line 4564:     TSTDIndicator= %d
Line 4575: --------------------------------------------------------------------------------
Line 4576: rrc_CTPHY_RACHResConf_REQ
Line 4579:     maxUlTxPower = %d
Line 4581:     prachPowerOffset.powerRampStep = %d
Line 4582:     prachPowerOffset.maxPreambleRetransission = %d
Line 4584:     prachInfo.SyncULInfo.SyncULCodeBitmap = %d
Line 4585:     prachInfo.SyncULInfo.PRXUpPCHdes = %i
Line 4586:     prachInfo.SyncULInfo.powerRampupStep = %d
Line 4587:     prachInfo.SyncULInfo.MaxSyncULTransmissions = %d
Line 4588:     prachInfo.SyncULInfo.mmax = %d
Line 4589:     prachInfo.SyncULInfo.ERUCCH_SyncUL_Code = %d
Line 4590:     prachInfo.prachFpachCount = %d
Line 4593:     prachInfo.PrachFpach[%d].TimeSlot = %d
Line 4594:     prachInfo.PrachFpach[%d].numOfChannelisationCode = %d
Line 4598:     prachInfo.PrachFpach[%d].ChannelisationCodeList[%d] = %d
Line 4601:     prachInfo.PrachFpach[%d].MidambleShiftandBurst.MidambleConfiguration = %d
Line 4602:     prachInfo.PrachFpach[%d].MidambleShiftandBurst.MidambleShift = %d
Line 4603:     prachInfo.PrachFpach[%d].MidambleShiftandBurst.MidambleAllocationMode = %d
Line 4605:     prachInfo.PrachFpach[%d].FPACHInfo.TimeSlot = %d
Line 4606:     prachInfo.PrachFpach[%d].FPACHInfo.ChannelisationCode = %d
Line 4607:     prachInfo.PrachFpach[%d].FPACHInfo.MidambleShiftandBurst.MidambleAllocationMode = %d
Line 4608:     prachInfo.PrachFpach[%d].FPACHInfo.MidambleShiftandBurst.MidambleShift = %d
Line 4609:     prachInfo.PrachFpach[%d].FPACHInfo.MidambleShiftandBurst.MidambleConfiguration = %d
Line 4610:     prachInfo.PrachFpach[%d].FPACHInfo.WT = %d
Line 4615:     Mapping_Par1 = %d
Line 4617:     pccpchTxPower = %d
Line 4618:     numOfUlCtfc = %d
Line 4632:     %s ulPowerOffsetInfoArray[%d].betaD = %d 
Line 4635:     ulPowerOffsetInfoArray[%d].TfciRef = %d
Line 4639: TFCIRef = Not Applicable
Line 4643:     rachInfo.trChId = %d
Line 4644:     rachInfo.trChType = %d
Line 4645:     rachInfo.semiStaticInfo.tti = %d
Line 4646:     rachInfo.semiStaticInfo.channelCoding = %d
Line 4647:     rachInfo.semiStaticInfo.rateMatchingArgument = %d
Line 4648:     rachInfo.semiStaticInfo.crcSize = %d
Line 4649:     rachInfo.semiStaticInfo.codingRate = %d
Line 4650:     rachInfo.dynamicInfo.numOfTfTableEntries = %d
Line 4651:     rachInfo.dynamicInfo.tfTableEntryArray->tBlockSize = %d
Line 4652:     rachInfo.dynamicInfo.tfTableEntryArray->numOTblocks = %d
Line 4653:     rachInfo.dynamicInfo.tfTableEntryArray->isTTIValid = %d
Line 4654:     rachInfo.dynamicInfo.tfTableEntryArray->TTI = %d
Line 4656:     dlUarfcn = %d
Line 4658:     pccpchInfo.TSTDIndicator = %d
Line 4659:     pccpchInfo.SCTDindicator = %d
Line 4660:     pccpchInfo.cellParamId = %d
Line 4662:     numOfAsc = %d
Line 4666:     accessServiceClassArray[%d].availableSYNC_UlCodesIndicesBitmask = %d
Line 4667:     accessServiceClassArray[%d].subchannelSize.choice = %d
Line 4668:     accessServiceClassArray[%d].subchannelSize.AvailSubChannelBitString = %d
Line 4671: END rrc_CTPHY_RACHResConf_REQ
Line 4672: --------------------------------------------------------------------------------
Line 4684: ---------------------------------------------------------------
Line 4685: rrc_CTPHY_FACHResConf_REQ
Line 4689: START SCCPChInfo
Line 4690: Uarfcn = %d
Line 4691: cellParamId = %d
Line 4692: NumChanCodes = %d
Line 4693: CommonTimeSlotInfo start
Line 4696: TFCI_Coding = %d,RepLength = %d
Line 4701: RepPeriod = %d
Line 4703: InterleavingMode = %d
Line 4704: PuncturingLimit = %d
Line 4705: CommonTimeSlotInfo end
Line 4706: IndividualTimeSlotInfo start
Line 4707: timeslotNumber = %d
Line 4708: modulation = %d
Line 4709: ssTpcSymbols = %d
Line 4712: tfci_Existence is TRUE
Line 4716: tfci_Existence is FALSE
Line 4720: AdditionalTPCsymbols = %d
Line 4722: MidambleAllocationMode = %d,MidambleConfiguration=%d,MidambleShift=%d
Line 4724: IndividualTimeSlotInfo end
Line 4726: Code List started
Line 4727: Code List size == %d
Line 4730: Code List
Line 4732: Code List End
Line 4743: Index %d	= 
Line 4745: START DL_TrChInfo
Line 4747:     trChId = %d
Line 4748: isBlerQualityTarget = %d
Line 4752: blerQualityTarget = %d
Line 4756: trChType = %s(%d)
Line 4760: trChType = Unknown(%d)
Line 4767: START TF_SemiStaticInfo
Line 4768:     tti = %d
Line 4769:     channelCoding = %d
Line 4770:     rateMatchingArgument = %d
Line 4771:     crcSize = %d
Line 4772:     codingRate = %d
Line 4773: END TF_SemiStaticInfo
Line 4775: START TF_DynamicInfo
Line 4779:     (%d*%d)
Line 4783:     Valid TTI=(%d)
Line 4787:     Not valid Dynamic TTI Info present
Line 4792: END TF_DynamicInfo
Line 4793: END DL_TrChInfo
Line 4794: ---------------------------------------------------------------
Line 4798: numOfDlCtfc = %d
Line 4801: dlCtfcArray[%d] = %d
Line 4810: PCH
Line 4812: START DL_TrChInfo
Line 4814:     trChId = %d
Line 4815: isBlerQualityTarget = %d
Line 4819: blerQualityTarget = %d
Line 4823: trChType = %s(%d)
Line 4827: trChType = Unknown(%d)
Line 4834: START TF_SemiStaticInfo
Line 4835:     tti = %d
Line 4836:     channelCoding = %d
Line 4837:     rateMatchingArgument = %d
Line 4838:     crcSize = %d
Line 4839:     codingRate = %d
Line 4840: END TF_SemiStaticInfo
Line 4842: START TF_DynamicInfo
Line 4846:     (%d*%d)
Line 4850:     Valid TTI=(%d)
Line 4854:     Not valid Dynamic TTI Info present
Line 4857: END TF_DynamicInfo
Line 4858: END DL_TrChInfo
Line 4859: ---------------------------------------------------------------
Line 4860: END PCH
Line 4864: PCH NOT present
Line 4868: FACH Occasion
Line 4869: fachOccasionCycleLengthCoef = %d
Line 4870: crntiBitString = %d
Line 4871: END FACH Occasion
Line 4875: FACH Occasion NOT present
Line 4877: END rrc_CTPHY_FACHResConf_REQ
Line 4878: ---------------------------------------------------------------
