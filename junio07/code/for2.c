#include <stdio.h>

int main(void) {

  int i, j;

  for (i = 10, j= 0; i >= 0 && j < 1000; i--, j+=100){
    printf("%d\n", i);
  }

  /** for (i = 0; i != 10; i++){ */
  /**   printf("%d\n", i); */
  /** } */

  return 0;
}
