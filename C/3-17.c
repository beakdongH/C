#include<stdio.h>

typedef union name{
    char a;
    short b;
    int c;

}Num;


int main(void){
    Num n;
    n.c=0x12345678;
    printf("%x\n",n.a);
    printf("%x\n",n.b);
    printf("%x\n",n.c);
    return 0;
}