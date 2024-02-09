#include <stdio.h>
#define LEN_INPUT 10

int main(void) {
    char ch[LEN_INPUT];
    scanf("%s", ch);
    for(int i=0; ch[i]!='\0';i++){
        if(ch[i]>='A' && ch[i]<='Z') ch[i]+=32;
        else if (ch[i]>='a' && ch[i]<='z') ch[i]-=32;
    }
    printf("%s",ch);
    return 0;
}
