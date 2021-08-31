#include <stdio.h>

int funcion_imprimir(int, float);

int main(void) {

  int num1 = 1;
  float num2 = 10.21;

  funcion_imprimir(num2, num1);


  return 0;
}

int funcion_imprimir(int a, float b){

  printf("%d %f\n", a, b);

  return 10;

}
