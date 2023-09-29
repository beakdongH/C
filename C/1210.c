#include<stdio.h>

int main(void){
	int a,b,a1,b1;
	scanf("%d %d",&a,&b);
	if(a==1) a1=400;
	else if (a==2) a1=340;
	else if (a==3) a1=170;
	else if (a==4) a1=100;
	else if (a==5) a1=70;
	
	if(b==1) b1=400;
	else if (b==2) b1=340;
	else if (b==3) b1=170;
	else if (b==4) b1=100;
	else if (b==5) b1=70;

	if(a1+b1>500) printf("angry");
	else printf("no angry");
	
	return 0;
}
