#include <stdio.h>

int main()
{
    // Variables
    char n1[20], n2[20]; // Las strings son en realidad arreglos lineales de caracteres

    // Program Start
    printf("ORDENAR ALFABETICAMENTE LOS NOMBRES");
    printf("\nIngrese nombre 1: ");
    scanf("%s", n1);
    printf("Ingrese nombre 2: ");
    scanf("%s", n2);

    printf("\nValores ASCII:\n");
    printf("Nombre 1 (%s): ", n1);
    for (int i = 0; i < sizeof(n1); ++i) {
        if (n1[i] == '\0')
        {
            i = sizeof(n1);
        }
        else
        {
            printf("%c (%d),",n1[i],n1[i]);
        }
    }
    printf("\nNombre 2 (%s): ", n2);
    for (int i = 0; i < sizeof(n2); ++i) {
        if (n2[i] == '\0')
        {
            i = sizeof(n2);
        }
        else
        {
            printf("%c (%d),",n2[i],n2[i]);
        }
    }

    // Program End
    printf("\n\n");
    return 0;
}