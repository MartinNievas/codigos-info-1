#include <stdio.h>

void incrementar(int temperatura)
{
  temperatura++;
  printf("dentro de incrementar: %d\n", temperatura);
}

int main(void) {

  int temperatura;

  printf("Ingrese una temperatura: ");
  scanf("%d", &temperatura);

  printf("Dentro de main: %d\n", temperatura);
  incrementar(temperatura);
  printf("Dentro de main: %d\n", temperatura);

  return 0;
}
