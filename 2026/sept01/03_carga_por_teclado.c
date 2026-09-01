#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

int main(void)
{
    int matriz[FILAS][COLUMNAS];

    // Carga
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Ingrese matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Mostrar
    printf("\nMatriz ingresada:\n");

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%4d", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}
