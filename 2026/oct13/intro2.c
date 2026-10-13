#include <stdio.h>

// Operaciones disponibles
int sumar(int a, int b)
{
  return a + b;
}

int multiplicar(int a, int b)
{
  return a * b;
}

// Recibe dos numeros y un puntero a funcion
int calcular( int a, int b, int (*operacion)(int, int))
{
  // Ejecutamos la funcion recibida
  return operacion(a, b);
}

int main(void)
{
  int a = 8;
  int b = 4;
  int resultado;

  // Pasamos la funcion sumar como argumento
  resultado = calcular(a, b, sumar);

  printf("Suma: %d\n", resultado);

  // Pasamos la funcion multiplicar como argumento
  resultado = calcular(a, b, multiplicar);

  printf("Multiplicacion: %d\n", resultado);

  return 0;
}
