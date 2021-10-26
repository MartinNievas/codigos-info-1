#include <stdio.h>

void imprimir_bits(unsigned int);

int main(void) {
  unsigned int x;
  printf("%s", "Ingresar un entero positivo: ");
  scanf("%u", &x);
  imprimir_bits(x);

  return 0;
}

void imprimir_bits(unsigned int num)
{

  unsigned int mascara = 1 << 31;
  printf("%10u = ", num);

  for (unsigned int c = 1; c <= 32; ++c) {
    putchar(num & mascara ? '1' : '0');
    num <<= 1;
    if (c % 8 == 0)
      printf(" ");
  }
  printf("\n");
}
