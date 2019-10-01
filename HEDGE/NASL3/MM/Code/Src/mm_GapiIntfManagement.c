Line 111: Initialisation of <GapiIntfManagement>, InitType=%d
Line 159:  %s  in  mm_DecodeGapiMmAttachReqMsg 
Line 163:   Gapi Attach Request Type -> %s 
Line 168:  GAPI ReadyTimerValue is %d 
Line 261: Detach Request saved OR Local Detach is performed because of ongoing Rat Resumption/Suspension.
Line 296: TIN value -> %d
Line 304: No Need to process detach, So performing Local detach 
Line 318: Detach Message with type %d will be processed
Line 334:   Gapi Detach Request Type -> %s, IsThisInternalDetach -> %d, DelayedForDetach  -> %d 
Line 384: NeedCellInd is TRUE while power off detach initiated, start GMM_DETACH_RESET_NEED_CELL_TIMER
Line 398: mm_GetCurrTime() %ld, mm_GetPdpDeactRequestedTime() =%ld,
Line 444: PS_DET_PSOFF is delayed, set it to internal detach for further processing 
Line 456: MM_DSNC - Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 463: MM_DSNC - Saving Detach Msg : DSDS proc ongoing on the other stack: %s
Line 469: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 479: MM state is NULL process detach request internally 
Line 487: On-going redirection from 3G so process detach request internally
Line 501: Saving Detach Msg Until CELL_IND comes
Line 573: U2L is disabled due to silent redial
Line 577: U2L is enabled due to silent redial
Line 583: Clearing CSFB Flags
Line 612: Putting Saved Cell Ind Msg to Message Queue..
Line 659: Silent redial ended and quick rollback state should be abandoned.
Line 674: Perform RAU when CSFB call is aborted before starting
Line 703: mm_DecodeGapiVtCallIndMsg: %d
Line 708: VT call started, so stop the QRB start timer
Line 722: mm_DecodeGapiHDVoiceSettingReqMsg: %d
Line 724: HDVoice on:%d
Line 750: Status = %d in mm_SendGapiMmU2LReselectionInd
Line 930: mm_DecodeGapiMplmnInd: %d
Line 1002: Pended Attach during manual plmn searching will be performed on GSM RAT
Line 1007: Manual PLMN search is finished but not ready to do Attach, set mm_GmmNeedAttachflag to TRUE
Line 1020: Pended RAU during manual plmn searching will be performed on GSM RAT
Line 1025: Manual PLMN search is finished but not ready to do RAU, set RauNeededFlag to TRUE
Line 1105: IsConnected = %d mm_GetCellBandInfo = %d
Line 1106: PsConActiveState = %d FrequencyInfo = %d in mm_SendGapiScellAsInfoInd()
Line 1155: EmergListLen = %d
Line 1170: Emergency Number Type = %d
Line 1171: Emergency Number Length = %d
Line 1172: Emergency Number
Line 1221: NW RESET REJECT IND for %s.(cause = %d)
Line 1259: CMCC NW RESET ACCEPT IND for %s.
Line 1291: mm_GetNWRejTypeForNS Unhandled Procedure (#d) REJ cause (%d) .
Line 1348: mm_GetNWRejTypeForNS Undefined Reject type %d .
Line 1373: Sent REJECT IND to NS Procedure = %d.(cause = %d)
Line 1393: Sent CSFB Status indication message(Currently this is only for MT Call)
Line 1450: [SRVCC] GAPI HANDOVER STATUS IND ->  Status = %s.
Line 1478: [SRVCC] GAPI HANDOVER STATUS IND ->  HandoverType = %s.
Line 1514: PS Support Info : %s.
Line 1531: 
Line 1547: Received Int DDS %d  IMS DDS %d
Line 1578: Current Stack Internet Available %d  IMS Available %d
Line 1652: Operating mode is %d
Line 1664: UE is not in GSM RAT
Line 1682:  %s in  mm_DecodeNsMmVoicePriorityReqMsg 
Line 1700: ATT voice priority, send PS SCRI under specific condition(CS+PS mRAB, ANT BAR 1, SCR off 1s~)
Line 1705: Discard NS_MM_VOICE_PRIORITY_REQ
Line 1733: VoiceDomainPreferenece old: %d, new: %d 
Line 1771: Sensor State Req(Feature = %d, Sensor state = %d)
Line 1809: 
Line 1845: Wrong Action =%d 
Line 1885: Frequency Aiding Req (Start = %d, Rat = %d, Tcxo_Type = %d)
Line 1895: Because active RAT is neither 3G nor 2G so Frequency Aiding fails.
Line 2045: Wrong Action =%d 
Line 2067: Ongoing proc on the other Stack: %s, IMS Signaling started will be pended 
Line 2072: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 2104: IMS Grant is not taken now, as it was taken already, IMS Procedure is %d
Line 2118: SIG Start triggered for IMS Domain as IMS procedure is signaling already 
Line 2133: IMS Signaling is released already IMS Proc is %d
Line 2148: mm_DecodeNsMmImsSignalOperationReqMsg : Signal %d
Line 2160: UE is not in UMTS or GSM Rat modes 
