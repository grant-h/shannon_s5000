Line 189: PS_qbit_offset %d is_qbit_offset_exceed %d
Line 237: CAL PARAMETER: qBitsDuration[%d], snap1[%d,%d], snap2[%d,%d]
Line 259: tcxo initcal drift(%d) OffsetPpb(%d) qBit(%d)
Line 280: [PSCal]  slowDiff[%d], mul[%d]
Line 281: [PSCal]  cal->denom[%d], cal->accurateScale[%d], cal->precisionScale[%d], cal->maxScale[%d], cal->maxRem[%d]
Line 283: [PSCal]  cal->maxScalePrime[%d], cal->maxRemPrime[%d]
Line 299: [PSCal] Init Cal Done
Line 311: RECAL REF from CAL[%d]: reCalRefMaxScale[%d], reCalRefMaxRem[%d], reCalRefDenom[%d]
Line 323: CAL RESULT: dataIsValid[%d], accurateScale[%d], maxScale[%d], maxRem[%d]
Line 342: DlSlReCalStoreReset Cause %d Frame %d
Line 376: [PSCal] reCalRefDenom_TO %d ScaledDenomDiff_TO %d ScaledDemon_TO %d reCalRefMaxRem_TO %d ScaledRemDiff_TO %d ScaledRem_TO %d
Line 428: RefFrame %d StoreFrameNum %d ReCalStoreRem %d ScaledRem %d reCalRefMaxRem %d ScaledRemDiff %d
Line 430: [PSCal] reCalRefMaxScale %d reCalRefMaxRem %d reCalRefDenom %d Denon_TO %d Rem_TO %d 
Line 458: [PSCal] Recalibration Done  
Line 500: Error ReCalStore 
Line 506: Need to check Frame!! Cnt %d qBits %d 
Line 512: Before reCalBuf->SumreCalStoreFrameNum %d  index %d  delete candidate %d
Line 526: After reCalBuf->SumreCalStoreFrameNum %d  index %d  delete candidate %d
Line 536: [PSCal] StoreMul %d %d SumMul %d slowdiff %d StoreFrameNum %d SumFrameNum %d
Line 538: ReCalFrameCnt %d  l1ps_cal32k->subbuf_needReCalAccumulation %d  reCalBuf->reCalStore_idx  %d  reCalBuf->reCalStoreDone %d
Line 587: [PSCal] Slow Clock ReCal [Accumulation] ReCalFrameCnt %d
Line 588: [PSCal] mul %d fcnt1 %d fcnt2 %d Scnt1 %d Scnt2 %d
Line 591: RECAL ACCUMULATION: qBitsDuration %d ReCalTotCnt %d slowDiff %d mul %d mul2 %d
Line 611: tcxo recal drift(%d) OffsetPpb(%d) MulPrime(%d)
Line 626: [PSCal] Slow Clock ReCal [Update] cal->reCalMulPrime(%d) reCalRefDenom (%d)
Line 627: [PSCal] reCalScaleDiff %d =reCalRefMaxScale %d -reCalMaxRem %d
Line 628: [PSCal] reCalRemDiff %d =(reCalScaleDiff %d *reCalDenom %d )+reCalRefMaxRem %d -reCalMaxRem %d
Line 633: [PSCal] Recalibration Fail
Line 650: RECALIBRATION : validCal(%d) reCalRemDiff(%d) reCalMaxDenom(%d) reCalMaxScale(%d) reCalMaxRem(%d)
Line 714: [PSCal] decode fail %d TO threshold exceed %d
Line 750: [PSCal]lastSck:%d,currentSck:%d,lastFastCnt%d,RefScale:%d
Line 768: [PSCal] reCalRefMaxRem %d reCalRefDenom %d reCalRefMaxRem_TO %d reCalRefDenom_TO %d
Line 770: [PSCal] sleepTimeEdges %d holdingValue %d CalculatedMaxRem %d CalculatedDenom %d
Line 772: [PSCal] Prev_ReCal : cal->reCalRemDiff %d cal->reCalMaxDenom %d
Line 806: dlScShortWait(%d)
Line 810: CALC SLEEPTIME: qBits[%d], dlScShortWait[%d], lastSnap[%d,%d], wakeUpEdge[%d]
Line 826: [PSCal] DlSlCal_ps_update_refvalue K %d W %d paging_decode_fail %d
Line 861: cal->reCalRefMaxRem[%d]  cal->reCalRefDenom[%d]  slowDiff[%d]
Line 863: k[%d] weight[%d] mod_diff_offset[%d]  qbit_offset_diff_2[%d]
Line 870: [PSCal]reCalRefMaxRem_TO %d reCalRefDenom_TO %d modifyvalue %d PS_qbit_offset %d PS_qbit_offset_prev %d
Line 876: [Legacy]cal->reCalRefMaxRem %d modifyvalue %d PS_qbit_offset %d PS_qbit_offset_prev %d
Line 934: GSM DSP Init IPC
Line 957: ############################ GSM DSP init fail,WaitCnt: %d
Line 962: GSM DSP Init IPC done
Line 972: GSM DSP Init IPC - passed.
Line 991: frPelPoolIndex = %d,  frPelNumPending = %d
Line 997: DlSlHandleWakeupInterrupt  nextFrame = %d,  hasSlept = %d readCtrl 0x%x, HWSorterInitFlag = %d
Line 1014: SNAP: time TCU_SNAP_CODE %d
Line 1086: FrcdSort HWSorterInitFlag = %d
Line 1121: frPelPoolIndex = %d,  frPelNumPending = %d
Line 1127: WakeupScheduleHwSorter  nextFrame = %d,  hasSlept = %d readCtrl 0x%x, HWSorterInitFlag = %d
Line 1152: SNAP: time TCU_SNAP_CODE %d
Line 1239: FrcdSort HWSorterInitFlag = %d
