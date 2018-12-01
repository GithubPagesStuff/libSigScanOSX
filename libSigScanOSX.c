//
//  libSigScanOSX.c
//  rblxploit2
//
//  Created by Doc Aiden on 12/1/18.
//  Copyright © 2018 xeriviOS Team. All rights reserved.
//

#include "libSigScanOSX.h"
int checkByte(unsigned char *mask, uint8_t *data,unsigned char *pattern) {
    uint8_t *base2 = (uint8_t *)DynamicBaseAddress();
    for(int i=0;i<9; ++data, ++pattern, ++mask, ++i) {
            if(*mask == 0x3F)
                continue;
        
            if (((data > (base2+StaticBaseLength())))) {
                            printf("overflow");

            return 2;
            }
            if (*data != *pattern) {

            return 1;
            }
        
        }         return 0;

}
uintptr_t SigScan(uintptr_t base, uint64_t size, uint8_t *ptrn, char *msk, int len) {
    
    unsigned long long base2 = (unsigned long long)base;
    
    for (; base < base+size; base++) {
    if ((((base > (base2+StaticBaseLength())))))
    return -1;
    
    int cbyte = checkByte(msk, (uint8_t *)(base), ptrn);
        if(cbyte == 0) {
    
                    return (uintptr_t)(base);
        } else if (cbyte == 2) {
        return -1;
        }
        
//NSLog(@"%i", base);
    }
    return -1;
}
