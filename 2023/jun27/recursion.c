#include <stdio.h>

int main(void) {

  static int i = 0;
  printf("%d\n", i++);
  main();

  return 0;
}
