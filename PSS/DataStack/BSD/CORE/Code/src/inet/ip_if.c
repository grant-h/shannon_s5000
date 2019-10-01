Line 35: [ifx:%d] is not empty
Line 57:  IPv4 ADDR: Add Address = 0x%x
Line 62: Ipv4_Add_Address: Failed with error %x
Line 64: IPv4 Address Successfully Added
Line 76: Ipv6_Add_Address: V_ip6_use_tempaddr: %d
Line 89: Ipv6_Add_Address: req.ifra_flags : 0x%x
Line 98: Ipv6_Add_Address: Failed with error %x
Line 100: IPv6 Address Successfully Added
Line 122: TCPIP_Interface_Create: free if index not available.. returning NULL
Line 157: Interface Created with ContextID [%d] if index [%d]
Line 211: SDS_TCPIP_create_if: Entry  protoType %d 
Line 228: SDS CREATE LTE IF : Interface Already exists with ContextID [%d]  ifx [%d] 
Line 232: IPV4 ADDRESS: Interface already exists with ifx ID [%d] ContextID [%d].. deleting
Line 252: TCPIP CREATE LTE IF : Interface Already exists with ContextID [%d] ifx [%d] 
Line 256: IPV6 ADDRESS: Interface already exists with ifx ID [%d] ContextID [%d].. deleting
Line 278: TCPIP CREATE LTE IF : Create Interface Failed
Line 295: [linkLocalIP]:
Line 300: TCPIP CREATE LTE IF: Create IPv4v6 Interface, ADD IPv4 ADDR => 0x%x
Line 306: TCPIP CREATE LTE IF : NET DEVICE INFO is NULL
Line 327: get_ifsrcaddr : No interface associated with this id
Line 338: get_ifsrcaddr : ifa is NULL
Line 361: get_if6srcaddr : No interface associated with this id
Line 375: get_if6srcaddr : ifa is NULL
Line 388: IPv6 MAP IF: ContextID => %d 
Line 394: IPv6 MAP: ContextID [%d] mapped to IFX [%d]
Line 419: SDS_if_locate_by_ContextID found IFX: %d with CID: %d
Line 447: DELETE IF: Interface pointer is NULL
Line 504: TCPIP DEL LTE IF : DELETING INTERFACE => If Index [%d] 
Line 511: TCPIP DEL LTE IF: Free NET DEVICE INFO
Line 526: [RSRA] TCPIP DEL LTE IF: Delete Address Timer 
Line 532: [RSRA] TCPIP DEL LTE IF: Delete router life Timer 
Line 538: [RSRA] TCPIP DEL LTE IF: Delete valid Timer 
Line 544: [RSRA] TCPIP DEL LTE IF: Delete recovery Timer 
Line 550: [RSRA] TCPIP DEL LTE IF: rs_retransmission_timer Timer 
Line 557: [RSRA] TCPIP DEL LTE IF: rs_retransmission_timer Timer 
Line 563: TCPIP DEL LTE IF: p_net_device is NULL!!
Line 576: TCPIP CREATE INTERFACE: INVALID OPMODE [%d]
Line 580: TCPIP CREATE INTERFACE: FAILED
Line 600: SDS_start_network_cnf_rsra: p_net_device is allocated. line=%d
Line 605: TCPIP START NETWORK: IPV4 ADDR => 0x%x 
Line 625: Start TCPIP Network creation
Line 633: Create Interface IPv6 type without RSRA
Line 635: [pNetDevice->localaddr]
Line 640: TCPIP START NETWORK : INTERFACE CREATION FAILED
Line 648: TCPIP START NETWORK : invalid contextID:no ifx exists
Line 658: TCPIP START NETWORK : contextID %d  ifx %d 
Line 659: TCPIP START NETWORK : bRsRaRequired [%d] 
Line 660: TCPIP START NETWORK : enActiveStack [%d] 
Line 661: TCPIP START NETWORK : eCreateReqType [%d] 
Line 662: TCPIP START NETWORK : enProtoType [%d] 
Line 665: SDS_start_network_cnf_rsra: pNetDevice is NULL!!
Line 681: SDS_start_network_cnf: p_net_device is allocated. line=%d
Line 685: TCPIP START NETWORK: IPV4 ADDR => 0x%x 
Line 707: Create TCPIP Interface
Line 712: TCPIP START NETWORK : INTERFACE CREATTION FAILED
Line 719: TCPIP START NETWORK: NET DEVICE INFO => NULL
Line 761: TCPIP PROCESS MSG: Convert OS BUF to MBUF FAILED
Line 767: [TCP DUMP DL]
Line 777: TCPIP PROCESS MSG: RECV CB for IF is not available
Line 788: [MUX_Module] [IPv6] iret_idx: %d
Line 792: [MUX_Module] [IPv6] ipv6_Is_waitingForRA: %d
Line 797: [MUX_Module] [IPv6] ipv6_Is_waitingForRA: FALSE
Line 813: [RSRA][IPv6] SDS_TempAddrPreferredOperator return TRUE (operator: %d)
Line 816: [RSRA][IPv6] SDS_TempAddrPreferredOperator return FALSE (operator: %d)
Line 844: [Error] SDS_NDP_Start >> index %d
Line 847: SDS_NDP_Start >> index %d 
Line 851: [RSRA] Error> valid timer expired
Line 858: [RSRA] Error> ifp is NULL
Line 862: SDS_NDP_Start >> if_index %d 
Line 869: *** Raw Socket create failed *** 
Line 880: *** Raw Socket binding failed *** with error %d
Line 913: [RSRA] socket already exists.. skip to create socket and MUX filter on with cid: %d
Line 920: NDP start -No socket associated with sid..returning..
Line 927: NDP start - MBUF not available..
Line 954: [RSRA] create rs_retransmission_timer
Line 962: [RSRA] CREATE_REQ_TYPE_HANDOVER case, so change retrans timer interval
Line 968: [RSRA] start retransmission timer(%d)
