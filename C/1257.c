#include<stdio.h>

int main(void){
	int a,b;
	scanf("%d %d",&a,&b);
	
	for(int i=a;i<=b;i++){
		if(i%2!=0) printf("%d ",i);
	}
	
	return 0;
}

