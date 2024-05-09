#include <stdio.h>


int main(void) {

  float num1;
  float num2;

  printf("Ingrese el primer número: ");
  scanf("%f", &num1);
  printf("Ingrese el segundo número: ");
  scanf("%f", &num2);
  float suma;
  suma = num1 + num2;

  printf("La suma es: %010.3f\n", suma);
  printf("La resta es: %f\n", num1-num2);
  printf("El cociente es: %f\n", num1/num2);
  printf("El producto es: %f\n", num1*num2);

  return 0;
}
