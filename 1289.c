#include <stdio.h>

int main() {
    int w[3],h[3],sum,max=0;
    for(int i=0;i<3;i++){
        scanf("%d %d",&w[i],&h[i]);
        sum = w[i]*h[i];
        if(max<sum) max=sum;
    }
    printf("%d",max);
    return 0;
}
