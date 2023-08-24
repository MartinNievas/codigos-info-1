#include <stdio.h>
#define TAM 4

int main(void) {

  int arreglo[TAM] = {0};

  for (int i = 0; i < TAM; i++){
    printf("ingresar la nota %d:",i);
    scanf("%d", &arreglo[i]);
  }

  for (int i = 0; i < TAM; i++){
    printf("%d\n", arreglo[i]);
  }


  return 0;
}
