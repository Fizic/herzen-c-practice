#include <stdio.h>
#include <stdlib.h>

struct NumConverter{
    int (* converter) (int);
};

int secret_converter(int num){
    if (num % 2 == 0) {
        num /= 2;
    }else{
        num *= 3;
        num += 1;
    }
    return num;
}

int main() {
    struct NumConverter nc = {secret_converter};
    int num = 123;
    while (num != 1){
        printf("%d\n", num);
        num = nc.converter(num);
    }
    printf("%d\n", num);
    return EXIT_SUCCESS;
}
