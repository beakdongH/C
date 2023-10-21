#include<stdio.h>
int i,k,n=8;
int hash(int key){
	return key%n;
	
}

int main(void){
	int key;
	int list[8]={0,0,10,3,2,5,0,0};
	scanf("%d",&key);
	int index = hash(key);
	while(1){
		if(list[index]==0){
			list[index]=key;
			break;
		}
		else{
			k++;
			index = (hash(key)+k*k)%n;
		}
		
	}	
	printf("%d",index);
	
	return 0;
}
