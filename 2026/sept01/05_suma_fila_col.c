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

    // Suma de cada fila
    for (int i = 0; i < FILAS; i++) {

        int suma = 0;

        for (int j = 0; j < COLUMNAS; j++) {
            suma += matriz[i][j];
        }

        printf("Suma fila %d = %d\n", i, suma);
    }

    printf("\n");

    // Suma de cada columna
    for (int j = 0; j < COLUMNAS; j++) {

        int suma = 0;

        for (int i = 0; i < FILAS; i++) {
            suma += matriz[i][j];
        }

        printf("Suma columna %d = %d\n", j, suma);
    }

    return 0;
}
