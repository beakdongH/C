#include<stdio.h>

int main(void){
	int ymd,gender;
	scanf("%06d %d",&ymd,&gender);
	ymd/=10000; //1���� ������ �� ���ڸ��� ����
	if(gender==1||gender==2){
		printf("%d",113-ymd);
	}
	else{
		printf("%d",13-ymd);
	}
	

	return 0;
}
