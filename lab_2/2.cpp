#include <stdio.h>
#include <stdlib.h>

int main() {
    double *a, *b;
    a = (double *) malloc(sizeof(double*));
    b = (double *) malloc(sizeof(double*));
    scanf("%lf %lf", a, b);
    printf("sum is: %lf", *a + *b);
    free(a);
    free(b);
}
