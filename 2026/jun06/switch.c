#include <stdio.h>

int main(void) {
  char opcion;

  printf("a. Saludo Hola\nb. Saludo Chau\n");
  printf("Ingrese una opción:\n");
  scanf("%c", &opcion);

  switch(opcion){
    case 'a':
      printf("Hola\n");
      break;
    case 'b':
      printf("Chau\n");
      break;
    default:
      printf("Opción no válida\n");
  }

  return 0;
}
