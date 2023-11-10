#include <stdio.h>
int main() {
	int a[65];
	int n,i,key,flag=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	scanf("%d",&key);
	if(a[0]<a[1]) flag=1;
	for(i=2;i<n;i++){
		if(flag=1 && a[i-1]>a[i]){
			printf("불가능");
			return 0;
				
		}
		else if(flag==0 && a[i-1]<a[i]){
			printf("불가능");
			return 0;
		}
	}
	
	return 0;
}
