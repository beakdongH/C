#include<stdio.h>

int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a+b>c && a+c>b && b+c>a) printf("�ﰢ���ƴ�")
	else if(a==b && b==c) printf("���ﰢ��");
	else if(a==b || b==c || b==c) printf("�̵�ﰢ��");
	else if(a*a + b*b == c*c) printf("�����ﰢ��");
	else printf("�ﰢ��");
		
	
	
	return 0;
}
