#include <stdio.h>
#include <math.h>

struct Vector{
    int x, y, z;
};

double vector_modulus(struct Vector *v){
    return sqrt(v->x * v->x + v->y * v->y + v->z * v->z);
}

double vector_scalar_multiplication(struct Vector *v1, struct Vector *v2){
    return v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
};

struct Vector vector_product(struct Vector *v1, struct Vector *v2){
    struct Vector v = {v1->y * v2->z - v1->z * v2->y, v1->z * v2->x - v1->x * v2->z, v1->x * v2->y - v1->y * v2->x};
    return v;
}

void print_vector(struct Vector *v){
    printf("%d %d %d", v->x, v->y, v->z);
}
