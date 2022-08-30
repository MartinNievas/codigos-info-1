#include <stdio.h>

void incrementar(int a)
{
  a++;
}

int main(void) {

  int var_a = 0;
  printf("%d\n", var_a);
  incrementar(var_a);
  printf("%d\n", var_a);

  return 0;
}
