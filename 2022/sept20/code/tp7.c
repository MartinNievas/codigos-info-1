#include <stdio.h>



int main(void) {

  char *frases[] = {
    "Punteros",
    "Funciones",
  };

  for (int i = 0; i < 2; i++){
    printf("%s\n", frases[i]);
  }

  switch(rand() %4 ){
  case 0: printf("Vamos!\n"); break;
  case 1: printf("Vamos2 !\n"); break;
  case 2: printf("Vamosss!\n"); break;
  }

  return 0;
}
