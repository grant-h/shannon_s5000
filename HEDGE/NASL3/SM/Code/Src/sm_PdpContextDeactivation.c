Line 171: IU_MODE_VALID_CONTEXT Valid For UMTS.
Line 177: AGB_MODE_VALID CONTEXT Valid For GSM.
Line 181: State = %d/Valid =%d /AgbLuFlag 0x%x
Line 185: Progress Local deactivation for NSAPI = %d
Line 315: Send Cnf to Gapi This is the Case we does not send PDP ACT REQ to Network (%d) 
Line 318: Rejecting GAPI's PDP Deactivation Req Due To Incorrect SM State
Line 323: Unknown Nsapi (%d) Given By GAPI in sm_DecodeSmRegPdpDeactivationReqMsg
Line 683: Wrong State.
Line 690: Incorrect TI (%x) sent by the Network, Message Ignored...... [24.008]-8.3.2
Line 887: SM Timed out. 
Line 956: All Instances Are Used Up (1); in sm_DecodeRabmSmDeactivationRspMsg
Line 971: Unknown Deactivation Cause in sm_DecodeRabmSmDeactivationRspMsg
Line 997: Msg received in invalid state . Message Ignored
Line 1004: Unknown NSAPI Given By RABM ! in sm_DecodeRabmSmDeactivationRspMsg. Message Ignored
Line 1433: SM Timed out. 
Line 1497: All Instances Are Used Up (1); in sm_DecodeSnSmDeactivationRspMsg
Line 1531: Msg received in invalid state . Message Ignored
Line 1538: Unknown NSAPI Given By SNDCP ! in sm_DecodeSnSmDeactivationRspMsg
Line 1804: Using network cause to send GAPI (%d)...
Line 1810: Using GMM cause to send GAPI (%d)...
Line 1830: kny Flag  (%d) /State %d...
Line 1879:  SendDeactCnf->  %d /IsNormalDeactivation %d / No.PDP %d
Line 2124:  SMLocalDeactFlag->  %d
Line 2140:  Linked NSAPI->  %d
Line 2144: Protocol Config. Options -> ...
Line 2157: Sending GS18 - PDP Context End
Line 2158: GS18.dwContextId -> %d
Line 2159: GS18.wTermCode -> %d
Line 2160: GS18.ucInitiator -> %d
Line 2338:  Linked NSAPI->  %d
Line 2349: Sending GS18 - PDP Context End
Line 2350: GS18.dwContextId -> %d
Line 2351: GS18.wTermCode -> %d
Line 2352: GS18.ucInitiator -> %d
Line 2526: Collision Detected: MS & NEtwork both Requesting Deactivation. Both shall send Deactivation Acc Msg in sm_DecodeNetworkPdpDeactivationReqMsg. [24.008]-6.1.3.4.3 (b)
Line 2535: sm_CheckCauseIe err
Line 2549: Awaiting Deactivate Acc from the Network...
Line 2610: sm_CheckCauseIe err
Line 2687: Collision Detected: MS Trying to Modify QoS & Network Requesting Deactivation. MS shall send Deactivation Acc Msg in sm_DecodeNetworkPdpDeactivationReqMsg. 
Line 2702: sm_CheckCauseIe err
Line 2757: Rejecting Network's PDP Deactivation Req Due To Incorrect SM State
Line 2766: Unknown PdTi (%x)  in sm_DecodeNetworkPdpDeactivationReqMsg, Sending Status Msg
Line 2853: Tear Down Indicator -> %s
Line 2890: Deactivation Cause -> %s
