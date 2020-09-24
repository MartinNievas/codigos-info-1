#include <stdio.h>

typedef struct{
  unsigned char b0:1;
  unsigned char b1:1;
  unsigned char b2:1;
  unsigned char b3:1;
}campo_bits;

int main(void)
{

  campo_bits mis4bits;

  mis4bits.b0 = 0;
  mis4bits.b1 = 1;
  mis4bits.b2 = 0;
  mis4bits.b3 = 0;

  printf("%u%u%u%u\n",  mis4bits.b3, mis4bits.b2,
                        mis4bits.b1, mis4bits.b0);

  return 0;
}
