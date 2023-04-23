#include <stdio.h>
#include <stdlib.h>

#define MY_SIZE 20

int main() {
    char str[MY_SIZE];
    scanf("%s", str);
    double floatString = atof(str);
    printf("%.2lf\n", floatString);

    scanf("%s", str);
    int intString = atoi(str);
    printf("%d\n", intString);
    return EXIT_SUCCESS;
}
