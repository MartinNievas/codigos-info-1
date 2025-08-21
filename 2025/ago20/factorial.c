#include <stdio.h>

int fact(int n)
{
  if (n == 0)
    return 1;
  printf("n: %d", n);
  return n * fact(n-1);
}


int main(void) {

  printf("Factoraial: %d\n", fact(5));

  return 0;
}
