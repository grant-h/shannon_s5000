Line 274: 
Line 418: MmPlmnstate: %d, mm_callType %d  
Line 427: CM service req is triggered during LU on MM_UPDATED state, FOR set as 1 and CM service req will be pended
Line 490: No Calls Allowed During RAT Change...!!
Line 531: GPRS only mode, so normal call cannot be done! ...
Line 673: Check to see if same Reg. LAI before allowing call
Line 695: Trigger IMSI attach and then call
Line 883: Saving Msg until the current MM Con is established
Line 928: MmPlmnstate : %d, mm_callType %d  
Line 1034: CallType = %d, mm_UpdateStatus = %s, Ti = %d in  mm_DecodeMmEstReqMsg....[24.008]-4.5
Line 1100: During MO CSFB CM establishment, SMS EST_REQ shall be rejected!!AP shall retry later.
Line 1107: During MT CSFB call MM_EST_REQ can't be processed until MT Paging Response will be sent.
Line 1125: EST_REQ Will handle after MM_WAIT_FOR_UNITDATA_IND_AFTER_L2UPSHO
Line 1129: EST_REQ Saved.
Line 1144: EST_REQ Will be handled after REL_CNF or Combined Attach/RAU completed 
Line 1151: NO_CELL_IND will come very soon. So cannot handle EST_REQ now
Line 1158: CC redial is now taken care of!
Line 1223: Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 1229: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 1238: Ongoing proc on the other Stack: %s, Reject the EST_REQ : %d
Line 1371: If MM state is MM_IDLE, MM received REL_IND before MM_ESTOUT_REQ
Line 1465: IMSI paging succesful, Clear RAU needed flag
Line 1470: IMSI paging succesful, Clear LAU needed flag
Line 1572: Ultra-CSFB MT call : CC SETUP is received so clear CsfbCallState/Status.
Line 1609: mm_MmConCount = %d  mm_MmConCountForCC = %d
Line 1619: Already one CS_CALL active, can't handle another CALL_REQ
Line 1780: Deleting Tmsi, Cksn, Lai due to CM Rej Msg [24.008]-4.5.1.1
Line 1789: MM Will Perform Location Update After RR Release...[24.008]-4.5.1.1
Line 1929: Unable to handle REEST_REQ due to either UMTS rat mode or State mismatch
Line 1965: Redial? = %d
Line 1979: CC Redialling is true and there is more than one MM CNX so not setting MM state to IDLE. CM_SERVICE_REQ will go as DATA_REQ
Line 2028: Network Aborting CM Layer Activity, Cause = %s
Line 2077: triggering Silent redial
Line 2144: mm_AwaitingCmServiceReqRsp : %d 
Line 2149: CC redial is aborted!!!
Line 2272: LOSS_CVG during call, REL_REQ from CC, Clear all contexts
Line 2285: Discard if any saved data request
Line 2295: CS procedure is not CS CALL, not expected
Line 2332: Signaling protection was ON, for CSFB+PSHO case, Releasing CS CALL Grant as part of Call Release from CC
Line 2339: CS procedure is not CS CALL, not expected
Line 2347: Discarding Saved Cell Ind Msg ..
Line 2355: Pended MM_EST_REQ was removed, (TI=%d)
Line 2360: Signaling protection was ON, for CSFB+PSHO case, Releasing CS CALL Grant as part of Call Release from CC
Line 2367: CS procedure is not CS CALL, not expected
Line 2380: There was no pended EST_REQ for TI=%d.
Line 2535: DSDS : CC, SS or SMS Session is Active Sig End not Sent 
Line 2793: Other CM Layer Data not allowed during this State
Line 2825: During RAT Change no CM REQ can be proccessed, message saving
Line 2844: Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 2863: Ongoing proc on the other Stack: %s, Reject the EST_REQ
Line 2900: CmServReqMsg is not available due to running T3246 or Call Type (%s)
Line 2942: QRB_G2L is aborted by MO call so IsCsfb set TRUE for QRB retrial.
Line 2978: EMERGENCY CALL REQ, Making SRNC State to CS CALL Direcltly
Line 3016: Discarding Saved Cell Ind Msg ..
Line 3068: Network Lock Status TRUE..
Line 3128: Remove CmReqPriority IE under a condition of TMO LAB Test
Line 3263: 
Line 3493: 
Line 3548: 
Line 3698: CallDropCauseForDBGSCR = %d, mm_GetCallDropType() = %d 
Line 3704: 
Line 3726: 
Line 3746: 
Line 3794: 
Line 3920: All saved Establishment Requests are cleared
Line 3924: CS CALL was pending before, Clearing the same
Line 3932: QUEUE Not cleared Completely.
Line 3977: CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d 
Line 4052: [ErrInd] CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d 
Line 4069: ERR_IND to CC is not required.
Line 4091: Invalid Call Type in mm_CheckCallType, %d
Line 4156: PD: %d
Line 4326: Got Lower Layer failure, but currently no retransmission happens
Line 4330: Cannot retrieve MM_DATA_REQ, because there is no saved one
Line 4368: CallType : %d 
Line 4745: Delete MM connection in No cell State !!
Line 4881: Reset mmConCountForCM (CC=%d, SS=%d, SMS=%d)
Line 5109: Number of MM Connections -> %d
Line 5121: Number of MM Connections For CC -> %d, For SMS -> %d, For SS -> %d 
Line 5134: Number of MM Connections TO Be Ee-Established-> %d
Line 5146: Call Was Attempted Flag -> %s
Line 5158: Emergency Call Was Attempted Flag -> %s
Line 5212: CM Service Req Type -> %s
Line 5224: Call Type -> %s
Line 5236: CM Service Rej Cause -> %s
Line 5248: Current Transaction Identifier -> %d
Line 5355: Establishment Cause -> %s
Line 5498: Establishment Cause -> %s
Line 5533: Priority -> %s
Line 5578: RR UE ID  -> %s
Line 5630: RRC UE ID Type -> %s
Line 5670: Id scope -> %s
Line 5682: NewLaiRaiVersusOld -> %s
Line 5694: 
Line 5743: URRC Data Request Msg Result -> %s
Line 5777: URRC Sync Ind Status -> %s
Line 5803: Skip for Checking Cell data
Line 5832: Rat is not GSM
Line 6288: Eutra FDD value is set to 1 becuase EutraDisableFlag is false..
Line 6318: Vamos Registry (%d) 
Line 6372: CSFB Call State -> %d, CSFB Call Type  -> %d
Line 6390: Emergency Call was ended before Est Req received and Reposting Cell Ind 
Line 6397: CSFB ID Type -> %d
Line 6412: Call Ended, releasing CS CALL Grant
Line 6420: CS procedure is not CS CALL, not expected
Line 6469: LTE Tin: %d
Line 6475: mm_CsfbCallState =  %d
Line 6504: Changing Encoding due to EutranDisabled is changed to %d
Line 6538: EncodedSizeinBits -> %d 
Line 6547: EncodedSizeinBits -> %d 
Line 6609: Paging Id -
Line 6638: Mapping Paging Id -
Line 6756: WARNING : Cannot store MM_DATA_REQ - already saved one before
Line 6771: WARNING : Cannot store MM_DATA_REQ - memeory not allocated
Line 6795: mm_SRVCC_HO_Cause %d 
Line 6804: SRVCC Handover : IMS CALL Continuation, %d 
Line 6808: CS Procedure is DSDS CS CALL Already
Line 6966: Even CallWasAttempted is TRUE, EST_REQ for a call is sent, so it need be discarded.
Line 7000: Triggering silent redial ...
Line 7066: QRB is triggered about 3G normal voice call. 
Line 7166: Retrieving the pending CS Procedure
Line 7176: CS EST Not Attempted or Not Retrieved
Line 7235: Wrong Action =%d 
Line 7244: Set mm_CmServiceInProgress = %d 
Line 7250: mm_MmConManageDb[%d].mm_CmServiceInProgress = %d 
Line 7256: mm_API_GetCmServiceInProgress StackID =%d 
