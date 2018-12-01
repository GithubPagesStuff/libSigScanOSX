//
//  libSigScanOSX.h
//  rblxploit2
//
//  Created by Doc Aiden on 12/1/18.
//  Copyright © 2018 xeriviOS Team. All rights reserved.
//

#ifndef libSigScanOSX_h
#define libSigScanOSX_h

#include <stdio.h>

#endif /* libSigScanOSX_h */
uintptr_t SigScan(uintptr_t base, uint64_t size, uint8_t *ptrn, char *msk, int len);
int checkByte(unsigned char *mask, uint8_t *data,unsigned char *pattern);
