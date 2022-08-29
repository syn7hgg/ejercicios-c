//
// Created by Andrés on 29-08-22.
//
#include <stdio.h>

int main() {
    // Variables
    int a;
    int *p;

    // Program
    a = 137;
    printf("\nVariable a: %i", a);
    printf("\nDireccion de a: %p", &a); // i - entero | x - hexadecimal | p - puntero
    p = &a;
    printf("\nDirección de a: %p", p);
    *p = 200; // "Ve a la dirección que tiene guardada la variable 'p'"
    printf("\nVariable a: %i", a);

    // End
    printf("\n\n");
    return 0;
}
