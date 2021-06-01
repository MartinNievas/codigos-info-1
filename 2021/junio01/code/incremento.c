#include <stdio.h>

int main(void) {

  int i = 0;


  printf("%d\n", i);
  printf("%d\n", (i++)); // Post-incremento
  printf("%d\n", i);     // 1
  printf("%d\n", ++i);   // Pre-incremento -> 2

  // Undefined behavior
  int j = 0;
  j = j + --j;
  j += --j;
  printf("j:%d\n", j);


  return 0;
}
