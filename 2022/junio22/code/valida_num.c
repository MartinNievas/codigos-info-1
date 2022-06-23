#include <stdio.h>

int main(void) {

  int num, min = 30, max = 100;


  do {
    printf("Ingrese un número entre %d y %d: ", min, max);
    scanf("%d", &num);
  } while (num > max || num < min);

  return 0;
}
