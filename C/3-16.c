#include <stdio.h>

typedef struct student {
  int num;
  char name[20];
  int mic, lin, pro;
  int tot;
  double avg;
  char grade;
} Student;

void input_data(Student *parry) {
  for (int i=0; i<4;i++) {
    scanf("%d",&parry[i].num);
    scanf("%s",parry[i].name);
    scanf("%d",&parry[i].mic);
    scanf("%d",&parry[i].lin);
    scanf("%d",&parry[i].pro);
  }
}

void calc_data(Student *parry) {
  for (int i = 0; i < 4; i++) {
    parry[i].tot=parry[i].mic+parry[i].lin+parry[i].pro; 
    parry[i].avg= (double)parry[i].tot/3; 

    if (parry[i].avg>=90) {
      parry[i].grade='A';
    } 
    else if (parry[i].avg>=80) {
      parry[i].grade='B';
    } 
    else if (parry[i].avg>=70) {
      parry[i].grade='C';
    } 

    else {
      parry[i].grade='F';
    }
  }
}

void print_data(Student *parry) {
  for (int i =0;i<4;i++) {
    printf("%5d, %10s, %5d, %5d, %5d, %5d, %5.1f, %5c\n", 
    parry[i].num,parry[i].name, parry[i].mic, parry[i].lin, parry[i].pro, parry[i].tot, parry[i].avg,parry[i].grade);}
}

int main(void) {
  Student ary[5];
  input_data(ary);
  calc_data(ary);
  printf("결과값?\n");
  print_data(ary);
  return 0;
}

