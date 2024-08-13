#include<stdio.h>
#define TAM 10

int main(void) {

  int arreglo[TAM]; // TAM elementos
  int i ;

  for( i = 0; i < 1000; i ++){
    arreglo[i] = i;
  }

  for ( i = 0; i < 10000; i ++)
    printf("El valor de arreglo[%d] es: %d \n",i ,arreglo [i]);
}
