#include<stdio.h>

int main(void){
	int a,b,cnt=0;
	scanf("%d %d",&a,&b);
	
	for(int i=a;i<=b;i++){
		if(i%3==0) cnt+=i;
	}
	printf("%d",cnt);
	return 0;
}

