#include <stdio.h>
// Realizar desplazamiento hacia la izquierda por un bit es equivalente a multiplicar por 2
// Escribir una función que realice la operación:
// num * 2^pow
//
// Utilizar el operador de desplazamiento lógico para calcular el resultado


unsigned int pow2(unsigned int num, unsigned int pow);

int main(void) {

  unsigned int a = 10;
  unsigned int b = 3;
  unsigned int c;

  c = pow2(a, b);

  printf("%lu\n", c);


  return 0;
}
