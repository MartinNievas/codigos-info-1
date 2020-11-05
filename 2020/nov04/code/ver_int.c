#include <stdio.h>

void imprimir_bits(unsigned int);

int main(void) {
  unsigned int x;
  printf("%s", "Ingresar un entero positivo: ");
  scanf("%u", &x);
  imprimir_bits(x);

  return 0;
}

// Según el libro
void imprimir_bits(unsigned int num)
{

  unsigned int mascara = 1 << 31;
  // 10000000000000000000000000000000
  printf("%10u = ", num);

  for (unsigned int c = 1; c <= 32; ++c) {
    // mascara = 10000000000000000000000000000000
    // num     = 00000000000000001000100110100000
    //         = ________________________________
    // res     = 00000000000000000000000000000000
    printf("%10u = ", num);
    putchar(num & mascara ? '1' : '0');
    num <<= 1;
    if (c % 8 == 0)
      printf(" ");
  }
  printf("\n");
}
