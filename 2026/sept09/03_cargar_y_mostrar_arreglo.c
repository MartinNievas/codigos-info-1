#include <stdio.h>

#define TAM 5

int main(void)
{
    int numeros[TAM];
    int i;

    /* Carga del arreglo */
    for (i = 0; i < TAM; i++)
    {
        printf("Ingrese numeros[%d]: ", i);
        scanf("%d", &numeros[i]);
    }

    /* Recorrido para mostrarlo */
    printf("\nArreglo ingresado:\n");

    for (i = 0; i < TAM; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
