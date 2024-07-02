#include <stdio.h>
// Imprimir una tabla

int main(void) {

  int i,j;

  for (i = 0; i < 10; i++){
    for (j = 0; j < 10; j++){
      if (i <= j)
        printf("%4d ", i*10+j);
      else
        printf("     ");
    }
    printf("\n");
  }

  return 0; }
