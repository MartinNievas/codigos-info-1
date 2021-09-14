#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {


  int num;
  char *frases[10] = {
  "Seguí así",
  "Bien ahí",
  "Felicitaciones!",
  "Seguí así man"
  };

  srand(time(NULL));

  num = rand() % 4;

  switch(num){
  case 0: printf("Seguí así\n"); break;
  case 1: printf("Bien ahí\n"); break;
  case 2: printf("Felicitaciones!\n"); break;
  case 3: printf("Seguí así man\n"); break;
  }

  printf("%s\n", frases[num]);

  return 0;
}
