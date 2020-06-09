#include <stdio.h>

int main(void)
{

  int num;

  printf("Ingrese un número entre 0 y 100: ");
  scanf("%d", &num);

  // 0)-(100
  while ( num > 100 || num < 0){
    printf("Ingrese un número entre 0 y 100: ");
    scanf("%d", &num);
  }

  printf("Usted ingresó: %d", num);

  return 0;
}
