#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MY_SIZE 20

int main() {
    char str[MY_SIZE] = "He11o W0r1d!";
    for (int i = 0; i < MY_SIZE; i++) {
        if (str[i] == '\0') break;

        if (isdigit(str[i])) {
            printf("%d character is a number\n", i);
        } else if (ispunct(str[i])) {
            printf("%d character is a punctuation mark\n", i);
        } else if (isalpha(str[i])) {
            if (islower(str[i])) {
                printf("%d character is a lowercase letter of the alphabet\n", i);
            } else {
                printf("%d character is a capital letter of the alphabet\n", i);
            }
        } else if (isspace(str[i])) {
            printf("%d character is a space\n", i);
        } else {
            printf("%d character is a unknown symbol\n", i);
        }
    }
    return EXIT_SUCCESS;
}
