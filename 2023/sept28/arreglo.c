#include <stdio.h>

int main(void) {

  int arreglo[10] = {1,2,3,4,5,6,7,8,9,0};
  int *parreglo;

  parreglo = &arreglo[0];

  for (int i = 0; i < 10; i++){
    printf("%p\n", parreglo+i);
  }

  return 0;
}
