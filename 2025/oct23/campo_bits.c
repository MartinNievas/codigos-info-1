#include <stdio.h>
struct campobits{
  unsigned int c1:5;
};

int main() {
  struct campobits pato;
  // Validar
  unsigned int temp;
  scanf("%u", &temp);

  pato.c1=temp;
  printf("\nn: %d", pato.c1);

  return 0;
}
