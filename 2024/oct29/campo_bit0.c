#include <stdio.h>

// Se declaran de forma similar a una estructura
// notar que los miembros tienen :
typedef struct{
  unsigned char b0:1;
  unsigned char b1:1;
  unsigned char b2:1;
  unsigned char b3:1;
}campo_bits;

// Armar una estructura para almacenar con campos de bits
// Numeros del -1,1
// Numeros del -2,2
// Numeros del 0,5
// Con la menor cantidad de bits posible

int main(void)
{

  campo_bits mis4bits;

  mis4bits.b0 = 3;
  mis4bits.b1 = 0;
  mis4bits.b2 = 1;
  mis4bits.b3 = 1;

  printf("%u_%u_%u_%u\n",  mis4bits.b0, mis4bits.b1,
                        mis4bits.b2, mis4bits.b3);

  return 0;
}
