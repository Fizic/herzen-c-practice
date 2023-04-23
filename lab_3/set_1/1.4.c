#include <stdlib.h>

struct Date{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year;
};

int main(){
    struct Date person_birth_day = {4, 4, 4004};
    return EXIT_SUCCESS;
}
