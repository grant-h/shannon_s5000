Line 124: Enter urlc_IndLowerSap: Tokens %d, TokensMax %d, Handles %d, HandlesMax %d
Line 144: TimerStatusProhibitToken makes NULLL: RbId %d
Line 155: TimerPollToken makes NULLL: RbId %d
Line 181: TimerPollProhibitToken makes NULLL: RbId %d, PduListRoot %X
Line 187: Exit urlc_IndLowerSap: Tokens %d, TokensMax %d, Handles %d, HandlesMax %d
Line 231: Error detected: Invalid message - %X
Line 257: DataReq() : DataReqPtr %x, InstanceId %x, NumResponses %d
Line 301: urlc_LshUmacDataReq - Instance not found
Line 355: U-RLC Discard DL Data: RbId=%d, Mode:MODE_TM, Reason: Size is 0
Line 414: U-RLC Discard DL Data: RbId=%d, Mode:MODE_TM, Reason: Size is 0
Line 477: MAC asking for data on %d Rbs > MaxNoRbs not handling this request
Line 487: Error detected: new UMAC data request list creation failed.
Line 505: MAC asking for More than URLC_MAX_NUM_UL_PDUS: RbId %d, ReqPdus %d, InstanceId %x
Line 537: UlMaxBuffer was updated(TDD): RbId %d, UlMaxBuffer %d
Line 551: UlMaxBuffer was changed(EDCH): RbId %d, Prev %d -> 130
Line 575: UlMaxBuffer was changed(RbId %d, UlTrchType %d): Prev %d -> Curr %d
Line 582: Max TrBk Nums is 0(RbId %d, UlTrchType %d): 24
Line 608: StatusInd has strange value(RbId %d, Pdusize=0)
Line 625: StatusInd() : RbId %d, DataReqPtr %x, NumOfRb %d, ReqPdus %d, InstanceId %x
Line 647: Error: not supported Mode(%d)
Line 656: Exit urlc_LshHandleStatusInd(): didn't make any requests
Line 755: Error: not supported Mode(%d)
Line 762: Exit urlc_LshHandleStatusInd(): RbId %d, UmacDataReqListPtr %x, RespExpected %d, NumEntries %d
Line 807: VR_R or VR_H is not Zero: RbId %d, VR_R %d, VR_H %d
Line 912: Error detected: UMAC_DATA_REQ creation failed.
Line 929: Error detected: *NewListEntry is NULL.
Line 1122: Forcefully triggering status prohibit timer if stopped VR_R %d VR_H %d gTActualPauseDuration %d
Line 1132: urlc_LshAmTxIndProcedures: RbId=%d sending URLC_TIMER_START to UL (timer value=%d)
Line 1196: Unsafe to process the msg or IIM failure: ul2ul_LshAmTxIndProcedures RbId=%d
Line 1220: ul2ul_LshAmTxIndProcedures: RbId=%d starting STATUS_TIMER_PROHIBIT (timer value=%d)
Line 1276: urlc_LshTraceInterrpretDlMob: RbId=%d did not have AmEis Entity!!
Line 1287: urlc_LshTraceInterrpretDlMob: RbId=%d did not have UmEis Entity!!
Line 1300: urlc_LshTraceInterrpretDlMob: RbId = %d AM PDU ->iSegBitSize = %d, Discarded
Line 1314: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, PollBit=%d, VR_R=%d, VR_H=%d, Sn=%d:
Line 1320: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, PollBit=%d, VR_R=%d, VR_H=%d, Sn=%d:
Line 1322: Data: 
Line 1329: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, Status Report:
Line 1330: Data: 
Line 1334: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, Status Report:
Line 1335: Data: 
Line 1342: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, Reset:
Line 1343: Data: 
Line 1347: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, Reset:
Line 1348: Data: 
Line 1355: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, Reset Ack:
Line 1356: Data: 
Line 1360: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, Reset Ack:
Line 1361: Data: 
Line 1367: URLC DL Data: RbId = %d, MODE_AM, BitSize = %d, Unknown Packet Type:
Line 1378: URLC DL Data: RbId=%d, MODE_UM, BitSize=%d, VR_US=%d, Sn=%d
Line 1382: URLC DL Data: RbId=%d, MODE_UM, BitSize=%d, VR_US=%d, Sn=%d
Line 1383: Data: 
Line 1392: URLC DL Data: RbId=%d, MODE_TM, BitSize=%d:
Line 1396: URLC DL Data: RbId=%d, MODE_TM, BitSize=%d:
Line 1397: Data: 
Line 1402: URLC DL Data: RbId = %d, MODE_TM, BitSize = %d:
Line 1441: urlc_LshTraceInterrpretUlMob: RbId=%d did not have AmEis Entity!!
Line 1452: urlc_LshTraceInterrpretUlMob: RbId=%d did not have UmEis Entity!!
Line 1480: URLC UL Data: RbId=%d, MODE_AM, BitSize=%d, Status Report:
Line 1481: Data: 
Line 1485: URLC UL Data: RbId=%d, MODE_AM, BitSize=%d, Status Report:
Line 1486: Data: 
Line 1493: URLC UL Data: RbId=%d, MODE_AM, BitSize=%d, Reset:
Line 1497: URLC UL Data: RbId = %d, MODE_AM, BitSize = %d, Reset:
Line 1498: Data: 
Line 1506: URLC UL Data: RbId=%d, MODE_AM, BitSize=%d, Reset Ack:
Line 1510: URLC UL Data: RbId = %d, MODE_AM, BitSize = %d, Reset Ack:
Line 1511: Data: 
Line 1516: URLC UL Data: RbId = %d, MODE_AM, BitSize = %d, Unknown Packet Type:
Line 1538: URLC UL Data: RbId %d, MODE_AM, RlcH %x, Bits %d, Poll %d, VT_A %d, VT_S %d, SN %d:
Line 1543: URLC UL Data: RbId=%d, MODE_AM, RlcH=%x, BitSize=%d, PollBit=%d, VT_A=%d, VT_S=%d, Sn=%d:
Line 1545: Data: 
Line 1563: URLC UL Data: RbId=%d, RlcH=%x, MODE_UM, BitSize=%d, Sn=%d:
Line 1567: URLC UL Data: RbId=%d, RlcH=%x, MODE_UM, BitSize=%d, Sn=%d:
Line 1568: Data: 
Line 1581: URLC UL Data: RbId=%d, MODE_TM, BitSize=%d:
Line 1585: URLC UL Data: RbId=%d, MODE_TM, BitSize=%d:
Line 1586: Data: 
Line 1593: URLC UL Data: RbId %d, Invalid Mode
Line 1684: MAC-hs reset: Configuration check(RbId %d, Mode %d)
Line 1689: MAC-hs reset: RbId %d, VR_R %d, VR_H %d
Line 1693: MAC-hs reset: No poll bit trigger in RX for RbId %d 
