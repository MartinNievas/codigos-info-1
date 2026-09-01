#include <stdio.h>

#define FILAS 2
#define COLUMNAS 3

int main(void)
{
    int matriz[FILAS][COLUMNAS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Matriz original:\n");

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    printf("\nMatriz transpuesta:\n");

    for (int i = 0; i < COLUMNAS; i++) {
        for (int j = 0; j < FILAS; j++) {
            printf("%d ", matriz[j][i]);
        }

        printf("\n");
    }

    return 0;
}
