Line 130: Initialising Measurement Values
Line 130: Initialising Measurement Values
Line 181: lcsm_FindFreeLocReqNode: No free node in the list
Line 181: lcsm_FindFreeLocReqNode: No free node in the list
Line 189: index_number[LcsmCurrentStackId] %d
Line 189: index_number[LcsmCurrentStackId] %d
Line 203: AddLocReqNode
Line 203: AddLocReqNode
Line 230: lcsm_DelLocReqNode: trying to Delete Invalid Index
Line 230: lcsm_DelLocReqNode: trying to Delete Invalid Index
Line 263: In function DelLocReqNode
Line 263: In function DelLocReqNode
Line 301: lcsm_GetSessionId -Invalid Session Type
Line 301: lcsm_GetSessionId -Invalid Session Type
Line 315: lcsm_HandleSuspReq: RR_LCSM_SUSPEND_REQ
Line 315: lcsm_HandleSuspReq: RR_LCSM_SUSPEND_REQ
Line 336: lcsm_HandleRRCSuspReq: URRC_LCSM_STOP_MEAS_IND
Line 336: lcsm_HandleRRCSuspReq: URRC_LCSM_STOP_MEAS_IND
Line 361: LCSM_PERIODIC_TIMER is Stopped
Line 361: LCSM_PERIODIC_TIMER is Stopped
Line 372: Processing REL7 Msr Pos Req
Line 372: Processing REL7 Msr Pos Req
Line 379: Velocity Request Present
Line 379: Velocity Request Present
Line 394: GPS positioning method is present
Line 394: GPS positioning method is present
Line 398: Gallileo positioning method is present
Line 398: Gallileo positioning method is present
Line 402: SBASS positioning method is present
Line 402: SBASS positioning method is present
Line 407: Modernized GPS  positioning method is present
Line 407: Modernized GPS  positioning method is present
Line 412: QZSS positioning method is present
Line 412: QZSS positioning method is present
Line 416: Glonass positioning method is present
Line 416: Glonass positioning method is present
Line 422: GANSS assist data is recieved in Pos Req
Line 422: GANSS assist data is recieved in Pos Req
Line 453: Additional GPS assist data to be processed later based on GPS chip support
Line 453: Additional GPS assist data to be processed later based on GPS chip support
Line 621: Function: lcsm_HandleRrlpMeasReq
Line 621: Function: lcsm_HandleRrlpMeasReq
Line 629: session_id = %d, reference_number = %d
Line 629: session_id = %d, reference_number = %d
Line 632: Both present and commanded ref no are same: Ignore
Line 632: Both present and commanded ref no are same: Ignore
Line 650: loc_req_db_start = %d
Line 650: loc_req_db_start = %d
Line 662: Unable to get free Loc Req Node, Index %d
Line 662: Unable to get free Loc Req Node, Index %d
Line 697: Adding free node , index = %d
Line 697: Adding free node , index = %d
Line 702: Assistance Data in Msr Position Req 
Line 702: Assistance Data in Msr Position Req 
Line 709: Deleting node, index = %d  
Line 709: Deleting node, index = %d  
Line 715: No nodes init queue
Line 715: No nodes init queue
Line 739: Setting index %d
Line 739: Setting index %d
Line 754: Rel5 Msr Pos extensions Present
Line 754: Rel5 Msr Pos extensions Present
Line 777: lcsm_HandleRrcPosCapabilityReq
Line 777: lcsm_HandleRrcPosCapabilityReq
Line 787: Sending LCSM_NS_POS_CAP_REQ
Line 787: Sending LCSM_NS_POS_CAP_REQ
Line 806: lcsm_HandleRrcMeasCmd: methodType = %d, Hor_acc_present = %d, hor_Acc= %d, Ver_acc_present = %d,  Ver_Acc = %d
Line 806: lcsm_HandleRrcMeasCmd: methodType = %d, Hor_acc_present = %d, hor_Acc= %d, Ver_acc_present = %d,  Ver_Acc = %d
Line 811: gps_TimingOfCellWanted = %d, addition_assistance_data_req = %d
Line 811: gps_TimingOfCellWanted = %d, addition_assistance_data_req = %d
Line 822: Sending LCSM_NS_GPS_RELEASE
Line 822: Sending LCSM_NS_GPS_RELEASE
Line 828: Periodic Reporting Timeout Value: %d
Line 828: Periodic Reporting Timeout Value: %d
Line 833: lcsm_HandleRrcMeasCmd: GanssDataPresent = %d
Line 833: lcsm_HandleRrcMeasCmd: GanssDataPresent = %d
Line 850: Set global index_number in SetIndex %d
Line 850: Set global index_number in SetIndex %d
Line 862: Get global index_number in GetIndex %d
Line 862: Get global index_number in GetIndex %d
Line 890: Same Ref Number Flag %d
Line 890: Same Ref Number Flag %d
Line 907: index_number in GetIndexOfSession(loc_req_db_start[LcsmCurrentStackId]) %d
Line 907: index_number in GetIndexOfSession(loc_req_db_start[LcsmCurrentStackId]) %d
Line 934: Entering  lcsm_HandleFixErrorInd Function 
Line 934: Entering  lcsm_HandleFixErrorInd Function 
Line 982: LCSM_RR_APDU_IND Sent to RR with location Error :Error Cause = %s
Line 982: LCSM_RR_APDU_IND Sent to RR with location Error :Error Cause = %s
Line 1006: lcsm_HandleFixErrorInd: Sending LCSM_URRC_MEAS_ERROR_REQ
Line 1006: lcsm_HandleFixErrorInd: Sending LCSM_URRC_MEAS_ERROR_REQ
Line 1029: lcsm_HandleGanssFixErrorInd: Sending LCSM_URRC_MEAS_ERROR_REQ: error_cause = %d
Line 1029: lcsm_HandleGanssFixErrorInd: Sending LCSM_URRC_MEAS_ERROR_REQ: error_cause = %d
Line 1079: lcsm_ProcessRrApdu: RRLP Component Choice %d
Line 1079: lcsm_ProcessRrApdu: RRLP Component Choice %d
Line 1083: RRLP Assistance Data recieved %d
Line 1083: RRLP Assistance Data recieved %d
Line 1118: the ACK message LCSM_RR_APDU_IND is successfully sent for the  Assistance Data recieved
Line 1118: the ACK message LCSM_RR_APDU_IND is successfully sent for the  Assistance Data recieved
Line 1122: Pal Mem Free Failed: lcsm_ProcessRrApdu
Line 1122: Pal Mem Free Failed: lcsm_ProcessRrApdu
Line 1165: RRLP Msr Position Req Recieved
Line 1165: RRLP Msr Position Req Recieved
Line 1170: RRLP Protocol Error Recieved
Line 1170: RRLP Protocol Error Recieved
Line 1176: RRLP Position capability Request Received
Line 1176: RRLP Position capability Request Received
Line 1184: [Rrlp_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 1184: [Rrlp_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 1194: End of the Function : lcsm_ProcessRrApdu
Line 1194: End of the Function : lcsm_ProcessRrApdu
Line 1223: GANSS Position Methods Requested by nw
Line 1223: GANSS Position Methods Requested by nw
Line 1251: Assistance Needed requested by nw
Line 1251: Assistance Needed requested by nw
Line 1256: Ganss Extension Container Requested by nw
Line 1256: Ganss Extension Container Requested by nw
Line 1296: Position Capability Response is sent to RR
Line 1296: Position Capability Response is sent to RR
Line 1307: PosCapabilityRsp Mem Free Failed: lcsm_HandlePositionCapReq
Line 1307: PosCapabilityRsp Mem Free Failed: lcsm_HandlePositionCapReq
Line 1325: lcsm_HandleProtocolError 
Line 1325: lcsm_HandleProtocolError 
Line 1336: lcsm_HandleProtocolError: Error in lcsm_RrlpEncode
Line 1336: lcsm_HandleProtocolError: Error in lcsm_RrlpEncode
Line 1348: LCSM_RR_APDU_IND Sent to RR with Protocol Error %s
Line 1348: LCSM_RR_APDU_IND Sent to RR with Protocol Error %s
Line 1493: Rrlp_ProAsnEncode: Success
Line 1493: Rrlp_ProAsnEncode: Success
Line 1496: Rrlp_ProAsnEncode: SIZE_INVALID
Line 1496: Rrlp_ProAsnEncode: SIZE_INVALID
Line 1499: Rrlp_ProAsnEncode: CHOICE_INVALID
Line 1499: Rrlp_ProAsnEncode: CHOICE_INVALID
Line 1502: Rrlp_ProAsnEncode: RANGE_INVALID
Line 1502: Rrlp_ProAsnEncode: RANGE_INVALID
Line 1505: Rrlp_ProAsnEncode: UNSUPPORTED_PDU
Line 1505: Rrlp_ProAsnEncode: UNSUPPORTED_PDU
Line 1508: Rrlp_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
Line 1508: Rrlp_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
Line 1511: Rrlp_ProAsnEncode: Misc error #: %d
Line 1511: Rrlp_ProAsnEncode: Misc error #: %d
Line 1517: Rrlp_ProAsnEncode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 1517: Rrlp_ProAsnEncode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 1524: Rrlp_ProAsnEncode Success, pdu(%d) packedLen(%d)
Line 1524: Rrlp_ProAsnEncode Success, pdu(%d) packedLen(%d)
Line 1596: Rrlp_ProAsnDecode: Success
Line 1596: Rrlp_ProAsnDecode: Success
Line 1599: Rrlp_ProAsnDecode: SIZE_INVALID
Line 1599: Rrlp_ProAsnDecode: SIZE_INVALID
Line 1602: Rrlp_ProAsnDecode: CHOICE_INVALID
Line 1602: Rrlp_ProAsnDecode: CHOICE_INVALID
Line 1605: Rrlp_ProAsnDecode: RANGE_INVALID
Line 1605: Rrlp_ProAsnDecode: RANGE_INVALID
Line 1608: Rrlp_ProAsnDecode: UNSUPPORTED_PDU
Line 1608: Rrlp_ProAsnDecode: UNSUPPORTED_PDU
Line 1611: Rrlp_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
Line 1611: Rrlp_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
Line 1614: Rrlp_ProAsnDecode: Misc error #: %d
Line 1614: Rrlp_ProAsnDecode: Misc error #: %d
Line 1620: Rrlp_ProAsnDecode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 1620: Rrlp_ProAsnDecode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 1626: Rrlp_ProAsnDecode Success, pdu(%d) unpackedLen(%d)
Line 1626: Rrlp_ProAsnDecode Success, pdu(%d) unpackedLen(%d)
Line 1727: [Rrlp_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 1727: [Rrlp_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 1750: [lcsm_HandleProtocolErrorRsp]
Line 1750: [lcsm_HandleProtocolErrorRsp]
Line 1752: [Error Code]: %s
Line 1752: [Error Code]: %s
Line 1756: [Protocol Error , Extension Conatiner Present]
Line 1756: [Protocol Error , Extension Conatiner Present]
