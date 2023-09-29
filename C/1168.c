#include<stdio.h>

int main(void){
	int ymd,gender;
	scanf("%06d %d",&ymd,&gender);
	ymd/=10000; //1만을 나누면 앞 두자리만 남음
	if(gender==1||gender==2){
		printf("%d",113-ymd);
	}
	else{
		printf("%d",13-ymd);
	}
	

	return 0;
}
