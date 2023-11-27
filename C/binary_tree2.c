#include<stdio.h>


typedef struct TNode{
	char data;
	struct TNode *left, *right;
	
} TNode;

void preorder( char t[], int i, int size ){
	if(i<size && t[i] != '\0'){
		printf("%c ",t[i]);	//데이타 추ㄹ력
		preorder(t,2*i,size);	//왼쪽부름
		preorder(t,(2*i)+1,size);	//오른쪽 부름
	}	
}
void inorder( char t[], int i, int size ){
	if(i<size && t[i] != '\0'){
		inorder(t,2*i,size); //왼쪽부름
		printf("%c ",t[i]); //출력
		inorder(t,(2*i)+1,size); //올느
	}
}
void postorder( char *t, int i, int size ){
	if(i<size && t[i] != '\0'){
		postorder(t,2*i,size); //왼
		postorder(t,(2*i)+1,size); //오
		printf("%c ",t[i]); //출
	}
}
int main(){
	char tree[]= {'\0','A','B','C','D','E','F','G','\0','\0','H','I','\0','J','K','L'}; //배열입력
	int size=16; //크기입력
	printf("\n<<전위 탐색>>\n");
	preorder( tree, 1, size );
	printf("\n<<중위 탐색>>\n");
	inorder( tree, 1, size );
	printf("\n<<후위 탐색>>\n");
  postorder( tree, 1, size );
	
}
