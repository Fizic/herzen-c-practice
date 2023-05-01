#include <stdlib.h>

#ifndef MATRIX_H
#define MATRIX_H

int **allocate_matrix(int n, int m);
int *allocate_array(int n);
int **multiply_matrix(int **a, int an, int am, int **b, int bn, int bm);
void print_matrix(int **a, int n, int m);

#endif //MATRIX_H
