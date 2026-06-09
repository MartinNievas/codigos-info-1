#include <stdio.h>

int main(void) {

  int opcion;

  printf("1. Saludo Hola\n2. Saludo Chau\n");
  printf("Ingrese una opción:\n");
  scanf("%d", &opcion);

  if(opcion == 1){
    printf("Hola\n");
  } else if (opcion == 2){
    printf("Chau\n");
  }else{
    printf("Opción no válida\n");
  }

  return 0;
}
