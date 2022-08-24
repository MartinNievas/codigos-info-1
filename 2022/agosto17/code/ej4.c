#include <stdio.h>

int ret_max(int a, int b)
{
  return a>b?a:b;
}

int main(void) {

  int num1, num2;
  printf("Ingrese num1: ");
  scanf("%d", &num1);
  printf("Ingrese num2: ");
  scanf("%d", &num2);
  printf("El máximo es: %d\n", ret_max(num1, num2));

  return 0;
}
