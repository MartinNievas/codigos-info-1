#include <stdio.h>
//codeshare.io/info1R5

#define TAM 5

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

int main(void)
{
    int numeros[TAM] = {10, 20, 15, 25, 30};

    printf("Suma = %d\n", sumar(numeros, TAM));

    return 0;
}
