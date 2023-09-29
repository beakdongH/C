#include <stdio.h>

int main(){
    int age;
    scanf("%d",&age);
    if(age>=14 && age<=113){
        printf("%d ",(2012-age+1)%100);
        printf("1");
    }
    else{
        printf("%d ",(2012-age+1)%100);
        printf("3");
    }
	
    return 0;
}
