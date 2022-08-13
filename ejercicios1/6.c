//
// Created by andres on 13-08-22.
//

#include <stdio.h>

int solve(int *n, size_t elems) {
    // Variables
    int m=0, o; // 'o' será el múmero anterior, 'm' es el mayor de todos (retornado)

    // Logic
    for (int i = 0; i < elems; ++i) {
        o = n[i];
        if (o > m) { m = o; }
    }

    // Return
    return m;
}

int main() {
    // Variables
    int n[] = {1,4,2,7,4,5,10,56,72,45,92,32,104,5,8,2,4};
    int m;

    // Program
    printf("MAYOR DE LOS NUMEROS\n");
    m = solve(n, sizeof(n)/ sizeof(n[0]));
    printf("Mayor numero: %d", m);

    // End
    printf("\n\n");
    return 0;
}