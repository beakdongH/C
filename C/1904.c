# include <stdio.h>

int n,m;

int f(int a, int b){
	if(a>b) return;
	if(a %2 ! = 0) printf("%d ",a);	
	f(a+1, b);
}

int main(){
	scanf("%d %d", &n,&m);
	f(n,m);
	return 0;
}

