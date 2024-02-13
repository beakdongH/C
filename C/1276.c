#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int result=1;
    for(int i=0;i<=n;i++){
        result*=i;
    }
    printf("%d",result);
    return 0;
}