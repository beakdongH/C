#include<stdio.h>

int main(void){
    int a,b,tmp;
    scanf("%d %d",&a,&b);
    if(a>b){
        tmp = a;
        a=b;
        b=tmp;
    }
    for(int i=a;i<=b;i++){
        printf("%d ",i);
    }
    
    
    return 0;
}
