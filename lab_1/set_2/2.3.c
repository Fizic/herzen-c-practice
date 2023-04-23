#include <stdio.h>
#include <stdlib.h>

int main() {
    long long m;
    scanf("%lld", &m);
    long long P0 = 1, P1 = 1, P2 = 1;
    printf("%lld %lld %lld ", P0, P1, P2);
    for (;;){
        long long Pn = P0 + P1;
        if (Pn <= m){
            printf("%lld ", Pn);
        }else{
            break;
        }

        P0 = P1;
        P1 = P2;
        P2 = Pn;
    }
    return EXIT_SUCCESS;
}
