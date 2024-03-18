#include<stdio.h>

struct score {  // 스코어(성적) 구조체 생성
    int mic;    //마이크로프로세서 성적
    int lin;    //리눅스 성적
    int pro;    //프로젝트 성적
};

int main(void){
    struct score s1;    // struct score s1 = {70,80,90}; 초기화도 가능
    s1.mic = 60;
    s1.lin = 70;
    s1.pro = 80;
    printf("점수 출력 : %5d%5d%5d\n",s1.mic,s1.lin,s1.pro);
    return 0;
}