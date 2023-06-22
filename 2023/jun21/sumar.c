#include <stdio.h>
void sumar(float a, float b){
  printf("La suma es: %f\n", a+b);
  a+=10;
  printf("a Ahora vale:%f\n", a);
}

int main(void) {

  float num1, num2;
  printf("Ingrese num1: ");
  scanf("%f", &num1);
  printf("Ingrese num2: ");
  scanf("%f", &num2);
  // Llamado a la función con argumentos
  sumar(num1, num2);
  printf("num1 Ahora vale: %f\n", num1);

  return 0;
}
