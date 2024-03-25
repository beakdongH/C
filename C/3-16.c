#include<stdio.h>

typedef struct student {
    int num;
    char name[20];
    int mic,lin,pro;
    int tot;
    double avg;
    char grade
}Student;

void input_data(Student *parry){
    int num=1;
    char name[20]="이순신";
    int mic,lin,pro = ;
    int tot;
    double avg;
    char grade    
}
void calct_data(Student *parry){
    if (parry->grade>=90) printf("A");
}
void print_data(Student *parry){}

int main(void){
    Student ary[5];
    input_data(ary);
    calct_data(ary);
    printf("결과는?\n");
    print_data(ary);


    return 0;
}