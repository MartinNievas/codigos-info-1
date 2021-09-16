#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  int num;
  char *frases[] = {
    "Seguí así\n",
    "Bien ahí\n",
    "Felicitaciones!\n",
    "Seguí así man\n",
  };
  char *pchartemp;

  srand(time(NULL));

  num = rand() % 4;


  pchartemp = frases[1];
  frases[2] = frases[1];
  frases[2] = pchartemp;
  printf("%s\n", frases[num]);

  switch(num){
  case 0: printf("Seguí así\n"); break;
  case 1: printf("Bien ahí\n"); break;
  case 2: printf("Felicitaciones!\n"); break;
  case 3: printf("Seguí así man\n"); break;
  }

  return 0;
}




