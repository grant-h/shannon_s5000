Line 96: %s in cc_DecodeVcgCallEstablishCnfMsg
Line 98: CallSessionNumber = %d in cc_DecodeVcgCallEstablishCnfMsg
Line 102: TransactionId -> %d
Line 178: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 187: Status : VCG_CALL_REQ_INVALID - cc_DecodeVcgCallEstablishCnfMsg...
Line 188: Releasing VCG - cc_DecodeVcgCallEstablishCnfMsg...
Line 209: CC_VCG_CALL_EST_REQ not received - cc_DecodeVcgCallEstablishCnfMsg...
Line 210: Releasing VCG - cc_DecodeVcgCallEstablishCnfMsg...
Line 252: Entering cc_DecodeVcgAlterCodecCnfMsg
Line 254: VcgRefNumber = %d in cc_DecodeVcgAlterCodecCnfMsg
Line 304: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 327: VCG_ALTERCODEC_REQ not Send - cc_DecodeVcgAlterCodecCnfMsg...
Line 346: Entering cc_SendVcgCallEstablishReqMsg
Line 373: Displaying Vcg Call Estb Req Message Contents: %s
Line 375: VcgRefNumber            -> %d
Line 376: NasSyncInd              -> 0x%02X
Line 377: RabId                   -> 0x%02X
Line 378: VcgRatMode              -> 0x%02X
Line 379: CC_Stack No             -> 0x%02X
Line 385: Unable to Allocate Memory to Send %s Message in cc_SendVcgCallEstablishReqMsg
Line 406: Entering cc_SendVcgCallActivateIndMsg
Line 422: Displaying VCG Call Activate Ind Message Contents: %s
Line 424: VcgRefNumber -> %d
Line 425: CC Stack No. -> %d
Line 445: Entering cc_SendVcgCallReleaseReqMsg - Releasing VCG
Line 456: Clearing All Global VCG Data 
Line 471: CC Stack No. %d 
Line 491: Entering cc_SendVcgAlterCodecReqMsg
Line 517: Displaying VCG Alter Codec Req Message Contents: %s
Line 519: VcgRefNumber            -> %d
Line 520: NasSyncInd              -> 0x%02X
Line 521: RabId                   -> 0x%02X
Line 522: VcgRatMode              -> 0x%02X
Line 523: CC Stack No             -> 0x%02X
Line 529: Unable to Allocate Memory to Send %s Message in cc_SendVcgAlterCodecReqMsg
Line 547: Entering cc_DetermineVcgAction
Line 549: VcgRefNumber -> %d
Line 551: RabId -> %d
Line 560: RatMode -> CC_UMTS_RAT_MODE
Line 576: SyncInd Status -> ASSIGNED
Line 593: SyncInd Status -> ALTERED
Line 603: VCG_ALTERCODEC_REQ is not sent before VCG_CALLACTIVATE_IND
Line 627: 2nd Sync message is received,Update the variables
Line 635: RatMode -> CC_GSM_RAT_MODE
Line 651: SyncInd Status -> ASSIGNED
Line 661: SyncInd Status -> ALTERED
Line 671: VCG_ALTERCODEC_REQ is not sent before VCG_CALLACTIVATE_IND
Line 696: RatMode -> Unexpected RAT mode
Line 721: cc_DetermineSrvccVcgActivateAction State = %d,RsrvccHoFail =%d
Line 872: VCG Status Response -> %s
Line 1100: VcgCallEstReqFlag          -> %s
Line 1116: VcgAlterCodecReqFlag       -> %s
Line 1132: VcgCallEstCnfFlag          -> %s
Line 1148: Vcg Ref Number             -> %d
Line 1160: Vcg RabId                  -> %d
Line 1176: Vcg Call Activate Ind Flag -> %s
Line 1192: NORMAL Initialisation of <VCG Management> stack  %d
Line 1205: GSM to UMTS Initialisation of <VCG Management>
Line 1211: UMTS to GSM Initialisation of <VCG Management>
Line 1217: Unknown Initialisation Type (%d) in cc_InitialiseVcgManagement
Line 1234: Deleting VCG Flags in cc_ResetVcgData
Line 1246: Calling vcg_ApiCheckVcgStatus(%d)
