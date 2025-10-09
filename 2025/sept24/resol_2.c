
#include <stdio.h>

// Declaración de las funciones de operaciones
int ingresar_opcion(void);
float suma(float a, float b);
float resta(float a, float b);
float division(float a, float b);
float multiplicacion(float a, float b);

// Función para operar que recibe el puntero a la función de la operación
float operar(float (*operacion)(float, float), float a, float b);

int main(void) {
  int opcion;
  float num1, num2, resultado;
  float (*arreglo[4])(float, float) = {
    suma,
    resta,
    division,
    multiplicacion
  };

  // Requisito 1: Presentar el menú
  opcion = ingresar_opcion();

  // Requisito2: Solicitar los dos números al usuario
  printf("\n------------------------------------------------------------------");
  printf("\nIngrese el primer numero: ");
  scanf(" %f", & num1 );
  printf("\nIngrese el segundo numero: ");
  scanf(" %f", & num2 );
  printf("--------------------------------------------------------------------");


  // Requisito 3: Llamar a la función operar y pasar la operación seleccionada
  resultado = arreglo[opcion-1](num1, num2);

  // Alternativa
  resultado = (*arreglo[opcion-1])(num1,num2)

  switch(opcion-1){
    case 0:
      resultado = operar (suma, num1, num2);
      break;
    case 1:
      resultado = operar (resta, num1, num2);
      break;
    case 2:
      resultado = operar (division, num1, num2);
      break;
    case 3:
      resultado = operar (multiplicacion, num1, num2);
      break;
  }

  // Requisito 4: Imprimir el resultado
  printf("\nEl resultado de la operación es: %.2f\n", resultado);

  return 0;
}

int ingresar_opcion (){
  int op;

  printf("Ingrese la operacion a realizar:\n (1) _ Suma. \n (2) _ Resta. \n (3) _ Division. \n (4) _ Multiplicacion. \n  \n");
  scanf("%d", &op);

  return op;
}

float operar(float (*operacion)(float, float), float num1, float num2){

  return operacion(num1, num2);
  // Alternativa
  // return (*operacion)(num1, num2);
}

float suma(float num1, float num2){
  return num1 + num2;
}

float resta(float num1, float num2){
  return num1 - num2;
}

float division(float num1, float num2){
  return num1 / num2;
}

float multiplicacion(float num1, float num2){
  return num1 * num2;
}

