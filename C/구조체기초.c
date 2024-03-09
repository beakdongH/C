#include<stdio.h>
#include<stdlib.h>
typedef int element;
typedef struct element{
	element data;
	struct Node *next;
}Node;
//1)Node 구조체를 전역에 정의
int main(){
	 Node *n1, *n2 ,*n3, *head;
    n1 = (Node*)malloc(sizeof(Node));//Node구조체 n1 동적할당
    n2 = (Node*)malloc(sizeof(Node));//Node구조체 n2 동적할당
		n3 = (Node*)malloc(sizeof(Node));//Node구조체 n3 동적할당
    n1->data = 10;//2) n1의 데이터에 10을 저장
    n1->next = n2;
		n1->next = n2;//3) n1의 다음 노드 주소 next에 n2를 저장
		n2->data = 20;//4) n2의 데이터에 20을 저장
		n2->next = n3;//5)n2의 다음 노드 주소 next에 n3 저장
		n3->data = 30;//6) n3의 데이터에 30을 저장
		n3->next = NULL;//7) n3의 다음 노드 주소 next에 NULL 저장
  	
		
    head = n1;//8)n1의 주소 저장(참조)
    while( head ){
        printf("%8X %d->",head, head->data);
       //9) head에 다음 노드 주소 저장
			  
    }
}
