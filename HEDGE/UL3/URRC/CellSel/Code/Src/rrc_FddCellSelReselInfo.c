Line 351: [APBCR] FddCellSelReselInfo_IsSelectionCriteriaMet
Line 352: [APBCR] qQualMinFDD (%i), qRxLevMinFDD (%i)
Line 353: [APBCR] SrxlevS (%i), SqualS = (%i)
Line 362: [APBCR][ProcessUtraPrioInfo] DEDICATED_PRIORITY - ServCellPrio(%d) from PriorityInfoList
Line 369: [APBCR] DEDICATED_PRIORITY - Error to get Priority from UARFCN(%d) of PriorityInfoList. So ServCellPrio(%d) from rrc_FddCellSelReselInfo is used
Line 374: [APBCR] SrxlevN (%i), SqualN (%i) 
Line 378: [APBCR] Serving Cell is Suitable so Priority Based Reselection Criteria is Appllied
Line 380: [APBCR] Priority_Utra (%d), ServCellPrio (%d) 
Line 394: [APBCR] UtraPriority > SC Priority: threshXhigh (%i) 
Line 398: [APBCR] Selection Criteria Met for UARFCN (%d), CPICH (%d)
Line 405: [APBCR] SelectionCriteria NOT Met for UARFCN (%d), CPICH (%d)
Line 417: [APBCR] UtraPriority > SC Priority: threshXhigh (%i) 
Line 421: [APBCR] Selection Criteria Met for UARFCN (%d), CPICH (%d)
Line 428: [APBCR] SelectionCriteria NOT Met for UARFCN (%d), CPICH (%d)
Line 443: [APBCR] UtraPriority <= SC Priority: ThreshServLow (%i), ThreshXlow (%i) 
Line 451: [APBCR] Selection Criteria Met for UARFCN (%d), CPICH (%d)
Line 458: [APBCR] IsSelectionCriteriaMet NOT MET for UARFCN (%d), CPICH (%d)
Line 467: [APBCR] IsSelectionCriteriaMet - Serving Cell is not suitable -> Check if interF cell is suitable
Line 471: [APBCR] Found suitable for UARFCN (%d), CPICH (%d)
Line 477: [APBCR] NOT suitable for the UARFCN (%d), CPICH (%d)
Line 720: [NCell] uarfcn %d, psc %d: NCellEcIo %d/10 vs SCellEcIo %d/10, DiffSir %d, Qoffset2 %d
Line 747: >> BiasedQoffset2: Unsupported rrc state %d
Line 761: [uarfcn %d, psc %d] BiasedQoffset2 %d vs Qoffset2 %d
Line 812: Invalid InterFreqCell frequency value (%i)
Line 818: Invalid InterFreqCell frequency value (%i)
Line 952: Starting Tn timer for Fdd Cell:(%i,%i) HcsPrioN(%i) != HcsPrioS(%i) and QMeasn(%i) >= Qhcsn(%i) 
Line 962: Stopping Tn timer for Fdd Cell:(%i,%i) HcsPrioN(%i) != HcsPrioS(%i) and QMeasn(%i) < Qhcsn(%i) 
Line 987: Starting Tn timer for Fdd Cell:(%i,%i) HcsPrioN(%i) == HcsPrioS(%i) and QMeasn(%i) > QMeasS(%i) + Qoffsetsn(%i)
Line 997: Stopping Tn timer for Fdd Cell:(%i,%i) HcsPrioN(%i) == HcsPrioS(%i) and QMeasn(%i) <= QMeasS(%i) + Qoffsetsn(%i)
Line 1013: Started Tn timer for Fdd Cell:(%i,%i)
Line 1025: Stopped Tn timer for Fdd Cell:(%i,%i)
Line 1089: {%i} Cell (Freq: %i, Cpich: %i): Rn (Rscp) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 1102: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB - ( TOn(%i) * ( 1 - Ln(0) ) )
Line 1110: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB - ( TOn(%i) * ( 1 - Ln(1) ) )
Line 1119: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB
Line 1128: {%i} Cell (Freq: %i, Cpich: %i): Rn (Rscp) = %i
Line 1143: {%i} Cell (Freq: %i, Cpich: %i): Rn (EcN0) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 1156: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i ==> %i dB) - QOffset2(%i) dB - ( TOn(%i) * ( 1 - Ln(0) ) )
Line 1164: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i ==> %i dB) - QOffset2(%i) dB - ( TOn(%i) * ( 1 - Ln(1) ) )
Line 1173: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i ==> %i dB) - QOffset2(%i) dB
Line 1182: {%i} Cell (Freq: %i, Cpich: %i): Rn (EcN0) = %i
Line 1230: {%i} Cell (Freq: %i, Cpich: %i): HCS_PRIOn = %i, Hn (Rscp) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 1243: {%i} Cell (Freq: %i, Cpich: %i): HCS_PRIOn = %i, Hn (Rscp) = %i
Line 1256: {%i} Cell (Freq: %i, Cpich: %i): HCS_PRIOn = %i, Hn (EcN0) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 1269: {%i} Cell (Freq: %i, Cpich: %i): HCS_PRIOn = %i, Hn (EcN0) = %i
Line 1500: Squal Compensation [0.5dB]:: %d -> %d
Line 1527: Cell(%i,%i) : Squal (%i) = Qqualmeas(%i) dB - Qqualmin(%i) dB
Line 1586: [MRU Freq %d] Qrxlevmin Adjustment:: %d -> %d
Line 1616: Cell (Freq: %i,Cpich: %i) : Srxlev (%i) = Qrxlevmeas(%i) dBm - Qrxlevmin(%i) dBm - PCompensation(%i) dB
Line 1622: Cell (Freq: %i,Cpich: %i) : PCompensation (%i) = max( UE_TXPWR_MAX_RACH(%i) - P_MAX(%i), 0 )
Line 1664: UmtsCellSelectionMeasurement: Config message add cell:(%i,%i)
Line 1699: ERROR: Already actioning a request
Line 1710: ERROR Illegal State
Line 1730: ERROR: Already actioning a request
Line 1766: %s: Prepare subscription to MIB, Id(%i)
Line 1786: ERROR Illegal State
Line 1875: MibId is NULL in ReadingMib_RecvMib
Line 1903: ERROR Illegal State
Line 1961: ERROR Illegal State
Line 1978: [rrc_Frequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Negative confirmation
Line 1987: [rrc_Frequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Positive confirmation
Line 2071: Unexpected Sib with Id (%i)  received
Line 2136: ERROR Illegal State
Line 2269: [URRC_ANR]: NotActive_AbortSibRead
Line 2313: [URRC_ANR]: ReadingValidSibs_AbortSibRead
Line 2322: [URRC_ANR]: ERROR Illegal State in ReadingValidSibs_AbortSibRead
Line 2340: [URRC_ANR]: AbortingSibRead_SibSubscriptionCanceled received
Line 2368: ReadingValidSibs_SibSubscriptionCanceled : SibReadingResult(%d) received
Line 2377: ERROR Illegal State in ReadingValidSibs_SibSubscriptionCanceled
Line 2385: ERROR Illegal State in ReadingValidSibs_SibSubscriptionCanceled
Line 2393: ERROR Illegal State in ReadingValidSibs_SibSubscriptionCanceled
Line 2401: ERROR Illegal State in ReadingValidSibs_SibSubscriptionCanceled
Line 2413: ReadingValidSibs_SibSubscriptionCanceled : unknown SibReadingResult received
Line 2445: [URRC_ANR]: ReadingValidSibs_BchReadError received
Line 2451: ReadingValidSibs_BchReadError is ignored during SibReadingPause
Line 2488: ReadingValidSibs_RecvMib : MIB V-tag changed, give-up this cell
Line 2492: ReadingValidSibs_RecvMib : MIB V-tag changed, Nothing to do
Line 2539: [URRC_ANR]: ProcessSib1 called
Line 2548: [URRC_ANR]: ProcessSib1 CS Domain
Line 2556: [URRC_ANR]: ProcessSib1 PS Domain
Line 2565: [URRC_ANR]: ProcessSib1 IsLacPresent:%d, LacId:%d, IsRacPresent:%d, RacId:%d
Line 2602: ProcessSib3 CSG ID : %x
Line 2609: FddCellSelReselInfo_p->csg_member_status = TRUE
Line 2637: Cell Barred
Line 2642: Cell Is ReservedForOperatorUse
Line 2647: Cell Is ReservedForExtension
Line 2652: Selection Criteria Not Met
Line 2660: ProcessSib3 called CGI:%d
Line 2693: ProcessSib20 HnbNamelength: %d HNB Name : %s
Line 2698: ProcessSib20 called
Line 2742: ReadingValidSibs_RecvSib SIB1 received
Line 2750: ReadingValidSibs_RecvSib SIB3 received
Line 2760: ReadingValidSibs_RecvSib : SibReadingType(%d) CsgId is not valid in this Cell
Line 2768: ReadingValidSibs_RecvSib SIB20 received
Line 2777: ReadingValidSibs_RecvSib Unexpected SibId (%i)
Line 2795: ReadingValidSibs_RecvSib:Calling SIB subscription Cancellation in ReadingSchedulingBlock_RecvMib after successfull SIB read
Line 2814: ReadingValidSibs_RecvSib - LAC(%d) is FLAI
Line 2820: ReadingValidSibs_RecvSib - All Necessary SIBs received but CellSelCriteria(%d) is not met for this CSG Cell
Line 2827: ReadingValidSibs_RecvSib - All Necessary SIBs received
Line 2832: ReadingValidSibs_RecvSib:Calling SIB subscription Cancellation in ReadingSchedulingBlock_RecvMib after successfull SIB read
Line 2848: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 2866: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 2895: ReadingValidSibs_RecvSib: Cancel SIB(%d)
Line 2988: [URRC_ANR]: SysInfoReadCallback MIB received
Line 2998: Msg is NULL. Cannot Signal RecvSib to FddCellSelReselInfo 
Line 3003: [URRC_ANR]: SysInfoReadCallback SIB received
Line 3013: [URRC_ANR]: SysInfoReadCallback SYSINFOMGR_BCHREADERROR received
Line 3021: Msg is NULL. Cannot Signal AbortDetection to FddCellSelReselInfo 
Line 3028: [URRC_ANR]: SysInfoReadCallback SYSINFOMGR_SIBDECODEERROR received
Line 3036: Msg is NULL. Cannot Signal AbortDetection to FddCellSelReselInfo 
Line 3107: ERROR : MibPtr is NULL, so MIB is being subscribed with SIB3
Line 3119: ERROR Illegal AnrSubscriptionType(%d), just make it default subscription type
Line 3160: ERROR Illegal State
Line 3182: ReadingValidSibs_PauseSibRead : 
Line 3220: ReadingSchedulingBlock_RecvMib  Num_SharedPLMNs:%d
Line 3226: ReadingSchedulingBlock_RecvMib entered PlmnId: 0x%02X, 0x%02X, 0x%02X
Line 3240: ReadingSchedulingBlock_RecvMib Cell Not Shared Read PlmnId: 0x%02X, 0x%02X, 0x%02X  to head of the list
Line 3263: ReadingValidSibs_RecvSib - LAC(%d) is FLAI
Line 3280: ReadingSchedulingBlock_RecvMib:Calling SIB subscription Cancellation in ReadingSchedulingBlock_RecvMib after successfull SIB read
Line 3296: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 3329: ReadingSchedulingBlock_RecvMib: Cancel SIB(%d)
Line 3347: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 3355: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 3363: ReadingSchedulingBlock_RecvMib : MibId is NULL in ReadingValidSibs_RecvMib
Line 3389: ReadingSchedulingBlock_PauseSibRead : 
Line 3423: ERROR Illegal State in PausedReadingSib_PauseSibRead
Line 3442: PausedReadingSib_ResumeSibRead : SibReadingResult(%d) initialized
Line 3461: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 3550: rrc_FddCellSelReselInfo_NecessarySibsRecved: Waiting for the NecessarySibsRecved Sibs [%d], Remaining SibCount %d
Line 3574: rrc_FddCellSelReselInfo_LeastSibsRecved: Asn_systemInfoType20 is not received, but Anyother SIBs are received
Line 3651: ERROR: Already actioning a request
Line 3714: ERROR Illegal State
Line 3734: ERROR: Already actioning a request
Line 3791: ERROR Illegal State
Line 3835: Squal Compensation [0.5dB]:: %d -> %d
Line 3841: SameCellSelection- NewSqual:%d NewSrxlev:%d
