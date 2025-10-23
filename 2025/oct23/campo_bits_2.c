#include <stdio.h>

struct campobits{
  unsigned int c0:1;
  unsigned int c1:1;
  unsigned int c2:1;
  unsigned int c3:1;
  unsigned int c4:1;
  unsigned int c5:1;
  unsigned int c6:1;
  unsigned int c7:1;
};

typedef union {
  char num;
  struct campobits campo;
}dato_u;

int main() {

  dato_u dato;
  dato.campo.c7 = 1;

  printf("dato.num: %u\n", dato.num);

  return 0;
}
