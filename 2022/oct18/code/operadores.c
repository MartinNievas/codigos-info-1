#include <stdio.h>

void imprimirBinario(unsigned int);

int main(void) {

  unsigned int numero_1 = 65535;
  unsigned int mascara = 1;

  puts("\nNúmeros:");
  imprimirBinario(numero_1);
  imprimirBinario(mascara);

  puts("Operación AND &");
  imprimirBinario( numero_1 & mascara );
  // demonstrate bitwise inclusive OR (|)

  puts("\nNúmeros:");
  numero_1 = 15;
  mascara = 241;
  imprimirBinario(numero_1);
  imprimirBinario(mascara);
  puts("Operación OR |");
  imprimirBinario( numero_1 | mascara );

  puts("\nNúmeros:");
  numero_1 = 139;
  mascara = 199;
  imprimirBinario(numero_1);
  imprimirBinario(mascara);

  puts("Operación OR exclusiva ^");
  imprimirBinario( numero_1 ^ mascara );

  puts("\nNúmero:");
  numero_1 = 21845;
  imprimirBinario(numero_1);
  puts("\nComplemento a uno:");
  imprimirBinario( ~numero_1 );

  return 0;
}

// Imprime la representación binaria de un número
void imprimirBinario(unsigned int num)
{
  unsigned int mascara = 1 << 31;
  printf("%10u = ", num);
  for (unsigned int c = 1; c <= 32; c++) {
    putchar(num & mascara ? '1' : '0');
    num <<= 1;
    if (c % 8 == 0) {
      putchar(' ');
    }
  }
  putchar('\n');
}
