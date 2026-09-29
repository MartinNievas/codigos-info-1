/*
 * Ejercicio 3 - Cociente y resto
 * Tema: multiples parametros de salida mediante punteros.
 *
 * Implementar una funcion que reciba dividendo y divisor
 * y devuelva por referencia el cociente y el resto.
 */

#include <stdio.h>

void dividir(int dividendo, int divisor,
    int *cociente, int *resto)
{
  *cociente = dividendo / divisor;
  *resto = dividendo % divisor;
}

int main(void)
{
    int dividendo, divisor;
    int cociente, resto;

    printf("Dividendo: ");
    scanf("%d", &dividendo);

    printf("Divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("No se puede dividir por cero.\n");
        return 1;
    }

    dividir(dividendo, divisor, &cociente, &resto);

    printf("Cociente: %d\n", cociente);
    printf("Resto: %d\n", resto);

    return 0;
}
