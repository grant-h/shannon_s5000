Line 145: SecuCh : KEY PROVISION REQ
Line 177: SecuCh : READ REQ
Line 211: SecuCh : WRITE REQ
Line 246: SecuCh : SBOX REQ
Line 315: SecuChTimerExpiry : %dms Timeout(cmd:0x%08X, retry cnt:%d)
Line 324: SecuChTimerExpiry : SECUCH_RETRY(cmd:0x%08X, retry:%d)
Line 334: SecuCh:TimeOut-R:%02d,%08X,No:0x%08X
Line 359: SecuChTimerStop
Line 372: SecuChTimerStart
Line 387: SecuChTimerInit
Line 391: SecuChTimerInit : pal_TmCreateTimer failed
Line 423: SecuChProcessRfsLogging : FILE CREATE FAIL
Line 592: SecuChSendMsg : usLength(%d), FrameCount(%d), Modulo_Size(%d)
Line 608: SecuChSendMsg : memAllocMem failed
Line 628: SECUCH TX: 
Line 633: SecuChSendMsg : hostifSendDataPacket failed (ret=%d)
Line 663: SecuChSendReqMsg : pal_MemAlloc failed
Line 698: SECUCH REQ:  Body.hmac : 
Line 704: SECUCH REQ:  Body.command : 0x%08X
Line 710: SECUCH REQ:  Body.nonceCP : 
Line 726: SecuChSendReqMsg : pal_MemAlloc failed
Line 740: SECUCH REQ:  Body.command : 0x%08X
Line 747: SECUCH REQ:  Body.nonceCP : 
Line 754: SECUCH REQ:  Body.nonceVK : 
Line 762: SECUCH REQ:  Body.type : 0x%08X
Line 769: SECUCH REQ:  Body.size : 0x%08X
Line 774: SECUCH REQ:  Body.offset : 0x%08X
Line 782: SECUCH REQ:  Body.data : 
Line 789: SecuChSendReqMsg : pal_MemAlloc failed
Line 796: SECUCH REQ:  Body.tag : 
Line 804: SecuChSendReqMsg : Already Key Provisioned
Line 816: SecuChSendReqMsg : pal_MemAlloc failed
Line 854: SECUCH REQ:  Header.payload_no : 0x%08X
Line 855: SECUCH REQ:  Header.ret : 0x%08X
Line 856: SECUCH REQ:  Header.command_type : 0x%08X
Line 857: SECUCH REQ:  Header.data_length : 0x%08X
Line 858: SECUCH REQ:  Header.reserved : 0x%08X
Line 859: SECUCH REQ:  Length : 0x%08X
Line 864: SecuChSendReqMsg : SecuChSendMsg failed
Line 876: SecuChSendReqMsg : %d > SECUCH_MAX_BYTE
Line 899: SecuChParseReqMsg : pSecuChRxMsg is NULL
Line 903: SecuChParseReqMsg : mbxSrc(0x%04X), ReqType(%d), ReqSize(%d), Offset(0x%X), ReqData(0x%08X)
Line 923: SecuChParseReqMsg : Already Key Provisioned
Line 934: SecuChParseReqMsg : Not Provisioning Device (fusing=%d, provcass=%d)
Line 939: SecuChParseReqMsg : Invalid Read ReqSize(%d) from 0x%04X
Line 949: SecuChParseReqMsg : Not Provisioning Device (fusing=%d, provcass=%d)
Line 954: SecuChParseReqMsg : Invalid Write ReqSize(%d) from 0x%04X
Line 964: SecuChParseReqMsg : Not Provisioning Device (fusing=%d, provcass=%d)
Line 968: SecuChParseReqMsg : Invalid Read ReqSize(%d) from 0x%04X
Line 976: SecuChParseReqMsg : Invalid msgType(=0x%04X)
Line 986: SecuChParseReqMsg : Fail
Line 995: SecuCh:ReqFail
Line 1024: SECUCH ACK:  Header.payload_no : 0x%08X
Line 1025: SECUCH ACK:  Header.ret : 0x%08X
Line 1026: SECUCH ACK:  Header.command_type : 0x%08X
Line 1027: SECUCH ACK:  Header.reserved : 0x%08X
Line 1028: SECUCH ACK:  Header.data_length : 0x%08X
Line 1029: SECUCH ACK:  Length : 0x%08X
Line 1033: SecuChAckHandler : Invalid payload_no(0x%08X, ReqNo: 0x%08X)
Line 1039: SecuChAckHandler : Invalid return(0x%08X)
Line 1049: SecuChAckHandler : Invalid Length(0x%08X)
Line 1056: SecuChAckHandler : pal_MemAlloc failed
Line 1078: SECUCH ACK:  Body.tag : 
Line 1086: SecuCh:pal_GCM_Decrypt failed(ret = %d)
Line 1093: SECUCH ACK:  Body.command : 0x%08X
Line 1094: SECUCH ACK:  Body.result : 0x%08X
Line 1098: SecuChAckHandler : Unexpected command type (received:0x%08X, expected:0x%08X)
Line 1107: SecuChAckHandler : Already Key Provisioned
Line 1113: SecuChAckHandler : Unexpected result (received:0x%08X, expected:0x%08X)
Line 1123: SECUCH ACK:  Body.nonce : 
Line 1129: SecuChAckHandler : pal_GetNonceCP compare failed
Line 1137: SECUCH ACK:  Body.size : 0x%08X
Line 1139: SECUCH ACK:  Body.data : 
Line 1144: SecuChAckHandler : Invalid read size (Requested read size : %d)
Line 1153: SECUCH ACK:  Body.size : 0x%08X
Line 1155: SECUCH ACK:  Body.data : 
Line 1164: SECUCH ACK:  Body.size : 0x%08X
Line 1167: SecuChAckHandler : Invalid write size (Requested write size : %d)
Line 1175: SecuChAckHandler : Save Nonce VK
Line 1197: SecuChParseAckMsg : pSecuChRxMsg is NULL
Line 1211: SecuChParseAckMsg : HOSTIF_INIT_COMPLETE
Line 1217: SecuChParseAckMsg : Invalid msgType(0x%04X)
Line 1222: SecuChParseAckMsg : pAckMsg is NULL
Line 1227: SECUCH RX: 
Line 1235: SecuChParseAckMsg : SECUCH_RETRY(cmd:0x%08X, retry:%d)
Line 1239: SecuChParseAckMsg : Retry Timeout(cmd:0x%08X)
Line 1251: SecuChParseAckMsg : SECUCH_NEXT(current cmd:0x%08X, next cmd:0x%08X)
Line 1261: SecuChParseAckMsg : Unhandled source message box(=0x%X)
Line 1270: SecuChParseAckMsg Fail
Line 1288: SecuCh:AckFail-R:%02d,%08X,No:0x%08X
Line 1300: SecuChParseAckMsg : SECUCH_FAIL_RETURN(cmd:0x%08X)
Line 1307: SecuChParseAckMsg : SECUCH_COMPLETE(cmd:0x%08X)
Line 1312: SecuChParseAckMsg : SECUCH_IGNORE_ACK(cmd:0x%08X)
Line 1330: Init Semaphore
Line 1346: Send Semaphore
Line 1361: Wait Semaphore
Line 1369: SECUCH SBOX: 
Line 1372: Non provisioning device
Line 1408: Initialize SecuCh Task
Line 1418: Provisioning status :(DEV:%d, FAC:%d, PROV:%d, ROOT:%d)
Line 1451: Start SecuCh Task
Line 1461: pal_MsgRtkReceive failure
Line 1470: pal_MsgRtkReceive : Unsupported TypeOfObj(0x%X)
Line 1480: pal_MsgRtkReceive failure
Line 1493: pal_MsgRtkReceive : Unsupported TypeOfObj(0x%X)
