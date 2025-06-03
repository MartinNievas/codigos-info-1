#include <stdio.h>

int main(void) {
  int j;

  for (int i = 0, j = 300 ; i < 10; i++, j--){
    printf("i:%d j: %d\n", i, j);
  }

  return 0;
}
