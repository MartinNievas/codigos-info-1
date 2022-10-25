#include <stdio.h>
int mystery(unsigned int bits); // prototipo

int main(void) {
  unsigned int x;
  puts("Enter an integer: ");
  scanf("%u", &x);
  printf("The result is %d\n", mystery(x));
}

int mystery(unsigned int bits)
{
  unsigned int mask = 1 << 31;
  unsigned int total = 0;
  for (unsigned int i = 1; i <= 32; ++i, bits <<= 1) {
    if ((bits & mask) == mask) {
      ++total;
    }
  }
  return !(total % 2) ? 1 : 0;
}
