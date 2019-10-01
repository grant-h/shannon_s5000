Line 141: Received length value in Mode A parameter is %d
Line 161: Mode A is received: Number of BIts received is Out of Range by SS, ignoring DRB[%d] and Continuing with nxt DRB
Line 167: Mode A is received: Number of BIts received is not multiple of 8 DRB ID %d received, Value: %d
Line 189: Mode A is received: DRB ID %d received in LBSetup IE is not configured by SS, ignoring DRB and Continuing with nxt DRB
Line 194: Mode A is received: Scaling configured for DRB ID %d,Scaled UL SDU size %d 
Line 263: Mode B received: T Delay timer value changed from %d -> %d 
Line 285: T Delay Timer stopped and re-started in state %d  
Line 289: TDelay Timer cannot be stopped in state %d 
Line 304: TDelay Timer stopped in state %d 
Line 317: TDelay Timer cannot be stopped in state %d 
Line 326: Cannot Delete the T Delay timer in state %d;  
Line 340: Mode B received: T Delay timer got configured with value %d;buffer the received data till timer expiry
Line 352: Mode B received : T Delay Timer got created successfully
Line 359: pal_TmCreateMsgTimer did not return PAL_SUCCESS while creating T Delay Timer
Line 368: Mode B received :T Delay timer not configured; Timer value : 0;fwd the received data directly in UL
Line 493: IsEpsPresentInRelBuff(LBID:%d)) == TRUE: RBID:%d, EPSbearedID:%d, TempEPSBearedID:%d
Line 497: LBID:%d, RBID:%d, EPSbearerID:%d, DrbState of LB ModeB is set to be ENABLED in TLP_ACTIVE.
Line 530: MAX DRB's are already configured in Test Loop Mode, ignore the msg
Line 680: LTE_EMM_LB_DATA_REQ malloc error
Line 705: LTE_EMM_LB_DATA_REQ : MBMS_PACKET_COUNTER_RSP malloc error
Line 722: Posting the PKT CNT to EMM as case %d
Line 730: The Packet Counter which is send to EMM equals to %d
Line 845: LTE_EMM_LB_DATA_REQ : ss_complete malloc error
Line 859: Posting the message %d to DS_EMM
Line 863: Posting the message %d to EMM
Line 875: LTE_EMM_LB_DATA_REQ : Msg Sending error
Line 897: Tlp_SendMessageToLPP Malloc error
Line 911: Posting the message %d to LPP
Line 916: Tlp_SendMessageToLPP : MsgSendTo Fail
Line 943: Tlp_SendMessageToRRC Malloc error
Line 956: Posting the message %d to RRC_DS
Line 961: Posting the message %d to RRC
Line 1015: Tlp_ProcActivateTestMode : Data is NULL
Line 1036: Received Invalid Mode Value %d in Activate Test Mode Message
Line 1050: Received valid Mode Value %d in Activate Test Mode Message
Line 1058: TLP Configured in Mode %d in Activate Test Mode Message
Line 1059: Posting the message LTE_TLP_ACTIVATE_TEST_MODE_COMPLETE to EMM
Line 1073: Received Invalid SI Value in Activate Test Mode Message
Line 1111: Tlp_ProcModeCPktCountReq : Data is NULL
Line 1117: TLP-MBSFN PCT - Processing MBSFN mode C packet counter request  Message
Line 1121: [ERROR] MODE-C is not active 
Line 1131: TLP-MBSFN PCT - Received Invalid SI Value in MBSFN mode C packet counter request  Message
Line 1162: Tlp_ProcDeActivateTestMode : Data is NULL
Line 1168: Resetting the TLP Context struct: Tlp_ResetTlp() called from De-Activate Test Mode Message
Line 1171: Posting the message LTE_TLP_DEACTIVATE_TEST_MODE_COMPLETE to EMM
Line 1180: Received Invalid SI Value in De-Activate Test Mode Message
Line 1219: Tlp_ProcOpenUeTestLoop : Data is NULL
Line 1225: Resetting the TLP Context struct: Tlp_ResetTlp() called from Open UE Test Loop Message
Line 1228: Posting the message LTE_TLP_OPEN_UE_TEST_LOOP_COMPLETE to EMM
Line 1236: Received Invalid SI Value in Open UE Test Loop Message
Line 1296: Case UNIDIRECTIONAL: Reconfig of DRB ID %d; DRB has got reconfigured from Bi-Directional to UNI-Directional. 
Line 1303: Case UNIDIRECTIONAL: Establishment of DRB ID %d;Ignore the Drb Id,  going to process next DRb. 
Line 1329: Case BIDIRECTIONAL: Establishment of DRB ID %d, EPS ID: %d;
Line 1337: Case BIDIRECTIONAL: Reconfig of DRB ID %d; No need to update, going to process next DRb. 
Line 1349: Case BIDIRECTIONAL: DRB ID %d requested to release, Not found in LB array; Ignoring and going to process next DRB
Line 1357: Case BIDIRECTIONAL: DRB ID %d requested to release,found in LB array; Going to release the DRB
Line 1366: Invalid Case: Received Invalid ReconfigType Value in LTE_RRC_LB_DRB_IND Message
Line 1375: ALL DRB's in LB functional Mode got released
Line 1419: Resetting the TLP Context struct: Tlp_ResetTlp() called from RRC DRB IND Message
Line 1441: There exist EPS bearer in established state, So not resetting the Context Struct.
Line 1448: Total Num of DRB's configured: %d
Line 1450: Num DRB's in LB Mode: %d, Num DRB's Not in LB Mode %d
Line 1497: Loop Back Functon already Active, ignore the msg 
Line 1528: This is an error condition; TLP should be in INIT state 
Line 1535: Loop Back Functon already Active, ignore the msg 
Line 1540: Loop Back Functon already Active, ignore the msg 
Line 1572: Tlp_ProcCloseUeTestLoop : Data is NULL
Line 1592: Mode A is received: Bi-dir DRB est. going to configure Mode A params received
Line 1604: Mode A got configured: LB setup list IE is not included;i.e. No scaling configured
Line 1609: Mode A is received: LB setup list IE included 
Line 1614: Posting the message LTE_TLP_CLOSE_UE_TEST_LOOP_COMPLETE to EMM
Line 1621: Mode A is received: Invalid total Msg Length; Length IE value %d
Line 1629: Mode A is received: No bi-dir DRB est. ignore the msg
Line 1642: Mode B is received: Going to Check whether atleast one EPS bearer is in established state or not
Line 1649: Mode B is received: Going to configure Mode B params received
Line 1653: Posting the message LTE_TLP_CLOSE_UE_TEST_LOOP_COMPLETE to EMM
Line 1660: Mode B is received: No bi-dir EPS Bearer est. ignore the msg
Line 1793: Received Mode value(%d) in Close Ue Test Loop != Mode value received in Activate Test Loop Message
Line 1801: Received Invalid SI Value in Close UE Test Loop Message
Line 1833: Tlp_ProcResetUePositioingStoredInfo : Data is NULL
Line 1837: Tlp_ProcResetUePositioingStoredInfo in state %d
Line 1838: PI_SI %x, PosTech %x
Line 1858: Received Invalid SI Value inReset UE Positioning Stored Information message 
Line 1891: Tlp_ProcUpdateUeLocationInfo : Data is NULL
Line 1895: Tlp_ProcUpdateUeLocationInfo in state %d
Line 1907: Received Invalid SI Value inReset Tlp_ProcUpdateUeLocationInfo message 
