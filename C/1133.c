#include<stdio.h>
 
int main(void){
    char s[31];
    fgets(s,31,stdin);
    printf("%s",s);
    return 0;
}
