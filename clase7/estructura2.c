//
// Created by Andrés on 25-08-22.
//
#include <stdio.h>

struct fraccion{
    int numerador;
    int denominador;
};
typedef struct fraccion Fraccion;

int main()
{
    Fraccion F = {-2, 17};

    printf("Ingrese numerador: ");
    scanf("%i", &F.numerador);

    printf("Ingrese denominador: ");
    scanf("%i", &F.denominador);

    printf("\nLa fraccion ingresada es: %i/%i", F.numerador, F.denominador);

    printf("\n\n\n\n\n\n");
    return 0;
}