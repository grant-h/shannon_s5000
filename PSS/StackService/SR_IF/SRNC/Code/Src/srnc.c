Line 281: %s: SRNC state = %s, CLIENT1 = %s, CLIENT2 = %s, CLIENT3 = %s, CLIENT4 = %s
Line 405: %s: %s
Line 406: Original: srnc_db.Srnc_RegisteredClientEntitiesBitMap: 0x%x
Line 411: Updated: srnc_db.Srnc_RegisteredClientEntitiesBitMap: 0x%x
Line 418: ERROR: This client entity is already registered
Line 437: %s: %s
Line 438: Original: srnc_db.Srnc_RegisteredClientEntitiesBitMap: 0x%x
Line 443: Updated: srnc_db.Srnc_RegisteredClientEntitiesBitMap: 0x%x
Line 450: ERROR: This client entity is already de-registered
Line 468: %s
Line 491: %s
Line 553: srnc_UpdateStackInfo: StackParamType = %d, Param = %d, ClientEntity = %s
Line 582: ERROR: In %s : Invalid StackParamType %d
Line 590: ERROR: In %s : %s is not initialized
Line 651: ERROR: In %s : Invalid StackParamType %d
Line 695: ERROR: Set value received is SRNC_ERROR, Do not update srnc state
Line 736: Received typeofproc is outofbond size
Line 741: %s already holding the grant for %s
Line 812: Original srnc_db.ClientProcInfo[%d].ClientEntityBitMap[%s]: 0x%x
Line 837: Updated srnc_db.ClientProcInfo[%d].ClientEntityBitMap[%s]: 0x%x
Line 861: %s Holds %s Proc grant
Line 882: %s: %s
Line 905: %s: %s
Line 911: INTERNAL RESUME_REQ due to client REGISTER/DEREGISTER request
Line 919: INTERNAL PENDING LIST CLEARING due to client REGISTER/DEREGISTER request
Line 980: Other Clients PROC - %s 
Line 1000: ERROR: Request received from invalid client
Line 1004: %s : %s proc %s
Line 1022: Final pending proc:client1 - %s, client2 - %s, client3 - %s
Line 1042: ERROR: Request received from invalid client
Line 1054: %s Request from %s: %s status = 0x%x 
Line 1055: Pending proc:client1 - %s, client2 - %s, client3 - %s 
Line 1101: ERROR: Request received from invalid client
Line 1105: %s : %s proc %s
Line 1124: Final pending proc:client1 - %s, client2 - %s, client3 - %s
Line 1147: ERROR: Request received from invalid client
Line 1153: %s : %s -> PROC - %s 
Line 1161: Final pending proc:client1 - %s, client2 - %s, client-3 - %s
Line 1243: ERROR: Request received from invalid ClientEntity
Line 1249: ERROR: Request received with invalid typeofproc
Line 1254: %s: Requested ProcType: %s,  ProcCause: %d, ClientEntity: %s, ClientId: %s, stateupdateNotNeeded: %d
Line 1260: STANDBY_REQ with SRNC_IDLE, No actions are required.
Line 1285: The Client is requesting the Grant wrongly
Line 1291: When client has CSCALL already, another client requesting the STANDBY_REQ, disard the standby request
Line 1320: %s: Added to Grant Pending List
Line 1341: Existing Priority List Info for  %s -> ClientId : %s, Priority  : %d
Line 1346: Updated Priority List Info for  %s -> ClientId : %s, Priority  : %d
Line 1362: %s
Line 1396: Since CSCALL is pending on other stack, rejecting the grant
Line 1411: %s has requested the %s with high priority than the awaited client, so allowing it directly
Line 1417: This proc is already resvered for %s
Line 1443: ERROR: %s: Request received from invalid ClientEntity
Line 1449: ERROR: Request received with invalid typeofproc
Line 1453: %s: Requested Proc Type: %s, ClientEntity: %s, ClientId: %s
Line 1460: RESUME_REQ with SRNC_IDLE, No actions are required.
Line 1466: Grant is released without taking it. So Clear it from PendingList
Line 1474: ERROR: Stored ClientEntity for this Proc is not matching with requested ClientEntity
Line 1489: Grant is still occupied by other clients, so don't clear SRNC states
Line 1498: Grant is released
Line 1502: No changes in SRNC state
Line 1508: Grant is still occupied by other client entities, so don't clear SRNC states
Line 1515: CLIENT_STATE_ERROR: Invalid RESUME_REQ, IsClientStateUpdated: %d
Line 1608: %s
Line 1627: In %s
Line 1628: Resetting other client's Pending Procs and client states if any, due to CS CALL GRANT
Line 1652: In %s
Line 1708: Restoring the old uncleared procs -> BackupProc : %s, ClientId: %s
