#include <stdio.h>
#define TAM 5

int main(void) {
  int notas[TAM];
  int sum = 0;
  float prom = 0;

  for (int i=0; i<TAM ; i++){
    printf("Ingrese la nota %d: ", i);
    scanf("%d", &notas[i]);
  }


  for (int i=0; i<TAM ; i++){
    sum += notas[i];
  }

  prom = (float)sum / TAM;
  printf("El promedio es: %.2f", prom);

  return 0;
}


