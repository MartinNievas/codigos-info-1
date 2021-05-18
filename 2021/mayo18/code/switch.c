#include <stdio.h>

int main(void) {

  unsigned int nota = 11;

  switch(nota){
    case 10:
    case 9:
    case 8:
      printf("Promocionado\n");
      break;
    case 7:
    case 6:
      printf("Aprobado\n");
      break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
      printf("Libre\n");
      break;
    default:
      printf("Nota no válida\n");
  }

  return 0;
}
