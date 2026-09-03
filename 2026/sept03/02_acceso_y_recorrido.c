#include <stdio.h>

int main(void)
{
    int numeros[5] = {10, 20, 30, 40, 50};
    int i;

    /* Los índices comienzan en 0 */
    printf("Primer elemento: %d\n", numeros[0]);
    printf("Tercer elemento: %d\n", numeros[2]);

    /* Recorrido completo del arreglo */
    printf("Todos los elementos:\n");

    for (i = 0; i < 5; i++)
    {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    return 0;
}
