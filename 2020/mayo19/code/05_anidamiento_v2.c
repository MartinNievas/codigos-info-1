#include <stdio.h>


int main(void)
{
  int nota = 8;

  if (nota >= 6)
    if (nota >= 8)
      printf("Promocionado\n");
    else
      printf("Aprobado\n");
  else
    printf("Desaprobado\n");

  return 0;
}
