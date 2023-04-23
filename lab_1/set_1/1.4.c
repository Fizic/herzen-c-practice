#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define a 0.12
#define b 3.5
#define c 2.4

int main() {
    printf("Enter function argument:");
    double x;
    scanf("%lg", &x);
    double h = -(x - a) / powl(x * x + a * a, 1.0/3) - (4 * powl(x * x + b * b, 3.0/4) / (2 + a + b + powl(powl(x - c, 2.0), 1/3)));
    printf("The value of function %lg", h);
    return EXIT_SUCCESS;
}
