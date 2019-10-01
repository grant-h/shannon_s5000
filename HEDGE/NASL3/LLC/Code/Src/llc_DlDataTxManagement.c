Line 50: Invalid Protocol Descriptor
Line 57: Invalid Tlli
Line 72: RLC_DATA_IND-Len %d:FrameType 0x%04X:SAPI %d:LlcState %d:LlcHeader 0x%02X 0x%02X 0x%02X
Line 77: Sapi:TLLI_UNASSIGNED
Line 87: RLC_DATA_IND Ignored:SAPI(%d):LlcSuspended(%d):CipherALgo(%d):CipherBit(%d)
Line 129: Invalid FrameType %d
Line 161: RLC_DATA_CNF sapi %d BuffAdd 0x%x buffer_id 0x%4X seq_no %d sent_time %dms
Line 217: RLC_DATA_CNF : free llc_RlcCurrPos
Line 256: RLC_DATA_CNF Invalid BufferId 0x%4X seq_no %d  sapi %d
Line 292: RLC_STATUS_IND UFrame , UFrameType %d sapi %d
Line 297: Warning: BuffAdd is NULL
Line 301: ERROR : BuffAdd (0x%08x) is not same as Uptr (0x%08x)
Line 315: UFrame RLC transmission failure. Release U frame. UFrameType %d sapi %d
Line 339: Warning: BuffAdd is NULL
Line 343: ERROR : BuffAdd (0x%08x) is not same as Sptr (0x%08x)
Line 354: Malloc failed Sptr->SFramePtr=NULL
Line 366: Sptr Seq No %d != Msg Seq No %d
Line 377: STATUS_IND Rcvd: Sending Trig Ind(%d) instead of Status Ind
Line 403: RLC_STATUS_IND : free llc_RlcCurrPos
Line 484: Invalid BufferId 0x%04X Sapi %d
Line 561: UFrame Sapi %d CRC Fail
Line 565: Rx U Frame
Line 604: Malloc failed SabmCommand=NULL
Line 622: UFrame not processed. Sapi %d, State %d, Length %d, FreeQ Read %08X
Line 647: Received UA, Fbit 0, Sapi %d, State %d, Length %d
Line 652: Received SABM, Sapi %d, State %d, Length %d
Line 659: Received FRMR, Sapi %d, State %d, Length %d
Line 665: Rcvd FRMR:Sapi %d:State %d:Len %d
Line 668: Rcvd FRMR:N201 exceeded:Sapi %d Set to Default
Line 706: Malloc failed SabmCommand=NULL
Line 723: U FreeQ Full:Sapi %d:State %d
Line 757: Malloc failed DmResPtr=NULL
Line 773: U FreeQ Full
Line 792: Sending UA, Sapi %d, snpXidLength %d
Line 811: Malloc failed UaResponse=NULL
Line 854: U FreeQ Full Sapi %d 
Line 881: DM Resp rcvd in LLE_ADM 
Line 889: DM Resp rcvd( State %d ) while LLC trying to establish ACK link, hence send LL_RELEASE_IND to SNDCP 
Line 893: State for Sapi %d set to %d
Line 909: State for Sapi %d set to %d
Line 950: SABM+XID Cmd rcvd:ADM:Sapi %d 
Line 955: State for Sapi %d set to %d
Line 960: State for Sapi %d set to %d
Line 976: Malloc failed UaResponse=NULL
Line 993: State for Sapi %d set to %d
Line 998: U FreeQ Full:Sapi %d
Line 1026: SABM+XID Cmd rcvd:ADM_SABM_SENT:Sapi %d 
Line 1031: State for Sapi %d set to %d
Line 1036: State for Sapi %d set to %d
Line 1041: Sabm recvd for invalid Sapi %d
Line 1046: LLE_ADM_SABM_SENT, Sabm recvd w/o xid, hence ignored
Line 1071: SABM+XID Cmd rcvd:ABM:Sapi %d 
Line 1076: State for Sapi %d set to %d
Line 1081: State for Sapi %d set to %d
Line 1094: Malloc failed UaResPtr=NULL
Line 1114: State for Sapi %d set to %d
Line 1119: U FreeQ Full Sapi %d 
Line 1162: Malloc failed UaResPtr=NULL
Line 1186: U FreeQ Full
Line 1202: State for Sapi %d set to %d
Line 1217: Malloc failed UaResPtr=NULL
Line 1242: U FreeQ Full
Line 1248: State for Sapi %d set to %d
Line 1291: DlIFrame Too short:Sapi %d:Header Len %d:Len %d
Line 1298: DlIFrame Free Q empty:Sapi %d
Line 1367: XID Cmd from n/w CurrN201U %d CurrN201I %d 
Line 1386: SNDCP XID Reset trigger from NW
Line 1400: llc_ProcessRcvdXidCmdRes Malloc failed
Line 1424: [SGSN_COMMAND]Sending kU
Line 1429: [SGSN_COMMAND]Not Sending kU
Line 1447: [SGSN_COMMAND]U FreeQ Full
Line 1467: XID Response received, Sapi %d
Line 1474: Invalid XID_RESP Rcvd:XID_COMMAND ReTx'ed
Line 1477: Invalid XID_RESP Rcvd: XID ReTx'ed N200 times
Line 1519: Unknown XID type( SGSN_COMMAND/SGSN_RESPONSE ) received
Line 1563: State for Sapi %d set to %d
Line 1578: State for Sapi %d set to %d
Line 1603: State for Sapi %d set to %d
Line 1644: State for Sapi %d set to %d
Line 1682: Frame Invalid:Sapi %d:Discard
Line 1689: Cannot get DL_FRAME for Sapi %d:Discard
Line 1697: Invalid PDU len %d:Discard
Line 1708: UIFrame:Ciphered %d:Sapi %2d:Len %d:SeqNo %3d:DlOC %d
Line 1718: Hdr indicates ciphering, but no algorithm configured. Discard
Line 1778: DlOCCurr %d Nu %d 
Line 1784: Frame too short:SAPI %d:L3PduLen %d
Line 1789: Frame too long:SAPI %d:L3PduLen %d:N201u %d
Line 1797: Duplicate Frame:Nu %3d:Vur %3d:Duplicate mask 0x%08X:offset %3d:SAPI %d
Line 1882: IFrame Invalid Len %d:N201-I %d
Line 1892: FALSE:llc_CheckValidityForKdMd()
Line 1994: Ns %d:Nr %d:SBits 0x%02X:Invalid SBits
Line 2031: Malloc failed RnrFramePtr=NULL
Line 2092: FALSE:llc_CheckIFrameValidity(PduLen-%d:Headerlen-%d:Ns %d:Nr %d:SBits %d
Line 2118: DlIFrame->DlPduPtr:NULL
Line 2204: SFrame Rcvd:LLE != LLE_ABM:Send DM RSP:State %d:Sapi %d
Line 2228: Sending FRMR, Sapi %d
Line 2247: Malloc failed FrmrPtr=NULL
Line 2285: Sending FRMR:Sapi %d:U Free Q Full
Line 2325: Malloc failed SabmCommand=NULL
Line 2415: RR/ACK/RNR_FRAME_S_BITS:Invalid SFrameLen
Line 2429: SACK_FRAME_S_BITS:Invalid SFrameLen
Line 2435: Invalid SBits
