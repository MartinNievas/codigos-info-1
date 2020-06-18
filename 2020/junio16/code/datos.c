#include <stdio.h>
#define SIZE 99

int main(void)
{
  unsigned int frecuencia[11] = {0};

  unsigned int respuestas[SIZE] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
                                   7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
                                   6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
                                   7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
                                   6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
                                   7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                                   5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
                                   7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
                                   7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
                                   4, 5, 6, 10, 6, 5, 7, 8, 10};
  // Calcular el promedio
  float promedio = 0;
  int i;
  for (i = 0; i < SIZE; i++){
    promedio += respuestas[i];
  }

  promedio/=SIZE;
  printf("El promedio total es: %f\n", promedio);

  // Cálculo de la frecuencia
  for (i = 0; i < SIZE; i++){
    frecuencia[respuestas[i]]++;
  }

  printf("La cantidad de respuestas es:\n");
  int j;
  for (i = 0; i < 11; i++){
    for (j = 0; j < frecuencia[i]; j++){
      printf("*");
    }
    printf("\n");
  }

}
