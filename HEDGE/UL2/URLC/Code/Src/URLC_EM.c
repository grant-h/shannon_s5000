Line 92: urlc_EmRlcValid - U-RLC not valid
Line 113: Error detected: Malloc returned NULL for URLC_RbTableMemHandler
Line 221: Error detected: not support ConfigMode(%d)
Line 335: urlc_EmFlushSRB2() : Invalid RB
Line 343: urlc_EmFlushSRB2: Configuration check(RbId %d, Mode %d)
Line 349: urlc_EmFlushSRB2() : Flushing SRB2, SegmentationFlowCntrlFifoCnt %d
Line 355: FLUSH_SRB2 -mui=%d, SduSize=%d 
Line 362: urlc_EmFlushSRB2() :MUI %d , RbId %d
Line 436: Error detected: not support Mode(%d)
Line 465: ERROR:not supported Mode(%d)
Line 565: Discarded by SRNS Reloc : ReTxSrbSdu: Mui %d, ReTxSrbSdu %x->NULL
Line 572: UrlcReEst: RbId %d, IsRlcCheckReqd %d, DetectDlPduSize %d, DlPduSize(New)%d, DlPduSize(Old)%d SrncReloc:%d
Line 575: Old Pdu Size = %d, New Pdu Size = %d:, IsUlRlcCheckReqd = %d
Line 653: urlc_EmStopRbs(STATUS_STOPPED): RbId %d, Mode %d
Line 722: urlc_EmContinueRbs(STATUS_RUNNING): RbId %d, Mode %d
Line 1010: urlc_EmCounterCheck: RbId %d, DlPendingAHfn %d
Line 1015: urlc_EmCounterCheck: RbId %d, DlPendingHfn %d
Line 1041: urlc_EmCounterCheck: RbId %d, UlValid %d, DlValid %d, UL HFN %d, DL HFN %d
Line 1069: ArrayCount out of bound 
Line 1108: RbTableEntry debugging test
Line 1152: urlc_EmMaxCountC(DL): RbId %d, PduSn %d, DlActivePtr %d, HFN %d
Line 1157: urlc_EmMaxCountC(DL): RbId %d, PduSn %d, DlActiveEntry %d
Line 1208: urlc_EmMaxCountC(UL): RbId %d, UlActivationTime %d, HFN %d
Line 1234: urlc_EmMaxCountC() : CsMaxCountC %d, PsMaxCountC %d
Line 1288: Error detected: RbId %d Add TM Entity failed
Line 1798: TM [RbId=%d, LogCh=%d, BufferOccupancy=%d]
Line 1807: UM [RbId=%d, LogCh=%d, BufferOccupancy=%d]
Line 1820: AM [RbId=%d, LogCh=%d, BufferOccupancy=%d]
Line 1825: urlc_EmDataQueuedForTx - RbId=%d Mode=None(U-MAC asking for data on a RB not configured in U-RLC)
Line 1829: urlc_EmDataQueuedForTx - RbId=%d Mode=Invalid RbId(U-MAC asking for data on an invalid RbId. Valid range -2 to 32)
Line 1833: urlc_EmDataQueuedForTx - RbId=%d Mode=All(Invalid - U-RLC configuration error)
Line 1837: urlc_EmDataQueuedForTx - RbId=%d Mode=Unknown(Invalid -U-RLC configuration error)
Line 1900: Buffer mismatch with ListRoot: RbId %d
Line 1919: Error detected: Unexpected error(MODE_TM): RbId %d, SduIdentifier %d
Line 1955: AM CSP detected during UM BO check RbId %d
Line 1992: !!! Sending only CSP PDUs even though RB2 stopped, handle Presync and Baton HO !!!
Line 1996: AM status is stopped: RbId %d
Line 2015: DO NOT SEND UL DATA(Reset Pending or SUSPEND state): RbId %d, DataSize %d, State %d
Line 2024: AM Reset Pending OR SECOND LOG CH [RbId=%d, State=%d, DataSize=%d, Rep=%d, MaxPdusAv=%d, LogCh=%d, PaddingAllowed=FALSE]
Line 2064: StatusPduProcessing: RbId %d, PbDataQueuedForTxWindow %d, NumTxReq %d, NumRetxReq %d, SDU Buffer(Remaining)%d
Line 2091: !!! Reporting only CSP Buffer for RB2 which is stopped !!!
Line 2099: DataQueued(TxWinFull): RbId %d, DataSize(ReTx)%d, TimerPollExpired %d, TimerPollPeriodicExpired %d, PollForStatusRepTrigByPollProhExp %d
Line 2101:  --- [Tokens] TimerPollToken %X, TimerPollExpiredToken %X, TimerPollProhibitToken %X, PduListRoot=%X
Line 2106: DataQueued(TxWinFull): RbId %d, TimerPollExpired %d, TimerPollPeriodicExpired %d, PollForStatusRepTrigByPollProhExp %d
Line 2108:  --- [Tokens] TimerPollToken %X, TimerPollExpiredToken %X, TimerPollProhibitToken %X, PduListRoot
Line 2114: AM [RbId=%d, DataSize=%d, Rep=%d, MaxPdusAv=%d, LogCh=%d, PaddingAllowed=%d]
Line 2129: URLC State variables: RbId %d, SduBuffer %d, DataReady %d, VT_A %d, VT_S %d, VR_R %d, VR_H %d
Line 2133: URLC Statistics: [TX: SduRxed %d, PduTxed %d, ReTxed %d, StatusTxed %d], [RX: PduRxed %d, StatusRxed %d, SduCreated %d]
Line 2143: urlc_EmDataQueuedForTx - RbId=%d Mode=None( U-MAC asking for data on a RB not configured in U-RLC)
Line 2147: urlc_EmDataQueuedForTx - RbId=%d Mode=Invalid RbId( U-MAC asking for data on an invalid RbId. Valid range -2 to 32)
Line 2151: urlc_EmDataQueuedForTx - RbId=%d Mode=All(Invalid - U-RLC configuration error)
Line 2155: urlc_EmDataQueuedForTx - RbId=%d Mode=Unknown(Invalid - U-RLC configuration error)
Line 2165: Err [RbId=%d, DataSize=%d, Rep=%d, MaxPdusAv=%d, LogCh=%d, PaddingAllowed=FALSE]
Line 2213: TM [RbId=%d, LogCh=%d, BufferOccupancy=%d]
Line 2224: UM [RbId=%d, LogCh=%d, BufferOccupancy=%d]
Line 2263: DO NOT SEND UL DATA(Reset Pending): RbId %d, DataSize %d
Line 2273: AM Reset Pending OR SECOND LOG CH [RbId=%d, State=%d, DataSize=%d, LogCh=%d, PaddingAllowed=FALSE]
Line 2315: StatusPduProcessing: RbId %d, PbDataQueuedForTxWindow %d, NumTxReq %d, NumRetxReq %d, SDU Buffer(Remaining)%d
Line 2348: DataQueued(TxWinFull): RbId %d, DataSize(ReTx)%d, TimerPollExpired %d, TimerPollPeriodicExpired %d, PollForStatusRepTrigByPollProhExp %d
Line 2353: DataQueued(TxWinFull): RbId %d, TimerPollExpired %d, TimerPollPeriodicExpired %d, PollForStatusRepTrigByPollProhExp %d
Line 2359: AM [RbId=%d, DataSize=%d,  LogCh=%d, PaddingAllowed=%d]
Line 2372: URLC State variables : RbId %d, SduBuffer %d, DataReady %d, VT_A %d, VT_S %d, VR_R %d, VR_H %d
Line 2375: URLC Statistics : [TX: SduRxed %d, PduTxed %d, ReTxed %d, StatusTxed %d], [RX: PduRxed %d, StatusRxed %d, SduCreated %d]
Line 2385: urlc_EmDataQueuedForTx - RbId=%d Mode=None(U-MAC asking for data on a RB not configured in U-RLC)
Line 2389: urlc_EmDataQueuedForTx - RbId=%d Mode=Invalid RbId(U-MAC asking for data on an invalid RbId. Valid range -2 to 32)
Line 2393: urlc_EmDataQueuedForTx - RbId=%d Mode=All(Invalid - U-RLC configuration error)
Line 2397: urlc_EmDataQueuedForTx - RbId=%d Mode=Unknown(Invalid -U-RLC configuration error)
Line 2403: Err [RbId=%d, DataSize=%d, LogCh=%d, PaddingAllowed=FALSE]
Line 2475: urlc_EmGetUlEis debugging test
Line 2483: ERROR: not supported mode!
Line 2498: not supported mode! need to check
Line 2522: urlc_EmReleaseAllRadioBearers
Line 2546: not supported mode! need to check
Line 2565: not supported mode! need to check
Line 2606: Loop back mode 1 start function called, RbId = %d
Line 2610: Loop back mode 1 not configured, RbId = %d doesn't exist
Line 2621: AM Mode loop back mode-I set on RbId=%d, LoopbackPduSize =%d
Line 2627: UM Mode loop back mode-I set on RbId=%d, LoopbackPduSize =%d
Line 2633: TM Mode loop back mode-I set on(UL)RbId=%d, LoopbackPduSize =%d
Line 2638: urlc_EmStartLoopback invalid EIS [RbId=%d]
Line 2644: TM Mode loop back mode-I set on(DL)RbId=%d, LoopbackPduSize =%d
Line 2648: ERROR:not supported Mode(%d)
Line 2668: Loop back mode 1 STOP function called
Line 2686: AM Mode loop back mode-I STOPPED on RbId=%d
Line 2691: UM Mode loop back mode-I STOPPED on RbId=%d
Line 2696: TM Mode loop back mode-I set on RbId=%d
Line 2700: ERROR:not supported Mode(%d)
Line 2716: TDD LoopBack Mode1 OFF, LB info not required by DSP
Line 2763: ERROR:not supported Mode(%d)
Line 2783: RbTable is NULL but Rxed RBid= %d
Line 2792: Radio Bearer ID Invalid %d
Line 2816: Error detected: Malloc returned NULL for URLC_BcchTable
Line 2881: [Stats] TimerToken is NULL: Cannot start timer
Line 2901: [Stats] TimerExpiry: TimerToken is NULL
Line 2908: [Stats] TimerExpiry: URLC_RbTable is NULL
Line 2955: [Stats] TimerExpiry: No Data RBs
Line 2984: Error Copy UL Statistics : TotalRbCnt %d > (DM_URLC_MAX * 2) %d 
Line 2997: URLC UL AM Statistics : RbId %d, UlByte %d, UlBlk %d, UlRetrBlk %d
Line 3014: URLC UL UM Statistics : RbId %d, UlByte %d, UlBlk %d, UlRetrBlk %d
Line 3030: URLC UL TM Statistics : RbId %d, UlByte %d, UlBlk %d, UlRetrBlk %d
Line 3042: Error detected: Unknown Mode %d, EIS %x, TotalRbCnt %d, RbId %d 
Line 3058: Error Copy DL Statistics: TotalRbCnt %d > (DM_URLC_MAX * 2) %d 
Line 3071: URLC DL AM Statistics : RbId %d, DlByte %d, DlBlk %d, DlRetrBlk %d
Line 3088: URLC DL UM Statistics : RbId %d, DlByte %d, DlBlk %d, DlRetrBlk %d
Line 3104: URLC DL TM Statistics : RbId %d, DlByte %d, DlBlk %d, DlRetrBlk %d
Line 3116: Error detected: Unknown Mode %d, EIS %x, TotalRbCnt %d, RbId %d 
