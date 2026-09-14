#include <stdio.h>

#define FILAS 3
#define COLUMNAS 4

int main(void)
{
    int matriz[FILAS][COLUMNAS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int fila;
    int columna;

    for (fila = 0; fila < FILAS; fila++)
    {
        for (columna = 0; columna < COLUMNAS; columna++)
        {
            printf("%4d", matriz[fila][columna]);
        }

        printf("\n");
    }

    return 0;
}
