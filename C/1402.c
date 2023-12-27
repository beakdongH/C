#include<stdio.h>
 
 
int main(){
    
    int num;
    int buf[1000] = {};
    scanf("%d",&num);
    
    for(int i =0; i<num; i++){
        scanf("%d", &buf[i]);
    }
  
    for(int j = num-1; j >= 0; j--){
        printf("%d ",buf[j]);
    }
 
    
    return 0;
}
