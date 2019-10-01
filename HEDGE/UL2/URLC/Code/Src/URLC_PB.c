Line 122: NumPdusRequired=0 : RbId %d, NumPdusRequested %d
Line 162: ReTxed(TX window full): RbId %d, PduSn %d, VT_A %d, TxWindowUpperEdge %d, VT_TempSUnAcked %d, VT_S %d
Line 197: ReTxed(poll bit should be triggered): RbId %d, VT_TempSUnAcked %d, VT_S %d
Line 216: ReTxed(poll bit should be triggered): RbId %d, VT_TempSUnAcked %d, VT_S %d
Line 235: urlc_PbGetPdus:(TotalTxRequests==0, So, UnAcked or VT_S-1(%d), retransmitted)RbId=%d, NumPdusRequired=%d
Line 249: Create RESET PDU: RbId %d
Line 253: Required Pdus in RESET triggering is not matched: RbId %d, NumPdusRequired %d, TotalTxRequests %d
Line 332: [SEC] SMC transmission started from UL2. PDU count:%d
Line 337: [SEC] SMC transmission done from UL2
Line 429: PDU RETRANSMITTED [RbId %d, PduSn %d, VT_DAT %d, HFN %d, VT_A %d, VT_S %d]
Line 455: urlc_UshConfirm TRANSMITTED - Mui (%d) InstId(%d) RbId %d
Line 496: CipherTransaction is NULL !: RbId %d, MODE_AM
Line 538: NumPdusReturned(%d)is out of Bound
Line 574: Tx Window full !!(UpperEdge PDU): RbId %d, PduSn %d, TxLowerEdge %d, TxUpperEdge %d, VT_A %d, VT_S %d
Line 589: Poll(Last Retx)) [RbId=%d]
Line 605: Poll flag RESET(Cipher Pend + TimerPollProhibit)RbId=%d, SN=%d, Hfn=%d
Line 631: State Error: urlc_PbGetPdusReturnFunc() PDU not Treated: RbId %d, NumPdusReturned %d, SN %d, RlcH %x, PaySize %d
Line 643: EUrlcurlc_PbGetPdusNumReqInvalid: RbId %d, NumPdusReturned %d, NumPdusRequired %d, NumPdusRequested %d, CurrPduEntry %X
Line 654: [RACH] The PDU is already delivered!, set WaitingForConfirm = FALSE, PersistenceRetry = FALSE
Line 747: MAX LSN Select: RbId %d, ReportedPduSnForAck=%d, VT_A=%d, VT_S=%d
Line 784: PDU Segmentation can start I(by StatusReport): RbId %d, VT_A %d, VT_S %d, SuspendedSegCreatePdu %d, NumRetx %d, NumTx %d
Line 796: Scheduling for STATUS PDU: RbId %d, NextSn %d, ReportedPduNum %d, VT_A %d, VT_S %d, NumRetx %d, NumTx %d
Line 805: PbDataQueueCheck(Status report): RbId %d, PbDataQueuedForTxWindow %d, VT_A %d, VT_S %d
Line 816: PDU Segmentation can start II(by StatusReport): RbId %d, VT_A %d, VT_S %d
Line 870: PDU Segmentation Stop(TxWindUpperEdge): RbId %d, PduSn %d, TxLowerEdge %d, TxUpperEdge %d
Line 877: EUrlcurlc_PbSetStateInvalid: RbId %d, PduSn %d, PduState %d, NewState %d
Line 906: EUrlcurlc_PbSetStateInvalid: RbId %d, PduSn %d, PduState %d, NewState %d
Line 938: EUrlcurlc_PbSetStateInvalid: RbId %d, PduSn %d, PduState %d, NewState %d
Line 967: EUrlcurlc_PbSetStateInvalid: RbId %d, PduSn %d, PduState %d, NewState %d
Line 973: EUrlcurlc_PbSetStateInvalid: RbId %d, PduSn %d, PduState %d
Line 1028: urlc_PbDeliverPdu: RbId %d, PbDataQueue %d, PduBuffVars.PduSn %d, TxWindowLowerEdge %d, TxWindowUpperEdge %d
Line 1128: TX window Upper Edge: RbId %d, AM, PduSn %d, VT_A %d, TxUpperEdge %d, PbDataQueuedForTxWindow %d, NumTxRequests %d, NumRetxRequests %d
Line 1142: PbDataQueueCheck: RbId %d, PbDataQueuedForTxWindow %d, NumTxRequests %d, NumRetxRequests %d 
Line 1534: urlc_PbRxCipheredPdus AM RbId=%d
Line 1540: Poll(returns from ciphering)RbId=%d, SN=%d, Hfn=%d
Line 1560: urlc_PbRxCipheredPdus UM RbId=%d
Line 1570: UmacListEntryPtr is NULL: RbId %d, UM mode, InstanceId %d
Line 1587: DB mapping failure: RbId %d, UM mode, RequestsMade %d
Line 1608: iSegBitSize Error II on UM mode 
Line 1685: EUrlcurlc_PbGetPdus
Line 1701: EUrlcurlc_PbGetPdus
Line 1717: EUrlcurlc_PbGetPdus
Line 1723: EUrlcurlc_PbGetPdus
Line 1802: Poll(Window based - J)) J = %d, [RbId=%d]
Line 1897: Unrecoverable error [RbId=%d, Pdu=%d]
Line 1918: Initiate Reset MaxDAT no discard [RbId=%d, Pdu=%d]
