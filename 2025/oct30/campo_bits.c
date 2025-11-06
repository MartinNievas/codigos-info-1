#include <stdio.h>
struct campobits{
  int c1:2;
};

int main() {
  struct campobits num;

  // Con el menor tamaño posible para guardar un número
  // entre -8 y 8

  printf("\nn: %d", num.c1);

  return 0;
}
