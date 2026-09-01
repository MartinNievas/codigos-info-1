#include <stdio.h>

int main(void) {

  int notas[10];

  for (int i = 0; i < 10; i++){
    printf("Ingrese la nota %d: ", i);
    scanf("%d", &notas[i]);
  }

  for (int i = 0; i < 10; i++){
    printf("La nota %d es: %d\n", i, notas[i]);
  }

  float prom = 0;
  for (int i = 0; i < 10; i++){
    prom += notas[i];
  }
  printf("Promedio: %f\n", prom/10);

  return 0;
}
