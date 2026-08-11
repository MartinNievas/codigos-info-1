#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int num;
  srand(time(NULL));

  num = rand()%101;
  printf("random: %d\n", num);

  return 0;
}
