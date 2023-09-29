#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);\
	int f=n%10;
	int t=n/10;
	printf("%d",n);
	if (t==1) printf("th");
	else if (f==1) printf("st");
	else if (f==2) printf("nd");
	else if (f==3) printf("rd");
	else printf("th");
	
	
	return 0;
}
