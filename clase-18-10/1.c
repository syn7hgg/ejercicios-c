#include <stdio.h>
#include <stdbool.h>
#define n 11

void estacionesAlimentadas(int **Grafo, int X) {
    for (int i = 0; i < n; i++)
    {
        if (Grafo[X][i] != 0)
        {
            printf("\n%i", i);
        }
    }
}

bool estacionRespaldada(int **Grafo, int X, int Y) {
    for (int i = 0; i < n; i++)
    {
        Grafo[Y][i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (Grafo[i][X] != 0) { return true;
        }
    }
    return false;
}