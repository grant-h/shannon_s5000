Line 236: --------------------------------------------------
Line 238: START rrc_CTMAC_ConfEDCH_REQ
Line 240: ActTime = %d
Line 244: PrimaryErntiConfigured = TRUE,Primary Ernti = %d
Line 248: PrimaryErntiConfigured = FALSE
Line 253: MacEsResetIndicator = TRUE
Line 257: MacEsResetIndicator = FALSE
Line 260: NoEdchMacdFlow = %d
Line 266:     EdchMacdFlowList[%d].EdchMacdFlowIdPresent = %d
Line 268:     EdchMacdFlowList[%d].EdchMacdFlowId = %d
Line 270:     EdchMacdFlowList[%d].EdchMacdFlowPowerOffset = %d
Line 272:     EdchMacdFlowList[%d].EdchMacdFlowMaxNoOfRetrans = %d
Line 274:     EdchMacdFlowList[%d].mac_d_FlowRetransTimer = %d
Line 276:     EdchMacdFlowList[%d].EdchMacdFlowMultiplexList = 0x%X
Line 280:     EdchMacdFlowList[%d].TGrantInfo = SCHEDULED_GRANT
Line 284:     EdchMacdFlowList[%d].TGrantInfo = TDD Error 
Line 293:  EPuchInfo Start: 
Line 295:    minAllowedCRate = %d,maxAllowedCRate = %d,maxNumOfReTx = %d,reTxTimerOfSchedInfo = %d
Line 299:  NumOfRefBetaQpsk: %d 
Line 303:  refBetaQPSKRefCodeRate[%d] = %d,refBetaQPSKRefBeta[%d] = %d 
Line 306:  NumOfRefBeta16QAM: %d 
Line 310:  refBeta16QamRefCodeRate[%d] = %d,refBeta16QamRefBeta[%d] = %d 
Line 315:     EPuchInfo End 
Line 319:  isEPuchInfoPresent = FALSE 
Line 324:  ERucchInfo Start: 
Line 326:  t_RUCCH = %d,n_RUCCH = %d,t_Wait =%d,t_SI =%d 
Line 330:  Extended_estimation_window = %d 
Line 334:  Extended_estimation_window Not Present(OP) 
Line 339:  SyncULInfo.mmax = %d 
Line 343:  SyncULInfo Not Present(OP) 
Line 348:  ErucchAsc[%d] availableSYNC_UlCodesIndics = %d,subchannelsize = %d,subchannels = %d
Line 352:  ERucchInfo End 
Line 356:  isErucchInfoPresent = FALSE 
Line 361:  NonSheduledGrantInfo Start: 
Line 363:  TimeslotResourceInfo = %d,PowrResourceInfo = %d,SfnNum = %d 
Line 365:  RepetPeriod = %d,RepetLength = %d,CodeResourceInfo = %d 
Line 369:  TSiNst = %d 
Line 373:  TSiNst Not Present(OP) 
Line 376:  NonSheduledGrantInfo End 
Line 380:  isNonSheduledGrant = FALSE 
Line 385:  EdchInfoPresent = FALSE 
Line 388: END rrc_CTMAC_ConfEDCH_REQ
Line 389: --------------------------------------------------
Line 497: measurements_trafficvolume_enabled disabled in registry
Line 524: measurements_trafficvolume_enabled disabled in registry
Line 877: UMAC TID TABLE
Line 895: ERROR: rrc_BoundUmac_UmacToUrrcMsg MapExtMsgIdToIntMsgId failed for MsgId %d
Line 911: rrc_BoundUmac_UmacToUrrcMsg()-Unregistered %d Msg received
Line 926: rrc_BoundUmac_UmacToUrrcMsg()-Unregistered %d Msg received
Line 949: BoundUmac - Tid %d removed by client
Line 951: UMAC TID TABLE
Line 957: BoundUmac - Unregistred or Invalid Tid=%d
Line 987: BoundUmac - Unable to register MessageId=%d
Line 1007: BoundUmac - All Tids removed by client %s
Line 1009: UMAC TID TABLE
Line 1015: BoundUmac - Unable to remove all Tids by ClientInstId = %d
Line 1065: %s[0x%x], %s
Line 1094: MAC TID TABLE
Line 1120: TX -Msg: %s [0x%x] Tid[%d]
Line 1152: RX -Msg: [%s][0x%x], TId:[%d]
Line 1210: %s[0x%x], %s
Line 1232: MAC TID TABLE
