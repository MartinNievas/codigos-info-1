#include <stdio.h>
#include "mi_biblioteca.h"

int main(void) {

  float num1 = 10.1;
  float num2 = 13.1;
  float num3;

  num3 = suma(num1, num2);
  printf("%10.23f\n", num3);

  return 0;
}

