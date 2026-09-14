#include <stdio.h>

int main(void)
{
    /*
     * Un arreglo bidimensional puede pensarse como
     * una tabla de filas y columnas.
     *
     * matriz[fila][columna]
     */
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("matriz[0][0] = %d\n", matriz[0][0]);
    printf("matriz[1][2] = %d\n", matriz[1][2]);

    return 0;
}
