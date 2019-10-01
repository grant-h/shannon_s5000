Line 321: urlc_FlushMsgPools:  PoolType %d, curPoolSize %d
Line 329: urlc_FlushMsgPools: Mismatch PoolArrays: PoolType %d, curPoolSize %d
Line 403: urlc_FlushPools: Mismatch PoolArrays: PoolType %d, curPoolSize %d
Line 418: urlc_InitPools() Start!
Line 455: [PktProc] urlc_FillUpPktProcQueue() Start! 
Line 470: [PktProc] After fill up, g_uRlcPktProcFreeQueNum(%u) uRlcPktProcFreeOffset(%u)
Line 612: urlc_GetRbPduTxSequenceNumber invalid EIS [RbId=%d]
Line 644: urlc_GetRbPduTxSequenceNumber:SegmentationFlowCntrlFifoCnt=%d, SduCnt=%d,  SegSDUSize=%d, FifoSduSuze=%d
Line 653: urlc_GetRbPduTxSequenceNumber: RbId %d, SduBufferOccupancy %d, Num %d, VT_S %d, NextSegSN %d, RetPduSn %d, UlPduSize %d
Line 663: Error: not supported Mode(%d)
Line 664: WARNING: urlc_GetRbPduTxSequenceNumber invalid mode [RbId=%d]
Line 816: urlc_GetMemBlock: Invalid input parameter
Line 946: Error detected: urlc_FreeMemBlock: Invalid input parameter
Line 975: Empty Pool size
Line 1119: Error detected: NumPdus %d is larger than URLC_MAX_NUM_DL_PDUS
Line 1163: urlc_LoadForSegCreatePduInputDefined_Um: urlc_SegCreatePdu return 0
Line 1213: Error detected: InputStruct memory allocation failed.
Line 1235: urlc_LoadForSegCreatePdu: RbId %d, State %d, SduId %d
Line 1251: Error detected: Unsupported mode %d, RbId %d
Line 1283: EUrlcurlc_SegCreatePduA: RbId %d, MODE_AM
Line 1285: urlc_LoadSegSduPopCheck(Call urlc_SegCreateAmPdu): RbId %d
Line 1329: Poll(VT(PDU)) [RbId=%d, VT_PDU = %d]
Line 1359: Poll(VT(SDU)) [RbId=%d, VT_SDU = %d]
Line 1379: Polling triggered [RbId=%d, Settings=%d, TimerPollProhibitToken=%x]
Line 1398: urlc_SetPduPollBitSpecial: Set poll bit [RbId=%d, Settings=%d, TimerPollProhibitToken=%x]
Line 1460: Error: not supported Mode(%d)
Line 1465: CreateSdu(RbId=%d, DataSize=%d)
Line 1467: CreateSdu(RbId=%d, DataSize=%d)
Line 1515: Create SDU Failure; CurrEntry is NULL
Line 1541: Error: not supported Mode(%d)
Line 1556: CreateSDU(Loopback): RbId %d, Mode %d, DataType %d, PduSnBot %d, PduSnTop %d, SduSize %d
Line 1579: Error detected: SduCnt %d exceeds MAX_BURST_SDU_CNT
Line 1612: CreateSDU: RbId %d, Mode %d, Progress %d, PduSnBot %d, PduSnTop %d, SduSize %d, CurrEntry %x
Line 1631: CreateSDU(Delivery): RbId %d, Mode %d, SduCnt %d, Progress %d, DlSduIndex %d, IsDelivery %d, SduData %x
Line 1663: Error detected: Unknown Mode %d
Line 1692: Unsafe to process. Token Data Expired RbId=%d
Line 1726: Unsafe to process. Token Data Expired RbId=%d
Line 1876: Discard DL Data(RbId not correctly configured): RbId %d, Mode %d, Num %d, Param %d
Line 1880: Discard DL Data(PDU Erroneous indicated by U-MAC): RbId %d, Mode %d, SN %d, Param %d
Line 1884: Discard DL Data(Undecodable control PDU): RbId %d, Mode %d, SN %d, Param %d
Line 1889: Discard DL Data(Unsafe to process): RbId %d, Mode %d, F_SN %d, L_SN %d, Num %d, Param %d
Line 1901: Discard DL Data(Outside Rx Window): RbId %d, AM, F_SN %d, L_SN %d, Num %d, VR_R %d, VR_H %d, Param %d
Line 1912: Discard DL Data(Outside Rx Window): RbId %d, UM, F_SN %d, L_SN %d, Num %d, VR_US %d, DlRecvWinSize %d, Param %d
Line 1919: Discard DL Data(HE Bits invalid(bit 6 is set)) : RbId %d, Mode %d, SN %d, Param %d
Line 1930: Discard DL Data(Invalid LI): RbId %d, Mode %d, SN %d, ActiveHfn %d, ActivePtr %d, Param %d
Line 1935: Discard DL Data(Invalid R2 in piggy status): RbId %d, Mode %d, SN %d, Param %d
Line 1939: Discard DL Data(SDU List Parse Failed): RbId %d, Mode %d, F_SN %d, L_SN %d, Num %d, Param %d
Line 1943: Discard DL Data(Status Report Discarded. In reset procedure): RbId %d, Mode %d, Param %d
Line 1947: Discard DL Data(PDU Discarded. In reset procedure): RbId %d, Mode %d, F_SN %d, L_SN %d, Num %d, Param %d
Line 1951: Discard DL Data(Invalid PDU size): RbId %d, Mode %d, SN %d, Param %d
Line 1955: Discard DL Data(SHandles Over): RbId %d, Mode %d, F_SN %d, L_SN %d, Num %d, Param %d
Line 1966: Discard DL Data(Duplicate): RbId %d, AM, F_SN %d, L_SN %d, Num %d, VR_R %d, VR_H %d, Param %d
Line 1978: Discard DL Data(Duplicate): RbId %d, UM, F_SN %d, L_SN %d, Num %d, VR_US %d, DlRecvWinSize %d, Param %d
Line 1986: Discard DL Data(Unknown): RbId %d, Mode %d, SN %d, Param %d
Line 3132: Error detected: Ul2_GetMsgMemBlock: Invalid pool type %d
Line 3153: Error detected: Ul2_GetMsgMemBlock: MemBlock is NULL.
Line 3399: Error detected: urlc_FreeMemBlock: Invalid pool type %d
