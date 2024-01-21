#include<stdio.h>

int main() {
	char name[20];
	int age;
	char code;
	double key;

	scanf("%s\n", name);
	scanf("%d\n", &age);
	scanf("%c\n", &code);
	scanf("%lf", &key);

	printf("%s\n%d\n%c\n%g\n",name,age, code,key);
	return 0;
}
