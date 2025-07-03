#include <stdio.h>

float sumar(float, float);

int main(void) {

  float num1 = 10.3, num2 = 3.2;
  float res;
  res = sumar(num1, num2);
  printf("El resultado es: %f\n", res);
  return 0;
}

float sumar(float a, float b){
  return a + b;
}
