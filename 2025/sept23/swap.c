#include <stdio.h>

int main(void) {

  int arreglo[2] = {1, 10};
  int temp;

  temp = arreglo[0];
  arreglo[0] = arreglo[1];
  arreglo[1] = temp;

  printf("pos 0: %d\n", arreglo[0]);
  printf("pos 1: %d\n", arreglo[1]);

  return 0;
}
