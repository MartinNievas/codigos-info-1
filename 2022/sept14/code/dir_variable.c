#include <stdio.h>

// Paso por referencia
void incrementar(int *var){
  (*var)++;
}

// Paso por valor
void incrementar2(int x){
    x++;
}

int main(void) {

  int temp = 0;

  incrementar(&temp);

  incrementar2(temp);

  printf("%d\n", temp);

  return 0;
}
