#include <stdio.h>
#define TAM 4

int main(void)
{
  int i;
  int arreglo[TAM];
  /** Que pasa si no inicializamos el acumulador? */
  int suma = 0;

  for (i = 0; i <TAM; i++)
  {
    printf("Ingrese el elemento[%d]: ", i);
    scanf("%d", &arreglo[i]);
  }

  for (i = 0; i < TAM; i++)
    suma += arreglo[i];

  printf("La suma es: %d\n", suma);

  return 0;
}
