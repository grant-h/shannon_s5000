Line 135: Initialisation of <GmmAttachDetach>, InitType=%d
Line 335: Abort ATTACH procedure and start Detach Immediately (4.7.3.1.5g)
Line 362: Ignoring Detach Requets message since GMM is in GMM_DEREGISTERED_INITIATED
Line 374: In PMM connected Mode or GSM Rat, Abort RAU Procedure and proceed with detach 
Line 394: ERROR, We should not enter here in GMM_SUSPENDED 
Line 423: Exit Routine is TRUE
Line 587: PS only Local detach is performed
Line 640: Saved Attach Request is NULL
Line 653: Saved Attach message is Freed  
Line 659: New Attach type is updated in Attach message pointer %d  
Line 665: Saved Attach type and Final Attach type are same or FinalAttachType is Invalid  
Line 676: SavedAttachType or Received Detach Type is not valid SavedAttachType %d, ReceivedDetachType %d 
Line 685: Attach Request message pointer is NULL
Line 839: MM_CON_ACTIVE - Detach saved and will be retrieved later.
Line 847: PS detach type
Line 858: Saving Detach Msg For Later... : invalid GMM state
Line 885: Abort ATTACH or RAU procedure and start Detach Immediately (4.7.3.1.5g/4.7.5.1.5.k)
Line 906: Saving Detach Msg For Later.. : invalid GMM state.
Line 929: ExitRoutine = %d 
Line 938: DSDS: PS is disabled , set Gmm state to DeRegistered, continue with IMSI detach
Line 949: Abort RR connection during LU procedure and initiate Detach proceudre.
Line 970: Perform IMSI detach first on GMM_SUSPENDED
Line 974: Abort RR connection during LU procedure and initiate Detach proceudre.
Line 983: Saving Detach Msg For Later... : invalid GMM state
Line 994: Previously, it was about to send ATTACH_REQ, so cancelling ATTACH procedure
Line 1011: Previously, it was about to send RAU_REQ, so cancelling RAU procedure
Line 1021: ExitRoutine = %d 
Line 1026: Flight mode ON 
Line 1051: Saving Detach Msg For Later...
Line 1066: PS detach type
Line 1080: Saving PS Detach Msg For Later... : invalid MM state
Line 1180: Flight mode OFF 
Line 1187:  PLMN Search in Progress But Power Off Detach so need to Respond 
Line 1191: Flight mode OFF 
Line 1197:  CS+PS detach is received when HEDGE RAT is suspended
Line 1203:  CS only detach,  so need to Respond 
Line 1211: PLMN SEARCH IN PROGRESS Cant handle it !
Line 1223: Msg Saved For later
Line 1228:  Cannot Handled in this Case
Line 1500:  Invalid DetachReqAction (%x) in mm_ProcessGmmRegInitGapiDetReq 
Line 1686: CS Call/Sig is ongoing, Release RR Connection Before Sending PS Detach
Line 1718:  Invalid DetachReqAction (%x) in mm_ProcessGmmRegGapiDetReq 
Line 1746: Request for PS Domain Detach Only....
Line 1880: request for CS domain detach only....
Line 1904: GmmDeRegisteredFlg = %s
Line 1924: ATT -> FALSE  OR  Sim LAI != CellData LAI -> No Action
Line 1941: ATT -> FALSE  OR  Sim LAI != CellData LAI -> No Action
Line 1961: MM_MOBILE_CLASS_C_PS -> No Action
Line 1967: MM_MOBILE_CLASS_C_PS -> No Action
Line 1975: GPRS detach procedure will be used to detach IMSI in CS domain
Line 2029: Request for CS and PS Domain Detach....
Line 2054: GmmDeRegisteredFlg = %s
Line 2070: In this case, PDP deactivation will not happen even PDP is activated. GMM should locally deactivate
Line 2081: Power-off case - SM will release PDP contexts after detach finishes
Line 2120: ATT -> FALSE  OR  Sim LAI != CellData LAI -> No Action
Line 2224: CS REGISTRATION IS PENDING SO So Release RR Connection Before Sending PS Detach
Line 2356: CurrentTlliType = %s
Line 2363: TLLI assignment for GPRS detach procedure....
Line 2373: ERROR: No TLLI for GPRS detach procedure....
Line 2493: 
Line 2525: MSG Contents: %s
Line 2554: 
Line 2555: Cipher State -> %s PduId -> %04X
Line 2888: ....Unexpected mm_GmmState or mm_GmmServiceState
Line 2927: NW gave DETACH_REQ in Invaild GMM State
Line 2935: GMM_T3346 is stopped by NtwkDetachReqMsg.
Line 2997: Set GMM_RAU_AFTER_CS_CALL_FLG
Line 3005: Network Mode I -> GMM Shall Re-attach to Non-GPRS Service by Performing the Combined Routing Area Updating Procedure
Line 3046: Aborting RAU Procedures.
Line 3117: We will not re-attach because we got CAUSE which spec mentioned clearly 
Line 3159: GMM_DETACH_REQUEST message received without GMM TYPE IE....
Line 3186: NO ATTACH ACTION ...ATT flag not set, SIM LAI == CellData LAI, Assume Implicitly Attached 
Line 3262: Aborting RAU Procedures.
Line 3436: 
Line 3457: 
Line 3458: Cipher State -> %s PduId -> %04X
Line 3604:  Invalid Cause in Detach Message 
Line 3959:  Detach Req Action -> %s 
Line 3973: Detach Type -> %s
Line 3987: mm_GmmGapiRequestedDetachType = %s
Line 4001: mm_GmmNtwkDetachReqType = %s
