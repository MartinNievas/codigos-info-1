#include <stdio.h>

int main(void) {

  int nota;

  printf("Ingrese la nota: ");
  scanf("%d", &nota);

  switch(nota){

  case 10:
  case 9:
  case 8:
    printf("Promociona\n");
  break;
  case 7:
  case 6:
    printf("Regular\n");
  break;
  case 5:
  case 4:
  case 3:
  case 2:
  case 1:
    printf("Desaprueba\n");
  break;
  default:
    printf("Nota no válida\n");
  break;
  }

  return 0;
}
