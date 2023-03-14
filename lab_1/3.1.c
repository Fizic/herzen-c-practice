#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld", &n);
    long long vector[n];
    for (int i = 0; i < n; i++){
        scanf("%lld", &vector[i]);
    }
    for (int i = 0; i < n; i++){
        printf("%lld ", vector[i] * vector[i]);
    }

    return EXIT_SUCCESS;
}
