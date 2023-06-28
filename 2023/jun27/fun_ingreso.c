#include <stdio.h>
// Definición de la función
int ingresar_legajo(void){
  int legajo;
  printf("Ingrese su legajo: ");
  scanf("%d", &legajo);

  return legajo;
}

int main(void) {

  int legajo;

  legajo = ingresar_legajo();

  printf("El legajo ingresado es: %d\n", legajo);

  return 0;
}
