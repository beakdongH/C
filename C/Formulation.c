#include <stdio.h>
int main() {
	int a=0,b=0;
	scanf("%d %d",&a,&b);
	int count=0;
	for(int i=1;i<=a;i++){
		if(i%b==0) count+=i;
		
	}
	printf("%d",count);
	return 0;
}
