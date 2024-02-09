#include<stdio.h>

int main(void){
    double p,result=0;
    int s;
    for(int i=1;i<=3;i++){
        scanf("%lf %d",&p,&s);
        result+=p*s;
    }
    printf("%.1f",result);
    return 0;
}