#include<stdio.h>

int b[9];			
int main(void){     
	char a[101];
	int i,max=-1,index;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++){
		b[a[i]-'0']++;
	}
	for(i=0;i<10;i++){
		if(b[i]>=max){
			max = b[i];
			index= i;
		
		}
	}	
	printf("%d",index);
	return 0;
}
