#include<stdio.h>
typedef struct Test1{
    char ch;
    int num;
    short sh;
}Test1;

typedef struct Test2{
    char ch;
    short sh;
    int num;
}Test2;

int main(void){
    Test1 t1;
    Test2 t2;
    printf("%ld\n",sizeof(t1));
    printf("%ld\n",sizeof(t2));   
    return 0;
}
