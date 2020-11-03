#include <stdio.h>
// Notas realizadas durante la clase

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
  printf("%d\n", a);

  int b = 3;

  printf("%d\n", a & b);

  return 0;
}
