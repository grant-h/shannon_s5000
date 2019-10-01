Line 111: Initialisation of <MmGmmCoordination>, InitType=%d
Line 132: mm_MsOperationMode = %d
Line 170: Unknown Initialisation Type (%x) in mm_InitialiseGmmCoordination 
Line 236: Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Line 290: Cause = %s 
Line 474: FLAI list is not sent to AS for normal cell selection
Line 636: No ID (%x) used in mm_CoordinateCombinedAttCnf 
Line 678: Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Line 705: Network has accepted the Follow On Req, RR Con will be Kept Alive !!!
Line 749: Combined Attach Confirm Cause = %s in mm_ProcessCombinedAttCnfCause ...[24.008]-4.7.3.2.3.2
Line 808: Combined Attach Reject Cause = %s
Line 816: CoordinateCombinedAttRej, MM Update status = %d
Line 892: Switching to MM_NETWORK_MODE_2 !
Line 988: FLAI list is not sent to AS for normal cell selection
Line 1328: mm_GetGmmAttachType = %d
Line 1431: Fast display in-service under specific condtion(NMO II, U1 updated, same LAI), LU Attempt cnt = %d, MM Update status = %d
Line 1483: mm_CoordinateCsOrMode2CsPsAtt
Line 1554: Set mm_UrrcGmmRelReqSentFlag to FALSE, release request will be sent during power off detach
Line 1589: No Need to release existing RR Connection, we can directly trigger IMSI detach
Line 1699: CS Not Enabled, Operatio Aborted in mm_CoordinateNetworkImsiDetReq
Line 1719: Detach Cause = %s 
Line 2037:  Switching to MM_NETWORK_MODE_2
Line 2054:  Switching to MM_NETWORK_MODE_2
Line 2067:  dont perform network fail actions for network initiated detach with cause NETWORK FAILURE
Line 2280:  No Coordination Necessary for this Cause 
Line 2309: %s  in   mm_CoordinateUncombinedRauCnf
Line 2346: Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Line 2444: Deletion of equivalent PLMN list..
Line 2458: No coordination action required.
Line 2655: FLAI list is not sent to AS for normal cell selection
Line 2764: Uncombined Attach Reject with Cause #25 but not integrity protected or Not UMTS or Not camped CSG cell
Line 2771: CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
Line 2779: No coordination action required for this cause.
Line 2891:  Retrieving the old TMSI : %x %x %x %x, LAI : %x %x %x 
Line 2930:  Stopping CS Congestion Timer in COM RAU ACC 
Line 2951: The Combined RAU proc. was caused by a Call setup req. Now it can be Processed
Line 2957: Network will keep PS connection alive, so should try the pended call immediately
Line 2967: Network will give release. CM service request will fail even it tries to send. Call will be tried when MM gets CELL_IND
Line 3015: Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Line 3049: Cause = %s
Line 3060: RAU Attempt Count >= MAX, Switching to MM_NETWORK_MODE_2 
Line 3137: Cause = %s
Line 3187: Cause = %s
Line 3312: FLAI list is not sent to AS for normal cell selection
Line 3563: Combined RAU Reject with Cause #25 but not integrity protected 
Line 3568: CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
Line 3630: Deleting sim data
Line 3669: RAU attempt count -> %d
Line 3690: Stored LAI ->
Line 3693: Serving cell LAI ->
Line 3722:  Saving the TMSI : %x %x %x %x, LAI : %x %x %x 
Line 3763: Deletion of equivalent PLMN list..
Line 3864: Cause = %s
Line 4094: No Coordinate Necessary for this Cause
Line 4332: Transition from GMM_SUSPENDED to %s on successful GSM to UMTS RAT change...
Line 4370: Transition from GMM_SUSPENDED to %s on successful GSM to UMTS RAT change...
Line 4801: Final Cause for MM-GMM Cordination : (0x%X)....
Line 4816: mm_CordinateActionsForPsRelease : (0x%X)....
Line 4886: mm_InitRrRelCoordActionParams - Action: %d, Cause: %d
Line 4890: Doesn't need to save action : (0x%X)....
Line 4904: ERROR: Invalid proposed Action (0x%X)....
Line 4920: Doesn't need to save action : (0x%X)....
Line 4925: Set mm_RrRelCoordActionCause: %d
Line 4940: mm_ResetRrRelCoordActionCause: %d
Line 4957: mm_RrRelCoordAction = %d
Line 5105: Invalid Rr Rel Coord Action (%x) in mm_InitRrRelCoordActionParams !!
Line 5161: Invalid RejCause in mm_GetUrrcCellRejType ...!
Line 5198: Setting Network mode -> %s
Line 5202: Unknown Network Mode (0x%02X), Setting it to NETWORK_MODE_2 in mm_SetNetworkMode
Line 5572: Invalid MsOperationMode (%x) in mm_GetCurrentMobileClassMode
Line 5605: GMM state was %s prior to suspension of GPRS
Line 5608: Checking for active GMM procedures in %s.%s
Line 5615: ...no action required
Line 5633: ...no action required
Line 5650: GMM state is back to DEREG from REG.INIT , so reset GmmRegistStatusCause
Line 5678: ...no action required
Line 5737: ERROR: Undefined GMM state
Line 5754:  mm_InitExtraMsgInSameRrFailActionParams:
Line 5766: No Actions to perform in mm_InitExtraMsgInSameRrFailActionParams
Line 5777:  mm_ExtraMsgInSameRrFailAction = %d
Line 5782:  mm_GmmExtraMsgInSameRrFailAction = %d
Line 5787: ERROR: Invalid proposed Action (0x%02X)....
Line 5792:  GCF mode is enable or mm_GmmExtraMsgInSameRrFailAction is zero ( %d )
Line 5807:  mm_ExtraMsgInSameRrFailAction -> %s in mm_PerformExtraMsgInSameRrFailAction
Line 5809:  mm_GmmExtraMsgInSameRrFailAction -> %s in mm_PerformExtraMsgInSameRrFailAction
Line 5811: NeedCellInd: %d
Line 5816:  Foreground  PLMN search is going on. Do not perform extra msg in same RR fail actions 
Line 5938: Gmm State is not GMM_SERVICE_REQUEST_INITIATED, in mm_PerformExtraMsgInSameRrFailAction
Line 5946: Ongoing proc on the other Stack: %s, Reject the EST_REQ
Line 5991:  mm_GmmExtraMsgInSameRrFailAction is initialized because RRC Con is released or PS Sig Con Rel comes 2times..
Line 6072: Current Ms Operation Mode: %s
Line 6085: mm_RrRelCoordAction: %d
Line 6098:  MM NetworkMode -> %s
Line 6156: Ms Operation Mode: %s
Line 6205: ...GMM procedure shall NOT be progressed on same RRC connection
Line 6214: ...GMM procedure shall NOT be progressed on same RRC connection
Line 6220: ...GMM procedure may be progressed on same RRC connection
Line 6233: ...GMM procedure may be progressed on same RRC connection on %s expiration
Line 6238: ...GMM procedure shall NOT be progressed on same RRC connection
Line 6257:  SameRrConnexFailAction -> %d in mm_CoordinateGmmProcSameRrConn but it will not be executed..
Line 6281: Checking for IMSI/GPRS detach procedure on same RRC connection actions...
Line 6300: IMSI detach procedure has not yet completed.
Line 6317: GPRS detach procedure has not yet completed.
Line 6323: Both IMSI and GPRS detach procedure has not yet completed.
Line 6347: but detach action is not GMM_CS_AND_PS_DET_ACTION.
Line 6440: mm_CordinateActionsForCsPsRelease: MmCause: %d, GmmCause: %d, CordinateCause:%d
