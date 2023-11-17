#include<stdio.h>
#include<stdbool.h>

int reverse(int x){
	int temp=0;
	while(x){
		temp = temp*10+x%10;
		x/=10;
	}
	return temp;
	
}

bool isPrime(int x){
	int i;
	if (x==1) return false;
	for(i=2;i<x;i++){
		if(x%i==0) return false;
	}
	return true;
	
}

int main(void){
	int n,data,i,result;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&data);
		result = reverse(data);
		if(isPrime(result)) printf("%d ",result);
	}	
	
	return 0;
}
