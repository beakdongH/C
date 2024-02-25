#include <stdio.h>

int main(void){
    char sen[101];
    scanf("%s",sen);
    int size = sizeof(sen)/sizeof(char);
    for(int i=0;i<=size;i++){
        if(sen[i]>='A' && sen[i]<='Z') sen[i]+=32;
        else if(sen[i]>='a' && sen[i]<= 'z') sen[i]-=32;
    }
    printf("%s",sen);
    return 0;
}
