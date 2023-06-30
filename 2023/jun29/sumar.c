#include <stdio.h>
float sumar(float , float);

int main(void) {

  float num1, num2, resultado;
  printf("Ingrese num1: ");
  scanf("%f", &num1);
  printf("Ingrese num2: ");
  scanf("%f", &num2);
  // Llamado a la función con argumentos
  resultado = sumar(num1, num2);
  printf("num1 Ahora vale: %f\n", resultado);

  return 0;
}

float sumar(float a, float b){
  return  a + b;
}

