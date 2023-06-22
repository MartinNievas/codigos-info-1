#include <stdio.h>

int main(void) {

  int i;

  i = 0;
  for ( ; ; ){
    printf("i: %d\n", i);
    i++;
  }

  return 0;
}
