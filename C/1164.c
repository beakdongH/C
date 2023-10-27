#include <stdio.h>

int main(void){
    int n1, n2, n3; 
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 > 170 && n2 > 170 && n3 > 170) printf("PASS");
    
    else printf("CRASH");

    return 0;
}

