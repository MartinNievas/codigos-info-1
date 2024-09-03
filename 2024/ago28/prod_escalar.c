#include <stdio.h>
#define TAM 5

int main(void) {

  int arrreglo_1[TAM];
  int arrreglo_2[TAM];
  int i;

  for (i = 0; i < TAM; i++){
    printf("Ingrese el elemento[%d]: ", i);
    scanf("%d", &arrreglo_1[i]);
  }

  int suma = 0;

  for (i = 0; i < TAM; i++){
    suma += arrreglo_1[i];
    arrreglo_2[i] = suma;
  }


  for (i = 0; i < TAM; i++){
    printf("%d: %d\n",i, arrreglo_2[i]);
  }


  return 0;
}
