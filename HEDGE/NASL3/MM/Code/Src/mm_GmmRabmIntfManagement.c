Line 121: Unknown Initialisation Type (%x) in mm_InitGmmRabmIntfManagement
Line 152: 
Line 161: 
Line 184: Already GMMRABM Message Saved so remove that from Queue
Line 189: PrevUlDataStatus = %d
Line 191: RB =%d , PendingUlData =%d, NSAPI FROM RABM = %d
Line 197: 
Line 208: Reestablishment requested by RABM will be performed following RAU procedure
Line 227: RAU procedure on request to establish RABs following intersystem change between cells belonging to same RA....[24.008]-4.7.1.7.b.
Line 257: Rb is already set in PMM_CONNECTED!!!Sending USER DATA REQ Message to RRC to indicate User Uplink Data Pending 
Line 263: mm_GmmFunctionalState == %d, bRbExistence = %d
Line 368: mm_SendGmmUserDataReqMsg:Cause %d Data Size = %d
Line 405: RABM Error Cause: %s
Line 419: CompiledProvider : %d in mm_DecodeGmmRabmFdReqMsg
Line 476: mm_DecodeGmmRabmFdReqMsg ...FD REQ Not Sent
Line 507: domain = %d, AnyRbExistence = %d, Nsapi = %d, RbId = %d, domain =%d in mm_DecodeGmmRabmRbStatusIndMsg
Line 511:  STOP T3340 when RB was setup 
Line 518: GMM_PS_CONN_REL_TIMER when RB was setup 
Line 567: mm_DecodeGmmRabmRbStatusIndMsg: mm_GmmRbStatus = %d, PDPContextStatus[0] = %d, PDPContextStatus[0] = %d
Line 605: FOP = TRUE but RB changed and GMM_CM_EST_CNF_FLG is set as TRUE, so stop T3340 and do pended GmmCm procedure
Line 614: FOP = TRUE but RB changed, so stop T3340 and reset GmmRelInd
Line 689: mm_DecodeGmmRabmDataActivityStatusIndMsg : %d
Line 699: ERROR: GMMRABM_DATA_ACTIVITY_STATUS_IND can't be processed..in %s
Line 715: mm_SendGmmDataStatusIndMsg : %d
Line 802: Don't need to send in Non-UMTS
Line 883: Ongoing proc on the other Stack:%s, Reject the EST_REQ
Line 899: Access to PS Domain is barred so Service Request cannot be sent
Line 915: IN THIS STATE SHOULD NOT SEND THIS MESSAGE FROM RABM, PDP is not active
Line 922:  RAT change in progress, so discarding RABM's request.
Line 952: 
Line 980: GMM State - %d, ServiceState - %d, Urrc Rel Req Sent - %d 
Line 990: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 1003: MM CONN FOR LOC UPD/CALL In Progress Saving Msg for later or mm_GetNeedCellIndAfterRelInd is TRUE
Line 1009: GMM service request will be pended until CS RB setup is done
