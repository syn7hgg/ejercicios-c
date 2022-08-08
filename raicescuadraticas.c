#include <stdio.h>
#include <math.h>

int main()
{
    // Variables
    float a,b,c,disc,r1,r2;

    // Program Start
    printf("SOLUCION ECUACION CUADRATICA\n");
    printf("Ingrese a: ");
    scanf("%f",&a);
    printf("Ingrese b: ");
    scanf("%f",&b);
    printf("Ingrese c: ");
    scanf("%f",&c);

    disc = (b*b)-(4*a*c);
    printf("\nDiscriminante: %.2f", disc); // Imprimir discriminante, %f aclara al printf que disc es un float

    if (disc<0) // Raices imaginarias
    {
        printf("\nLas raices son complejas.");
    } else
    {
        r1 = (-b+sqrt(disc))/(2*a);
        r2 = (-b-sqrt(disc))/(2*a);

        if (r1==r2)
        {
            printf("\nLa raiz es única y es: %.2f", r1);
        }
        else
        {
            printf("\nRaiz 1: %.2f | Raiz 2: %.2f", r1, r2);
        }
    }

    // Program End
    printf("\n\n");
    return 0;
}