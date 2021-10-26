#include <stdio.h>
// Notas realizadas durante la clase

unsigned int imprimir_binario(unsigned int num)
{
  for (int i = 31; i >= 0; i--){
    printf("%c", (num & 1<<i) ? '1' : '0');
    if (i % 8 == 0)
      printf(" ");
  }
  printf("\n");
  return num;
}

int main(void) {

  // modifical rvalue
  int num = (1<<10)+(1<<5);


  int mascara = (1<<8)-1;
  printf("mascara: %d\n", mascara);

  // numero  = 00000000000000000000010000100000
  // mascara = 00000000000000000000000001111111
  //         = 00000000000000000000000000100000

  printf("mascara: \n");
  imprimir_binario(mascara);
  printf("resultado: %u\n", imprimir_binario(num & mascara)); // & and

  return 0;
}
