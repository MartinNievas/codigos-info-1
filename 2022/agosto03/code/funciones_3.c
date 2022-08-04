#include <stdio.h>
#define TAM 4
//Funciones sin parámetros ni valor de retorno


void imprimir_separador_y_encabezado(void)
{

  for (int i = 0; i < TAM; i++){
    printf("col %d\t", i);
  }
  printf("\n----------------------------------------------------------------------------\n");

}


int main(void) {

  int matriz[TAM][TAM];

  for (int i = 0; i < TAM; i++){
    for (int j = 0; j < TAM; j++){
      matriz[i][j] = i * TAM + j + 1;
    }
  }
  imprimir_separador_y_encabezado();

  for (int i = 0; i < TAM; i++){
    for (int j = 0; j < TAM; j++)
      printf("%d\t", matriz[i][j]);
    printf("\n");
  }

  printf("\nSumar 3 a todos los elementos\n");

  for (int i = 0; i < TAM; i++){
    for (int j = 0; j < TAM; j++){
      matriz[i][j]+=3;
    }
  }

  imprimir_separador_y_encabezado();

  for (int i = 0; i < TAM; i++){
    for (int j = 0; j < TAM; j++)
      printf("%d\t", matriz[i][j]);
    printf("\n");
  }
  return 0;
}




