#include <stdio.h>

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

union byte_u {
  campo_bits campo;
  char num;
};

int main(void)
{

  union byte_u miByte;

  miByte.campo.b0 = 1;

  printf("num: %d\n", miByte.num);


  return 0;
}
