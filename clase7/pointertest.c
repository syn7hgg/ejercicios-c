//
// Created by Andrés on 25-08-22.
//
#include <stdio.h>

int main() {
    // Variables
    int a = 0;
    int *p;

    // Program
    a = 100;
    printf("%i\n", a);
    p = &a;
    printf("%i\n", p);
    *p = 500;
    printf("%i", a);

    // End
    printf("\n\n");
    return 0;
}