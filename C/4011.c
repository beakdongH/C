#include <stdio.h>

int main(){
    int y,m,d,g;
    char q;
    scanf("%2d%2d%2d-%1d",&y,&m,&d,&g);
    printf("%d/%02d/%02d %c", (g==1)||(g==2)? y+1900 : y+2000, m, d, g%2==0 ?'F': 'M');
    
    return 0;
}




