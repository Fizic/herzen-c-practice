#include <stdio.h>
#include <stdlib.h>

int main() {
    long long sum_of_digits;
    do {
        long long num;
        scanf("%lld", &num);
        sum_of_digits = (num / 100) % 10 + (num / 10) % 10 + num % 10;
    } while(sum_of_digits > 10);
    return EXIT_SUCCESS;
}
