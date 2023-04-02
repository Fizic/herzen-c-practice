#include <stdio.h>
#include <stdlib.h>

int main() {
    double **pointer = NULL;
    *(*(pointer = (double **) malloc(sizeof(double **))) = (double *) malloc(sizeof(double *))) = 2;
    printf("value is: %f", **pointer);
    free(*pointer);
    free(pointer);
    return EXIT_SUCCESS;
}
