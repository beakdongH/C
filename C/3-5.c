#include<stdio.h>

int main(void){
    int arr[3]={0,1,2};
    printf("arr[0] : %d\n",arr[0]);
    printf("arr[1] : %d\n",arr[1]);
    printf("arr[2] : %d\n",arr[2]);
    int *ptr1 = &arr[0];
    *ptr1 = 10;
    *(ptr1+1) = 20;
    *(ptr1+2) = 300;
    printf("변경 후 배열 출력\n");
    printf("arr[0] : %d\n",arr[0]);
    printf("arr[1] : %d\n",arr[1]);
    printf("arr[2] : %d\n",arr[2]);
    

    return 0;
}