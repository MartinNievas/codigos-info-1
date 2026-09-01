#include <stdio.h>

int main(void)
{
    int matriz[3][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    int filas = 3;
    int columnas = 4;

    // Recorrido de toda la matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}
