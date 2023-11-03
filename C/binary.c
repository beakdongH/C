#include <stdio.h>
void f(int n){
	if(n<2){
		printf("%d",n); return;
	}
	f(n/2);
	printf("%d",n%2);
}
int main() {
  int n;
	scanf("%d",&n);
	f(n);
	return 0;
}
