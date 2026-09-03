#include <stdio.h>

#define TAM 5

/*
 * Al pasar un arreglo a una función se pasa una referencia
 * a sus elementos. La función puede recorrerlo.
 */
void mostrar_arreglo(int arreglo[], int tam)
{
    int i;

    for (i = 0; i < tam; i++)
    {
        printf("%d ", arreglo[i]);
    }

    printf("\n");
}

int main(void)
{
    int numeros[TAM] = {10, 20, 30, 40, 50};

    mostrar_arreglo(numeros, TAM);

    return 0;
}
