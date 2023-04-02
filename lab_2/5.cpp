#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld", &n);
    long long *arr = (long long *) malloc(sizeof(long long*) * n);
    for(int i = 0; i < n; i++) scanf("%lld", &arr[i]);
    for(int i = n - 1; i > -1; --i) printf("%lld ", *(arr + i));
}
