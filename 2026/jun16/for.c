#include <stdio.h>


int main(void) {

  int i;
  for (i = 1; i < 11; i++){
    printf("%d*%d = %d\n", i, 8, i*8);
  }
  printf("afuera: %d\n", i);

  return 0;
}
