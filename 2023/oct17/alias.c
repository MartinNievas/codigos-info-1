#include <stdio.h>

typedef
int
entero;

struct punto2D {
  float x;
  float y;
};

int main(void) {

  int contador1 = 10;
  entero contador2 = 20;

  printf("Contador1: %d\n", contador1);
  printf("Contador2: %d\n", contador2);

  return 0;
}
