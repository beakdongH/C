#include <stdio.h>
#include <string.h>

int main() {
    char input[101];
    char output[101];
    int i, j = 0;

    fgets(input, sizeof(input), stdin);

    for (i = 0; i < strlen(input); i++) {
        if (input[i] != ' ') {
            output[j] = input[i];
            j++;
        }
    }

    output[j] = '\0';

    printf("%s\n", output);

    return 0;
}
