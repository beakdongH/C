#include <stdio.h>
#include <math.h>

int main(void) {
    int x1,x2,y1,y2,x,y;
    double sum;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    x = (x2-x1);
    y = (y2-y1);
    sum = (x*x+y*y);
    
    printf("%.2f",sqrt(sum));
    
}
