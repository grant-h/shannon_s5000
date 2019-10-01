Line 145: [I][SRIF] Mmc_Dsl1rc_RsrcReq_Pending : %d -> %d 
Line 180: [I][SRIF] Mmc_Dsl1rc_LTE_Client_ID : %d -> %d 
Line 218: [I][SRIF] Mmc_Dsl1rc_Reference_ID : %d -> %d 
Line 238:    [SRIF_SRL1RC] PSPS STATUS IND !! IsPSPSEnabled[%u] OtherClientDutyCycle[%d]
Line 246:    [SRIF_SRL1RC] PSPS Scheme Started. Resume Ready Timer Started with value [%d]
Line 252:    [SRIF_SRL1RC] PSPS Scheme Stopped !! Reset SRIF PSPS Parameters
Line 261:    [SRIF_PSPS_DB] IsPsPsEnabled [%u], DutyCycle [%u], OtherClientDutyCycle [%u], IsResumeRejected [%u] 
Line 282:    [MMCIF_DSL1RC] Invoking DSL1RC Resume Ready Functionality
Line 317:    [SRIF_SRL1RC] ResumeReady RequestReason [%d] DutyCycle [%d] 
Line 338:    [SRIF_PSPS_DB] PSPS Scheme Stopped !! Reset SRIF PSPS Parameters 
Line 350:    [SRIF_SRL1RC] ResumeReady RequestReason [%d] IsResumeRejected [%d] 
Line 356:    [SRIF_SRL1RC] Resume Received from DSL1RC with Indication to wait (%d) and NOT RESUME NOW!!!! 
Line 365:    [SRIF_PSPS_DB] IsPsPsEnabled [%u], DutyCycle [%u], OtherClientDutyCycle [%u], IsResumeRejected [%u] 
Line 375: [W][SRIF_SRL1RC] Resume fail! LTE Client ID [%d]
Line 412:    [Timer Expiry] DSL1RC_ResumeReadyInd - Stk1 
Line 458:    [Timer Expiry] DSL1RC_ResumeReadyInd - Stk2 
Line 551:    [Timer Expiry] DSL1RC_RetryTimerExpiry - Stk1 
Line 597:    [Timer Expiry] DSL1RC_RetryTimerExpiry - Stk2 
Line 644:    [SRIF_SRL1RC] Invoking SRL1RC Registration Functionality
Line 666: [W][SRIF_SRL1RC] Invalid Stack ID!!
Line 685:    [SRIF_SRL1RC] Registered Successfully, LTE Client ID [%d]
Line 696:    [SRIF_SRL1RC] Invoking SRL1RC DeRegistration Functionality. IsDeregForBPLMN [%u] !
Line 708:    [SRIF_SRL1RC] If LTE L1LC is already in deregistered state, do not send deregister again
Line 728:    [SRIF_SRL1RC] Deregistered Successfully, LTE Client ID [%d]
Line 733: [W][SRIF_SRL1RC] Deregistration FAILED!!!! LTE Client ID [%d]
Line 763:    [SRIF_SRL1RC] Invoking SRL1RC Resource Request Functionality
Line 766:    [SRIF_SRL1RC] Resource Req Proc ID[%d] MinimumReqTime [%d] IsInConnected [%u] DutyCycle [%d]
Line 787: [W][SRIF_SRL1RC] LTE SRL1RC Client ID Invalid!!!! Exiting without requesting for RF!!!
Line 821:    [SRIF_SRL1RC] Parsing Resource Response from SRL1RC
Line 831:    [SRIF_SRL1RC] PSPS Scheme Started
Line 837:    [SRIF_PSPS_DB] IsPsPsEnabled [%u], DutyCycle [%u], OtherClientDutyCycle [%u], IsResumeRejected [%u] 
Line 846: [W][SRIF_SRL1RC] resourceRequest fail! LTE Client ID [%d]
Line 873:    [SRIF_SRL1RC] Invoking SRL1RC Pause Done Functionality
Line 876:    [SRIF_SRL1RC] Entry Point :: %s Pause Done With Rel[%d] DutyCycle[%d]
Line 906:    [SRIF_SRL1RC] PSPS Scheme Stopped !! Reset SRIF PSPS Parameters
Line 933:    [SRIF_SRL1RC] Resume Ready Timer Started with %u ms !! in PSPS Scheme
Line 940:    [SRIF_SRL1RC] Resume Ready Timer Started with %u ms !! due to Early Pause Timer Expiry
Line 975:    [SRIF_SRL1RC] Invoking SRL1RC Release Ind Functionality. IsInConnected[%u] nextEventPresent[%u] nextWakeupCause[%u] nextEventStartTime[%u] nextEventDuration[%u]
Line 1008:    [SRIF_SRL1RC] PSPS Scheme Stopped !! Reset SRIF PSPS Parameters
Line 1049:    [SRIF_SRL1RC] Invoking SRL1RC Update Time Ind Functionality
Line 1107:    [SRIF_SRL1RC] Invoking SRL1RC PS Update Time Ind Functionality
Line 1165:    [SRIF_SRL1RC] %s : Msg Id = 0x%x 
Line 1176: [W][MMCIF_DSL1RC] Resume Recieved from DSL1RC with Indication to wait and NOT RESUME NOW!!!! 
Line 1188:    [SRIF_SRL1RC] PSPS Scheme Stopped !! Reset SRIF PSPS Parameters
Line 1196:    [SRIF_PSPS_DB] IsPsPsEnabled [%u], DutyCycle [%u], OtherClientDutyCycle [%u], IsResumeRejected [%u] 
Line 1208:    [MMCIF_DSL1RC] Renew Reference ID with LtePauseReq [%d]  
Line 1231:    [SRIF_PSPS_DB] IsPsPsEnabled [%u], DutyCycle [%u], OtherClientDutyCycle [%u], IsResumeRejected [%u] 
Line 1278:    [SRIF_DSRC] %s Msg Id: 0x%x 
Line 1327: [MMCIF_DSRC] %s : Msg Id = 0x%x 
Line 1357: [W][MMCIF_DSRC] %s Unexpected Message ID 
