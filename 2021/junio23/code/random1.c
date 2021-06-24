#include <stdio.h>
// Como generar números aleatorios?
#include <stdlib.h>
#include <time.h>

int main(void)
{

  int num;
  srand(time(NULL));

  // Imprimimos 10 números "aleatorios" en un rango determinado
  // por ejemplo entre 10 y 99
  for (int i = 0; i < 200; i++){
    // rand() % a + b;
    num = rand() % 90 + 10;
    printf("%d\n", num);
  }

  return 0;
}
