#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 30

int main(void) {
  srand(time(NULL));

  int num = rand();

  for (i = 0; i < TAM; i++){
    arreglo[i] = rand() % 10 + 1;
  }

  for (i = 0; i < TAM; i++){
    printf("%d:%d\n", i, arreglo[i]);
  }

  printf("%d\n", num);
  // Entre 25 y 40
  printf("%d\n", num%5+1);
  // num%intervalo+min

  return 0;

}
