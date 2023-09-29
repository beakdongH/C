#include<stdio.h>

int main(void){
	int a,b,c,d,e,f,g;
	scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
	int lotto1,lotto2,lotto3,lotto4,lotto5,lotto6;
	scanf("%d %d %d %d %d %d",&lotto1,&lotto2,&lotto3,&lotto4,&lotto5,&lotto6);
	int score=0;
	if(a==lotto1 || b==lotto1 || c==lotto1 || d==lotto1 || e==lotto1 || f==lotto1) score++;
	if(a==lotto2 || b==lotto2 || c==lotto2 || d==lotto2 || e==lotto2 || f==lotto2) score++;
	if(a==lotto3 || b==lotto3 || c==lotto3 || d==lotto3 || e==lotto3 || f==lotto3) score++;
	if(a==lotto4 || b==lotto4 || c==lotto4 || d==lotto4 || e==lotto4 || f==lotto4) score++;
	if(a==lotto5 || b==lotto5 || c==lotto5 || d==lotto5 || e==lotto5 || f==lotto5) score++;
	if(a==lotto6 || b==lotto6 || c==lotto6 || d==lotto6 || e==lotto6 || f==lotto6) score++;
	
	if(score==6) printf("1"); 
	else if((g==lotto1 || g==lotto2 || g==lotto3 || g==lotto4 || g==lotto5 || g==lotto6) && score==5) printf("2");
	else if(score==5) printf("3");
	else if(score==4) printf("4"); 
	else if(score==3) printf("5");
	else printf("0");
	
	return 0;
}

