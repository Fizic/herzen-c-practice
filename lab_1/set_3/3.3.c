#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n, m;
    scanf("%lld %lld", &n, &m);
    long long a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%lld", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            long long tmp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = tmp;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
