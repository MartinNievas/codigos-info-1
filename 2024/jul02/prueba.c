#include <stdio.h>

void saludo_1(void)
{
  static int contador = 0;
  printf("Contador: %d\n", contador++);
  if( contador < 100)
    saludo_1();
}


int main(void) {

  saludo_1();

  return 0;
}
