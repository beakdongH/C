# include <stdio.h>

int n,m =1;
int f(int a){
	if(a==1) return;
	m*=a;
	f(a-1);
}


int main(){
	scanf("%d",&n);
	f(n);
	printf("%d",m);
	return 0;
}
