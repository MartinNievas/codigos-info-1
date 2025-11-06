#include <stdio.h>

typedef union {
unsigned int valorInt ;
unsigned char bytes [4];
} InspectorBytes ;

int main(void) {

  InspectorBytes num;

  num.valorInt = 1;
  printf("%d\n", num.bytes[0]);
  printf("%d\n", num.bytes[1]);
  printf("%d\n", num.bytes[2]);
  printf("%d\n", num.bytes[3]);

  return 0;
}
