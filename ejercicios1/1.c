#include <stdio.h>
#include <stdbool.h>

bool isEven(int num)
{
    if (num % 2 == 0) { return true; }
    else { return false; }
}

int main()
{
    int num;
    printf("Ingrese un numero: ");
    scanf("%i", &num);
    if (isEven(num)) { printf("El numero es par."); }
    else { printf("El numero es impar."); }
    return 0;
}