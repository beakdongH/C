#include <stdio.h>

int main(){
    int a,b,c,d;
    char q;
    scanf("%2d%2d%2d-%1d",&a,&b,&c,&d);
    if(d==1||d==3){
        q='M';
        if(d==3) a+=2000;
        else a+=1900;
    }
    else{
        q='F';
        if(d==4) a+=2000;
        else a+=1900;
    }
    printf("%d/%02d/%02d %c",a,b,c,q);
    return 0;
}


