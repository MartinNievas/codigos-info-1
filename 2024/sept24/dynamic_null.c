#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {

  int *pvar;

  pvar = malloc(-1);

  if (pvar == NULL){
    printf("Es null\n");
  } else {
    printf("Pedí memoria\n");
  }

  return 0;
}
