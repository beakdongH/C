#include <stdio.h>

int main(){
	int a,b;
	scanf("%d", &n);
	int arr[51];
	
	for(int i=1; i<n; i++) {
		scanf("%d", &m);
		arr[m]=1;
	}
	
	for(int i=1; i<=n; i++) {
		if(arr[i]!=1) printf("%d", i);
	}
	
	return 0;
}
