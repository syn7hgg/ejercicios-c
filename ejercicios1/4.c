//
// Created by andres on 13-08-22.
//

#include <stdio.h>

int solve(int *n, int m) {
    // Variables

    // Logic
    for (int i = 0; i < sizeof(n); ++i) {
        if (n[i] == m) { return i; }
    }

    // Return
    return -1;
}

int main() {
    // Variables
    int n[] = {2, 8, 15, 9, 50, 42, 74};
    int m, pos;

    // Program
    printf("POSICION EN ARREGLO\n");
    scanf("%d", &m);
    pos = solve(n, m);
    printf("Posición: %d\n", pos);

    // End
    printf("\n\n");
    return 0;
}