#include<stdio.h>

int main(void){
	int h,m;
	scanf("%d %d",&h,&m);
	if(m<30){
		h--;
		if(h==-1) printf("%d %d",23,m+30);
		else printf("%d %d",h,m+30);
	}
	else {
		
		printf("%d %d",h,m-30);
		
	}

	return 0;
}
