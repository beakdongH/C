#include<stdio.h>

int main(void){
    int *ptr1;
    int **ptr2;
    int num=10;
    ptr1=&num;
    ptr2=&ptr1;
    printf("%d\n",**ptr2);

    return 0;
}