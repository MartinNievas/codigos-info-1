/*
 * Ejercicio 5 - Intercambiar punteros
 * Tema: punteros a puntero.
 *
 * Implementar una funcion que reciba dos punteros a int
 * y los intercambie.
 *
 * Luego observar por que se necesita int **.
 */

#include <stdio.h>

void intercambiar_punteros(int **p, int **q)
{
    /* COMPLETAR */
}

int main(void)
{
    int a = 10;
    int b = 20;

    int *p = &a;
    int *q = &b;

    printf("*p = %d, *q = %d\n", *p, *q);

    intercambiar_punteros(&p, &q);

    printf("*p = %d, *q = %d\n", *p, *q);

    return 0;
}
