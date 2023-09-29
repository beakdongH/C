#include <stdio.h>

int main(){
	int a,class1,class2,time;
	scanf("%d %d %d",&time,&class1,&class2);
	for(a=time; a<90; a+=5){
		class1++;
	}
	if(class1>class2) printf("win");
	else if(class1<class2) printf("lose");
	else if(class1==class2) printf("same");
        
    return 0;
	
}
