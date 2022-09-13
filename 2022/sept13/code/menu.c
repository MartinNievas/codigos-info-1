#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

  int num;

  char *frases[4] = {
    "Seguí adelante\n",
    "Otro mensaje\n",
    "Otro mensaje\n",
    "Otro mensaje\n",
  };

  srand(time(NULL));

  // imprimir frase aleatoria con switch
  printf("%s\n", frases[rand()%4]);

  // Cambiamos el switch por el printf
  int op = rand()%4;
  switch(op){
  case 0:
    printf("%s\n", frases[0]);
  break;
  case 1:
    printf("%s\n", frases[1]);
  break;
  case 2:
    printf("%s\n", frases[2]);
  break;
  case 3:
    printf("%s\n", frases[3]);
  break;
  }

  return 0;
}
