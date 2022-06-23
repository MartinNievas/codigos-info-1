#include <stdio.h>

int main(void) {

  char cadena[] = "Esto imprime un 0";

  printf("%s\n", cadena);
  cadena[4] = '0';
  printf("%s\n", cadena);

  return 0;
}
