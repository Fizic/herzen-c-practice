#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"

int main(void) {
    int an, am, bn, bm;
    scanf("%d %d %d %d", &an, &am, &bn, &bm);
    int **a = allocate_matrix(an, am);
    int **b = allocate_matrix(bn, bm);
    for (int i = 0; i < an; i++) {
        for (int j = 0; j < am; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < bn; i++) {
        for (int j = 0; j < bm; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    int **c = multiply_matrix(a, an, am, b, bn, bm);
    print_matrix(c, an, bm);
    free(a);
    free(b);
    free(c);
    return EXIT_SUCCESS;
}