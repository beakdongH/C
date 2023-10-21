#include<stdio.h>

int main(void){
	
	int list[]={5,4,8,1,2,7};
	int index,temp,i,j,size,key;
	size = sizeof(list)/sizeof(int);
	for(i=0;i<=size-1;i++){
		key=list[i];
		for(j=i-1; j>=0 && key<list[j]; j--) 
		{
		}list[j+1] = list[j];
			
		list[j+1] = key;
	}
	for(i=0;i<size;i++){
		printf("%d ",list[i]);
	}
	return 0;
}
