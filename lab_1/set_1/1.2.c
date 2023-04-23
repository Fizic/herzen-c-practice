#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter two numbers:");
    double a, b;
    scanf("%lg %lg", &a, &b);
    printf("The sum is %lg", a + b);
    return EXIT_SUCCESS;
}
