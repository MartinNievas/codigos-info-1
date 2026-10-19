#include <stdio.h>

int suma(int a, int b){
  return a + b;
}

int main(void) {
  int arr[10];
  int* parr;
  parr = arr;
  printf("Arreglo: %d\n", *parr);
  printf("Arreglo: %d\n", parr[0]);

  int (*pfun)(int, int);
  pfun = suma;

  printf("%d\n", suma(10,1));
  printf("%d\n", pfun(10,1));
  printf("%d\n", (*pfun)(10,1));


  return 0;
}
