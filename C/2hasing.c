#include<stdio.h>
int i,k,n=8;

int doublehash(int key){
	if(key>20) return 4;
	else return 5;
}

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
			index = (hash(key)+doublehash(key)*k)%n;
		}
		
	}	
	printf("%d",index);

	return 0;
}
