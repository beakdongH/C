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
