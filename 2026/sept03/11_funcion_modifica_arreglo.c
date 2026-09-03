#include <stdio.h>

#define TAM 5

void duplicar(int arreglo[], int tam)
{
    int i;

    for (i = 0; i < tam; i++)
    {
        arreglo[i] = arreglo[i] * 2;
    }
}

void mostrar(int arreglo[], int tam)
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
    int numeros[TAM] = {1, 2, 3, 4, 5};

    printf("Antes: ");
    mostrar(numeros, TAM);

    duplicar(numeros, TAM);

    printf("Despues: ");
    mostrar(numeros, TAM);

    return 0;
}
