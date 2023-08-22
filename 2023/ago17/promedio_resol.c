#include <stdio.h>
#define TAM 3
/** Calcular el promedio de las TAM notas ingresadas */

int main() {

  int notas[TAM];

  for(int i=0; i<TAM; i++){
    printf("ingrese la nota %d:", i);
    scanf("%d", &notas[i]);
  }

  float total = 0;

  for(int i =0; i<TAM; i++){
    total += notas[i];
  }
  printf("el promedio de las notas cargadas es: %.2f", total/TAM);


  return 0;
}
