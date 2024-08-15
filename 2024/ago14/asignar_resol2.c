#include <stdio.h>
#define TAM 4
//MATEO ZANEL 402108
int main(void) {

  int arreglo_a[TAM];

  for(int i=0;i<TAM;i++){
    printf("ingrese un numero cualquiera: ");
    scanf("%d",&arreglo_a[i]);
  }

  for(int i=0;i<TAM;i++){
    printf("arreglo[%d]: %d\n", i, arreglo_a[i]);
  }
  return 0;
}

