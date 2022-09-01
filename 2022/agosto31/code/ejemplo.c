#include <stdio.h>

void incrementa(int b)
{
  ++b;
}


int main(void) {

  int b = 1;
  incrementa(b);
  printf("%d\n", b);

  return 0;
}
