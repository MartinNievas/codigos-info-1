#include <stdio.h>

#define N 5

int main(void)
{
    int matriz[N][N];
    // codeshare.io/info1R1

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (i == j)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}
