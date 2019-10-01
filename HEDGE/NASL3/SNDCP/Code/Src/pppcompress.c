Line 158: sl_compress_init(%d)
Line 187: IP Header (1) In Hex  Ver(%x), HL(%x), ToS(%x), TL(%x) 
Line 188: IP Header (2) In Hex  ID(%x), off(%x) Protocol(%x), ChSum(%x)
Line 197: TYPE_IP----1
Line 201: TCP Header (1) In Hex  SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
Line 202: TCP Header (2) In Hex  x2(%x),flag(%x),window(%x), tcpCS(%x)
Line 205: TYPE_IP th_flag(%x)
Line 237: packet --- Wasn't the first
Line 248: packet ---found a prev connection
Line 253: packet ---Didn't find it
Line 268: TYPE_IP----4
Line 271: packet Uncompressed
Line 303: TYPE_IP----3
Line 308: TYPE_ERROR
Line 316: go to Uncompressed---1
Line 319: Can be Compressed
Line 338: go to Uncompressed---2
Line 343: Change in Window field(%x)
Line 351: go to Uncompressed---3
Line 354: Change in Ack field(%x)
Line 364: Change in Seq field(%x)
Line 368: Before: changes in packet(%d)
Line 390: go to Uncompressed---5
Line 411: Always compress outputchanges %d
Line 417: Change in IPID(%x)
Line 437: length of final change(%d)
Line 441: connection ID present
Line 450: NO connection ID
Line 486: TYPE_UNCOMPRESSED_TCP
Line 489: !Bad : ip->ip_p (%d)
Line 493: last recv (%d)
Line 494: last recv state (%d)
Line 503: Length-copied-in-rx-state(%d)
Line 508: !!Bad : Default
Line 512: TYPE_COMPRESSED_TCP
Line 516: We've received a compressed packet
Line 526: !!Bad : 1
Line 539: we have to toss the packet.
Line 544: last_recv(%d)
Line 546: last_recv_state(%x)
Line 547: First  part In Hex  Ver(%x), HL(%x), ToS(%x), TL(%x)
Line 548: Second part In Hex  ID(%x), off(%x) Protocol(%x), ChSum(%x)
Line 551: In Hex  SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
Line 552: In Hex  x2(%x),flag(%x),window(%x), tcpCS(%x)
Line 554: In Hex  TH CS(%x)
Line 577: Decode-Flag(%x), URG(%x)
Line 584: Dec-WIN(%x)
Line 585: S-CP-Val-Before (%x)
Line 585: S-CP-Val-If (%x)
Line 585: S-CP-Val-Else (%x)
Line 589: Dec-ACK(%x)
Line 590: L-CP-Val-Before (%x)
Line 590: L-CP-Val-If (%x)
Line 590: L-CP-Val-Else (%x)
Line 594: Dec-SEQ(%x)
Line 595: L-CP-Val-Before (%x)
Line 595: L-CP-Val-If (%x)
Line 595: L-CP-Val-Else (%x)
Line 601: NEW_I
Line 602: S-CP-Val-Before (%x)
Line 602: S-CP-Val-If (%x)
Line 602: S-CP-Val-Else (%x)
Line 616: Length_one(%d)
Line 621: we must have dropped some characters
Line 634: Length_two(%d),cs_len(%d)
Line 647: Length_END(%d)
Line 650: !!!!We are in BAD area, Not expected!!!!
