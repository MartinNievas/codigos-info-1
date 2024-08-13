#include <stdio.h>

void saludo()
{
  static int num = 0;
  printf("Hola %d\n", num++);
  if(num < 10)
    saludo();
  printf("Hola %d\n", num);
}

int main(void) {

  saludo();

  return 0;
}
