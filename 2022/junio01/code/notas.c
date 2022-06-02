#include <stdio.h>

int main(void) {

  int nota = 8;
  // Aprobado >=8
  // Regular <8 y >=6
  // Desaprobado < 6

  if (nota >= 8){
    printf("Aprobado\n");
  } else {
    if (nota >= 6){
      printf("Regular\n");
    } else {
      printf("Desaprobado\n");
    }
  }



  return 0;
}
