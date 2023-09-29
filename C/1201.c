#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	if(n<0) printf("음수");
	else if(n>0) printf("양수");
	else printf("0");
	
	return 0;
