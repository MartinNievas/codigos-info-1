#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Random mal

int main(void) {

  int num;

  srand(time(NULL));
  printf("semilla: %ld\n", time(NULL));

  for (int i = 0; i < 10; i++){
    num = rand();
    printf("%d\n", num);
  }

  return 0;
}
