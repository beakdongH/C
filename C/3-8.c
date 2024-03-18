#include<stdio.h>

int main(void){
    int a[3]={10,20,30};
    printf("%p %p %p\n",a,a+0,&a[0]);
    printf("%p %p\n",a+1,&a[1]);
    printf("%p %p\n",a+2,&a[2]);
    printf("%ld %ld %ld\n",sizeof(a),sizeof(a+0),sizeof(&a[0]));
    return 0;
}

