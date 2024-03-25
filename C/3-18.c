#include<stdio.h>

typedef union{
    unsigned int val;
    struct {
        unsigned char r;
        unsigned char g;
        unsigned char b;
        unsigned char a;
    }rgba;
    
}color;

int main(void){
    color sample;
    sample.val = 0xfffffff;
    sample.rgba.b = 0x00;
    printf("%x\n",sample.val);
    return 0;
}