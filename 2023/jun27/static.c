#include <stdio.h>
void imprimir_incrementado(void)
{
  static int cont = 0;
  printf("contador: %d\n", cont++);
}

int main(void) {

  for (int i = 0; i < 10; i++){
    imprimir_incrementado();
  }

  return 0;
}
