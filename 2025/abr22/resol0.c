#include <stdio.h>

int main(void)
{
  // ##.###.###.###
  // int: 2^31 - 1
  // unsigned int: 2^32 - 1
  char inicial;
  char inicial2;
  int legajo;
  unsigned long int cuil;

  printf("ingrese su inical: ");
  scanf("%c" , &inicial);
  printf("ingrese su inical de apellido: ");
  scanf(" %c",&inicial2);
  printf("ingrese su legajo: ");
  scanf(" %d", &legajo);
  printf("ingrese su cuil:");
  scanf(" %lu", &cuil);
  printf("sus datos son: %c%c %d %lu\n", inicial, inicial2, legajo, cuil);

  return 0;
}
