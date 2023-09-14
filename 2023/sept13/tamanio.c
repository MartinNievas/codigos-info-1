#include <stdio.h>

int main(void) {

  int arreglo[10];

  for (int i = 0; i < 10; i++){
    printf("%p\n", arreglo[i]);
  }

  return 0;
}
