#include <stdio.h>
void saludo();

int main(void) {

  int num = 10;

  saludo();
  printf("num: %d\n", num);

  return 0;
}

void saludo(){
  int num = 7;
  printf("Hola 1R%d\n", num);
}
