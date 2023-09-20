#include "STPMC1.h"

int BadParity(unsigned char *bp) {
    
    register unsigned char prty = grp;

    prty ^= *bp;
    prty ^= *(bp+1);
    prty ^= *(bp+2);
    prty ^= *(bp+3);
    prty &= 0xF0;
    return (prty != 0xF0);
}

