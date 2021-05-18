#include <stdio.h>

int main(void) {

  int prom = 10;

  printf("El promedio es: %i\n", prom - 1);

  prom = prom - 1;
  prom -= 1;

  printf("Ahora promedio es: %i\n", prom);

  prom = 10;

  prom /= 2;
  printf("Ahora promedio es: %i\n", prom);

  // prom vale 5
  prom *= 2;
  printf("Ahora promedio es: %i\n", prom);


  return 0;
}
