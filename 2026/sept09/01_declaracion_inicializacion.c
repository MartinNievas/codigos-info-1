#include <stdio.h>

int main(void)
{
    /* Declaración de un arreglo de 5 enteros */
    int numeros[5];

    /* Declaración e inicialización */
    int edades[5] = {18, 20, 19, 22, 21};

    /* También se puede omitir el tamaño */
    int notas[] = {7, 8, 10, 6};

    printf("Primer elemento de edades: %d\n", edades[0]);
    printf("Segundo elemento de notas: %d\n", notas[1]);

    return 0;
}
