#include <stdio.h>
#include <math.h>
int ingresar_y_validar_opcion(void);
float suma(float, float);
float resta(float, float);
float multiplicacion(float, float);
float division(float, float);

float potencia(float a , float b);
float raiz_cuadrada(float);

int main(void) {
  int op;
  float res;

  res = pow(2.0, 3.0);
  printf("El resultado es: %f\n", res);

  res = sqrt(2.0);
  printf("El resultado es: %f\n", res);


  return 0;
}
