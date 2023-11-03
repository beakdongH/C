#include <stdio.h>
int main() {
	char a[101], b[101], p=0;
	int i;
	gets(a);
	for(i=0; a[i]!='\0';i++){
		if(a[i] != ' '){
			if(a[i]>='A' && a[i]<='Z') b[p++]=(a[i]+32);
			else b[p++]=a[i];
		}
	}
	b[p]='\0';
	
	printf("%s",b);
	
	return 0;
}
