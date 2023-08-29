#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20000

int main(void) {

  int a[N];
  srand(time(NULL));

  // Cargar los elementos en el arreglo
  for (int i = 0; i < N; i++){
    a[i] = rand() % 100000;
  }

  // Ordenar los elementos en el arreglo
  for(int i=0;i<N;i++){
    for(int j=0;j<N-1;j++){
      if(a[j]<a[j+1]){
        int temp;
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }

  printf("El mayor del arreglo es: %d", a[0]);

  // Imprimir el mayor elemento
  return 0;
}
