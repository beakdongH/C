#include<stdio.h>

int main(void){
	int a,b,r;
	scanf("%d %d",&a,&b);
	int p1,m1,m2,s1,d1,d2,j1,j2;
	p1 = a+b; 
	m1 = a-b; m2 = b-a;
	s1 = a*b; 
	d1 = a/b; d2 = b/a;
	j1=pow(a,b); j2=pow(b,a);	
	
	if(m1>p1) r=m1;
	if(m2>r) r=m2;
	if(s1>r) r=s1;
	if(d1>r) r=d1;
	if(d2>r) r=d2;
	if(j1>r) r=j1;
	if(j2>r) r=j2;
	printf("%lf",r);
	
	
	return 0;
}
