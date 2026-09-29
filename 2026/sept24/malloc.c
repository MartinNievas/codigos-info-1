#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int *parr;

  parr = malloc(10 * sizeof(int));

  for (int i = 0; i < 10; i++){
    parr[i] = i;
  }

  for (int i = 0; i < 10; i++){
    printf("%d ", parr[i]);
  }


  return 0;
}
