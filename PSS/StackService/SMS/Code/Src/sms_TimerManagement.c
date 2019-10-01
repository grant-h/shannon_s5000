Line 97: SessionNumber (%x)  Timer_catagory(%x) in smsTimer_Set
Line 110: SessionNumber (%x)  TimerCategory(%x) in smsTimer_Reset
Line 136: sms_UpdTimerId:ENTRY TimerId: %d sms_CurrentStackId: %d
Line 151: sms_UpdTimerId:EXIT TimerId: %d sms_CurrentStackId: %d
Line 178: Wrong Timer: %d is expired. Ignore this event
Line 199: Timer: %s is expired (TI=%d, Session=%d)
Line 206: Timer: Exception - Expired during rat change (TimeoutCount for ratChange=%d / MaxTrial=%d)
Line 215: Timer: Exception - Send Failure Response
Line 297: Timer: Exception-Unknown Category(%d) in %s
Line 319: SessionNumber -> %x
Line 325: Transaction Id -> %x
Line 333: smsSpecificTransmitScheme:%d
Line 377: TC1MO timeout over max trial(%d). Send MM_REL_REQ
Line 386: DCM will not re-try PS domain in case of TC1MO expiry
Line 392: Retry PS domain
Line 406: SMS can't be sent in PS
Line 549: Final Time Out For Sending SMS Message Over the PS Domain
Line 568: SMS Messages Not Allowed To be Sent Over the CS Domain Abandoning GAPI Request
Line 579: There is no  DATA_STATE_NOTY with status READY after EST ERR sending SR with failed cause
Line 586: Timed out in Wrong State in sms_ProcessTimerExpiryMmTc1mo1
Line 614: Transaction Id -> %x
Line 637: Tr1moRetransmitted == TRUE
Line 675: Initiating SMS Over the PS Domain
Line 692: TR1MO expired but SMS received at MT
Line 740: Max. Retry done!! Send CP ERROR.
Line 750: Sending CP-ERROR on TR1MO Expiry
Line 773: sms_ProcessTimerExpiryMmTc1mo1 - sms_RetryRegStateCount >= SMS_MAX_GMM_REG_STATE_REQ
Line 774: Final Time Out For Sending SMS Message Over the PS Domain
Line 778: Initiating SMS Message Over the CS Domain
Line 791: SMS Messages Not Allowed To be Sent Over the CS Domain.Abandoning GAPI Request.
Line 854: Transaction Id -> %x
Line 931: Timed out in Wrong State in sms_ProcessTimerExpiryTramo
Line 959: Transaction Id -> %x
Line 970: GapiRspReceived:%d, GapiRspResult:%d
Line 980: TC1MT Timed Out ! GAPI Response Received, but CpAck from Network Not Received yet
Line 990: Abandon Message
Line 1007: TC1MT Timed Out   
Line 1015: GAPI's Response NOT Received. Abort Operations 
Line 1028:  GAPI Response Was -ve. Abort Operations.
Line 1059: Max retries reached, Abandon Message
Line 1066: Gapi rsp not rcvd or Validation failed, we will try to send RP-Error
Line 1116:  Timed out in Wrong State in sms_ProcessTimerExpiryGprsSmsTc1mt1
Line 1159:  Error:- Timer expired in Invalid state
Line 1227: Transaction Id -> %x
Line 1269:  Error:- Timer expired in Invalid state
Line 1290: Wrong Timer: %d is asked. failed to start timer
Line 1362: Timer: Exception-Unknown Category(%d) in %s
Line 1401: Timer: %s is started (TI=%d, Session=%d, Timeout=%d sec)
Line 1424:  pal_TmCreateMsgTimer did not return PAL_SUCCESS in smsTimer_Create
Line 1451: Timer: CB valid timer(%d) is started for One hour
Line 1457: Timer: CB valid timer(%d) is started for Twenty Four Hours
Line 1463: Wrong Timer: %d is asked. failed to start timer
Line 1483: Timer: CB valid timer(%d) is stopped
Line 1488: Wrong Timer: %d is asked. failed to stop timer
Line 1509: Wrong Timer: %d is asked. failed to start timer
Line 1538: Timer: Exception-Unknown Category(%d) in %s
Line 1570: Timer: %s is stopped (TI=%d / Session=%d)
Line 1609: Timer: Exception-Unknown ID=%d
Line 1618: Timer: Exception-Unknown ID=%d
Line 1628: Timer: %s is restarted (TI=%d, Session=%d, Timeout=%d sec)
Line 1673: + Timer : SMS_TR1MO -> RUNNING
Line 1679: + Timer : SMS_TRAMO -> RUNNING  
Line 1685: + Timer : SMS_TC1MO -> RUNNING  
Line 1691: + Timer : SMS_TC1MT -> RUNNING 
Line 1697: + Timer : SMS_RETRY_ESTREQ -> RUNNING 
Line 1703: + Timer : SMS_CP_ACK_DELAY -> RUNNING 
Line 1711: + Timer : SMS_GUARDMO -> RUNNING 
Line 1730: + No Timers are Running
Line 1736: Attempting to Write Using Invalid SessionNumber (%x) in smsTimer_DisplayAllStates 
Line 1752: Session (%x)  Timer_catagory(%x) in smsTimer_CreateTimers
Line 1767: pal_TmCreateMsgTimer return PAL_NOT_SUCCESS in smsTimer_CreateTimers
Line 1780: smsTimer_Initiailse InitType: %d
Line 1802: Unknown Initialisation Type (%x) in smsTimer_Initiailse 
