#include <stdio.h>

#define TAM 8

int main(void)
{
    int numeros[TAM] = {4, 12, 7, 19, 3, 25, 8, 10};
    int buscado;
    int i;
    int encontrado = 0;

    printf("Ingrese el numero a buscar: ");
    scanf("%d", &buscado);

    for (i = 0; i < TAM; i++)
    {
        if (numeros[i] == buscado)
        {
            printf("Encontrado en la posicion %d\n", i);
            encontrado = 1;
        }
    }

    if (!encontrado)
    {
        printf("El elemento no se encuentra en el arreglo.\n");
    }

    return 0;
}
