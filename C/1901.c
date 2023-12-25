#include <stdio.h>
void f(int n){
  if(n==0) return;
  else{
    f(n-1);
    printf("ed\n",n);
  }
}

int main(){
  int n;
  scanf("%d",&n);
  f(n);
  return 0;
}
