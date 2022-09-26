//
// Created by Andrés on 26-09-22.
//
#include <stdio.h>
#include <stdlib.h>

int **creaMatriz(int n)
{
    int **Matriz, i, j;

    Matriz = malloc(n*sizeof(int *));
    for (i=0; i<n; i++)
    {
        Matriz[i] = malloc(n*sizeof(int));
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            Matriz[i][j] = 0;
        }
    }
    return Matriz;
}

void imprimeMatrizGrafo(int **M, int nodeCount) {
    for (int i = 0; i < nodeCount; ++i) {
        for (int j = 0; j < nodeCount; ++j) {
            printf("%i ", M[i][j]);
        }
        printf("\n");
    }
}

void leeArchivo(char fileName[50]) {
    FILE *f = fopen(fileName, "r");
    if (f == NULL) { printf("\nArchivo inexistente."); exit(1); }

    int nodeCount, arcCount;
    fscanf(f, "%i", &nodeCount);
    fscanf(f, "%i", &arcCount);

    int **M = creaMatriz(nodeCount);
    printf("\n");

    for (int i = 0; i < arcCount; ++i) {
        int row, col, wei;
        fscanf(f, "%i", &row);
        fscanf(f, "%i", &col);
        fscanf(f, "%i", &wei);

        M[row][col] = wei;
    }

    fclose(f);
    imprimeMatrizGrafo(M, nodeCount);
}

int main() {
    // Variables
    char fileName[50];
    FILE *file;

    // Logic
    printf("Ingrese nombre del archivo: ");
    leeArchivo(gets(fileName));

    // End
    printf("\n\n");
    return 0;
}