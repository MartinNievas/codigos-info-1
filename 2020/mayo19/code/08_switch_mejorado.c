#include <stdio.h>

int main(void)
{
  int op;

  printf("Ingrese una opción (0-1): ");
  scanf("%d", &op);

  switch(op)
  {
  case 0: printf("Usted ingresó la opción 0\n"); break;
  case 1: printf("Usted ingresó la opción 1\n"); break;
  default: printf("Usted ingresó una opción NO válida\n"); break;
  }


  return 0;
}

