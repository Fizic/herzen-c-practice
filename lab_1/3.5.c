#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld", &n);
    long long a[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && a[j - 1] > a[j]; j--) {
            long long tmp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = tmp;
        }
    }

    for (int i = 0; i < n; i++){
        printf("%lld ", a[i]);
    }
    return EXIT_SUCCESS;
}
