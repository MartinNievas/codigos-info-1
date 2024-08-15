
#include <stdio.h>
#define TAM 4

int main(void) {

  int arreglo_a[TAM];
  int num;

  for(int i = 0; i < TAM; i++){
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    arreglo_a[i] = num;
    printf("arreglo_a[%d]: %d\n\n", i, arreglo_a[i]);
  }

  return 0;
}
