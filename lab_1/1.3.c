#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("Enter function arguments:");
    double x, y;
    scanf("%lf %lf", &x, &y);
    double sin_x_plus_y = sin(x + y);
    double u = (1 + sin_x_plus_y * sin_x_plus_y) / (2 + fabs(x - 2 * x * x / (1 + fabs(sin_x_plus_y))));
    printf("The value of the function is %lf", u);
    return EXIT_SUCCESS;
}
