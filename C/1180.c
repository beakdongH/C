#include<stdio.h>

int main(void){
	int n,a,b;
	scanf("%d",&n);
	a = n/10; //10의자리  
    b = n%10; //1의자리 

	int plus = (b*10+a)*2;
	if(plus>100) plus-=100;
	printf("%d\n",plus);
	if(plus<=50) printf("GOOD");
	else printf("OH MY GOD");
	
	
	return 0;
}
