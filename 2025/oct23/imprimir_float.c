#include <stdio.h>
#include <stdint.h> // Para uint32_t

// 1. Definimos la 'union'
typedef union {
  // Acceso 1: Como un número de 32 bits (para ver el HEX)
  uint32_t i; 

  // Acceso 2: Como el 'float' que queremos inspeccionar
  float f;

  // Acceso 3: Como una struct de campos de bits (asumiendo Little-Endian)
  struct {
    unsigned int mantissa : 23; // Bits 0-22
    unsigned int exponent : 8;  // Bits 23-30
    unsigned int sign     : 1;  // Bit 31
  } parts;

} FloatInspector;


int main() {
  FloatInspector inspector;

  // --- Prueba 1: El número 1.0 ---
  inspector.f = 1.0f;

  printf("Inspeccionando el numero: %f\n", inspector.f);
  printf("  Valor Hexadecimal: 0x%X\n", inspector.i);
  printf("  Signo    (1 bit) : %u   (0=positivo, 1=negativo)\n", inspector.parts.sign);
  printf("  Exponente(8 bits): %u   (Valor 'sesgado')\n", inspector.parts.exponent);
  printf("  Mantisa  (23 bits): %u\n", inspector.parts.mantissa);

  /* * Salida esperada para 1.0:
   * Hex: 0x3F800000
   * Signo: 0
   * Exponente: 127
   * Mantisa: 0
   */

  printf("\n");

  // --- Prueba 2: El número -2.0 ---
  inspector.f = -2.0f;

  printf("Inspeccionando el numero: %f\n", inspector.f);
  printf("  Valor Hexadecimal: 0x%X\n", inspector.i);
  printf("  Signo    (1 bit) : %u\n", inspector.parts.sign);
  printf("  Exponente(8 bits): %u\n", inspector.parts.exponent);
  printf("  Mantisa  (23 bits): %u\n", inspector.parts.mantissa);

  /* * Salida esperada para -2.0:
   * Hex: 0xC0000000
   * Signo: 1
   * Exponente: 128
   * Mantisa: 0
   */

  return 0;
}
