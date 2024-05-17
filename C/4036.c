#include <stdio.h>
 
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
 
    int plus = (a+b)/2;
    int minus = (a-b)/2;
    
    printf("%d\n%d\n",plus,minus);
    
    return 0;
}
