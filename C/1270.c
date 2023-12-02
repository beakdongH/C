#include<stdio.h>

int main(void){
	int a,cnt=0;
	scanf("%d",&a);
	for(int i=0;i<=a;i++){
		if(i%10==1){
			cnt++;		
		}
	}
	printf("%d",cnt);
	return 0;
}
