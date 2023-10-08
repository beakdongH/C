#include <stdio.h>

int fibonacci(int n) {
    int count0 = 0;
    int count1 = 0;
    
    if (n == 0) {
        printf("0");
        count0 += 1;
        return 0;
    }
    else if (n == 1) {
        printf("1");
        count1 += 1;
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }

}
 
int main(void) {
	
    fibonacci(5);

	return 0;
}
