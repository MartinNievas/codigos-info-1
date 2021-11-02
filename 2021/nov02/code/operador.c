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

  int a = 1<<30;
  imprimir_binario(a);

  return 0;
}
