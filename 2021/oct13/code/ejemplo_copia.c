#include <stdio.h>
#include <string.h>

int main(void) {

  char *nombre = "Martin";
  char destino[20];


  strcpy(destino, nombre);

  printf("%s\n", destino);

  return 0;
}
