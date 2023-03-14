#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld", &n);
    long long a[n];
    for (int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < n / 2; i++){
        long long tmp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = tmp;
    }

    for (int i = 0; i < n; i++){
        printf("%lld ", a[i]);
    }
    return EXIT_SUCCESS;
}
