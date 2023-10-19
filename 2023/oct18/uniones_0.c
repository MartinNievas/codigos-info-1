#include <stdio.h>
// Unidad 10

// https://www.h-schmidt.net/FloatConverter/IEEE754.html
// https://www.rapidtables.com/convert/number/binary-to-decimal.html

union temp_u{
  int i_temp;
  float f_temp;
};

int main(void)
{

  union temp_u temperatura;

  printf("Asigno la parte entera\n");
  temperatura.i_temp = 10;
  printf("Valor de i_temp: %d\n", temperatura.i_temp);
  printf("Valor de f_temp: %.50f\n", temperatura.f_temp);

  printf("\nAsigno la parte decimal\n");
  temperatura.f_temp = 0.234;
  printf("Valor de i_temp: %d\n", temperatura.i_temp);
  printf("Valor de f_temp: %.50f\n", temperatura.f_temp);

  return 0;
}
