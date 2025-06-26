#include <stdio.h>

void saludar(void);

int main(void) {

  int num = 10;
  saludar();
  printf("num vale: %d\n", num);

  return 0;
}

void saludar(void){
  int num = 1;
  printf("Hola 1R%d\n", num);
}
