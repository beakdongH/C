#include<stdio.h>

typedef enum subject_code{
    Linux = 3,
    Micro = 5,
    Project = 8
} Code;


int main(void) {
    Code emb;
    int n;
    scanf("%d",&n);
    emb = n;
    switch (emb) {
    case 3:
        printf("Linux\n");
        break;
    case 5:
        printf("Micro\n");
        break;
    case 8:
        printf("Project\n");
        break;
    
    default:
        break;
    }
    return 0;
}