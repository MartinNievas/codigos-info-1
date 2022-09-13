#include <stdio.h>
#include <string.h>

int main(void) {

  char cadena1[30] = "Primera cadena";
  char cadena2[]   = "Segunda cadena";
  char cadena3[100]= {0};

  // Concatenar cadenas
  printf("Cadenas unidas: %s\n", strcat(cadena1, cadena2));

  // Comparar dos cadenas
  //
  // Compara la cadena S1 con la cadena S2.
  // La función devuelve 0 si son iguales
  // mayor que 0 si S1 es mayor
  // menor que 0 si S1 es menor
  int tamanio = strcmp(cadena1, cadena2);
  printf("Tamaño: %d\n", tamanio);

  return 0;
}
