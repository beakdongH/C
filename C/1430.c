#include <stdio.h>

int main() {
    int n,m,x,arr[10000001] ={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        arr[x]=1;
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&x);
        printf("%d ",arr[x]);
    }
    return 0;

}
