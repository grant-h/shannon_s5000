Line 342: Tx-URRC_MM_EST_CNF
Line 350: Tx-URRC_GMM_EST_CNF
Line 358: rrc_BoundNas_SendCsPsEstCnf() Invalid domain
Line 363: rrc_BoundNas_SendCsPsEstCnf()-Msg not allowed payload
Line 397: Tx-URRC_MM_EST_REJ
Line 405: Tx-URRC_GMM_EST_REJ
Line 413: rrc_BoundNas_SendCsPsEstRej() Invalid domain
Line 427: Tx-URRC_MM_EST_REJ
Line 435: Tx-URRC_GMM_EST_REJ
Line 443: rrc_BoundNas_SendCsPsEstRej() Invalid domain
Line 485: Tx-URRC_MM_DATA_IND
Line 504: GmmHdrPtr->GmmPduPtr is NULL 
Line 515: Tx-URRC_GMM_DATA_IND
Line 524: rrc_BoundNas_SendCsPsDataInd()-Invalid domain
Line 531: rrc_BoundNas_SendCsPsDataInd()-Msg should always have a payload
Line 560: Tx-URRC_MM_DATA_CNF
Line 568: Tx-URRC_GMM_DATA_CNF
Line 576: rrc_BoundNas_SendCsPsDataCnf()-Invalid domain
Line 589: Tx-URRC_MM_DATA_CNF
Line 597: Tx-URRC_GMM_DATA_CNF
Line 605: rrc_BoundNas_SendCsPsDataCnf()-Invalid domain
Line 636: No CS domain supported
Line 645: Tx-URRC_GMM_USER_DATA_CNF
Line 653: rrc_BoundNas_SendCsPsUserDataCnf()-Invalid DomainType=%d
Line 660: rrc_BoundNas_SendCsPsUserDataCnf()-Msg must have payload
Line 691: Tx-URRC_MM_PAGE_IND
Line 699: Tx-URRC_GMM_PAGE_IND
Line 707: rrc_BoundNas_SendCsPsPageInd()-Invalid DomainType=%d
Line 714: rrc_BoundNas_SendCsPsPageInd()-Msg must have payload
Line 747: Tx-URRC_MM_ABORT_IND
Line 755: Tx-URRC_GMM_ABORT_IND
Line 763: rrc_BoundNas_SendCsPsAbortInd()-Invalid domain
Line 770: rrc_BoundNas_SendCsPsAbortInd()-Message should always have a payload
Line 804: Tx-URRC_MM_REL_IND
Line 812: Tx-URRC_GMM_REL_IND
Line 820: rrc_BoundNas_SendCsPsRelInd()-Invalid domain
Line 827: rrc_BoundNas_SendCsPsRelInd()-Message should always have a payload
Line 859: Tx-URRC_GMM_CNXREL_IND
Line 868: rrc_BoundNas_SendCnxRelInd()-Message should always have a payload
Line 880: Tx-URRC_GMM_QRB_ABORT_IND
Line 889: rrc_BoundNas_SendQRBAbortInd()-Msg not allowed payload
Line 906: Tx-URRC_MM_LTERAT_INFO_IND
Line 915: rrc_BoundNas_SendLteRatInfoInd()-Message should always have a payload
Line 929: Tx-URRC_MM_HANDOVER_TYPE_IND
Line 938: rrc_BoundNas_SendUrrcMmHandoverTypeInd()-Message should always have a payload
Line 974: Tx-URRC_MM_SYNC_IND
Line 982: rrc_BoundNas_SendCsPsSyncInd()-Invalid domain %d
Line 989: rrc_BoundNas_SendCsPsSyncInd()-Message should always have a payload
Line 1028: URRC_MM_SECURITY_IND follows the forced Est Cnf due to a delayed L2 ACK for IDT
Line 1035: Tx-URRC_MM_SECURITY_IND
Line 1049: URRC_GMM_SECURITY_IND follows the forced Est Cnf due to a delayed L2 ACK for IDT
Line 1056: Tx-URRC_GMM_SECURITY_IND
Line 1065: rrc_BoundNas_SendCsPsSecurityInd()-Invalid domain
Line 1072: rrc_BoundNas_SendCsPsSecurityInd()-Message should always have a payload
Line 1100: Tx-URRC_MM_SECURITY_KEY_INVALID_IND
Line 1108: Tx-URRC_GMM_SECURITY_KEY_INVALID_IND
Line 1116: rrc_BoundNas_SendCsPsSecurityKeyInvalidInd()- Invalid domain
Line 1122: rrc_BoundNas_SendCsPsSecurityKeyInvalidInd()-Message should not have a payload
Line 1152: Tx-URRC_MM_CELL_IND
Line 1161: rrc_BoundNas_SendUrrcCellInd()-Msg not allowed payload
Line 1189: Tx-URRC_MM_SCELL_AS_INFO_IND
Line 1198: rrc_BoundNas_SendUrrcMmScellAsInfoInd()-Msg not allowed payload
Line 1229: Tx-URRC_MM_RESEL_TO_EUTRAN_REQ
Line 1238: rrc_BoundNas_SendUrrcCellInd()-Msg not allowed payload
Line 1268: Tx-URRC_MM_REDIRECT_TO_EUTRAN_REQ
Line 1277: rrc_BoundNas_SendUrrcCellInd()-Msg not allowed payload
Line 1291: Tx-URRC_MM_READY_FOR_NAS_REQUEST_IND
Line 1300: rrc_BoundNas_SendUrrcSuspendCnf()-Msg not allowed payload
Line 1347: Tx-URRC_MM_PLMN_LIST_IND
Line 1356: rrc_BoundNas_SendUrrcMmPlmnListInd()-Message should always have a payload
Line 1385: Tx-URRC_MM_CGI_INFO_IND 
Line 1394: rrc_BoundNas_SendUrrcMmCgiInfoInd()-Message should always have a payload
Line 1429: Tx-URRC_MM_CGI_ACQUISITION_CNF 
Line 1438: rrc_BoundNas_SendUrrcMmCgiAcqCnf()-Message should always have a payload
Line 1473: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-BodyMsgPtr->UMTS_PLMN_list is NULL
Line 1487: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-BodyMsgPtr->HedgeCsgListPtr is NULL
Line 1497: Tx-URRC_MM_BACKGND_PLMN_LIST_FAIL_IND
Line 1506: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-Message should always have a payload
Line 1541: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-BodyMsgPtr->UMTS_PLMN_list is NULL
Line 1555: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-BodyMsgPtr->HedgeCsgListPtr is NULL
Line 1565: Tx-URRC_MM_ABORT_BACKGND_PLMN_LIST_CNF
Line 1574: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-Message should always have a payload
Line 1605: Tx-URRC_MM_INITIAL)PLMN_CNF
Line 1614: rrc_BoundNas_SendUrrcMmPlmnListInd()-Message should always have a payload
Line 1646: Tx-URRC_MM_NO_CELL_IND list size %d
Line 1658: Tx-URRC_MM_NO_CELL_IND
Line 1667: rrc_BoundNas_SendUrrcNoCellInd()-Message should always have a payload
Line 1712: Tx-URRC_MM_PLMN_SEARCH_FAIL_IND
Line 1721: rrc_BoundNas_SendUrrcMmPlmnSearchFailInd()-Message should always have a payload
Line 1753: Tx-URRC_MM_UNIT_DATA_IND
Line 1762: rrc_BoundNas_SendUrrcUnitDataInd()-Message should always have a payload
Line 1791: Tx-URRC_MM_SUSPEND_RAT_CNF
Line 1800: rrc_BoundNas_SendUrrcSuspendCnf()-Msg not allowed payload
Line 1824: Tx-URRC_MM_RESUME_RAT_CNF
Line 1833: rrc_BoundNas_SendResumeRatCnf()-Msg not allowed payload
Line 1865: Tx-URRC_MM_RAT_CHANGE_COMPLETE_IND
Line 1874: rrc_BoundNas_SendUrrcMmRatChangeCompleteInd()-Msg not allowed payload
Line 1898: Tx-URRC_MM_RAT_CHANGE_FAILURE_IND
Line 1907: rrc_BoundNas_SendUrrcMmRatChangeFailureInd()-Msg not allowed payload
Line 1931: Tx-URRC_MM_RAT_RESELECTION_TO_GSM_IND
Line 1940: rrc_BoundNas_SendUrrcMmRatReselectionToGsmInd()-Msg not allowed payload
Line 1952: Tx-URRC_MM_RAT_REDIRECTION_TO_GSM_IND
Line 1961: rrc_BoundNas_SendUrrcMmRatRedirectionToGsmInd()-Msg not allowed payload
Line 1987: Tx-URRC_MM_RAT_HANDOVER_TO_GSM_IND
Line 1996: rrc_BoundNas_SendUrrcMmRatHandoverToGsmInd()-Msg not allowed payload
Line 2024: Tx-URRC_MM_HANDOVER_RAB_IND
Line 2033: rrc_BoundNas_SendUrrcMmHandoverRabInd()-Message should always have a payload
Line 2057: Tx-URRC_MM_RAT_CELL_CHANGE_TO_GSM_IND
Line 2066: rrc_BoundNas_SendUrrcMmRatCellChangeToGsmInd()-Msg not allowed payload
Line 2088: Tx-URRC_MM_INIT_CNF
Line 2098: rrc_BoundNas_SendUrrcMmInitCnf()- unable to send message
Line 2104: rrc_BoundNas_SendUrrcMmInitCnf()-Msg not allowed payload
Line 2186: Tx-URRC_MMI_RXLEV_IND
Line 2213: Tx-URRC_MMI_MRU_RESET_CNF
Line 2242: Tx-URRC_MMI_ASTYPE_IND
Line 2270: Tx-URRC_MMI_SERV_CELLINFO_IND
Line 2300: Tx-URRC_MM_STOP_CNF
Line 2308: rrc_BoundNas_SendUrrcMmInitCnf()-Msg not allowed payload
Line 2348: Tx-URRC_MM_RETRANSMIT_IND
Line 2357: rrc_BoundNas_SendUrrcMmRetransmitInd()-<ilmMsg> is NULL
Line 2388: Tx-URRC_MM_LCS_IND
Line 2397: rrc_BoundNas_SendUrrcMmLcsmInd()-Message should always have a payload
Line 2416: Tx-URRC_MM_LCS_FREQ_AID_CNF
Line 2427: rrc_BoundNas_SendLCSFreqAidCnf()-Msg not allowed payload
Line 2454: Tx-URRC_MM_REL_CNF
Line 2464: Tx-URRC_GMM_REL_CNF
Line 2472: rrc_BoundNas_SendCsPsRelCnf() Invalid domain
Line 2477: rrc_BoundNas_SendCsPsRelCnf()-Msg not allowed payload
Line 2501: No CS domain supported
Line 2507: Tx-URRC_GMM_SCR_IND
Line 2515: rrc_BoundNas_SendPsScrInd()-Invalid DomainType=%d
Line 2521: rrc_BoundNas_SendPsScrInd()-Msg not allowed payload
Line 2550: Tx-URRC_MM_HANDOVER_RAB_IND
Line 2559: rrc_BoundNas_SendUrrcMmHandoverRabInd()-Message should always have a payload
Line 2586: Tx-URRC_MM_INTER_RAT_HANDOVER_INFO_CNF
Line 2595: rrc_BoundNas_SendUrrcMmInterRatHandoverInfoCnf()-Message should always have a payload
Line 2622: Tx-URRC_MM_HANDOVER_TO_UTRAN_CNF
Line 2631: rrc_BoundNas_SendUrrcMmHandoverToUtranCnf()-Message should always have a payload
Line 2659: Tx-URRC_MM_UE_CAPA_IND
Line 2668: rrc_BoundNAS_SendUrrcMmUeCapaInfoInd()-Message should always have a payload
Line 2696: Tx-URRC_MM_HANDOVER_FROM_UTRAN_IND
Line 2705: rrc_BoundNas_SendUrrcMmHandoverFromUtranInd()-Message should always have a payload
Line 2730: Tx-URRC_MM_U2L_DEDICATED_PRIORITY_IND
Line 2739: rrc_BoundNas_SendUrrcMmU2LDedPriorityInd()-Message should always have a payload
Line 2755: Tx-URRC_MM_FEMTOCELL_UPD_CNF
Line 2764: rrc_BoundNas_SendUpdateFemtoCellCnf()-Msg not allowed payload
Line 2792: Tx-UrrcMMDrxTimerInd
Line 2801: rrc_BoundNas_SendUrrcCellInd()-Msg not allowed payload
Line 2825: Tx-URRC_MM_BPLMN_STOP_CNF
Line 2834: rrc_BoundNas_SendUrrcMMBplmnStopCnf()-Msg not allowed payload
Line 2858: Tx-URRC_MM_DRX_TIMEOUT_IND
Line 2867: rrc_BoundNas_SendUrrcMMDrxTimeOutInd()-Msg not allowed payload
Line 2891: Tx-URRC_MM_CGI_HOLD_IND
Line 2900: rrc_BoundNas_SendUrrcMMCgiHoldInd()-Msg not allowed payload
Line 2924: Tx-URRC_MM_CGI_STOP_CNF
Line 2933: rrc_BoundNas_SendUrrcMMCgiStopCnf()-Msg not allowed payload
Line 2982: rrc_BoundNas_NasToUrrcMsg()-Unexpected Solicited Msg received=%d 
Line 2988:  rrc_BoundNas_NasToUrrcMsg()  InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 2995: rrc_BoundNas_NasToUrrcMsg()-Unregistred Msg received MsgId=%d
Line 3029: BoundNas - Unable to register MessageId=%d
Line 3056: BoundNas - Unable to de-register MessageId=%d
Line 3062: rrc_BoundUphy - RegistryTablePtr is NULL, MessageId=%d
Line 3085: Tx-URRC_MM_SIM_READ_CNF
Line 3094: rrc_BoundNas_SendMMSimReadCnf()-Msg not allowed payload
Line 3107: Tx-URRC_MM_PERIODIC_CSG_REQ
Line 3116: rrc_BoundNas_SendPeriodicCsgReq()-Msg not allowed payload
Line 3149: Tx-URRC_MM_CSG_VISITED_LIST_IND
Line 3158: rrc_BoundNas_SendUrrcMmPlmnListInd()-Message should always have a payload
Line 3189: Tx-URRC_MM_REDIRECTION_STATUS_IND
Line 3198: rrc_BoundNas_SendUrrcRedirectionStatusInd()-Msg must have payload
Line 3222: Tx-URRC_MM_UNRECOVERED_IND
Line 3231: rrc_BoundNas_SendUrrcMmUnrecoveredInd()-Msg not allowed payload
Line 3286: Tx-URRC_MM_SECURITY_ERR_IND
Line 3294: Tx-URRC_GMM_SECURITY_ERR_IND
Line 3302: rrc_BoundNas_SendCsPsSecurityErrorInd()- Invalid domain
Line 3308: rrc_BoundNas_SendCsPsSecurityErrorInd()-Message should not have a payload
Line 3589: Rx-NAS-MESSAGE_UNKNOWN(%X), %d
Line 3594: RX -Msg: [%s], TransactionId: [%d]
Line 3605: rrc_BoundNas_UnboundMsgHandler: Rx -URRC_MM_BPLMN_STOP_REQ; Tx-URRC_MM_BPLMN_STOP_CNF
Line 3611: rrc_BoundNas_UnboundMsgHandler: Rx -URRC_MM_BPLMN_LIST_REQ; Tx-URRC_MM_BACKGND_PLMN_LIST_FAIL_IND
Line 3622: rrc_BoundNas_UnboundMsgHandler: Rx -URRC_MM_ABORT_BACKGND_PLMN_LIST_REQ; Tx-URRC_MM_ABORT_BACKGND_PLMN_LIST_CNF
Line 3629: rrc_BoundNas_UnboundMsgHandler: Rx -URRC_MM_SUSPEND_RAT_REQ; Tx-URRC_MM_SUSPEND_RAT_CNF
Line 3634: rrc_BoundNas_UnboundMsgHandler: Rx -MsgId(%x); NotHandled
