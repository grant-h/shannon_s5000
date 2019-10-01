Line 64: Entering cc_DecodeCcHoldReqMsg....
Line 76: TransactionId -> %d
Line 94: Call is not active....!!!
Line 110: CC State Must be CC_ACTIVE in order to Hold the Call. But CC State %s  and Ignored in cc_DecodeCcHoldReqMsg
Line 120: CallSession %d is NOT Active in cc_DecodeCcHoldReqMsg
Line 130: No Session Found to contain the given TI in cc_DecodeCcHoldReqMsg, Message Ignored.
Line 140: Rejecting User's Req in cc_DecodeCcHoldReqMsg ! RAT Change in progress !!
Line 187: Unable to Allocate Memory to Send %s Message in cc_SendHoldReqMsg
Line 212: Entering cc_DecodeHoldAckIndMsg....Network Accepting to Hold This Call.....[24.083]-2.1.2
Line 228: TransactionId -> %d
Line 254: AudioHoldOn()
Line 258: Aux state mismatch happened for CallSession %d So trigger Status Msg to NW
Line 283: CallSession %d is NOT Active Send ReleaseComplete in cc_DecodeHoldAckIndMsg
Line 309: No Session Found to contain the given TI in cc_DecodeHoldAckIndMsg, Message Ignored.
Line 335: Entering cc_DecodeHoldRejIndMsg....Network Refusing to Hold This Call.....[24.083]-2.1.2
Line 351: TransactionId = %d in cc_DecodeHoldRejIndMsg
Line 455: Message received in incorrect %s state in cc_DecodeHoldRejIndMsg
Line 461: CallSession %d is NOT Active Send ReleaseComplete in cc_DecodeHoldRejIndMsg
Line 469: No Session Found to contain the given TI in cc_DecodeHoldRejIndMsg, Message Ignored.
Line 524: Displaying Message Contents: %s
Line 528: Result  -> %d
Line 530: Cause.DataPresent  -> %s
Line 541: Unable to Allocate Memory to Send %s Message in cc_SendCcHoldRspMsg
Line 565: Entering cc_DecodeCcRetrieveReqMsg.., User Requesting to Retrieve the Held Call...[24.083]-2.1.3
Line 570: TransactionId -> %d
Line 594: cc_CheckPossibleAction...!!!
Line 612: Message received in incorrect %s state in cc_DecodeCcRetrieveReqMsg
Line 622: CallSession %d is NOT Active, Send ReleaseComplete in cc_DecodeCcRetrieveReqMsg
Line 632: No Session Found to contain the given TI in cc_DecodeCcRetrieveReqMsg, Message Ignored.
Line 638: Rejecting User's Req in cc_DecodeCcRetrieveReqMsg ! RAT Change in progress !!
Line 685: Displaying Retrieve Req Message Contents: %s
Line 694: Unable to Allocate Memory to Send %s Message in cc_SendRetrieveReqMsg
Line 717: Entering cc_DecodeRetrieveAckIndMsg...Network Accepting to Retrieve the User's Held Call....[24.083]-2.1.3
Line 725: TransactionId -> %d
Line 751: AudioHoldOn()
Line 755: Aux state mismatch happened for CallSession %d So trigger Status Msg to NW
Line 772: CallSession %d is NOT Active, Send ReleaseComplete in cc_DecodeRetrieveAckIndMsg
Line 792: No Session Found to contain the given TI in cc_DecodeRetrieveAckIndMsg, Message Ignored.
Line 818: Entering cc_DecodeRetrieveRejIndMsg...Network Refusing to Retrieve the User's Held Call....[24.083]-2.1.3
Line 934: Received in Invalid State, Releasing the Call Altogether.... in cc_DecodeRetrieveRejIndMsg
Line 942: CallSession %d is NOT Active, Send ReleaseComplete in cc_DecodeRetrieveRejIndMsg
Line 950: No Session Found to contain the given TI in cc_DecodeRetrieveRejIndMsg, Message Ignored.
Line 999: Displaying Retrieve Rsp Message Contents: %s
Line 1003: Result  -> %d
Line 1005: Cause.DataPresent  -> %s
Line 1017: Unable to Allocate Memory to Send %s Message in cc_SendCcRetrieveRspMsg
Line 1035: NORMAL Initialisation of <Call Hold Management>
Line 1041: GSM to UMTS Initialisation of <Call Hold Management>
Line 1047: UMTS to GSM Initialisation of <Call Hold Management>
Line 1053: Unknown Initialisation Type (%d) in cc_InitialiseCallHoldManagement
