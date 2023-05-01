#include <stdlib.h>
#include <stdio.h>

int **allocate_matrix(int n, int m) {
    void *ptr = malloc(n * sizeof(int *) + n * m * sizeof(int));
    int **a = (int **) ptr;
    int *aData = (int *) (a + n);

    for (int i = 0; i < n; i++) {
        a[i] = aData + i * m;
    }

    return a;
}

int *allocate_array(int n) {
    int *a = (int *) malloc(n * sizeof(int));
    return a;
}

int **multiply_matrix(int **a, int an, int am, int **b, int bn, int bm) {
    if (am != bn){
        exit(0);
    }
    int **ans = allocate_matrix(an, bm);
    for(int i = 0; i < an; i++){
        for(int j = 0; j < bm; j++){
            ans[i][j] = 0;
            for(int z = 0; z < am; z++){
                ans[i][j] += a[i][z] * b[z][j];
            }
        }
    }
    return ans;
}

void print_matrix(int **a, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}