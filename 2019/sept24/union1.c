// Fig. 10.9: fig10_09.c
// Using the bitwise AND, bitwise inclusive OR, bitwise
// exclusive OR and bitwise complement operators

#include <stdio.h>

void displayBits(unsigned int value); // prototype

int main(void)
{
  // AND (&)
  unsigned int number1 = 65535;
  unsigned int mask = 1;

  puts("El resultado de combinar:");
  displayBits(number1);
  displayBits(mask);
  puts("con el operador AND & es");
  displayBits( number1 & mask );

  // OR (|)
  number1 = 15;
  unsigned int setBits = 241;

  puts("\nEl resultado de combinar:");
  displayBits(number1);
  displayBits(setBits);
  puts("con el operador OR | es");
  displayBits( number1 | setBits );

  // XOR (^)
  number1 = 139;
  unsigned int number2 = 199;
  puts("\nEl resultado de combinar:");
  displayBits(number1);
  displayBits(number2);
  puts("con el operador XOR ^ es");
  displayBits( number1 ^ number2 );

  // complemento (~)
  number1 = 21845;
  puts("\nComplemento:");
  displayBits(number1);
  puts("es");
  displayBits( ~number1 );
}

// display bits of an unsigned int value
void displayBits(unsigned int value)
{
  // declare displayMask and left shift 31 bits
  unsigned int displayMask = 1 << 31;
  printf("%10u = ", value);

  // loop through bits
  for (unsigned int c = 1; c <= 32; ++c) {
    putchar(value & displayMask ? '1' : '0');
    value <<= 1; // shift value left by 1
    if (c % 8 == 0) { // output a space after 8 bits
      putchar(' ');
    }
  }
  putchar('\n');
}
