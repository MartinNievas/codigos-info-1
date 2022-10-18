#include <stdio.h>

void imprimir_binario(unsigned int num)
{
  for (int i = 31; i >= 0; i--){
    printf("%c", (num & 1<<i) ? '1' : '0');
    if (i % 8 == 0)
      printf(" ");
  }
}

int main(void) {

  int a = 0xFF;
  int b = 0xAA;

  imprimir_binario(a);
  printf("\n");
  imprimir_binario(0x0A);
  printf("\n");
  imprimir_binario(a & 0x0A);

  return 0;
}
