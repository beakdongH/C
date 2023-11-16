#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX_SIZE 10

typedef int element;
typedef struct{
	element data[MAX_SIZE];
	int top;
}Stack;

void initStack(Stack *s);
bool isFull(Stack *s);
bool isEmpty(Stack *s);
void push(Stack *s,element data);
element pop(Stack *s);
element peek(Stack *s);

int main(void){
	Stack* s = malloc(sizeof(Stack));
	element choice;
	int data;
	do{
		printf("1:push, 2:pop, 0:exit : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("데이터 입력 : ");
				scanf("%d",&data);
				push(s,data);
				break;
			case 2:
				if(isEmpty(s)){
					printf("stack is empty\n");
					break;
				}
				else {
					int lol = pop(s);
					printf("pop 데이터 : %d\n",lol);
				}
				break;
			case 0:
				break;
			default:
				printf("잘못된 입력 입니다.");
				break;
	 }
	}while(choice);
	
}


void initStack(Stack *s){
	s->top = -1;
}
bool isFull(Stack *s){
	return s->top == MAX_SIZE-1;
	
}
bool isEmpty(Stack *s){
	return s->top == -1;
}
void push(Stack *s,element data){
	if(isFull(s)){
		printf("stack is full");
		
	}
	s->data[++s->top];
}
element pop(Stack *s){
	return s->data[s->top--];
}
element peek(Stack *s){
	return s->data[s->top];
	
}
