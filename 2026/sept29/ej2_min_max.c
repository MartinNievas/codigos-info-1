/*
 * Ejercicio 2 - Minimo y maximo
 * Tema: funciones por referencia.
 *
 * Escribir una funcion que reciba dos enteros y devuelva
 * mediante punteros el menor y el mayor.
 */

#include <stdio.h>

void min_max(int a, int b, int *minimo, int *maximo)
{
  *minimo = a > b ? b : a;
  *maximo = a > b ? a : b;
}

void min_max(int a, int b, int *minimo, int *maximo){
  a>b ? *maximo=a : *maximo=b;
  b<a ? *minimo=b : *minimo=a;
}

int main(void)
{
    int a, b;
    int minimo, maximo;

    printf("Ingrese dos enteros: ");
    scanf("%d %d", &a, &b);

    min_max(a, b, &minimo, &maximo);

    printf("Minimo: %d\n", minimo);
    printf("Maximo: %d\n", maximo);

    return 0;
}
