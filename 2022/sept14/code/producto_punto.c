#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main(void) {

  srand(time(NULL));
  float a[TAM], b[TAM];

  for (int i = 0; i < TAM; i++){
    *(a+i) = (rand()%100) / (float) (rand()%100);
    *(b+i) = (rand()%100) / (float) (rand()%100);
  }

  return 0;

}
