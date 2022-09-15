#include <stdio.h>
#include <string.h>

int main(void) {

  const char *cadena1 = "algos";
  const char *cadena2 = "algo";

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
