#include <stdio.h>

int main(void) {
  //3.10
  // Ejercicio
  // Leer dos números enteros y determinar cuál es el mayor. Si son iguales, imprimir un mensaje adecuado.

  int num;

  printf("Ingrese un número: ");
  scanf("%d", &num);

  if ( num > 0)
  {
    printf("Positivo\n");
  }

  if (num < 0)
  {
    printf("Negativo\n");
  }

  return 0;
}
