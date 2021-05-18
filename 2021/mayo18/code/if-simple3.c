#include <stdio.h>
// Determinar el estado académico en base a la nota ingresada por
// el usuario, teniendo en cuenta que:
//
// Promociona con nota mayor o igual a 8
// Aprueba con nota mayor o igual a 6 y menor que 8
// Libre con nota menor que 6

int main(void) {

  unsigned char nota; // 1 byte (0,255)
  /** char nota2; //1 byte (-127,126) */

  printf("Ingrese la nota: ");
  scanf("%hhu", &nota);

  if (nota < 6){
    printf("Libre\n");
  } else {
    if (nota >= 8){
      printf("Promociona\n");
    } else {
        printf("Aprueba\n");
    }
  }

  if (nota >= 8){
    printf("Promociona\n");
  } else {
    if (nota < 6){
      printf("Libre\n");
    } else {
      printf("Aprueba\n");
    }
  }



  return 0;
}
