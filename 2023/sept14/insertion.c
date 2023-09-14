#include <stdio.h>
#define TAM 10

int main(void) {

  int arreglo[6] = {2,31,41,12,30,3120};
  int imax = 0, temp, max;

  for (int i = 0; i < 6; i++){
    imax = i;
    max = arreglo[i];
    for (int j = i; j < 6; j++){
      if (arreglo[j] > max){
        imax = j;
        max = arreglo[j];
      }
    }
    temp = arreglo[imax];
    arreglo[imax] = arreglo[i];
    arreglo[i] = temp;
  }

  for (int i = 0; i < 6; i++){
    printf("%d\n", arreglo[i]);
  }

  return 0;
}
