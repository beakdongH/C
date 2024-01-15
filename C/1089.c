#include<stdio.h>
 
int main(){
    
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    for(int i=1; i <c; i++){
        
        a+=b; 
        
    }
    printf("%d",a);
    
    return 0;
}
