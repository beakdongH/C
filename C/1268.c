#include<stdio.h>

int main(void){
	int a,b,cnt=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		scanf("%d",&b);
		if(b%2!=0){
			cnt++;	
		}
		
	}
	printf("%d",cnt);
	return 0;
}
