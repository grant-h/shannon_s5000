Line 311: Displaying Send Status Req Message Contents: %s
Line 323: Unable to Allocate Memory to Send %s Message in cc_SendStatusReqMsg
Line 340: Entering cc_SendStatusEnqReqMsg
Line 358: Unable to Allocate Memory to Send %s Message in cc_SendStatusEnqReqMsg
Line 386: Entering cc_DecodeStatusEnqIndMsg
Line 400: TransactionId -> %d
Line 461: No Session Found to contain the given TI in cc_DecodeStatusEnqIndMsg, Message Ignored.
Line 548: Entering cc_DecodeStatusIndMsg.... Network Detected an Error
Line 577: TransactionId -> %d
Line 608: Status state not found in cc_DecodeStatusIndMsg
Line 627: CauseIe not available in cc_DecodeStatusIndMsg
Line 645: CauseIe Length = %d in cc_DecodeStatusIndMsg
Line 678: Response to status enquiry. UE cc state=%d
Line 689: NW cc state=%d
Line 729:  For Data Calls, CC does not need to inform VCG or RABM
Line 783: Start CONNECT_IND_WAIT_TIMER again(%d)
Line 811: VCG already activated
Line 816: VCG need to activate for Voice call only
Line 905: No need to send CC_DISCONNECT_IND(Above layers doesn't have MT call ctxt)
Line 916: Save CallDrop: Type=%d, Cause=%d
Line 932: UE state already moved to another state!!
Line 939: Not a Response to status enquiry
Line 944: cc_DecodeStatusIndMsg - invaild CcCauseLen = %d received
Line 962: cc_DecodeStatusIndMsg - msg ignored
Line 979: No need to send CC_DISCONNECT_IND(Above layers doesn't have MT call ctxt)
Line 991: Save CallDrop: Type=%d, Cause=%d
Line 1006: No Session Found to contain the given TI in cc_DecodeStatusIndMsg, Message Ignored.
Line 1043: cc_DetermineAction - status : send Release Complete
Line 1054: cc_DetermineAction - status: ignored
Line 1067: cc_DetermineAction - status : incompatible state
Line 1073: cc_DetermineAction - status: compatible state
Line 1083: cc_DetermineAction - status: cause => disconnect
Line 1091: cc_DetermineAction - status: cause OK
Line 1126: Not GSM state in cc_ReadReceivedNetworkState
Line 1133: CallStateIe not found in cc_ReadReceivedNetworkState
Line 1164: Non GSM cause in cc_ReadCause
Line 1170: CauseIe not found in cc_ReadCause
Line 1219: Found Compatible State in cc_CheckEtsiStateCompatibility
Line 1229: Unable to Find NetworkState in cc_EtsiCompatibleStatesList, in cc_CheckEtsiStateCompatibility !!
Line 1252: Current State = %s, Equivalent Etsi State = %s in cc_ConvertToEtsiState
Line 1258: Attempting to Read cc_EtsiStateConversionList Using an Invalid State (0x%x) in cc_ConvertToEtsiState
Line 1304: NORMAL Initialisation of <Status Management>
Line 1310: GSM to UMTS Initialisation of <Status Management>
Line 1316: UMTS to GSM Initialisation of <Status Management>
Line 1322: Unknown Initialisation Type (%x) in cc_InitialiseStatusManagement
