#include<stdio.h>

int main(void){
	double a,b;
	scanf("%lf%lf",&a,&b);
	
	double weight=(b-((a-100)*0.9))*100/((a-100)*0.9);
	
	if(weight<=10)printf("����");
	else if(weight<=20) printf("��ü��");
	else printf("��");
	
	
	return 0;
}

