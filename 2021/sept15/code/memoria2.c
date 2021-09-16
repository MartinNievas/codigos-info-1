#include <stdio.h>
#define TAM 10

// 1bit   -> 2
// 2bit   -> 4
// 32bits -> 4mill.. 4Gb
// 33bits -> 8Gb
// 34bits -> 16Gb

int main(void) {

  long int arreglo[TAM];
  int *pint;
  char *pchar;

  for (int i = 0; i < TAM; i++)
    printf("%p\n", &arreglo[i]);

  printf("pchar: %ld\n", sizeof(pchar));
  printf("pint: %ld\n", sizeof(pint));

  printf("%ld\n", sizeof(arreglo));

  return 0;
}
