Line 91: cmdId>=EThalMaxNrOfCmds
Line 101: TddArrayOfCmdHandlerInstances is NULL
Line 135: normalHdlr is NULL
Line 209: RSN=%d:thal_CNormalCmdHandler_reset online cmd[%d %d]
Line 223: RSN=%d:thal_CNormalCmdHandler_reset offline cmd[%d %d]
Line 237: RSN=%d:thal_CNormalCmdHandler_reset ISR waiting cmd[%d %d]
Line 322: cmd is NULL in  thal_CNormalCmdHandler_extractWaitingCmd
Line 355: cmd is NULL in  thal_CNormalCmdHandler_extractOfflineWaitingCmd
Line 471: thal_CNormalCmdHandler_areRunConditionsMet cmd[%d %d]: HWSignalSynch type should not wait - they are shcheduled bu TPHY not to wait: 
Line 480: RSN=%d:thal_CNormalCmdHandler_areRunConditionsMet[%d,%d] hwActive
Line 486: RSN=%d:thal_CNormalCmdHandler_areRunConditionsMet[%d,%d] synchType=%d - uarfcnCheck did not match
Line 570: thal_CNormalCmdHandler_cmdStatusNotification: cmd [%d %d] Impossible status=%d
Line 579: thal_CNormalCmdHandler_cmdStatuslNotification: cmd [%d %d] status=Error
Line 605: thal_CNormalCmdHandler_cmdStatusNotification[%d %d] cmd to wait should not end up in this function
Line 697: thal_CNormalCmdHandler_cmdStatusNotification: cmd [%d %d] Unexpected status=%d
Line 728: extractFLAG == TRUE (runCmdWaitingForDlUarfcn)
Line 745: thal_CNormalCmdHandler_runCmdWaitingForDlUarfcn: initially read waitingCmd[%d %d] failed to be extracted cmd==0
Line 752: thal_CNormalCmdHandler_runCmdWaitingForDlUarfcn: initially read waitingCmd[%d %d] however when extracted waitingCmd[%d %d] -> diferent instanceId
Line 759: RSN=%d:thal_CNormalCmdHandler_runCmdWaitingForDlUarfcn[%d,%d], uarfcn=%d
Line 762: thal_CCmdHandler_runCmd failed
Line 787: thal_CCmdHandler_runCmdWaitingForDlUarfcn[%d %d]: isISRTriggeredResponse cmd completed as soon as it has been run- must be completed in poll function
Line 798: thal_CCmdHandler_runCmdWaitingForDlUarfcn[%d %d]: unexpected status=%d to pass to thal_CNormalCmdHandler_cmdStatusNotification
Line 843: thal_CNormalCmdHandler_runCmdWaitingForDlUarfcn: initially read waitingCmd[%d %d] failed to be extracted cmd==0
Line 849: thal_CNormalCmdHandler_runCmdWaitingForDlUarfcn: initially read waitingCmd[%d %d] nowever when extracted waitingCmd[%d %d] -> diferent instanceId
Line 853: RSN=%d:thal_CNormalCmdHandler_runCmdWaitingForOfflineUarfcn[%d ,%d,%d]: offlineUarfcn=%d
Line 858: thal_CCmdHandler_runCmd failed
Line 881: thal_CCmdHandler_runCmdWaitingForOfflineUarfcn[%d %d]: isISRTriggeredResponse cmd completed as soon as it has been run- must be completed in poll function
Line 892: thal_CCmdHandler_runCmdWaitingForOfflineUarfcn[%d %d]: unexpected status=%d to pass to thal_CNormalCmdHandler_cmdStatusNotification
Line 1050: RSN=%d:addCmdToWaitForDlUarfcn[%d,%d,%d]
Line 1098: RSN=%d:addCmdToWaitForOfflineUarfcn[%d,%d,%d]
Line 1159: RSN=%d:thal_CNormalCmdHandler_removeAppIdWaitingCmds[%d] from dlUarfcnBlockedCmdList uarfcn=%d appId=%d
Line 1186: RSN=%d:thal_CNormalCmdHandler_removeAppIdWaitingCmds[%d] from OfflineUarfcnBlockedCmdList uarfcn=%d appId=%d
Line 1213: RSN=%d:thal_CNormalCmdHandler_removeAppIdWaitingCmds[%d] from ISRWaitingCmdXList uarfcn=%d appId=%d
Line 1254: RSN=%d:removeNonCampingUarfcnWaitingCmds[%d] uarfcn=%d
Line 1261: thal_CNormalCmdHandler_removeNonCampingUarfcnWaitingCmds[%d] uarfcn=%d:anUarfcnCmdQueue read but not  
Line 1281: RSN=%d:removeNonCampingUarfcnWaitingCmds[%d] offlineUarfcn=%d
Line 1288: thal_CNormalCmdHandler_removeNonCampingUarfcnWaitingCmds[%d] uarfcn=%d:anUarfcnCmdQueue read but not  
Line 1308: RSN=%d:removeNonCampingUarfcnWaitingCmds[%d] ISRWaitingCmdXList uarfcn=%d
Line 1315: thal_CNormalCmdHandler_removeNonCampingUarfcnWaitingCmds[%d] uarfcn=%d:anUarfcnCmdQueue read but not  
Line 1363: RSN=%d:thal_CNormalCmdHandler_cleanAllCmds[%d] from offlineUarfcnBlockedCmdXList
Line 1381: RSN=%d:thal_CNormalCmdHandler_cleanAllCmds[%d] from ISRWaitingCmdXList
