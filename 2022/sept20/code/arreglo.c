#include <stdio.h>

int main(void) {

  int arreglo[]={1,2,3,42,52,5,23,2};

  printf("%ld\n", sizeof arreglo/sizeof(arreglo[0]));

  return 0;
}
