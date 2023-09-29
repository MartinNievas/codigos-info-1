#include <stdio.h>//kisinger leandro
#include <math.h>
float suma(float, float);
float resta(float, float);
float producto(float, float);
float divicion(float, float);
float potencia(float, float);

int main(void) {

  float num1, num2, resultado;
  float (*pfun[5])(float,float) = {suma, resta, producto,divicion,potencia};
  int op;

  printf("1)suma\n2)resta\n3)producto\n4)divicion\n5)potencia");
  printf("Ingrese una operación:\n");
  scanf("%d", &op);

  printf("Ingrese el primer número: ");
  scanf("%f", &num1);
  printf("Ingrese el segundo número: ");
  scanf("%f", &num2);

  resultado = pfun[op-1](num1,num2);

  printf("%f\n", resultado);


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
float divicion(float a, float b){
  return a/b;
}
float potencia(float a, float b){
  return pow(a, b);
}
