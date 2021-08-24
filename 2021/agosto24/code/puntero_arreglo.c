#include <stdio.h>

int main(void)
{

  float arreglo[2] = { 3.14, 15.9};
  float *parreglo;

  printf("Imprimir de forma \"normal\":\n");
  printf("%f\n", arreglo[0]);


  parreglo = &arreglo[0];

  printf("Imprimir mediante el puntero:\n");
  printf("%f\n", *parreglo);


  parreglo = arreglo;

  printf("Imprimir mediante el puntero usando el nombre del arreglo:\n");
  printf("%f\n", *parreglo);

  // O sea que:
  //  &arreglo[0] <=> arreglo

  return 0;
}
