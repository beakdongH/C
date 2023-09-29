int main(void){
	int a,b,c,tmp;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		tmp = a;
		a=b;
		b=tmp;
	}
	if(b>c){
		tmp = b;
		b=c;
		c=tmp;
	}
	if(a>b){
		tmp = a;
		a=b;
		b=tmp;
	}
	printf("%d %d %d",a,b,c);
	
	
	return 0;
}
