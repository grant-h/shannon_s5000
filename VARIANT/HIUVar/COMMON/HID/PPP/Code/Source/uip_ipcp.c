Line 105: ipcp_up(): Bad local IP address [%d:%d:%d:%d].
Line 141: ipcp_up GIPCP->itsLastID[%x]
Line 149: ipcp_cleanup()
Line 182: ipcp_down
Line 217: ipcp_starting[%d]
Line 221: UIP_IPCPState_kOpened
Line 230: ipcp_starting(): MAX Total starting frames counter reached 0, UIP_IPCPState_kClosed
Line 241: ipcp_starting(): IPCP Restart timer expired
Line 250: ipcp_starting(): Configure counter reached 0, UIP_IPCPState_kClosed
Line 272: IP Addr: %lu.%lu.%lu.%lu
Line 299: UIP_IPCPState_kCRSent
Line 327: ipcp_frame_read(): Invalid IPCP Length (%lu). Frame discarded.
Line 334: ipcp_frame_read(): LCP is not Opened. Frame discarded.
Line 371: ipcp_frame_read()  Code [%d], ID [%d] GIPCP->itsState %d
Line 376: ipcp_frame_read - code [%d] not managed in IPCP state (%d). Discarded.
Line 392: ipcp_frame_read(): UIP_IPCPCode_kCfRq received.
Line 397: ipcp_frame_read(): UIP_IPCPCode_kCfNak received.
Line 402: ipcp_frame_read(): UIP_IPCPCode_kCfRj received.
Line 407: ipcp_frame_read(): UIP_IPCPCode_kCfAck received.
Line 412: new state = UIP_IPCPState_kAckRecv
Line 419: ipcp_frame_read(): UIP_IPCPCode_kTrRq received.
Line 438:  IPCP_P_H IPCP code [%d] ID. [%d]
Line 468: ipcp_reply_CfRq_action(): Peer Requested IP Address [%d:%d:%d:%d].
Line 478: ipcp_reply_CfRq_action(): Peer IP address rejected.
Line 484: ipcp_reply_CfRq_action(): Peer IP address NAKed with  [%d:%d:%d:%d].
Line 493: ipcp_reply_CfRq_action(): Peer IP Address accepted.
Line 514: UIP_IPCPCfRqAction_kNAK1
Line 519: UIP_IPCPCfRqAction_kACK1
Line 539: UIP_IPCPCfRqAction_kNAK2
Line 544: UIP_IPCPCfRqAction_kACK2
Line 607: UIP_IPCPCfRqAction_kREJ by default
Line 669: IPCP NAK IP: %lu.%lu.%lu.%lu
Line 688: IPCP NAK DNS1: %lu.%lu.%lu.%lu
Line 707: IPCP NAK DNS2: %lu.%lu.%lu.%lu
Line 733: ipcp_reply_CfRq(): Invalid option size.
Line 772: ipcp_reply_CfRq(): Negative CfReq received while Opened. Discarded
Line 776: ipcp_reply_CfRq(): Positive CfReq received while Opened. Replying.
Line 809: new state = UIP_IPCPState_kAckSent
Line 860: ipcp_manage_CfNakRej(): Invalid option size.
Line 881: ipcp_manage_CfNakRej(): Local IP Addr suggested: %lu.%lu.%lu.%lu
Line 896: ipcp_manage_CfNakRej(): Bad ACCM Option Len
Line 917: ipcp_manage_CfNakRej(): Primary DNS IP Addr suggested: %lu.%lu.%lu.%lu
Line 919: ipcp_manage_CfNakRej(): Secondary DNS IP Addr suggested: %lu.%lu.%lu.%lu
Line 925: ipcp_manage_CfNakRej(): Primary DNS IP Addr rejected
Line 927: ipcp_manage_CfNakRej(): Secondary DNS IP Addr rejected
Line 934: ipcp_manage_CfNakRej(): Bad Primary DNS Option Len
Line 936: ipcp_manage_CfNakRej(): Bad Secondary DNS Option Len
