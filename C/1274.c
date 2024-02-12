#include<stdio.h>

int main(void){
    int a,cnt=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
        if(a%i==0) cnt+=1;
    if(cnt==2) printf("prime");
    else printf("not prime");
    return 0;
}