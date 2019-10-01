Line 282: BurstIndex(%d) SACCH(%d) IQflag(%d) SoftSum(%d) TO(%d) FO(%d)]
Line 288: NB IQ [312SYM], [TCH][PRX] BurstIndex : 0 
Line 292: NB IQ [312SYM], [TCH][PRX] BurstIndex : 1 
Line 296: NB IQ [312SYM], [TCH][PRX] BurstIndex : 2 
Line 300: NB IQ [312SYM], [TCH][PRX] BurstIndex : 3 
Line 307: NB IQ [312SYM], [TCH][DRX] BurstIndex : 0 
Line 311: NB IQ [312SYM], [TCH][DRX] BurstIndex : 1 
Line 315: NB IQ [312SYM], [TCH][DRX] BurstIndex : 2 
Line 319: NB IQ [312SYM], [TCH][DRX] BurstIndex : 3 
Line 326: NB IQ [312SYM], [TCH][PRX] BurstIndex : 0 
Line 327: NB IQ [312SYM], [TCH][DRX] BurstIndex : 0 
Line 331: NB IQ [312SYM], [TCH][PRX] BurstIndex : 1 
Line 332: NB IQ [312SYM], [TCH][DRX] BurstIndex : 1 
Line 336: NB IQ [312SYM], [TCH][PRX] BurstIndex : 2 
Line 337: NB IQ [312SYM], [TCH][DRX] BurstIndex : 2 
Line 341: NB IQ [312SYM], [TCH][PRX] BurstIndex : 3 
Line 342: NB IQ [312SYM], [TCH][DRX] BurstIndex : 3 
Line 348: CIPHERGO STREAM 
Line 352: CIPHERGO STREAM 
Line 357: NB IQ [312SYM], [SACCH][PRX] : 
Line 358: NB IQ [312SYM], [SACCH][DRX] : 
Line 444: HR: RxLev_Sub %d
Line 474: VamosDetectionFlag(%d)
Line 502: WARNING, BIG DC OFFSET in SS222AP 
Line 507: [SAIC] Put rxTdsSet_p->eqTds Arfcn [%d] Rssi [%d] Snir [%d] DiagCoeff[%x] 
Line 512: [SAIC] Put arfcnsaicdata_p Arfcn [%d] Rssi [%d] Snir [%d] DiagCoeff[%x] 
Line 551: FACCH FR Block[%d] metrics FO:0x%08x TO:0x%08x RSSI:0x%08x BitErr:0x%08x SoftDec:0x%08x
Line 580: FACCH HR Block[%d] metrics FO:0x%08x TO:0x%08x RSSI:0x%08x BitErr:0x%08x SoftDec:0x%08x
Line 666: [GL1 Error] ProcessNbResults: EQ TNC status = %x, Address = %x
Line 697: Task ID = %d; V0_STATUS = %d,  CR = %d, V0_CR = %d 
Line 744: FirstGoodFrame=%d, TestModeRssi=%d, TestBerRssiGap=%d, TEST_13FN_MOD_NUM=%d, TEST_13FN_MOD_IDLE=%d 
Line 752: TCH_SACCH Burst:%d FO:%d TO:%d RSSI:%d BitErr:%d SoftDec:%d ARFCN=%d
Line 783: [Result] CS EQ eqTds dihandle [0x%x] rxhandle [0x%x] agchandle[0x%x] address [0x%x] command[0x%x]
Line 786: Burst:%d FO:%d TO:%d RSSI:%d BitErr:%d SoftDec:%d ARFCN=%d
Line 797: errorCount:%d 
Line 808: RSSI LowIF Flag : TRUE, RSSI: %d
Line 819: [Dedi][eqTds Config] command(0x%x), channel(0x%x), diHandle(0x%x), RxDiversityMode(%d), SimFlag(0x%x), TSC(%d), burstIndex(%d)
Line 820: [Dedi][EQ Result][PRX] measuredY(%d), usedGain(%d), RSSI(%d) [DRX] measuredY(%d), usedGain(%d), RSSI(%d), [Combining] path_valid(%d)
Line 821: [Dedi][EQ Result][SAIC] CCI(%d), AsyncCci(%d), SaicStatusFlag(%x), EnableMultEQ(%d), softsum_1st(%d), softsum_2nd(%d), sdTotal(%d)
Line 822: [Dedi][EQ Result] CIRatio(%d), diag_coeff(%d), cutoff(%d), ACI(%d),PreProcessingTime(%d),MainProcesingTime(%d), LteCci(%d)
Line 823: [Dedi][EQ Result] BurstCnt(%d), EqFeedback_CE(%d), VAMOS(%d), VAMOS_SCPIR(%d), eqCir_diff_val_1st(%d), eqCir_diff_val_2nd(%d)
Line 824: [Dedi][EQ ASIP1] DemodInfo(%x), ChanType(%x), RssiGain(%x), BmdAcc(%x), derotFreq(%x), FullScaleAdc(%x), CiRatio(%x)
Line 825: [Dedi][EQ ASIP2] MicDiagCoeff(%x), ,MicRssiDbm(%x), MicAvgSinr(%x), FilteredCIRatio(%x), VamosThr(%x), reserved1(%x), reserved2(%x)
Line 828: [Dedi][SACCH][eqTds Config] command(0x%x), channel(0x%x), diHandle(0x%x), RxDiversityMode(%d), SimFlag(0x%x), TSC(%d), burstIndex(%d)
Line 829: [Dedi][SACCH][EQ Result][PRX] measuredY(%d), usedGain(%d), RSSI(%d) [DRX] measuredY(%d), usedGain(%d), RSSI(%d), [Combining] path_valid(%d)
Line 830: [Dedi][SACCH][EQ Result][SAIC] CCI(%d), AsyncCci(%d), SaicStatusFlag(%x), EnableMultEQ(%d), softsum_1st(%d), softsum_2nd(%d), sdTotal(%d)
Line 831: [Dedi][SACCH][EQ Result] CIRatio(%d), diag_coeff(%d), cutoff(%d), ACI(%d),PreProcessingTime(%d),MainProcessingTime(%d), LteCci(%d)
Line 832: [Dedi][SACCH][EQ Result] BurstCnt(%d), EqFeedback_CE(%d), VAMOS(%d), VAMOS_SCPIR(%d), eqCir_diff_val_1st(%d), eqCir_diff_val_2nd(%d)
Line 833: [Dedi][SACCH][EQ ASIP1] DemodInfo(%x), ChanType(%x), RssiGain(%x), BmdAcc(%x), derotFreq(%x), FullScaleAdc(%x), CiRatio(%x)
Line 834: [Dedi][SACCH][EQ ASIP2] MicDiagCoeff(%x), ,MicRssiDbm(%x), MicAvgSinr(%x), FilteredCIRatio(%x), VamosThr(%x), reserved1(%x), reserved2(%x)
Line 840: [F]!!!!!!!!!!!! EQ_ASIP_ABORT(status: %x) !!!!!!!!!!!! 
Line 841: [F]eqTds.channel(%x), asipDownloadStatus(%x)
Line 847: Burst:%d
Line 856: filteredCIRatio:%d, carrierToInterferenceRatio:%d
Line 860: carrierToInterferenceRatio:%d
Line 932: Block metrics FO:0x%08x TO:0x%08x RSSI:0x%08x BitErr:0x%08x SoftDec:0x%08x
Line 982: L1CfgAntSwitchingInitWithoutAnt sqnb
Line 988: L1CfgAntSwitchingInit sqnb
Line 1075: ifDedEst = %d, decodedOk = %d
Line 1076: The repetition Index (%d), repeated_sacch_index-%d if Second SACCH decode (%d)
