#include <stdio.h>
/** Completar la función para que solo se permitan ingresar número entre 10 y 100 */

int ingreso_y_validacion(void);

int main(void) {

  int numero_positivo;

  numero_positivo = ingreso_y_validacion();

  printf("El número es: %d\n", numero_positivo);

  return 0;
}
