#include <stdio.h>

int main(void) {

  char palabras[10][50] = {
    {"Juan"},
    {"Pedro"}
  };

  // Imprimir las palabras cargadas
  printf("%s\n", palabras[0]);
  printf("%s\n", palabras[1]);

  return 0;
}
