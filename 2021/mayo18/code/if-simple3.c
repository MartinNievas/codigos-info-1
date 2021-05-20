#include <stdio.h>
// Determinar el estado académico en base a la nota ingresada por
// el usuario, teniendo en cuenta que:
//
// Promociona con nota mayor o igual a 8
// Aprueba con nota mayor o igual a 6 y menor que 8
// Libre con nota menor que 6

int main(void) {

  unsigned char nota;

  printf("Ingrese la nota: ");
  scanf("%hhu", &nota);

  if (nota >= 8)
    printf("Promocionó\n");
  else if (nota >= 6)
    printf("Aprobado\n");
  else
    printf("Libre\n");


  return 0;
}
