#include <stdio.h>
#define TAM 10

int main(void) {

  int arreglo[TAM] = {123,2132,332,42,54};
  arreglo[8] = 50;
  arreglo[1] = -10;

  for (int i = 1; i <= TAM; i++){
    printf("%d: %d\n", i, arreglo[i]);
  }

  return 0;
}
