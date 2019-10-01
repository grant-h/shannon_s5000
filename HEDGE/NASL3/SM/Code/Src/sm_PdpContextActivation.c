Line 132: sm_ExtractMCC(0x%x)
Line 145: sm_ExtractMNC(0x%x)
Line 200: DualPdpReq -> %d
Line 214: Selected PdpInstance -> %d
Line 230: ReqType -> %d
Line 265: Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg! IMS PDP reject because of MCC(0x505)!!
Line 283: Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg ! No more resource Available !!
Line 295: Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg !
Line 310: PDP Activation for this NSAPI already Exists, Sending CNF back to CNS State %d
Line 329: PDP Activation for this TID  already Exists, Sending CNF back to CNS sm_CheckForExistingSession...
Line 337: sm_CheckForExistingSession... False...
Line 367: Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg ! Invalid TI requested, Already Used !!
Line 374: Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg !
Line 749: Sending GS19 - PDP Context Request
Line 750: GS19.dwContextId -> %d
Line 751: GS19.dwAssocContextId -> 0x%x
Line 752: GS19.ucNSAPI -> %d
Line 753: GS19.ucSAPI -> %d
Line 754: GS19.ucOrdinal -> %d
Line 755: GS19.ucInitiator -> %d
Line 756: GS19.szApn (size:%d) -> 
Line 788: Rat(%d) AgbLuFlag(%d)
Line 806: Invalid LLCSapi....so do local deactivation.
Line 820: Wrong cause in GMMSM_TRIGGER_IND (%d)
Line 883: Invalid EstablismentReqInitiator (%x) in sm_SendGmmSmEstablishReqMsg. Aborting Operations.!!
Line 996: SM_DEACTIVATION_ESTAB received but already sent NETWORK_PDP_DEACTIVATION_ACC, ignore sending PdpDeactivationReq!!
Line 1002: SM_DEACTIVATION_ESTAB received in wrong state in sm_DecodeGmmSmEstablishCnfMsg,  Message Ignored!!
Line 1010: Invalid EstablismentReqInitiator,  Message Ignored!!
Line 1018: SM Could not find a Pdp Instance Matching the Nsapi (%x) that GMM has sent. Rejecting GAPI's PDP Activation in sm_DecodeGmmSmEstablishCnfMsg. Message Ignored !!!
Line 1074: Primary Sid -> %d 
Line 1082: SM Could not find a Pdp Instance Matching the Nsapi (%x)
Line 1090: 2nd Sid -> %d PrimaryInstance = %d Nsapi = %d
Line 1132: ClientMailBoxId -> 0x%02X
Line 1133: HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
Line 1134: BufferStartOffset -> 0x%02X, BufferOverheadLength -> 0x%02X
Line 1135:  IP Version -> 0x%02X
Line 1136:  PDP Type -> 0x%02X
Line 1140:  Dual Sid -> 0x%02X
Line 1217: SmNASRelVersion  -> %d
Line 1263: Invalid PdpInstance (%x); Apn Pointer not found. sm_SendPdpActivationReqMsg
Line 1282: Invalid PdpInstance (%x); ProtCfgOpts Pointer not found. sm_SendPdpActivationReqMsg
Line 1322:  LlcSapi -> %d
Line 1324: Neogtiated Qos Data  -> ...
Line 1386: HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
Line 1387: RABM Confirmed Resource Allocation, Sending Confirmation to GAPI in sm_DecodeRabmSmPdpActivationRspMsg
Line 1399: No Action
Line 1405: Mesage Received in sm_DecodeRabmSmPdpActivationRspMsg for Rat change. No Need to do anything
Line 1412: Mesage Receivedin Wrong SM State, Ignoring Message in sm_DecodeRabmSmPdpActivationRspMsg
Line 1417: Unknown NSAPI Given By RABM in sm_DecodeRabmSmPdpActivationRspMsg, Ignoring Message
Line 1489: sm_CheckQosIe Err
Line 1495: Qos Accepted in sm_DecodePdpActivationAcceptMsg
Line 1525: LlcSapi -> %d
Line 1538: sm_CheckRadioPriorityIe Err
Line 1583: Memory allocation failed... returning
Line 1597: Modified Pdp Address -> ...
Line 1611: changed Pdp Address -> ...
Line 1634: Unknown Pdp Address Length %d 
Line 1639: Pdp Address -> ...Len %d
Line 1656: User Requested Dynamic PDP, but Network Sent No PDP Address -> Rejecting PDP Activation
Line 1681: Prot Cfg Opts Length -> %d
Line 1695: Protocol Config. Options -> ...
Line 1740: Cause = 0x%x, PDPtype =0x%x SendPdpType 0x%x
Line 1752: Setting SIPC Dual PDP support 
Line 1760: Stopping SIPC Dual PDP support 
Line 1833: Sending Cnf to AP as well as MMC
Line 1864: Deactivating PDP due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Line 1897: Sending Status MSG due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Line 1907: Incorrect SM State in sm_DecodePdpActivationAcceptMsg, Sending STATUS MSG, Cause = (%s)
Line 1914: Unknown PdTi (%x)  in sm_DecodePdpActivationAcceptMsg
Line 1989: Instance AgbLuFlag = 0x%x
Line 1994: Instance is initiated at HEDGE.. 
Line 2056:  LlcSapi -> %x,ClientMailBoxId -> %x
Line 2059: HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
Line 2060: BufferStartOffset -> 0x%02X, BufferOverheadLength -> 0x%02X
Line 2123: SNDCP Confirmed Resource Allocation, Sending Confirmation to GAPI in sm_DecodeSnSmPdpActivationRspMsg
Line 2126: HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
Line 2170: Mesage Received in sm_DecodeRabmSmPdpActivationRspMsg for Rat change. Nothing needs to be done
Line 2176: Rejecting SNDCP Response Due to Incorrect SM State in sm_DecodeSnSmPdpActivationRspMsg
Line 2181: Unknown NSAPI (%x) Given By SNDCP in sm_DecodeSnSmPdpActivationRspMsg
Line 2275: Unexpected PdpType : %d
Line 2280: PdpAddressLength is zero
Line 2289: [SM Cause2] Cause2 =0x%x 
Line 2337: LlcSapi -> %d
Line 2338: Protocol Config. Options Length -> %d
Line 2342: Protocol Config. Options -> ...
Line 2346: PdpAddress Length -> %d
Line 2350: PdpAddress  -> ...
Line 2360: Sending GS15 - PDP Context Activation
Line 2361: GS15.dwContextId -> %d
Line 2613: GMM Requesting SM to Try Other RAT. Nothing needs to be done by SM, GMM will re-try....
Line 2624: Retrying for GMM Est Req.....
Line 2630: Rejecting GAPI's Req for PDP Activaiton in sm_DecodeGmmSmEstablishRejMsg
Line 2653: SM Trying to Modify PDP in sm_DecodeGmmSmEstablishRejMsg.
Line 2695: Starting SM_REC_PDPINST Timer (Instance:%d, Retrial Count:%d)
Line 2703: SM Trying to Deactivate PDP in sm_DecodeGmmSmEstablishRejMsg.
Line 2731: LTE RAT !!! Send Cnf to Gapi This is the Case we does not send PDP DEACT REQ to Network (%d) 
Line 2751: GMM_EST_REJ Arrived in Incorrect SM State in sm_DecodeGmmSmEstablishRejMsg. Ignoring Message...
Line 2759: SM Could not find a Pdp Instance Matching the Nsapi that GMM has sent. Rejecting GAPI's PDP Activation in sm_DecodeGmmSmEstablishRejMsg. Ignoring Message!!!
Line 2820: Protocol Config. Options Length -> %d
Line 2824: Protocol Config. Options -> ...
Line 2842: Sending GS18 - PDP Context End
Line 2843: GS18.dwContextId -> %d
Line 2844: GS18.wTermCode -> %d
Line 2845: GS18.ucInitiator -> %d
Line 3029: sm_CheckCauseIe Err
Line 3056: Protocol Config. Options Length -> %d
Line 3057: Protocol Config. Options -> ...
Line 3068: SM got Reattempt IE :%d
Line 3117: PdpType %d 
Line 3160: Stack = %d.
Line 3175: Orange Requirement
Line 3207: NW sending Reject for Activated PDP.. need to deactivate locally....
Line 3240: Sending STATUS MSG, Cause = (%s) , Incorrect SM State, in sm_DecodePdpActivationRejMsg
Line 3250: Unknown PdTi (%x)  in sm_DecodePdpActivationRejMsg, Sending Status Message
Line 3302: Selected PdpInstance -> %d
Line 3306: Primary NSAPI State = %s  in  sm_DecodeSmRegSecPdpActivationReqMsg
Line 3352: Seconday PDP Activation Rejected . Incorrect Primary NSAPI SM State in sm_DecodeSmRegSecPdpActivationReqMsg
Line 3360: Rejecting GAPI's Secondary PDP Activation Req. GAPI Has Used Up All Allowed Instances in sm_DecodeSmRegSecPdpActivationReqMsg
Line 3372: Rejecting GAPI's Secondary PDP Activation. Ti Already Used in sm_DecodeSmRegSecPdpActivationReqMsg
Line 3378: Rejecting GAPI's Secondary PDP Activation Req Rat Mode Change in  Progress: sm_DecodeSmRegSecPdpActivationReqMsg
Line 3384: Seconday PDP Activation Rejected. Unrecognised Primary NSAPI (%x) in sm_DecodeSmRegSecPdpActivationReqMsg
Line 3616:  PrimaryNsapi %d ,LinkedTi -> 0x%x
Line 3634: Invalid PdpInstance (%x); Tft Pointer not found. sm_SendSecPdpActivationReqMsg
Line 3651:  LlcSapi -> %d ,LinkedTi -> %d
Line 3653: Neogtiated Qos Data  -> ...
Line 3722: Displaying Qos Sent by Network in sm_DecodePdpActivationAcceptMsg
Line 3728: sm_CheckQosIe Err
Line 3734: Qos Accepted in sm_DecodeSecPdpActivationAccMsg
Line 3749: 
Line 3761: LlcSapi -> %d
Line 3773: sm_CheckRadioPriorityIe Err
Line 3844: RABM has already Confirmed, so inform GAPI
Line 3863: Deactivating PDP due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Line 3873: Sending Status MSG due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Line 3881: Incorrect SM State in sm_DecodePdpActivationAcceptMsg, Sending STATUS MSG, Cause = (%s)
Line 3888: Unknown PdTi (%x)  in sm_DecodeSecPdpActivationAccMsg
Line 3982: Primary Nsapi -> %d, Nsapi -> %d,  LlcSapi -> %d 
Line 3983: Nsapi -> %d
Line 3984: TiValue -> %d
Line 3985: LlcSapi -> %d
Line 3986: Neogtiated Qos Data  -> ...
Line 3988: Protocol Config. Options Length -> %d
Line 3992: Protocol Config. Options -> ...
Line 4002: Sending GS15 - PDP Context Activation
Line 4003: GS15.dwContextId -> %d
Line 4187: sm_CheckCauseIe Err
Line 4206: SM got Reattempt IE :%d
Line 4293: Sending STATUS MSG, Cause = (%s),  Incorrect SM State, in sm_DecodeSecPdpActivationRejMsg
Line 4300: Unknown PdTi (%x)  in sm_DecodeSecPdpActivationRejMsg
Line 4372: Protocol Config. Options Length -> %d
Line 4376: Protocol Config. Options -> ...
Line 4389: Sending GS18 - PDP Context End
Line 4390: GS18.dwContextId -> %d
Line 4391: GS18.wTermCode -> %d
Line 4392: GS18.ucInitiator -> %d
Line 4562: PDP Address size is over  MAX so it will be max value to MAX 
Line 4572: APN size is over  100 so it will be max value to SM_APN_LENGTH 
Line 4597: PCO size is over  100 so it will be max value to SM_PROT_CFG_OPTS_LENGTH 
Line 4613: Checking For Collision Scenarios in sm_DecodeNetworkPdpActivationReqMsg..... [24.008]-6.1.3.1.5
Line 4626: All Pending MS Requested Activations are of the Same PDP Type.. [24.008]-6.1.3.1.5
Line 4631: Collision Detected ! Network PDP Activation Received Before Reception of PDP Activation Resposne From the Network for the Previous MS Request..... [24.008]-6.1.3.1.5
Line 4632: Checking Ability to Match MS Requested PDP Address and APNs With Networks'..... [24.008]-6.1.3.1.5
Line 4636: MS is Able to Check Whether MS Requested PDP Address and APNs Match Networks' Requested Ones....... [24.008]-6.1.3.1.5
Line 4642: MS Requested PDP Address and APNs Match Networks' Requested Ones. Ignoring Message...... [24.008]-6.1.3.1.5
Line 4646: MS Requested PDP Address and APNs Do NOT Match Networks' Requested Ones. Rejecting Network Activation...... [24.008]-6.1.3.1.5
Line 4656: PtrApn is NULL or  PrtPdpAddr is NULL
Line 4667: MS is Unable to Check Whether MS Requested PDP Address and APNs Match Networks' Requested Ones. Rejecting Network's PDP Activation...... [24.008]-6.1.3.1.5
Line 4669: Rejecting Network's PDP Activation Due to a Collision in sm_DecodeNetworkPdpActivationReqMsg...... [24.008]-6.1.3.1.5!
Line 4687: All Instances Are Used Up in sm_DecodeNetworkPdpActivationReqMsg
Line 4696: For Dynamic Addressing, No Collision is Detected. Upto Network Implementation, ...... [24.008]-6.1.3.1.5
Line 4702: Pending MS Requested Activations are of both types: Static and Dynamic. Implementation is to Reject Network's PDP Activation...... [24.008]-6.1.3.1.5
Line 4707: Error: No Pending MS Requested Activations should be in ACTIVE State..... [24.008]-6.1.3.1.5
Line 4712: No Collisions Detected...... [24.008]-6.1.3.1.5
Line 4722: Checking for Network Initiated PDP Activations for Already Activated PDPs (Matching APN, PDP Address & Pdp Type) in sm_DecodeNetworkPdpActivationReqMsg...... [24.008]-6.1.3.1.5
Line 4742: Found a Match, Instance -> %d, Locally Deactivating it
Line 4796: Sending GS19 - PDP Context Request
Line 4797: GS19.dwContextId -> %d
Line 4798: GS19.dwAssocContextId -> 0x%x
Line 4799: GS19.ucNSAPI -> %d
Line 4800: GS19.ucSAPI -> %d
Line 4801: GS19.ucOrdinal -> %d
Line 4802: GS19.ucInitiator -> %d
Line 4803: GS19.szApn (size:%d) -> 
Line 4816: PtrPCO or PtrApn or PtrPdpAddr is NULL
Line 4827: Checking for Duplicated Ti
Line 4835: Found Matching Ti already in Use
Line 4837: Matching TIs means that SM has to Locally De-activate this Session and Activate Again when Deactivate CNF is received...... [24.008]-8.3.2
Line 4890: All Instances Are Used Up (1); in sm_DecodeNetworkPdpActivationReqMsg
Line 4911: PdpAddressLength ,ApnLength values are out of bounds 
Line 4924: Rejecting Network's PDP Activation Due to a Collision in sm_DecodeNetworkPdpActivationReqMsg...... [24.008]-6.1.3.1.5!
Line 4942: All Instances Are Used Up in sm_DecodeNetworkPdpActivationReqMsg
Line 4950: Incorrect TI sent by the Network, Message Ignored...... [24.008]-8.3.2
Line 5052: LinkedTiLength-> %d
Line 5063: LinkedTi after shift -> %d
Line 5158: All Instances Are Used Up in sm_DecodeNetworkSecPdpActivationReqMsg
Line 5165: Incorrect TI = %d sent by the Network, Message Ignored...... [24.008]-8.3.2 
Line 5240: Unexpected PdpType : %d
Line 5262: TiValue -> %d
Line 5264: PdpAddress Length -> %d
Line 5268: PdpAddress -> ...
Line 5272: Apn Length -> %d
Line 5276: Apn -> ...
Line 5283: PCO Length -> %d
Line 5287: PCO -> ...
Line 5306: Sending GS15 - PDP Context Activation
Line 5307: GS15.dwContextId -> %d
Line 5558: SEC PDP Primary PdpInstance -> %d /InstanceFound -> %d/
Line 5566: SEC PDP Instance -> %d/ Cid %d
Line 5605: TiValue -> %d
Line 5607: PrimaryNsapi -> %d
Line 5608: TftLength -> %d
Line 5609: Tft-> ...
Line 5611: QoS from NW -> ...
Line 5616: PCO Length -> %d
Line 5620: PCO  -> ...
Line 5640: Sending GS15 - PDP Context Activation
Line 5641: GS15.dwContextId -> %d
Line 5849: Ti -> %d, TiOriginator -> %d 
Line 5860: ProtConfigOptLen is greater than max length. Setting it to 0 to prevent out of bounds issue. 
Line 5877: Rejecting GAPI's request, RAT Change in progress in sm_DecodeSmRegNetworkPdpActivationRejMsg !
Line 5910: Ti -> %d, TiOriginator -> %d 
Line 5921: ProtConfigOptLen is greater than max length. Setting it to 0 to prevent out of bounds issue. 
Line 5938: Rejecting GAPI's request, RAT Change in progress in sm_DecodeSmRegNetworkSecPdpActivationRejMsg !
Line 6327: State = %d
Line 6328: AgbLuFlag = 0x%x
Line 6339: IU_MODE_VALID_CONTEXT CONTEXT Valid For UMTS.
Line 6347: LlcSapi = %d
Line 6353: AGB_MODE_VALID_CONTEXT  Valid For GPRS.
Line 6396: S1 Mode supported. Setting Traffic class to Interactive or Background ..
Line 6412: PDP Length %d
Line 6433: PDP address field should be empty from REL-10. ReqType =%d
Line 6437: ONESKU. ReqType =%d
Line 6450: AP IP Len =%d/CP IP Len =%d
Line 6505: sm_StoreSecReqDetails PcoLength %d
Line 6576: Error in Lengths of Data which should be in the following range:  0 < PdpAddrLen <= 16, 0 <= ApnLength <= 100, 0 <= ProtCnfOptionsLen <= 251
Line 6621: GAPI requested 0 kbps for  both UL and DL bit rate .. rejecting GAPI request
Line 6664: Checking Instance -> %d
Line 6713: Checking for a Match Between Any Pending PDP Activation By MS <Pdp Address and APN> and Network's ones......
Line 6721: Checking Instance -> %d
Line 6730: PDP Addresses Match...
Line 6739: APns Match...
Line 6744: APns Do NOT Match...
Line 6749: APns Do NOT Match...
Line 6754: PDP Addresses Do NOT Match...
Line 6759: PDP Addresses Do NOT Match...
Line 6765: There were no Instances of Pending PDP Activations By MS
Line 6907: Establish Request Initiator -> %s
Line 6946: GMM Establish Request Cause -> %s
Line 6985: GAPI Requested PDP Type -> %s
Line 7041: Network PDP Type -> %s
Line 7084: Radio Priority -> %s
Line 7129: Invalid Packet Flow Id (%x) used in sm_DisplayPacketFlowId
Line 7134: Packet Flow Id -> %x
Line 7144: Max Bit Rate For Uplink  -> %s
Line 7182: Activation Cause -> %s
Line 7200:  TI -> %x,  TI Originator -> %s 
Line 7205:   LlcSapi -> %x, Client MailBox Id -> %x
Line 7207: Given PdpAddress Length -> %x
Line 7208: Given PdpAddress  -> ...
Line 7210: 
Line 7212: 
Line 7229:  TI -> %x, TI Originator -> %s,PrimaryNsapi -> %x
Line 7234: Given Traffic Flow Template Length -> %x
Line 7235: Given Traffic Flow Template  -> ...
Line 7237: Sndcp Buffer Overhead Length -> %x
Line 7238: Sndcp Buffer Start Offset -> %x
Line 7239: 
Line 7241: 
Line 7282: GS15.dwIpAddress -> %d.%d.%d.%d
Line 7287: GS15.strIpV6Address ->
Line 7294: GS15.dwIpAddress -> %d.%d.%d.%d
Line 7297: GS15.strIpV6Address ->
Line 7305: GS15.dwDns1 -> %d.%d.%d.%d
Line 7312: GS15.dwDns2 -> %d.%d.%d.%d
Line 7318: GS15.strIpV6Dns1 ->
Line 7325: GS15.strIpV6Dns2 ->
