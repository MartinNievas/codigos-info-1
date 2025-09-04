#include <stdio.h>

int main(void) {

  int numero;
  int *pnum;

  float fnum;
  float *pfnum;

  char num_c;
  char *pnum_c;

  printf("Tamaño de int:  %ld\n", sizeof numero);
  printf("Tamaño de float:  %ld\n", sizeof fnum);
  printf("Tamaño de char:  %ld\n", sizeof num_c);
  printf("Punteros:\n");

  printf("Tamaño de pnum: %ld\n", sizeof pnum);
  printf("Tamaño de fpnum: %ld\n", sizeof pfnum);
  printf("Tamaño de fpnum: %ld\n", sizeof pnum_c);

  return 0;
}
