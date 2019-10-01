Line 87: rfc2507_selected
Line 106: rfc2507_init:entity_num(%d), sapi(%d) TCP (%d) NonTCP (%d)
Line 128: RFC2507:stateData(%x) nontcpflow(%x) tcpflow (%x) 
Line 138: RFC2507: TCP size (%d)  (%d) tcpspace %d
Line 139: RFC2507: Non TCP size (%d) (%d)nontcpspace %d 
Line 145: RFC2507: Tx TCP Flow state(%x)
Line 158: RFC2507:Rx TCP Flow state(%x)
Line 173: RFC2507: Tx Non TCP Flow state(%x)
Line 188: RFC2507: Rx Non TCP Flow state(%x)
Line 201: RFC2507 Params: %d %d %d %d %d
Line 218: RFC2507: rfc2507_context_init TcpSpace %d NonTcpSpace %d 
Line 247: RFC2507: rfc2507_context_init exit
Line 282: State Data is NULL
Line 287: [DBG]:proto:%0x hlen:%d FMaxPeriod %d FMaxTime %d  NonTcp_cid %d Tcp_cid %d
Line 290: IP/TCP Header Packet
Line 295: IP/UDP Header Packet
Line 306: output:RFC2507(%d):length(%d):
Line 339: stateData(%x)InputLength(%d)Tcp_CID(%d)Non_TCPCID(%d) FMaxPeriod(%d) FMaxTime(%d)
Line 340: RFC2507:Decompression input :
Line 343: No State Data
Line 350: Rcvd UNCOMPRESSED_PACKETt: PCOMP %d
Line 355: Rcvd FULL_HEADER: PCOMP %d
Line 363: Rcvd FULL_HEADER: proto %d
Line 367: outputafter Decomp(%d)
Line 370: Rcvd errorneous TCP IP packet
Line 372: RFC2507 TCP decompression output:
Line 379: outputafter Decomp(%d)
Line 382: Rcvd errorneous UDP IP packet
Line 384: RFC2507 UDP decompression output:
Line 390: Rcvd COMPRESSED_TCP: PCOMP %d
Line 392: outputafter Decomp(%d)
Line 395: Rcvd errorneous TCP IP packet
Line 397: RFC2507 TCP decompression output:
Line 401: Rcvd COMPRESSED_TCP_NODELTA: PCOMP %d (not Handled) 
Line 405: Rcvd COMPRESSED_NON_TCP: PCOMP %d (not Handled)
Line 410: outputafter Decomp(%d)
Line 413: Rcvd errorneous UDP IP packet
Line 415: RFC2507 UDP decompression output:
Line 419: Rcvd CONTEXT_STATE: PCOMP %d (not Handled)
Line 433: rfc2507_delete
Line 487: RFC2507:rfc2507AddParams : [1]: %d [2]: %d [3]: %d [4]: %d  [5]: %d [6]: %d [7]: %d
Line 504: rfc2507AddPcomps: %d %d %d 
Line 550: rfc2507ComparePcoms : Status : %d len : %d 
Line 578: rfc2507ValidateParams_MO: len : %d XidInEstab %d status %d
Line 826: rfc2507ValidateParams_MO:period %d maxtime %d max header %d tcp %d nontcp %d  
Line 827: Proposed:period %d maxtime %d max header %d tcp %d nontcp %d  
Line 835: rfc2507ValidateParams_MO:l_reNegFlag %d----0  
Line 852: rfc2507ValidateParams_MO:l_reNegFlag %d----1  
Line 872: rfc2507ValidateParams_MO:l_reNegFlag %d----2  
Line 892: rfc2507ValidateParams_MO: XidInEstab %d 
Line 902: rfc2507ValidateParams_MO: len : %d returning :%d 
Line 1244: RFC2507Comp-PBit=0-Unsupported LengthOutOfRange
Line 1261: RFC2507Comp-PBit=1-Unsupported LengthOutOfRange
Line 1264: rfc2507CheckUnsupportedLength :%d 
Line 1292: IP Fragemnt or packet len<40:Packet Type:%d 
Line 1295: Reived Packet IP Header (1) In Hex  Ver(%x), HL(%x), ToS(%x), TL(%x)
Line 1296: IP Header (2) In Hex  ID(%x), off(%x) Protocol(%x), ChSum(%x)
Line 1299:  Received TCP Header (1) In Hex  SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
Line 1300: Received TCP Header (2) In Hex  x2(%x),flag(%x),window(%x), tcpCS(%x)
Line 1302: connstate Packet IP Header (1) In Hex  Ver(%x), HL(%x), ToS(%x), TL(%x) 
Line 1303: IP Header (2) In Hex  ID(%x), off(%x) Protocol(%x), ChSum(%x)
Line 1304:  Conn state TCP Header (1) In Hex  SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
Line 1305: Conn State TCP Header (2) In Hex  x2(%x),flag(%x),window(%x), tcpCS(%x)
Line 1309:  SYN | FIN | RST 
Line 1329: Found a Previous connection
Line 1334: No Previous connection found
Line 1341: h len %d:PacketType :%d
Line 1344: h len %d:PacketType :%d
Line 1350: TcpPktNumber %0x Higher Byte  %0x 
Line 1361: TcpPktNumber_cid %4x cs->tcp_cid %d 
Line 1367:  Previous connection found -1
Line 1374:  Previous connection found -2
Line 1382: TcpPktNumber %0x Higher Byte  %0x 
Line 1393: TcpPktNumber_cid %4x cs->tcp_cid %d 
Line 1401: h len %d:PacketType :%d
Line 1412: go to sendfullheader 1
Line 1421: Change in URG flag(%x)
Line 1425: Change in URG pointer without URG set:Send Fullheader
Line 1433: Change in Window field(%x)
Line 1440: Ack difference more than 65535: send Full header 
Line 1445: Change in Ack field(%x)
Line 1452: Seq difference more than 65535 :send Full header
Line 1457: Change in Seq field(%x)
Line 1470: special case encoding as per RFC1144: send full header
Line 1496: Change in IPID(%x)
Line 1502: PUSH Flag Set
Line 1509: length of final change(%d)
Line 1510: final Content
Line 1512: connection ID present in compressed header
Line 1529: sending full header %04x cs->tcp_cid %0x
Line 1550: FULL_HEADER received pdulen %d 
Line 1556: !Bad :rcvd_cid %x 
Line 1559: rcvd_cid %x 
Line 1561: last recv (%d)
Line 1562: last recv state (%d)
Line 1571: Length-copied-in-rx-state(%d)
Line 1574: COMPRESSED_TCP_NODELTA pdulen %d 
Line 1580: !Bad :rcvd_cid %x 
Line 1583: rcvd_cid %x 
Line 1585: last recv (%d)
Line 1586: last recv state (%d)
Line 1595: Length-copied-in-rx-state(%d)
Line 1598: COMPRESSED_TCP
Line 1603: !!Bad : 1
Line 1611: last_recv cid(%d)changes (%x)
Line 1613: last_recv_state(%x)
Line 1614: First  part In Hex  Ver(%x), HL(%x), ToS(%x), TL(%x)
Line 1615: Second part In Hex  ID(%x), off(%x) Protocol(%x), ChSum(%x)
Line 1618: In Hex  SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
Line 1619: In Hex  x2(%x),flag(%x),window(%x), tcpCS(%x)
Line 1621: upper byte (%x) next byte %x
Line 1623: In Hex  TH CS(%x)
Line 1636: SPECIAL_I
Line 1641: SPECIAL_D
Line 1647: Decode-Flag(%x), URG(%x)
Line 1656: Dec-WIN(%x)
Line 1657: S-CP-Val-Before (%x)
Line 1657: S-CP-Val-If (%x)
Line 1657: S-CP-Val-Else (%x)
Line 1661: Dec-ACK(%x)
Line 1662: L-CP-Val-Before (%x)
Line 1662: L-CP-Val-If (%x)
Line 1662: L-CP-Val-Else (%x)
Line 1666: Dec-SEQ(%x)
Line 1667: L-CP-Val-Before (%x)
Line 1667: L-CP-Val-If (%x)
Line 1667: L-CP-Val-Else (%x)
Line 1673: NEW_I
Line 1674: S-CP-Val-Before (%x)
Line 1674: S-CP-Val-If (%x)
Line 1674: S-CP-Val-Else (%x)
Line 1681: Length_one(%d)
Line 1684: we must have dropped some characters
Line 1697: Length_two(%d),cs_len(%d)
Line 1710: Length_END(%d)
Line 1713: !!Bad :decompress Default
Line 1717: !!!!We are in BAD area, Not expected!!!!
