#include <stdio.h>
#define TAM 6


int sumarElementos(int vec[], int tam){
  int sum = 0;

  for(int i = 0; i < tam; i++){
    sum += vec[i];
  }
  return sum;
}


//Llena todos los elementos del arreglo con el valor 0.
void inicializarEnCero(int vec[], int tam){

  for(int i = 0; i < tam; i++)
    vec[i] = 0;

}

int main(void) {
  int arr[TAM] = {1,2,3,4,5,6};

  printf("Antes:\n");
  for (int i = 0; i < TAM; i++){
    printf("%d\n", arr[i]);
  }
  int suma = sumarElementos(arr, TAM);
  printf("suma: %d\n", suma);

  inicializarEnCero(arr, TAM);

  printf("Después:\n");
  for (int i = 0; i < TAM; i++){
    printf("%d\n", arr[i]);
  }

  return 0;
}
