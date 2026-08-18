#include <stdio.h>

// Definición
void saludar(void)
{
  static int num = 0;
  printf("Hola! %d\n", num++);
}

int main(void) {

  saludar();
  saludar();
  saludar();

  return 0;
}
