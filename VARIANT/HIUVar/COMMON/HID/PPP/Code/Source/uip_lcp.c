Line 104: lcp_change_state START New State[%d], GLCP->itsState[%d]
Line 112: lcp_change_state UIP_LCPState_kClosed
Line 123: lcp_change_state END GLCP->itsState[%d]
Line 170: lcp_cleanup()
Line 206: UIP_LCPState_kClosed
Line 210: UIP_LCPState_kStarting
Line 215: UIP_LCPState_kOpened
Line 220: UIP_LCPState_kClosing
Line 234: lcp_starting(): State (%d)
Line 238: lcp_starting(): MAX Total starting frames counter reached 0
Line 247: lcp_starting(): Restart timer expired. Configure counter = %lu
Line 257: lcp_starting(): Configure counter reached 0.
Line 280: lcp_starting(): Requesting MRU: %lu.
Line 290: lcp_starting(): Requesting Receiving ACCM: %lx.
Line 299: lcp_starting(): Requesting PFC In
Line 307: lcp_starting(): Requesting ACFC In
Line 315: lcp_starting(): Requesting MAGIC NUMBER (%lx)
Line 343: lcp_closing(): State (%d)
Line 348: lcp_closing(): Restart timer expired. Terminate counter = %lu
Line 359: lcp_closing(): Terminate counter reached 0.
Line 399: lcp_frame_read(): LCP Frame read: Code [%d], ID [%lu]
Line 405: lcp_frame_read(): Invalid LCP Length (%lu). Frame discarded.
Line 434: lcp_frame_read type[%d]
Line 438: lcp_frame_read(): LCP frame with code [%lu] not managed in LCP state [%d]. Discarded.
Line 446: UIP_LCPCode_kCfRq
Line 458: UIP_LCPCode_kCfAck
Line 462: UIP_LCPCode_kCfAck, IDs match
Line 469: UIP_LCPCode_kCfNak
Line 474: UIP_LCPCode_kCfRj
Line 479: UIP_LCPCode_kTrRq
Line 485: UIP_LCPCode_kTrAck
Line 495: UIP_LCPCode_kEcRq
Line 500: UIP_LCPCode_kEcRp
Line 521:  L_P_H LCP code [%d] ID. [%d]
Line 635: lcp_reply_CfRq_action(): Too short ACCM option.
Line 642: lcp_reply_CfRq_action(): Peer Requested ACCM: [%lx], Locally requested ACCM [%lx]
Line 645: lcp_reply_CfRq_action(): ACCM not including ours -> NAK.
Line 651: lcp_reply_CfRq_action(): ACCM OK -> ACK.
Line 672: lcp_reply_CfRq_action(): Requested MRU: %lu -> ACK
Line 675: lcp_reply_CfRq_action(): MTU changed from: %lu to: %lu
Line 711: lcp_reply_CfRq_action(): PFC Out requested, Allowed -> ACK.
Line 716: lcp_reply_CfRq_action(): Too short PFC option.
Line 719: lcp_reply_CfRq_action(): PFC Out requested, NOT Allowed -> REJ.
Line 729: lcp_reply_CfRq_action(): ACFC Out requested, Allowed -> ACK.
Line 734: lcp_reply_CfRq_action(): Too short ACFC option.
Line 737: lcp_reply_CfRq_action(): ACFC Out requested, NOT Allowed -> REJ.
Line 748: lcp_reply_CfRq_action(): MAGIC Number (%lx) requested, Allowed -> ACK.
Line 758: lcp_reply_CfRq_action(): Too short MAGIC option.
Line 762: lcp_reply_CfRq_action(): MAGIC Number requested, NOT Allowed -> REJ.
Line 770: lcp_reply_CfRq_action(): Extended LCP opcode 12 is not supported.
Line 776: lcp_reply_CfRq_action(): Extended LCP opcode 13 is not supported.
Line 791: lcp_reply_CfRq_action(): Unknown Conf Opcode [%lu]
Line 843: lcp_reply_CfRq_do_action(): Action NAK but unknown option
Line 868: lcp_reply_CfRq(): Invalid option size.
Line 900: lcp_reply_CfRq(): Negative CfReq received while Opened. LCP Closed.
Line 905: lcp_reply_CfRq(): Positive CfReq received while Opened. Replied.
Line 965: lcp_protocol_reject(): LCP not in Opened state. Discarded.
Line 1066: lcp_manage_CfNakRej(): Invalid option size.
Line 1090: lcp_manage_CfNakRej(): Receiving ACCM suggested: %lx
Line 1095: lcp_manage_CfNakRej(): Bad ACCM Option Len
Line 1101: lcp_manage_CfNakRej(): Bad ACCM Option Len
Line 1114: lcp_manage_CfNakRej(): MRU suggested: (%lu)
Line 1119: lcp_manage_CfNakRej(): MRU rejected. Using default (%lu)
Line 1138: lcp_manage_CfRej(): Bad ACCM Option Len
Line 1147: lcp_manage_CfNakRej(): PFC Naked or Rejected
Line 1150: lcp_manage_CfRej(): Bad PFC Option Len
Line 1158: lcp_manage_CfNakRej(): ACFC Naked or Rejected
Line 1161: lcp_manage_CfRej(): Bad ACFC Option Len
Line 1169: lcp_manage_CfNakRej(): Magic Naked or Rejected
Line 1172: lcp_manage_CfRej(): Bad Magic Option Len
Line 1188: lcp_manage_CfNakRej
