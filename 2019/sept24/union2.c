// Fig. 10.13: fig10_13.c
// Using the bitwise shift operators
#include <stdio.h>

void displayBits(unsigned int value); // prototype

int main(void)
{
  unsigned int number1 = 960; // initialize number1

  puts("\nEl resultado de desplazar:");
  displayBits(number1);
  puts("8 << es:");
  displayBits( number1 << 8 );

  puts("\nEl resultado de desplazar:");
  displayBits(number1);
  puts("8 >> is");
  displayBits( number1 >> 8 );
}
// display bits of an unsigned int value
//
void displayBits(unsigned int value)
{
  // declare displayMask and left shift 31 bits
  unsigned int displayMask = 1 << 31;
  printf("%7u = ", value);

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
