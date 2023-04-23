#include <stdio.h>
#include <stdlib.h>


void swapEvenAndOdd(int *arr){
    for (int i = 0; i < 12; i+=2){
        int tmp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = tmp;
    }
}

int main(){
    int *arr = (int *) malloc(sizeof(int*) * 12);
    printf("Initial array: ");
    for (int i = 0; i < 12; i++){
        arr[i] = i * i;
        printf("%d ", arr[i]);
    }
    printf("\n");

    swapEvenAndOdd(arr);

    printf("Result array: ");
    for (int i = 0; i < 12; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return EXIT_SUCCESS;
}