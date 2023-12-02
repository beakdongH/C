#include<stdio.h>
 
int main(){
    int a;
    scanf("%d",&a);
    int result = 0;
    while(a != 0) {
        a = a/10;
        result++;
    }
 
    printf("%d",result);
    return 0;
}
