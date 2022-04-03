//Consider a unsigned int a=ox1234. The ouput must be 0x1432???

#include <stdio.h>
#include <stdlib.h>
int main() {
    unsigned int a=0x1234;
    a=(a&0xf000) | (a&0x00f0) | (a&0x0f00)>>8 | (a&0x000f)<<8;  //Main Logic
    printf("%x",a);
    return 0;
}
