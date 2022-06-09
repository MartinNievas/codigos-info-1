#include <stdio.h>

int main(void) {

  int i = 0;

  for (;; ){
    printf("%d ", i);
    i+=10000;
  }
  printf("%d\n",i);

  return 0;
}
