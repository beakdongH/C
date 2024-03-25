#include<stdio.h>

int main(void){
    int n1=15;
    int result1 = n1<<1; // n1>>1
    int result2 = n1<<2; // n1>>2
    int result3 = n1<<3; // n1>>3
    printf("한칸 이동 %d\n",result1);
    printf("두칸 이동 %d\n",result2);
    printf("세칸 이동 %d\n",result3);
    return 0;
};