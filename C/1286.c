#include<stdio.h>

int main(void){
    int arr[4];
    scanf("%d",&arr[0]);
    int max=arr[0], min=arr[0];
    for(int i=1;i<=4;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=max) max = arr[i];
        if(arr[i]<=min) min = arr[i];

    }
    printf("%d\n%d",max,min);
    return 0;
}