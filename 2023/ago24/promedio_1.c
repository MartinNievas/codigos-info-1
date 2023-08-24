#include <stdio.h>
#define TAM 10
//https://codeshare.io/qPdPKx

int main(void) {

  int notas[TAM];

  for (int i = 0; i < TAM; i++){
    printf("Ingrese la nota %d: ", i);
    scanf("%d", &notas[i]);
  }
  // Modificar a partir de acá. Calcular el promedio

  for (int i = 0; i < TAM; i++){
    printf("La nota %d es: %d\n", i, notas[i]);
  }

  return 0;
}
