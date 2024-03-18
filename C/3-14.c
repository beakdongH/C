#include<stdio.h>

struct score {  // 스코어(성적) 구조체 생성
    char name[20]; //이름
    int mic;    //마이크로프로세서 성적
    int lin;    //리눅스 성적
    int pro;    //프로젝트 성적
};

int main(void){
    struct score s[2] = {0};   
    for(int i=0;i<2;i++){
        scanf("%s",s[i].name);
        scanf("%d",&s[i].mic);
        scanf("%d",&s[i].lin);
        scanf("%d",&s[i].pro);
    }
    for(int i=0;i<2;i++){
        printf("학생별 성적 : %5s%5d%5d%5d\n",s[i].name,s[i].mic,s[i].lin,s[i].pro);

    }
    return 0;
}