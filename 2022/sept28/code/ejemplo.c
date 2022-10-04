#include <stdio.h>


int main(void) {

  int a = 100;
  int* pa;

  printf("%p\n", &*pa);
  printf("%p\n", *&pa);
  printf("%p\n", pa);
  return 0;
}
