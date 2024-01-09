#include <stdio.h>
int n;
void f(int n){
  printf("%s\n",n%2==0?"even":"odd");
}

int main(){
  scanf("%d",&n);
  f(n);
  return 0;
}
