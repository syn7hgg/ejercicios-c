//
// Created by andres on 13-08-22.
//

#include <stdio.h>

int solve(int *n, size_t elems) {
    // Variables
    int sum = 0;

    // Logic
    for (int i = 0; i < elems; ++i) {
        sum = sum+n[i];
    }

    // Return
    return sum;
}

int main() {
    // Variables
    int n[] = {2,4,7,3,1,3,7,4,1,9,50,36,17,25,63};
    int m;

    // Program
    printf("SUMA EN ARREGLO\n");
    m = solve(n, sizeof(n)/sizeof(n[0]));
    printf("Suma: %d", m);

    // End
    printf("\n\n");
    return 0;
}