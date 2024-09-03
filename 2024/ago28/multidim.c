#include <stdio.h>

int main(void) {

  int arreglo_bidimensional[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9},
  };

  float arreglo_tridim[3][3][3] = {0};

  arreglo_tridim[0][1][1] = 9.33;

  printf("%f\n", arreglo_tridim[0][1][1]);


  return 0;
}
