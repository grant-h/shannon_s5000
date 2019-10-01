Line 137: urlc_SegSduPopCheck: SDU from Fifo SUBMitted for segmentation(RbId-%d, Mui-%d, SduId-%d)
Line 148: urlc_SegSduPopCheck: NO SDU from Fifo Submitted, End Event(RbId-%d, FifoCnt=%d, TCPFifoCnt=%d, TCPAckFifoCnt=%d)
Line 202: urlc_SegGetPduUmReturnFunc(NO SDU): RbId=%d, Mode %d PDP PDU set to TRUE
Line 244: SegDiscard -SduBufferOccupancy=%d, 
Line 264: SegDiscard -SduBufferOccupancy=%d, 
Line 282: SegDiscard -SduBufferOccupancy=%d, 
Line 445: urlc_SegmentPurgeBuffer: TCPSegmentationFlowCntrlFifoCnt %d, TCPAckSduSegmentationFlowCntrlFifoCnt %d, SegmentationFlowCntrlFifoCnt %d
Line 533: SduHandle->SduData is NULL : urlc_SegmentReestReset
Line 564: urlc_SegmentBufferOccupancy - SegVars is NULL 
Line 681: DEBUG_CODE(EUrlcurlc_SegSduListDeleteEntry): Mode %d, SegmentVars 0x%x
Line 724: DEBUG_CODE(EUrlcurlc_SegSduListDeleteEntry): Mode %d, SegmentVars 0x%x, SduIdentifier %d
Line 806: Error detected: PduSduListBufferEntry is NULL.
Line 890: Error detected: SduHandleNewListEntry is NULL.
Line 913: DEBUG_CODE(EUrlcurlc_SegSduListAddEntry): State %d, Mui %d, SduIdentifier %d
Line 964: Failed to POP SDU : RbId %d, NumBuffPdus %d. SegStopByTxWinUpperEdge %d, lSuspend_Seg %d, SegmentationInProgress %d, Eis->State %d
Line 1000: urlc_SegmentTriggerFifoPop (Do not POP SRB2): RbId %d, DataSize(SRB3) %d
Line 1010: SDU POP : RbId %d, InstanceId %d, SduId %d
Line 1017: AM UL PDU size changed, update SegmentSduInput: old size %d, new size %d
Line 1035: SEG(Start): RbId %d, SDU %d, IP %d, SDU Buffer(Remaining)%d, SduId %d
Line 1041: Store SDU : SduData is NULL, RbId %d, SduDataCopy %X, MemRef %X,SduHandle->MemRef %X
Line 1093: Ask for more Pdu to be sent: RbId %d
Line 1140: Piggyback(ACK SUFI): 
Line 1162: Creat PDU with padding: RbId %d, PaddingSize %d, FifoCnt %d, TCPFifoCnt %d, TCPAckFifoCnt %d
Line 1169: Segmentation module is now free [MemFree]: RbId %d
Line 1188: Error detected: RbId %d NewPduHandle is NULL.
Line 1262: PDU generation error : RbId %d
Line 1300: Create PDU: RbId %d, PduSn %d, HFN %d, CiphConfig %d
Line 1305: Create PDU: RbId %d, PduSn %d, HFN %d
Line 1342: Padding [MemFree]: RbId %d
Line 1350: SpecialHE [MemFree]: RbId %d, PduSn(SpecialHE)%d
Line 1357: segmentation module is now free(SpecialHE): RbId %d
Line 1364: ExactFitIncludingLI is TRUE [MemFree]: RbId %d, CreatedPduSize %d
Line 1385: EUrlcurlc_SegCreatePduB: RbId %d, SuspendedSegCreatePdu %x, InputStruct %x
Line 1395: Segmentation Stop(TxWinUpperEdge): RbId %d, NumOfPduReadyForTx %d
Line 1479: Error detected: RbId %d SegOutput is NULL.
Line 1579: PDU Segmentation Stop !! This trace shouldn't be shown : RbId %d, AM, PduSn(VT_S)%d
Line 1596: urlc_SegCreateAmPdu(Check SDU state): RbId %d, State %d, InstanceId %d, SduId %d
Line 1604: segmentation module is now free: RbId %d
Line 1612: urlc_SegSduListAddEntry: RbId %d, InstanceId %d, SduId %d
Line 1630: SduHandleList is NULL: RbId %d
Line 1645: urlc_SegCreateSduEntryInPdu(SduData is NULL): RbId %d,SduId %d, PduSduListBufferEntry %X
Line 1738: urlc_SegCreateAmPdu II: RbId %d, PduSize %d, RemainingPduSpace %d, LiSize %d
Line 1757: urlc_SegCreateAmPdu(SpecialHE SET): RbId %d, SDU ID %d
Line 1765: urlc_SegCreateAmPdu(SDU fits exactly): RbId %d, PduSize %d, LiSize %d
Line 1782: DEBUG_CODE(EUrlcurlc_SegCreatePduA): RbId %d, Mode %d, LiSize %d
Line 1788: urlc_SegCreateAmPdu(One octet short): RbId %d, PduSize %d, LiSize %d
Line 1799: SuspendedSegCreatePdu: RbId %d, NumOfPduReadyForTx %d
Line 1812: Segmentation Stop(TxWinUpperEdge): RbId %d, MODE_AM
Line 1818: urlc_SegCreateAmPdu has to be called to make padding pdu: RbId %d, MODE_AM
Line 1827: SDU segmentation stoped or ended: RbId %d, MODE_AM, SuspendedSegCreatePdu %X, NumOfPduReadyForTx %d
Line 1883: urlc_SegSduListAddEntry: RbId %d, InstanceId %d, SduId %d
Line 2081: urlc_SegSduSegComplete II: RbId %d, PduSize %d, RemainingPduSpace %d, LiSize %d
Line 2108: DEBUG_CODE(EUrlcurlc_SegCreatePduA): RbId %d, LiSize %d
Line 2146: urlc_SegSduSegComplete: RbId %d, Mode %d, SduCurrState %d, SduId %d
Line 2156: DEBUG_CODE(EUrlcurlc_SegCreatePduB): RbId %d, Mode %d, State %d, SduIdentifier %d, DebugAssertCnt %d
Line 2174: DEBUG_CODE(EUrlcurlc_SegCreatePduB): RbId %d, Mode %d, State %d, SduIdentifier %d
Line 2183: urlc_SegSduSegComplete(SDU NULL): RbId %d
Line 2224: urlc_SegTmSdus: PduSize %d, NumPdusRequired %d, InstanceId %d
Line 2256: urlc_SegTmSdus: %d: SduOffset %d, PduSize %d, NumPdusRequired %d
Line 2262: urlc_SegTmSdus: TM PDU SduEndOffset %d smaller than PduSize %d
Line 2345: Error detected: RbId %d pSegCreatePdu is NULL.
Line 2393: urlc_SegPushFlowControlFifo RbId %d, NextHeader %d: IPv6 - Packet found
Line 2425: urlc_SegPushFlowControlFifo RbId %d, NextHeader %d: IPv6 - ACK packet found
Line 2433: urlc_SegPushFlowControlFifo RbId %d, SduSize %d: Unknown IP version %d
Line 2441: urlc_SegPushFlowControlFifo(Fast TCP ACK) 1: RbId %d, SduIdentifier %d, SduSize %d
Line 2597: SDU POP(Invalid State, Search next SDU): RbId %d, State %d, InstanceId %d, SduId %d
Line 2634: SDU POP(Invalid State, Search next SDU): RbId %d, State %d, InstanceId %d, SduId %d
Line 2672: SDU POP(Invalid State, Search next SDU): RbId %d, State %d, InstanceId %d, SduId %d
Line 2962: SDU urlc_AmSegSduVarsBufferOccupancy: RbId %d, SegSduVarsOccupancy %d, SduCnt=%d
