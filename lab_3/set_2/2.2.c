#include <stdio.h>
#include <stdlib.h>

union LongBytesPrinter{
    unsigned long num;
    unsigned char printer;
};

int main(){
    union LongBytesPrinter lbp;
    lbp.num = 123123123;
    for (int i = 0; i < 4; i++){
        printf("%d\n", *(&lbp.printer + i));
    }
    return EXIT_SUCCESS;
}