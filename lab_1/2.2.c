#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    double integral_value = (powl(M_E, a + 2) + powl(M_E, b + 2)) / 2;
    double h = fabs(a + b) / 10000;
    for (double i = a; i < b; i += h){
        integral_value += powl(M_E, i + 2);
    }
    integral_value *= h;
    printf("%lf", integral_value);
    return EXIT_SUCCESS;
}
