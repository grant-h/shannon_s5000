Line 103: sock_lock_init: Mutex created [%d] 
Line 106: sock_lock_init: Mutex already created [%d] 
Line 113: sock_lock_init: Mutex destroyed [%d] 
Line 124: SOCKET SWITCH: Socket Creation for ContextID[%d] failed with error [%d] 
Line 138: mutex created for socket[%d] - [%d]
Line 167: CREATE SOCKET: VCE task => cid: %d imsBeareSid : %d
Line 176: CREATE SOCKET: TCP/IP IF not present for CID: %d
Line 186: CREATE SOCKET: Failed to create Socket
Line 191: socket created with sock_id = %d CID = %d 
Line 223: siso_connect ==>> order change 
Line 229:  SOCKET Connect: FAILED with error [%d]
Line 232:  SOCKET Connect sent Successfully
Line 258: siso_setsockopt [%d]
Line 262: set socket options failed with error: %d 
Line 296:  SOCKET CLOSE: FAILED-> No Socket attached with Sock ID [%d]
Line 322: SOCKET CLOSE: FAILED with error: %d 
Line 329: SOCKET [%d] CLOSE: success
Line 366: SOCKET BIND: FAILED-> No Socket attached with SID [%d]
Line 373:  SOCKET BIND: Initial Context ID [%d]
Line 376: sds_sobind:  VCE task %d
Line 388: SOCKET BIND: Bearer Context ID [%d]
Line 398: socket bind=>> Changing order 
Line 400: socket bind address is NULL 
Line 407:  [sds_bind] IPv4 ADDR: Add Address = 0x%x
Line 414: socket bind address is NULL and imsBearerSid is %d 
Line 421: [sds_bind] IPV6 ADDR: 
Line 423:  [sds_bind] unspecified address in DB - binding failed
Line 431: socket bind ==>> changing order 
Line 438: socket bind failed with error: %d 
Line 467: socket bind called with sid [%d] 
Line 480:  SOCKET CONNECT: FAILED-> No Socket attached with SID [%d]
Line 509:  SOCKET SETOPTIONS: FAILED-> No Socket attached with SID [%d]
Line 535: siso_sendto sid = %d len = %d
Line 638: SOCKET SEND: FAILED-> No Socket attached with SID [%d]
Line 664: SOCKET SEND: Invalid Length Param's
Line 688: SOCKET SEND: Failed to get SOCK ADDR
Line 702: [sds_sendmsg]  sa_family = %d
Line 717: SOCKET SEND: Invalid SOCK ARGS. Error Id => %d
Line 725: [sds_sendmsg] >>sending to sosend_generic len = %d
Line 730: [sds_sendmsg] >>sosend_generic failed with error = %d
Line 732: Socket Send: Data sent successfully
Line 822: SOCKET RECV: Called len =%d sid =%d 
Line 902:  SOCKET RECVFROM: FAILED-> No Socket attached with SID [%d]
Line 925:  SOCKET RECVFROM: FAILED-> No Socket attached with SID [%d]
Line 942: SDS_decode_options!! 
Line 945: [SDS_decode_options] No options or end of options !! 
Line 954: SDS_decode_options opt_cnt [%d] option [%d] total_len [%d] !! 
Line 959: SDS_decode_options opt_cnt [%d] option [%d] total_len [%d] !! 
Line 988: SOCKET RECV: No Socket associated for SID [%d]
Line 1008: siso_recvit_direct_app returning NULL because sum > SSIZE_MAX
Line 1023:  control info !! cmsg->cmsg_type [%d] cmsg->cmsg_level  [%d]
Line 1039:  Total length of the options [%d]
Line 1040:  Option value [%d]
Line 1041:  Option length [%d]
Line 1045: No options available!! 
Line 1051: [recv options ]
Line 1073: siso_close stream socket [%d]
Line 1087: siso_close closing.sock:%d with error:%d
Line 1106: SDS_close_all_sockets>> closing socket with SID: [%d] and Context id: [%d]
Line 1118: SOCKET RAISE ASYNC EVENT: Raise EVENT => %d
Line 1123: SOCKET RAISE ASYNC EVENT: NVALID PARAM. EVENT => 0x%x, SO_EVENT => 0x%x, EVENT_HAPPENED => 0x%x, SID => %d
Line 1129: SDS_raise_async_event: SocketEvent: [%d] Socket Event Happened [%d] SOCKID [%d]
Line 1134: SDS_raise_async_event: async callback = so->async_cb %d
Line 1142: SDS_raise_async_event: SocketEvent: [%d] Socket Event Happened [%d]
Line 1148: SOCKET RAISE ASYNC EVENT: calling async_Cb
Line 1156: SOCKET RAISE ASYNC EVENT: ASYNC_CB => NULL for SID => %d
Line 1177:  SOCKET ASYNCSELECT: FAILED-> No Socket attached with SID [%d]
Line 1208:  SHUTDOWN: FAILED-> No Socket attached with SID [%d]
Line 1232: SHUTDOWN: FAILED failed with error: %d 
Line 1239: SOCKET [%d] CLOSE: success
