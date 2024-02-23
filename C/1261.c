#include <stdio.h>

int main() {
    int arr[10],stop=0;
    for(int i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=9;i++){
        if(arr[i]%5==0){
            printf("%d",arr[i]);
            stop++;
            break;
        } 
    }
    if(stop==0) printf("0");
}
