//
// Created by Andrés on 29-08-22.
//
#include <stdio.h>
#include <stdlib.h>

struct esfera {
    float x, y, z, rad;
};
typedef struct esfera tSphere;

int main() {
    // Variables
    tSphere *p;

    // Program
    p = malloc(sizeof(tSphere));

    printf("PRE");

    (*p).x = 30;
    (*p).y = 28;
    (*p).z = 15;
    (*p).rad = 9;
    printf("\nCentro: %.1f, %.1f, %.1f\nRadio: %.1f", (*p).x, (*p).y, (*p).z, (*p).rad);

    printf("\n\nPOST");
    p = &(*p);
    (*p).rad = 100;
    (*p).x++;
    printf("\nCentro: %.1f, %.1f, %.1f\nRadio: %.1f", (*p).x, (*p).y, (*p).z, (*p).rad);

    // End
    printf("\n\n");
    return 0;
}