#include <stdio.h>
#define TAM 5

int main(void) {
  int notas[TAM];
  int sumnotas = 0;
  float prom;

  for (int i = 0; i < TAM; i++){
    printf("Ingrese la nota %d: ", i);
    scanf("%d", &notas[i]);
  }

  for (int i = 0; i < TAM; i++) {
    sumnotas += notas[i];
  }
  prom = sumnotas/(float)TAM;
  printf("El promedio es: %f\n", prom);
  return 0;
}

