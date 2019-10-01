Line 122: llc_CipherLog[][0].Sapi = %d
Line 148: State for Sapi %d set to %d
Line 175: State for Sapi %d set to %d
Line 179: llc_DeactivateLlc: IsDlDataProcessDuringLLCSuspended(%d) llc_CipheringSuspended(%d)
Line 182: Sapi:%d State:LLE_TLLI_UNASSIGN
Line 421: Error : Wrong Stack Id %d 
Line 431: Tmr Create Failed
Line 521: llc_ActivateAckLle,llc_RlcCurrPos.Sapi = %d; llc_RlcCurrPos.PduSeqNo = %d
Line 657: LlcSapiPtr->URlcQueue Count = %d
Line 686: LlcSapiPtr->UAckPendingQueue Count = %d
Line 766: llc_DeactivateUnackLle, Sapi %d
Line 811: LleAckPtr is NULL
Line 815: llc_DeactivateAckLle, Sapi %d
Line 824: LleAckPtr->RlcQueue Count = %d
Line 861: LleAckPtr->AckPendingQueue Count = %d
Line 866: Not freeing llc_RlcCurrPos.PduSeqNo = %d
Line 905: CurrPosUlIFramePtr is not NULL
Line 938: llc_RlcCurrPos is reset
Line 1005: free CipherStream 0x%X 
Line 1109: llc_GetUQueue : Queue or Queue->Start is NULL
Line 1114: llc_GetUQueue : Ptr NULL
Line 1118: llc_GetUQueue : Ptr 0x%08X
Line 1158: llc_GetUQueueByCmdType from Q 0x%08X, returns 0x%08X, Start 0x%08X, Last 0x%08X  SeqNo %d, CommandType %02d
Line 1165: Frame %08X, Next %08X, N200 %02d, SeqNo %04d, UFrameType %02d, AckStatus %02d  TimerT200 %3d
Line 1172: llc_GetUQueueByCmdType from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X  CommandType %02d
Line 1243: llc_AddSQueueBySeqNo, Queue 0x%08X, Frame 0x%08X, Start 0x%08X, Last 0x%08x, SeqNo %d
Line 1250:   Start %08X, Last %08X : Frame %08X, Next %08X  Seq %4d  Tim %3d
Line 1290: llc_GetSQueue from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1348: llc_GetUiQueue : Ptr 0x%08X
Line 1352: llc_GetUiQueue : Ptr NULL
Line 1378: llc_GetUiQueueIfCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1388: llc_GetUiQueueIfCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1410: llc_GetUiQueueWithCipherStatus %d 
Line 1423: 1. Nu %d found with CipherStatus %d 
Line 1435: 2. Nu %d found with CipherStatus %d 
Line 1442: 3. Nu %d has CipherStatus %d 
Line 1446: 1. Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1451: 2. Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1523:  llc_AddIQueueBySeqNo, Queue 0x%08X, Frame 0x%08X, Start 0x%08X, Last 0x%08x, nS %d
Line 1530:   Start %08X, Last %08X): Frame %08X, Next %08X  nS %4d, Timer %02d
Line 1572: llc_GetIQueue from Q 0x%08X, returns NULL
Line 1577: llc_GetIQueue : Ptr NULL
Line 1581: llc_GetIQueue : Ptr 0x%08X
Line 1608: llc_GetIQueueIfCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1618: llc_GetIQueueIfCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1659: [Loop]llc_GetSQueueBySeqNo from 0x%08X, returns 0x%08X, Start 0x%08X, Last 0x&08X  SeqNo %d
Line 1666:  Start %08X, Last %08X : Frame %08X, Next %08X  Seq %4d  Tim %3d
Line 1673: llc_GetSQueueBySeqNo from 0x%08X, returns NULL, Start 0x%08X, Last 0x&08X  SeqNo %d
Line 1713: [LOOP] llc_GetIQueueBySeqNo from Q 0x%08X, returns 0x%08X, Start 0x%08X, Last 0x%08X  nS %d
Line 1720: Start %08X, Last %08X): Frame %08X, Next %08X  nS %4d, Timer %02d
Line 1727: llc_GetIQueueBySeqNo from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X  nS %d
Line 1760: llc_SearchIQueueBySeq LOOP
Line 1834: LOOP llc_AddDlQueueBySeqNo, Queue 0x%08X, Frame 0x%08X, Start 0x%08X, Last 0x%08x, SeqNo %d
Line 1873: llc_GetDlQueue from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1894: Ptr->DeCipherStatus is PDU_CIPHER_PENDING
Line 1941: llc_GetDlQueueBySeqNo from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, SeqNo %02d
Line 1946: llc_GetDlQueueBySeqNo from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, SeqNo %02d
Line 1982: llc_GetDlQueueByCipherStream from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, SeqNo %02d
Line 1987: llc_GetDlQueueByCipherStream from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, SeqNo %02d
Line 2025: Marking duplicate frame %d
Line 2035: llc_GetUlQueueBySeqNo from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, nU %02d
Line 2040: llc_GetUlQueueBySeqNo from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, nU %02d
Line 2097: llc_GetDlQueueIfDeCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 2107: llc_GetDlQueueIfDeCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 2187: New TLLI Assigned From GMM:LLC-LLE_ADM
Line 2193: TLLI-Changed:TLLI Old unassigned
Line 2218: TLLI-changed:TLLI Old still valid
Line 2235: TLLI unassigned
Line 2320: llc_FormXidBlock Non-NULL XID parameters %08X
Line 2406: Sapi %d UI Frame->UL CipherQueue
Line 2420: An element is already present in the *start of the free queue
Line 2553: Invalid frameType %d Sapi %d
Line 2557: %d = llc_GetFreeIndexCount( %d, %d )
Line 2592: Kc value  first part is 0x%02x 0x%02x 0x%02x 0x%02x
Line 2594: Kc value second part is 0x%02x 0x%02x 0x%02x 0x%02x
Line 2645: Invalid TLLI rcvd 0x%02X 0x%02X 0x%02X 0x%02X
Line 2647: Invalid TLLI rcvd, TlliExpctd = 0x%02X 0x%02X 0x%02X 0x%02X
Line 2681: Invalid Sapi(%d)
Line 2843: llc_SetSBitsAndSendFrame(), LLC sending SFrame, SBits 0x%02X Sapi %d, Sequence %d
Line 2849: llc_SetSBitsAndSendFrame No Frame Free Q Full Sapi %d
Line 3071: Invalid Nr %d rcvd, Expected Nr %d
Line 3100: FrameValid=FALSE : LleAckPtr->vR %d, LlcSapiPtr->LleNegXidValues.kD %d, Ns %d
Line 3108: FrameValid=FALSE : LleAckPtr->vR %d, LlcSapiPtr->LleNegXidValues.kD %d, Ns %d
Line 3142: State for Sapi %d set to %d
Line 3156: State for Sapi %d set to %d
Line 3164: State for Sapi %d set to %d
Line 3168: State for Sapi %d set to %d
Line 3211: Invalid Version Field Length %d
Line 3216: Invalid Version %d
Line 3225: Invalid IOV_UI Field Length %d
Line 3234: Invalid IOV_I Field Length %d
Line 3242: IOV_I invalid in XID packet
Line 3256: Invalid T200 Field Length %d
Line 3262: T200 %d out of range
Line 3273: Invalid N200 Field Length %d
Line 3279: N200 %d out of range
Line 3290: Invalid N201U Field Length %d
Line 3296: N201U %d out of range
Line 3307: Invalid N201I Field Length %d
Line 3313: N201I %d out of range
Line 3324: Invalid mD Field Length %d
Line 3330: mD %d out of range
Line 3341: Invalid mU Field Length %d
Line 3347: mU %d out of range
Line 3358: Invalid kD Field Length %d
Line 3365: kD %d out of range
Line 3376: Invalid kU Field Length %d
Line 3383: kU %d out of range
Line 3398: SNDCP Parameters present for non SNDCP Sapi
Line 3407: Invalid RESET Field Length %d
Line 3417: Reset received not in XID packet
Line 3428: Invalid XID Parameter Type %d received
Line 3468: Duplicate XidType Rcvd: %d
Line 3490: U FRA HDR LEN(%d) > LEN OF U FRA PDU (%d)!!
Line 3502: Rcvd XID:Sapi %d:len %d:Type %d
Line 3544: U FRA HDR LEN(%d) > LEN OF U FRA PDU (%d)!!
Line 3568: Ver:%d
Line 3576: IOV_UI Old:0x%08X  New:0x%08X
Line 3583: Storing old IOV-UI 0x%08X Current IOV-UI  0x%08X 
Line 3590: IOV_I Old:0x%08X New:0x%08X
Line 3598: T200 Old:%d New:%d
Line 3606: N200 Old:%d New:%d
Line 3615: N201U Old:%d New:%d
Line 3629: N201I Old:%d New:%d
Line 3637: mD Old:%d New:%d
Line 3646: mU Old:%d New:%d
Line 3655: kD Old:%d New:%d
Line 3663: kU Old:%d New:%d
Line 3669: SNDCP Params present,Len:%d
Line 3678: SNDCP Params Malloc fail
Line 3680: SNDCP Params Len set to zero forced
Line 3700: LLC Reset Rcvd
Line 3716: LLC Reset:RLC has SAPI1 PDU:llc_Trig_Ind_Insteadof_Status_Ind is set
Line 3732: Invalid XID Rcvd:Type %d:Length %d
Line 3754: llc_UpdateUFrameBufVar LleUFrameUpinfoPtr is null
Line 3770: NULL FRAME Rcvd:iscellUpdate=FALSE:SeqNoRcvd %d:Sapi %d
Line 3786: SeqNo not matched:SeqNoRcvd %d:SeqNoStrd %d:Sapi %d
Line 3907: llc_SendUFrameToRlc
Line 3932: State for Sapi %d set to %d
Line 3938: UFrame ReTx'ed, Sapi %d, N200 %d, N200Max %d
Line 3944: U Frame(Sapi %d) Invalid ->FreeQ
Line 4004: S Frame(Sapi %d)No ABit->FreeQ
Line 4011: Sapi %d:LLC Suspended
Line 4037: Sapi(%d) not LLC_SAPI_GMM ||LLC: suspend state(%d)
Line 4043: llc_SendUiFrameToRlc: RelClass(%d)
Line 4109: llc_SendIFrameToRlc ( Sapi %d ) can't send. Suspended
Line 4115: llc_SendIFrameToRlc ( Sapi %d ) can't send. LLE_PEER_RECEIVER_BUSY
Line 4189: llc_SendSingleIFrameToRlc( Sapi %d ) can't send  Llc Suspended
Line 4260: FALSE:get_rlc_CheckForFreePDU-Sapi %d
Line 4270: TRUE:get_rlc_CheckForFreePDU-Sapi %d
Line 4725: L1SM_CipherResponse length %d Data: 
Line 4726: Sapi %d:Sequence %d:Direction %04X:Length %d:Context %08X:CipherStream %08X
Line 4730: CipherComplete: IsDlDataProcessDuringLLCSuspended(%d) llc_CipheringSuspended(%d)
Line 4763: PDU size(%d)!=Cipher stream size (%d)
Line 4769: 		CipherStatus(%d) AckStatus(%d) CipherInput(%d)
Line 4773: UI:0x%08X:nU %d:Len %d:Data 0x%08X Ciphered
Line 4788: llc_PendingRAUComplete %d , IsRAUCom_NoExtULTBF %d
Line 4789: Sapi %d , prio %d xidlen %d
Line 4819: LleUlUiFramePtr is NULL
Line 4825: %2d UI UL Frames not on free Queue 0x%08X
Line 4829: LleUnack.UlCipherQueue:Frame %08X:Next %08X:CipherStatus %02d:nU %04d:PduID %02d:UiFrameLength %d
Line 4834: %2d UL UI Frames Missing
Line 4873:  Ciphered I frame received in !ABM, Add to I frame Free Queue:Mode %d 
Line 4901: I frame to be ciphered doesn't exist any more in the buffer/Queue
Line 4921: Using Old IovUI = %d
Line 4926: Using current IovUI = %d
Line 4947: PDU size(%d)!=Cipher stream size (%d) 
Line 4971: DlOCNext %d hold_decipher %d
Line 4973: DlOCCurr = %d  DlOCNext =%d
Line 4988: Deciphering Success with Current Iov UI = 0x%08X in LLMEntity.Iovui
Line 4996: Using Old Iov UI = %d  Pass count =%d
Line 4999: Assigning Old Iov UI = %d  in LLMEntity.Iovui
Line 5008: Assigning Current Iov UI = %d  in LLMEntity.Iovui
Line 5018: [DL CRC Fail] Send STATUS IND to GMM
Line 5029: DL_DATA_IND
Line 5031: L1SM_CipherResponse
Line 5033: [DL CRC Fail ] DLOC_roll(%d) DIOCCurr(%d)  DIOCNext(%d) gStat_llc_Param.Stat_llc_CRCFails (%d)
Line 5038: hold_decipher set to 1
Line 5057: hold_SeqNo =%d DLOC_attmept= %d DLOC_roll %d DlOCNext %d
Line 5061: PDU size(%d)!=Cipher stream size (%d) 
Line 5082: CRC fails : exceeded DLOC_MAX_RECOVER_ATTEMPTS  IOV_UI : used 0x%08X 
Line 5085: CRC fails : With old IOV_UI  : 0x%08X
Line 5096: CRC fails : TRY with old IOV_UI : 0x%08X
Line 5104: CRC fails : exceeded DLOC_MAX_RECOVER_ATTEMPTS  IOV_UI : used 0x%08X
Line 5107: CRC fails : With old IOV_UI  : 0x%08X
Line 5118: CRC fails : TRY with old IOV_UI : 0x%08X 
Line 5149: LleDlUiFramePtr:NULL
Line 5155: %2d UI DL Frames not on free Queue 0x%08X
Line 5158: LleUnack.DlCipherQueue: Frame %08X:Next %08X:DeCipherStatus %02d:SeqNo %04d:DlOCNext %02d:DlPduLength %d
Line 5162: I frame to be Deciphered not any more in Dl buffer
Line 5187: I frame to be Deciphered not any more in Dl buffer
Line 5208: Unexpected Cipher Stream Direction: 0x%04x
Line 5226: llc_DecodeLlcCipherRejectMsg: Sapi %d, Sequence %d, Direction 0x%x, Context %08X
Line 5236: CipherReject: IsDlDataProcessDuringLLCSuspended(%d) llc_CipheringSuspended(%d)
Line 5249: Seq No. %d deleted from DL Cipher Queue
Line 5282: SAPI1 SeqNo. %d retryCount %d
Line 5296: SeqNo. %d deleted from UL Cipher Queue
Line 5333: Unexpected Cipher Stream Direction: 0x%04x
Line 5348: CipherResume: IsDlDataProcessDuringLLCSuspended(%d) llc_CipheringSuspended(%d)
Line 5378: CipherResume: LlmEntity.CipherAlgorithm(%d) ... ignoring
Line 5394: SeqNo. %d deleted from UL Cipher Queue
Line 5411: free CipherStream 0x%X 
Line 5421: Resend UL UI CIPH REQ:Sapi %d:Seq %d CipherStatus %d
Line 5492: Duplicate Frame:Nu %3d:Vur %3d:Duplicate mask 0x%08X:offset %3d:SAPI %d
Line 5561: DL(Sapi 1) UI Frame Malloc failed
Line 5580: Malloc failed SmsData:NULL
Line 5600: Malloc failed SnpData:NULL
Line 5647: S Free Q Full:Sapi %d
Line 5685: S Free Q Full:Sapi %d
Line 5721:   llc_DecrementUFrameTimerCtr: Loop found
Line 5727:  Frame %08X, Next %08X, N200 %02d, SeqNo %04d, UFrameType %02d, AckStatus %02d  TimerT200 %3d
Line 5768:   llc_DecrementSFrameTimerCtr: Loop found
Line 5774:   SRlcQueue (%08X, Start %08X, Last %08X): Frame %08X, Next %08X  Seq %4d  Tim %3d
Line 5815:   lllc_DecrementIFrameTimerCtr: Loop found
Line 5821: Start %08X, Last %08X): Frame %08X, Next %08X  nS %4d, Timer %02d
Line 5868:   llc_GetUQueueByTimedOut: Loop found
Line 5874:  Frame %08X, Next %08X, N200 %02d, SeqNo %04d, UFrameType %02d, AckStatus %02d  TimerT200 %3d
Line 5927: S Frame LOOP:Start %08X:Last %08X:Frame %08X:Next %08X:Seq %4d:T200 %3d
Line 5980: I Frame LOOP:Start %08X:Last %08X:Frame %08X:Next %08X:nS %4d:T200 %02d
Line 6026: U free Q Full:Sapi %02d
Line 6091: N200Reached: NO PEER RESP:not sending to SNDCP no L3 XID Param
Line 6107: State for Sapi %d set to %d
Line 6138: Sapi %02d, %2d U Frames not on free Queue %08X
Line 6147: %2d U Frames Missing for SAPI %d
Line 6154: Sapi %02d, %2d UI UL Frames not on free Queue 0x%08X
Line 6157: 		CipherQueue =>CipherStatus(%d) nU(%d) CipherInput(%d) AckStatus(%d)
Line 6165: %2d UI UL Frames Missing for SAPI %d
Line 6173: Sapi %02d, %2d UI DL Frames not on free Queue 0x%08X
Line 6179: %2d UI DL Frames Missing for SAPI %d
Line 6194: Sapi %02d, %2d S Frames not on free Queue %08X
Line 6203: %2d S Frames Missing for SAPI %d
Line 6211: Sapi %02d, %2d I UL Frames not on free Queue 0x%08X
Line 6223: %2d I UL Frames Missing for SAPI %d
Line 6230: Sapi %02d, %2d I DL Frames not on free Queue 0x%08X
Line 6239: %2d I DL Frames Missing for SAPI %d
Line 6267: CipherRequest: IsDlDataProcessDuringLLCSuspended(%d) llc_CipheringSuspended(%d)
Line 6279: Ciph Algo-%d:Sapi-%d:InputKey-%08X:Dirn-%d:Kc_msb-0x%08X:Kc_lsb-0x%08X:Len-%d
Line 6280: Buffer-%08X:Length-%d:Context-%08X:Seq-%d
Line 6306: llc_SetNumRLCFramesUL : Frame %d
Line 6328: llc_ClearUlCipherQueue - Sapi %d
