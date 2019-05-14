#include <stdio.h>

int main(void)
{
  int num;

  printf("Ingrese un número: ");
  scanf("%d", &num);

  if (num % 2 == 0) 
  {
    printf("El número es par\n");
  }
  else 
  {
    printf("El número no es par\n");
  }

  return 0;
}
