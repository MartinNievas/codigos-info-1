#include <stdio.h>

int main(void) {

  float cont = 0.;

  while (cont < 10){
    printf("Contador vale: %.15f\n", cont);
    cont += 0.1;
  }

  return 0;
}
