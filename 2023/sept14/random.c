#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 10

int main(void) {

  srand(time(NULL));

  for (int i = 0; i < TAM; i++){
    int temp = rand()%101;
    printf("%d\n", temp);
  }

  return 0;
}
