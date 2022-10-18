#include <stdio.h>
#include <stdbool.h>
#define n 126

bool visitados[n];

bool esConexo(int **Grafo, int v0, int vf) {
    // Paso 1
    Grafo[v0][vf] = 0;
    Grafo[vf][v0] = 0;

    // Paso 2
    recorridoProfundidad(0); // También podría ser recorridoAmplitud(0);

    // Paso 3
    for (int i = 0; i < n; i++)
    {
        if (!visitados[i])
        {
            return false;
        }
    }
    return true;
}