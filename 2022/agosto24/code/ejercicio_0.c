#include <stdio.h>
// Comenzar por este ejercicio

float suma(float, float);
float resta(float, float);
float producto(float, float);
float dividir(float, float);
float resto(float, float);
// Solicitar al usuario que ingrese un número dentro de las
// opciones del menú
int ingresar_y_validar_operacion();
// Solicitar al usuario que ingrese un número
float ingresar_operando();

int main(void) {

  int op;
  float num1, num2;
  printf("1. Suma\n2. Resta\n3. Producto\n4. División\n5. Resto\n");

  op = ingresar_y_validar_operacion();

  num1 = ingresar_operando();
  num2 = ingresar_operando();

  switch(op){

    case 1: // Suma
      // Completar
      break;

      //Completar

    default:
      // Completar
      break;
  }


  return 0;
}

// Completar con las definiciones
