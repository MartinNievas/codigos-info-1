#include <stdio.h>

#define TAM 5

void cargar(int arreglo[], int tam)
{
    int i;

    for (i = 0; i < tam; i++)
    {
        printf("Ingrese elemento %d: ", i);
        scanf("%d", &arreglo[i]);
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

int sumar(int arreglo[], int tam)
{
    int i;
    int suma = 0;

    for (i = 0; i < tam; i++)
    {
        suma += arreglo[i];
    }

    return suma;
}

int mayor(int arreglo[], int tam)
{
    int i;
    int maximo = arreglo[0];

    for (i = 1; i < tam; i++)
    {
        if (arreglo[i] > maximo)
        {
            maximo = arreglo[i];
        }
    }

    return maximo;
}

int main(void)
{
    int numeros[TAM];

    cargar(numeros, TAM);

    printf("\nArreglo: ");
    mostrar(numeros, TAM);

    printf("Suma: %d\n", sumar(numeros, TAM));
    printf("Mayor: %d\n", mayor(numeros, TAM));

    return 0;
}
