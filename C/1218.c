#include<stdio.h>

int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a+b>c && a+c>b && b+c>a) printf("»ï°¢Çü¾Æ´Ô")
	else if(a==b && b==c) printf("Á¤»ï°¢Çü");
	else if(a==b || b==c || b==c) printf("ÀÌµîº¯»ï°¢Çü");
	else if(a*a + b*b == c*c) printf("Á÷°¢»ï°¢Çü");
	else printf("»ï°¢Çü");
		
	
	
	return 0;
}
