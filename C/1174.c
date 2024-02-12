#include<stdio.h>

int main(void){
    int h,m;
    scanf("%d %d",&h,&m);
    h+=24;
    m=(m+h*60)-30;
    h=m/60;
    h%=24;
    m%=60;
    printf("%d %d",h,m);
    return 0;
}