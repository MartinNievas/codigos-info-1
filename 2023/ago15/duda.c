#include <stdio.h>

int main(void) {
  int dato_i;
  char dato_c;
  short dato_s;

  printf("%ld\n", sizeof(dato_c));
  printf("%ld\n", sizeof(dato_i));
  printf("%ld\n", sizeof(dato_s));

  return 0;
}
