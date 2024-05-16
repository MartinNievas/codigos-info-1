#include <stdio.h>

int main(void) {

  char letra1;
  char letra2;

  letra1 = getchar();
  letra2 = getchar();

  printf("Las letras ingresadas son: %c%c\n",
      letra1,
      letra2);

  return 0;
}

