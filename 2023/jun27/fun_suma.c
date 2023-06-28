#include <stdio.h>
// Definición de la función sumar
float sumar(float n1, float n2){
  return n1 + n2;
}

int main(void) {

  float num1 = 10, num2 = 20, sum;

  sum = sumar(num1,num2);

  printf("La suma es: %f\n", sum);

  return 0;
}
