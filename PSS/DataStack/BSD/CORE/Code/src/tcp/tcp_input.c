Line 639: TCP_INPUT: exiting for rexmit test retxmt_test_count %d 
Line 698: TCP_INPUT: dropping packet
Line 706: TCP_INPUT: offset %d !! 
Line 754: TCP_INPUT: dropping packet
Line 783: TCP_INPUT: dropping packet
Line 794: TCP_INPUT: tlen [%d] off0 [%d]
Line 814: TCP_INPUT: Calculating checksum
Line 831: TCP_INPUT: bad checksum.. Dropping the segment
Line 859: TCP_INPUT: dropping packet
Line 1008: TCP_INPUT: dport [%x] sport [%x] inp [%x]
Line 1041: TCP_INPUT: inpcb doesn't exist. Dropping packet with RST
Line 1134: TCP_INPUT: The TCPCB may no longer exist if the connection is winding down or it is in the CLOSED state. Dropping segment
Line 1144: TCP_INPUT: D(0x%x:%d)<-S(0x%x:%d),SEQ(0x%x) ACK(0x%x) LEN(%d)
Line 1148: TCP_INPUT: SID(%d) Ifx(%d), S(%d) A(%d) F(%d) R(%d) P(%d)
Line 1265: TCP_INPUT: No syncache entry or ACK was not for our SYN/ACK, Dropping with RST
Line 1285: TCP_INPUT: We completed the 3-way handshake but could not allocate a socket either due to memory shortage>> 
Line 1286: TCP_INPUT: could not allocate a socket either due to memory shortage, listen queue length limits or global socket limits >> 
Line 1298: TCP_INPUT: dropping packet
Line 1347: TCP raising accept Event
Line 1365: TCP_INPUT: Our (SYN|ACK) response was rejected. Check with syncache and remove entry to prevent retransmits
Line 1373: TCP_INPUT: Listen socket: SYN is missing, segment ignored
Line 1388: TCP_INPUT: Listen socket: SYN|ACK invalid, segment rejected. Drop with RST
Line 1412: TCP_INPUT: Listen socket: SYN|FIN segment ignored. Drop packet
Line 1468: TCP_INPUT: Listen socket: Connection attempt to deprecated IPv6 address rejected. Drop with RST
Line 1495: TCP_INPUT: Listen socket: Connection attempt from broad- or multicast link layer address ignored
Line 1509: TCP_INPUT: Listen socket: Connection attempt to/from self ignored
Line 1521: TCP_INPUT: Listen socket: Connection attempt from/to multicast address ignored
Line 1539: TCP_INPUT: Listen socket: Connection attempt to/from self ignored
Line 1552: TCP_INPUT: Listen socket: Connection attempt from/to broad-or multicast address ignored
Line 1653: TCP_INPUT: dropping packet
Line 1783: TCP_INPUT: Window size [%d] Send Window Scale [%d] Actual Win Size [%d]
Line 2198: TCP_INPUT: ACK not for our SYN/ACK, send a RST
Line 2247: TCP_INPUT: ACK not for our SYN/ACK, send a RST
Line 2251: TCP_INPUT: RST received; Drop connection
Line 2257: TCP_INPUT: Segment does not contain SYN, Drop it
Line 2338: tcp_do_segment outstanding data are acked - stop rexmt timer!! 
Line 2342: [tcp_input] Received SYN !!!
Line 2452: TCP_INPUT: RST is in window, send challenge ACK
Line 2481: TCP_INPUT: SYN in synchronized state, send challenge ACK
Line 2917: tcp_do_segment outstanding data are acked - stop rexmt timer!
Line 3111: tcp_do_segment outstanding data are acked - stop rexmt timer!
Line 3121: tcp_do_segment outstanding data are acked - stop rexmt timer!!
Line 3377: [tcp_do_segment] so->so_rcv.sb_ccc %d!! 
Line 3393: [tcp_reass] so->so_rcv.sb_ccc [%d] !! 
Line 3396: [tcp_reass] Raising READ event !! 
Line 3452: [tcp_input] Received FIN !!!
Line 3499: TCP_INPUT: TCP raising connect Event
Line 3512: TCP_INPUT: Raising close Event for sockid %d!! 
Line 3516: TCP_INPUT: Raising Write Event for sockid %d!! 
