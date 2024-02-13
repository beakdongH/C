#include<stdio.h>

int main(void){
    int n;
    int arr[101];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d %d %d",arr[0],arr[n/2],arr[n-1]);

    return 0;
}