#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 10
typedef int element;
typedef struct{
	int top;
	element data[STACK_SIZE];

}Stack;

//Stack ����ü ����
int isFull( Stack *s );
int isEmpty( Stack *s );
void Push( Stack *s, element data );
int Pop( Stack *s );
void initStack(Stack* s );

int main(){
	int menu;
	element data ;
	Stack s;
	initStack( &s );
	do{
		printf("1:push, 2:pop, 0:exit : ");
		scanf("%d", &menu);
		switch( menu ){
			case 1 :
				printf("������ �Է� : ");
				scanf("%d",&data);
				Push(&s,data);
				break;
			case 2 :
        data = Pop(&s);//���ÿ��� ���
        if( data )
				  printf("pop ������ : %d\n", data);
				break;
      case 0 :
        break;
			default :
				printf("�߸��� �Է� �Դϴ�. \n");
				break;
		}
	}while( menu );
}

void initStack( Stack *s ){  // top �����͸� -1�� �ʱ�ȭ
	s->top=-1;
}
int isFull( Stack *s ){   // ������ ���� �� ������ true ����
	return s->top == STACK_SIZE-1;
}
int isEmpty( Stack *s ){   // ������ ��� ������ true ����
	return s->top == -1;
	

}
void Push( Stack *s, element data ){ //������ ���� �� ������ ���� ��� �� ����, �ƴϸ� push
	if(isFull(s)){
		printf("���ò�\n");
		return;
	}
	s->data[++s->top] =data;
	
	
}
element Pop( Stack *s ){  //������ ���  ������ ���� ��� �� 0 ����, �ƴϸ� �� �� ������ ����
	if(isEmpty(s)){
		printf("����X\n");
		return 0;
	}
	return s->data[s->top--];
	
	
	
}
