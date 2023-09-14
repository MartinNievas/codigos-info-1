#include <stdio.h>
#define TAM 10
// Modificar este programa para ordenar el arreglo de mayor a menor.

void cargar_elementos(int arreglo[], int tam){
  for (int i = 0; i < tam; i++){
    printf("Ingrese nota: ");
    scanf("%d", &arreglo[i]);
  }
}

void imprimir_elementos(int arreglo[], int tam){
  for (int i = 0; i < tam; i++){
    printf("%d\n", arreglo[i]);
  }
}

int main(void) {

  int nota[TAM];

  cargar_elementos(nota,2);
  imprimir_elementos(nota,2);

  return 0;
}
