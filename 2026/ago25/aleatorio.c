#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 30

int main(void) {

  srand(time(NULL));
  int num;
  int arreglo[TAM];

  for (int i = 0; i < 100; i++){
    num = rand()%10+1;
    arreglo[i] = num;
  }

  for (int i = 0; i < 100; i++){
    printf("%d\n", arreglo[i]);
  }

  return 0;

}
