Line 160: RFS is not ready 
Line 175: RFS%d(index:%d) mailbox is used by %s task
Line 192: Allocation fail RFS%d(index:%d) mailbox by Task name length(%d)
Line 211: RFS%d(index:%d) mailbox is allocated by %s task
Line 221: RFS%d(index:%d) mailbox is released by %c%c%c%c%c... task
Line 226: Release fail RFS%d(index:%d) mailbox
Line 242: rfs_get_mailbox() taskname(%s)
Line 255: RFS mailbox is fully used
Line 275: invalid mailbox_num(%d)
Line 284: pal_MsgRtkReceive() failure
Line 290: invalid msg class(%d)
Line 344: rfs_open_file() 
Line 353: invalid mailbox_num(%d) 
Line 365: rfs_wait_pda_cfrm is failed 
Line 371: tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 377: rfs_open_file() : path(%s), handle(0x%08X), err(0x%X), len(%d), cmd(%X), tid(%d)
Line 403: rfs_close_file() 
Line 412: invalid mailbox_num(%d) 
Line 426: rfs_wait_pda_cfrm is failed 
Line 432: tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 438: rfs_close_file() : handle(0x%08X), err(0x%X), len(%d), cmd(%X), tid(%d)
Line 467: rfs_read_file() 
Line 476: invalid mailbox_num(%d) 
Line 492: rfs_wait_pda_cfrm is failed 
Line 498: tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 503: rfs_read_file() : handle(0x%08X), written_bytes(%d), err(0x%X), len(%d), cmd(%X), tid(%d)
Line 513: [PKTHND_ERR] memFreeMem(0x%X) failure
Line 519: [PKTHND_ERR] <%s(%d)> pal_MemFree failure
Line 549: rfs_write_file() 
Line 558: invalid mailbox_num(%d) 
Line 574: rfs_wait_pda_cfrm is failed 
Line 580: tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 586: rfs_write_file() : handle(0x%08X), written_bytes(%d), err(0x%X), len(%d), cmd(%X), tid(%d)
Line 593: [PKTHND_ERR] memFreeMem(0x%X) failure
Line 599: [PKTHND_ERR] <%s(%d)> pal_MemFree failure
Line 625: [RFS] rfs_lseek_file() 
Line 634: [RFS_ERR] <%s(%d)> invalid mailbox_num(%d) 
Line 646: [RFS_ERR] <%s(%d)> rfs_wait_pda_cfrm is failed 
Line 652: [RFS_ERR] <%s(%d)> tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 658: [RFS] rfs_lseek_file() : handle(0x%08X), offset(%d),  err(0x%X), len(%d), cmd(%X), tid(%d)
Line 666: [RFS_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 672: [RFS_ERR] <%s(%d)> pal_MemFree(0x%X) failure
Line 688: [RFS] rfs_unlink_file() 
Line 697: [RFS_ERR] <%s(%d)> invalid mailbox_num(%d) 
Line 709: [RFS_ERR] <%s(%d)> rfs_wait_pda_cfrm is failed 
Line 715: [RFS_ERR] <%s(%d)> tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 721: [RFS] rfs_unlink_file() : result(0x%08X), err(0x%X), len(%d), cmd(%X), tid(%d)
Line 729: [RFS_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 735: [RFS_ERR] <%s(%d)> pal_MemFree(0x%X) failure
Line 750: [RFS] rfs_rename_file() 
Line 759: [RFS_ERR] <%s(%d)> invalid mailbox_num(%d) 
Line 771: [RFS_ERR] <%s(%d)> rfs_wait_pda_cfrm is failed 
Line 777: [RFS_ERR] <%s(%d)> tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 783: [RFS] rfs_rename_file() : result(0x%08X), err(0x%X), len(%d), cmd(%X), tid(%d)
Line 791: [RFS_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 797: [RFS_ERR] <%s(%d)> pal_MemFree(0x%X) failure
Line 827: [PKTHND_ERR] pkthndHandleNvRfsMsg() : pData==NULL
Line 835: [PKTHND_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 838: [PKTHND_ERR] pkthndHandleNvRfsMsg() : (!(usDataLen>0))
Line 845: [PKTHND] RX RFS : Len=%d, Cmd=0x%X, Transation Id=%d, pNvRfsFrame(0x%08X)
Line 854: [PKTHND_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 865: [PKTHND_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 868: [PKTHND_ERR] <%s(%d)> pal_MemAlloc() failure
Line 880: [PKTHND_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 884: [PKTHND_ERR] <%s(%d)> pal_MemFree(0x%X) failure
Line 886: [PKTHND_ERR] invalid transaction id
Line 901: [PKTHND_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 906: [PKTHND_ERR] <%s(%d)> pal_MemFree(0x%X) failure
Line 909: [PKTHND_ERR] pal_MsgSendTo(pal_EMsgEntity_RFSX(%X)) failure
Line 930: [PKTHND_ERR] pkthndSendNVMsg() : pNvData==NULL || usDataLen==0
Line 943: [PKTHND_ERR] <%s(%d)> hostifSendDataPacket() failure
Line 964: [PKTHND_ERR] pkthndSendRFSMsg() : pNvData==NULL || usDataLen==0
Line 975: [PKTHND_ERR] <%s(%d)> hostifSendDataPacket() failure
Line 1002: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1014: [PKTHND_ERR] <%s(%d)> pkthndSendNVMsg() failure
Line 1046: [PKTHND_ERR] <%s(%d)> rfs_wait_pda_cfrm is failed 
Line 1052: [PKTHND_ERR] <%s(%d)> tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 1058: [PKTHND] pal_Flash_WriteNVDelta() : ucStatus(%d), uiOffset(%d), uiSize(%d)
Line 1067: [PKTHND_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 1073: [PKTHND_ERR] <%s(%d)> pal_MemFree(0x%X) failure
Line 1096: [PKTHND_ERR] <%s(%d)> Invalid parameter : uiSize(%d), uiHandle(0x%08X)
Line 1104: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1114: [PKTHND_ERR] <%s(%d)> pkthndSendRFSMsg() failure
Line 1136: [PKTHND_ERR] <%s(%d)> Invalid parameter : uiSize(%d), pFileData(0x%08X)
Line 1144: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1156: [PKTHND_ERR] <%s(%d)> pkthndSendRFSMsg() failure
Line 1178: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1187: [PKTHND_ERR] <%s(%d)> pkthndSendRFSMsg() failure
Line 1209: [PKTHND_ERR] <%s(%d)> Invalid parameter : uiFilepathLen(%d), pFilepath(0x%08X)
Line 1217: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1229: [PKTHND_ERR] <%s(%d)> pkthndSendRFSMsg() failure
Line 1254: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1265: [PKTHND_ERR] <%s(%d)> pkthndSendRFSMsg() failure
Line 1287: [PKTHND_ERR] <%s(%d)> Invalid parameter : uiFilepathLen(%d), pFilepath(0x%08X)
Line 1295: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1305: [PKTHND_ERR] <%s(%d)> pkthndSendRFSMsg() failure
Line 1319: [PKTHND_ERR] <%s(%d)> Invalid parameter : uiOldFilepathLen(%d), pOldFilepath(0x%08X)
Line 1325: [PKTHND_ERR] <%s(%d)> Invalid parameter : uiNewFilepathLen(%d), pNewFilepath(0x%08X)
Line 1333: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1345: [PKTHND_ERR] <%s(%d)> pkthndSendRFSMsg() failure
