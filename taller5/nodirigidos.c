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

