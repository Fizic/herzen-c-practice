#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LEN 5

int main() {
    double a[ARRAY_LEN] = {1, 2, 3, 4, 5};
    for(int i = 0; i < ARRAY_LEN; i++){
        printf("%lf ", *(a + i));
    }
    return EXIT_SUCCESS;
}
