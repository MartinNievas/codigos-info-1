#include <stdio.h>
#define TAM 10

int main(void) {

  float arreglo[TAM] = {0};
  float *p_flotante;

  for (int i = 0; i < TAM; i++)
    arreglo[i] = 1;

  p_flotante = &arreglo[2];

  printf("La dirección es: %p\n", &arreglo[2]);
  printf("El valor es: %f\n", arreglo[2]);

  printf("El valor vale: %f\n", *p_flotante);
  printf("El puntero vale: %p\n", p_flotante);


  return 0;
}
