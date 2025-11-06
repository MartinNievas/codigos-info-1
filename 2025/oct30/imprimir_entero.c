#include <stdio.h>

int main()
{
    int entero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &entero);
    printf("El numero entero ingresado es: %d\n", entero);

    printf("Los bits del número entero son: ");
    for (int i = sizeof(entero) * 8 - 1; i >= 0; i--)
    {
        printf("%d", (entero >> i) & 1);
    }
    return 0;
}