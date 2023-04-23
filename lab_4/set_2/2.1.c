#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MY_SIZE 20

int main() {
    char str[MY_SIZE];
    scanf("%s", str);
    // 1
    int len = 0;
    for (len = 0; len < MY_SIZE; len++) {
        if (str[len] == '\0') break;
    }
    printf("%d\n", len);
    // 2
    char *strPointer = str;
    len = 0;
    for (; (*strPointer) != '\0'; strPointer++) {
        len++;
    }
    printf("%d\n", len);
    // 3
    printf("%zu\n", strlen(str));
    // 4
    char copyStr[MY_SIZE];
    strcpy(copyStr, str);
    // 5
    char str1[MY_SIZE] = "Hello ";
    char str2[MY_SIZE] = "World!";
    strcat(str1, str2);
    // 6
    if (strcmp(str1, str2) == 0) {
        printf("str1 identical str2");
    }
    // 7
    char str3[MY_SIZE] = "HeLlO WoRlD!";
    for (int i = 0; i < MY_SIZE; i++) {
        if (str3[i] == '\0') break;
        str3[i] = (char) tolower(str3[i]);
    }
    printf("%s\n", str3);
    for (int i = 0; i < MY_SIZE; i++) {
        if (str3[i] == '\0') break;
        str3[i] = (char) toupper(str3[i]);
    }
    printf("%s\n", str3);
    return EXIT_SUCCESS;
}
