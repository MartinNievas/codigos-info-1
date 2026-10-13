#include <stdio.h>


int main(void) {

  int *parr;
  int arr[10] = {0};
  parr = arr;


  for (int i = 0; i < 10; i++){
    printf("%d\n", parr[i]);
  }

  return 0;
}
