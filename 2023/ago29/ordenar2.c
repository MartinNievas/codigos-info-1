#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20000

int main(void) {

  int a[N], mayor;
  srand(time(NULL));

  // Cargar los elementos en el arreglo
  for (int i = 0; i < N; i++){
    a[i] = rand() % 100000;
  }

  mayor = a[0];


  for (int i = 0; i < N; i++){
    for (int j = 0; j < N-1; j++){
      if (a[j] > a[i]){
        int temp = a[i];
        a[i] = a[j];
        a[j] = a[i];
      }
    }
  }


  return 0;
}
