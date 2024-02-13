#include<stdio.h>

int main(void){
    char arr[15];
    gets(arr);
    if(arr[0]=='l'&&arr[1]=='o'&&arr[2]=='v'&&arr[3]=='e'&&arr[4]=='\0') printf("I love you.");
    return 0;
}