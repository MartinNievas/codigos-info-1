#include <stdio.h>

typedef union {
  // Acceso 1: Como un número de 32 bits (para ver el HEX)
  unsigned int i;
  // Acceso 2: Como el 'float' que queremos inspeccionar
  float f;
} FloatInspector;

int main(void) {
  FloatInspector num1;
  // Cargar float
  num1.f = 175;
  // Imprimir entero
    printf("%X\n", num1.i);

  return 0;
}

