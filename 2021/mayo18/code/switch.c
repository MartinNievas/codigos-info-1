#include <stdio.h>

int main(void) {

  unsigned int nota = 12;

  switch(nota)
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      printf("Libre!\n"); break;
    case 6:
    case 7:
      printf("Aprueba!\n");
      break;
    case 8:
    case 9:
    case 10:
      printf("Promociona!\n");
      break;
    default:
      printf("La nota no es válida\n");
  }

  return 0;
}
