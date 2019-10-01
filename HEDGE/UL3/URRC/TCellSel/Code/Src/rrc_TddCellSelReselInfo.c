Line 304: rrc_TddCellSelReselInfo_GetR:PccpchRscp RSCP(%d) Rvalue(%d)
Line 309: rrc_TddCellSelReselInfo_GetR:PccpchRscp RSCP(%d)
Line 353: rrc_TddCellSelReselInfo_GetH:HValue(%i)
Line 355: rrc_TddCellSelReselInfo_GetH:TddCellSelReselInfo_p->PccpchRscp = %d TddCellSelReselInfo_p->DeltaPccpchRscp = %d
Line 356: rrc_TddCellSelReselInfo_GetH:MAP_PCCPCHRSCP(TddCellSelReselInfo_p->PccpchRscp+TddCellSelReselInfo_p->DeltaPccpchRscp) = %d
Line 357: rrc_TddCellSelReselInfo_GetH:MAP_PCCPCHRSCP(TddCellSelReselInfo_p->common.Qhcs) = %d TddCellSelReselInfo_p->common.Qhcs = %d
Line 358: rrc_TddCellSelReselInfo_GetH:TddCellSelReselInfo_p->common.TempOffset1 = %d TOn = %d, Ln = %d, Tn = %d
Line 378: rrc_TddCellSelReselInfo_GetH:HValueP(%i)
Line 380: rrc_TddCellSelReselInfo_GetH:TddCellSelReselInfo_p->PccpchRscp = %d TddCellSelReselInfo_p->DeltaPccpchRscp = %d
Line 381: rrc_TddCellSelReselInfo_GetH:MAP_PCCPCHRSCP(TddCellSelReselInfo_p->PccpchRscp+TddCellSelReselInfo_p->DeltaPccpchRscp) = %d
Line 382: rrc_TddCellSelReselInfo_GetH:MAP_PCCPCHRSCP(TddCellSelReselInfo_p->common.Qhcs) = %d TddCellSelReselInfo_p->common.Qhcs = %d
Line 383: rrc_TddCellSelReselInfo_GetH:TddCellSelReselInfo_p->common.TempOffset1 = %d TOn = %d, Ln = %d, Tn = %d
Line 447: rrc_TddCellSelReselInfo_RefreshTnTimerStatus: Tn timer not started for the ServingCell =%d 
Line 450: rrc_TddCellSelReselInfo_RefreshTnTimerStatus: TnTimerId =%d 
Line 462: Starting Tn timer for Tdd Cell:(%i,%i) HcsPrioN(%i) != HcsPrioS(%i) and QMeasn(%i) >= Qhcsn(%i) 
Line 473: Stopping Tn timer for Tdd Cell:(%i,%i) HcsPrioN(%i) != HcsPrioS(%i) and QMeasn(%i) >= Qhcsn(%i) 
Line 493: Starting Tn timer for Tdd Cell:(%i,%i) HcsPrioN(%i) == HcsPrioS(%i) and QMeasn(%i) > QMeasS(%i) + Qoffsetsn(%i)
Line 504: Stopping Tn timer for Tdd Cell:(%i,%i) HcsPrioN(%i) == HcsPrioS(%i) and QMeasn(%i) <= QMeasS(%i) + Qoffsetsn(%i)
Line 521: Started Tn timer for Tdd Cell:(%i,%i) 
Line 529: Tn timer for Tdd Cell:(%i,%i) is not started as  PenaltyTime is ZERO
Line 542: Stopped Tn timer for Tdd Cell:(%i,%i) 
Line 795: Cell (%i,%i) : Srxlev : %i, RSCP : %i dBm, PCompensation : %i dB
Line 862: UmtsCellSelectionMeasurement: Config message add cell:(%i,%i)
Line 901: ERROR: Already actioning a request
Line 912: ERROR Illegal State
Line 935: ERROR: Already actioning a request
Line 979: %s: Prepare subscription to MIB, Id(%i)
Line 1004: ERROR Illegal State
Line 1062: [URRC_ANR]: NotActive_AbortSibRead
Line 1087: MibId is Ok in ReadingMib_RecvMib
Line 1114: MibId is NULL in ReadingMib_RecvMib
Line 1143: ERROR Illegal State
Line 1194: Received Rscp = %d, Snr = %i
Line 1200: Received DeltaRscp = %i.
Line 1211: ERROR Illegal State
Line 1230: [rrc_TddFrequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Negative confirmation
Line 1241: [rrc_TddFrequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - confirmation
Line 1330: Unexpected Sib with Id (%i)  received
Line 1392: ReadingValidSibs_RecvMib : MIB V-tag changed, give-up this cell
Line 1396: ReadingValidSibs_RecvMib : MIB V-tag changed, Nothing to do
Line 1426: [URRC BCH in DCH]: ReadingValidSibs_BchReadError received
Line 1432: ReadingValidSibs_BchReadError is ignored during SibReadingPause
Line 1480: ReadingValidSibs_RecvSib SIB1 received
Line 1488: ReadingValidSibs_RecvSib SIB3 received
Line 1496: ReadingValidSibs_RecvSib Unexpected SibId (%i)
Line 1516: ReadingValidSibs_RecvSib - All Necessary SIBs received
Line 1520: ReadingValidSibs_RecvSib:Calling SIB subscription Cancellation in ReadingSchedulingBlock_RecvMib after successfull SIB read
Line 1543: ReadingValidSibs_RecvSib: Cancel SIB(%d)
Line 1591: [URRC BCH in DCH]: ReadingValidSibs_AbortSibRead
Line 1600: [URRC BCH in DCH]: ERROR Illegal State in ReadingValidSibs_AbortSibRead
Line 1627: ReadingValidSibs_SibSubscriptionCanceled : SibReadingResult(%d) received
Line 1638: ReadingValidSibs_SibSubscriptionCanceled : unknown SibReadingResult %d received
Line 1656: [URRC BCH in DCH]: AbortingSibRead_SibSubscriptionCanceled received
Line 1695: ReadingSchedulingBlock_RecvMib  Num_SharedPLMNs:%d
Line 1701: ReadingSchedulingBlock_RecvMib entered PlmnId: 0x%02X, 0x%02X, 0x%02X
Line 1715: ReadingSchedulingBlock_RecvMib Cell Not Shared Read PlmnId: 0x%02X, 0x%02X, 0x%02X  to head of the list
Line 1738: ReadingSchedulingBlock_RecvMib:Calling SIB subscription Cancellation in ReadingSchedulingBlock_RecvMib after successfull SIB read
Line 1761: ReadingSchedulingBlock_RecvMib: Cancel SIB(%d)
Line 1786: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 1794: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 1801: ReadingSchedulingBlock_RecvMib : MibId is NULL in ReadingValidSibs_RecvMib
Line 1853: [URRC BCH in DCH]: ProcessSib1 called
Line 1862: [URRC BCH in DCH]: ProcessSib1 CS Domain
Line 1870: [URRC BCH in DCH]: ProcessSib1 PS Domain
Line 1879: [URRC BCH in DCH]: ProcessSib1 IsLacPresent:%d, LacId:%d, IsRacPresent:%d, RacId:%d
Line 1911: ProcessSib3 called CGI:%d
Line 1943: ERROR Illegal State
Line 2083: [TddCellSelReselInfo] Created (CellParamId %d, Freq %d)
Line 2137: Invalid InterFreqCell frequency value (%i)
Line 2143: Invalid InterFreqCell frequency value (%i)
Line 2162: TddNetworkCacheInst is NULL (%i)
Line 2230: {%i} Cell (Freq: %i, Cpich: %i): Rn (Rscp) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 2242: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB - ( TOn(%i) * ( 1 - Ln(0) ) )
Line 2250: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB - ( TOn(%i) * ( 1 - Ln(1) ) )
Line 2259: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB
Line 2268: {%i} Cell (Freq: %i, cellParamId: %i): Rn (Rscp) = %i
Line 2319: {%i} Cell (Freq: %i, cellParamId: %i): HCS_PRIOn = %i, Hn (Rscp) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 2330: {%i} Cell (Freq: %i, cellParamId: %i): HCS_PRIOn = %i, Hn (Rscp) = %i
Line 2430: [URRC_ANR]: SysInfoReadCallback MIB received
Line 2440: Msg is NULL. Cannot Signal RecvSib to TddCellSelReselInfo 
Line 2445: [URRC_ANR]: SysInfoReadCallback SIB received
Line 2455: [URRC_ANR]: SysInfoReadCallback SYSINFOMGR_BCHREADERROR received
Line 2463: Msg is NULL. Cannot Signal AbortDetection to TddCellSelReselInfo 
Line 2470: [URRC_ANR]: SysInfoReadCallback SYSINFOMGR_SIBDECODEERROR received
Line 2478: Msg is NULL. Cannot Signal AbortDetection to TddCellSelReselInfo 
Line 2565: ERROR : MibPtr is NULL, so MIB is being subscribed with SIB3
Line 2577: ERROR Illegal AnrSubscriptionType(%d), just make it default subscription type
Line 2623: ERROR Illegal State
Line 2638: rrc_TddCellSelReselInfo_NecessarySibsRecved: Waiting for the NecessarySibsRecved Sibs [%d], Remaining SibCount %d
