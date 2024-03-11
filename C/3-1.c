#include<stdio.h>

int main(void){
    int *ptr;
    int num=10;
    ptr = &num;
    printf("%d\n",*ptr);
    printf("%p\n",&num);

    return 0;
}