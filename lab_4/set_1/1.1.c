#include <stdio.h>
#include <stdlib.h>


long long recursive_factorial(long long num){
    if (num == 0) return 1;
    return recursive_factorial(num - 1) * num;
}

long long factorial(long long num){
    long long fact = 1;
    for (int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    long long a;
    printf("Enter value:");
    scanf("%lld", &a);
    printf("The value of the recursive factorial: %lld\n", recursive_factorial(a));
    printf("The value of the cyclic factorial: %lld", factorial(a));
    return EXIT_SUCCESS;
}