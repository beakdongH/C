#include<stdio.h>

int main(void){
	double a,b;
	scanf("%lf%lf",&a,&b);
	
	double weight=(b-((a-100)*0.9))*100/((a-100)*0.9);
	
	if(weight<=10)printf("정상");
	else if(weight<=20) printf("과체중");
	else printf("비만");
	
	
	return 0;
}

