#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int num;

  for (int i = 0; i < 10; i++){
    num = rand();
    printf("%d\n", num);
  }

  return 0;
}
