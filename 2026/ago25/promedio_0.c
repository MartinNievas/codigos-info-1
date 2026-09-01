#include <stdio.h>
/** Forma incorrecta de implementar la carga
 *  No escala para tamaños de arreglo más grandes*/

int main(void) {

  int notas[5];

  printf("Inrese la nota 0: ");
  scanf("%d", &notas[0]);
  printf("Inrese la nota 1: ");
  scanf("%d", &notas[1]);
  printf("Inrese la nota 2: ");
  scanf("%d", &notas[2]);
  printf("Inrese la nota 3: ");
  scanf("%d", &notas[3]);
  printf("Inrese la nota 4: ");
  scanf("%d", &notas[4]);

  printf("La nota 0 es: %d\n", notas[0]);
  printf("La nota 1 es: %d\n", notas[1]);
  printf("La nota 2 es: %d\n", notas[2]);
  printf("La nota 3 es: %d\n", notas[3]);
  printf("La nota 4 es: %d\n", notas[4]);

  return 0;
}
