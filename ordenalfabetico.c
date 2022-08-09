#include <stdio.h>
#include <ctype.h>

int main()
{
    // Variables
    char n1[20], n2[20]; // Las strings son en realidad arreglos lineales de caracteres
    int s1 = 0, s2 = 0, whosBigger = 0;

    // Program Start
    printf("ORDENAR ALFABETICAMENTE LOS NOMBRES");
    printf("\nIngrese nombre 1: ");
    scanf("%s", n1);
    printf("\nIngrese nombre 2: ");
    scanf("%s", n2);

    for (int i = 0; i < 20; ++i) { // Obtenemos el largo del primer nombre y lo pasamos a minúsculas
        if (n1[i] != '\0') {
            n1[i] = tolower(n1[i]);
            // Caso especial para ñ
            if ((int)n1[i] == 165) { n1[i] = (char)"ñ"; }
            s1++;
        }
        else { i=20; }
    }
    for (int i = 0; i < 20; ++i) { // Obtenemos el largo del segundo nombre y lo pasamos a minúsculas
        if (n2[i] != '\0') {
            n2[i] = tolower(n2[i]);
            if ((int)n2[i] == 165) { n2[i] = (char)"ñ"; }
            s2++;
        }
        else { i=20; }
    }

    if (s1 >= s2) // El primer nombre es tan o más largo que el segundo nombre
    {
        printf("\nPrimer nombre domina");
        for (int i = 0; i < s1; ++i) {
            printf("\nComparando %c contra %c", n1[i], n2[i]);
            if (n1[i] > n2[i]) { whosBigger = 1; }
            if (n2[i] > n1[i]) { whosBigger = 2; }

            // Caso especial para ñ (ASCII code 164)
            if ((int)n1[i] == 164)
            {
                if ((int)n2[i] < 110) { whosBigger = 1; }
                if ((int)n2[i] > 110) { whosBigger = 2; }
            }

            if (whosBigger > 0) { i = s1; }
        }
    }
    else
    {
        printf("\nSegundo nombre domina");
        for (int i = 0; i < s2; ++i) {
            printf("\nComparando %c contra %c", n2[i], n1[i]);
            if (n2[i] > n1[i]) { whosBigger = 2; }
            if (n1[i] > n2[i]) { whosBigger = 1; }

            // Caso especial para ñ (ASCII code 164)
            if ((int)n2[i] == 164)
            {
                if ((int)n1[i] < 110) { whosBigger = 2; }
                if ((int)n1[i] > 110) { whosBigger = 1; }
            }

            if (whosBigger > 0) { i = s2; }
        }
    }

    n1[0] = toupper(n1[0]);
    n2[0] = toupper(n2[0]);

    printf("\n\nRESULTADOS");
    switch (whosBigger) {
        case 1:
            printf("\n%s, %s", n2, n1);
            break;
        case 2:
            printf("\n%s, %s", n1, n2);
            break;
        default:
            printf("\nAmbos nombres son iguales.");
            break;
    }

    // Program End
    printf("\n\n");
    return 0;
}