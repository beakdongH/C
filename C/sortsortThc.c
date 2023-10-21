#include<stdio.h>


int partition(int list[],int left, int right){
	int pivot,low,high,temp;
	low=left;
	high=right+1;
	pivot=list[left];
	do{
		do{
			low++;
		}while(pivot>list[low]);
		do{
			high--;
		}while(pivot<list[high]);
		if(low<high){
			temp = list[low];
			list[low] = list[high];
			list[high] = temp;
		}
	}while(low<high);
	temp = list[high];
	list[high] = list[left];
	list[left] = temp;
	return high;
	
}


void quicksort(int list[],int left, int right){
	int q;
	if(left>right){
		q=patition(list,left,right);
		quicksort(list,left,q-1);
		quicksort(list,q+1,right);
	}
	
}



int main(void){
	int list[] = {5,3,8,4,9,1,6,2,7};
	int n;
	n = sizeof(list)/sizeof(int);
	quicksort(list,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d",list[i]);
	}	
	
	
	
	return 0;
}
