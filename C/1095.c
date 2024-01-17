#include<stdio.h>
 
int main(void) {
 
    int arr[10000] = {0,};
    int num;
 
    scanf("%d", &num);
 
    for (int i = 0; i<num; i++) {
        scanf("%d", &arr[i]);
    }
    
    int tmp;
 
    for (int i=0; i <num; i++) {
        for (int j=0; j<num-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
 
    printf("%d", arr[0]);
 
 
    return 0;
}

