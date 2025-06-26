#include <stdio.h>

float regresa_num_2(void);

int main(void) {

  int numero;
  numero = regresa_num_2();
  printf("%d\n", numero);
  return 0;
}

float regresa_num_2(void){
  float num = 3.3;
  return num;
}
