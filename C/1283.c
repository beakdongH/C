#include<stdio.h>
#include<math.h>

int main(void){
    int money,days,diff[202];
    scanf("%d",&money);
    int result=money;
    scanf("%d",&days);
    for(int i=0;i<days;i++){
        scanf("%d",&diff[i]);
    }
    for(int i=0;i<days;i++){
        money+=(money/diff[i]);
        printf("%d_diff:%d  ",i,money/diff[i]);
        printf("%d_mon:%d\n",i,money);
    }
    double invest_money = money-result;
    printf("%.0f\n",invest_money);
    if(invest_money<0) printf("bad");
    else if(invest_money>0) printf("good");
    else printf("same");
    return 0;
}