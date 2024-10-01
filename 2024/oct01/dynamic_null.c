#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {

  int *pvar;

  pvar = calloc(100);

  realloc(pvar, 200);

  if (pvar == NULL){
    printf("Es null\n");
  } else {
    printf("Pedí memoria\n");
  }

  return 0;
}
