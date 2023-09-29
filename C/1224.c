#include <stdio.h>
 
int main (void){
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    if(a/b>c/d) printf(">");
    else if(a/b==c/d) printf("=");
    else printf("<");
    
    return 0;
}


