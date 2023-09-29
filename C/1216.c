#include<stdio.h>

int main(void){
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	d=a+c;
	if(d>b) printf("do not advertise");
	else if(d<b) printf("advertise");
	else printf("does not matter");
		
    return 0;
	
}
