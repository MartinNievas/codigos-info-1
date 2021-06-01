#include <stdio.h>

int main(void) {
  int num = 10, otro_num = 100;
  printf("Inicio\n");

  TAG2:
    printf("Desarrollo\n");
  goto TAG2;

  return 0;
}
