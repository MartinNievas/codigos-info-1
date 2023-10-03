#include <stdio.h>
#define TAM 10

void swap ( int * a , int * b ) ;

void validar_no_primo ( int * a ) ;

void validar_positividad ( int * a ){
  int num;
  printf("Ingrese un número:");
  scanf("%d", &num);

  while (num < 0 || num > 100){
    printf("Ingrese un número entre 0 y 100: ");
    scanf("%d", &num);
  }

  *a = num;
}

void cargar_datos(int *arr, int tam)
{
  for (int i = 0; i < tam; i++){
    validar_positividad(arr+i);
  }
}

int main(void) {
  int arreglo[TAM];


  cargar_datos(arreglo, TAM);

  return 0;
}
