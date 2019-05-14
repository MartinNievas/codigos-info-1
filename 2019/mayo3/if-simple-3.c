#include <stdio.h>

/** Cuidado */

int main(void)
{
  int temperatura;

  printf("Ingrese la temperatura: ");
  scanf("%d", &temperatura);

  if (temperatura > 30) 
    printf("Encender aire\n");
  else
    printf("Apagar aire\n");
    printf("El aire debe estar apagado\n");

  return 0;
}
