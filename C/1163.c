#include<stdio.h>

int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int result = a+b+c;
	result%=1000;
	result/=100; 
	if(result%2){
		printf("그럭저럭");
	}
	else printf("대박");
	return 0;
}

