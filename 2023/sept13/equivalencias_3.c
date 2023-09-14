#include <stdio.h>

int main(void) {

  int *pnum;
  char *pchar;

  printf("%ld\n", sizeof(int));
  printf("%ld\n", sizeof(char));
  printf("%ld\n", sizeof(pnum));
  printf("%ld\n", sizeof(pchar));

  return 0;
}
