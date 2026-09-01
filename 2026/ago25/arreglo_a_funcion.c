#include <stdio.h>
#define TAM 10

void cargar_arreglo(float arr[], int tam){

}

void imprimir_arreglo(float arr[], int tam){

}

int main(void) {

  float temp1[TAM] = {0};
  float temp2[TAM] = {0};


  printf("Carga arreglo1:\n");
  cargar_arreglo(temp1, TAM);
  printf("Carga arreglo2:\n");
  cargar_arreglo(temp2, TAM);

  printf("arreglo1:\n");
  imprimir_arreglo(temp1, TAM);
  printf("arreglo2:\n");
  imprimir_arreglo(temp2, TAM);

  return 0;
}
