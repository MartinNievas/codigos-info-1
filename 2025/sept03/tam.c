#include <stdio.h>

int main(void) {

  char *pnum_c;
  int *pnum_i;
  float *pnum_f;

  printf("tamaño: %ld\n", sizeof pnum_c);
  printf("tamaño: %ld\n", sizeof pnum_i);
  printf("tamaño: %ld\n", sizeof pnum_f);


  return 0;
}
