#include <stdio.h>

#define TAM 6

int main(void)
{
    int numeros[TAM] = {15, 8, 27, 4, 19, 12};
    int i;
    int mayor = numeros[0];
    int menor = numeros[0];

    for (i = 1; i < TAM; i++)
    {
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }

        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    printf("Mayor: %d\n", mayor);
    printf("Menor: %d\n", menor);

    return 0;
}
