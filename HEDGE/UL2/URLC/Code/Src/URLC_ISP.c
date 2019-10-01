Line 101: Unsafe to process or IIM failure: urlc_IspRxStatusPdu RbId=%d
Line 107: Receive Status PDU SUFIs: RbId = %d
Line 120: Previous Status PDU is still processing(Discard): RbId %d, SUFI TYPE %d
Line 133: BitOffset of Status PDU is not vaild(Discard): RbId %d, BitOffset %d, ReportSize %d
Line 149:  SUFI_RLIST(End): 
Line 163: BitOffset of Status PDU is not vaild(SUFI_LIST): RbId %d, BitOffset %d, ReportSize %d
Line 172:  SUFI_LIST: Length = %d
Line 176:  Discard STATUS PDU: invalid Length value in LIST SUFI
Line 190: BitOffsetError(SUFI_MRW): RbId %d, ReportSize %d
Line 213:  Unknown SUFI - Discard: Invalid [RbId=%d]
Line 221:  SUFI_NO_MORE
Line 231:  Unknown SUFI: Invalid format [RbId %d]
Line 241: [Detection of HS-SCCH Order missed] Resetting Consecutive poll expiry Counters. Rbid=%d
Line 248: Received only SUFI_NO_MORE [RbId=%d]
Line 263: PDU Segmentation can start II(by StatusReport): RbId %d, VT_A %d, VT_S %d
Line 292: Status Report Invalid [RbId=%d, InvalidCnt =%d]
Line 295: URLC reset Proc initiated by UE Status Report Invalid [RbId=%d]
Line 306: Status PDU's raw data is not correct: RbId %d, ReportSize %d
Line 311: Ignore/Inconsitence receiving SUFIs :RbId %d, ReportStatus %d
Line 343: urlc_IspStatusClearPollFlags: Cancelling Poll_Prohibit_Timer(RbId=%d)
Line 368: urlc_IspStatusStateInvokedReturnFunc() : RbId %d, DataSize %d, NumTxReq %d, NumRetxReq %d, SDU Buffer(Remaining)%d
Line 409: BitOffset of Status PDU is not vaild(RLIST): RbId %d, BitOffset %d, ReportSize %d
Line 414: RLIST_SUFI:
Line 424: RX SUFI_RLIST: RbId %d, FSN = %d, LENGTH = %d
Line 438: Invalid/Inconsistent
Line 451: BitOffset of Status PDU is not vaild(RLIST): RbId %d, BitOffset %d, ReportSize %d
Line 469: Status PDU is not vaild(RLIST), Error Burst: RbId %d, RListLength %d, RListData %d
Line 481: Status PDU is not vaild(RLIST): RbId %d, RListLength %d, RListData %d
Line 493: Invalid/Inconsistent
Line 522: BitOffset of Status PDU is not vaild(MRW): RbId %d, BitOffset %d, ReportSize %d
Line 530:  SUFI_MRW: MRW Length = %d
Line 538:  MRW SN = %d
Line 547: BitOffset of Status PDU is not vaild(MRW): RbId %d, BitOffset %d, ReportSize %d
Line 556:  MRW SN = %d
Line 561: BitOffset of Status PDU is not vaild(MRW): RbId %d, BitOffset %d, ReportSize %d
Line 570:  NLength = %d
Line 596: BitOffset of Status PDU is not vaild(MRW_ACK): RbId %d, BitOffset %d, ReportSize %d
Line 610:  SUFI_MRW_ACK: NLength = %d SN_Ack = %d
Line 637: BitOffset of Status PDU is not vaild(POLL): RbId %d, BitOffset %d, ReportSize %d
Line 655: Error detected: RbId %d Poll_pdu_ind_timer is NULL.
Line 663: POLL SUFI: RbId %d, PollSN %d, VR_H %d Timer started for 1 milisecond.
Line 668: POLL SUFI: Event not posted as PollSn %d is same as last received %d 
Line 683: POLL SUFI: RbId %d, PollSN %d, VR_H %d  Message Posted directly 
Line 688: POLL SUFI: Event not posted as PollSn %d is same as last received %d 
Line 708: POLL SUFI Handler: RbId %d, PollSN %d, VR_H %d
Line 712: POLL SUFI updated VR_H: RbId %d, VR_H %d
Line 733:  CW %d, RListSn %d
Line 749: RLIST_SUFI(Invalid)OutWin: RbId %d, RListSn %d, VT_A %d, VT_S(-1):%d, InvalidStatusPduCnt %d
Line 794: RLIST_SUFI(Invalid)OutWin: RbId %d, RListSn %d, VT_A %d, VT_S(-1):%d, InvalidStatusPduCnt %d
Line 844: BitOffset of Status PDU is not vaild(ACK): RbId %d, BitOffset %d, ReportSize %d
Line 852: RX SUFI_ACK: RbId = %d, LSN = %d
Line 865:  ACK_SUFI(In window,Ignored): RbId %d, VT_A %d, VT_S %d, LowerEdge %d, AckLsn %d, InvalidStatusPduCnt %d
Line 880:  ACK_SUFI(out window):RbId %d, VT_A %d, VT_S %d, LowerEdge %d, AckLsn %d 
Line 889:  ACK_SUFI WaitMrwAckSufi is TRUE(Ignore): RbId %d, VT_A %d, VT_S %d, AckLsn %d 
Line 919:  ACK_SUFI(Inconsistent): RbId %d, PduSn %d
Line 965: BitOffset of Status PDU is not vaild(LIST): RbId %d, BitOffset %d, ReportSize %d
Line 972: PduHandle is NULL: RbId %d
Line 984: RX SUFI_LIST: RbId = %d, SnValue = %d, LValue = %d, ListLength = %d
Line 992:  LIST_SUFI(Invalid)OutWin: RbId %d, PduSn %d, LValue %d, VT_A %d, VT_S(-1):%d, InvalidStatusPduCnt %d
Line 1006:  LIST_SUFI(Inconsistent)_No match SN, Re-Seaching now: RbId %d, PduSn %d, VT_A %d, VT_S %d
Line 1013:  LIST_SUFI(Inconsistent)_No match twice. Invalid NACK: RbId %d, PduSn %d, VT_A %d, VT_S %d
Line 1021:  LIST_SUFI(Inconsistent): RbId %d, PduSn %d
Line 1063: BitOffset of Status PDU is not vaild(BITMAP): RbId %d, BitOffset %d, ReportSize %d
Line 1090:  Invalid bitmap Sufi: RbId %d, FSN %d, VT_A %d, VT_S %d
Line 1101: BitOffset of Status PDU is not vaild(BITMAP): RbId %d, BitOffset %d, ReportSize %d
Line 1109: RX SUFI_BITMAP: RbId %d, Length %d, FSN %d, Byte %X, ReportedLastSn %d, VT_A %d, VT_S %d
Line 1122:  SUFI_BITMAP(Invalid)OutWin: RbId %d, PduSn %d, VT_A %d, VT_S:%d, InvalidStatusPduCnt %d
Line 1138:  PDU SN was found: FSN %d, PduSn %d
Line 1142:  PduHandle is NULL: FSN %d
Line 1155:  FSN is in window: FSN %d, PduSn %d
Line 1162: Already deleted: FSN %d
Line 1167:  Ignore(Already deleted): FSN %d
Line 1176: BitOffset of Status PDU is not vaild(BITMAP): RbId %d, BitOffset %d, ReportSize %d
Line 1183: SUFI_BITMAP: RbId %d, Length %d, FSN %d, Byte %X, ReportedLastSn %d, VT_A %d, VT_S %d
Line 1202:  PduHandle is NULL
Line 1211:  Inconsistent: SN %d
Line 1219:  Pdu already deleted(Nack): PduSn %d
Line 1227:  PduHandle is NULL
Line 1236:  Inconsistent, PduSn %d
Line 1244:  Pdu already deleted(Ack): PduSn %d
Line 1278: BitOffset of Status PDU is not vaild(WINDOW): RbId %d, BitOffset %d, ReportSize %d
Line 1287:  SUFI_WINDOW: WSN = %d
Line 1292: urlc_IspInterpretWindowSufi - WSN = 0 [INVALID Case!!]
