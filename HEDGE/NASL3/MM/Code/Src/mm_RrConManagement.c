Line 192: Clearing Cell Congestion flag
Line 277: EST CNF not processed
Line 306: 2G DTM : Set GMM state to previous one 
Line 422: Timer MM_WFNWC is not started, Since GCF Mode is enabled 
Line 456: in case of 2G GSM only cell to 3G CS+PS cell, PS cell data should be processed
Line 495: URRC_MM_REL_IND came after REL_CNF while MM_WAIT_FOR_SCR_BEFORE_LAU time is running, perform LAU
Line 519: CS procedure is not CS CALL, not expected
Line 558: G2L redirection will be initiated.
Line 564: G2U redirection will be initiated.
Line 574: PS resumption failure in GSM, so ISR status change to deactivate & TIN to P-TMSI
Line 583: URRC_MM_REL_IND came faster than CC Release complete.. NW issue but we handle call release.. 
Line 600: LAU is tried on MT CSFB procedure, but SETUP_IND didn't come. So, canceling QRB and wait for paging from 3G NW 
Line 614: RRC Connection Released.. Wait for Cell Ind
Line 619: Signaling Connection Released.. No need to Wait for Cell Ind
Line 644: Sending PagingResponse due to URRC_MM_REL_IND
Line 653: [HongKong Network]Clearing QRB, inorder to Trigger LAU in this abnormal scenario, to receive Setup From network
Line 760: WARNING : REL_IND comes abnormally. MM triggers SMS's retrial by Setting cause as MM_EST_REQ_REJ_CAUSE_UNSPECIFIED
Line 828: Message crossover: RR_MM_REL_IND ignored as MM has already requested release, await RR_MM_REL_CNF
Line 955: Cause Received RR_CELL_CONGEST 
Line 1005: WARNING : REL_IND comes abnormally. MM triggers SMS's retrial by Setting cause as MM_EST_REQ_REJ_CAUSE_UNSPECIFIED
Line 1051: GRR indicated as No cell, so regard the previous CELL_IND as a new one and not waiting for CELL_IND
Line 1079: Abort indication is not processed
Line 1120:  CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d
Line 1128: MM Connection Lost due to No service
Line 1142: CS procedure is not CS CALL, not expected
Line 1162: LAU is tried on MT CSFB procedure, but SETUP_IND didn't come. So, canceling QRB and wait for paging from 3G NW 
Line 1210: Sending PagingResponse due to URRC_MM_REL_IND
Line 1253: Invalid Message in this Protocol State 
Line 1482: Silent re-dial!!! PAGING RSP failed with URRC_EST_REJ Retry Paging Responce 
Line 1566: FD will be delayed until RAU completed
Line 1579: mm State = %d ; mm_GetDsDelayCsIdleEntry = %d
Line 1620: LAU is tried on MT CSFB procedure, but SETUP_IND didn't come. So, canceling QRB and wait for paging from 3G NW 
Line 1643: Unexpected event that MM connection exists and REL_CNF comes. Synchronizing MM/CC state
Line 1721: cRAU will be pended until GMM_REL_CNF + CELL_IND comes
Line 1744: WARNING : this REL_CNF is duplicated one, so ignoring it
Line 1776: mm_GetRrMmRelReqSentFlag = %d, so ingoring DATA_IND
Line 1841: CS Call Paging received in 3G, and PS/CS signalling triggered on other stack!!
Line 1858: Paging will be pended unitl SCR or CELL_IND
Line 1872: MT paging is received during PS detach, invoke local detach to avoid delay
Line 1911: SIM is opening status and MT cause is not SMS, so discard the PAGE_IND (cause :%d)
Line 1954: Stop QRB Procedure for PS Switching, since Paging received
Line 1961: Pend QRB Procedure, since Paging received
Line 1983: QRB_G2L due to PS switching is aborted, since Paging received
Line 1989: QRB_G2L is aborted by MT call so IsCsfb set TRUE for QRB retrial.
Line 2052: Paging with same type of ID comes -Waiting for call, but NW is still paging, so extend T3240 and wait for NW's response
Line 2058: Paging with different type of ID comes -Waiting for call, but NW is still paging, so extend T3240 and wait for NW's response
Line 2082: Current Paging is  for MT call , so ignoring previous paging for Low priority Signalling !!
Line 2178: NMO1 and GMM was attempting to update case.
Line 2189: Mobile Id is Valid -> O.K.....
Line 2203: TMSI is NOT Valid -> Paging Response Not Allowed.
Line 2208: Mobile Id is NOT Valid  -> Paging Response Not Allowed.
Line 2214: RAT suspension has been requested -> ...paging request ignored
Line 2219: SIM State is NOT Valid -> Paging Response Not Allowed.
Line 2224: UpdateStatus != MM_UPDATED && ServiceState() != MM_ATTEMPTING_TO_UPDATE -> Paging Response Not Allowed.
Line 2229: UpdateStatus == MM_NO_IMSI -> Paging Response Not Allowed.
Line 2234: Incorrect Plmn State, != MM_ON_PLMN -> Paging Response Not Allowed.
Line 2239: Current Mobile Operation Mode == MM_MOBILE_CLASS_C_PS -> Paging Response Not Allowed
Line 2244: Access Class Barred -> Paging Response Not Allowed.
Line 2249: CS Domain is Supported by Current Cell -> Paging Response Not Allowed.
Line 2254: Not Attached to CS Domain Yet -> Paging Response Not Allowed.
Line 2259: CS and PS detach procedure is in progress
Line 2264: MM State != MM_IDLE (Or) mm_RrMmRelReqSentFlag is TRUE -> Paging Response Not Allowed.
Line 2410: 
Line 2490:  T3212 Timeout detected and probably LAU not triggered 	since MM_CELL_CONG_WAIT_3122_EXP_FLG was set, So performing T3212 expiry actions
Line 2572: Ignoring Sequence Number in mm_SendRrDataReqMsg. Current Sequence Number -> %d
Line 2679: WARNING : Not sending REL_REQ, because it is already sent before
Line 2701: MM_IDLE: LAU will be triggered after timer expired, to avoid a collision of REL_IND
Line 2829: User PLMN will be retrieved after URRC_GMM_REL_CNF
Line 2834: User PLMN will be retrieved after GRR_MM_RESEL_HOLD_CNF
Line 2840: N/W intiated IMSI detach while CS conn active for class A MS in Network Mode I -> GMM Shall Re-attach to Non-GPRS Service by Performing the Combined Routing Area Updating Procedure with IMSI attach
Line 2851: SUSPEND REQ will be sent after URRC_GMM_REL_CNF
Line 2866: SUSPEND REQ will be sent after URRC_GMM_REL_CNF
Line 2872: Stop Nw Req Not received, once its received, GMM Release will be taken care
Line 2991: Set attachNeeded Flg to TRUE, waiting for CELL_IND
Line 3078: mm_IsCsfb is set to FALSE in 2G rat.
Line 3089: mm_IsCsfb is kept for silent redialin..
Line 3128: FD will be delayed until RAU completed
Line 3152: Delay 2G QRB action under PLMN searching period as per LAU abnormal failure over max attempt count 
Line 3193: Paging will be retrieve
Line 3283: Fast return to LTE will be done after GMM is released 
Line 3383: MM_CM_SERV_REJ_IMSI_UNK_FLG: Set LAU_NEEDED flag to TRUE
Line 3652: Power off detach is pending Hence discarding LAU retrails
Line 3663: Not sending MM_CC_ERR_IND for attempting emer call.
Line 3750: Resetting TBF Release Actions
Line 3841: Not sending EST_ERR to CM, because the resource is already released
Line 3868: Changing RATs Due To RR Est Rej Cause, Please Wait..... !!!
Line 3885: Wait for RR Release Before Requesting a RAT Change ..
Line 3990: Rat Change failure happened and LU procedure should be cancled..
Line 4002: Sim: %d, Compile RAT: %d
Line 4020: Location Update Triggered, during D to H handling
Line 4099: RR Rel Cnf Action = %x, CsDomainAccessIsAllowed =%d
Line 4351: Invalid RR Rel Cnf Action (%x) in mm_InitRrRelCoordActionParams !! 
Line 4398: We will do RAU in REL_IND
Line 4526: RR release cause -> %s 
Line 4605: CmCause = %x  
Line 4726: CmCause = %x  
Line 4927: URRC EST REJ cause -> %s 
Line 4994: URRC release cause -> %s 
Line 5120:  Paging ID Type -> IMSI 
Line 5127:  Paging ID Type -> PTMSI 
Line 5134:  Paging ID Type -> IMEI 
Line 5141:  Paging ID Type -> TMSI 
Line 5160:  Paging ID Type -> IMSI 
Line 5167:  Paging ID Type -> PTMSI 
Line 5174:  Paging ID Type -> IMEI 
Line 5181:  Paging ID Type -> IMEISV 
Line 5188:  Paging ID Type -> TMSI 
Line 5195:  Paging ID Type -> NO ID 
Line 5442: GMM is waiting for URRC_GMM_REL_IND to start QRB. 
Line 5500: Call is re-started, and Quick RB was on-going, so make it stand-by.
Line 5507: QRB is pended and call is trigger. GmmCellInfo will be processed after call release.
Line 5651: QRB is triggered about 3G normal MT voice call. 
Line 5713: UrrcRelReqSentFlag is reset in mm_SendUrrcDataResumeOnGsmInd
Line 5723: 
Line 5739: mm_GetEnableIratToLte = %d, mm_GetCcRedialing = %d, mm_GetQrbForCallAbort = %d, ,mm_GetQrbPendingForEutraEnabled = %d
Line 5741: mm_GetQuickRollbackG2LEnabled = %d, mm_GetG2LQrbEnableRPlmn = %d
Line 5757: QRB_G2L is triggered after L2G CSFB call or due to Eutra enabling after PS switching 
Line 5761: QRB_G2L is not triggered.
Line 5774: QRB_G2L is aborted.. 
Line 5785: QRB_G2L is aborted by GRR.. 
Line 5794: QRB_G2L is aborted by G2L redirection. 
Line 5806: Triggering RAU, because it was pended..
Line 5825: LAU triggered because of CSFB call release.
Line 5839: Entering here since LAU is needed due to 3312 expiry
Line 5848: Periodic Location Update is triggered since 3312 was already expired
Line 5857: MM_ABORT_QRB_G2L_TIMER is already stopped so QrbAbortInd is ignored. 
Line 5896: QRB_G2L is triggered.  Mode = %d  :: 0 Stop  1 Start 
Line 5921: U2L QRB mode updated in RPLMN, Mode = %d  :: 0 Disabled  1 Enabled
Line 6013: mm_DecodeRrMmTbfStatusInd: PDP Context Status is %d %d
Line 6040: Tbf Status received: %d
Line 6065: mm_UmtsMode : %d in mm_SendMmRrcUpdateDuplexModeInd
Line 6159: PS Support %d, PDP Active %d 
Line 6182: mm_RrRelIndAction: (%d) 
Line 6186: Invalid RR Rel Ind Action (%d) 
Line 6216: Invalid RR Rel Ind Action (%d) 
Line 6266: Wrong Action =%d 
Line 6328: REL_REQ already sent, due to MT call on the other Stack
Line 6376: RRC PDU Tx table entry %d has been reserved with PduId %04X...
Line 6381: ...for transmission of %s message
Line 6386: ...for transmission of a non-GMM message
Line 6392: ERROR: Table is already full...
Line 6419: PduId %04X confirmed as entry %d in RRC PDU Tx table
Line 6428: ERROR: PduId %04X does NOT match appropriate table entry...
Line 6434: ERROR: PduId submitted for confirmation has the value NOT_RRC_PDU...
Line 6457: Checking RRC PDU Tx table for PduId match...
Line 6462: PduId 0x%04X matched...
Line 6471: ...corresponding to %s
Line 6476: ...corresponding to a non-GMM RRC PDU
Line 6481: ERROR: PduId 0x%04X does not match that of first active entry...
Line 6487: PduId 0x%04X matched...
Line 6495: ...corresponding to %s
Line 6500: ...corresponding to a non-GMM RRC PDU
Line 6509: PduId -> NOT_RRC_PDU
Line 6529: First active entry removed from the RRC PDU Tx table...
Line 6541: PduId %04X does not match first active entry in the RRC PDU Tx table...
Line 6548:  active entry matched in  the RRC PDU Tx table at %d
Line 6583: Flushing the following %d active entries from the RRC PDU submit table...
Line 6586: -------------
Line 6601: No active entries to flush from the RRC PDU submit table...
Line 6615: Entry number %d corresponds to PduId = %04X
Line 6620:  ==> GMM PDU
Line 6621:  ==> %s
Line 6625:  ==> Non-GMM PDU
Line 6628: -------------
Line 6697: No more CS call exist on Non Internet DDS stack so trigger to release PS sig con. 
