#include <stdio.h>

int main(void) {

  int valores[1l<<20] = {0};

  printf("tamaño: %lu\n", 1l<<30);
  for (unsigned long int i = 0; i < 1l<<20; i++){
    valores[i] = i;
  printf("%d\n", valores[i]);
  }

  while (1){
  }


  return 0;
}
