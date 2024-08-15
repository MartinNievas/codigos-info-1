#include<stdio.h>
#define TAM 10

int main(void) {

  int arreglo[TAM];

  // Cargar los elementos el arreglo
  for(int i = 0; i < TAM; i++){
    printf("Ingrese un numero entero: ");
    scanf("%d", &arreglo[i]);
  }

  // Recorrer el arreglo y buscar el máximo elemento
  //
  //
  int max;

  printf("El máximo es: %d\n", max);

  return 0;
}



-1
2
-3
54
23
26

54
