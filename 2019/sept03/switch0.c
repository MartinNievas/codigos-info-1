#include <stdio.h>

int main(void)
{
  int op;

  printf("Ingrese una opción: ");
  scanf("%d", &op);

  switch(op)
  {
  case 1: printf("Opción 1!\n"); break;
  case 2: printf("Opción 2!\n"); break;
  case 3: printf("Opción 3!\n"); break;
  default: printf("Opción no válida!\n");break;
  }

  return 0;
}
