#include <stdio.h>

float suma(float, float);
float resta(float, float);
float producto(float, float);

int main(void) {

  float num1, num2, resultado;
  float (*pfun[3])(float,float) = {suma, resta, producto};
  int op;
  int indice = 0;
  do{
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    resultado = pfun[indice](num1,num2);
    indice++;
    indice = indice%3;

    printf("%f\n", resultado);
  }while(op != -1);



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
