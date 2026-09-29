#include <stdio.h>

void imprimir_puntero(int (*p)[10], int tam){

  for (int i = 0; i < tam; i++){
    for (int j = 0; j < tam; j++){
      if (p[i][j] == 1)
        printf("#");
      else
        printf(".");
    }
    printf("\n");
  }
}
void imprimir(int p[][10], int tam){

  for (int i = 0; i < tam; i++){
    for (int j = 0; j < tam; j++){
      if (p[i][j] == 1)
        printf("#");
      else
        printf(".");
    }
    printf("\n");
  }
}

int main(void) {

  int laberinto1[10][10] = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,0,0,1,0,0,0,1,1,1},
    {1,1,0,1,0,1,0,1,0,1},
    {1,0,0,0,0,1,0,0,0,1},
    {1,0,1,1,1,1,0,1,0,1},
    {1,0,0,0,0,0,0,1,0,1},
    {1,1,1,1,1,1,0,1,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,0,0,1},
    {1,1,1,1,1,1,1,1,1,1}
  };
  int laberinto2[10][10] = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,1,0,0,0,0,1},
    {1,1,1,0,1,0,1,1,0,1},
    {1,0,0,0,1,0,1,0,0,1},
    {1,0,1,1,1,0,1,0,1,1},
    {1,0,1,0,0,0,1,0,0,1},
    {1,0,1,0,1,1,1,1,0,1},
    {1,0,0,0,1,0,0,0,0,1},
    {1,1,1,1,1,1,1,0,0,1},
    {1,1,1,1,1,1,1,1,1,1}
  };

  imprimir_puntero(laberinto1, 10);
  printf("\n");
  printf("\n");
  printf("\n");

  imprimir_puntero(laberinto2, 10);

  

  return 0;
}
