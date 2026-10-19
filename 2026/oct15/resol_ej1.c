// samu ejercicio 1
#include <stdio.h>

float cociente(int a, int b)
{
  return a / (float)b;
}

float sumar(int a, int b)
{
  return a + b;
}

float restar(int a, int b)
{
  return a - b;
}


float multiplicar(int a, int b)
{
  return a * b;
}

int main(void)
{
  int a, b;
  int opcion;
  float resultado;

  float (*fp[5])(int, int) = {NULL,
    sumar, restar, multiplicar, cociente
  };
  printf("Ingrese dos numeros enteros: ");
  scanf("%d %d", &a, &b);

  printf("\nSeleccione una operacion:\n");
  printf("1. Sumar\n");
  printf("2. Restar\n");
  printf("3. Multiplicar\n");
  printf("4. Cociente\n");
  printf("Opcion: ");
  scanf("%d", &opcion);

  resultado = fp[opcion](a,b);

  printf("Resultado: %f\n", resultado);

  return 0;

  //Ejercicio 1 Maxi

#include <stdio.h>

  float cociente(int a, int b)
  {
    return a/b;
  }

  float sumar(int a, int b)
  {return a+b;
  }

  float restar(int a, int b)
  {return a-b;
  }


  float multiplicar(int a, int b)
  {return a*b;
  }

  int main(void)
  {
    int a, b;
    int opcion;
    float resultado;
    float (*operacion)(int, int);
    // COMPLETAR: declarar un puntero a funcion
    // compatible con las cuatro operaciones
    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &a, &b);

    printf("\nSeleccione una operacion:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Cociente\n");
    printf("Opcion: ");
    scanf(" %d", &opcion);

    switch(opcion){
      case 1:
        operacion = sumar;
        break;
      case 2:
        operacion = restar;
        break;
      case 3:
        operacion = multiplicar;
        break;
      case 4:
        operacion = cociente;
        break;
      default:
        printf("\nOpcion invalida");
        return 1;
        break;
    }

    resultado = operacion(a, b);


    printf("Resultado: %f\n", resultado);

    return 0;
  }

  //samu ejercicio 2
#include <stdio.h>

  int cuadrado(int n)
  {
    return n * n;
  }

  int doble(int n)
  {
    return 2 * n;
  }

  void procesarVector( int vector[], int cantidad, int (*operacion)(int) )
  {
    int i;

    for (i = 0; i < cantidad; i++)
    {
      printf("resultado del elemento[%d]: %d\n", i+1, operacion(vector[i]));
    }
    printf("\n");
  }

  int main(void)
  {
    int vector[] = {2, 4, 6, 8, 10};
    int cantidad = 5;

    printf("Cuadrados:\n");
    procesarVector(vector, cantidad, cuadrado);

    printf("Dobles:\n");
    procesarVector(vector, cantidad, doble);

    return 0;
  }


  //Ejercici/o 2 Maxi
#include <stdio.h>

  int cuadrado(int n)
  {
    return n*n;
  }


  int doble(int n)
  {
    return 2*n;
  }

  void procesarVector( int vector[], int cantidad,int (*operacion)(int)){

    for (int i = 0; i < cantidad; i++)
    {
      printf("%d \n", operacion(vector[i]));
    }

    printf("\n");
  }

  int main(void)
  {
    int vector[] = {2, 4, 6, 8, 10};
    int cantidad = 5;
    int (*operacion)(int);
    printf("Cuadrados:\n");
    operacion = cuadrado;
    procesarVector(vector, cantidad, operacion);



    printf("Dobles:\n");
    operacion = doble;
    procesarVector(vector, cantidad, operacion);


    return 0;
  }
  ///////////////////////////////////////// pichi
#include <stdio.h>

  float cociente(int a, int b)
  {
    return (float)a/b;
  }

  float sumar(int a, int b)
  {
    return (float)a+b;
  }

  float restar(int a, int b)
  {
    return (float)a-b;
  }	

  float multiplicar(int a, int b)
  {
    return (float)a*b;
  }

  int main(void)
  {
    int a, b;
    int opcion;
    float resultado;
    float (*operacion)(int, int);


    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &a, &b);

    printf("\nSeleccione una operacion:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Cociente\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    switch(opcion){
      case 1:
        operacion = sumar;
        break;
      case 2:
        operacion = restar;
        break;
      case 3:
        operacion = multiplicar;
        break;
      case 4:
        operacion = cociente;
        break;	
      default:
        printf("no exite esa opcion");
        break;
    }

    resultado = operacion(a,b);
    printf("Resultado: %.2f\n", resultado);

    return 0;
  } // grupo ciro y los persas
#include <stdio.h>
  // Calculadora con punteros a funciones
  // Objetivo: utilizar un puntero a función para seleccionar y ejecutar una operación matemática.
  // Enunciado
  // Desarrollar un programa en C que permita realizar operaciones matemáticas entre dos números enteros.
  // El programa debe implementar las siguientes funciones:
  // - sumar(a, b): devuelve la suma.
  // - restar(a, b): devuelve la resta.
  // - multiplicar(a, b): devuelve el producto.
  // El usuario debe ingresar dos números y seleccionar una operación mediante un menú.
  // El programa debe utilizar un puntero a función para ejecutar la operación seleccionada

  float cociente(int a, int b){
    return a / b;
  }
  float sumar(int a, int b){
    return a + b;
  }
  float restar(int a, int b){
    return a - b;
  }
  float multiplicar(int a, int b){
    return a * b;
  }
  int main(void) {
    int a, b;
    int opcion;
    float resultado;
    float (*p)(int,int);
    // COMPLETAR: declarar un puntero a funcion
    // compatible con las cuatro operaciones
    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &a, &b);

    printf("\nSeleccione una operacion:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Cociente\n");
    printf("Opcion: ");
    scanf("%d", &opcion);
    switch(opcion){
      case 1:
        p = sumar;
        break;
      case 2:
        p = restar;
        break;
      case 3:
        p = multiplicar;
        break;
      case 4:
        p = cociente;
    }
    // Completar
    // Asignar puntero a función correspondiente
    resultado = (*p)(a,b);
    // Completar
    // Utilizar el puntero para obtener el resultado de la función

    printf("Resultado: %.2f\n", resultado);

    return 0;
  }

  //////////////////////////////////////////////////////

  //Yol

#include <stdio.h>


  float cociente(int a, int b)
  { return (float)a / b;
  }

  float sumar(int a, int b)
  { return a+b;
  }

  float restar(int a, int b)
  { return a-b;
  }


  float multiplicar(int a, int b)
  { return a*b;
  }

  int main(void)
  {
    int a, b;
    int opcion;
    float resultado;

    // COMPLETAR: declarar un puntero a funcion
    // compatible con las cuatro operaciones

    float (*operacion)(int,int);

    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &a, &b);

    printf("\nSeleccione una operacion:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Cociente\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    // Completar
    // Asignar puntero a función correspondiente
    switch(opcion){

      case 1:
        operacion = sumar;
        break;

      case 2:
        operacion = restar;
        break;

      case 3:
        operacion = multiplicar;
        break;

      case 4:
        operacion = cociente;
        break;
    }

    // Completar
    // Utilizar el puntero para obtener el resultado de la función

    resultado = operacion(a,b);

    printf("Resultado: %f\n", resultado);

    return 0;
  }
