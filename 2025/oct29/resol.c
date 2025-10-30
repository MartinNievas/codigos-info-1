#include <stdio.h>

int main(void) {
  int c;
  unsigned int   a=0xAAAA;//1010101010101010
  int b=0b11111111;

  c=a&b;

  //2)int |~b=11000101;
  //3)int ^b=11000101;
  //
  printf("%X",c);
  return 0;
}

