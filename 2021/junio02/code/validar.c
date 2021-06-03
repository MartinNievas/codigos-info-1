#include <stdio.h>

int main(void) {

  int nota;

  //printf("Ingrese una nota válida: ");
  //scanf("%d", &nota);
  //while (nota < 0 || nota > 10){
  //  printf("Ingrese una nota válida: ");
  //  scanf("%d", &nota);
  //}

  do {
    printf("Ingrese una nota válida: ");
    scanf("%d", &nota);
  } while ( nota < 0 || nota > 10);

  return 0;
}
