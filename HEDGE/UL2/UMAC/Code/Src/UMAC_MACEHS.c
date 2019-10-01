Line 228: MacEhsInit Procedure
Line 300: [Error] DBGetHsdschInfo !!!
Line 339: WARNING: QueueId is out of bound
Line 347: WARNING: MacehsQueueInfo is NULL
Line 372: Inside Umac_MacehsSetReorderingParams, Stopping Treset for QueueId: %d
Line 456: Error case MAX no of SDU per reorderPDU can be %d. Currently recieved %d.
Line 461: PDU disassembly (SDU count = %d)
Line 517: **Critical Error**: Lch Not valid (LCHID = %d)
Line 530: SDU disassembly (SDU length = %d)
Line 553: UPHY not ready to process EHS data
Line 598: Inside Disassembly, Stored BCCH HRNTI is: [%d]
Line 606: Error case: H-RNTI for BCCH is not present and Logical Channel Id equals to LCH_ID_ECFACH
Line 620: Error case: QueueID out of bound: %d
Line 632: Inside Disassembly, Handling DXCH or CCCH case, LCH Id: %d, Queue Id: %d
Line 643: Error case: Logical Channel id is not mapped to DXCH or CCCH
Line 741: MacehsPDU_num: %d, Reorder PDU Count is: %d, DataSize = %d
Line 746: Error case MAX no of Reorder PDU can be 3. Currently received %d.
Line 767: Duplicate detected
Line 789: After disassembly: (%d,%d) bytes remaining
Line 817: MacehsPdu Rcvd: %d, Duplicated: %d, DuplicateRate: %d (x100)
Line 870: [Warning] MAC-ehs PDU Macehs disassembly is not ready, discard PDU cnt : %d
Line 883: LmacDoneISR Missing : %d, numOfUmacMacEhsPdu: %d
Line 886: Inside Disassembly, MAC-EHS PDU Count %d
Line 947: Error: Data Recived for a LCH[%d] not configured
Line 1019:  New UpperEdge:%d
Line 1042: T1 timer start Q[%d] T1TSN:%d
Line 1066: T1 timer stop Q[%d] T1TSN:%d
Line 1079: Running T1Timer Token although T1 stop
Line 1215: WARNING: QueueId is out of bounds
Line 1249: WARNING: T1 Timer Expiry when queue list is NULL
Line 1256: Inside T1TimerExpire, QueueId: %d
Line 1272: [Error] T1_TSN(%d) == NET(%d) !!!
Line 1290: WARNING: MacehsQueueList is NULL
Line 1332: T1 timer expiry from SMC : Q[%d] NET:%d, UE:%d, T1TSN:%d
Line 1365: Starting Treset Timer for Queue Id: %d
Line 1439: [ECF] WARNING: QueueId %d is out of bound
Line 1449: [ECF] WARNING: TReset Expiry: QueueId %d, TresetTimerEnable = %d, pTresetTimerSetEhs = %x
Line 1474: T1 timer stop Q[%d] T1TSN:%d
Line 1487: Running T1Timer Token although T1 stop
Line 1514: WARNING: MacehsQueueList is NULL
Line 1552: Inside TresetTimerExpire, QueueId: %d
Line 1568: Inside TresetTimerExpire, Queue Id: %d, NET: %d, isUtranCommercialPlmnId: %d, UE: %d
Line 1577: Inside TresetTimerExpire, Queue Id: %d, NET: %d, isUtranCommercialPlmnId: %d, UE: %d
Line 1596: Inside TresetStop, QueueId: %d
Line 1606: Warning: Running TresetTimer Token, although Treset stopped
Line 1779: Deleting Segments %d
Line 1868:  Waring: issue in CombineSdu
Line 2008:  Waring: issue in CombineSdu
Line 2033: Deleting Segments %d
Line 2093:  Warning: Discarding
Line 2155: WARNING: QueueId is out of bound : %d, LCHID: %d
Line 2166: Inside Reassembly, Lch Id Not valid 
Line 2172: Inside Reassembly, Deleted Mob (LCHid Not valid)
Line 2186: Inside Reassembly, UeId Value received from URRC: %d, UeId Value received from Header for SDU No: %d is: %d
Line 2206: Inside Reassembly, Error case: U-RNTI is invalid for SDU NO: %d
Line 2212: Inside Reassembly, Deleted Mob (Not our UeId)
Line 2218: Inside Reassembly, Mapped to CCCH
Line 2234: Inside Reassembly, Num of SDU's having same UeId as configured by URRC is: %d
Line 2280: (Umac_MacehsReassembly) More than %d SDU 
Line 2289: WARNING: CombineIndex is out of bound
Line 2293: (Reassembly) SI:%d, SDU Cnt %d TSN %d 
Line 2341: SI Field Invalid TSN %d
Line 2354: (Umac_MacehsReassembly) More than 400 SDU %d
Line 2364: (Umac_MacehsReassembly) too many handle passed: %d
Line 2371: (Umac_MacehsReassembly) SduCount %d is out of bound
Line 2376: (Umac_MacehsReassembly) Giving SDUs to Demux, SduCount: %d
Line 2453: SegmentCnt is too many: SduCount %d, TotalSduSize %Bytes, LmacModeCheck %x
Line 2566: WARNING: dataIndRbInfo[%d] is NULL
Line 2584: WARNING: RbId[%d] is NULL
Line 2652: queue ID or LchId is out of bound
Line 2663: WARNING: RbInfo[%d] is NULL
Line 2670: Rbid for BCCH: %d
Line 2674: Error Case: LchId equals to LCH_ID_ECFACH, but BCCH or PCCH hrnti is not present
Line 2686: queue ID or LchId is out of bound
Line 2748: (Umac_MacehsDemultiplexing) One reordering mapped more RB: queueID%d, PrevRbId %d, RbId %d
Line 2754: RbCount out of bound 
Line 2901: MacehsTsnFieldExt(0:TSN6bit mode)
Line 2902: MacehsWindowMaxnum:%d, MacEhsParam_p->MacehsTsnModulo:%d, MacehsMaxReorderSduPerTTI:%d, RcvWindowUpperEdgeEhs:%d
Line 2919: MacehsTsnFieldExt(1:TSN14bit mode)
Line 2920: MacehsWindowMaxnum:%d, MacEhsParam_p->MacehsTsnModulo:%d, MacehsMaxReorderSduPerTTI:%d, RcvWindowUpperEdgeEhs:%d
Line 3006: Invalid indx %d
Line 3013: Invalid queue id %d
Line 3039: Invalid indx %d
Line 3070: Null NewInfo
Line 3151: Null NewInfo
Line 3163: [HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
Line 3177: Error: Queue ID:%d is out of bound
Line 3225: Null NewInfo
Line 3232: NoAddOrReconfMacehsQueue %d
Line 3247: [HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
Line 3260: WARNING: Queue ID:% is out of bound
Line 3271: Override queue id[%d] 
Line 3284: WARNING: AddCnt is out of bound
Line 3292: [HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
Line 3310: Error: Queue ID:% is out of bound
Line 3355: Reset isCommonhrntipresent flag.
Line 3366: MacehsTsnFieldExt(0:TSN6bit mode), MacehsWindowMaxnum:%d (Configured:%d), MacEhsParam_p->MacehsTsnModulo:%d, MacehsMaxReorderSduPerTTI:%d
Line 3375: MacehsTsnFieldExt(1:TSN14bit mode), MacehsWindowMaxnum:%d (Configured:%d), MacehsTsnModulo[SIMInstance]:%d, MacehsMaxReorderSduPerTTI:%d
Line 3407: Initial configuration for HS-DSCH , isMacEhsReqForFach %d  
Line 3422: Reconfiguration for HS-DSCH , isMacEhsReqForFach %d
Line 3442: After Add. Configured Mac-ehs QueueID:%d, WindowSize:%d
Line 3456: After delete. Configured Mac-ehs QueueID is zero
Line 3462: After delete. Configured Mac-ehs QueueID:%d
Line 3522: Reconfiguration(shorten) of Receive_Window_Size in Q[%d]
Line 3529: [HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
Line 3578: Reset or Release QueueId mapping to HSDSCH. MacehsResetInfo: %d, MacehsReleaseInfo: %d, MacehsPdu Rcvd: %d, Duplicated: %d, DuplicateRate: %d (x100)
Line 3613: Error: Queue ID:% is out of bound
Line 3676: [HS-DPCCH ACK DSDS Opt] Reset Shared T1 Value to DSP
Line 3713: Warning: Null pointer
