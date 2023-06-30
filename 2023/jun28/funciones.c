#include <stdio.h>
// Declaración de funciones
void saludo_2(void);
void saludo_1(void);

int main(void) {

  saludo_1();
  saludo_2();

  return 0;
}

void saludo_1(void)
{
  printf("Saludo1\n");
}

void saludo_2(void)
{
  printf("Saludo2\n");
  saludo_1();
}
