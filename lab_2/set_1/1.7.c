#include <stdio.h>
#include <stdlib.h>

int **allocate_matrix(long long n, long long m) {
    void *ptr = malloc(n * sizeof(int *) + n * m * sizeof(int));
    int **a = (int **) ptr;
    int *aData = (int *) (a + n);

    for(int i = 0; i < n; i++){
        a[i] = aData + i * m;
    }

    return a;
}

int main() {
    long long n, m;
    scanf("%lld %lld", &n, &m);
    int **arr = allocate_matrix(n, m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = i + j;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    free(arr);
    return EXIT_SUCCESS;
}
