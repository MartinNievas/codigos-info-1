#include <stdio.h>
#define TAM 10

int main(void)
{
  int i;
  float arreglo[TAM];
  // Inicializar la variable del acumulador
  float suma = 0.;

  for (i = 0; i < TAM; i++) {
    printf("Ingrese el elemento[%d]: ", i);
    scanf("%f", &arreglo[i]);
  }

  for (i = 0; i < TAM; i++)
    suma += arreglo[i];

  printf("La suma es: %f\n", suma);

  return 0;
}
