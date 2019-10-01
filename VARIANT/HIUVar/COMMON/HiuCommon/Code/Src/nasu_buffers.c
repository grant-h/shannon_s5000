Line 109: [ERRORCHANNEL] GetNsapiData: Invalid Nsapi %d or stackId:%d
Line 120: [ERRORCHANNEL] nasu_DataNsapiShow: Invalid Nsapi %d
Line 124: [ERRORCHANNEL] Nsapi %01X, Mailbox %3d, Callback %08X
Line 129: [ERRORCHANNEL]   Uplink Pool for NSAPI:  %d-
Line 131: [ERRORCHANNEL]   Uplink Queue for NSAPI: %d-
Line 136: [ERRORCHANNEL]   Downlink Pool for NSAPI: %d-
Line 147: [ERRORCHANNEL] ========== UDH Status ==========
Line 177: [ERRORCHANNEL] nasu_DataInitialise: Initialised: %d, RAT %d, callback %08X
Line 217: [ERRORCHANNEL] nasu_CheckUlDlPool: Invalid Nsapi %x
Line 224: [ERRORCHANNEL] nasu_CheckUlDlPool: Buffer pool not OK (Nsapi = %x, Ul Pool = 0x%8X, Dl pool 0x%8X
Line 235: [ERRORCHANNEL] nasu_DataGetDstMailBox() : Invalid Nsapi (%d)
Line 262: [ERRORCHANNEL] nasu_BufferPoolCreate: TotalBuffers = 0
Line 269: [ERRORCHANNEL] nasu_BufferPoolCreate: BufferSize = 0
Line 276: [ERRORCHANNEL] nasu_BufferPoolCreate: header bigger than buffer
Line 286: [ERRORCHANNEL] nasu_BufferPoolCreate: cannot allocate pool control block
Line 313: [ERRORCHANNEL] nasu_BufferPoolCreate: Created Pool %08X, BufferCnt %d
Line 323: [ERRORCHANNEL] nasu_BufferPoolDelete: Pool %08X
Line 327: [ERRORCHANNEL] nasu_BufferPoolDelete: Invalid pool %08X, ThisPool %08X
Line 382: [ERRORCHANNEL] nasu_BufferPoolMaxDataSize: Invalid Buffer %08X, Alloc %02X
Line 394: [ERRORCHANNEL] nasu_FreeBufferCount: Invalid pool %08X, ThisPool %08X
Line 418: [ERRORCHANNEL] nasu_BufferAllocate: Invalid pool %08X, ThisPool %08X
Line 424: [ERRORCHANNEL] nasu_BufferAllocate: Pool %08X Deleted, cannot Allocate buffer
Line 447: [ERRORCHANNEL] nasu_BufferAllocate: Failed to allocate the cell buffer
Line 456: [ERRORCHANNEL] nasu_BufferAllocate: Invalid Buffer %08X, Alloc %02X
Line 472: [ERRORCHANNEL] nasu_BufferAllocate: DataSize %d is bigger than %d
Line 487: [BUFFERAVAILABLECHANNEL] nasu_BufferAllocate: No Buffers in Pool %08X, BufferCnt : %d
Line 505: [ERRORCHANNEL] nasu_BufferFree: Invalid Buffer %08X, Alloc %02X
Line 536: [BUFFERALLOCATECHANNEL] nasu_BufferFree: Cell buffer Free for PPP Packet
Line 540: [ERRORCHANNEL] nasu_BufferFree: Invalid Pool %08X, Buffer %08X, Alloc %02X
Line 551: [ERRORCHANNEL] nasu_BufferFree: Invalid Buffer %08X, Alloc %02X
Line 559: [BUFFERALLOCATECHANNEL] nasu_BufferFree: Buffer %08X from Pool %08X, currently %d free
Line 585: [ERRORCHANNEL] nasu_RelPtr: Invalid Buffer %08X, Alloc %02X
Line 596: [ERRORCHANNEL] nasu_DataPtr: Invalid Buffer %08X, Alloc %02X
Line 609: [ERRORCHANNEL] nasu_DataSize: Invalid Buffer %08X, Alloc %02X
Line 622: [ERRORCHANNEL] nasu_SetDataSize: Invalid Buffer %08X, Alloc %02X
Line 628: [ERRORCHANNEL] nasu_SetDataSize: Invalid size %d for Buffer %08X from Pool %08X
Line 660: [ERRORCHANNEL] nasu_BufferQueueCreate: cannot allocate queue control block
Line 671: [ERRORCHANNEL] nasu_PoolShowPAL: Invalid pool %08X, ThisPool %08X
Line 677: [BUFFERSHOWCHANNEL]  Pool %08X Deleted, Remaining Allocated Buffers %d
Line 681: [BUFFERSHOWCHANNEL]  Pool %08X, Total Buffers %2d, BufferAvailableFunction %08X, BufferAvailableParam %08X, SrcMbx %02X
Line 689: [BUFFERSHOWCHANNEL]   HeaderFree %4d, Available Buffers %2d, Allocations %6d, Failures %6d
Line 698: [BUFFERSHOWCHANNEL]     Allocation Failed Set
Line 707: [BUFFERSHOWCHANNEL] nasu_QueueShowOnChannel: Invalid queue
Line 717: [BUFFERSHOWCHANNEL] Buffer %08X, Length %04d, Data %08X
Line 757: [ERRORCHANNEL] nasu_HeaderAllocate: Invalid Buffer %08X, Alloc %02X
Line 781: [ERRORCHANNEL] nasu_HeaderFree: Invalid Buffer %08X, Alloc %02X
Line 787: [ERRORCHANNEL] nasu_HeaderFree: Size %d > DataLength %d for Buffer %08X from Pool %08X
Line 809: [ERRORCHANNEL] nasu_FooterAllocate: Invalid Buffer %08X, Alloc %02X
Line 817: [ERRORCHANNEL] nasu_FooterAllocate: Requested %d more than available %d
Line 840: [ERRORCHANNEL] nasu_GetPoolSrcMbx: Invalid Buffer %08X, Alloc %02X
Line 864: [ERRORCHANNEL] nasu_DataUlPoolCreate: Invalid Nsapi %01x
Line 868: [PDH_BUFFER_POOLS] nasu_DataUlPoolCreate: Nsapi %01x, Buffers %d, Size %d, Header %d, Callback %08X, SrcMbx %08X
Line 877: [ERRORCHANNEL] nasu_DataUlPoolCreate for Nsapi %01X: TotalBuffers %d too large, using default %d
Line 889: [ERRORCHANNEL] nasu_DataUlPoolCreate for Nsapi %01X: BufferSize %d too large, using default %d
Line 901: [ERRORCHANNEL] nasu_DataUlPoolCreate for Nsapi %01X: BufferSize %d too large, using default %d
Line 925: [PDH_UPLINK] nasu_DataUlPoolCreate: Nsapi %01x,UL Pool %08X
Line 930: [ERRORCHANNEL] nasu_DataUlPoolCreate: Nsapi %01x,Cannot Create Buffer Pool
Line 944: [ERRORCHANNEL] nasu_DataFreeBufferCount: Invalid Nsapi %x
Line 958: [ERRORCHANNEL] nasu_DataUlPoolDelete: Invalid Nsapi %x
Line 962: [ERRORCHANNEL] nasu_DataUlPoolDelete: Nsapi %01x, Pool 0x%8X
Line 982: [PDH_UPLINK] nasu_DataUlBufferAllocate: Invalid Nsapi %x
Line 998: [PDH_UPLINK] nasu_UlBufferAllocateWithData: Invalid Nsapi %x
Line 1013: [ERRORCHANNEL] nasu_DataUlBufferFree: Invalid Nsapi %x, pointer : %x
Line 1017: [PDH_UPLINK] nasu_DataUlBufferFree: Nsapi %01x, Buffer %08X
Line 1030: [ERRORCHANNEL] nasu_DataDlBufferAllocate: Invalid Nsapi %x
Line 1036: [PDH_DOWNLINK] nasu_DataDlBufferAllocate: Nsapi %01x, Size %d, Buffer %08X
Line 1058: [ERRORCHANNEL] nasu_DataDlPoolCreate: Invalid Nsapi %x
Line 1062: [PDH_BUFFER_POOLS] nasu_DataDlPoolCreate: Nsapi %01x, Mbx %08X, Overhead %d, Header %d
Line 1071: [ERRORCHANNEL] nasu_DataDlPoolCreate: Requested BufferOverhead %d too big, using default %d
Line 1081: [ERRORCHANNEL] nasu_DataDlPoolCreate: Requested HeaderFree %d too big, using default %d
Line 1097: [ERRORCHANNEL] nasu_DataDlPoolCreate: Registry Buffer Size %d too big, using default %d
Line 1137: [PDH_DOWNLINK] nasu_DataDlPoolCreate: Nsapi %01x,DL Pool %08X
Line 1153: [ERRORCHANNEL] nasu_DataDlPoolDelete: Invalid Nsapi %x
Line 1157: [ERRORCHANNEL] nasu_DataDlPoolDelete: Nsapi %01x, Pool : 0x%X
Line 1176: [ERRORCHANNEL] nasu_DataDlBufferFree: Invalid Nsapi %x, pointer : %x
Line 1180: [PDH_DOWNLINK] nasu_DataDlBufferFree: Nsapi %01x, Buffer %08X
