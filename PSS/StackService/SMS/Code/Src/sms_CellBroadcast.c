Line 199: sms_SendForcedCbListUpdReqMsg in %s state
Line 203: ETWS Activated along with CBS
Line 211: GAPI Requesting to Activate All or Some Cell Broadcast Messages in sms_DecodeSmsCbListUpdReqMsg
Line 255: DecodeSmsCbListUpdReqMsg : sms_CbOperator : %d
Line 260: SMS is not-initialised. Send Failure Response to AP for SMS_CB_LIST_UPD_REQ
Line 265: ListPtr is freed
Line 276: DecodeSmsCbListUpdReqMsg in %s state, ListReqType->0x%x, Cell Broadcast List Size -> %d
Line 292: Cell Broadcast List Data  -> ...
Line 358: CBS is disabled based on registry value
Line 387: ETWS Activated along with CBS
Line 425: Need to keep CBS as enabled
Line 473: Need to keep CBS as disabled
Line 483: Unknown ListReqType: %d
Line 490: Rejecting GAPI's MO Req in sms_DecodeSmsCbListUpdReqMsg ! RAT Change in progress !!
Line 516: ListPtr is freed
Line 556: CBS is enabled in non-commerial plmn
Line 580: CB disabled from AP,don't activate for EF_CBMID
Line 586: CBS is enabled in NO SIM state
Line 591: sms_CbRegVals: %d
Line 592: hfcn result: %d
Line 621: There is no pending activation request
Line 634: sms_HandleEtwsConfigReq ENTRY nReqType =%d nRatmode = %d
Line 635: sms_EtwsUserEnable =%d sms_EtwsActiveMode = %d sms_EtwsActivateAll = %d
Line 652: nRatmode = %d
Line 672: nRatmode = %d
Line 696: sms_EtwsActiveMode = %d
Line 705: nReqType = %d
Line 709: sms_EtwsUserEnable = %d
Line 722: sms_SendSmsCbListUpdRspMsg in state %s, SmsCbListUpdRsp.Result -> %02x
Line 753: sms_PtrBodySnd->SmsCbListUpdRsp.CBListSize -> %d, sms_PtrBodySnd->SmsCbListUpdRsp.CBServiceState -> %d 
Line 780: Displaying Message Contents: %s Activate Status -> %s
Line 809: Displaying Message Contents: %s Activate Status -> %s
Line 837: Displaying Message Contents: %s Activate Status -> %s
Line 857: sms_DecodePhDataIndBlockMsg in %s state
Line 860: sms_DecodePhDataIndBlockMsg LteDataActiveStatus %d, SMS_CB_DYNAMIC_DISABLR_FLAG = %d
Line 880: LastBlock indicator = %d,BlockType = %d
Line 929: Received FILL block, which means NULL message. Discarding CBS message
Line 990: Incorrect Channel Number. IT should be CHN_CBCH
Line 1006: sms_DecodeGrrETWSDataIndMsg sms_EtwsActiveMode = %d GrrSmsEtwsInd = %d
Line 1015: sms_DecodeGrrETWSDataIndMsg nMsgID = %d
Line 1041: sms_DecodeGrrETWSDataIndMsg ETWS Message without Security
Line 1044: sms_DecodeGrrETWSDataIndMsg SerialNumber = %d warningType = %d
Line 1066: sms_DecodeRrcETWSDataIndMsg sms_EtwsActiveMode = %d
Line 1076: sms_DecodeRrcETWSDataIndMsg nMsgID = %d
Line 1085: UrrcSmsEtwsInd.Payload.etwsInfo.warningType
Line 1087: UrrcSmsEtwsInd.Payload.etwsInfo.slNo
Line 1092: UrrcSmsEtwsInd.etwsSecurityInfo
Line 1126: sms_DecodeRrcETWSDataIndMsg ETWS Message without Security
Line 1128: sms_DecodeRrcETWSDataIndMsg SerialNumber = %d sms_DecodeRrcETWSDataIndMsg warningType = %d
Line 1133: 
Line 1175: sms_DecodePhDataIndMsgBlock1Msg in %s state
Line 1182: All zeros received in First block
Line 1224: Memory of scheduled MsgId is FREED
Line 1231: New Message ID %d Not Matched with schedule message
Line 1241: First Block Received, Correct Language and Msg Identifier
Line 1263: First Block Does Not indicate that it is Block 1, Ignoring Message
Line 1282: sms_DecodePhDataIndSchedBlock1Msg in %s state
Line 1290: Msg Received in Wrong State in sms_DecodePhDataIndSchedBlock1Msg
Line 1322: sms_DecodePhDataIndBlock2Msg in %s state
Line 1337: Time elapsed: %d 
Line 1340: Receiving Block 2 in sms_DecodePhDataIndSchedBlock2Msg
Line 1360: Receiving Block 2 in Incorrect State in sms_DecodePhDataIndSchedBlock2Msg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Line 1376: sms_DecodePhDataIndBlock3Msg in %s state
Line 1391: Time elapsed: %d 
Line 1394: Receiving Block 3 in sms_DecodePhDataIndSchedBlock3Msg
Line 1414: Receiving Block 3 in Incorrect State in sms_DecodePhDataIndSchedBlock3Msg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Line 1457: Duplicate CBS received, returning, sms_CbBlock1Type %d
Line 1465: New CBS is received..Add to DB and send CB_IND
Line 1471: Length Error,can't send CB Msg
Line 1492: Duplicate CBS received, returning
Line 1497: New CBS is received..Add to DB and sed CB_IND
Line 1506: Data Type -> SMS_CB_UBMC_DATA_MODE
Line 1507: MessageIdentifer -> %04d, SerialNumber -> %02d, DataCodingScheme -> %02d 
Line 1508: sms_ProcessUbmcDataIndMsg in %s state, CbStr -> 
Line 1525: Wrong RAT in sms_SendCbInd
Line 1543: sms_ProcessPhDataIndLastBlockMsg in %s state
Line 1561: Time elapsed: %d 
Line 1564: CBS reception time Elapsed. Discarding CBS msg
Line 1570: Receiving last block in sms_ProcessPhDataIndLastBlockMsg
Line 1577: PageNumber =TotalPages,Re-Seting the TotalPages
Line 1598: CB: Schedule (%d,%d)
Line 1608: Receiving Block 3 in Incorrect State in sms_DecodePhDataIndSchedBlock3Msg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Line 1628: Bad Blcok Received in sms_DecodePhDataIndBadBlockMsg in %s state
Line 1633: Receiving Bad Block in Incorrect State in sms_DecodePhDataIndSchedBlock3Msg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Line 1640: Receiving Bad Block in sms_DecodePhDataIndSchedBlock3Msg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Line 1663: sms_SendGsmSmsCbInd in %s state
Line 1689:  Length of Broadcast Data Sent : %d
Line 1701: Memory allocation fails for sms_PtrBodySnd->SmsLcsmAsstdata.buf_ptr 
Line 1740: - MsgRatMode -> %02x
Line 1741: - MsgCode -> %02x
Line 1742: - MsgId -> %02x
Line 1743: - GeographicalArea -> %02x
Line 1744: - UpdateNumber -> %02x
Line 1745: - DataCodingScheme -> %02x
Line 1746: - TotalPages -> %02x
Line 1747: - PageNumber -> %02x
Line 1748: - CbStrLength -> %02x
Line 1749: - Language -> %02x
Line 1750: - CbMsgType -> %02x
Line 1779: sms_ProcessSmsCbLangReqMsg in %s state, ReqType -> %d, List Size -> %d
Line 1782: Language list  -> ...
Line 1806: sms_ProcessSmsCbLangReqMsg - Language Out of Bounds
Line 1828: Language ID (%x) not found in List sms_ProcessSmsCbLangReqMsg - Language Out of Bounds
Line 1838: Rejecting GAPI's MO Req in sms_ProcessSmsCbLangReqMsg ! RAT Change in progress !!
Line 1879: CB: SetB %d
Line 1890: CB: SetE %d
Line 1910: CB: SetNew %d, %d
Line 1918: CB: SetRepeatReadingAdv %d
Line 1923: CB: Skip InvalidSlot %d
Line 1940: CB: Set for ATT %d
Line 1953: CB: Skip OptionalFreeSlot %d
Line 1957: CB: Skip UndefinedFreeSlot %d
Line 1987: SendL1cPhCbChStopReq in %s state, Displaying Message Contents: %s STOP Status -> %s
Line 1994: 
Line 2051: Either ETWS Msg Ids are configured or All CBS Msgs are activated
Line 2077: Cell Broadcast List Size -> %d
Line 2081: Cell Broadcast List Data  -> ...
Line 2114: Cell Broadcast List Size -> %d
Line 2118: Cell Broadcast List Data  -> ...
Line 2151: MessageIdentifer=%d, SerialNumber=%d, DataCodingScheme=%d, DataSize=%d, Data addr=%d
Line 2161: Number Of Page is Zero. Making it One.
Line 2187:  Message NOT found in List or Incorrect Language/MsgId, Ignoring Message.
Line 2249: Unknown OperatorType: %d
Line 2324: Only Test Purpose, Ignore later!!
Line 2346: Incorrect MsgId, Ignoring Message!!
Line 2410: DecodeUbmcData41IndMsg in %s state, Cell Broadcast Address ->....
Line 2418: Data Type -> SMS_CB_UBMC_DATA_MODE
Line 2420: MessageIdentifer -> %04d
Line 2421: SerialNumber -> %02d
Line 2422: DataCodingScheme -> %02d
Line 2423: DataSize -> %d
Line 2425: CbStr -> .....
Line 2458: sms_SendUmtsSmsCbInd in %s state
Line 2487: Data Type -> SMS_CB_UBMC_DATA_MODE
Line 2488: MessageIdentifer -> %04d, SerialNumber -> %02d, DataCodingScheme -> %02d, GeographicalArea -> %d
Line 2490: TotalPages -> %d, PageNumber -> %d, DataSize -> %d
Line 2492: CbStr -> .....
Line 2506: CbStr -> .....
Line 2509: CbStr -> .....
Line 2510: BroadcastAddress Size -> %d
Line 2511: DataSize -> %d
Line 2513: BroadcastAddress -> .....
Line 3569: CB: sched messageID = %d
Line 3584: CB: scheduled item stored at location = %d
Line 3683: Page Number->%d, TotalPages->%d, Message ID->%d, Coding Scheme->%d
Line 3686: SerialNumber->%d, Message Code->%d, Update Number->%d, Message Class->%d
Line 3707: Invalid BlockNumber (%02x) in sms_SaveCbMsgBlock.
Line 3759: Cell Broadcast Msg Block (%02x) -> 
Line 3767: Array index exceed in sms_DisplayCbMsgBlockTable
Line 3798: sms_CellBroadcast InitType:%d
Line 3860: Need to keep CBS as disabled
Line 3921: Unknown Initialisation Type (%x) in sms_InitialiseCellBroadcast
Line 3936: sms_CellBroadcast InitType:%d ActiveMode: %d
Line 4021: Unknown Initialisation Type (%x) in sms_InitialiseEtws
Line 4081: Geaographical Area Info -> %s
Line 4093: Network Language -> %s
Line 4247: Saved info: PLMN ID=%x:%x:%x, TAC = %x:%x, CELL ID=0x%x
Line 4248: new PLMN ID=%x:%x:%x, TAC = %x:%x, CELL ID=0x%x
Line 4260: SMS MsgId: 0x%x is ignored
Line 4342: Duplicate CBS received, returning
Line 4350: sms_DecodeEtwsPrimaryInd MsgID = 0x%04X
Line 4373: sms_DecodeEtwsPrimaryInd ETWS Message without Security
Line 4377: sms_DecodeEtwsPrimaryInd SerialNumber = %d warningType = %d
Line 4395: sms_DecodeEtwsSecondaryInd MsgID = 0x%04X
Line 4412: TimerId %d is expired
Line 4427: 
Line 4432: SMS_RR_ACT_MODE_FLAG -> TRUE
Line 4437: SMS_CB_ACT_ALL_FLAG -> TRUE
Line 4442: SMS_CB_ANY_LANG_FLAG -> TRUE
Line 4447: SMS_CMAS_ACT_ALL_FLAG -> TRUE
Line 4452: SMS_CB_USER_ENABLE_FLAG -> TRUE
Line 4456: SMS_ETWS_USER_ENABLE_FLAG -> TRUE
Line 4461: SMS_ETWS_ACT_ALL_FLAG -> TRUE
Line 4466: SMS_CB_DYNAMIC_ENABLE_FLAG -> TRUE
Line 4471: SMS_CB_DYNAMIC_DISABLR_FLAG -> TRUE
Line 4481: sms_HandleGmmCbsConfigInd: CbConfigType = %s
Line 4505: Don't send Activation/Deactivation due to the state is same with previous one.
Line 4538: ETWS Activated along with CBS
Line 4579: Improper CbConfigType, Ignoring Msg
Line 4584: Rejecting Req from MM in sms_HandleGmmCbsConfigInd ! RAT Change in progress !!
Line 4594: sms_DecodeGmmCbsConfigInd: CbConfigType = %s
Line 4635: sms_PlmnTripletToString sms_MccMnc : from (0x%X 0x%X 0x%X)
Line 4636: sms_PlmnTripletToString sms_MccMnc : from (0x%X 0x%X 0x%X)
Line 4637: sms_PlmnTripletToString sms_MccMnc : from (0x%X)
Line 4650: sms_PlmnTripletToString : Invaild PLMN
Line 4675: sms_PlmnTripletToString sms_MccMnc : to (0x%X 0x%X 0x%X)
Line 4676: sms_PlmnTripletToString sms_MccMnc : to (0x%X 0x%X 0x%X)
Line 4677: sms_PlmnTripletToString sms_MccMnc : to (0x%X)
