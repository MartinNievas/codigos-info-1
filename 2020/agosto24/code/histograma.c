#include <stdio.h>
#define TAM 100

int main(void)
{

  // Acá guardamos la cantidad de cada nota
  int histograma[11] = {0};
  // Acá están las notas
  int notas[TAM] = { 7, 5, 2, 4, 3, 6, 8, 3, 7, 3,
                    8, 8, 2, 7, 2, 6, 5, 7, 2, 4,
                    2, 3, 8, 1, 8, 9, 8, 8, 1, 8,
                    1, 7, 1, 3, 8, 9, 9, 2, 1, 10,
                    2, 9, 2, 3, 7, 1, 2, 4, 7, 10,
                    7, 1, 1, 8, 5, 9, 10, 10, 9, 4,
                    7, 6, 2, 4, 8, 2, 5, 4, 3, 8,
                    10, 4, 10, 10, 10, 6, 7, 7, 3, 4,
                    4, 8, 2, 4, 8, 2, 6, 1, 2, 8,
                    9, 4, 9, 4, 9, 9, 1, 8, 8, 5};

  // Cargamos el arreglo del historgrama con la
  // cantidad de cada nota
  for (int i = 0; i < TAM; i++)
    histograma[notas[i]]++;

  // Recorremos el arreglo de histograma y por cada
  // elemento tenemos que imprimir asteriscos (*)
  for (int i = 1; i < 11; i++){
    printf("%2d: ", i);
    for (int j = 0; j < histograma[i]; j++)
      printf("*");
    printf("\n");
  }

  return 0;
}
