#include<stdio.h>

typedef struct bf {
    unsigned int a:1;
    unsigned int b:3;
    unsigned int c:7;
} Bf;


int main(void){
    Bf t;
    t.a = 1;
    t.b = 15;
    t.c = 225;
    printf("%u\n",t.a);
    printf("%u\n",t.b);
    printf("%u\n",t.c);
    
    printf("%d\n",sizeof(t));
    return 0;
}