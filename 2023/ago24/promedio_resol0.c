#include <stdio.h>
#define TAM 5
//Braida, Cipolla y Zanel

int main(void) {

  int notas[TAM];

  for (int i = 0; i < TAM; i++){
    printf("Ingrese la nota %d: ", i);
    scanf("%d", &notas[i]);
  }


  int suma=0;
  float promedio;
  static int i;

  while(i<TAM){
    suma= suma + notas[i];
    i++;
  }

  promedio = suma / TAM;

  printf("promedio es :%.2f",promedio);

  return 0;
}
