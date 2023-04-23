#include <stdio.h>
#include <stdlib.h>

union SecretCode{
    unsigned int code;
    char value;
};

int main(){
    union SecretCode * sc = (union SecretCode*) malloc(sizeof(union SecretCode));
    sc->code = 130;
    printf("%c", sc->value);
    free(sc);
    return EXIT_SUCCESS;
}