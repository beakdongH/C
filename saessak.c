// 함수를 활용해 node 동적으로 생성하기
#include<stdio.h>
#include<stdlib.h>
typedef int element;\
typedef struct Node{
	element data;
	struct Node *next;
}Node;
//Node 구조체 정의

Node *createNode( element data );
void printAll( Node *ptr );

int main(){
    Node *head, *node1,*node2, *node3 ;
	  node1 = createNode(12);//heard, node1, node2 노드 생성
	  node1 = createNode(99);
		node1 = createNode(37);
		node1 -> next = node2;
		node2 -> next = node3;
		node3 -> next = NULL; //각 노드->next를 저장
	  head = node1;//60
		printAll(head);//head 노드를 출력
   
}
Node *createNode( element data){
  Node* new;
	new = (Node*)malloc(sizeof(Node));
	new -> data = data;
	new -> next = NULL;
	return new;
}
void printAll( Node* ptr ){
    while( ptr ){
				if (ptr->next){//next 노드가 있으면 ->출력
					printf("%d",ptr->data);//노드의 데이터 출력 
					ptr = ptr -> next;//다음노드의 주소로 저장
			
				}
			  else {
					printf("%d",ptr->data);//노드의 데이터 출력
					return;//프린트 종료
				}
    }
}


////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct Node{
	element data;
	struct Node *next;
}Node;
typedef struct{
	Node* top;
}SList;
void init(Node* top){
	 top->NULL;
}
int isEmpty(Node* top){
	return top->next==NULL;
}

void push(Node* top, element data){
	Node* node = {Node*}malloc(sizeof(Node));//동적할당
	node->data = data;
	node->next = top -> next;
	top->next  = node;
	//printf("top =%p %d\n",top,top->data);
	//
}
void pop(Node* top){
	element data;
	Node* temp;
	if (isEmpty(top->next)){
		printf("Stack is Empty\n");
		return ;
	}
	else{
		top->next = (top->next)->next; //삭제된 후 다음 노드로 저장
	}
}
void printList(Node* top){
	Node* p = top->next;//top->next
	
	while(p!=NULL){
		printf("%d->",p->data);
		p = p->next;//다음 노드로 이동
	}
	printf("NULL\n");
}
int main() {
	Node top ;
	init(&top);
	push(&top,1); printList(&top);
	push(&top,2); printList(&top);
	push(&top,3); printList(&top);
	pop(&top); printList(&top);
	pop(&top); printList(&top);
	pop(&top); printList(&top);
	pop(&top); printList(&top);
	return 0;
}



