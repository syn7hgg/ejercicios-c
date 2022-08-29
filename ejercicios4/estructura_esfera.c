//
// Created by Andrés on 29-08-22.
//
#include <stdio.h>

struct esfera {
    float x, y, z, rad;
};

int main() {
    // Variables
    struct esfera e1;
    struct esfera *p;

    // Program
    printf("PRE");

    e1.x = 30;
    e1.y = 28;
    e1.z = 15;
    e1.rad = 9;
    printf("\nCentro: %.1f, %.1f, %.1f\nRadio: %.1f", e1.x, e1.y, e1.z, e1.rad);

    printf("\n\nPOST");
    p = &e1;
    (*p).rad = 100;
    (*p).x++;
    printf("\nCentro: %.1f, %.1f, %.1f\nRadio: %.1f", e1.x, e1.y, e1.z, e1.rad);

    // End
    printf("\n\n");
    return 0;
}