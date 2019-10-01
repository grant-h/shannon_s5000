Line 76: rrc_iePhErucchInfo_getTRucch: IE Not Present 
Line 84: rrc_iePhErucchInfo_getTRucch: TDD 1.28 Not Present
Line 92: rrc_iePhErucchInfo_getTRucch: Unsupported protocol version - only R7 supported
Line 125: rrc_iePhErucchInfo_getNRucch: IE Not Present
Line 133: rrc_iePhErucchInfo_getNRucch: TDD 1.28 Not Present
Line 141: rrc_iePhErucchInfo_getNRucch: Unsupported protocol version - only R7 supported
Line 174: rrc_iePhErucchInfo_getTWait: IE Not Present
Line 181: rrc_iePhErucchInfo_getTWait: TDD 1.28 Not Present
Line 188: rrc_iePhErucchInfo_getTWait: Unsupported protocol version - only R7 supported
Line 221: rrc_iePhErucchInfo_getTSI: IE Not Present
Line 229: rrc_iePhErucchInfo_getTSI: TDD 1.28 Not Present
Line 236: rrc_iePhErucchInfo_getTSI: Unsupported protocol version - only R7 supported
Line 269: rrc_iePhErucchInfo_getExtEstWindow: IE(OP) Not Present
Line 277: rrc_iePhErucchInfo_getExtEstWindow: TDD 1.28 Not Present
Line 285: rrc_iePhErucchInfo_getExtEstWindow: Unsupported protocol version - only R7 supported
Line 316: rrc_iePhErucchInfo_getERUCCH_ASC: IE(OP) Not Present
Line 324: rrc_IEPhErucchInfo_getERUCCH_ASC: TDD 1.28 Not Present
Line 331: rrc_iePhErucchInfo_getERUCCH_ASC: Unsupported protocol version - only R7 supported
Line 363: rrc_iePhErucchInfo_getERUCCH_PersistScalFactor: IE(OP) Not Present
Line 371: rrc_iePhErucchInfo_getERUCCH_PersistScalFactor: IE(OP) Not Present
Line 379: rrc_iePhErucchInfo_getERUCCH_PersistScalFactor: Unsupported protocol version - only R7 supported
Line 411: rrc_iePhErucchInfo_getSyncULInfoForERUCCH: ie Not Present
Line 419: rrc_iePhErucchInfo_getSyncULInfoForERUCCH: TDD 1.28 Not Present
Line 426: rrc_iePhErucchInfo_getSyncULInfoForERUCCH: Unsupported protocol version - only R7 supported
Line 458: rrc_iePhErucchInfo_getPrachInfo: ie Not Present
Line 466: rrc_iePhErucchInfo_getPrachInfo: TDD 1.28 Not Present
Line 473: rrc_iePhErucchInfo_getPrachInfo: Unsupported protocol version - only R7 supported
Line 571: rrc_iePhErucchInfo_asn1CheckImpl: ie ExtEstWindow InValid
Line 589: rrc_IEPhErucchInfo_asn1CheckImpl: IE availableSYNC_UlCodesIndics Present But Received Zero....!
Line 597: rrc_iePhErucchInfo_asn1CheckImpl: IE availableSYNC_UlCodesIndics Not Present
Line 650: rrc_iePhErucchInfo_asn1CheckImpl: IE subchannelSize Invalid 
Line 657: rrc_iePhErucchInfo_asn1CheckImpl: IE Asn_accessServiceClass_TDD_LCR Not Present
Line 677: Error: index  = %d
Line 687: rrc_iePhErucchInfo_asn1CheckImpl: IE(OP) Asn_E_RUCCH_AccessServiceClass Not Present
Line 706: Error: IEPhErucchInfo_p->numOfASC index  = %d
Line 715: rrc_iePhErucchInfo_asn1CheckImpl: IE(OP) e_RUCCH_PersistenceScalingFactor Not Present 
Line 770: rrc_iePhErucchInfo_asn1CheckImpl: IE(OP) syncULInfoForERUCCH Not Present  
Line 798: rrc_iePhErucchInfo_asn1CheckImpl: prach_ChanCodes[%d] = %d 
Line 872: rrc_iePhErucchInfo_asn1CheckImpl: IE(OP) FPACH info Not Present
Line 883: Error: IEPhErucchInfo_p->numPrachInfo = %d
Line 889: rrc_iePhErucchInfo_asn1CheckImpl: IE(OP) prachInfoForERUCCH Not Present 
Line 901: rrc_iePhErucchInfo_processIeImpl:tRucch = %d,nRucch = %d,twait = %d,tSi = %d,extEstWindow = %d
Line 904: rrc_iePhErucchInfo_processIeImpl:NumOfASC = %d
Line 912: rrc_iePhErucchInfo_processIeImpl:E_Ruch_ASC[%d]: availableSYNC_UlCodesIndics =%d,subchannelsize = %d,subchannels= %d
Line 919: Error: IEPhErucchInfo_p->numOfASC  = %d
Line 923: rrc_iePhErucchInfo_processIeImpl:NumOfASCpersist = %d
Line 928: rrc_iePhErucchInfo_processIeImpl: E_RUCCH_PersistenceScalingFactor[%d] = %d
Line 936: Error: IEPhErucchInfo_p->numOfASCpersist  = %d
Line 940: rrc_iePhErucchInfo_processIeImpl:isSyncULInfo = %d
Line 944: rrc_iePhErucchInfo_processIeImpl:prxUpPCHdes = %d,powerRampStep = %d,maxSynUlTx = %d,mmax = %d,syncULCodesBmp = %d
Line 952: rrc_iePhErucchInfo_processIeImpl:isprachInfo = %d
Line 956: rrc_iePhErucchInfo_processIeImpl:NumPrachInfo = %d
Line 961: rrc_iePhErucchInfo_processIeImpl:prachInfo[%d] timeSlotNum = %d,prachCClistSize = %d,midAllocMode = %d,midamConf = %d,midamShift = %d,isFpachInfo = %d
Line 968: rrc_iePhErucchInfo_processIeImpl:prach_ChanCodes[%d] = %d
Line 978: rrc_iePhErucchInfo_processIeImpl:NumPRACH_FPACH = %d
Line 992: Error: IEPhErucchInfo_p->numPrachInfo  = %d
