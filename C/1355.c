
#include<stdio.h>
 
 
int main(){
 
    int num;
    scanf("%d", &num);
    
    for(int i = 1; i<= num; i++){
        
        for(int k = 1; k <i; k++){
            printf(" ");
        }
        for(int j = i; j <=num; j++){
            printf("*");
        }
        printf("\n");
    }
 
    return 0;
}
