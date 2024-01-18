#include <stdio.h>
 
int main(){
    
    int num, arr[10000];
    scanf("%d",&num);
 
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=num-1; i>=0; i--){
        
        printf("%d ", arr[i]);
    }
    return 0;
}
