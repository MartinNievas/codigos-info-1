#include <stdio.h>

// From myself
void imprimir_binario(unsigned int num)
{
  for (int i = 31; i >= 0; i--){
    // mascara = 00000000000000001000000000000000
    // num     = 00000000000000001000100110100000
    //         = ________________________________
    // res     = 00000000000000001000000000000000
    printf("%c", (num & 1<<i) ? '1' : '0');
    if (i % 8 == 0)
      printf(" ");
  }
}

int main(void) {

  int a = 2;
  imprimir_binario(a);
  printf("%d\n", a);

  int b = 3;
  imprimir_binario(b);
  printf("%d\n", b);

  imprimir_binario(a&b);
  printf("%d\n", a & b); // & and

  return 0;
}
