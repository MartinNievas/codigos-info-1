#include <stdio.h>

int main(void)
{

  int num;

  do {
    printf("Ingrese un número entre 0 y 100: ");
    scanf("%d", &num);
  } while (num > 100 || num < 0);
  // 0)-(100

  printf("Usted ingresó: %d", num);

  return 0;
}
