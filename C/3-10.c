#include<stdio.h>

int main(void){
    int a[3];
    int *p;
    p=a;
    printf("%d %d %d\n",a[0],a[1],a[2]);
    *p++=10;    

    printf("%d %d %d\n",a[0],a[1],a[2]);
    *p++=20;

    printf("%d %d %d\n",a[0],a[1],a[2]);
    *p=30;

    printf("%d %d %d\n",a[0],a[1],a[2]);
    
    return 0;
}