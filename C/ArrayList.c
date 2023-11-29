#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100 //리스트의 최대크기
typedef int element;
//배열리스트 구조체타입 정의
typedef struct{
	element array[MAX];
	int size;
}ArrayList;

//오류 처리함수
void error(char *message){
	fprintf(stderr,"%s\n",message);//텍스트 출력
	exit(1);
}

//리스트 초기화 함수
void init(ArrayList* L){ //배열리스트 초기화
  L->size = 0; //초기화
}

//리스트가 비어있으면 1을 반환
//아니면 0을 반환
int isEmpty(ArrayList* L){
	return L->size==0;
	  
}

//리스트가 꽉차면 1을 반환
//아니면 MAX 반환
int isFull(ArrayList* L){
	 return L->size == MAX;
}

//pos에 있는거 반환
element getEntry(ArrayList* L, int pos){
 	if(pos<0||pos>=L->size){
		 error("pos error");	//위치가 리스트 범위를 벗어나면 발생하는 오류
	}
	return L->array[pos]; //pos위치에 있는 값(아마 item) 을 불러온다
		 
}

//리스트 출력
void printList(ArrayList* L){
	int i;
	for(i=0;i<L->size;i++) //얜 걍 출력
		printf("%d->",L->array[i]);
	printf("\n");
}

//리스트에 값을 마지막에 넣는 함수
void insertLast(ArrayList* L, element item){
	if(L->size >= MAX){
//만약 리스트가 꽉차면 오버플로우 발생->알림
		error("List overflow");
	}
	L->array[L->size++] = item; // L에서 가장 높은 위치에 item을 삽입
	
}

//pos위치에 item값을 삽입한다
void insert(ArrayList* L, int pos, element item){
	if(!isFull(L) && (pos>=0)&&(pos<=L->size)){ //L이 꽉차지 않고, 위치는 정상일때 실행
		for(int i=(L->size-1);i>=pos;i--) //array의 끝부터 오른쪽으로 모든 값 이동 이때 위치는 pos값 이상
			L->array[i+1] = L->array[i]; //pos+1의 오른쪽으로 한칸씩 이동
		L->array[pos] = item; //리스트의 pos위치에 item값을 추가한다
		L->size++;//크기 늘리기
	}
}

//pos위치의 item을 삭제시키는 함수
//array[pos]
element delete(ArrayList* L,int pos){
	element item;
	
	if(pos<0||pos>=L->size)
		error("pos error");	//위치가 리스트 범위를 벗어나면 발생하는 오류
	item = L->array[pos];  //item은 리스트 내의 pos위치
	for(int i=pos;i<(L->size-1);i++) //pos의 위치를 값들을 토대로 왼쪽으로 옮긴다
		L->array[i] = L->array[i+1]; //i로 부른값(pos)에 있는값을 앞과 동일시한다
	L->size--; //크기줄이기?
	return item;
}
int main(){
	ArrayList list;
	init(&list);
	insert(&list,0,10); printList(&list); //0번 위치(인덱스)에 10을 삽입, 출력
	insert(&list,1,20); printList(&list); //1번 위치(인덱스)에 20을 삽입, 출력
	insert(&list,2,30); printList(&list); //2번 위치(인덱스)에 30을 삽입, 출력
	insertLast(&list,40); printList(&list); //리스트의 마지막에 40을 삽입, 출력 
	insert(&list,2,100); printList(&list); //2번 위치(인덱스)에 100을 삽입
	//원래 위치에 있던 값과('30') 뒤의 위치에 있는 값('40') 을 오른쪽으로 옮기고 2번위치에 100을 삽입한다
	delete(&list,1); printList(&list); //1번 위치(인덱스)에 있는 값(20)을 삭제한다

	return 0;
}
