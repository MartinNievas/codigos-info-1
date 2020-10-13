#include <stdio.h>

void imprimir_binario(unsigned int num)
{
  for (int i = 8; i >= 0; i--)
    printf("%c", (num & 1<<i) ? '1' : '0');
}


int main(void)
{

  unsigned int a = 43;

  printf("a: ");
  imprimir_binario(a);
  printf(" = %d", a);
  int c = 0;

  // La parte importante está acá:
  c = ~a;
  printf("\nc: ");
  imprimir_binario(c);

  printf(" = %d\n", c );

  return 0;
}

