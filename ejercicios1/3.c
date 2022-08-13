//
// Created by andres on 13-08-22.
//

#include <stdio.h>
#include <ctype.h>

int solve(char *n) {
    // Variables
    int q = 0;
    char list[] = {'a', 'e', 'i', 'o', 'u', 'p', 'v'};

    // Logic
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < sizeof(list); j++) {
            if (tolower(n[i]) == list[j]) { q++; }
        }
    }

    // Return
    return q;
}

int main() {
    // Variables
    int quant;
    char n[] = {'o', 't', 'a', 'e', 'u'};

    // Program
    quant = solve(n);
    printf("El arreglo contiene %d vocales.", quant);

    // End
    printf("\n\n");
    return 0;
}