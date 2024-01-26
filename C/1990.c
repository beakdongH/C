#include <stdio.h>
#include <string.h>

int main(void){
    char a[1001];
    int result=0;
    scanf("%s",a);
    for(int i=0; i<strlen(a);i++){
        result+=a[i];
    }
    if(result%3==0) printf("1");
    else printf("0");

    return  0;
}
