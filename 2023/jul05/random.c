#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand(time(NULL));
  printf("tiempo %ld\n", time(NULL));

  printf("%d\n", rand());

  return 0;
}
