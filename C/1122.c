#include <stdio.h>

int main(){
    int a,s=0,m=0;
    scanf("%d",&a);
    m=a/60;
    s=a%60;
    printf("%d %d",m,s);
    
    return 0;
}

