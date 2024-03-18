#include<stdio.h>

int main(void){
    int a[3][4] ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int (*p)[4]=a;
    printf("%p\n",*p); //p주소값
    printf("%p\n",*a); //a주소값
    printf("%d\n",p[2][1]); //2행 1열의 값
    printf("%ld\n",sizeof(a)); //주소를 담는 그릇
    printf("%ld\n",sizeof(p)); //주소를 담는 그릇


    return 0;
}