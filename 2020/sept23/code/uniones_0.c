#include <stdio.h>
// Unidad 10

// https://www.h-schmidt.net/FloatConverter/IEEE754.html
// https://www.rapidtables.com/convert/number/binary-to-decimal.html

union temp_u{
  int i_temp;
  float f_temp;
};

union numero{
  int dni;
  union temp_u temp_pers;
};

int main(void)
{

  union temp_u temperatura;
  union numero persona;

  persona.tempeartura_persona.i_temp = 10;

  printf("%d\n", persona.dni);

  return 0;
}
