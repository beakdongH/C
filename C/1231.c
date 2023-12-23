#include <stdio.h>
 
 
int main (void){
    int a,b;
    char cal;
    
    scanf("%d %c %d",&a,&cal,&b);
    if(cal == '+') printf("%d",a + b);
    else if(cal == '-') printf("%d",a-b);
    else if(cal == '*') printf("%d",a*b);
    else printf("%.02f",(float)a/(float)b);
    
    return 0;
}
