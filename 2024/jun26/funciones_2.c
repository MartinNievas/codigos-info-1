#include <stdio.h>

void determinar_par(void)
{
  int num;

  printf("Ingrese un número: ");
  scanf("%d", &num);

  if (num % 2 == 0)
    printf("El número es par!\n");
  else
    printf("El número es impar!\n");
}

int main(void)
{

  /* Llamado a la función*/
  determinar_par();

  return 0;
}
