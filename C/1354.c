#include<stdio.h>
 
int main(){
    int a;
    scanf("%d", &a);
    
    for(int i = 1; i<= a; i++){
        for(int j = i; j <=a; j++){
            printf("*");
        }
        printf("\n");
    }
 
   return 0;
}
