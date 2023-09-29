#include <stdio.h>

float suma(float, float);
float resta(float, float);
float producto(float, float);

int main(void) {

  float num1, num2, resultado;
  int op;

  float (*pf)(float, float);

  printf("1) suma\n2)resta\n3)producto\n");
  printf("Ingrese una operación:\n");
  scanf("%d", &op);

  printf("Ingrese el primer número: ");
  scanf("%f", &num1);
  printf("Ingrese el segundo número: ");
  scanf("%f", &num2);

  pf = resta;

  switch(op){
    case 1:
      resultado = pf(num1, num2);
      break;
    case 2:
      resultado = resta(num1,num2);
      break;
    case 3:
      resultado = producto(num1,num2);
      break;
  }

  printf("El resultado es: %f\n", resultado);

  return 0;
}

float suma(float a, float b) {
  return a+b;
}
float resta(float a, float b){
  return a-b;
}
float producto(float a, float b){
  return a*b;
}
