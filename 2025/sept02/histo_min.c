#include <stdio.h>
#define NOTAS 15

int main(void) {

  int histograma[11] = {0};
  int notas[NOTAS] = {10,9,2,3,5,6,7,8,6,3,4,4,8,7,6};
  for (int i = 0; i < NOTAS; i++){
    printf("%d\n", notas[i]);
  }

  for (int i = 0; i < NOTAS; i++){
      histograma[notas[i]]++;
  }

  for (int i = 0; i < 10; i++){
    printf("%d:%d\n", i, histograma[i]);
  }


  return 0;
}
