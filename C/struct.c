#include<stdio.h>
#include<stdlib.h>
#define MAX_PERSON 3
#define MAX_SIZE 10

typedef struct Person{
	char name[MAX_SIZE];
	int age;
} Person;

void inputData(Person *p);
void outputData(Person *p);

int main(void){
	Person* p[MAX_SIZE];
	for(int i=0; i<MAX_PERSON; i++){
		p[i] = malloc(sizeof(Person));

	}
	for(int i=0; i<MAX_PERSON; i++){
		inputData(p[i]);

	}
	for(int i=0; i<MAX_PERSON; i++){
		outputData(p[i]);
	}
	for(int i=0; i<MAX_PERSON; i++){
		free(p[i]);
	}
	return 0;
}

void inputData(Person *p){
	scanf("%s %d",p->name, &(p->age));
}

void outputData(Person *p){
	printf("%s, %d\n",p->name, p->age);
}
