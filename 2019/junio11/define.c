#include <stdio.h>
#define CONSTANTE 2
#define OTRA_CONST 2.0


int main(void)
{
  int num;

  printf("Ingrese un número: ");
  scanf("%d", &num);

  if (num == CONSTANTE) 
    printf("El número es 2!\n");
  else 
    printf("El número NO es 2\n");


  return 0;
}
