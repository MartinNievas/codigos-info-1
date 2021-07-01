#include <stdio.h>
#define TAM 10

int main(void) {
  int i, j;
  int arreglo[TAM] = {1, 20, 23, 45, 60, 63, 70, 90, 200, 340};
  int num = 200;

  for (i = 0, j = 9; i < 10; i++, j--){
    printf("i:%d j:%d\n", i, j);

    if (arreglo[i] == num || arreglo[j] == num){
      printf("Lo encontré!\n");
      break;
    } else if (i == j)
      break;
  }

  return 0;
}
