Line 284: [ATI_PDNMGR] Invalid stack(%d) or Cid(%d)
Line 300: pPdpData is NULL
Line 314: +CGDCONT: Unknown PDP type string = 
Line 343: +CGDCONT: Invalid PDP addr len %d
Line 350: +CGDCONT: NULL or Missing PDP Address - setting pdp address to dynamic
Line 361: +CGDCONT: invalid d_comp = %d
Line 377: +CGDCONT: invalid h_comp = %d
Line 394: +CGDCONT: invalid IPv4AddrAlloc = %d
Line 413: +CGDCONT: invalid IP type = %d, Pdp Address Length = %d
Line 422: +CGDCONT: Invalidate PDP Context cid = %d
Line 430: +CGDCONT: invalid ParamMask = %x
Line 453: +CGDCONT: Missing cid
Line 652: [ATI_PDNMGR] Invalid stack(%d) or Cid(%d)
Line 656: +CGDSCONT: Invalid cid %d
Line 662: [ATI_PDNMGR] Invalid stack(%d) or Cid(%d)
Line 667: +CGDSCONT: Invalid primary cid %d
Line 680: +CGDSCONT: invalid d_comp = %d
Line 693: +CGDSCONT: invalid h_comp = %d
Line 717: pPdpData is NULL
Line 974: Received PrecedenceClass = %d, DelayClass = %d, ReliabilityClass = %d, PeakThroughput = %d, MeanThroughput = %d
Line 977: [ATI_PDNMGR] Invalid stack(%d) or Cid(%d)
Line 985: +CGQREQ: CheckParamStatus %d
Line 1028: set parameter ERROR status
Line 1040: Initialise requested QOS parameters
Line 1046: +CGQREQ: invalid ParamMask %x
Line 1052: +CGQREQ: QOS Parameters
Line 1066: +CGQREQ: Missing cid %d
Line 1077: pPdpData is NULL
Line 1231: [ATI_PDNMGR] Invalid stack(%d) or Cid(%d)
Line 1239: +CGQMIN: CheckParamStatus %d
Line 1282: set parameter ERROR status
Line 1294: Initialise requested QOS parameters
Line 1300: +CGQMIN: invalid Parameter
Line 1306: +CGQMIN: QOS Parameters
Line 1321: +CGQMIN: Missing cid %d
Line 1332: pPdpData is NULL
Line 1637: +CGEQMIN: Invalid ParamMask %x
Line 1643: +CGEQMIN: MinQOS Parameters
Line 1651: +CGEQMIN: Missing cid %d
Line 1738: [ATI_PDNMGR] Invalid stack(%d) or Cid(%d)
Line 1750: +CGEQREQ: CheckParamStatus %d
Line 1854: MemAlloc fail
Line 1870:  TrafficClass = %d <%d>,MaxBitRateUplink = %d <%dk>,MaxBitRateDownlink = %d <%dk>
Line 1877: -GuaranteedBitRateUplink = %d <%dk>, GuaranteedBitRateDownlink = %d <%dk>
Line 1883: -MaxBitRateDownlinkExt = %d <%dk>, GuaranteedBitRateDownlinkExt = %d <%dk>
Line 1890: -MaxBitRateUplinkExt = %d <%dk>, GuaranteedBitRateUplinkExt = %d <%dk>
Line 1896: - DeliveryOrder = %d <%d>,MaxSduSize = %d <%d>
Line 1910: -SduErrorRatio = %d   
Line 1911: -ResidualBER = %d 
Line 1916: - DeliveryOfErrSdu = %d <%d>, TransferDelay = %d <%d>,TrafficHandlingPriority = %d <%d>
Line 1922: - SourceStatisticsDescriptor = %d <%d>,SignallingIndication = %d <%d>
Line 2310: +CGEQREQ: Invalid Parameters
Line 2370: pPdpData is NULL
Line 2545: +CGEQREQ: Invalid Parameters
Line 2607: pPdpData is NULL
Line 3139: AtiSendDetachReq: DetachType = %d
Line 3144: MemAlloc fail
Line 3166: Command Timer Started [%s] [%d]
Line 3223: MemAlloc fail
Line 3242: Command Timer Started [%s] [%d]
Line 3257: [ATI_GPRS] Tx NS_PDN_CONNECTIVITY_REQ (Flag=0x%X, CID=%d, PDP Type=0x%X, APN=)
Line 3259: SEND PDN request
Line 3263: [ATI_GPRS] Tx NS_PDN_CONNECTIVITY_REQ Invalid CID:%d
Line 3270: [ATI_GPRS] Tx NS_PDN_CONNECTIVITY_REQ already
Line 3283: [ATI_GPRS] Forced Set Cid:%d, Sid:%d
Line 3292: [ATI_GPRS] Cid:%d, NsSId %d
Line 3298: MemAlloc fail
Line 3305: Invalid CID: %d 
Line 3351: VzW Requirement : Emm Staus is Roam, So changing PDP Type as IPv4
Line 3370: Mem free Error(pMsg)
Line 3371: [ATI_ERR] AtiSendInitialPdnConnectivityReq() : Invalid PDP type(=0x%X)
Line 3384: MemAlloc fail
Line 3413: pMsg->Body.NsPdnConnReq.ReqType is %d
Line 3416: atiLteAttachTriggered - PdnRequest.
Line 3457: +CGATT: CgattState = %d
Line 3473: AtiCmdPlusCGATT(): EPS handler for Attach
Line 3480: Init Attach --> SendPdnConnectivityReq
Line 3508: pPdpData is NULL
Line 3515: [ATI] CM Attach. atiInternalAttachValid = TRUE
Line 3530: +CGATT:GPRS handler for Attach
Line 3559: RAT = %d, LTE Attach Status = %d, Service Domain = %d
Line 3566: [ATI] CM NormalDetach. atiInternalAttachValid = FALSE
Line 3583: +CGATT: GPRS handler for Detach
Line 3631: [ATI_PDNMGR] Invalid stack(%d) or Cid(%d)
Line 3639: +CGCMOD: CheckParamStatus %d
Line 3666: pPdpData is NULL
Line 3669: Command Timer Started [%s] [%d]
Line 3674: CGMOD parameter error
Line 3937: [ATI_PDNMGR] Invalid stack(%d) or Cid(%d)
Line 3945: Update Secondary PDP PCO auth paramsc for cid=%d
Line 3950: Update Primary PDP PCO auth paramsc for cid=%d
Line 3955: Define PDP context first using +CGDCONT
Line 3963: Return Success when only cid is given. Previously Set Auth setting will be used for cid %d
Line 3987: Parameters Out Of Range
Line 4010: Parameters Out Of Range
Line 4028: Mandatory Parameter: Cid Not Given
Line 4100: Parameter out of range!!
Line 4145: MemAlloc fail
Line 4168: MemAlloc fail
Line 4186: MemAlloc fail
Line 4234: CGANS parameter error.
Line 4258: [ATI_PDNMGR] Invalid stack(%d) or Cid(%d)
Line 4300: +CGDATA: sending data, already PDP activated
Line 4327: +CGDATA: unspecified cid
Line 4380: MemAlloc fail
Line 4398: Command Timer Started [%s] [%d]
Line 4479: AtiCmdPlusCGPADDR: uCidListLen = 0
Line 4513: [ATI_PDNMGR] Invalid stack(%d) or Cid(%d)
Line 4517: AtiCmdPlusCGPADDR CID: %d PdpAddress: %s
Line 4535: +CGPADDR: Invalid cid %u at list index %d 
Line 4807: MemAlloc fail
Line 4827: Command Timer Started [%s] [%d]
Line 4883: [ATI_PDNMGR] Invalid stack(%d) or Cid(%d)
Line 4925: pPdpData is NULL
Line 4932: Command Timer Started [%s] [%d]
Line 5125: [ATI_PDNMGR] Invalid stack(%d) or Cid(%d)
Line 5129: Invalid CID %d
Line 5153: cid = %d, DPort = %d.%d, SPort = %d.%d
Line 5156: source address, 0,1,2,3 = %d.%d.%d.%d
Line 5157: subnet mask address, 4,5,6,7 = %d.%d.%d.%d
Line 5162: TOS = %d.%d
Line 5203: Direction = %d
Line 5222: pPdpData is NULL
Line 5309: [ATI_PDNMGR] Invalid stack(%d) or Cid(%d)
Line 5370: +CGEQOS : Invalid ParamMask = %x
Line 5382: cid = %d,QCI = %d, GuaranteedBitRateDownlink = %d,GuaranteedBitRateUplink = %d, MaxBitRateDownlink = %d ,MaxBitRateUplink = %d 
Line 5406: pPdpData is NULL
Line 5411: +CGEQOS: Missing cid %d
Line 5723: Inside AtiCmdPlusCGEQOSRDP
Line 5745: Nw initiated Dedicated bearer-cid = %d,QCI = %d,GuaranteedBitRateDownlink = %d,GuaranteedBitRateUplink = %d, MaxBitRateDownlink = %d ,MaxBitRateUplink = %d 
Line 5766: Nw initiated Dedicated bearer-cid = %d,QCI = %d,GuaranteedBitRateDownlink = %d,GuaranteedBitRateUplink = %d, MaxBitRateDownlink = %d ,MaxBitRateUplink = %d 
Line 5794: Nw initiated Dedicated bearer-cid = %d,QCI = %d,GuaranteedBitRateDownlink = %d,GuaranteedBitRateUplink = %d, MaxBitRateDownlink = %d ,MaxBitRateUplink = %d 
Line 5822: Nw initiated Dedicated bearer-cid = %d,QCI = %d,GuaranteedBitRateDownlink = %d,GuaranteedBitRateUplink = %d, MaxBitRateDownlink = %d ,MaxBitRateUplink = %d 
Line 5842: Inside AtiCmdPlusCGTFTRDP
Line 6028: PdpType %d
Line 6126: cidState %d, Cid count %d
Line 6130: cid_defined_table[%d]: %d 
Line 6143: cid_defined_table[%d]: %d
Line 6177: AtiCallStatus: Cid[%d] call_mode=%d, call_state=%d
Line 6193: AtiCidIndex: CidIdx[%d] cid=%d, ActState=%d, sec_cid=%d
Line 6347: MemAlloc fail
Line 7023: AtiGetDataCompression: invalid dComp %d
Line 7043: AtiGetHeaderCompression: invalid - hComp = %d
Line 7065: MemAlloc fail
Line 7072: Invalid CID: %d 
Line 7079: Invalid CID: %d 
Line 7092: Primary Cid = %d found for secondary cid = %d
Line 7108: pal MemFree EpsQosParams!
Line 7116: MemAlloc fail
Line 7133: pal MemFree TFT_Sec_Params!
Line 7135: NS_BEARER_RESOURCE_ALLOCATION_REQ, Sid=%d,LinkedSid =%d
Line 7139: [ATI] CGACT Activate. atiLteAttachTriggered = TRUE
Line 7147: Msg send fail
Line 7183: Nsapi %d, cid %d, PsRegStatus%d
Line 7201: Buffer Created Successfully
Line 7206: Buffer Successfully sent
Line 7233: CGATT parameter error.
Line 7246: RAT = %d, LTE Attach Status = %d, Service Domain = %d
Line 7287: RAT = %d, LTE Attach Status = %d, Service Domain = %d
Line 7329: RAT = %d, LTE Attach Status = %d, Service Domain = %d
Line 7372: SId = %d, TempSId = %d 
Line 7393: - Mailbox for RABM to send data to = %d, SndcpBufferOverheadLength = %d, SndcpBufferStartOffset = %d
Line 7433: AtiGprsRelayInit: PDP_CONTEXT, cid = %d, PDP_type = %d
Line 7434: - APN         = 
Line 7435: - PDP_address = 
Line 7436: d_comp = %d, h_comp = %d
Line 7555: [PDNM] Tx NS_GENERAL_GPRS_AP_INFO to NS (IpcMsgType = %d)
Line 7560: MemAlloc fail
Line 7582: [PDNM] Sending to NS is not OK
