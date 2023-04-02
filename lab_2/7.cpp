#include <stdio.h>
#include <stdlib.h>

#define idx(i, j) (i*m + j)

int main() {
    long long n, m;
    scanf("%lld %lld", n, m);
    int *arr = malloc(n * m * sizeof *arr);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[idx(i, j)] = i + j;
        }
    }

    free(arr);
    return EXIT_SUCCESS;
}
