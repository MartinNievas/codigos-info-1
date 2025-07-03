#include <stdio.h>

// Definicición
void incrementar(void){
  static int num = 0;
  printf("%d\n", num++);
}

int main(void) {

  incrementar();
  incrementar();
  incrementar();

  return 0;
}
