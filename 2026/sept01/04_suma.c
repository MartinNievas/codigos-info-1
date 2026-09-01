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

    int suma = 0;

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            suma += matriz[i][j];
        }
    }

    printf("Suma de todos los elementos: %d\n", suma);

    return 0;
}
