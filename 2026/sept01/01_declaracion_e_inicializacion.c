#include <stdio.h>

int main(void)
{
    // Matriz de 2 filas y 3 columnas
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Matriz:\n");

    printf("%d %d %d\n", matriz[0][0], matriz[0][1], matriz[0][2]);
    printf("%d %d %d\n", matriz[1][0], matriz[1][1], matriz[1][2]);

    return 0;
}
