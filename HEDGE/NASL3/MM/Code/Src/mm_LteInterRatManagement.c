Line 132: mm_DecodeMmcMobCmdToIratReqMsg: type(%d) srvcc(%d)
Line 135: IsLimitedService: %d
Line 247: mm_DecodeMmcMobCmdToIratReqMsg: invalid CASE (%d)
Line 252: mm_DecodeMmcMobCmdToIratReqMsg: NOT IMPLEMENTED CASE (%d)
Line 261: mm_DecodeMmcMobCmdToIratReqMsg: mm_MmcLteHedgeRatChangeCause = %d
Line 267: mm_SendMmcMobCmdToIratCnfMs: Result = %d
Line 270: Handover Done So delete the Handover Info received from MMC.
Line 304: Sending MMC Redirection  Result = %d
Line 308: Unable to Allocate memory.
Line 319: mm_SendRrPsHandoverReqMsg  HO  To -> %s
Line 329: handover_to_umts.umts_ho_container.length: %d
Line 393: Uldata  NSAPI 5= %d, NSAPI 6=%d
Line 424: Error!!! Unable to allocate memory 
Line 429: [MM] Given afcPdmValue = %d, mm_afcPdmValue = %d
Line 430: [MM] Given numOfCandidateCells = %d, mm_numOfCandidateCells = %d
Line 444: [MM] Given candidateCellInfo[%d].arfcn = 0x%x, bsic = 0x%x, frameNumber = 0x%x, Qb = 0x%x, net_frameNumber = 0x%x
Line 456: Error!!! Unable to allocate memory 
Line 474: 
Line 477: 
Line 479: 
Line 512: SRVCC call was requested but L2U_PS only happened. MM will inform SRVCC failure to CC. 
Line 536: PSHO+CSFB, Call Status is TRUE, Take CS CALL Grant Locally, since EMM/GMC has aquired the grant already
Line 541: PSHandover+CSFB : Aquire Grant, %d 
Line 545: CS Procedure is DSDS CS CALL Already
Line 577: SRVCC call success. We will do LAU once CS transaction is over in NMO II
Line 604: QRB is triggered about L2U SRVCC HO
Line 639: QRB is triggered about L2U SRVCC HO
Line 664: PSHO+CSFB, Call Status is TRUE, Take CS CALL Grant Locally, since EMM/GMC has aquired the grant already
Line 669: PSHandover+CSFB : Aquire Grant, %d 
Line 673: CS Procedure is DSDS CS CALL Already
Line 707: PSHO+CSFB, Call Status is TRUE, Take CS CALL Grant Locally, since EMM/GMC has aquired the grant already
Line 712: PSHandover+CSFB : Aquire Grant, %d 
Line 716: CS Procedure is DSDS CS CALL Already
Line 760: Set MMC Handover to 2G3G Info
Line 765: ======= SRVCC HO 2G3G ncells information from LTE =======
Line 766: Number of neighbor cells = %d
Line 778: UARFCN = 0x%x, CELL_ID = 0x%x, Time offeset = 0x%x 
Line 799: Error !!!! Unable to  allocate memroy :mm_SetMmcHandover2G3GInfo
Line 826: Error !!!! Unable to  allocate memroy :mm_SetMmcHandover2G3GInfo
Line 853: Error !!!! Unable to  allocate memroy :mm_SetMmcHandover2G3GInfo
Line 861: Copying L2G CCO info: 
Line 877: ReSet MMC Handover to 2G3G Info
Line 955: In  mm_DecodeMmcLteTo2G3GUeCapaReqMsg, RAT : 0x%x
Line 964: Requesting GERAN_CS : No action (TBD)
Line 969: Requesting GERAN_PS : No action (TBD)
Line 986: mm_SendUrrcMmInterRatHandoverInfoReqMsg....
Line 1018: mm_DecodeUrrcMmInterRatHandoverInfoCnfMsg....
Line 1019: targetRatInfo = %d
Line 1020: HandoverInfoLength = %d
Line 1025: mm_DecodeUrrcMmInterRatHandoverInfoCnfMsg: requested for HEDGE RAU procedures...
Line 1064: mm_DecodeUrrcMmUeCapaIndMsg.... 
Line 1084: mm_SendMmc2G3GToLteUeCapaReq.... 
Line 1113: mm_DecodeMmc2G3GToLteUeCapaCnfMsg...., Target RAT : %d
Line 1157: mm_SendUrrcMmUeCapaRspMsg.... 
Line 1199: 
Line 1213: Entered Funtion mm_DecodeUrrcMmHandoverFromUtranIndMsg... Target RAT : %d
Line 1219: Call is on, so discarding HO request
Line 1247: Wrong Target RAT
Line 1308: Warning : Temporarily implemented
Line 1356: Warning : Unable to allocate memory for String-S and Kasme
Line 1373: Sending MmcHoToLteReqMsg (Encoding length : %d)
Line 1398: Entered Funtion mm_DecodeHoToLteCnfMsg... Type : %d, Result : %d
Line 1531: Error!!! Unable to allocate Memory mm_SetUtraninfoData....
Line 1545: Entered Funtion mm_SendMmcLteTo2G3GUeCapaCnfMsg... TargetRat : %d
Line 1597: Warning : TargetRat is not proper...
