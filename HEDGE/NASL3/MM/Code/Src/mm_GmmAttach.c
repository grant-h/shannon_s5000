Line 153: Initialisation of <Authentication>, InitType=%s 
Line 165: EncodedSizeinBits -> %d 
Line 192: Skip to send REG_STATUS_IND during Mode Change is progress.
Line 198:  Discard NS_MM_ATT_REQ  
Line 211:  Cell Data Access Barred  
Line 252:  Saving NS_MM_ATT_REQ for later ... 
Line 281: NMO=%d , GAPI Attach Req Type =%d
Line 328:  Request for GPRS Attach Only, mm_ProcessGmmGprsAttachReq 
Line 342:  GMM Attached ! 
Line 348:  GMM NOT Attached ! 
Line 436:  GMM Attached ! 
Line 440:  GMM NOT Attached ! 
Line 562:  GMM Attached ! 
Line 567:  GMM NOT Attached ! 
Line 591: Attch Action : GMM_COMBINED_ATT_ACTION...Abnormal Paging
Line 778: Attch Action : GMM_PS_ATT_ACTION...Abnormal Paging
Line 1020: WARNING : DETACH procedure is on progress, so not sending REGI_STATUS
Line 1028: NMO II, Reg status ind should be pended under specific conditions(NMO II, U1 Updated, same LAI)
Line 1117: NMO II, Reg status ind should be pended under specific conditions(NMO II, U1 Updated, same LAI)
Line 1173: Skip to send REG_STATUS_IND in CS reject and PS accept case or Mode Change is progress.
Line 1199: Postponing Lau..
Line 1269: Attach will not be done, since we are in the process of Power Off
Line 1278: Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 1283: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 1303: Attach cannot be performed since MM_ALLOW_PS_REGISTRATION is set to FALSE
Line 1311: Attach cannot be performed during T3346 running..
Line 1320: Attach Req will be delayed during Manual PLMN searching..
Line 1336: Attach Req is already pended, Waiting for completion of MPLMN
Line 1351: CurrentTlliType = %s
Line 1394: detach with not re-attach type, So send clear queue to LLC 
Line 1430: Fast display in-service under specific condtion(NMO I, U1 updated, same LAI)
Line 1502: MS network capability....length = %d, AttachType = %s
Line 1536: KSI = %d
Line 1549: GCKSN = %d
Line 1561: DRX parameter....
Line 1583: EUTRAN P-TMSI ->
Line 1594: SIM IMSI length is shorter than normal size, Padded IMSI will be used....
Line 1605: IMSI....
Line 1613: P-TMSI....   0x%x, 0x%x, 0x%x, 0x%x, 0x%x 
Line 1621: P-TMSI....
Line 1634: Old routing area identification @ EUtran  ->
Line 1643: Old RAI @ SIM
Line 1654: MS radio access capability....length = %d
Line 1675: Old P-TMSI signature....
Line 1684: Old P-TMSI signature....
Line 1695: Old P-TMSI signature....
Line 1707: Old P-TMSI signature....
Line 1735: TMSI status = no valid TMSI available
Line 1794: Supported Codec Length is 0
Line 1813: UE Network Capability ->
Line 1833: Additional P-TMSI->
Line 1844: Additional RAU->
Line 1855: Voice_Domain_Pref_ENABLED  = %d,  CsServiceSupport =%d, VoiceDomainPref =%d
Line 1870: voice domain Pref-> %x
Line 1890: PtmsiType = %d
Line 1895: HcommonNasRelVersion = %d
Line 1914: Extended T3312 is supported
Line 1925: Encode Old LAI IE
Line 1955: 
Line 1987: MSG Contents: %s
Line 2029: 
Line 2030: Cipher State -> %s, PduId -> %04X
Line 2097: PtmsiType = %d
Line 2317: Force to Standby indicated = %s
Line 2325: Periodic RAU timer (GMM_T3312)...
Line 2373: ERROR: ATTACH_ACCEPT RAI IE does not match RAI of current cell....
Line 2461: Assigned GMM_T3319...
Line 2475: Assigned GMM_T3323...
Line 2525: Network Feature Support IE value : %d
Line 2530: NetworkFeatureSupport IE not  received
Line 2542: T3312 Extended value received is: %d seconds
Line 2648: skip to send Reg_ind_status at this point, and handle it after LU proc
Line 2707: FOP is On so we Can Send SM Data Directly
Line 2764: FOP is off so we wait for RR release
Line 2781: Network Sent Emergency List !!!
Line 2790: Emergency list length is 0 or more than 16, %d
Line 2796: Emergency List ptr is NULL!!!
Line 2803: NewMCC : 0x%x, OldMCC : 0x%x
Line 2804: isMccChanged : %d, isEmerNumberBlank : %d, mm_GetLastSentMcc : 0x%x
Line 2826: Attach Accept is not Ciphered
Line 2832: Attach Accept is Ciphered
Line 2841: mm_SendGmmAttachCompleteMsg
Line 2845: MM_GPRS_ATTACH_COMPLETE_TBF_REL_ACTION set
Line 2896: Ignore Attach Accept in already REGISTERED State
Line 2908: Detach REQ is sent over REG_INIT state, invoke local detach
Line 2923: State Mismatch occurred and Retry ATTACH procedure..
Line 2944: Perform TBF release action in case of Attach complete is not sent
Line 2970: NW gives Attach result as combined even thogh NMO 2
Line 2985: Discarding ATTACH_ACCEPT as contains semantically incorrect contents:< combined attach requested but GPRS only accepted and GMM cause IE not present >
Line 2998: Discarding ATTACH_ACCEPT as contains semantically incorrect contents:< combined attach requested but GPRS only accepted and abnormal GMM cause IE present >
Line 3009: Processing ATTACH_ACCEPT to get PS service eventhough it's NW issue:< GPRS attach only requested and GPRS only accepted but GMM cause IE is present >
Line 3050: Cause #25 received with out integrity protection, descard reject message
Line 3075: Power off detach is pending Hence discarding RAU retrails
Line 3142: Perform TbfRelAction, MM_COORD_TBF_REL_ACTION
Line 3202: Cause = %s
Line 3401: CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
Line 3668: ERROR!! LAC or RAC is not matched between cell_ind and accept msg
Line 3721: 
Line 3774: 
Line 3775: Cipher State -> %s, PduId -> %04X
Line 3919: Resetting Attach attmept count (%d)
Line 4018:  Invalid AttachReqAction(%x) in mm_GetGmmAttachReqFromReqAction, Selecting GMM_NET_GPRS_ONLY_ATT instead !! 
Line 4098:  Attach Request Action -> %s 
Line 4280:  mm_GmmAttachDb[MmStackId].mm_MsRadioCapability_PRR[0] in mm_GetMsRadioAccessIeData= %d , mm_RadioAccessTechManagementDb[MmStackId].mm_MsRadioAccessCapIeBitLength_new in mm_GetMsRadioAccessIeData= %d
Line 4373:  Attach Type -> %s 
Line 4385: Attach Result FOP  -> %s           Attach Result Type -> %s
Line 4397:   Gapi Attach Request Type -> %s 
Line 4410: Gmm Retransmission Count = %d
Line 4422: Gmm Attach Attempt Count = %d
Line 4463: NO ATTACH ACTION:%s (line%d)
Line 4518: Wrong Action =%d 
Line 4539: MM_DSNC - Discarding NS_MM_ATT_REQ due to CS CALL on other stack
Line 4546: MM_DSNC - Saving NS_MM_ATT_REQ, Ongoing proc on other stack: %s
Line 4553: MM_DSNC - Check if abnormaly PS proc is stuck in other stack 
Line 4560: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 4570: Msg Saved For later because we have not yet received ACK for detach accept
Line 4586:  MM Svc State: %d, RAT Change- %d, Request Type - %d, Gmm State - %d
Line 4598:  RatChange: %d, MmcSuspensionOngoing: %d
Line 4606:  QRB in progress
Line 4628:  Discard NS_MM_ATT_REQ to prevent unexpected PS REG 
Line 4637:  Discard NS_MM_ATT_REQ to prevent unexpected combined RAU during T3311 running 
