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

  // Cambiamos el switch por el printf
  printf("%s\n", frases[num]);

  /** switch(num){ */
  /** case 0: */
  /**   printf("Seguí adelante\n"); */
  /** break; */
  /** case 1: */
  /**   printf("Otro mensaje\n"); */
  /** break; */
  /** case 2: */
  /**   printf("Otro mensaje\n"); */
  /** break; */
  /** case 3: */
  /**   printf("Otro mensaje\n"); */
  /** break; */
  /** } */


  return 0;
}
