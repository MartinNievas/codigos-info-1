/*
 * Ejercicio 1 - Intercambiar valores
 * Tema: punteros y llamadas por referencia.
 *
 * Completar la función intercambiar para que intercambie
 * los valores de dos variables recibidas desde main.
 */

#include <stdio.h>

void intercambiar(int *a, int *b)
{
    /* COMPLETAR */
}

int main(void)
{
    int x = 10;
    int y = 25;

    printf("Antes: x = %d, y = %d\n", x, y);

    intercambiar(&x, &y);

    printf("Despues: x = %d, y = %d\n", x, y);

    return 0;
}
