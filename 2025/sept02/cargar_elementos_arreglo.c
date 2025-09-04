#include <stdio.h>
#define TAM 3

void cargar_elementos_arreglo(int *a, int tam){

  for (int i = 0; i < tam; i++){
    printf("Ingrese un número: ");
    scanf("%d", &a[i]);
  }

}

int main(void) {

  int arreglo[TAM];

  cargar_elementos_arreglo(&arreglo[0], TAM);

  for (int i = 0; i < TAM; i++){
    printf("[%d]: %d\n", i, arreglo[i]);
  }

  return 0;
}

