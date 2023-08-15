#include <stdio.h>
#define TAM 10

int main(void) {

  int notas[TAM];

  for (int i = 0; i < TAM; i++){
    printf("Ingrese la nota %d: ", i);
    scanf("%d", &notas[i]);
  }

  for (int i = 0; i < TAM; i++){
    printf("La nota %d es: %d\n", i, notas[i]);
  }

  return 0;
}
