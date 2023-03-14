#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n, m;
    scanf("%lld %lld", &n, &m);
    double a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%lf", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        double row_sum = 0;
        for (int j = 0; j < m; j++){
            row_sum += a[i][j];
        }
        a[i][0] = row_sum / m;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%lf ", a[i][j]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
