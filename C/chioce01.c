#include<stdio.h>

int main(void){
	
	int list[]={5,4,8,1,2,7};
	int index,temp,i,j,size;
	size = sizeof(list)/sizeof(int);
	for(i=0;i<=size-1;i++){
		index=i;
		for(j=i+1;j<size;j++) if(list[j]<list[index]) index = j;
		
		temp = list[index];
		list[index] = list[i];
		list[i] = temp;
	}
	for(i=0;i<size;i++){
		printf("%d ",list[i]);
	}
	return 0;
}
