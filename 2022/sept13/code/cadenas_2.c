#include <stdio.h>
#include <string.h>

int main(void) {

  char cadena1[30] = "Primera cadena";
  char cadena2[100]= {0};

  // Copiar cadena1 a cadena 2
  strcpy(cadena2, cadena1);
  printf("Cadena 2: %s\n", cadena2);


  return 0;
}

