#include<stdio.h>

int main(void){
    int a[3]={10,20,30};
    int *p;
    p=a;
    for(int i=0;i<3;i++){
        printf("%d %d %d\n",*(p+i),*&p[i],p[i]);
    
    }
    printf("=================");
    for(int j=0;j<3;j++){
        printf("%d %d %d\n",*(a+j),*&a[j],a[j]);
    }
    
    return 0;
}