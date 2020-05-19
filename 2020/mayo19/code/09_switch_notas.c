#include <stdio.h>

int main(void)
{
  int nota;

  printf("Ingrese una calificación (1-10): ");
  scanf("%d", &nota);

  switch(nota)
  {
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
    printf("Desaprobado\n");
    break;
  default:
    printf("Calificación no válida\n");
  break;
  }


  return 0;
}

