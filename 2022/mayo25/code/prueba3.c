#include <stdio.h>

int main(void) {

  if (printf("") && printf("segunda") ){
    printf("Se cumple\n");
  } else {
    printf("No se cumple\n");
  }

  return 0;
}
