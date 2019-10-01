Line 150: Sending RESET PDU: RbId %d, RSN %d, Data 0x%X, 0x%X, 0x%X, 0x%X
Line 180: Sending RESET ACK: RbId %d, State %d, RSN %d, Data 0x%X, 0x%X, 0x%X, 0x%X
Line 219: Unsafe to process or IIM failure: urlc_CuRxControlPdu RbId=%d
Line 226: Decipher is running. Reset Proc Back off: RbId=%d, IsScheduledDecipherSTF %d, IsRunningTimer %d
Line 231: Error detected: RbId %d RxControlPduTimer is NULL.
Line 248: Discard Control PDU(Invalid R1): RbId %d, RSN %d
Line 264: urlc_CuRxControlPdu: RbId %d, PduData %X, RSN %d, State %d
Line 311: Reset Proc:Sender, Reset Already Pending(no action taken) [RbId=%d, Rsn=%d]
Line 331: U-RLC Reset initiated by UE: RbId %d, RSN %d, UL HFN %d
Line 332: Reset Proc:Sender, Reset Pending [RbId=%d, Rsn=%d, UL Hfn=%d]
Line 348: [URLC Timer] Cancelling Poll_Timer(RbId=%d, VT_TempS=%d)
Line 352: [URLC Timer] Cancelling Poll_Timer(RbId=%d, VT_TempS=%d)
Line 364: Error detected: RbId %d TimerPollToken is NULL.
Line 389: [URLC Timer] Timer Poll Start (RbId=%d, VT_TempS=%d)
Line 393: [URLC Timer] Timer Poll Start (RbId=%d, VT_TempS=%d)
Line 420: [URLC Timer] Unsafe to process: urlc_CuTimerPollExpiry Rbid=%d, ConsecPollTimerExpCnt %d
Line 427: [URLC Timer]urlc_CuTimerPollExpiry (DeletePending is TRUE): Rbid=%d, ConsecPollTimerExpCnt %d
Line 445: [Detection of HS-SCCH Order missed] Rbid=%d, Taking Bkup, nDataPDUsRxedBkup %d,  nStatPDUsRxedBkup %d
Line 452: [Detection of HS-SCCH Order missed] Rbid=%d, ConsecPollTimerExpCnt %d
Line 458: [URLC Timer] Timer Poll Expiry (RbId=%d, DeletePending=%d, TimerPollToken=0x%X)
Line 463: [URLC Timer] Timer Poll Expiry (RbId=%d, DeletePending=%d, TimerPollToken=0x%X)
Line 481: [Stuck due to HS-SCCH Order missed] STATUS DLL Raised. Rbid=%d, NumDataPdusRxed %d, nDataPDUsRxedBkup %d,  NumStatsReportsRxed %d, nStatPDUsRxedBkup %d
Line 487: [Detection of HS-SCCH Order missed] Rbid=%d, ConsecPollTimerExpCnt %d --> 0
Line 529: [URLC Timer] Poll Prohibit timer is running (RbId=%d)
Line 531: [URLC Timer] Poll Prohibit timer is running (RbId=%d)
Line 543: [URLC Timer] Poll Prohibit timer Started (RbId=%d)
Line 545: [URLC Timer] Poll Prohibit timer Started (RbId=%d)
Line 554: Error detected: RbId %d TimerPollProhibitToken is NULL.
Line 587: [URLC Timer] urlc_CuTimerPollProhibitExpiry (DeletePending is TREU): RbId=%d
Line 595: [URLC Timer] Unsafe to process: urlc_CuTimerPollProhibitExpiry RbId=%d
Line 602: [URLC Timer] Poll Prohibit timer Expiry (RbId=%d,DeletePending=%d,TimerPollProhibitToken=0x%X)
Line 607: [URLC Timer] Poll Prohibit timer Expiry (RbId=%d,DeletePending=%d,TimerPollProhibitToken=0x%X)
Line 641: [URLC Timer] Poll Prohibit timer is running (RbId=%d)
Line 643: [URLC Timer] Poll Prohibit timer is running (RbId=%d)
Line 674: [URLC Timer] Status Prohibit timer is running (RbId=%d)
Line 676: [URLC Timer] Status Prohibit timer is running (RbId=%d)
Line 688: [URLC Timer] Status Prohibit timer Started (RbId=%d)
Line 690: [URLC Timer] Status Prohibit timer Started (RbId=%d)
Line 699: Error detected: RbId %d TimerStatusProhibitToken is NULL.
Line 714: [URLC Timer] Status Prohibit value is changed: RbId %d, TimerStatusProhibitValue %d
Line 719: [URLC Timer] Status Prohibit value is changed: RbId %d, TimerStatusProhibitValue %d
Line 734: Error detected: RbId %d status_gen_req memory allocation failed.
Line 771: [URLC Timer] urlc_CuTimerStatusProhibitExpiry (DeletePending is TREU): [RbId=%d]
Line 779: [URLC Timer] Unsafe to process: urlc_CuTimerStatusProhibitExpiry [RbId=%d]
Line 786: [URLC Timer] Status Prohibit Expired (RbId=%d, VR_R=%d, VR_H=%d, DeletePending=%d, TimerStatusProhibitToken=0x%X)
Line 791: [URLC Timer] Status Prohibit Expired (RbId=%d, VR_R=%d, VR_H=%d, DeletePending=%d, TimerStatusProhibitToken=0x%X)
Line 803: [URLC Timer] Trigger Status Rep: ACK SUFIs flagged for tx (RbId=%d)
Line 805: [URLC Timer] Trigger Status Rep: ACK SUFIs flagged for tx (RbId=%d)
Line 817: Trigger Status Rep: Missing PDU: RbId %d, VR_R %d, VR_H %d, TriggerStatusPduCnt %d
Line 830: [URLC Timer] Status Prohibit timer is running (RbId=%d)
Line 832: [URLC Timer] Status Prohibit timer is running (RbId=%d)
Line 854: [URLC Timer] urlc_CuStartTimerPollPeriodic: Cancelling PollPeriodic (RbId=%d)
Line 866: Error detected: RbId %d TimerPollPeriodicToken is NULL.
Line 872: [URLC Timer] Periodic Poll Timer Start (RbId=%d)
Line 874: [URLC Timer] Periodic Poll Timer Start (RbId=%d)
Line 907: [URLC Timer] urlc_CuTimerPollPeriodicExpiry (DeletePending is TRUE): RbId=%d
Line 915: [URLC Timer] Unsafe to process: urlc_CuTimerPollPeriodicExpiry RbId=%d
Line 922: [URLC Timer] Poll Periodic timer Expired (RbId=%d,PduListRoot=0x%X, DeletePending=%d, TimerPollPeriodicToken=0x%X)
Line 927: [URLC Timer] Poll Periodic timer Expired (RbId=%d,PduListRoot=0x%X, DeletePending=%d, TimerPollPeriodicToken=0x%X)
Line 950: [URLC Timer] Poll periodic timer is running (RbId=%d)
Line 952: [URLC Timer] Poll periodic timer is running (RbId=%d)
Line 989: urlc_CuStartTimerRst: RbId %d
Line 997: Error detected: RbId %d TimerRstToken is NULL.
Line 1039: Unsafe to process: urlc_CuTimerRstExpiry RbId=%d
Line 1051: urlc_CuTimerRstExpiry: RbId %d, VT_RST %d, MaxRst %d
Line 1070: SEND StatusDlllInd: RbId %d, VT_RST %d, MaxRst %d
Line 1096: urlc_CuStartTimerPollPeriodic: Cancelling PollPeriodic (RbId=%d)
Line 1107: Error detected: RbId %d TimerStatusPeriodicToken is NULL.
Line 1113: Timer Status periodic started [RbId=%d]
Line 1115: Timer Status periodic started [RbId=%d]
Line 1151: [URLC Timer] urlc_CuTimerStatusPeriodicExpiry (DeletePending is TRUE): RbId=%d
Line 1159: [URLC Timer] Unsafe to process: urlc_CuTimerStatusPeriodicExpiry RbId=%d
Line 1169: [URLC Timer] Timer Status Periodic started [RbId=%d]
Line 1171: [URLC Timer] Timer Status Periodic started [RbId=%d]
Line 1191: [URLC Timer] Timer Status Periodic is running [RbId=%d]
Line 1193: [URLC Timer] Timer Status Periodic is running [RbId=%d]
Line 1220: Event posted from Timer Expiry for PolSN %d LAstReceived %d VR_H %d
Line 1225: Event not posted as PollSn %d  Out of window LastReceivedPoll %d  VR_H %d
Line 1280: U-RLC Reset initiated by network: RbId %d, RSN %d, DL HFN=%d
Line 1305: Duplicate RESET PDU, Send Only Reset ACK[RbId=%d, Rsn=%d, DL HFN=%d]
Line 1339: U-RLC Erroneous RESET PDU ignored : ActivePtr %d, ActiveHfn=%d, DeltaHFN=%d
Line 1344: U-RLC RESET PDU accepted : ActivePtr %d, ActiveHfn=%d, DeltaHFN=%d
Line 1410: Reset Proc(Calc UL HFN): RbId %d, Rsn %d, UL HFN %d, PduSn %d
Line 1430: Reset Proc(Rxed reset PDU):Receiver, Reset Pending [RbId=%d, Rsn=%d, UL HFN=%d, DL HFN:%d]
Line 1436: Reset Proc:Receiver, Simulatanoues Reset at Peer RLC, Reset Mode:%d
Line 1492: Discard RESET ACK: RbId %d, ResetMode %d, SenderRsn %d, RSN %d, DL HFN %d
Line 1505: Received RESET ACK : RbId %d, RSN %d, DL HFN %d
Line 1564: Clear TxSenderPdu : RbId %d, ResetMode %d, AmEis->State %d
Line 1570: Block starting TimerRst : RbId %d, ResetMode %d, AmEis->State %d
Line 1628: Reset Proc: Performing reset procedures [RbId=%d]
Line 1707: urlc_CuPerformResetProcedures: Cancelling Poll_Prohibit_Timer(RbId=%d)
Line 1763: urlc_RabmIndForInvalidData(Eis is NULL): RbId %d
Line 1774: Urlc initiate RLC reset by Unknown IP version: RbId%d, uiReleaseType %d
Line 1780: CHECK!! URLC MODE: RbId %d, Mode %d
Line 1831: [URLC Timer] Extended Status Prohibit timer Started (RbId=%d), time: %d
