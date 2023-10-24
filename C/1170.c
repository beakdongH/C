#include<stdio.h>

int main(void){
	int g,c,n; //grade, class, number
	scanf("%d %d %d",&g,&c,&n);
	if(n<10){
		printf("%d%d0%d",g,c,n);
	}
	else{
		printf("%d%d%d",g,c,n);
	}

	return 0;
}

