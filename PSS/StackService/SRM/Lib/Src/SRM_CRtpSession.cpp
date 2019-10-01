Line 173: +[CONSTRUCTOR] SRM_CRtpSession
Line 203: -[DESTRUCTOR] SRM_CRtpSession Sid(0x%x)
Line 242: [SESSION] [SetSessionState][0x%x] %d => %d
Line 273: [SESSION] [HandleSetSendPort] Sid(0x%x) port(%u)
Line 297: [SESSION] [HandleSetReceivePort] Sid(0x%x) port(%u)
Line 321: [SESSION] [HandleSetRtcpSendPort] Sid(0x%x) port(%u)
Line 345: [SESSION] [HandleSetRtcpReceivePort] Sid(0x%x) port(%u)
Line 408: [CODEC] [HandleSetSendCodec] Sid(0x%x)
Line 435: [SESSION] Unsupported Codec Type!
Line 524: [SESSION] [HandleEnableRtcpOnCall] Sid(0x%x) enable(%d) rtcpRsBw(%d) rtcpRrBw(%d)
Line 572: [HandleSetRtpTimeout] Sid(0x%x) RtpTimeout(%u)
Line 591: SRM_TIMER_RTP_TIMEOUT has not been  registered!!!
Line 610: [HandleSetRtcpTimeout] Sid(0x%x) RtcpTimeout(%u)
Line 631: SRM_TIMER_RTCP_TIMEOUT has not been  registered!!!
Line 670: [HandleSetSrtp] Sid(0x%x) direction(%d) profile(%d)
Line 763: [HandleSetRtcpXr] Sid(0x%x) Enable(0x%x) StatFlag(0x%x)
Line 766: [HandleSetRtcpXr] RttMode(%d) MaxLoss(%d) MaxDup(%d) MaxTs(%d) MaxDlrr(%d)
Line 807: Set duration SRM_TIMER_RTCP_XR_SCHEDULE
Line 849: [SESSION] [HandleStartSve] Sid(0x%x)
Line 854: Send START_SVE_RSP with ERROR code due to socket err
Line 974: [SESSION] [HandleStopSve] Sid(0x%x)
Line 1290: [SESSION] [HandleCallEstablishRsp] Sid(0x%x) status(%d)
Line 1311: [SESSION] HandleCallEstablishRsp is failure : %d
Line 1327: [SESSION] Failed to send resp for CallEstablish!!!
Line 1328: [SESSION] establishedCause : %d
Line 1350: [SESSION] [HandleAlterCodecRsp] Sid(0x%x) status(%d)
Line 1360: [SESSION] HandleAlterCodecRsp is failure : %d
Line 1380: [SESSION] Failed to send resp for AlterCodec!!!
Line 1381: [SESSION] alterCodecCause : %d
Line 1410: [TX<=] [HandleOutgoingRtpPacket] Sid(0x%x) size(%u) pBuf(0x%x) state(%u)
Line 1413: [TX<=] From VCG
Line 1551: [RX=>] [HandleIncomingRtpPacket] Sid(0x%x) state(%d)
Line 1556: [RX=>] mpTransport is NULL!
Line 1741: [SRTP RX] Update Roc(%d)
Line 1777: [RX=>] RESET_REQUIRED
Line 1800: [RX=>] AUTH FAIL!
Line 1807: [RX=>] SSRC is not valid.
Line 1849: [RX=>] Type: 0x%x
Line 1865: [RX=>] [HandleExpiredRtpTimeout] Sid(0x%x)
Line 1882: [RX=>] [HandleExpiredRtcpTimeout] Sid(0x%x)
Line 1901: [TX<=] [HandleExpiredRtcpSchedule] Sid(0x%x)
Line 1909: [TX<=] scheduledEvent: %d
Line 2045: [TX<=] [HandleExpiredRtcpXrSchedule] Sid(0x%x)
Line 2050: [RX=>] mpTransport is NULL!
Line 2372: Set duration SRM_TIMER_RTCP_XR_SCHEDULE
Line 2396: [RX=>] [HandleExpiredT140RxBuffering] Sid(0x%x)
Line 2413: [RTP-RED-RX] Need to restart timer!
Line 2428: [RTP-RED-RX] Missing SeqNum(%d)
Line 2475: [RX=>] [HandleIncomingRtcpPacket] Sid(0x%x)
Line 2510: [HandleSetBitRate] Sid(0x%x) bitRate(%d)
Line 2520: [HandleSetBitRate] ERR_INVALID_PAMAMETER!!
Line 2539: [HandleEnableDtx] Sid(0x%x) enable(%d)
Line 2549: [HandleEnableDtx] ERR_INVALID_PAMAMETER!!
Line 2576: [HandleSetPacketizationMode] Sid(0x%x) mode(%d)
Line 2578: [HandleSetPacketizationMode] Codec name
Line 2586: [HandleSetPacketizationMode] ERR_INVALID_PAMAMETER!!
Line 2609: [HandleSetTxCmr] Sid(0x%x) cmr(%u)
Line 2619: [HandleSetTxCmr] ERR_INVALID_PAMAMETER!!
Line 2640: [HandleGetRtpStatistics] Sid(0x%x)
Line 2653: [SESSION] extendedMax: %u
Line 2656: [SESSION] expected: %u
Line 2659: [SESSION] received: %u
Line 2667: [SESSION] expectedInterval: %d
Line 2671: [SESSION] receivedInterval: %d
Line 2675: [SESSION] lostInterval: %d
Line 2680: [SESSION] fraction: %u
Line 2693: pSsrc is NULL!!!
Line 2712: [DTMF] [HandleAddDtmfEvent] Sid(0x%x) evtId(%d) mode(%d)
Line 2716: [DTMF] Success AddEventID eventId: %d
Line 2718: [DTMF] Fail AddEventID eventId: %d
Line 2734: [DTMF] [HandleSetDtmfMode] Sid(0x%x) iInBand(%d)
Line 2755: [DTMF] Sid(0x%x) txType(%d) rxType(%d)
Line 2764: [DTMF] Success Set Dtmf Duration
Line 2768: [DTMF] Failed to get Send Codec info
Line 2848: [RTCP-APP] Length of App data(%d)
Line 2849: [RTCP-APP] App data 
Line 2888: [RTCP-APP] Handle Redundancy Request Data(0x%x)
Line 2907: [RTCP-APP] Redundancy is not supported
Line 2924: [RTCP-APP] Handle Frame Aggregation Data(0x%x)
Line 2976: [RTCP-APP] Handle EVS Primary Rate Data(0x%x)
Line 2985: [RTCP-APP] not supported on EVS AMR-WB IO
Line 3002: [RTCP-APP] Handle EVS Bandwidth Data(0x%x)
Line 3062: [RTCP-APP] reqBw(0x%x) currBw(0x%x) resultBw(0x%x),
Line 3067: [RTCP-APP] No negotiated bandwidth
Line 3080: [RTCP-APP] Bandwidth i(%d), BW(0x%x)
Line 3091: [RTCP-APP] supported only EVS Primary mode
Line 3108: [RTCP-APP] EVS Channel Aware Data(0x%x)
Line 3124: [RTCP-APP] Handle EVS Primary to EVS AMR-WB IO
Line 3138: [RTCP-APP] Request (0x%x), Converted (0x%x)
Line 3148: [RTCP-APP] Currently EVS AMR-WB IO mode, Not changed
Line 3165: [RTCP-APP] Handle EVS AMR-WB IO to EVS Primary
Line 3176: [RTCP-APP] Request denied, negotiated value fail
Line 3181: [RTCP-APP] Currently EVS Primary mode, request denied
Line 3248: [eVoLTE] [%s] IP Header: %d bits, Bit Rate: %d kbps
Line 3728: [DTMF] [HandleSetDtmfClockRate] Sid(0x%x) iType(%d)
Line 3735: [DTMF] Success Set Dtmf Clock Rate
Line 3739: [DTMF] Failed No RTP Session
Line 3863: [RX=>] transitCurrent(0x%x %x) diff(%d) jitter(%d)
Line 3908: [RTP-RED-RX] missingCount(%d) redLevel(%d) i(%d)
Line 3935: [RTP-RED-RX] missingCount(%d) redLevel(%d)
Line 4031: [RTP-RED-RX] Buffering Timer is running!
Line 4144: [RX=>] RESET_REQUIRED DB_SSRC(0x%x), RX_SSRC(0x%x)
Line 4198: [RX=>] DUMP Data
Line 4206: [RX=>] Decode Result(%d)
Line 4239: [Set IMS F/T] R/T(%u) S/T(0x%x %x) R/S(%u)
Line 4247: [RX=>] Non-receiving state!
Line 4263: [RX=>] Undefined Payload type
Line 4269: [RX=>] Stop and Start SRM_TIMER_RTP_TIMEOUT
Line 4306: [ProcessRtcpCompoundPacket] mSrtpDirection(%d)
Line 4368: [ProcessRtcpCompoundPacket] Type(%d)
Line 4419: Unknown RTCP Packet Type: %d
Line 4429: Total Packet Size(%d) Sum of Length Field(%d)
Line 4435: [RX=>] Stop and Start SRM_TIMER_RTCP_TIMEOUT
Line 4451: [ProcessRtcpCompoundPacket] AUTH FAIL!
Line 4484: [RX=>] SR Packet Size: %u
Line 4546: [RX=>] round-trip delay : %d
Line 4602: [RX=>] RR Packet Size: %u
Line 4680: [RX=>] SDES Packet Size: %u
Line 4752: [RX=>] BYE Packet Size: %u
Line 4825: [RX=>] APP Packet Size: %u
Line 4865: [RX=>] XR Packet Size: %u
Line 5115: [ProcessReleaseCall] Sid(0x%x)
Line 5134: This is the case last call is located on VCE.
Line 5135: VCE will release VCG and JBM
Line 5225: [ProcessCallQualityInfoInd]PLR(%2d.%2d), JITT(%d), BITR(%d), FractionLost(%d)
Line 5236: [ProcessCallQualityInfoInd] no Rx SSRC, no Call Quality Indication
Line 5309: [TX<=] [GenerateRtpPacket]
Line 5395: [TX<=] payloadHeaderSizeInBit(%u) paddingSize(%u)
Line 5497: [TX<=] [GenerateDtmfPacket]
Line 5555: [TX<=] [GenerateRtcpSrPacket]
Line 5631: [TX<=] [GenerateRtcpRrPacket]
Line 5712: [TX<=] extendedMax: %u
Line 5714: [TX<=] expected: %u
Line 5720: [TX<=] received: %u
Line 5730: [TX<=] lost: %d
Line 5738: [TX<=] expectedInterval: %d
Line 5742: [TX<=] receivedInterval: %d
Line 5746: [TX<=] lostInterval: %d
Line 5751: [TX<=] fraction: %u
Line 5802: [TX<=] [GenerateRtcpSdesPacket]
Line 5878: [TX<=] [GenerateRtcpByePacket]
Line 5991: [SSRC_COLLISION] result: %d
Line 6023: [SESSION] [ProcessSsrcCollisionCheck] Sid(0x%x)
Line 6087: [SESSION] [RegisterOwnSsrc] ipType(%d) ssrc(%u)
Line 6160: [SESSION] CloseJbm (0x%x)
Line 6168: JBM has been released already!
Line 6186: [SESSION] OpenJbm : freq(%u)
