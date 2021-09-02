#include <stdio.h>

void multiplicar(int *a, int b){

  int resultado;

  resultado  = *a * b;
  printf("%d\n", resultado);

  *a *= *a;

}

int main(void) {

  int num1 = 10;
  int num2 = 20;

  multiplicar(&num1, num2);
  printf("%d\n", num1);


  return 0;
}
