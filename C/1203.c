#include<stdio.h>

int main(void){
	int s;
	scanf("%d",&s);
	if(s<=10) printf("정상");
	else if(s<=20) printf("과체중");

	else printf("비만");
	
	return 0;
}
