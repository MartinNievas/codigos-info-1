#include <stdio.h>

int main(void) {

  int a = 200, b = 2000;

  // Versión sin operadores
  if (a >= 100){
    if (b < 1000){
      printf("Se cumple\n");
    }
    else {
      printf("No se cumple\n");
    }
  } else {
    printf("No se cumple\n");
  }

  // Versión con operadores
  if (a >= 100 && b < 1000){
    printf("Se cumple\n");
  } else {
    printf("No se cumple\n");
  }

  return 0;
}
