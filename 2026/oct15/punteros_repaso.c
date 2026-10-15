#include <stdio.h>

int sumar(int a, int b){
  return a + b;
}

int main(void) {
  int (*pf)(int, int);

  pf = sumar;

  printf("%d\n", sumar(1,2));
  printf("%d\n", pf(1,2));
  return 0;
}
