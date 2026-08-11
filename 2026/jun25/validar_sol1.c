#include <stdio.h>

int main(void) {
  int nota = 1;

  do {
    printf("Ingrese una nota en un rango del 1 al 10: ");
    scanf("%d" , &nota);
  } while(nota < 1 || nota > 10);
  //} while(!(nota > 0 && nota <= 10));

  printf("La nota ingresada es: %d" , nota);
  return 0;
}
