#include <stdio.h>

int main(void) {

  int arreglo[10] = {0};
  int *pnum = arreglo;

  for (int i = 0; i < 10; i++){
    printf("%p\n", pnum);
    pnum++;
  }

  return 0;
}
