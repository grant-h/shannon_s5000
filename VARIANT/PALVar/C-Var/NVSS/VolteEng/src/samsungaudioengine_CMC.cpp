Line 88: [SAE] SAE_Init (TaskID:%d)
Line 107: [SAE] SAE_Terminate
Line 129: [SAE] SAE_SetOperatingMode: mode(%d)
Line 153: [SAE] SAE_CreateChannel (channel:%d), (OM:%d)
Line 173: [SAE] SAE_DeleteChannel (channel:%d)
Line 197: [SAE] SAE_GetChannelCnt(%d)
Line 221: [SAE] SAE_CreateStream (channel:%d, ssrc = %d)
Line 243: [SAE] SAE_DeleteStream (channel:%d, stream = %d)
Line 265: [SAE] SAE_SetSendSSRC (channel:%d, ssrc = %d)
Line 287: [SAE] SAE_SetSendPort (channel:%d, portnr = %d)
Line 309: [SAE] SAE_GetSendPort (channel:%d)
Line 331: [SAE] SAE_SetRecPort (channel:%d, portnr = %d)
Line 351: [SAE] SAE_GetRecPort (channel:%d)
Line 371: [SAE] SAE_SetRTCPSendPort (channel:%d, portnr = %d)
Line 391: [SAE] SAE_GetRTCPSendPort (channel:%d)
Line 413: [SAE] SAE_SetRTCPRecPort (channel:%d, portnr = %d)
Line 435: [SAE] SAE_GetRTCPRecPort (channel:%d)
Line 468: [SAE] SAE_SetSendIP (channel:%d, remoteip:%s, localip:%s)
Line 496: [SAE] SAE_GetSendIP (channel:%d, ipadr:0x%08x, bufsize:%d)
Line 517: [SAE] SAE_ReconfigIPPort (channel:%d)
Line 546: [SAE] SAE_SetSendCodec (channel:%d)
Line 581: [SAE] SAE_GetCurrentSendCodec (channel:%d)
Line 609: [SAE] SAE_GetCodec (listnr:%d)
Line 628: [SAE] SAE_GetCodecCnt
Line 635: [SAE] SAE_SetIPPktLoopback (mode:%d)
Line 684: [SAE] SAE_StartFDSR (channel:%d, status:%d, enableIPv6:%d)
Line 708: [SAE] SAE_StopFDSR (channel:%d)
Line 745: [SAE] SAE_EnableSRTP (channel:%d, direction:%d, profile:%d, key:0x%08x, keylen:%d)
Line 902: [SAE] SAE_SetVEStatus (iChannel:%d, veStatus:%d)
Line 909: [SAE] SAE_EnableRTPPinhole (channel:%d, mode:%d)
Line 1029: [SAE] SAE_GetLastError
Line 1035: [SAE] SAE_GenNTPTimestamp (rtcp_ntp_ls:%u, rtcp_ntp_ms:%u)
Line 1050: [SAE] SAE_SetAVSync (%s)
Line 1062: [SAE] SAE_GetRXVoiceTime (channel:%d, LastPlayedRTPtimestamp:%u, LastPlayedSysTime:%u)
Line 1069: [SAE] SAE_SetRXVoiceDly (channel:%d, msec:%u)
Line 1085: [SAE] SAE_GetDTMFSupport
Line 1106: [SAE] SAE_GetDTMFDecodeNamedEventSupport
Line 1130: [SAE] SAE_SetDTMFMode (channel:%d, iInBand:%d)
Line 1156: [SAE] SAE_SetDTMFPayloadType (channel:%d, iType:%d)
Line 1163: [SAE] SAE_SetDTMFPayloadType (channel:%d, iType:%d, rx_typoe :%d)
Line 1192: [SAE] SAE_SendDTMF (iEventNr:%d, channel:%d, cont_mode:%d, cont_event:%d)
Line 1216: [SAE] SAE_SetTOS (channel:%d, tos:%d)
Line 1240: [SAE] SAE_EnableRTCP (channel:%d, enable:%d)
Line 1264: [SAE] SAE_EnableRTCPOnCall (channel:%d, enable:%d,RTCP_RR_BW:%d, RTCP_RS_BW:%d)
Line 1314: [SAE] SAE_SetEventHandler
Line 1335: [SAE] SAE_SetRTPRecvHandler
Line 1356: [SAE] SAE_SetRTPSendHandler
Line 1378: [SAE] SAE_SetIntervalNotiHandler
Line 1398: [SAE] SAE_SetRTCPRecvHandler
Line 1405: [SAE] SAE_SetUpdateSLOGHandler
Line 1412: [SAE] SAE_SetBigDataHandler
Line 1482: [SAE] SAE_SetPacketizationMode (channel:%d, codecName: 0x%08x, mode:%d
Line 1809: [SAE] SAE_SetRTPTimeout(ch:%d, sec: %u )
Line 1815: [SAE] SAE_SetRTCPTimeout(ch:%d, sec: %u )
Line 1928: [SAE] SAE_SetAMRBitRate(channel: %d, amrBitrate: %d )
Line 1949: [SAE] SAE_SetEVRCBBitRate(channel: %d, evrcbTgtBitrate: %d )
Line 1969: [SAE] SAE_SetEvrcbEOP(channel: %d, evrcbEop: %d )
Line 1990: [SAE] SAE_SetEvrcbMcr(channel: %d, evrcbMcr: %d )
Line 2011: [SAE] SAE_SetEvrcbEOPBaseStation(channel: %d, evrcbEop: %d )
Line 2033: [SAE] SAE_EnableDtx (channel:%d, enable:%d)
Line 2056: [SAE] SAE_SetAMRTxCMR (channel:%d, CMR:%d)
Line 2271: [SAE] SAE_SetDSPDecoderCount (Count:%d)
Line 2275: [SAE] SAE_SetDSPDecoderCount (Count:%d) => ERR out of range
Line 2286: DSP_INTF_VocEnc (EncPkt_Out:0x%08x, dsp_enc_rate:%d, dsp_dtx_mode:%d)
Line 2293: DSP_INTF_VocEnc (preRate:%d, curRate:%d, preDtx:%d, curDtx:%d)
Line 2322: DSP_INTF_VocDec (DecPkt_in:0x%08x, payloadLen:%d, SampFreq:%d)
Line 2332: Exceeding allocated memory for buf_RxDecIn_VoLTE
Line 2345: DSP SPD stuck
Line 2352: DSP SPD delay Count(%d)
Line 2370: DSP_INTF_RxPCMOut (SampFreq:%d)
Line 2388: [SAE_CODE] class: %d, type: %d, msg: %d, order: %d, tmp: %d
Line 2405: format error:max char exceed
Line 2410: 
