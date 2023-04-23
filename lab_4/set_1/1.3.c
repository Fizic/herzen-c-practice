#include <stdio.h>
#include <stdlib.h>

double **allocate_matrix(long long n, long long m) {
    void *ptr = malloc(n * sizeof(double *) + n * m * sizeof(double));
    double **a = (double **) ptr;
    double *aData = (double *) (a + n);

    for(int i = 0; i < n; i++){
        a[i] = aData + i * m;
    }

    return a;
}

void free_matrix(double **matrix) {
    free(matrix);
}

void fill_matrix(double **matrix, long long n, long long m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            matrix[i][j] = i * j;
        }
    }
}

void print_matrix(double **matrix, long long n, long long m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    long long n, m;
    scanf("%lld %lld", &n, &m);
    double **arr = allocate_matrix(n, m);
    fill_matrix(arr, n, m);
    print_matrix(arr, n, m);
    free_matrix(arr);
    return EXIT_SUCCESS;
}
