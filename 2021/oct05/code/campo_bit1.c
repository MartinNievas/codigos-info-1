#include <stdio.h>
// Primero ver uniones

typedef struct{
  unsigned char b0:1;
  unsigned char b1:1;
  unsigned char b2:1;
  unsigned char b3:1;
  unsigned char b4:1;
  unsigned char b5:1;
  unsigned char b6:1;
  unsigned char b7:1;
}campo_bits;

// Dentro de la unión tengo un campo de bits y un char
// Ambos de 8 bits - 1 byte
union byte_u {
  campo_bits campo;
  char num;
};

// campo.b0 num 0
// campo.b1 num 1
// campo.b2 num 2
// campo.b3 num 3
// campo.b4 num 4
// campo.b5 num 5
// campo.b6 num 6
// campo.b7 num 7
//
// num = 00000100 = 4

int main(void)
{

  union byte_u miByte;

  miByte.campo.b2 = 1;

  printf("num: %d\n", miByte.num);


  return 0;
}
