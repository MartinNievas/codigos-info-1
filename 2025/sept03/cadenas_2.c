#include <stdio.h>

int main(void) {

  char palabras[10][10] = {
    {"Juan"},
    {"Pedroasdasd---"},
    {"otra cadena"}
  };

  // Imprimir las palabras cargadas
  printf("%s\n", palabras[0]);
  printf("%s\n", palabras[1]);
  printf("%s\n", palabras[2]);

  return 0;
}
