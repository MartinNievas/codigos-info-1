#include <stdio.h>


int main(void) {

  int numero = 10;

  printf("%d\n", numero);

  // Utilizamos en & en el printf para obtener la dirección de memoria
  // de la variable numero
  printf("%X\n", &numero);

  return 0;
}
