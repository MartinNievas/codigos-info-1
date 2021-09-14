#include <stdio.h>
#define TAM 10

// 32bits -> 4Gb
// 33bits -> 8Gb
// 34bits -> 16Gb
// 64bits -> ?Gb

int main(void) {

  int arreglo[TAM];
  char *pchar;
  int *pint;
  float *pfloat;


  for (int i = 0; i < TAM; i++)
    printf("%p\n", &arreglo[i]);

  printf("pchar: %d\n", sizeof(pchar));
  printf("pint: %d\n", sizeof(pint));
  printf("pfloat: %d\n", sizeof(pfloat));

  //printf("%d\n", sizeof(arreglo));

  return 0;
}
