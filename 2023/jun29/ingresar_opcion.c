#include <stdio.h>
int ingresar_opcion(void);

int main(void) {

  int op;
  op = ingresar_opcion();
  printf("Usted ingresó un: %d\n", op);

  return 0;
}

// Definición de la función
int ingresar_opcion(void){
  int option;
  printf("Ingrese una opción: ");
  scanf("%d", &option);
  return option;
}
