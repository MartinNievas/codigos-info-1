#include <stdio.h>
#define TAM 10000

int main(void) {

  int tam;

  printf("Ingrese tam: ");
  scanf("%d", &tam);

  int arreglo[tam]; // VLA - Variable Length Array
  printf("%ld\n", sizeof arreglo);

  for (int i = 0; i < tam; i++){
    printf("Ingrese %d: ", i);
    scanf("%d", &arreglo[i]);
  }

  return 0;
}
