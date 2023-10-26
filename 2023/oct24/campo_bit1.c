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

int main(void)
{

  union byte_u miByte;

  miByte.campo.b4 = 1; // 2^bit

  printf("num: %d\n", miByte.num);


  return 0;
}
