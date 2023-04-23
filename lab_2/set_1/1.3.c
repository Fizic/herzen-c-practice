#include <stdio.h>
#include <stdlib.h>

int main() {
    double *a, *b;
    a = (double *) malloc(sizeof(double*));
    b = (double *) malloc(sizeof(double*));
    scanf("%lf %lf", a, b);
    if (*a > *b){
        printf("'a' is bigger than 'b', 'a' value is: %lf", *a);
    }else{
        printf("'b' is bigger than 'a', 'b' value is: %lf", *b);
    }
    free(a);
    free(b);
}
