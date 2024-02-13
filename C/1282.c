#include<stdio.h>

int main(void){
    int n,k,t;
    scanf("%d",&n);
    int a=n;
    for(int i=1;i*i<n;i++){
        if(a>n-(i*i)){
            a=n-(i*i);
        }
        k=a;
        t=i;
    }
    printf("%d %d",k,t);
    return 0;
}