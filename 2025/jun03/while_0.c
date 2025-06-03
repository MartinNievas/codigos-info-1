#include <stdio.h>

int main(void) {

  int nota;

  printf("Ingrese nota: ");
  scanf("%d", &nota);

  while ( nota < 0 || nota > 10){
    printf("Ingrese nota: ");
    scanf("%d", &nota);
  }
  printf("La nota %d es válida\n", nota);

  return 0;
}
