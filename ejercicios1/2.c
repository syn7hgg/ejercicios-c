//
// Created by andres on 13-08-22.
//

#include <stdio.h>

int solve(int n) {
    // Variables
    int q = 0;

    // Logic
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) { ++q; }
    }
    // Return
    return q;
}

int main() {
    // Variables
    int n = 0, quant;

    // Program
    printf("Cantidad de divisores");
    printf("\nIngrese un numero: ");
    scanf("%d", &n);
    quant = solve(n);
    printf("Cantidad de divisores: %d", quant);

    // End
    printf("\n\n");
    return 0;
}