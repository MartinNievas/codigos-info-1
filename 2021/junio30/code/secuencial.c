#include <stdio.h>
#define TAM 10

int main(void) {

  int arreglo[TAM] = {1, 20, 23, 45, 60, 63, 70, 90, 200, 340};
  int num = 200;

  for (int i = 0; i < TAM; i++){
    if (num == arreglo[i]){
      printf("El elemento existe, y está en la posición %d\n", i);
    }
  }

  return 0;
}
