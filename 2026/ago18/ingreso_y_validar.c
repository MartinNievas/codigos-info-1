#include <stdio.h>

// Esta función solicita ingresar un número
// entre 30 y 120. Regresa el número validado
int ingreso_y_validar_num(void);

int main(void) {

  int num = ingreso_y_validar_num();
  printf("El número es: %d\n", num);

  return 0;
}
