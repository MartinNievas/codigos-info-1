#include <stdio.h>

int main(void)
{
  int nota;

  printf("Ingrese la nota: ");
  scanf("%d", &nota);

  if (nota >= 8)
    printf("Promocionado\n");
  else if (nota >= 6)
    printf("Aprobado\n");
  else
    printf("Desaprobado\n");

  return 0;
}
