#include <stdio.h>
#include <math.h>
int ingresar_y_validar_opcion(void);
float suma(float, float);
float resta(float, float);
float multiplicacion(float, float);
float division(float, float);
float potencia(float, float);
float raiz_cuadrada(float);

int main(void) {
  int op;

  printf("1.Suma\n2.Resta\n3.Multiplicación\n");
  printf("4.División\n5.Potencia\n6.Raiz cuadrada\n");
  printf("Ingrese la operación: ");
  op = ingresar_y_validar_opcion();

  return 0;
}
