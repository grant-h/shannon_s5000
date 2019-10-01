Line 75: [ERROR_CHANNEL] rabm_AllocateMessageBuffer, Get Memory failed
Line 104: [ERROR_CHANNEL] rabm_SendUmtsMessage failed, %08X
Line 123: [ERROR_CHANNEL] rabm_SendRtkMessage failed, %08X
Line 137: [ERROR_CHANNEL] rabm_SendRabmAsRabEstblResMsg(): NULL pointer, Don't send message to RRC
Line 141: [CONTROLCHANNEL] rabm_SendRabmAsRabEstblResMsg(): Send RABMAS_RAB_ESTABLISH_RES msg to URRC
Line 157: [CONTROLCHANNEL] rabm_SendRabmAsRabEstblRejMsg(): NULL Pointer, Don't send message to RRC
Line 169: [ERROR_CHANNEL] rabm_SendRabmAsRabEstblRejMsg(): NULL pointer, Message->Payload.RabList
Line 177: [CONTROLCHANNEL] rabm_SendRabmAsRabEstblRejMsg(): Send RABMAS_RAB_ESTABLISH_REJ msg to URRC
Line 196: [CONTROLCHANNEL] rabm_SendRabmSmActivateRspMsg(): Send RABMSM_ACTIVATE_RSP msg to SM
Line 220: [CONTROLCHANNEL] rabm_SendRabmSmDeactivateRspMsg(): Send RABMSM_DEACTIVATE_RSP msg to SM
Line 238: [CONTROLCHANNEL] RABMSM_DEACTIVATE_RSP: PDP Cnt: %d ActiveStack %d
Line 242: [CONTROLCHANNEL] RABMSM_DEACTIVATE_RSP: PDP Cnt: %d ActiveStack %d
Line 254: [CONTROLCHANNEL] rabm_SendRabmSmModifyRspMsg(): Send RABMSM_MODIFY_RSP msg to SM
Line 279: [ERROR_CHANNEL] rabm_SendRabmSmStatusReqMsg: isUtranCommercialPlmnId %d, don't send msg to sm
Line 284: [CONTROLCHANNEL] rabm_SendRabmSmStatusReqMsg: Send RABMSM_STATUS_REQ msg to SM %d 
Line 316: [CONTROLCHANNEL] rabm_SendGmmRabmRestblReqMsg() : NSAPI = %d.  Data Pending = %d  Not Sending GMMRABM_REEST_REQ
Line 336: [CONTROLCHANNEL] rabm_SendGmmRabmRestblReqMsg() : Send GMMRABM_REEST_REQ to GMM, NSAPI = %d. RB existence = %d Data Pending = %d
Line 368: [CONTROLCHANNEL] rabm_SendGmmRabmRbStatusIndMsg() : Send GMMRABM_RB_STATUS_IND to GMM, RB existence = %d, Nsapi = %d, RbId = %d, domain=%d
Line 387: [RABM_FD] rabm_SendGmmRabmFdReqMsg : Send GMMRABM_FD_REQ to GMM (%d)
Line 407: [RABM_FD] rabm_SendGmmRabmFdReqMsg : Send rabm_SendGmmRabmUlDlTriggeredMsg to GMM (%d)
Line 427: [CONTROLCHANNEL] rabm_SendMmCloseLoopCnf : Send GMMRABM_CLOSE_UE_TEST_LOOP_CNF to Stack%d
Line 446: [CONTROLCHANNEL] rabm_SendMmOpenLoopCnf : Send GMMRABM_OPEN_UE_TEST_LOOP_CNF to Stack%d
Line 468: [CONTROLCHANNEL] rabm_SendGmmRabmDataActivitiyStatusIndMsg : Send GMMRABM_DATA_ACTIVITY_STATUS_IND
Line 490: [ERROR_CHANNEL] CreateUmtsMessage: Null Pointer, as_CreateUmtsMsg_SMC
Line 531: [CONTROLCHANNEL] rabm_SendLoopbackMode1StartReq: DcchDummy %d, LBSetupPresent %d
Line 544: [ERROR_CHANNEL] LbCount %d Too large, set to 4
Line 554: [ERROR_CHANNEL] rabm_SendLoopbackMode1StartReq: Null pointer, OutMessage->Payload.RbInfo 
Line 563: [CONTROLCHANNEL] LbSetup [0..2] %02X %02X %02X, RbId %01X, PduSize %d
Line 580: [ERROR_CHANNEL] OutMessage in rabm_SendLoopbackMode1StartReq is NULL
Line 596: [CONTROLCHANNEL] rabm_SendL2ActivateRbTestModeReq : Send message to UMAC (Mode : %d)
Line 620: [ERROR_CHANNEL] rabm_SendVcgDataInd: Null pointer
Line 645: [ERROR_CHANNEL] rabm_SendVcgSyncInd: Null pointer
Line 667: [ERROR_CHANNEL] rabm_SendVcgUlTfInd: Null pointer 
Line 688: [CONTROLCHANNEL] rabm_SendSavedFD_Req uiCntPdp %d, ucDeactInprogress %d(ul %d %d), (dl %d, %d)
Line 693: [CONTROLCHANNEL] rabm_SendSavedFD_Req(): Send the saved FD_REQ 
