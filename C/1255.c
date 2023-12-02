#include<stdio.h>

int main(void){
	double a,b;
	scanf("%lf %lf",&a,&b);
	
	for(double i=a;i<=b;i+=0.01){
		printf("%.2f ",i);
	}
	
	return 0;
}

