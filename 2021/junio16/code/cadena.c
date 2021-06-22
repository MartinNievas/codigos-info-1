#include <stdio.h>
#define TAM 100

int main(void) {

  char palabra[TAM] = {"Hola como están?"};

  printf("%s\n", palabra);

  for (int i = 0; i < TAM; i++){
    printf("%c\n", palabra[i]);
  }

  return 0;
}
