#include <stdio.h>

int n,sum =0;
int f(int a){
  if(a < 1) return;
  sum t= a;
  f(a-1);
}

int main(){
  scanf ("%d",&n);
  f(n);
  printf("%d",sum) ;
  return 0;
}
