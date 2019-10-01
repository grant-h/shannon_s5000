Line 78: IMSCC_FRAMETIME_NTF (%u) to NS, Operation = %u, RtpTime = %u
Line 81: -NTP MS Timestamp of RTCP = %u(0x%x), NTP LS Timestamp of RTCP = %u(0x%x)
Line 103: IMSCC_RTP_MEDIA_STOP_RSP (%d) to NS, Result = %s
Line 126: SRM_EVENT_RTP_RX_TIMEOUT in IMS_CC_SendToNsRTPTimeout
Line 128: SAE_RTPRX_TIMEOUT in IMS_CC_SendToNsRTPTimeout
Line 137: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 143: IMSCC_RTP_TIMEOUT_IND (Channel Id-%d) to NS
Line 163: Sending RTCP Timeout indication to NS
Line 172: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 177: IMSCC_RTCP_TIMEOUT_IND (ChannelId -%d) to NS
Line 203: Sending Frame Time Notification to NS
Line 208: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 214: -		SAE_GetFirstRxRTCPtimestamp failed, Error code = %d
Line 235: Sending First RTP Rx Notification to NS
Line 240: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 246: IMSCC_FIRSTRTPRX_NTF (%u) to NS, Operation = %u
Line 267: Sending DTMF Recv Notification to NS
Line 272: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 282: IMSCC_OPTION_INFO_IND (%d) to NS, Operation = %d, EventId = %d, Volume = %d, Duration = %d, EndBit = %d
Line 333: VCE Event = %d for Channel ID = %d
Line 339: Unknown Channel ID = %d
Line 367: IMS_CC_GetMnoFromTcs() - KTT
Line 377: IMS_CC_GetMnoFromTcs() - LGT
Line 387: IMS_CC_GetMnoFromTcs() - SKT
Line 397: IMS_CC_GetMnoFromTcs() - KOROPEN
Line 407: IMS_CC_GetMnoFromTcs() - VZW
Line 417: IMS_CC_GetMnoFromTcs() - EUOPEN
Line 423: IMS_CC_GetMnoFromTcs() - UNDEFINED
Line 448: Registering call back for events from VCE
Line 453: Callback registered successfully with VCE
Line 459: Callback failed to register with VCE, result = %d
Line 467: SAE_SetOperatingMode for KT
Line 472: Operation mode set successfully
Line 478: Operation mode set failure, result = %d
Line 487: SAE_SetOperatingMode for LGU
Line 492: Operation mode set successfully
Line 498: Operation mode set failure, result = %d
Line 507: SAE_SetOperatingMode for SKT
Line 512: Operation mode set successfully
Line 518: Operation mode set failure, result = %d
Line 527: SAE_SetOperatingMode for KOROPEN
Line 532: Operation mode set successfully
Line 538: Operation mode set failure, result = %d
Line 547: SAE_SetOperatingMode for KDDI
Line 552: Operation mode set successfully
Line 558: Operation mode set failure, result = %d
Line 567: SAE_SetOperatingMode for CMCC
Line 572: Operation mode set successfully
Line 578: Operation mode set failure, result = %d
Line 587: SAE_SetOperatingMode for VzW
Line 592: Operation mode set successfully
Line 598: Operation mode set failure, result = %d
Line 607: SAE_SetOperatingMode for TMOUSA
Line 612: Operation mode set successfully
Line 618: Operation mode set failure, result = %d
Line 627: SAE_SetOperatingMode for Sprint
Line 632: Operation mode set successfully
Line 638: Operation mode set failure, result = %d
Line 660: [SRM=>IMSCC] SRM_IMS_START_SVE_RSP in IMS_CC_HandleSrmStartRsp
Line 662: channelId = %d
Line 678: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 684: IMSCC_RTP_MEDIA_START_RSP (%d) to NS, Result = %d
Line 696: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 701: IMSCC_RTP_MEDIA_START_RSP (%d) to NS, Result = %d
Line 723: [SRM=>IMSCC] SRM_IMS_STOP_SVE_RSP in IMS_CC_HandleSrmStopRsp
Line 735: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 747: IMSCC_RTP_MEDIA_STOP_RSP (%d) to NS, Result = %s
Line 759: [SRM=>IMSCC] SRM_IMS_STOP_SVE_RSP not triggered by IMS
Line 779: [SRM=>IMSCC] SRM_IMS_CHANGE_SVE_RSP in IMS_CC_HandleSrmChangeRsp
Line 784: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 798: IMSCC_RTP_MEDIA_CHANGE_RSP (%d) to NS, Result = %s
Line 820: [SRM=>IMSCC] SRM_IMS_RECEIVE_DTMF in IMS_CC_HandleSrmReceiveDtmf
Line 832: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 842: IMSCC_OPTION_INFO_IND (%d) to NS, Operation = %d, EventId = %d, Volume = %d, Duration = %d, EndBit = %d
Line 869: [VCE=>IMSCC] VCE_IMSCC_VOICE_ENG_START_RSP in IMS_CC_HandleVceStartRsp
Line 870: channelId = %d
Line 886: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 892: IMSCC_RTP_MEDIA_START_RSP (%d) to NS, Result = %d
Line 903: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 909: IMSCC_RTP_MEDIA_START_RSP (%d) to NS, Result = %d
Line 930: [VCE=>IMSCC] VCE_IMSCC_VOICE_ENG_STOP_RSP in IMS_CC_HandleVceStopRsp
Line 942: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 955: IMSCC_RTP_MEDIA_STOP_RSP (%d) to NS, Result = %s
Line 967: [VCE=>IMSCC] VCE_IMSCC_VOICE_ENG_STOP_RSP not triggered by IMS
Line 986: [VCE=>IMSCC] VCE_IMSCC_VOICE_ENG_VESTATUS_RSP in IMS_CC_HandleVceChangeRsp
Line 991: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 1005: IMSCC_RTP_MEDIA_CHANGE_RSP (%d) to NS, Result = %s
Line 1017: Sending Frame Time Notification to NS
Line 1022: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 1035: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 1041: IMSCC_OPTION_SET_RSP (%d) to NS, Result=%s
Line 1059: <<<IMS_CC_SrmMsgHandler, received msg =[0x%x] from SRM>>>
Line 1111: Unknown received msg =[0x%x] from SRM
Line 1131: <<<IMS_CC_VceMsgHandler, received msg =[0x%x] from VCE>>>
Line 1149: Unknown received msg =[0x%x] from VCE
