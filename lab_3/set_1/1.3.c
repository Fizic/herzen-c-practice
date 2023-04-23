#include <stdio.h>
#include <stdlib.h>

struct Complex{
    double a, b;
};

struct Complex complex_product(struct Complex z1, struct Complex z2){
    struct Complex c = {z1.a * z2.a - z1.b * z2.b, z1.a * z2.b + z1.b * z2.a};
    return c;
}

struct Complex complex_quotient(struct Complex z1, struct Complex z2){
    struct Complex c = {(z1.a * z2.a + z1.b * z2.b) / (z2.a * z2.a + z2.b * z2.b), (z2.a * z1.b + z1.a * z2.b) / (z2.a * z2.a + z2.b * z2.b)};
    return c;
}

struct Complex complex_sum(struct Complex z1, struct Complex z2){
    struct Complex c = {z1.a + z2.a, z1.b + z2.b};
    return c;
}

struct Complex complex_exp(struct Complex z){
    struct Complex numerator = {1, 0}, denominator = {1, 0}, c = {1, 0};
    for (int i = 1; i < 10; i++){
        numerator = complex_product(numerator, z);
        struct Complex ci = {i, 0};
        denominator = complex_product(denominator, ci);
        c = complex_sum(c, complex_quotient(numerator, denominator));
    }
    return c;
}

int main(){
    struct Complex z1 = {4, 1};
    z1 = complex_exp(z1);
    printf("%f + %fi", z1.a, z1.b);
    return EXIT_SUCCESS;
}