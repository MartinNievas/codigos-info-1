#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int num;

  srand(time(NULL));

  // num = a + rand() % b;
  // a es el desplazamiento
  // b es la amplitud del intervalo
  num = 1 + rand() % 11;

  printf("%d\n", num);

  return 0;
}
