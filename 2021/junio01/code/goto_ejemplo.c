#include <stdio.h>

int main(void) {
  int var;
  printf("Inicio\n");

  // No lo utilizamos
  goto TAG1; // Se saltea lo que está hasta el TAG1
  printf("Desarrollo\n");
  TAG1:

  return 0;
}
