#include <stdio.h>

// Se declaran de forma similar a una estructura
// notar que los miembros tienen :
typedef struct{
  unsigned char b0:4;
  unsigned char b1:8;
  unsigned char b2:8;
  unsigned char b3:6;
}campo_bits;

int main(void)
{

  campo_bits mis4bits;

  mis4bits.b0 = -1;
  mis4bits.b1 = 0;
  mis4bits.b2 = 1;
  mis4bits.b3 = 1;

  printf("%u_%u_%u_%u\n",  mis4bits.b0, mis4bits.b1,
                        mis4bits.b2, mis4bits.b3);

  return 0;
}
