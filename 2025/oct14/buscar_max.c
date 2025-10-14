#include <stdio.h>

int main(void) {

  int arreglo[4] = {1, 44, 5, 9};

  int max;

  max = arreglo[0];

  for (int i = 0; i < 4; i++){
    if (arreglo[i] > max)
      max = arreglo[i];
  }

  return 0;
}
