#include <stdio.h>

int main(void) {

  int arreglo[10] = {0};

  for (int i = 0; i < 10; i++)
    printf("%d\n", arreglo[i]);

  for (int i = 0; i < 10; i++)
    printf("%p\n", &arreglo[i]);

  return 0;
}
