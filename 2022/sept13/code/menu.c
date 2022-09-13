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
  num = rand() % 4;

  // imprimir frase aleatoria con switch
  //
  // Cambiamos el switch por el printf

  return 0;
}
