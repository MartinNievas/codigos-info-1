#include<stdio.h>

#define TAM 10


int main(void) {

  int arreglo[TAM];
  int max;
  // Cargar los elementos el arreglo

  for(int i = 0; i < TAM; i++){

    printf("Ingrese un numero entero: ");

    scanf("%d", &arreglo[i]);
  }
  // Recorrer el arreglo y buscar el máximo elemento
  max = arreglo[0];

  for(int i = 0; i < TAM; i++){

    if(max < arreglo[i]){
      max = arreglo[i];
    }

  }
  printf("El máximo es: %d\n", max);
  return 0;

}


