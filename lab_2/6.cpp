#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 1234567890;
    unsigned char *b = (unsigned char *) (&a);
    // an int has 4 bytes, so loop to 4
    for (int i = 0; i < 4; i++){
        printf("%d\n", *(b + i));
    }
    return EXIT_SUCCESS;
}
