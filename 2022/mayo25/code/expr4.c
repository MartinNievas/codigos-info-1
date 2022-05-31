#include <stdio.h>

int main(void) {

  int a = 10, b = 100, c = 30;

  if (a < b && (b > 30 || c == 30)){
    printf("Se cumple\n");
  } else {
    printf("No se cumple\n");
  }

  return 0;
}
