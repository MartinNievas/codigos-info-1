#include <stdio.h>

int main(void) {

  int arreglo_multidim[2][2][2] = {
    { { 1, 2 }, { 3, 4 } },
    { { 5, 6 }, { 7, 8 } }
  };

  printf("Elemento [0][1][1]: %d\n", arreglo_multidim[0][1][1]);

  return 0;
}
