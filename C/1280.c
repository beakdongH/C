#include<stdio.h>

int main(void){
    int a,b,result=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i%2==0){
            printf("-%d",i);
            result-=i;
        } 
        else{
            printf("+%d",i);
            result+=i;
        }
    }
    printf("=%d",result);

    return 0;
}