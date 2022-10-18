#include <stdio.h>
#include <stdlib.h>

struct lista {
    int edad;
    struct lista *sig;
};
typedef struct lista tLista;
typedef tLista *Lista;

int main() {
    Lista basica = malloc(sizeof(tLista));
    basica->edad = 15;
    basica->sig = NULL;

    printf("%i", basica->edad);

    return 0;
}