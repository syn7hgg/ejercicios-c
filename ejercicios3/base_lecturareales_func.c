//
// Created by Andrés on 22-08-22.
//
#include <stdio.h>

void solve(char fileName[30])
{
    // Variables
    float data;
    FILE *file;

    // Program
    printf("Ingrese archivo a leer: ");
    gets(fileName);
    file = fopen(fileName, "r"); // r read, w write, a append
    while (feof(file) == 0)
    {
        fscanf(file, "%f", &data);
        printf("%.3f\n", data);
    }
    fclose(file);
}

int main() {
    // Variables
    char fileName[30];

    // Program
    solve(fileName);

    // End
    printf("\n\n");
    return 0;
}